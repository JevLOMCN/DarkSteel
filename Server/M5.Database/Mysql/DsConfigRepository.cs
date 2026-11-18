using MySqlConnector;

namespace M5.Database.Mysql;

public record GameServerRow(int ServerIndex, int WorldId, int ServerType, int RegionIndex, int TimezoneIndex,
    string Address, string GrpcAddress, string Json, int State, DateTime RefreshDt, long WorldNameId);

public record FrontEndServerRow(int RegionIndex, int ServerIndex, string Address, int Players, int State, DateTime RefreshDt);

/// <summary>Reads ds_config.* for the api_config.ServerListResponse.</summary>
public static class DsConfigRepository
{
    public static async Task<List<GameServerRow>> GetGameServersAsync(CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync("ds_config", ct);
        await using var cmd = new MySqlCommand(
            "SELECT server_index, world_id, server_type, region_index, timezone_index, address, grpc_address, json, " +
            "game_server_state, game_server_refresh_dt, world_name_id FROM game_server_list ORDER BY server_index", conn);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        var list = new List<GameServerRow>();
        while (await r.ReadAsync(ct))
            list.Add(new GameServerRow(r.GetInt32(0), r.GetInt32(1), r.GetInt32(2), r.GetInt32(3), r.GetInt32(4),
                r.GetString(5), r.GetString(6), r.GetString(7), r.GetInt32(8), r.GetDateTime(9), r.GetInt64(10)));
        return list;
    }

    public static async Task<List<FrontEndServerRow>> GetFrontEndServersAsync(CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync("ds_config", ct);
        await using var cmd = new MySqlCommand(
            "SELECT region_index, server_index, address, players, server_state, server_refresh_dt " +
            "FROM front_end_server_list ORDER BY region_index, server_index", conn);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        var list = new List<FrontEndServerRow>();
        while (await r.ReadAsync(ct))
            list.Add(new FrontEndServerRow(r.GetInt32(0), r.GetInt32(1), r.GetString(2), r.GetInt32(3), r.GetInt32(4), r.GetDateTime(5)));
        return list;
    }
}
