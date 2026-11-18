using MySqlConnector;

namespace M5.Database.Mysql;

/// <summary>
/// Achievement progress (ds_game.achievement_group): one row per achievement group with the step the player is on, its state
/// (0 none, 1 in progress, 2 completable = the claim button, 3 complete) and the cumulative count.
/// </summary>
public static class DsAchievementRepository
{
    public sealed record Group(int GroupId, int Step, int State, long TotalCount);

    public static async Task<List<Group>> ListAsync(long playerUid, CancellationToken ct = default)
    {
        var list = new List<Group>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT group_id, step, state, total_count FROM ds_game.achievement_group WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) list.Add(new Group(r.GetInt32(0), r.GetInt32(1), r.GetInt32(2), r.GetInt64(3)));
        return list;
    }

    public static async Task UpsertAsync(long playerUid, Group g, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand(
            "INSERT INTO ds_game.achievement_group (player_uid, group_id, step, state, total_count) VALUES (@u, @g, @s, @st, @t) " +
            "ON DUPLICATE KEY UPDATE step = @s, state = @st, total_count = @t", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@g", g.GroupId);
        cmd.Parameters.AddWithValue("@s", g.Step);
        cmd.Parameters.AddWithValue("@st", g.State);
        cmd.Parameters.AddWithValue("@t", g.TotalCount);
        await cmd.ExecuteNonQueryAsync(ct);
    }
}
