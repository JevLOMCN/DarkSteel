using MySqlConnector;

namespace M5.Database.Mysql;

public record DsSession(long PlayerUid, Guid SessionUid, int RegionIndex, int WorldId, string Nickname, int Authority, DateTime ExpireDt);

/// <summary>
/// Account and session access over ds_account (api_session.LoginAndRegisterPlayer path).
/// ds_account.player holds the login id, ds_account.session the active session.
/// </summary>
public static class DsAccountRepository
{
    /// <summary>AccountAuthority of a player (ds_account.player.authority): 11 Normal, 21 Gm, 22 GmInvisible, 31 Official... Unknown players are Normal.</summary>
    public static async Task<int> GetAuthorityAsync(long playerUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync("ds_account", ct);
        await using var cmd = new MySqlCommand("SELECT authority FROM player WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        var v = await cmd.ExecuteScalarAsync(ct);
        return v == null ? 11 : Convert.ToInt32(v);
    }

    /// <summary>Returns the player's uid, creating the player row if the id is new.</summary>
    public static async Task<(long PlayerUid, bool IsNew)> GetOrCreatePlayerAsync(string id, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync("ds_account", ct);

        await using (var find = new MySqlCommand("SELECT player_uid FROM player WHERE id = @id", conn))
        {
            find.Parameters.AddWithValue("@id", id);
            var existing = await find.ExecuteScalarAsync(ct);
            if (existing != null)
                return (Convert.ToInt64(existing), false);
        }

        // INSERT IGNORE + re-select keeps this safe if two logins race on the unique id index.
        await using (var ins = new MySqlCommand("INSERT IGNORE INTO player (id) VALUES (@id)", conn))
        {
            ins.Parameters.AddWithValue("@id", id);
            var created = await ins.ExecuteNonQueryAsync(ct) > 0;
            await using var sel = new MySqlCommand("SELECT player_uid FROM player WHERE id = @id", conn);
            sel.Parameters.AddWithValue("@id", id);
            return (Convert.ToInt64(await sel.ExecuteScalarAsync(ct)), created);
        }
    }

    /// <summary>Replaces the player's session with a fresh one valid for <paramref name="lifetime"/>.</summary>
    public static async Task<DsSession> CreateSessionAsync(long playerUid, int regionIndex, int worldId,
        TimeSpan lifetime, CancellationToken ct = default)
    {
        var sessionUid = Guid.NewGuid();
        var expire = DateTime.UtcNow + lifetime;

        await using var conn = await DsDatabase.OpenAsync("ds_account", ct);
        await using var cmd = new MySqlCommand(
            "REPLACE INTO session (player_uid, player_session_uid, region_index, world_id, nickname, authority, login_dt, expire_dt) " +
            "SELECT @uid, @sid, @region, @world, IFNULL((SELECT nickname FROM session WHERE player_uid = @uid), ''), authority, UTC_TIMESTAMP(6), @expire " +
            "FROM player WHERE player_uid = @uid", conn);
        cmd.Parameters.AddWithValue("@uid", playerUid);
        cmd.Parameters.AddWithValue("@sid", sessionUid.ToByteArray(bigEndian: true));
        cmd.Parameters.AddWithValue("@region", regionIndex);
        cmd.Parameters.AddWithValue("@world", worldId);
        cmd.Parameters.AddWithValue("@expire", expire);
        if (await cmd.ExecuteNonQueryAsync(ct) == 0)
            throw new InvalidOperationException($"Cannot create session: player {playerUid} does not exist.");

        return (await GetSessionAsync(sessionUid, ct))!;
    }

    /// <summary>Finds a live (unexpired) session by its uid, or null.</summary>
    public static async Task<DsSession?> GetSessionAsync(Guid sessionUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync("ds_account", ct);
        await using var cmd = new MySqlCommand(
            "SELECT player_uid, region_index, world_id, nickname, authority, expire_dt FROM session " +
            "WHERE player_session_uid = @sid AND expire_dt > UTC_TIMESTAMP(6)", conn);
        cmd.Parameters.AddWithValue("@sid", sessionUid.ToByteArray(bigEndian: true));
        await using var r = await cmd.ExecuteReaderAsync(ct);
        if (!await r.ReadAsync(ct))
            return null;
        return new DsSession(r.GetInt64(0), sessionUid, r.GetInt32(1), r.GetInt32(2), r.GetString(3), r.GetInt32(4), r.GetDateTime(5));
    }
}
