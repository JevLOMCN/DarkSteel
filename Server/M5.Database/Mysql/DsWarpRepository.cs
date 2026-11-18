using MySqlConnector;

namespace M5.Database.Mysql;

/// <summary>Activated warp devices (ds_game.warp_device: player_uid, device id = Common/StuffWarpDevice row id).</summary>
public static class DsWarpRepository
{
    public static async Task<List<int>> ListAsync(long playerUid, CancellationToken ct = default)
    {
        var list = new List<int>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT device_stuff_id FROM ds_game.warp_device WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) list.Add(r.GetInt32(0));
        return list;
    }

    public static async Task AddAsync(long playerUid, IEnumerable<int> deviceIds, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        foreach (var id in deviceIds)
        {
            await using var cmd = new MySqlCommand("INSERT IGNORE INTO ds_game.warp_device (player_uid, device_stuff_id) VALUES (@u, @d)", conn);
            cmd.Parameters.AddWithValue("@u", playerUid);
            cmd.Parameters.AddWithValue("@d", id);
            await cmd.ExecuteNonQueryAsync(ct);
        }
    }
}