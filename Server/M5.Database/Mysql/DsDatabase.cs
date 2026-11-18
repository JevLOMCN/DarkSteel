using M5.Core;
using MySqlConnector;

namespace M5.Database.Mysql;

/// <summary>
/// Connection factory for the Mir 5 MySQL databases (ds_account, ds_config, ds_game, ...).
/// Schema is DB/mir5_server_db_mysql57.sql. The MYSQL_PASSWORD env var overrides settings.json.
/// </summary>
public static class DsDatabase
{
    public static string ConnectionString(string? schema = null)
    {
        if (string.IsNullOrEmpty(Config.Data.IpAddress))
            Config.Load();

        var cfg = Config.Data.MySql;
        var builder = new MySqlConnectionStringBuilder
        {
            Server = cfg.Host,
            Port = (uint)cfg.Port,
            UserID = cfg.UserName,
            Password = Environment.GetEnvironmentVariable("MYSQL_PASSWORD") ?? cfg.Password,
            CharacterSet = "utf8mb4",
            MaximumPoolSize = 100,
        };
        if (!string.IsNullOrEmpty(schema))
            builder.Database = schema;
        return builder.ConnectionString;
    }

    /// <summary>
    /// Startup check: opens a connection and confirms the imported ds_* schemas exist.
    /// Returns an error message, or null when the database is usable. Never throws.
    /// </summary>
    public static async Task<string?> VerifyAsync(CancellationToken ct = default)
    {
        try
        {
            await using var conn = await OpenAsync(null, ct);
            await using var cmd = new MySqlCommand(
                "SELECT table_schema, COUNT(*) FROM information_schema.tables WHERE table_schema LIKE 'ds\\_%' GROUP BY table_schema", conn);
            await using var r = await cmd.ExecuteReaderAsync(ct);
            var found = new Dictionary<string, long>();
            while (await r.ReadAsync(ct))
                found[r.GetString(0)] = r.GetInt64(1);

            string[] required = { "ds_account", "ds_config", "ds_game", "ds_guild", "ds_mail", "ds_rank", "ds_world" };
            var missing = required.Where(s => !found.ContainsKey(s)).ToList();
            if (missing.Count > 0)
                return $"MySQL reachable at {Config.Data.MySql.Host}:{Config.Data.MySql.Port} but schemas are missing: {string.Join(", ", missing)}. Import DB/mir5_server_db_mysql57.sql.";

            Logger.Info($"[MySQL] Connected {Config.Data.MySql.UserName}@{Config.Data.MySql.Host}:{Config.Data.MySql.Port} - " +
                        string.Join(", ", required.Select(s => $"{s}={found[s]}")) + " tables");
            return null;
        }
        catch (Exception ex)
        {
            return $"Cannot connect to MySQL at {Config.Data.MySql.Host}:{Config.Data.MySql.Port} as '{Config.Data.MySql.UserName}': {ex.Message}";
        }
    }

    public static async Task<MySqlConnection> OpenAsync(string? schema = null, CancellationToken ct = default)
    {
        var conn = new MySqlConnection(ConnectionString(schema));
        await conn.OpenAsync(ct);
        return conn;
    }
}
