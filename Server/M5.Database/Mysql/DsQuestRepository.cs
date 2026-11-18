using MySqlConnector;

namespace M5.Database.Mysql;

/// <summary>
/// Quest storage in ds_game. One table per quest kind with the same shape (player, quest, state, three objective counters, created time):
/// main_quest (one active main quest per player), local_quest, repeat_quest, weekly_quest, monthly_quest.
/// Plus quest_complete (finished quest ids), repeat_quest_complete (finish counts) and quest_tracking (the quest shown in the HUD tracker).
/// </summary>
public static class DsQuestRepository
{
    public enum Kind { Main, Local, Repeat, Weekly, Monthly }

    public sealed record Quest(int QuestId, int State, int Count1, int Count2, int Count3, DateTime CreatedUtc, bool AutoTracking = false)
    {
        public int[] Counts => new[] { Count1, Count2, Count3 };
        public Quest WithCounts(int[] c) => this with { Count1 = c[0], Count2 = c[1], Count3 = c[2] };
    }

    private static string Table(Kind k) => k switch
    {
        Kind.Main => "ds_game.main_quest",
        Kind.Local => "ds_game.local_quest",
        Kind.Repeat => "ds_game.repeat_quest",
        Kind.Weekly => "ds_game.weekly_quest",
        _ => "ds_game.monthly_quest",
    };

    private static bool HasAutoTracking(Kind k) => k is Kind.Local or Kind.Repeat;

    public static async Task<List<Quest>> ListAsync(Kind kind, long playerUid, CancellationToken ct = default)
    {
        var rows = new List<Quest>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand(
            $"SELECT quest_id, quest_state, objective_count_1, objective_count_2, objective_count_3, create_dt{(HasAutoTracking(kind) ? ", auto_tracking" : "")} FROM {Table(kind)} WHERE player_uid = @u ORDER BY quest_id", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct))
            rows.Add(new Quest(r.GetInt32(0), r.GetInt32(1), r.GetInt32(2), r.GetInt32(3), r.GetInt32(4),
                DateTime.SpecifyKind(r.GetDateTime(5), DateTimeKind.Utc), HasAutoTracking(kind) && r.GetBoolean(6)));
        return rows;
    }

    public static async Task<Quest?> GetAsync(Kind kind, long playerUid, int questId, CancellationToken ct = default) =>
        (await ListAsync(kind, playerUid, ct)).FirstOrDefault(q => q.QuestId == questId);

    /// <summary>Inserts or updates a quest row. The main quest table is keyed by player only, so there it replaces the active main quest.</summary>
    public static async Task UpsertAsync(Kind kind, long playerUid, Quest q, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        bool auto = HasAutoTracking(kind);
        await using var cmd = new MySqlCommand(
            $"INSERT INTO {Table(kind)} (player_uid, quest_id, quest_state, objective_count_1, objective_count_2, objective_count_3, create_dt{(auto ? ", auto_tracking" : "")}) " +
            $"VALUES (@u, @q, @s, @a, @b, @c, @d{(auto ? ", @t" : "")}) " +
            $"ON DUPLICATE KEY UPDATE quest_id = @q, quest_state = @s, objective_count_1 = @a, objective_count_2 = @b, objective_count_3 = @c, create_dt = @d{(auto ? ", auto_tracking = @t" : "")}", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@q", q.QuestId);
        cmd.Parameters.AddWithValue("@s", q.State);
        cmd.Parameters.AddWithValue("@a", q.Count1);
        cmd.Parameters.AddWithValue("@b", q.Count2);
        cmd.Parameters.AddWithValue("@c", q.Count3);
        cmd.Parameters.AddWithValue("@d", q.CreatedUtc);
        if (auto) cmd.Parameters.AddWithValue("@t", q.AutoTracking);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    public static async Task DeleteAsync(Kind kind, long playerUid, int questId, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand($"DELETE FROM {Table(kind)} WHERE player_uid = @u AND quest_id = @q", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@q", questId);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    /// <summary>Removes every row of a kind (weekly/monthly reset, GM tools).</summary>
    public static async Task DeleteAllAsync(Kind kind, long playerUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand($"DELETE FROM {Table(kind)} WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    // ---- finished quests ----

    public static async Task<bool> IsCompletedAsync(long playerUid, int questId, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT 1 FROM ds_game.quest_complete WHERE player_uid = @u AND quest_id = @q", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@q", questId);
        return await cmd.ExecuteScalarAsync(ct) != null;
    }

    public static async Task<List<int>> GetCompletedAsync(long playerUid, CancellationToken ct = default)
    {
        var ids = new List<int>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT quest_id FROM ds_game.quest_complete WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) ids.Add(r.GetInt32(0));
        return ids;
    }

    public static async Task MarkCompletedAsync(long playerUid, int questId, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("INSERT IGNORE INTO ds_game.quest_complete (player_uid, quest_id) VALUES (@u, @q)", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@q", questId);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    public static async Task UnmarkCompletedAsync(long playerUid, int questId, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("DELETE FROM ds_game.quest_complete WHERE player_uid = @u AND quest_id = @q", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@q", questId);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    // ---- repeat quests: how many times each was finished ----

    public static async Task<Dictionary<int, int>> GetRepeatCountsAsync(long playerUid, CancellationToken ct = default)
    {
        var map = new Dictionary<int, int>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT quest_id, complete_count FROM ds_game.repeat_quest_complete WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) map[r.GetInt32(0)] = r.GetInt32(1);
        return map;
    }

    /// <summary>Adds one finish and returns the new count.</summary>
    public static async Task<int> AddRepeatCompleteAsync(long playerUid, int questId, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using (var cmd = new MySqlCommand(
            "INSERT INTO ds_game.repeat_quest_complete (player_uid, quest_id, complete_count) VALUES (@u, @q, 1) ON DUPLICATE KEY UPDATE complete_count = complete_count + 1", conn))
        {
            cmd.Parameters.AddWithValue("@u", playerUid);
            cmd.Parameters.AddWithValue("@q", questId);
            await cmd.ExecuteNonQueryAsync(ct);
        }
        await using var sel = new MySqlCommand("SELECT complete_count FROM ds_game.repeat_quest_complete WHERE player_uid = @u AND quest_id = @q", conn);
        sel.Parameters.AddWithValue("@u", playerUid);
        sel.Parameters.AddWithValue("@q", questId);
        return Convert.ToInt32(await sel.ExecuteScalarAsync(ct));
    }

    public static async Task ResetRepeatAsync(long playerUid, int questId, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("DELETE FROM ds_game.repeat_quest_complete WHERE player_uid = @u AND quest_id = @q", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@q", questId);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    // ---- HUD tracker ----

    public static async Task<int> GetTrackingAsync(long playerUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT quest_id FROM ds_game.quest_tracking WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        var v = await cmd.ExecuteScalarAsync(ct);
        return v == null ? 0 : Convert.ToInt32(v);
    }

    public static async Task SetTrackingAsync(long playerUid, int questId, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand(
            "INSERT INTO ds_game.quest_tracking (player_uid, quest_id) VALUES (@u, @q) ON DUPLICATE KEY UPDATE quest_id = @q", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@q", questId);
        await cmd.ExecuteNonQueryAsync(ct);
    }
}
