using System.Collections.Concurrent;
using System.Text.Json;
using M5.Core.Tables;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Character and NPC stat lookups from the game data (Server/Bin/Data, FModel DataTable export):
///   Common/CharacterLevel  - rows (Group 1, AscendLevel 0) per CharLevel: ReqCharExp and parallel StatusType/StatusValue arrays
///   Common/NpcStatusLevel  - per NPC level
///   Common/NpcStatusGrade  - percentage multipliers per stat for a grade
/// Stat names are "EDS_StatusType::Hp", "::Mp", "::PhysicalAttack", "::PhysicalDefense"...
/// </summary>
public static class Mir5Stats
{
    public sealed record LevelRow(int Level, long ReqExp, IReadOnlyDictionary<string, double> Stats);

    private static readonly ConcurrentDictionary<int, LevelRow?> CharLevels = new();
    private static readonly ConcurrentDictionary<int, IReadOnlyDictionary<string, double>> NpcLevels = new();
    private static readonly ConcurrentDictionary<int, IReadOnlyDictionary<string, double>> NpcGrades = new();
    private static Dictionary<int, JsonElement>? _charLevelIndex;

    private static Dictionary<string, double> ReadStats(JsonElement row)
    {
        var d = new Dictionary<string, double>();
        if (row.TryGetProperty("StatusType", out var types) && row.TryGetProperty("StatusValue", out var values))
        {
            var t = types.EnumerateArray().Select(x => (x.GetString() ?? "").Split("::").Last()).ToList();
            var v = values.EnumerateArray().Select(x => x.GetDouble()).ToList();
            for (int i = 0; i < t.Count && i < v.Count; i++) d[t[i]] = v[i];
        }
        return d;
    }

    /// <summary>Stats and exp requirement for a character level, or null past the last level.</summary>
    public static LevelRow? Character(int level)
    {
        return CharLevels.GetOrAdd(level, lv =>
        {
            var table = DataTables.Find("Common/CharacterLevel");
            if (table == null) return null;
            _charLevelIndex ??= table.Rows
                .Where(kv => kv.Value.TryGetProperty("Group", out var g) && g.GetInt32() == 1 &&
                             (!kv.Value.TryGetProperty("AscendLevel", out var a) || a.GetInt32() == 0))
                .ToDictionary(kv => kv.Value.GetProperty("CharLevel").GetInt32(), kv => kv.Value);
            // a level past the table (the GM can set 100 while the table ends at 90) uses the highest row: without any row the client would
            // get no maximum Hp/Mp at all and show empty bars
            int use = lv;
            if (!_charLevelIndex.ContainsKey(use) && _charLevelIndex.Count > 0)
                use = lv > _charLevelIndex.Keys.Max() ? _charLevelIndex.Keys.Max() : _charLevelIndex.Keys.Min();
            return _charLevelIndex.TryGetValue(use, out var row)
                ? new LevelRow(lv, row.TryGetProperty("ReqCharExp", out var e) ? e.GetInt64() : 0, ReadStats(row))
                : null;
        });
    }

    private static readonly ConcurrentDictionary<int, IReadOnlyDictionary<string, double>> PlayerGrades = new();

    /// <summary>
    /// Stats that depend on the player grade (Common/PlayerGrade): Stamina, Vigor, WaitCompleteItemCraft (crafting queue size),
    /// WaitCompleteItemFusion, CharLoadCapacity, ... The client reads these from the same status list as the level stats.
    /// </summary>
    public static IReadOnlyDictionary<string, double> PlayerGrade(int grade) =>
        PlayerGrades.GetOrAdd(grade, g =>
        {
            var table = DataTables.Find("Common/PlayerGrade");
            if (table == null) return new Dictionary<string, double>();
            foreach (var kv in table.Rows)
                if (kv.Value.TryGetProperty("PlayerGrade", out var pg) && pg.GetInt32() == g)
                    return ReadStats(kv.Value);
            return new Dictionary<string, double>();
        });

    public static double Get(IReadOnlyDictionary<string, double>? stats, string name, double fallback = 0) =>
        stats != null && stats.TryGetValue(name, out var v) ? v : fallback;

    public static int MaxCharacterLevel()
    {
        var table = DataTables.Find("Common/CharacterLevel");
        return table == null ? 1 : table.Rows.Select(kv => kv.Value.TryGetProperty("CharLevel", out var l) ? l.GetInt32() : 0).DefaultIfEmpty(1).Max();
    }

    /// <summary>Final NPC stats: NpcStatusLevel[level] scaled by NpcStatusGrade[grade] (percent per stat).</summary>
    public static IReadOnlyDictionary<string, double> Npc(int level, int grade)
    {
        var baseStats = NpcLevels.GetOrAdd(level, lv =>
            DataTables.Find("Common/NpcStatusLevel") is { } t && t.TryGetRow(lv, out var row) ? ReadStats(row) : new Dictionary<string, double>());
        var gradeStats = NpcGrades.GetOrAdd(grade, g =>
            DataTables.Find("Common/NpcStatusGrade") is { } t && t.TryGetRow(g, out var row) ? ReadStats(row) : new Dictionary<string, double>());
        var result = new Dictionary<string, double>();
        foreach (var kv in baseStats)
            result[kv.Key] = kv.Value * (gradeStats.TryGetValue(kv.Key, out var pct) ? pct / 100.0 : 1.0);
        return result;
    }
}
