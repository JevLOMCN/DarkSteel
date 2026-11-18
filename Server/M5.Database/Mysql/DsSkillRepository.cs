using MySqlConnector;

namespace M5.Database.Mysql;

/// <summary>Ascender (player) skills: ds_game.player_skill (skill_type, level, acc_halo_point = halo points spent) and the halo points in ds_game.halo_point.</summary>
public static class DsSkillRepository
{
    public sealed record Skill(int SkillType, int Level, int AccHaloPoint);

    public enum Result { Ok, Duplicated, NotFound, MaxLevel, NoItems, NoHalo, NoMoney }

    public static async Task<List<Skill>> ListAsync(long playerUid, CancellationToken ct = default)
    {
        var list = new List<Skill>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT skill_type, level, acc_halo_point FROM ds_game.player_skill WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) list.Add(new Skill(r.GetInt32(0), r.GetInt32(1), r.GetInt32(2)));
        return list;
    }

    /// <summary>
    /// Learns (newLevel = 1, row must not exist) or levels up (newLevel = level + 1) in one transaction: checks and takes the items and halo points.
    /// Returns the new skill row, the remaining halo points and the remaining quantity of each item taken.
    /// </summary>
    public static async Task<(Result Result, Skill? Skill, int Halo, Dictionary<int, int> Items)> AdvanceAsync(
        long playerUid, int skillType, bool learn, int maxLevel, Func<int, (IReadOnlyList<(int Item, int Count)> Items, int Halo)> costOfLevel, CancellationToken ct = default)
    {
        var left = new Dictionary<int, int>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var tx = await conn.BeginTransactionAsync(ct);

        async Task<object?> Scalar(string sql, params (string, object)[] p)
        {
            await using var c = new MySqlCommand(sql, conn, tx);
            foreach (var (n, v) in p) c.Parameters.AddWithValue(n, v);
            return await c.ExecuteScalarAsync(ct);
        }
        async Task Exec(string sql, params (string, object)[] p)
        {
            await using var c = new MySqlCommand(sql, conn, tx);
            foreach (var (n, v) in p) c.Parameters.AddWithValue(n, v);
            await c.ExecuteNonQueryAsync(ct);
        }

        var cur = await Scalar("SELECT level FROM ds_game.player_skill WHERE player_uid = @u AND skill_type = @t FOR UPDATE", ("@u", playerUid), ("@t", skillType));
        if (learn && cur != null) return (Result.Duplicated, null, 0, left);
        if (!learn && cur == null) return (Result.NotFound, null, 0, left);
        int newLevel = learn ? 1 : Convert.ToInt32(cur) + 1;
        if (newLevel > maxLevel) return (Result.MaxLevel, null, 0, left);

        var (items, halo) = costOfLevel(newLevel);
        int haveHalo = Convert.ToInt32(await Scalar("SELECT COALESCE(MAX(halo_point), 0) FROM ds_game.halo_point WHERE player_uid = @u FOR UPDATE", ("@u", playerUid)));
        if (haveHalo < halo) return (Result.NoHalo, null, haveHalo, left);
        foreach (var (item, count) in items)
        {
            int have = Convert.ToInt32(await Scalar("SELECT COALESCE(MAX(quantity), 0) FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i FOR UPDATE", ("@u", playerUid), ("@i", item)));
            if (have < count) return (Result.NoItems, null, haveHalo, left);
            left[item] = have - count;
        }
        foreach (var (item, count) in items)
        {
            if (left[item] <= 0) await Exec("DELETE FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i", ("@u", playerUid), ("@i", item));
            else await Exec("UPDATE ds_game.item_stackable SET quantity = @q WHERE player_uid = @u AND item_id = @i", ("@q", left[item]), ("@u", playerUid), ("@i", item));
        }
        if (halo > 0) await Exec("UPDATE ds_game.halo_point SET halo_point = halo_point - @h WHERE player_uid = @u", ("@h", halo), ("@u", playerUid));
        if (learn) await Exec("INSERT INTO ds_game.player_skill (player_uid, skill_type, level, acc_halo_point) VALUES (@u, @t, 1, @h)", ("@u", playerUid), ("@t", skillType), ("@h", halo));
        else await Exec("UPDATE ds_game.player_skill SET level = @l, acc_halo_point = acc_halo_point + @h WHERE player_uid = @u AND skill_type = @t", ("@l", newLevel), ("@h", halo), ("@u", playerUid), ("@t", skillType));
        var acc = Convert.ToInt32(await Scalar("SELECT acc_halo_point FROM ds_game.player_skill WHERE player_uid = @u AND skill_type = @t", ("@u", playerUid), ("@t", skillType)));
        await tx.CommitAsync(ct);
        return (Result.Ok, new Skill(skillType, newLevel, acc), haveHalo - halo, left);
    }

    /// <summary>Reset: removes the skill, refunds the halo points spent and takes the reset cost (money and items, all or nothing).</summary>
    public static async Task<(Result Result, int Halo, long MoneyLeft, Dictionary<int, int> Items)> ResetAsync(
        long playerUid, int skillType, int moneyId, long moneyCost, IReadOnlyList<(int Item, int Count)> itemCost, bool useMoney, CancellationToken ct = default)
    {
        var left = new Dictionary<int, int>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var tx = await conn.BeginTransactionAsync(ct);
        async Task<object?> Scalar(string sql, params (string, object)[] p)
        {
            await using var c = new MySqlCommand(sql, conn, tx);
            foreach (var (n, v) in p) c.Parameters.AddWithValue(n, v);
            return await c.ExecuteScalarAsync(ct);
        }
        async Task Exec(string sql, params (string, object)[] p)
        {
            await using var c = new MySqlCommand(sql, conn, tx);
            foreach (var (n, v) in p) c.Parameters.AddWithValue(n, v);
            await c.ExecuteNonQueryAsync(ct);
        }
        var acc = await Scalar("SELECT acc_halo_point FROM ds_game.player_skill WHERE player_uid = @u AND skill_type = @t FOR UPDATE", ("@u", playerUid), ("@t", skillType));
        if (acc == null) return (Result.NotFound, 0, 0, left);
        long money = 0;
        if (useMoney)
        {
            money = Convert.ToInt64(await Scalar("SELECT COALESCE(MAX(quantity), 0) FROM ds_game.money WHERE player_uid = @u AND money_id = @m FOR UPDATE", ("@u", playerUid), ("@m", moneyId)));
            if (money < moneyCost) return (Result.NoMoney, 0, money, left);
            await Exec("UPDATE ds_game.money SET quantity = quantity - @c WHERE player_uid = @u AND money_id = @m", ("@c", moneyCost), ("@u", playerUid), ("@m", moneyId));
            money -= moneyCost;
        }
        else
        {
            foreach (var (item, count) in itemCost)
            {
                int have = Convert.ToInt32(await Scalar("SELECT COALESCE(MAX(quantity), 0) FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i FOR UPDATE", ("@u", playerUid), ("@i", item)));
                if (have < count) return (Result.NoItems, 0, money, left);
                left[item] = have - count;
            }
            foreach (var (item, _) in itemCost)
            {
                if (left[item] <= 0) await Exec("DELETE FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i", ("@u", playerUid), ("@i", item));
                else await Exec("UPDATE ds_game.item_stackable SET quantity = @q WHERE player_uid = @u AND item_id = @i", ("@q", left[item]), ("@u", playerUid), ("@i", item));
            }
        }
        await Exec("DELETE FROM ds_game.player_skill WHERE player_uid = @u AND skill_type = @t", ("@u", playerUid), ("@t", skillType));
        await Exec("UPDATE ds_game.halo_point SET halo_point = halo_point + @h WHERE player_uid = @u", ("@h", Convert.ToInt32(acc)), ("@u", playerUid));
        int halo = Convert.ToInt32(await Scalar("SELECT COALESCE(MAX(halo_point), 0) FROM ds_game.halo_point WHERE player_uid = @u", ("@u", playerUid)));
        await tx.CommitAsync(ct);
        return (Result.Ok, halo, money, left);
    }
}