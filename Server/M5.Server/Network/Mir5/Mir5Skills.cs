using System.Collections.Concurrent;
using System.Text.Json;
using M5.Core.Tables;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Skill definitions from the game data: Common/Skill -> ID_SkillActLevelGroup -> Common/SkillActLevel (cooldown, ID_AttackLink,
/// LinkStartTime) -> Common/SkillAttack (impact shape, range, angle, max targets, damage multiplier, impact times).
/// </summary>
public static class Mir5Skills
{
    public enum Shape { SelfCircle, SelfDirect, TargetCircle, Target }

    /// <summary>One hit group of a skill. Delay = LinkStartTime + ImpactTime, so a multi-hit skill has several.</summary>
    public sealed record AttackDef(int Id, Shape Shape, double Distance, double AngleDeg, double Width, int MaxTargets, double Multiplier,
        double TargetDistance, bool EnemyOnly, IReadOnlyList<double> Delays, int AttackVigor = 0, int HitVigor = 0);

    /// <summary>One resource cost of a skill (SkillActLevel.SkillCostType / SkillCostValueType / SkillCost): "Mp" or "Vigor"; Value = flat, MaxPer = parts per million of the maximum.</summary>
    public sealed record SkillCost(string Type, bool Percent, double Amount);

    public sealed record SkillDef(int Id, string Type, double CooldownSeconds, double TargetDistance, bool Targeting, IReadOnlyList<AttackDef> Attacks,
        IReadOnlyList<SkillCost> Costs);

    private static readonly ConcurrentDictionary<int, SkillDef?> Cache = new();
    private static Dictionary<int, Dictionary<int, JsonElement>>? _actByGroup;

    public static SkillDef? Get(int skillId) => Cache.GetOrAdd(skillId, Load);

    private static SkillDef? Load(int skillId)
    {
        var skills = DataTables.Find("Common/Skill");
        if (skills == null || !skills.TryGetRow(skillId, out var s)) return null;

        string type = s.TryGetProperty("SkillType", out var st) ? (st.GetString() ?? "").Split("::").Last() : "";
        double targetDistance = s.TryGetProperty("TargetDistanceMax", out var td) ? td.GetDouble() : 400;
        bool targeting = s.TryGetProperty("IsTargeting", out var it) && it.ValueKind == JsonValueKind.True;
        int group = s.TryGetProperty("ID_SkillActLevelGroup", out var g) ? g.GetInt32() : 0;

        // ActLevel rows are keyed by their own id; pick the row of this group at skill level 1 (else 0, else the first one).
        _actByGroup ??= BuildActIndex();
        double cooldown = 0;
        var attacks = new List<AttackDef>();
        var costs = new List<SkillCost>();
        if (_actByGroup.TryGetValue(group, out var levels))
        {
            var act = levels.TryGetValue(1, out var l1) ? l1 : levels.TryGetValue(0, out var l0) ? l0 : levels.Values.First();
            if (act.TryGetProperty("CoolTime", out var ct)) cooldown = ct.GetDouble();
            if (act.TryGetProperty("SkillCostType", out var cTypes) && act.TryGetProperty("SkillCostValueType", out var cKinds) && act.TryGetProperty("SkillCost", out var cAmounts))
                for (int i = 0; i < cTypes.GetArrayLength() && i < cKinds.GetArrayLength() && i < cAmounts.GetArrayLength(); i++)
                    costs.Add(new SkillCost((cTypes[i].GetString() ?? "").Split("::").Last(), (cKinds[i].GetString() ?? "").EndsWith("MaxPer"), cAmounts[i].GetDouble()));
            var links = act.TryGetProperty("ID_AttackLink", out var al) ? al.EnumerateArray().Select(x => x.GetInt32()).ToList() : new List<int>();
            var starts = act.TryGetProperty("LinkStartTime", out var ls) ? ls.EnumerateArray().Select(x => x.GetDouble()).ToList() : new List<double>();
            var attackTable = DataTables.Find("Common/SkillAttack");
            for (int i = 0; i < links.Count && attackTable != null; i++)
            {
                if (!attackTable.TryGetRow(links[i], out var a)) continue;
                double start = i < starts.Count ? starts[i] : 0;
                var times = a.TryGetProperty("ImpactTime", out var imp) ? imp.EnumerateArray().Select(x => x.GetDouble()).ToList() : new List<double>();
                if (times.Count == 0) times.Add(0.3);
                string impact = a.TryGetProperty("ImpactType", out var ip) ? (ip.GetString() ?? "").Split("::").Last() : "SelfCircle";
                double mul = a.TryGetProperty("MulDamage", out var md) && md.GetArrayLength() > 0 ? md[0].GetDouble() / 1_000_000.0 : 0;
                attacks.Add(new AttackDef(
                    links[i],
                    Enum.TryParse<Shape>(impact, out var shape) ? shape : Shape.SelfCircle,
                    a.TryGetProperty("AttackDistanceMax", out var ad) ? ad.GetDouble() : 400,
                    a.TryGetProperty("AttackAngle", out var aa) ? aa.GetDouble() : 360,
                    a.TryGetProperty("AttackWidth", out var aw) ? aw.GetDouble() : 0,
                    a.TryGetProperty("TargetValue", out var tv) ? Math.Max(1, tv.GetInt32()) : 1,
                    mul,
                    a.TryGetProperty("TargetDistanceMax", out var atd) ? atd.GetDouble() : targetDistance,
                    !a.TryGetProperty("TargetType", out var tt) || (tt.GetString() ?? "").EndsWith("Enemy"),
                    times.Select(t => start + t).ToList(),
                    a.TryGetProperty("AttackVigorPoint", out var avp) ? avp.GetInt32() : 0,      // Vigor the attacker gains per hit landed
                    a.TryGetProperty("HitVigorPoint", out var hvp) ? hvp.GetInt32() : 0));        // Vigor the defender gains when hit
            }
        }
        return new SkillDef(skillId, type, cooldown, targetDistance, targeting, attacks, costs);
    }

    private static Dictionary<int, Dictionary<int, JsonElement>> BuildActIndex()
    {
        var index = new Dictionary<int, Dictionary<int, JsonElement>>();
        var table = DataTables.Find("Common/SkillActLevel");
        if (table == null) return index;
        foreach (var kv in table.Rows)
        {
            var r = kv.Value;
            if (!r.TryGetProperty("ID_SkillActLevelGroup", out var g)) continue;
            int level = r.TryGetProperty("SkillLevel", out var l) ? l.GetInt32() : 0;
            if (!index.TryGetValue(g.GetInt32(), out var byLevel)) index[g.GetInt32()] = byLevel = new Dictionary<int, JsonElement>();
            byLevel[level] = r;
        }
        return index;
    }
}
