using MySqlConnector;

namespace M5.Database.Mysql;

/// <summary>
/// The "wait complete" queue (ds_game.wait_complete: crafts, ascensions... that finish after a timer) and the
/// transactional parts of starting one: material and money checks and deduction happen together with the queue insert.
/// </summary>
public static class DsCraftRepository
{
    public sealed record WaitRow(long Uid, int Type, long Param1, long Param2, long Param3, DateTime BeginUtc, DateTime CompleteUtc, int AccelSeconds);

    public enum StartResult { Ok, MaterialShort, MoneyShort, QueueFull }

    /// <summary>New totals of everything that was touched, so the caller can tell the client.</summary>
    public sealed record StartOutcome(StartResult Result, IReadOnlyList<(int ItemId, int Quantity)> Stackables,
        IReadOnlyList<(int MoneyId, long Quantity)> Money, WaitRow? Wait);

    /// <summary>
    /// Queues one entry: checks the queue length, takes the ingredients and the money, inserts the wait row. All or nothing.
    /// </summary>
    public static async Task<StartOutcome> StartAsync(long playerUid, int waitType, int queueMax,
        IReadOnlyList<(int ItemId, int Quantity)> ingredients, IReadOnlyList<(int MoneyId, long Quantity)> money,
        long param1, long param2, long param3, TimeSpan duration, CancellationToken ct = default)
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
        StartOutcome Fail(StartResult r) => new(r, Array.Empty<(int, int)>(), Array.Empty<(int, long)>(), null);

        long queued = Convert.ToInt64(await Scalar(
            "SELECT COUNT(*) FROM ds_game.wait_complete WHERE player_uid = @u AND wait_complete_type = @t FOR UPDATE", ("@u", playerUid), ("@t", waitType)));
        if (queueMax > 0 && queued >= queueMax) { await tx.RollbackAsync(ct); return Fail(StartResult.QueueFull); }

        foreach (var (itemId, qty) in ingredients)
        {
            var have = await Scalar("SELECT quantity FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i FOR UPDATE", ("@u", playerUid), ("@i", itemId));
            if (have == null || Convert.ToInt64(have) < qty) { await tx.RollbackAsync(ct); return Fail(StartResult.MaterialShort); }
        }
        foreach (var (moneyId, qty) in money)
        {
            var have = await Scalar("SELECT quantity FROM ds_game.money WHERE player_uid = @u AND money_id = @m FOR UPDATE", ("@u", playerUid), ("@m", moneyId));
            if (have == null || Convert.ToInt64(have) < qty) { await tx.RollbackAsync(ct); return Fail(StartResult.MoneyShort); }
        }

        var stackables = new List<(int, int)>();
        foreach (var (itemId, qty) in ingredients)
        {
            await Exec("UPDATE ds_game.item_stackable SET quantity = quantity - @q WHERE player_uid = @u AND item_id = @i", ("@q", qty), ("@u", playerUid), ("@i", itemId));
            stackables.Add((itemId, Convert.ToInt32(await Scalar("SELECT quantity FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i", ("@u", playerUid), ("@i", itemId)))));
        }
        var moneys = new List<(int, long)>();
        foreach (var (moneyId, qty) in money)
        {
            await Exec("UPDATE ds_game.money SET quantity = quantity - @q WHERE player_uid = @u AND money_id = @m", ("@q", qty), ("@u", playerUid), ("@m", moneyId));
            moneys.Add((moneyId, Convert.ToInt64(await Scalar("SELECT quantity FROM ds_game.money WHERE player_uid = @u AND money_id = @m", ("@u", playerUid), ("@m", moneyId)))));
        }

        long uid = Convert.ToInt64(await Scalar("SELECT COALESCE(MAX(wait_complete_uid), @base) FROM ds_game.wait_complete WHERE player_uid = @u",
            ("@base", playerUid * 1_000_000L), ("@u", playerUid))) + 1;
        var begin = DateTime.UtcNow;
        var complete = begin + duration;
        await Exec("INSERT INTO ds_game.wait_complete (player_uid, wait_complete_uid, wait_complete_type, param1, param2, param3, begin_dt, complete_dt, accel_seconds) " +
                   "VALUES (@u, @w, @t, @p1, @p2, @p3, @b, @c, 0)",
            ("@u", playerUid), ("@w", uid), ("@t", waitType), ("@p1", param1), ("@p2", param2), ("@p3", param3), ("@b", begin), ("@c", complete));
        await tx.CommitAsync(ct);
        return new StartOutcome(StartResult.Ok, stackables, moneys, new WaitRow(uid, waitType, param1, param2, param3, begin, complete, 0));
    }

    public enum AccelResult { Ok, ItemsShort, GoldShort, NotFound }

    public sealed record AccelOutcome(AccelResult Result, IReadOnlyList<(int ItemId, int Quantity)> Stackables, long? Gold, WaitRow? Wait);

    /// <summary>
    /// Speeds an entry up by <paramref name="reduceSeconds"/>: takes the tickets and/or gold, moves complete_dt earlier and adds the same amount to
    /// accel_seconds. The client reads complete_dt as the ACCELERATED end and complete_dt + accel_seconds as the original end. All or nothing.
    /// </summary>
    public static async Task<AccelOutcome> AccelerateAsync(long playerUid, long waitUid, int reduceSeconds,
        IReadOnlyList<(int ItemId, int Quantity)> items, int goldMoneyId, long gold, CancellationToken ct = default)
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
        AccelOutcome Fail(AccelResult r) => new(r, Array.Empty<(int, int)>(), null, null);

        if (await Scalar("SELECT 1 FROM ds_game.wait_complete WHERE player_uid = @u AND wait_complete_uid = @w FOR UPDATE", ("@u", playerUid), ("@w", waitUid)) == null)
        { await tx.RollbackAsync(ct); return Fail(AccelResult.NotFound); }

        foreach (var (itemId, qty) in items)
        {
            var have = await Scalar("SELECT quantity FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i FOR UPDATE", ("@u", playerUid), ("@i", itemId));
            if (have == null || Convert.ToInt64(have) < qty) { await tx.RollbackAsync(ct); return Fail(AccelResult.ItemsShort); }
        }
        if (gold > 0)
        {
            var have = await Scalar("SELECT quantity FROM ds_game.money WHERE player_uid = @u AND money_id = @m FOR UPDATE", ("@u", playerUid), ("@m", goldMoneyId));
            if (have == null || Convert.ToInt64(have) < gold) { await tx.RollbackAsync(ct); return Fail(AccelResult.GoldShort); }
        }

        var stackables = new List<(int, int)>();
        foreach (var (itemId, qty) in items)
        {
            await Exec("UPDATE ds_game.item_stackable SET quantity = quantity - @q WHERE player_uid = @u AND item_id = @i", ("@q", qty), ("@u", playerUid), ("@i", itemId));
            stackables.Add((itemId, Convert.ToInt32(await Scalar("SELECT quantity FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i", ("@u", playerUid), ("@i", itemId)))));
        }
        long? goldLeft = null;
        if (gold > 0)
        {
            await Exec("UPDATE ds_game.money SET quantity = quantity - @q WHERE player_uid = @u AND money_id = @m", ("@q", gold), ("@u", playerUid), ("@m", goldMoneyId));
            goldLeft = Convert.ToInt64(await Scalar("SELECT quantity FROM ds_game.money WHERE player_uid = @u AND money_id = @m", ("@u", playerUid), ("@m", goldMoneyId)));
        }
        await Exec("UPDATE ds_game.wait_complete SET complete_dt = DATE_SUB(complete_dt, INTERVAL @a SECOND), accel_seconds = accel_seconds + @a WHERE player_uid = @u AND wait_complete_uid = @w",
            ("@a", reduceSeconds), ("@u", playerUid), ("@w", waitUid));
        await tx.CommitAsync(ct);
        return new AccelOutcome(AccelResult.Ok, stackables, goldLeft, await GetAsync(playerUid, waitUid, ct));
    }

    private static WaitRow Read(MySqlDataReader r) => new(
        r.GetInt64("wait_complete_uid"), r.GetInt32("wait_complete_type"), r.GetInt64("param1"), r.GetInt64("param2"), r.GetInt64("param3"),
        DateTime.SpecifyKind(r.GetDateTime("begin_dt"), DateTimeKind.Utc), DateTime.SpecifyKind(r.GetDateTime("complete_dt"), DateTimeKind.Utc), r.GetInt32("accel_seconds"));

    /// <summary>Every queued entry of the player (all types).</summary>
    public static async Task<List<WaitRow>> ListAsync(long playerUid, CancellationToken ct = default)
    {
        var rows = new List<WaitRow>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT * FROM ds_game.wait_complete WHERE player_uid = @u ORDER BY wait_complete_uid", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) rows.Add(Read(r));
        return rows;
    }

    public static async Task<WaitRow?> GetAsync(long playerUid, long waitUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT * FROM ds_game.wait_complete WHERE player_uid = @u AND wait_complete_uid = @w", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@w", waitUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        return await r.ReadAsync(ct) ? Read(r) : null;
    }

    /// <summary>Removes a queue entry; false when it was already gone (so a double claim cannot pay out twice).</summary>
    public static async Task<bool> DeleteAsync(long playerUid, long waitUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("DELETE FROM ds_game.wait_complete WHERE player_uid = @u AND wait_complete_uid = @w", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@w", waitUid);
        return await cmd.ExecuteNonQueryAsync(ct) > 0;
    }
}
