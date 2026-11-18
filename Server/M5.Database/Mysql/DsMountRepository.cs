using MySqlConnector;

namespace M5.Database.Mysql;

/// <summary>Mounts: ds_game.mount_list (one row per owned mount) and ds_game.mount_inven_info (extra slots, the selected companion mount).</summary>
public static class DsMountRepository
{
    public sealed record Mount(long MountUid, int MountId, string Nickname, int Hunger, int Fatigue, int[] Equip);
    public sealed record Inven(int ExtendedSlots, long SelectedUid);

    public static async Task<List<Mount>> ListAsync(long playerUid, CancellationToken ct = default)
    {
        var list = new List<Mount>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand(
            "SELECT mount_uid, mount_id, mount_nickname, hunger, fatigue, equip_item_ids_1, equip_item_ids_2, equip_item_ids_3 FROM ds_game.mount_list WHERE player_uid = @u ORDER BY mount_uid", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct))
            list.Add(new Mount(r.GetInt64(0), r.GetInt32(1), r.GetString(2), r.GetInt32(3), r.GetInt32(4), new[] { r.GetInt32(5), r.GetInt32(6), r.GetInt32(7) }));
        return list;
    }

    public static async Task<Inven> GetInvenAsync(long playerUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT extended_slot_count, selected_mount_uid FROM ds_game.mount_inven_info WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        return await r.ReadAsync(ct) ? new Inven(r.GetInt32(0), r.GetInt64(1)) : new Inven(0, 0);
    }

    private static async Task SaveInvenAsync(MySqlConnection conn, long playerUid, int? slots, long? selected, CancellationToken ct)
    {
        await using var cmd = new MySqlCommand(
            "INSERT INTO ds_game.mount_inven_info (player_uid, extended_slot_count, selected_mount_uid) VALUES (@u, COALESCE(@s, 0), COALESCE(@m, 0)) " +
            "ON DUPLICATE KEY UPDATE extended_slot_count = COALESCE(@s, extended_slot_count), selected_mount_uid = COALESCE(@m, selected_mount_uid)", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@s", (object?)slots ?? DBNull.Value);
        cmd.Parameters.AddWithValue("@m", (object?)selected ?? DBNull.Value);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    /// <summary>Gives the player a new mount. The first mount becomes the selected one. Returns the mount and the selected uid.</summary>
    public static async Task<(Mount Mount, long Selected)> AddAsync(long playerUid, int mountId, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        long uid;
        await using (var q = new MySqlCommand("SELECT COALESCE(MAX(mount_uid), 0) + 1 FROM ds_game.mount_list", conn))
            uid = Convert.ToInt64(await q.ExecuteScalarAsync(ct));
        await using (var ins = new MySqlCommand(
            "INSERT INTO ds_game.mount_list (player_uid, mount_uid, mount_id, mount_nickname, hunger, fatigue, equip_item_ids_1, equip_item_ids_2, equip_item_ids_3) VALUES (@u, @m, @i, '', 0, 0, 0, 0, 0)", conn))
        {
            ins.Parameters.AddWithValue("@u", playerUid);
            ins.Parameters.AddWithValue("@m", uid);
            ins.Parameters.AddWithValue("@i", mountId);
            await ins.ExecuteNonQueryAsync(ct);
        }
        var inven = await GetInvenAsync(playerUid, ct);
        long selected = inven.SelectedUid != 0 ? inven.SelectedUid : uid;
        await SaveInvenAsync(conn, playerUid, null, selected, ct);
        return (new Mount(uid, mountId, "", 0, 0, new int[3]), selected);
    }

    public static async Task SelectAsync(long playerUid, long mountUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await SaveInvenAsync(conn, playerUid, null, mountUid, ct);
    }

    public static async Task<bool> DeleteAsync(long playerUid, long mountUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("DELETE FROM ds_game.mount_list WHERE player_uid = @u AND mount_uid = @m", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@m", mountUid);
        bool deleted = await cmd.ExecuteNonQueryAsync(ct) > 0;
        if (deleted)
        {
            await using var clr = new MySqlCommand("UPDATE ds_game.mount_inven_info SET selected_mount_uid = 0 WHERE player_uid = @u AND selected_mount_uid = @m", conn);
            clr.Parameters.AddWithValue("@u", playerUid);
            clr.Parameters.AddWithValue("@m", mountUid);
            await clr.ExecuteNonQueryAsync(ct);
        }
        return deleted;
    }

    public static async Task<bool> RenameAsync(long playerUid, long mountUid, string nickname, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("UPDATE ds_game.mount_list SET mount_nickname = @n WHERE player_uid = @u AND mount_uid = @m", conn);
        cmd.Parameters.AddWithValue("@n", nickname);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@m", mountUid);
        return await cmd.ExecuteNonQueryAsync(ct) > 0;
    }

    /// <summary>Unlocks a ring-menu action (ds_game.action_function). Returns true when it was newly unlocked.</summary>
    public static async Task<bool> UnlockActionAsync(long playerUid, int actionId, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("INSERT IGNORE INTO ds_game.action_function (player_uid, action_base_id) VALUES (@u, @a)", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@a", actionId);
        return await cmd.ExecuteNonQueryAsync(ct) > 0;
    }

    public static async Task<List<int>> ActionsAsync(long playerUid, CancellationToken ct = default)
    {
        var list = new List<int>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT action_base_id FROM ds_game.action_function WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) list.Add(r.GetInt32(0));
        return list;
    }

    public static async Task<int> ExtendSlotsAsync(long playerUid, int by, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        var inven = await GetInvenAsync(playerUid, ct);
        await SaveInvenAsync(conn, playerUid, inven.ExtendedSlots + by, null, ct);
        return inven.ExtendedSlots + by;
    }
}