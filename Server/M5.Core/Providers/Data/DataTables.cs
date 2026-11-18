using System.Collections.Concurrent;
using System.Diagnostics;
using System.Text.Json;

namespace M5.Core.Tables;

/// <summary>
/// One DataTable exported from the Mir 5 client (FModel JSON): a table name, its row struct and its rows keyed by
/// row name (usually the numeric ID). Rows stay as raw JSON and are deserialised on demand, so loading all of
/// Bin/Data stays cheap even though some tables are several MB.
/// </summary>
public sealed class GameTable
{
    private readonly JsonDocument _document; // owns the memory behind every JsonElement in _rows
    private readonly Dictionary<string, JsonElement> _rows;

    internal GameTable(string name, string rowStruct, string source, JsonDocument document, Dictionary<string, JsonElement> rows)
    {
        Name = name;
        RowStruct = rowStruct;
        Source = source;
        _document = document;
        _rows = rows;
    }

    /// <summary>Table name as exported, e.g. "ItemBase".</summary>
    public string Name { get; }

    /// <summary>Row struct class in the client, e.g. "DS_ItemBaseTableRow".</summary>
    public string RowStruct { get; }

    /// <summary>File the table came from, relative to the data folder (forward slashes).</summary>
    public string Source { get; }

    public int Count => _rows.Count;

    public IEnumerable<string> Keys => _rows.Keys;

    public IEnumerable<KeyValuePair<string, JsonElement>> Rows => _rows;

    public bool Contains(string key) => _rows.ContainsKey(key);

    public bool TryGetRow(string key, out JsonElement row) => _rows.TryGetValue(key, out row);

    public bool TryGetRow(long key, out JsonElement row) => _rows.TryGetValue(key.ToString(), out row);

    /// <summary>Deserialises one row, or null when the key does not exist.</summary>
    public T? Get<T>(string key) where T : class =>
        _rows.TryGetValue(key, out var row) ? row.Deserialize<T>(DataTables.JsonOptions) : null;

    public T? Get<T>(long key) where T : class => Get<T>(key.ToString());

    /// <summary>Deserialises every row. Allocates one object per row; prefer <see cref="Get{T}(string)"/> for lookups.</summary>
    public IEnumerable<T> All<T>() where T : class
    {
        foreach (var row in _rows.Values)
        {
            var value = row.Deserialize<T>(DataTables.JsonOptions);
            if (value != null)
                yield return value;
        }
    }

    public override string ToString() => $"{Name} ({Count} rows, {RowStruct})";
}

/// <summary>Result of <see cref="DataTables.Load"/>.</summary>
public sealed record DataTablesReport(
    string DataPath, int Files, int Tables, long Rows, int NotTables, IReadOnlyList<string> Failures, TimeSpan Elapsed);

/// <summary>
/// Registry of every game table found as JSON under the data folder (Bin/Data). Replaces the Mir 4 CSV providers:
/// call <see cref="Load"/> once at startup, then use <see cref="Get"/> / <see cref="TryGet"/>.
/// </summary>
public static class DataTables
{
    /// <summary>Case-insensitive, tolerant options for row deserialisation (numbers may arrive as strings).</summary>
    public static readonly JsonSerializerOptions JsonOptions = new()
    {
        PropertyNameCaseInsensitive = true,
        NumberHandling = System.Text.Json.Serialization.JsonNumberHandling.AllowReadingFromString,
        ReadCommentHandling = JsonCommentHandling.Skip,
        AllowTrailingCommas = true,
    };

    private static readonly object Gate = new();

    // Every table, keyed by its file path under the data folder without extension, e.g. "Common/ItemBase" or
    // "Common/NpcSpawn/Dungeon/1". Always unique.
    private static Dictionary<string, GameTable> _byPath = new(StringComparer.OrdinalIgnoreCase);

    // Convenience lookup by exported table name, e.g. "ItemBase". Only names used by exactly one table are here;
    // names shared by several files (the per-map spawn tables are all called "1", "2", ...) must be looked up by path.
    private static Dictionary<string, GameTable> _byName = new(StringComparer.OrdinalIgnoreCase);
    private static HashSet<string> _ambiguous = new(StringComparer.OrdinalIgnoreCase);

    public static bool IsLoaded { get; private set; }

    public static DataTablesReport? LastReport { get; private set; }

    public static int Count => _byPath.Count;

    public static IReadOnlyCollection<GameTable> All => _byPath.Values;

    /// <summary>Looks a table up by unique name ("ItemBase") or by path ("Common/NpcSpawn/Dungeon/1").</summary>
    public static bool TryGet(string nameOrPath, out GameTable table) =>
        _byPath.TryGetValue(StripExtension(nameOrPath), out table!) || _byName.TryGetValue(nameOrPath, out table!);

    public static GameTable? Find(string nameOrPath) => TryGet(nameOrPath, out var t) ? t : null;

    /// <summary>Returns the table, or throws with a hint when it is missing or ambiguous.</summary>
    public static GameTable Get(string nameOrPath)
    {
        if (TryGet(nameOrPath, out var t))
            return t;
        if (_ambiguous.Contains(nameOrPath))
            throw new KeyNotFoundException(
                $"Game table name '{nameOrPath}' is used by several files; look it up by path, e.g. " +
                $"'{_byPath.Values.First(x => x.Name.Equals(nameOrPath, StringComparison.OrdinalIgnoreCase)).Source}'.");
        throw new KeyNotFoundException($"Game table '{nameOrPath}' not found. {_byPath.Count} tables are loaded from '{LastReport?.DataPath}'.");
    }

    private static string StripExtension(string path) =>
        path.EndsWith(".json", StringComparison.OrdinalIgnoreCase) ? path[..^5] : path;

    /// <summary>
    /// Scans <paramref name="dataPath"/> (default <see cref="Engine.DATA_PATH"/>) recursively for *.json and registers
    /// every DataTable export. Safe to call again to reload.
    /// </summary>
    public static DataTablesReport Load(string? dataPath = null)
    {
        var sw = Stopwatch.StartNew();
        var root = Path.GetFullPath(dataPath ?? Engine.DATA_PATH);
        var failures = new ConcurrentBag<string>();
        var parsed = new ConcurrentBag<(string File, GameTable Table)>();
        var notTables = 0;

        if (!Directory.Exists(root))
        {
            var missing = new DataTablesReport(root, 0, 0, 0, 0, new[] { $"Data folder not found: {root}" }, sw.Elapsed);
            LastReport = missing;
            Logger.Error($"[DataTables] Data folder not found: {root}");
            return missing;
        }

        var files = Directory.EnumerateFiles(root, "*.json", SearchOption.AllDirectories)
            .OrderBy(f => f, StringComparer.OrdinalIgnoreCase)
            .ToArray();

        Parallel.ForEach(files, file =>
        {
            try
            {
                var relative = Path.GetRelativePath(root, file).Replace('\\', '/');
                var document = JsonDocument.Parse(File.ReadAllBytes(file), new JsonDocumentOptions
                {
                    AllowTrailingCommas = true,
                    CommentHandling = JsonCommentHandling.Skip,
                });

                var found = 0;
                var items = document.RootElement.ValueKind == JsonValueKind.Array
                    ? document.RootElement.EnumerateArray().ToArray()
                    : new[] { document.RootElement };

                foreach (var item in items)
                {
                    if (item.ValueKind != JsonValueKind.Object ||
                        !item.TryGetProperty("Rows", out var rowsElement) ||
                        rowsElement.ValueKind != JsonValueKind.Object)
                        continue;

                    var name = item.TryGetProperty("Name", out var n) && n.ValueKind == JsonValueKind.String
                        ? n.GetString()!
                        : Path.GetFileNameWithoutExtension(file);

                    var rowStruct = "";
                    if (item.TryGetProperty("Properties", out var props) && props.ValueKind == JsonValueKind.Object &&
                        props.TryGetProperty("RowStruct", out var rs) && rs.ValueKind == JsonValueKind.Object &&
                        rs.TryGetProperty("ObjectName", out var on) && on.ValueKind == JsonValueKind.String)
                    {
                        rowStruct = (on.GetString() ?? "").Replace("Class'", "").TrimEnd('\'');
                    }

                    var rows = new Dictionary<string, JsonElement>(StringComparer.Ordinal);
                    foreach (var row in rowsElement.EnumerateObject())
                        rows[row.Name] = row.Value;

                    parsed.Add((relative, new GameTable(name, rowStruct, relative, document, rows)));
                    found++;
                }

                if (found == 0)
                {
                    Interlocked.Increment(ref notTables);
                    document.Dispose();
                }
            }
            catch (Exception ex)
            {
                failures.Add($"{Path.GetRelativePath(root, file)}: {ex.Message}");
            }
        });

        // Register every table by path (unique). A file that holds several tables gets "#<index>" appended.
        var byPath = new Dictionary<string, GameTable>(StringComparer.OrdinalIgnoreCase);
        long totalRows = 0;
        foreach (var (file, table) in parsed.OrderBy(p => p.File, StringComparer.OrdinalIgnoreCase).ThenBy(p => p.Table.Name, StringComparer.OrdinalIgnoreCase))
        {
            var key = StripExtension(file);
            for (var i = 2; !byPath.TryAdd(key, table); i++)
                key = $"{StripExtension(file)}#{i}";
            totalRows += table.Count;
        }

        // Short-name index: only names that identify exactly one table.
        var byName = new Dictionary<string, GameTable>(StringComparer.OrdinalIgnoreCase);
        var ambiguous = new HashSet<string>(StringComparer.OrdinalIgnoreCase);
        foreach (var table in byPath.Values)
        {
            if (ambiguous.Contains(table.Name))
                continue;
            if (!byName.TryAdd(table.Name, table))
            {
                byName.Remove(table.Name);
                ambiguous.Add(table.Name);
            }
        }

        lock (Gate)
        {
            _byPath = byPath;
            _byName = byName;
            _ambiguous = ambiguous;
            IsLoaded = true;
        }

        var report = new DataTablesReport(root, files.Length, byPath.Count, totalRows, notTables,
            failures.OrderBy(f => f).ToList(), sw.Elapsed);
        LastReport = report;

        Logger.Info($"[DataTables] {report.Tables} tables, {report.Rows:N0} rows from {report.Files} files in {root} ({report.Elapsed.TotalSeconds:0.0}s)" +
                    (notTables > 0 ? $", {notTables} non-table files skipped" : "") +
                    (ambiguous.Count > 0 ? $"; {ambiguous.Count} table names are shared by several files and must be looked up by path" : ""));
        foreach (var failure in report.Failures.Take(10))
            Logger.Warning($"[DataTables] {failure}");
        if (report.Failures.Count > 10)
            Logger.Warning($"[DataTables] ... and {report.Failures.Count - 10} more");

        return report;
    }
}
