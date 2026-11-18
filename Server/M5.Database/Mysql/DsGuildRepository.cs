using MySqlConnector;

namespace M5.Database.Mysql;

/// <summary>Guild storage: ds_guild.g_guild, g_guild_member and g_guild_join_request, plus the money check for creating one (ds_game.money).</summary>
public static class DsGuildRepository
{
    public sealed record Guild(long Uid, string Name, long MasterUid, string MasterNickname, string Mark, int MemberCount, long Gold, long Exp, int Level,
        int KickAuto, int RecruitType, int RecruitLevel, string RecruitMessage, string Notice, DateTime RegUtc, DateTime UpdateUtc);

    public sealed record Member(long GuildUid, long PlayerUid, int Grade, DateTime RegUtc, DateTime UpdateUtc);

    public sealed record JoinRequest(long PlayerUid, long GuildUid, int JoinType, DateTime ExpiredUtc, DateTime RegUtc);

    public enum CreateResult { Ok, NameExists, AlreadyInGuild, MoneyShort }

    private const string GuildCols =
        "guild_uid, guild_name, master_player_uid, master_nickname, mark_info, member_count, gold, exp, level, kick_auto_type, recruit_type, recruit_level, recruit_message, notice, reg_time, update_time";

    private static Guild ReadGuild(MySqlDataReader r) => new(
        r.GetInt64(0), r.GetString(1), r.GetInt64(2), r.IsDBNull(3) ? "" : r.GetString(3), r.IsDBNull(4) ? "" : r.GetString(4), r.GetInt32(5), r.GetInt64(6), r.GetInt64(7),
        r.GetInt32(8), r.GetInt32(9), r.GetInt32(10), r.GetInt32(11), r.IsDBNull(12) ? "" : r.GetString(12), r.IsDBNull(13) ? "" : r.GetString(13),
        DateTime.SpecifyKind(r.GetDateTime(14), DateTimeKind.Utc), DateTime.SpecifyKind(r.GetDateTime(15), DateTimeKind.Utc));

    private static Member ReadMember(MySqlDataReader r) => new(r.GetInt64(0), r.GetInt64(1), r.GetInt32(2),
        DateTime.SpecifyKind(r.GetDateTime(3), DateTimeKind.Utc), DateTime.SpecifyKind(r.GetDateTime(4), DateTimeKind.Utc));

    // ---- reading ----

    public static async Task<Guild?> GetAsync(long guildUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand($"SELECT {GuildCols} FROM ds_guild.g_guild WHERE guild_uid = @g AND disband_yn = 0", conn);
        cmd.Parameters.AddWithValue("@g", guildUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        return await r.ReadAsync(ct) ? ReadGuild(r) : null;
    }

    public static async Task<bool> NameExistsAsync(string name, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT 1 FROM ds_guild.g_guild WHERE guild_name = @n AND disband_yn = 0 LIMIT 1", conn);
        cmd.Parameters.AddWithValue("@n", name);
        return await cmd.ExecuteScalarAsync(ct) != null;
    }

    /// <summary>Guilds, newest first by uid (sort: 1 level, 2 members, 3 created). cursor = last uid seen, 0 for the first page.</summary>
    public static async Task<List<Guild>> ListAsync(long cursor, int size, int sort, CancellationToken ct = default)
    {
        string order = sort switch { 1 => "level DESC, guild_uid", 2 => "member_count DESC, guild_uid", _ => "guild_uid DESC" };
        var rows = new List<Guild>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand($"SELECT {GuildCols} FROM ds_guild.g_guild WHERE disband_yn = 0 ORDER BY {order} LIMIT @o, @s", conn);
        cmd.Parameters.AddWithValue("@o", (int)Math.Max(0, cursor));      // cursor is a plain offset
        cmd.Parameters.AddWithValue("@s", Math.Clamp(size <= 0 ? 20 : size, 1, 100));
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) rows.Add(ReadGuild(r));
        return rows;
    }

    public static async Task<Member?> GetMembershipAsync(long playerUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT guild_uid, player_uid, grade, reg_time, update_time FROM ds_guild.g_guild_member WHERE player_uid = @p LIMIT 1", conn);
        cmd.Parameters.AddWithValue("@p", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        return await r.ReadAsync(ct) ? ReadMember(r) : null;
    }

    public static async Task<List<Member>> MembersAsync(long guildUid, CancellationToken ct = default)
    {
        var rows = new List<Member>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT guild_uid, player_uid, grade, reg_time, update_time FROM ds_guild.g_guild_member WHERE guild_uid = @g ORDER BY grade, reg_time", conn);
        cmd.Parameters.AddWithValue("@g", guildUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) rows.Add(ReadMember(r));
        return rows;
    }

    // ---- creating ----

    /// <summary>
    /// Creates a guild with <paramref name="masterUid"/> as master. The money (copper by default, from Common/GuildData CreateMoney*) is taken in the same
    /// transaction. Returns the guild and the new money total.
    /// </summary>
    public static async Task<(CreateResult Result, Guild? Guild, Member? Member, long MoneyLeft)> CreateAsync(long masterUid, string masterNickname, string name, string mark,
        int recruitType, int recruitLevel, string recruitMessage, string notice, int moneyId, long cost, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var tx = await conn.BeginTransactionAsync(ct);
        async Task<object?> Scalar(string sql, params (string, object)[] ps)
        {
            await using var cmd = new MySqlCommand(sql, conn, tx);
            foreach (var (n, v) in ps) cmd.Parameters.AddWithValue(n, v);
            return await cmd.ExecuteScalarAsync(ct);
        }
        async Task Exec(string sql, params (string, object)[] ps)
        {
            await using var cmd = new MySqlCommand(sql, conn, tx);
            foreach (var (n, v) in ps) cmd.Parameters.AddWithValue(n, v);
            await cmd.ExecuteNonQueryAsync(ct);
        }

        if (await Scalar("SELECT 1 FROM ds_guild.g_guild_member WHERE player_uid = @p LIMIT 1 FOR UPDATE", ("@p", masterUid)) != null)
        { await tx.RollbackAsync(ct); return (CreateResult.AlreadyInGuild, null, null, 0); }
        if (await Scalar("SELECT 1 FROM ds_guild.g_guild WHERE guild_name = @n AND disband_yn = 0 LIMIT 1 FOR UPDATE", ("@n", name)) != null)
        { await tx.RollbackAsync(ct); return (CreateResult.NameExists, null, null, 0); }

        long moneyLeft = 0;
        if (cost > 0)
        {
            var have = await Scalar("SELECT quantity FROM ds_game.money WHERE player_uid = @u AND money_id = @m FOR UPDATE", ("@u", masterUid), ("@m", moneyId));
            if (have == null || Convert.ToInt64(have) < cost) { await tx.RollbackAsync(ct); return (CreateResult.MoneyShort, null, null, have == null ? 0 : Convert.ToInt64(have)); }
            await Exec("UPDATE ds_game.money SET quantity = quantity - @c WHERE player_uid = @u AND money_id = @m", ("@c", cost), ("@u", masterUid), ("@m", moneyId));
            moneyLeft = Convert.ToInt64(await Scalar("SELECT quantity FROM ds_game.money WHERE player_uid = @u AND money_id = @m", ("@u", masterUid), ("@m", moneyId)));
        }

        long uid = Convert.ToInt64(await Scalar("SELECT COALESCE(MAX(guild_uid), 0) + 1 FROM ds_guild.g_guild"));
        var now = DateTime.UtcNow;
        await Exec("INSERT INTO ds_guild.g_guild (guild_uid, guild_name, master_player_uid, master_nickname, mark_info, member_count, gold, exp, level, disband_yn, disband_time, kick_auto_type, recruit_type, recruit_level, recruit_message, notice, reg_time, update_time) " +
                   "VALUES (@g, @n, @m, @mn, @mk, 1, 0, 0, 1, 0, '1970-01-01 00:00:01', 0, @rt, @rl, @rm, @no, @t, @t)",   // disband_time has no default; the epoch means "never disbanded"
            ("@g", uid), ("@n", name), ("@m", masterUid), ("@mn", masterNickname), ("@mk", mark), ("@rt", recruitType), ("@rl", recruitLevel), ("@rm", recruitMessage), ("@no", notice), ("@t", now));
        await Exec("INSERT INTO ds_guild.g_guild_member (guild_uid, player_uid, grade, reg_time, update_time) VALUES (@g, @p, 1, @t, @t)", ("@g", uid), ("@p", masterUid), ("@t", now));
        await tx.CommitAsync(ct);
        return (CreateResult.Ok, await GetAsync(uid, ct), new Member(uid, masterUid, 1, now, now), moneyLeft);
    }

    // ---- membership ----

    /// <summary>Adds a member (grade 4 = normal member) and bumps the member count. False when the player already has a guild.</summary>
    public static async Task<bool> AddMemberAsync(long guildUid, long playerUid, int grade, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var tx = await conn.BeginTransactionAsync(ct);
        await using (var chk = new MySqlCommand("SELECT 1 FROM ds_guild.g_guild_member WHERE player_uid = @p LIMIT 1 FOR UPDATE", conn, tx))
        {
            chk.Parameters.AddWithValue("@p", playerUid);
            if (await chk.ExecuteScalarAsync(ct) != null) { await tx.RollbackAsync(ct); return false; }
        }
        await using (var ins = new MySqlCommand("INSERT INTO ds_guild.g_guild_member (guild_uid, player_uid, grade, reg_time, update_time) VALUES (@g, @p, @r, @t, @t)", conn, tx))
        {
            ins.Parameters.AddWithValue("@g", guildUid); ins.Parameters.AddWithValue("@p", playerUid); ins.Parameters.AddWithValue("@r", grade); ins.Parameters.AddWithValue("@t", DateTime.UtcNow);
            await ins.ExecuteNonQueryAsync(ct);
        }
        await using (var upd = new MySqlCommand("UPDATE ds_guild.g_guild SET member_count = (SELECT COUNT(*) FROM ds_guild.g_guild_member WHERE guild_uid = @g), update_time = @t WHERE guild_uid = @g", conn, tx))
        {
            upd.Parameters.AddWithValue("@g", guildUid); upd.Parameters.AddWithValue("@t", DateTime.UtcNow);
            await upd.ExecuteNonQueryAsync(ct);
        }
        await tx.CommitAsync(ct);
        return true;
    }

    public static async Task RemoveMemberAsync(long guildUid, long playerUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using (var del = new MySqlCommand("DELETE FROM ds_guild.g_guild_member WHERE guild_uid = @g AND player_uid = @p", conn))
        {
            del.Parameters.AddWithValue("@g", guildUid); del.Parameters.AddWithValue("@p", playerUid);
            await del.ExecuteNonQueryAsync(ct);
        }
        await using var upd = new MySqlCommand("UPDATE ds_guild.g_guild SET member_count = (SELECT COUNT(*) FROM ds_guild.g_guild_member WHERE guild_uid = @g), update_time = @t WHERE guild_uid = @g", conn);
        upd.Parameters.AddWithValue("@g", guildUid); upd.Parameters.AddWithValue("@t", DateTime.UtcNow);
        await upd.ExecuteNonQueryAsync(ct);
    }

    public static async Task SetMemberGradeAsync(long guildUid, long playerUid, int grade, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("UPDATE ds_guild.g_guild_member SET grade = @r, update_time = @t WHERE guild_uid = @g AND player_uid = @p", conn);
        cmd.Parameters.AddWithValue("@r", grade); cmd.Parameters.AddWithValue("@t", DateTime.UtcNow); cmd.Parameters.AddWithValue("@g", guildUid); cmd.Parameters.AddWithValue("@p", playerUid);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    /// <summary>Hands the guild to another member: new master gets grade 1, the old one becomes a normal member.</summary>
    public static async Task DelegateMasterAsync(long guildUid, long oldMasterUid, long newMasterUid, string newMasterNickname, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var tx = await conn.BeginTransactionAsync(ct);
        async Task Exec(string sql, params (string, object)[] ps)
        {
            await using var cmd = new MySqlCommand(sql, conn, tx);
            foreach (var (n, v) in ps) cmd.Parameters.AddWithValue(n, v);
            await cmd.ExecuteNonQueryAsync(ct);
        }
        await Exec("UPDATE ds_guild.g_guild_member SET grade = 1, update_time = @t WHERE guild_uid = @g AND player_uid = @n", ("@t", DateTime.UtcNow), ("@g", guildUid), ("@n", newMasterUid));
        await Exec("UPDATE ds_guild.g_guild_member SET grade = 4, update_time = @t WHERE guild_uid = @g AND player_uid = @o", ("@t", DateTime.UtcNow), ("@g", guildUid), ("@o", oldMasterUid));
        await Exec("UPDATE ds_guild.g_guild SET master_player_uid = @n, master_nickname = @nn, update_time = @t WHERE guild_uid = @g", ("@n", newMasterUid), ("@nn", newMasterNickname), ("@t", DateTime.UtcNow), ("@g", guildUid));
        await tx.CommitAsync(ct);
    }

    public static async Task DisbandAsync(long guildUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        foreach (var sql in new[]
        {
            "DELETE FROM ds_guild.g_guild_member WHERE guild_uid = @g",
            "DELETE FROM ds_guild.g_guild_join_request WHERE guild_uid = @g",
            "DELETE FROM ds_guild.g_guild WHERE guild_uid = @g",
        })
        {
            await using var cmd = new MySqlCommand(sql, conn);
            cmd.Parameters.AddWithValue("@g", guildUid);
            await cmd.ExecuteNonQueryAsync(ct);
        }
    }

    // ---- settings ----

    public static async Task UpdateAsync(long guildUid, string? name, string? mark, int? kickAuto, int? recruitType, int? recruitLevel, string? recruitMessage, string? notice, CancellationToken ct = default)
    {
        var sets = new List<string> { "update_time = @t" };
        var cmdParams = new List<(string, object)> { ("@t", DateTime.UtcNow), ("@g", guildUid) };
        void Add(string col, string p, object? v) { if (v != null) { sets.Add($"{col} = {p}"); cmdParams.Add((p, v)); } }
        Add("guild_name", "@name", name); Add("mark_info", "@mark", mark); Add("kick_auto_type", "@ka", kickAuto); Add("recruit_type", "@rt", recruitType);
        Add("recruit_level", "@rl", recruitLevel); Add("recruit_message", "@rm", recruitMessage); Add("notice", "@no", notice);
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand($"UPDATE ds_guild.g_guild SET {string.Join(", ", sets)} WHERE guild_uid = @g", conn);
        foreach (var (n, v) in cmdParams) cmd.Parameters.AddWithValue(n, v);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    // ---- join requests ----

    public static async Task AddRequestAsync(long playerUid, long guildUid, int joinType, TimeSpan lifetime, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        var now = DateTime.UtcNow;
        await using var cmd = new MySqlCommand(
            "INSERT INTO ds_guild.g_guild_join_request (player_uid, guild_uid, join_type, expired_time, reg_time, update_time) VALUES (@p, @g, @j, @e, @t, @t) " +
            "ON DUPLICATE KEY UPDATE join_type = @j, expired_time = @e, update_time = @t", conn);
        cmd.Parameters.AddWithValue("@p", playerUid); cmd.Parameters.AddWithValue("@g", guildUid); cmd.Parameters.AddWithValue("@j", joinType);
        cmd.Parameters.AddWithValue("@e", now + lifetime); cmd.Parameters.AddWithValue("@t", now);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    public static async Task<List<JoinRequest>> RequestsAsync(long? guildUid, long? playerUid, CancellationToken ct = default)
    {
        var rows = new List<JoinRequest>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand(
            "SELECT player_uid, guild_uid, join_type, expired_time, reg_time FROM ds_guild.g_guild_join_request WHERE expired_time > @now " +
            "AND (@g IS NULL OR guild_uid = @g) AND (@p IS NULL OR player_uid = @p) ORDER BY reg_time", conn);
        cmd.Parameters.AddWithValue("@now", DateTime.UtcNow);
        cmd.Parameters.AddWithValue("@g", guildUid.HasValue ? guildUid.Value : DBNull.Value);
        cmd.Parameters.AddWithValue("@p", playerUid.HasValue ? playerUid.Value : DBNull.Value);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct))
            rows.Add(new JoinRequest(r.GetInt64(0), r.GetInt64(1), r.GetInt32(2), DateTime.SpecifyKind(r.GetDateTime(3), DateTimeKind.Utc), DateTime.SpecifyKind(r.GetDateTime(4), DateTimeKind.Utc)));
        return rows;
    }

    public static async Task RemoveRequestAsync(long guildUid, long playerUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("DELETE FROM ds_guild.g_guild_join_request WHERE guild_uid = @g AND player_uid = @p", conn);
        cmd.Parameters.AddWithValue("@g", guildUid); cmd.Parameters.AddWithValue("@p", playerUid);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    /// <summary>Nickname of a player (ds_account.nickname), or empty.</summary>
    public sealed record PlayerInfo(long PlayerUid, string Nickname, int Level, long GuildUid, string GuildName, DateTime LoginUtc, bool Online);

    /// <summary>Nickname, level, guild and online state (valid session) for the HTTP players_by_uids / players_by_name calls.</summary>
    public static async Task<List<PlayerInfo>> PlayerInfosAsync(IReadOnlyCollection<long>? uids, string? name = null, CancellationToken ct = default)
    {
        var list = new List<PlayerInfo>();
        if (uids is { Count: 0 }) return list;
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        string where = uids != null ? $"p.player_uid IN ({string.Join(",", uids)})" : "p.nickname = @n";
        await using var cmd = new MySqlCommand(
            "SELECT p.player_uid, p.nickname, COALESCE(l.char_level, 1), COALESCE(m.guild_uid, 0), COALESCE(g.guild_name, ''), " +
            "s.login_dt, COALESCE(s.expire_dt > UTC_TIMESTAMP(), 0) " +
            "FROM ds_game.player p LEFT JOIN ds_game.character_level l ON l.player_uid = p.player_uid " +
            "LEFT JOIN ds_guild.g_guild_member m ON m.player_uid = p.player_uid LEFT JOIN ds_guild.g_guild g ON g.guild_uid = m.guild_uid " +
            $"LEFT JOIN ds_account.session s ON s.player_uid = p.player_uid WHERE {where}", conn);
        if (uids == null) cmd.Parameters.AddWithValue("@n", name ?? "");
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct))
            list.Add(new PlayerInfo(r.GetInt64(0), r.GetString(1), r.GetInt32(2), r.GetInt64(3), r.GetString(4),
                r.IsDBNull(5) ? DateTime.UtcNow : DateTime.SpecifyKind(r.GetDateTime(5), DateTimeKind.Utc), r.GetInt32(6) != 0));
        return list;
    }

    public static async Task<string> NicknameAsync(long playerUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync("ds_account", ct);
        await using var cmd = new MySqlCommand("SELECT nickname FROM nickname WHERE player_uid = @p LIMIT 1", conn);
        cmd.Parameters.AddWithValue("@p", playerUid);
        return (await cmd.ExecuteScalarAsync(ct)) as string ?? "";
    }
}
