using System.Collections.Concurrent;
using M5.Core.Tables;
using MirProto;
using Comp = MirProto.Components;
using SM = MirProto.ServerMsg;

namespace M5.Server.Network.Mir5;

/// <summary>
/// NPC / monster spawns from Common/NpcSpawn/Island/&lt;island&gt;.json (FieldNormal spawn points) and their live state.
/// A spawn point becomes one shared <see cref="Npc"/> instance (HP, alive flag, respawn time) that every connection sees.
/// Stats come from NpcBase -> NpcBattle (level, grade, faction, exp) and Mir5Stats. No AI or movement yet: NPCs stand at the spawn location.
/// </summary>
public static class Mir5Spawns
{
    public sealed record Spawn(int Id, int NpcBase, double X, double Y, double Z, float Yaw, int Level, int Grade, bool Attackable,
        long Exp, double BodyClear, double RespawnMin, double RespawnMax);

    /// <summary>Runtime state of one spawn point.</summary>
    public sealed class Npc
    {
        public required Spawn S { get; init; }
        public int Island { get; init; }
        public bool Dynamic { get; init; }
        public double MaxHp, Hp, Attack, Defense;
        public bool Alive = true;
        public DateTime RespawnAt;
        public readonly object Lock = new();
        public ulong EntityId => Mir5Spawns.EntityId(S.Id);

        // current position (the spawn point S.X/Y/Z is where it comes back to)
        public double X, Y, Z;
        public float Dir;

        // AI (Mir5Ai.cs): from NpcBase (speeds) and NpcBattle (ranges, attack skills)
        public double WalkSpeed = 300, RunSpeed = 600;
        public double Recognize, Activity = 10000, AttackRange = 300, AttackDelayMin = 1, AttackDelayMax = 2;
        public int[] NormalSkills = [];
        public int[] NormalRates = [];
        public int[] SkillAttacks = [];       // NpcBattle.ID_SkillAttack (many monsters have only these, no normal attacks)
        public int[] SkillRates = [];
        public int[] RangedSkills = [];
        public int[] RangedRates = [];
        public AiMode Mode;
        public long TargetUid;
        public int PlannedSkill;
        public bool PlannedIsSkill;                 // the planned attack comes from the skill / ranged pool (not the normal attacks)
        public DateTime NextAttack, LastSync;
        public bool Moving;

        // non-basic skills: "use a skill every N normal attacks", ranged skills beyond RangedDistance, per-skill cooldowns
        public string SkillCondition = "None";
        public int SkillConditionValue;
        public int NormalAttackCount;
        public double RangedDistance, RangedRate;   // RangedRate in parts per million
        public readonly Dictionary<int, DateTime> SkillReadyAt = new();

        // drops (NpcBattle.ID_DropGroup / ID_FixedDropGroup) and the data to find the zone drop table
        public int DropGroup, FixedDropGroup;
        public int Zone;                            // the spawn row's ID_Zone (achievements: kills per zone / zone group)
        public string BattleGrade = "", BattleType = "";

        // wandering (the spawn row: IsWandering, WanderingRadius, ...)
        public bool IsWandering;
        public double WanderRadius, WanderMin, WanderMax, WaitMin, WaitMax, WanderMaxTime;
        public bool WanderMoving;
        public double WanderX, WanderY;
        public DateTime NextWander, WanderUntil;

        /// <summary>Back at the spawn point with full health and no target (respawn, or end of a leash).</summary>
        public void ResetToSpawn()
        {
            X = S.X; Y = S.Y; Z = S.Z; Dir = S.Yaw;
            Mode = AiMode.Idle; TargetUid = 0; PlannedSkill = 0; Moving = false;
            WanderMoving = false; NextWander = DateTime.MinValue; NormalAttackCount = 0; SkillReadyAt.Clear();
        }
    }

    public enum AiMode { Idle, Chase, Return }

    /// <summary>Distance (world units, cm) within which spawns are sent / dropped.</summary>
    public const double ShowRadius = 20000, HideRadius = 24000;

    private static readonly Dictionary<int, List<Npc>> ByIsland = new();
    private static readonly ConcurrentDictionary<int, Npc> BySpawnId = new();
    private static readonly object Gate = new();

    /// <summary>Entity id for a spawn point. High bit pattern keeps NPC ids apart from player ids (which are the player uid).</summary>
    public static ulong EntityId(int spawnId) => 0x4000_0000_0000_0000UL | (uint)spawnId;
    public static bool IsNpcEntity(ulong id) => (id & 0x4000_0000_0000_0000UL) != 0;
    public static Npc? FromEntity(ulong id) => IsNpcEntity(id) && BySpawnId.TryGetValue((int)(id & 0xFFFF_FFFF), out var n) ? n : null;

    /// <summary>
    /// Dungeon spawn tables (Common/NpcSpawn/Dungeon/&lt;dungeonId&gt;) are kept as pseudo islands: key = DungeonKeyBase + dungeonId.
    /// Dungeons are not instanced; a player sees them while <c>Conn.DungeonId</c> is set, on top of the real island's spawns.
    /// </summary>
    public const int DungeonKeyBase = 1_000_000;
    public static int DungeonKey(int dungeonId) => dungeonId > 0 ? DungeonKeyBase + dungeonId : 0;

    private static readonly HashSet<int> ClearedDungeons = new();

    /// <summary>First call per run of a dungeon returns true (the run is now "cleared"); the mark is dropped by <see cref="ResetDungeon"/>.</summary>
    public static bool MarkDungeonCleared(int dungeonId)
    {
        lock (Gate) return ClearedDungeons.Add(dungeonId);
    }

    /// <summary>Forgets the live state of a dungeon (dead monsters come back) so the next entry starts fresh.</summary>
    public static void ResetDungeon(int dungeonId)
    {
        lock (Gate)
        {
            ClearedDungeons.Remove(dungeonId);
            if (!ByIsland.Remove(DungeonKey(dungeonId), out var old)) return;
            foreach (var n in old) BySpawnId.TryRemove(n.S.Id, out _);
        }
    }

    /// <summary>Alive NPCs of the island plus, when the player is in a dungeon, of that dungeon.</summary>
    public static IEnumerable<Npc> Near(int islandId, int dungeonId, double x, double y, double radius) =>
        dungeonId > 0 ? Near(islandId, x, y, radius).Concat(Near(DungeonKey(dungeonId), x, y, radius)) : Near(islandId, x, y, radius);

    public static List<Npc> ForIsland(int islandId)
    {
        lock (Gate)
        {
            if (ByIsland.TryGetValue(islandId, out var cached)) return cached;
            var list = new List<Npc>();
            try
            {
                bool dungeon = islandId >= DungeonKeyBase;
                int dungeonId = islandId - DungeonKeyBase;
                var table = DataTables.Find(dungeon ? $"Common/NpcSpawn/Dungeon/{dungeonId}" : $"Common/NpcSpawn/Island/{islandId}");
                var npcBase = DataTables.Find("Common/NpcBase");
                var battle = DataTables.Find("Common/NpcBattle");
                if (table != null)
                {
                    foreach (var kv in table.Rows)
                    {
                        var r = kv.Value;
                        if (!r.TryGetProperty("ID_NpcBase", out var ids) || ids.GetArrayLength() == 0) continue;
                        if (!r.TryGetProperty("Location", out var loc)) continue;
                        // spawn ids must be unique across all tables (BySpawnId); dungeon rows are numbered from 1 in every file
                        int spawnId = dungeon ? 100_000_000 + dungeonId * 1000 + int.Parse(kv.Key) : int.Parse(kv.Key);
                        var inst = CreateNpc(spawnId, ids[0].GetInt32(), loc.GetProperty("X").GetDouble(), loc.GetProperty("Y").GetDouble(),
                            loc.GetProperty("Z").GetDouble(), r.TryGetProperty("RotateYaw", out var yaw) ? (float)yaw.GetDouble() : 0f,
                            r.TryGetProperty("RespawnTimeMin", out var rmin) ? rmin.GetDouble() : 40,
                            r.TryGetProperty("RespawnTimeMax", out var rmax) ? rmax.GetDouble() : 60, islandId, dynamic: false);
                        if (inst != null)
                        {
                            inst.Zone = r.TryGetProperty("ID_Zone", out var zid) ? zid.GetInt32() : 0;
                            // wandering comes from the spawn row, not from the monster
                            if (r.TryGetProperty("IsWandering", out var iw) && iw.ValueKind == System.Text.Json.JsonValueKind.True)
                            {
                                inst.IsWandering = true;
                                inst.WanderRadius = r.TryGetProperty("WanderingRadius", out var wr) ? wr.GetDouble() : 0;
                                inst.WanderMin = r.TryGetProperty("WanderingMinRadius", out var wmin) ? wmin.GetDouble() : 0;
                                inst.WanderMax = r.TryGetProperty("WanderingMaxRadius", out var wmax) ? wmax.GetDouble() : 0;
                                inst.WaitMin = r.TryGetProperty("WanderingWaitTimeMin", out var wtmin) ? wtmin.GetDouble() : 3;
                                inst.WaitMax = r.TryGetProperty("WanderingWaitTimeMax", out var wtmax) ? Math.Max(inst.WaitMin, wtmax.GetDouble()) : inst.WaitMin + 3;
                                inst.WanderMaxTime = r.TryGetProperty("WanderingMaxTime", out var wmt) ? wmt.GetDouble() : 0;
                            }
                            list.Add(inst);
                        }
                    }
                }
                M5.Core.Logger.Info($"[Mir5Spawns] {(dungeon ? $"dungeon {dungeonId}" : $"island {islandId}")}: {list.Count} spawn points ({list.Count(n => n.S.Attackable)} attackable)");
            }
            catch (Exception ex) { M5.Core.Logger.Warning($"[Mir5Spawns] island {islandId} load failed: {ex.Message}"); }
            return ByIsland[islandId] = list;
        }
    }

    /// <summary>Builds the shared state of one NPC from NpcBase -> NpcBattle (level, grade, faction, exp, body clear time).</summary>
    private static Npc? CreateNpc(int spawnId, int npcBaseId, double x, double y, double z, float yaw, double respawnMin, double respawnMax, int island, bool dynamic)
    {
        if (npcBaseId <= 0) return null;
        var npcBase = DataTables.Find("Common/NpcBase");
        var battle = DataTables.Find("Common/NpcBattle");
        int level = 1, grade = 0; bool attackable = false; long exp = 0; double bodyClear = 6;
        double walk = 300, run = 600, recognize = 0, activity = 10000, attackRange = 300, delayMin = 1, delayMax = 2;
        int[] skills = [], rates = [], skillAtk = [], skillAtkRates = [], ranged = [], rangedRates = [];
        string condition = "None", grade2 = "", battleType = ""; int condValue = 0, dropGroup = 0, fixedDrop = 0; double rangedDist = 0, rangedRate = 0;
        if (npcBase != null && npcBase.TryGetRow(npcBaseId, out var nb))
        {
            if (nb.TryGetProperty("BodyClearTime", out var bc)) bodyClear = bc.GetDouble();
            if (nb.TryGetProperty("WalkSpeed", out var ws) && ws.GetDouble() > 0) walk = ws.GetDouble();
            if (nb.TryGetProperty("RunSpeed", out var rs) && rs.GetDouble() > 0) run = rs.GetDouble();
            if (nb.TryGetProperty("NpcBattleGrade", out var nbg)) grade2 = (nbg.GetString() ?? "").Split("::").Last();
            if (nb.TryGetProperty("ID_NpcBattle", out var nbId) && battle != null && battle.TryGetRow(nbId.GetInt64(), out var nbat))
            {
                if (nbat.TryGetProperty("NpcLevel", out var lv)) level = Math.Max(1, lv.GetInt32());
                if (nbat.TryGetProperty("ID_NpcStatusGrade", out var g)) grade = g.GetInt32();
                if (nbat.TryGetProperty("CharExp", out var ce)) exp = ce.GetInt64();
                attackable = nbat.TryGetProperty("FactionType", out var f) && (f.GetString() ?? "").EndsWith("BattleNpc");
                if (nbat.TryGetProperty("RecognizeRadius", out var rr)) recognize = rr.GetDouble();
                if (nbat.TryGetProperty("BattleActivityRange", out var bar) && bar.GetDouble() > 0) activity = bar.GetDouble();
                if (nbat.TryGetProperty("AttackRangeGround", out var arg) && arg.GetDouble() > 0) attackRange = arg.GetDouble();
                else if (nbat.TryGetProperty("AttackRangeMax", out var arm) && arm.GetDouble() > 0) attackRange = arm.GetDouble();
                if (nbat.TryGetProperty("AttackDelayMin", out var dmin)) delayMin = dmin.GetDouble();
                if (nbat.TryGetProperty("AttackDelayMax", out var dmax)) delayMax = Math.Max(delayMin, dmax.GetDouble());
                if (nbat.TryGetProperty("ID_NormalAttack", out var na)) skills = na.EnumerateArray().Select(x => x.GetInt32()).Where(x => x > 0).ToArray();
                if (nbat.TryGetProperty("NormalAttackRate", out var nr)) rates = nr.EnumerateArray().Select(x => x.GetInt32()).ToArray();
                if (nbat.TryGetProperty("ID_SkillAttack", out var sa)) skillAtk = sa.EnumerateArray().Select(x => x.GetInt32()).Where(x => x > 0).ToArray();
                if (nbat.TryGetProperty("SkillAttackRate", out var sr)) skillAtkRates = sr.EnumerateArray().Select(x => x.GetInt32()).ToArray();
                if (nbat.TryGetProperty("ID_RangedSkillAttack", out var ra)) ranged = ra.EnumerateArray().Select(x => x.GetInt32()).Where(x => x > 0).ToArray();
                if (nbat.TryGetProperty("RangedSkillAttackRate", out var rr2)) rangedRates = rr2.EnumerateArray().Select(x => x.GetInt32()).ToArray();
                if (nbat.TryGetProperty("SkillAttackConditionType", out var sct)) condition = (sct.GetString() ?? "None").Split("::").Last();
                if (nbat.TryGetProperty("SkillAttackConditionValue", out var scv)) condValue = scv.GetInt32();
                if (nbat.TryGetProperty("RangedDistance", out var rdist)) rangedDist = rdist.GetDouble();
                if (nbat.TryGetProperty("RangedAttackRate", out var rrate)) rangedRate = rrate.GetDouble();
                if (nbat.TryGetProperty("ID_DropGroup", out var dg)) dropGroup = dg.GetInt32();
                if (nbat.TryGetProperty("ID_FixedDropGroup", out var fdg)) fixedDrop = fdg.GetInt32();
                if (nbat.TryGetProperty("NpcBattleType", out var nbt)) battleType = (nbt.GetString() ?? "").Split("::").Last();
            }
        }
        else if (dynamic) return null;   // unknown NpcBase id

        var spawn = new Spawn(spawnId, npcBaseId, x, y, z, yaw, level, grade, attackable, exp, bodyClear, respawnMin, respawnMax);
        var stats = Mir5Stats.Npc(level, grade);
        var inst = new Npc
        {
            S = spawn,
            Island = island,
            Dynamic = dynamic,
            MaxHp = Math.Max(1, Mir5Stats.Get(stats, "Hp", 500)),
            Attack = Mir5Stats.Get(stats, "PhysicalAttack", 50),
            Defense = Mir5Stats.Get(stats, "PhysicalDefense", 0),
            WalkSpeed = walk, RunSpeed = run, Recognize = recognize, Activity = activity, AttackRange = attackRange,
            AttackDelayMin = delayMin, AttackDelayMax = delayMax, NormalSkills = skills, NormalRates = rates,
            SkillAttacks = skillAtk, SkillRates = skillAtkRates, RangedSkills = ranged, RangedRates = rangedRates,
            SkillCondition = condition, SkillConditionValue = condValue, RangedDistance = rangedDist, RangedRate = rangedRate,
            DropGroup = dropGroup, FixedDropGroup = fixedDrop, BattleGrade = grade2, BattleType = battleType,
        };
        inst.Hp = inst.MaxHp;
        inst.ResetToSpawn();
        BySpawnId[spawnId] = inst;
        return inst;
    }

    private static int _nextDynamicId = 2_000_000_000;

    /// <summary>GM spawn (NpcMake): a one-off NPC at a position. It does not respawn and is dropped after it dies.</summary>
    public static Npc? SpawnDynamic(int island, int npcBaseId, double x, double y, double z, float yaw)
    {
        var list = ForIsland(island);
        var npc = CreateNpc(Interlocked.Increment(ref _nextDynamicId), npcBaseId, x, y, z, yaw, 0, 0, island, dynamic: true);
        if (npc == null) return null;
        lock (list) list.Add(npc);
        return npc;
    }

    public static void DropDynamic(Npc npc)
    {
        if (!npc.Dynamic) return;
        lock (ForIsland(npc.Island)) ForIsland(npc.Island).Remove(npc);
        BySpawnId.TryRemove(npc.S.Id, out _);
    }
    public static IEnumerable<Npc> Near(int islandId, double x, double y, double radius)
    {
        double r2 = radius * radius;
        var list = ForIsland(islandId);
        Npc[] snapshot;
        lock (list) snapshot = list.ToArray();
        foreach (var n in snapshot)
        {
            if (!n.Alive) continue;
            double dx = n.X - x, dy = n.Y - y;
            if (dx * dx + dy * dy <= r2) yield return n;
        }
    }

    public static double Distance2(Npc n, double x, double y) { double dx = n.X - x, dy = n.Y - y; return dx * dx + dy * dy; }

    /// <summary>SpawnNpcResponse (ServerMessages 12) for a live NPC, with its current HP.</summary>
    public static SM.ServerMessages Build(Npc n, ulong? rider = null, uint seat = 0)
    {
        var s = n.S;
        double rad = n.Dir * Math.PI / 180.0;
        var data = new SM.NpcData
        {
            NpcId = s.NpcBase,
            Position = new MirProto.Vector { X = n.X, Y = n.Y, Z = n.Z },
            Direction = new VectorF { X = 0, Y = n.Dir, Z = 0 },     // a rotator: the client reads the yaw (degrees) from y (FDS_SpawnService)
            Level = s.Level,
            Destination = new MirProto.Vector { X = n.X, Y = n.Y, Z = n.Z },
            NpcSpawnId = new SM.NpcSpawnId { NpcSpawnId_ = s.Id },
            CurrentStatus = new SM.StatusIntegers(),
            MaxStatus = new SM.StatusFloats(),
        };
        data.CurrentStatus.StatusList.Add(new SM.StatusInteger { StatusType = StatusType.Hp, StatusValue = (int)Math.Ceiling(n.Hp) });
        data.MaxStatus.StatusList.Add(new SM.StatusFloat { StatusType = StatusType.Hp, StatusValue = (float)n.MaxHp });
        var spawn = new SM.SpawnNpcResponse { EntityId = n.EntityId, NpcData = data, MoveMode = Comp.MoveMode.Idle, IsNew = true };
        if (rider != null)    // a mount: the client builds its mount data from the rider list (UDS_NPCMountData::UpdateByRiderInfo)
        {
            spawn.RiderInfo = new SM.RiderStatus();
            spawn.RiderInfo.Riders.Add(new SM.Rider { EntityId = rider.Value, SeatIndex = seat });
        }
        return new SM.ServerMessages { SpawnNpcRes = spawn };
    }

    public static SM.ServerMessages Remove(IEnumerable<int> spawnIds)
    {
        var res = new SM.RemoveEntitiesResponse();
        foreach (var id in spawnIds) res.EntityIds.Add(EntityId(id));
        return new SM.ServerMessages { RemoveEntitiesRes = res };
    }
}
