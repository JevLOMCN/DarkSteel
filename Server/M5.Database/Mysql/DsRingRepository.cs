using MySqlConnector;

namespace M5.Database.Mysql;

/// <summary>Ring menu command slots (ds_game.ring_command): deck (3 decks), slot (8 per deck), command type and value (e.g. Action tab -> Mount).</summary>
public static class DsRingRepository
{
    public sealed record Slot(int Deck, int Index, int CmdType, int CmdValue);

    public static async Task<List<Slot>> ListAsync(long playerUid, CancellationToken ct = default)
    {
        var list = new List<Slot>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT deck_index, slot_index, cmd_type, cmd_value FROM ds_game.ring_command WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) list.Add(new Slot(r.GetInt32(0), r.GetInt32(1), r.GetInt32(2), r.GetInt32(3)));
        return list;
    }

    public static async Task SetAsync(long playerUid, Slot s, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand(
            "INSERT INTO ds_game.ring_command (player_uid, deck_index, slot_index, cmd_type, cmd_value) VALUES (@u, @d, @s, @t, @v) ON DUPLICATE KEY UPDATE cmd_type = @t, cmd_value = @v", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@d", s.Deck);
        cmd.Parameters.AddWithValue("@s", s.Index);
        cmd.Parameters.AddWithValue("@t", s.CmdType);
        cmd.Parameters.AddWithValue("@v", s.CmdValue);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    public static async Task DeleteAsync(long playerUid, int deck, int index, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("DELETE FROM ds_game.ring_command WHERE player_uid = @u AND deck_index = @d AND slot_index = @s", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@d", deck);
        cmd.Parameters.AddWithValue("@s", index);
        await cmd.ExecuteNonQueryAsync(ct);
    }
}