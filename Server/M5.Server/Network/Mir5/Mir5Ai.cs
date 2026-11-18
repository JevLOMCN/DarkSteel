using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using Comp = MirProto.Components;
using CMT = MirProto.ClientMsgTwoway;
using SM = MirProto.ServerMsg;
using SMT = MirProto.ServerMsgTwoway;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Monster AI and player health, server side (the client only plays what it is told):
///   Idle   - a player inside NpcBattle.RecognizeRadius becomes the target (also: whoever hit the monster)
///   Chase  - the monster walks at NpcBase.RunSpeed towards the target; the client animates it from NetSyncResponse (position + destination +
///            move mode), re-sent about twice a second while it moves; the server integrates the same movement
///   Attack - in reach of a weighted pick of NpcBattle.ID_NormalAttack: CastSkillTargetEntityResponse (the animation) and, at the skill's impact
///            times, GroupDamageEventResponse against the player (damage = monster PhysicalAttack x skill multiplier, reduced by the player's defense)
///   Return - target dead / gone, or the monster is further than BattleActivityRange from its spawn: it walks back and heals
/// Players: current health lives on the connection (<c>Hp</c>, -1 = full). Damage updates the client through MyCurrentStatusResponse (own bar)
/// and CurrentStatusResponse (others); at 0 the player gets DiedResponse.MainDied, may press resurrect (ResurrectWarpReq) or is revived
/// after 15 s. Out of combat for 6 s the player regenerates 3% of the maximum per second.
/// Not implemented: wandering, skill (non-normal) attacks, aggro lists / threat, party aggro sharing, drops, PK.
/// </summary>
public static partial class Mir5GameServer
{
    private static readonly TimeSpan AiTick = TimeSpan.FromMilliseconds(200);
    private const double AiSyncSeconds = 0.6;

    /// <summary>Optional upper limit for the automatic revive timer in seconds; 0 = use the ResurrectionWaiting data as is (the official values).</summary>
    public static double MaxAutoReviveSeconds = 0;
    private const double AutoResurrectSeconds = 15;

    // ---- player health ----

    private static double PlayerMaxHp(Conn c) => Math.Max(1, Mir5Stats.Get(Mir5Stats.Character(c.Level)?.Stats, "Hp", 1000));

    private static void EnsureHp(Conn c) { lock (c) if (c.Hp < 0) c.Hp = PlayerMaxHp(c); }

    private static double PlayerMaxMp(Conn c) => Math.Max(0, Mir5Stats.Get(Mir5Stats.Character(c.Level)?.Stats, "Mp", 0));

    private static void EnsureMp(Conn c) { lock (c) if (c.Mp < 0) c.Mp = PlayerMaxMp(c); }

    // Vigor is the gauge for special skills: it fills from AttackVigorPoint (a hit you land) and HitVigorPoint (a hit you take) and from RegenVigor,
    // and special skills cost a share of it. The maximum is the PlayerGrade value (100000), which is what the Status() message tells the client.

    /// <summary>Multiplier on Vigor gained from attacks and hits (the data values are small against the 100000 maximum).</summary>
    public static double VigorGainScale = 1;

    private static double PlayerMaxVigor(Conn c) => Math.Max(1, Mir5Stats.Get(Mir5Stats.PlayerGrade(1), "Vigor", 100000));

    /// <summary>A fresh character starts with a full gauge so the special skills can be tried at once.</summary>
    private static void EnsureVigor(Conn c) { lock (c) if (c.Vigor < 0) c.Vigor = PlayerMaxVigor(c); }

    private static void GainVigor(Conn c, double amount)
    {
        if (amount <= 0) return;
        EnsureVigor(c);
        lock (c) c.Vigor = Math.Min(PlayerMaxVigor(c), c.Vigor + amount * VigorGainScale);
    }

    /// <summary>
    /// Takes the Mp and Vigor cost of a skill. Costs are either a flat amount (Mp) or parts per million of the maximum (MaxPer, and the
    /// Vigor "Value" rows which are also given in parts per million). Nothing is taken unless every cost can be paid.
    /// </summary>
    private static ErrorCode TryPaySkill(Conn c, Mir5Skills.SkillDef skill)
    {
        double mpCost = 0, vigorCost = 0;
        foreach (var k in skill.Costs)
        {
            if (k.Type == "Mp") mpCost += k.Percent ? PlayerMaxMp(c) * k.Amount / 1_000_000.0 : k.Amount;
            else if (k.Type == "Vigor") vigorCost += PlayerMaxVigor(c) * k.Amount / 1_000_000.0;
        }
        if (mpCost <= 0 && vigorCost <= 0) return ErrorCode.Success;
        EnsureMp(c); EnsureVigor(c);
        lock (c)
        {
            if (c.Mp + 0.001 < mpCost) return ErrorCode.CastSkillNotEnoughMp;
            if (c.Vigor + 0.001 < vigorCost) return ErrorCode.CastSkillNotEnoughVigor;
            c.Mp = Math.Max(0, c.Mp - mpCost);
            c.Vigor = Math.Max(0, c.Vigor - vigorCost);
            return ErrorCode.Success;
        }
    }

    /// <summary>
    /// Own Hp + Mp. Sent two ways: MyCurrentStatusResponse (the login-time message, handled by FDS_LoginService) and CurrentStatusResponse keyed by the
    /// player's entity id (FDS_CharacterService, the one that stays registered in the world). Both carry Mp so that a partial list can never blank it.
    /// </summary>
    private static async Task PushMyHpAsync(Conn c)
    {
        EnsureHp(c);
        EnsureMp(c);
        EnsureVigor(c);
        double mp = c.Mp, vigor = c.Vigor;
        var cur = new SM.MyCurrentStatusResponse { CharId = c.CharId };
        cur.StatusList.Add(new SM.StatusFloat { StatusType = StatusType.Hp, StatusValue = (float)c.Hp });
        cur.StatusList.Add(new SM.StatusFloat { StatusType = StatusType.Mp, StatusValue = (float)mp });
        cur.StatusList.Add(new SM.StatusFloat { StatusType = StatusType.Vigor, StatusValue = (float)vigor });
        await c.Plain(new SM.ServerMessages { MyCurrentStatusRes = cur });

        var ints = new SM.StatusIntegers();
        ints.StatusList.Add(new SM.StatusInteger { StatusType = StatusType.Hp, StatusValue = (int)Math.Ceiling(c.Hp) });
        ints.StatusList.Add(new SM.StatusInteger { StatusType = StatusType.Mp, StatusValue = (int)mp });
        ints.StatusList.Add(new SM.StatusInteger { StatusType = StatusType.Vigor, StatusValue = (int)vigor });
        var status = new SM.CurrentStatusResponse();
        status.Stats[Mir5World.EntityBits(c.PlayerUid)] = ints;
        await c.Plain(new SM.ServerMessages { CurrentStatusRes = status });
    }

    /// <summary>What the death popup needs: ResurrectionWaiting row, the warp location "base" resurrection goes to, and the timers.</summary>
    private sealed record DeathInfo(int WaitId, int WarpId, float WaitSeconds, float AutoSeconds);

    private static DeathInfo DeathInfoFor(Conn c)
    {
        int waitId = 1, warp = 0;
        if (c.DungeonId > 0 && DataTables.Find("Common/DungeonBase") is { } dungeons && dungeons.TryGetRow(c.DungeonId, out var d))
        {
            waitId = d.TryGetProperty("ID_ResurrectionWaiting", out var w) && w.GetInt32() > 0 ? w.GetInt32() : 21;
            warp = d.TryGetProperty("ID_WarpLocation", out var wl) ? wl.GetInt32() : 0;
        }
        else
        {
            int zone = (int)Mir5World.GetZone(c.IslandId).Zone;
            if (DataTables.Find("Common/ZoneBase") is { } zones && zones.TryGetRow(zone, out var z))
            {
                if (z.TryGetProperty("ID_ResurrectionWaiting", out var w) && w.GetInt32() > 0) waitId = w.GetInt32();
                if (z.TryGetProperty("ID_FixedReturnWarpLocation", out var fr)) warp = fr.GetInt32();
            }
            if (DataTables.Find("Common/ZoneResurrection") is { } res)
                foreach (var kv in res.Rows)
                    if (kv.Value.TryGetProperty("ID_Zone", out var rz) && rz.GetInt32() == zone && kv.Value.TryGetProperty("ID_WarpLocation", out var rw) && rw.GetInt32() > 0)
                    { warp = rw.GetInt32(); break; }
        }
        float wait = 3, auto = 90;
        if (DataTables.Find("Common/ResurrectionWaiting") is { } rt && rt.TryGetRow(waitId, out var r))
        {
            if (r.TryGetProperty("ResurrectionWaitingTimeSec", out var ws)) wait = (float)ws.GetDouble();
            if (r.TryGetProperty("AutoResurrectionTimeSec", out var asec)) auto = (float)asec.GetDouble();
        }
        // the data has e.g. 1200 s for some dungeons (row 1001); on a test server that is just a long wait
        if (MaxAutoReviveSeconds > 0 && auto > MaxAutoReviveSeconds)
        {
            Logger.Info($"[Mir5Ai] auto revive {auto:0}s from ResurrectionWaiting {waitId} capped to {MaxAutoReviveSeconds:0}s");
            auto = (float)MaxAutoReviveSeconds;
        }
        return new DeathInfo(waitId, warp, wait, auto);
    }

    private static async Task PushHpToOthersAsync(Conn c)
    {
        var hp = new SM.StatusIntegers();
        hp.StatusList.Add(new SM.StatusInteger { StatusType = StatusType.Hp, StatusValue = (int)Math.Ceiling(c.Hp) });
        var status = new SM.CurrentStatusResponse();
        status.Stats[Mir5World.EntityBits(c.PlayerUid)] = hp;
        await BroadcastNearAsync(c.IslandId, c.X, c.Y, new SM.ServerMessages { CurrentStatusRes = status }, except: c);
    }

    private static int DungeonWarpLocation(int dungeonId) =>
        DataTables.Find("Common/DungeonBase") is { } t && t.TryGetRow(dungeonId, out var row) && row.TryGetProperty("ID_WarpLocation", out var w) ? w.GetInt32() : 0;

    /// <summary>OnDamage to a player: lowers health (unless GM immortal), tells everybody, handles death.</summary>
    private static async Task DamagePlayerAsync(Conn p, Mir5Spawns.Npc by, int skillAttackId, int amount, int hitVigor = 0)
    {
        bool died = false;
        EnsureHp(p);
        GainVigor(p, hitVigor);
        lock (p)
        {
            if (p.Dead) return;
            if (!p.Immortal) p.Hp = Math.Max(0, p.Hp - amount);
            p.LastHit = DateTime.UtcNow;
            if (p.Hp <= 0) { p.Dead = true; died = true; }
        }
        double now = ServerTicks();
        var events = new SM.GroupDamageEventResponse();
        events.DamageEvents.Add(new SM.DamageEvent
        {
            AttackerEntityId = by.EntityId, DefenderEntityId = Mir5World.EntityBits(p.PlayerUid),
            Damage = new Damage { Amount = p.Immortal ? 0 : amount }, SkillAttackId = skillAttackId, DamageInfo = DamageMessage.DamageHit,
            ExecuteTime = now, EventTime = now,
        });
        await BroadcastNearAsync(p.IslandId, p.X, p.Y, new SM.ServerMessages { GroupDamageEventRes = events });
        await PushMyHpAsync(p);
        await PushHpToOthersAsync(p);
        Logger.Info($"[Mir5Ai] npc {by.S.NpcBase} hits {p.Nickname} for {amount}{(p.Immortal ? " (immortal)" : "")}: hp {p.Hp:0}/{PlayerMaxHp(p):0}");

        if (!died) return;
        await AchEventAsync(p, "PlayerDying");
        var info = DeathInfoFor(p);
        p.DeathWarp = info.WarpId;
        p.DeathCount++;
        Logger.Info($"[Mir5Ai] {p.Nickname} was killed by npc {by.S.NpcBase} (resurrection waiting {info.WaitId}, base warp {info.WarpId}, auto revive in {info.AutoSeconds:0}s)");
        await p.Plain(new SM.ServerMessages
        {
            DiedRes = new SM.DiedResponse
            {
                MainDied = new SM.MainDied
                {
                    DeathType = DeathType.Npc, WarpNameId = info.WarpId, AccCount = p.DeathCount, WaitResurrect = info.WaitSeconds, AutoResurrect = info.AutoSeconds,
                    AttackerUid = by.S.NpcBase,       // for an NPC killer the client looks the NpcBase row up by this id to print "Killed by <name>"
                    AttackerName = "", ResurrectWaitId = info.WaitId,
                },
            },
        });
        await BroadcastNearAsync(p.IslandId, p.X, p.Y, new SM.ServerMessages
        {
            DiedRes = new SM.DiedResponse { EntityDied = new SM.EntityDied { EntityId = Mir5World.EntityBits(p.PlayerUid), EntityDead = new SM.EntityDead { DeadType = SM.EntityDeadType.EntitySuicide } } },
        }, except: p);
        _ = Task.Run(async () =>
        {
            await Task.Delay(TimeSpan.FromSeconds(info.AutoSeconds));
            if (p.Dead) { try { await ReviveAsync(p, ResurrectType.Base); } catch (Exception ex) { Logger.Warning($"[Mir5Ai] auto revive failed: {ex.Message}"); } }
        });
    }

    /// <summary>ResurrectWarpReq (20503): the death popup's "revive" button.</summary>
    private static async Task OnResurrectAsync(Conn c, int field, CMT.ResurrectWarpRequest req)
    {
        await c.Twoway(Reply(field, new SMT.ResurrectWarpResponse()));
        if (c.Dead) await ReviveAsync(c, req.ResurrectType, clientWarp: true);
    }

    /// <summary>
    /// Revives the player. With <paramref name="clientWarp"/> (the player pressed a Base / Inn / System button) the client has started its warp ability and
    /// is waiting for the warp sequence: PrepareWarp (type Resurrect) -> WarpLoading -> WarpStart -> WarpArrive, after which ResurrectRes ends the death
    /// state (<see cref="FinishReviveAsync"/>). Without it (the automatic revive timer) the player is simply teleported.
    /// </summary>
    private static async Task ReviveAsync(Conn c, ResurrectType type, bool clientWarp = false)
    {
        lock (c) { if (!c.Dead) return; c.Dead = false; c.Hp = -1; c.Mp = -1; }
        EnsureHp(c);
        EnsureMp(c);
        Logger.Info($"[Mir5Ai] {c.Nickname} revives ({type}{(clientWarp ? ", client warp" : "")})");
        await PushMyHpAsync(c);

        // Instant / Buff stand up where they fell; Inn goes to the player's return-home inn (leaving a dungeon); the others to the base the popup names
        // (in a dungeon its entrance)
        int warp = 0;
        if (type is not (ResurrectType.Instant or ResurrectType.Buff))
        {
            if (type == ResurrectType.Inn || c.DeathWarp <= 0)
            {
                warp = await ReturnHomeWarpAsync(c);
                if (c.DungeonId > 0) await LeaveDungeonAsync(c);
            }
            else warp = c.DeathWarp;
        }
        Logger.Info($"[Mir5Ai] {c.Nickname} revive warp location {warp}");

        if (clientWarp && warp > 0)
        {
            c.PendingResurrect = type;
            if (await StartDeviceWarpAsync(c, warp, WarpType.Resurrect)) return;     // FinishReviveAsync runs when the client reports WarpArrive
            c.PendingResurrect = null;
        }
        // tell the client first (its entity is still where it died), then move it
        await FinishReviveAsync(c, type);
        if (warp > 0) await TeleportToLocationAsync(c, warp);
        await PushHpToOthersAsync(c);
    }

    /// <summary>ResurrectResponse: the client leaves the death state.</summary>
    private static async Task FinishReviveAsync(Conn c, ResurrectType type)
    {
        await BroadcastNearAsync(c.IslandId, c.X, c.Y, new SM.ServerMessages
        {
            ResurrectRes = new SM.ResurrectResponse { ErrorCode = ErrorCode.Success, EntityId = Mir5World.EntityBits(c.PlayerUid), ResurrectType = type },
        });
        await PushMyHpAsync(c);
        await PushHpToOthersAsync(c);
    }

    /// <summary>The first warp location of the player's return home (ds_game.return_home -> Common/ReturnHome.ID_WarpLacation[0]).</summary>
    private static async Task<int> ReturnHomeWarpAsync(Conn c)
    {
        var st = await DsPlayerRepository.GetCharacterAsync(c.PlayerUid);
        int home = st?.ReturnHomeId ?? 0;
        if (home > 0 && DataTables.Find("Common/ReturnHome") is { } t && t.TryGetRow(home, out var row) &&
            row.TryGetProperty("ID_WarpLacation", out var list) && list.GetArrayLength() > 0)
            return list[0].GetInt32();
        return FirstWarpLocationOfIsland(1);
    }

    /// <summary>The player leaves the dungeon he is in without the usual teleport back (he is being moved somewhere else).</summary>
    private static async Task LeaveDungeonAsync(Conn c)
    {
        RaidParty? p;
        lock (RaidLock) p = RaidOfPlayer.TryGetValue(c.PlayerUid, out var id) && RaidParties.TryGetValue(id, out var found) ? found : null;
        if (p != null) { await RaidBringOutAsync(c, p, teleport: false); return; }
        int left = c.DungeonId;
        c.DungeonId = 0;
        if (left > 0 && !Connections.Values.Any(v => v != c && v.DungeonId == left)) Mir5Spawns.ResetDungeon(left);
    }

    // ---- the loop ----

    private static async Task AiLoopAsync()
    {
        var last = DateTime.UtcNow; var lastRegen = last;
        while (true)
        {
            await Task.Delay(AiTick);
            var now = DateTime.UtcNow;
            double dt = Math.Min(0.5, (now - last).TotalSeconds);
            last = now;
            try
            {
                var players = Connections.Values.Where(p => p.InWorld).ToList();
                if (players.Count == 0) continue;
                var npcs = players.SelectMany(p => p.Visible.Values).Where(n => n.Alive && n.S.Attackable && !n.Dynamic).Distinct().ToList();
                foreach (var n in npcs)
                {
                    try { await StepNpcAsync(n, players, dt, now); }
                    catch (Exception ex) { Logger.Warning($"[Mir5Ai] npc {n.S.NpcBase} (spawn {n.S.Id}) step failed: {ex.Message}"); }
                }
                if ((now - lastRegen).TotalSeconds >= 1)
                {
                    lastRegen = now;
                    foreach (var p in players) await RegenAsync(p, now);
                }
            }
            catch (Exception ex) { Logger.Warning($"[Mir5Ai] loop error: {ex.Message}"); }
        }
    }

    private static async Task RegenAsync(Conn p, DateTime now)
    {
        if (p.Dead) return;
        bool changed = false, hpChanged = false;
        // Hp: 3% of the maximum per second once out of combat for 6 s. Mp: the level's RegenMp per second, always.
        if (p.Hp >= 0 && (now - p.LastHit).TotalSeconds >= 6)
        {
            double max = PlayerMaxHp(p);
            if (p.Hp < max) { lock (p) p.Hp = Math.Min(max, p.Hp + max * 0.03); changed = hpChanged = true; }
        }
        if (p.Mp >= 0)
        {
            double maxMp = PlayerMaxMp(p), regen = Mir5Stats.Get(Mir5Stats.Character(p.Level)?.Stats, "RegenMp", 0);
            if (regen > 0 && p.Mp < maxMp) { lock (p) p.Mp = Math.Min(maxMp, p.Mp + regen); changed = true; }
        }
        if (p.Vigor >= 0)
        {
            double maxV = PlayerMaxVigor(p), regenV = Mir5Stats.Get(Mir5Stats.PlayerGrade(1), "RegenVigor", 0);
            if (regenV > 0 && p.Vigor < maxV) { lock (p) p.Vigor = Math.Min(maxV, p.Vigor + regenV); changed = true; }
        }
        if (!changed) return;
        await PushMyHpAsync(p);
        if (hpChanged) await PushHpToOthersAsync(p);
    }

    // ---- one monster ----

    private static bool InContext(Conn p, Mir5Spawns.Npc n) => p.IslandId == n.Island || Mir5Spawns.DungeonKey(p.DungeonId) == n.Island;
    private static double Dist(double ax, double ay, double bx, double by) { double dx = ax - bx, dy = ay - by; return Math.Sqrt(dx * dx + dy * dy); }

    private static async Task SendToViewersAsync(IEnumerable<Conn> viewers, SM.ServerMessages msg)
    {
        foreach (var v in viewers)
            try { await v.Plain(msg); } catch { /* connection closing */ }
    }

    private static SM.ServerMessages NpcSync(Mir5Spawns.Npc n, bool moving, double tx, double ty, double tz, Comp.MoveMode mode)
    {
        double rad = n.Dir * Math.PI / 180.0, speed = mode == Comp.MoveMode.Walk ? n.WalkSpeed : n.RunSpeed;
        return new SM.ServerMessages
        {
            NetSyncRes = new SM.NetSyncResponse
            {
                EntityId = n.EntityId,
                Position = new MirProto.Vector { X = n.X, Y = n.Y, Z = n.Z },
                Direction = new VectorF { X = 0, Y = n.Dir, Z = 0 },     // NetSync "direction" is a rotator (pitch, yaw, roll in degrees), not a vector
                Velocity = new VectorF { X = moving ? (float)(Math.Cos(rad) * speed) : 0, Y = moving ? (float)(Math.Sin(rad) * speed) : 0, Z = 0 },
                VelocityState = moving ? VelocityState.ConstantVelocity : VelocityState.Stop,
                Ticks = ServerTicks(),
                MoveMode = moving ? mode : Comp.MoveMode.Idle,
                Destination = new MirProto.Vector { X = tx, Y = ty, Z = tz },
            },
        };
    }

    /// <summary>Weighted pick among the skills of a pool that are off cooldown (0 when none is ready).</summary>
    private static int PickReady(Mir5Spawns.Npc n, int[] pool, int[] rates, DateTime now)
    {
        var ready = new List<(int Id, int Weight)>();
        for (int i = 0; i < pool.Length; i++)
            if (!n.SkillReadyAt.TryGetValue(pool[i], out var at) || at <= now)
                ready.Add((pool[i], i < rates.Length ? Math.Max(0, rates[i]) : 1));
        if (ready.Count == 0) return 0;
        int total = ready.Sum(r => r.Weight);
        if (total <= 0) return ready[0].Id;
        int roll = Rng.Next(total);
        foreach (var r in ready) { roll -= r.Weight; if (roll < 0) return r.Id; }
        return ready[0].Id;
    }

    /// <summary>
    /// Chooses the monster's next attack, given how far the target is:
    ///   ranged skills (ID_RangedSkillAttack) when the target is at least RangedDistance away (with probability RangedAttackRate);
    ///   a skill attack (ID_SkillAttack) every SkillAttackConditionValue-th normal attack (condition NormalAttackUseCount), otherwise one turn in four,
    ///   or always when the monster has no normal attacks; normal attacks (ID_NormalAttack) otherwise.
    /// Skills that are still cooling down (Skill CoolTime) are skipped; if nothing in the chosen pool is ready it falls back to the normal attacks.
    /// </summary>
    private static void PlanAttack(Mir5Spawns.Npc n, double dist, DateTime now)
    {
        int[] pool; int[] rates; bool isSkill;
        if (n.RangedSkills.Length > 0 && n.RangedDistance > 0 && dist >= n.RangedDistance && Rng.NextDouble() < Math.Min(1, n.RangedRate / 1_000_000.0))
        { pool = n.RangedSkills; rates = n.RangedRates; isSkill = true; }
        else
        {
            bool skillTurn;
            if (n.SkillAttacks.Length == 0) skillTurn = false;
            else if (n.NormalSkills.Length == 0) skillTurn = true;
            else if (n.SkillCondition == "NormalAttackUseCount") skillTurn = n.SkillConditionValue > 0 && n.NormalAttackCount >= n.SkillConditionValue;
            else skillTurn = Rng.Next(4) == 0;
            if (skillTurn) { pool = n.SkillAttacks; rates = n.SkillRates; isSkill = true; }
            else { pool = n.NormalSkills; rates = n.NormalRates; isSkill = false; }
            if (pool.Length == 0) { pool = n.RangedSkills; rates = n.RangedRates; isSkill = true; }
        }
        int pick = PickReady(n, pool, rates, now);
        if (pick == 0 && isSkill) { pick = PickReady(n, n.NormalSkills, n.NormalRates, now); isSkill = false; }
        n.PlannedSkill = pick;
        n.PlannedIsSkill = isSkill && pick != 0;
    }

    /// <summary>One wandering step for an idle monster (spawn rows with IsWandering): walk a short way, stand for a while, repeat, staying within WanderingRadius of the spawn.</summary>
    private static async Task WanderAsync(Mir5Spawns.Npc n, List<Conn> viewers, double dt, DateTime now)
    {
        var s = n.S;
        if (n.NextWander == DateTime.MinValue) n.NextWander = now + TimeSpan.FromSeconds(n.WaitMin + Rng.NextDouble() * Math.Max(0, n.WaitMax - n.WaitMin));
        if (!n.WanderMoving)
        {
            if (now < n.NextWander) return;
            double radius = Math.Max(100, n.WanderRadius), ang = Rng.NextDouble() * Math.PI * 2;
            double len = n.WanderMax > n.WanderMin ? n.WanderMin + Rng.NextDouble() * (n.WanderMax - n.WanderMin) : Math.Max(150, n.WanderMax);
            double tx = n.X + Math.Cos(ang) * len, ty = n.Y + Math.Sin(ang) * len;
            if (Dist(tx, ty, s.X, s.Y) > radius)      // would leave its area: pick a spot inside it instead
            {
                double a2 = Rng.NextDouble() * Math.PI * 2, d2 = radius * (0.3 + Rng.NextDouble() * 0.6);
                tx = s.X + Math.Cos(a2) * d2; ty = s.Y + Math.Sin(a2) * d2;
            }
            n.WanderX = tx; n.WanderY = ty; n.WanderMoving = true; n.Moving = true; n.LastSync = now;
            double travel = Dist(n.X, n.Y, tx, ty) / Math.Max(50, n.WalkSpeed) + 1;
            n.WanderUntil = now + TimeSpan.FromSeconds(n.WanderMaxTime > 0 ? Math.Max(n.WanderMaxTime, travel) : travel);
            n.Dir = (float)(Math.Atan2(ty - n.Y, tx - n.X) * 180.0 / Math.PI);
            await SendToViewersAsync(viewers, NpcSync(n, true, tx, ty, n.Z, Comp.MoveMode.Walk));
            return;
        }

        double dist = Dist(n.X, n.Y, n.WanderX, n.WanderY);
        if (dist <= 40 || now >= n.WanderUntil)
        {
            n.WanderMoving = false; n.Moving = false;
            n.NextWander = now + TimeSpan.FromSeconds(n.WaitMin + Rng.NextDouble() * Math.Max(0, n.WaitMax - n.WaitMin));
            await SendToViewersAsync(viewers, NpcSync(n, false, n.X, n.Y, n.Z, Comp.MoveMode.Idle));
            return;
        }
        double move = Math.Min(dist, n.WalkSpeed * dt);
        n.X += (n.WanderX - n.X) / dist * move; n.Y += (n.WanderY - n.Y) / dist * move;
        if ((now - n.LastSync).TotalSeconds >= AiSyncSeconds)
        {
            n.LastSync = now;
            await SendToViewersAsync(viewers, NpcSync(n, true, n.WanderX, n.WanderY, n.Z, Comp.MoveMode.Walk));
        }
    }

    /// <summary>How close the monster has to be to land this skill (smallest reach of its hit groups).</summary>
    private static double SkillReach(Mir5Skills.SkillDef skill, double cap)
    {
        double reach = double.MaxValue;
        foreach (var a in skill.Attacks)
        {
            double r = a.Shape is Mir5Skills.Shape.Target or Mir5Skills.Shape.TargetCircle ? a.TargetDistance : a.Distance;
            if (r > 0) reach = Math.Min(reach, r);
        }
        if (reach == double.MaxValue) reach = skill.TargetDistance;
        return Math.Clamp(reach, 150, Math.Max(150, cap));
    }

    private static async Task StepNpcAsync(Mir5Spawns.Npc n, List<Conn> players, double dt, DateTime now)
    {
        var viewers = players.Where(p => p.Visible.ContainsKey(n.S.Id)).ToList();
        if (viewers.Count == 0) return;
        var s = n.S;

        // Idle: look for somebody to attack
        if (n.Mode == Mir5Spawns.AiMode.Idle && n.Recognize > 0)
        {
            var found = players.Where(p => !p.Dead && InContext(p, n) && Dist(n.X, n.Y, p.X, p.Y) <= n.Recognize)
                .OrderBy(p => Dist(n.X, n.Y, p.X, p.Y)).FirstOrDefault();
            if (found != null)
            {
                n.TargetUid = found.PlayerUid; n.Mode = Mir5Spawns.AiMode.Chase; n.WanderMoving = false;
                Logger.Info($"[Mir5Ai] npc {s.NpcBase} (spawn {s.Id}) spots {found.Nickname}");
            }
        }
        if (n.Mode == Mir5Spawns.AiMode.Idle && n.IsWandering)
        {
            await WanderAsync(n, viewers, dt, now);
            return;
        }
        if (n.Mode == Mir5Spawns.AiMode.Chase) n.WanderMoving = false;      // e.g. hit from afar while wandering

        if (n.Mode == Mir5Spawns.AiMode.Chase)
        {
            var target = n.TargetUid != 0 ? players.FirstOrDefault(p => p.PlayerUid == n.TargetUid && !p.Dead && InContext(p, n)) : null;
            if (target == null || Dist(s.X, s.Y, n.X, n.Y) > n.Activity || Dist(s.X, s.Y, target.X, target.Y) > n.Activity * 1.3)
            {
                n.Mode = Mir5Spawns.AiMode.Return; n.TargetUid = 0; n.PlannedSkill = 0; n.LastSync = DateTime.MinValue;
            }
            else
            {
                await ChaseAsync(n, target, viewers, dt, now);
                return;
            }
        }

        if (n.Mode == Mir5Spawns.AiMode.Return)
        {
            double dist = Dist(n.X, n.Y, s.X, s.Y);
            if (dist <= 120)
            {
                bool wasMoving = n.Moving;
                n.ResetToSpawn();
                lock (n.Lock) n.Hp = n.MaxHp;
                var hp = new SM.StatusIntegers();
                hp.StatusList.Add(new SM.StatusInteger { StatusType = StatusType.Hp, StatusValue = (int)n.MaxHp });
                var st = new SM.CurrentStatusResponse(); st.Stats[n.EntityId] = hp;
                if (wasMoving) await SendToViewersAsync(viewers, NpcSync(n, false, n.X, n.Y, n.Z, Comp.MoveMode.Idle));
                await SendToViewersAsync(viewers, new SM.ServerMessages { CurrentStatusRes = st });
                return;
            }
            double rad = Math.Atan2(s.Y - n.Y, s.X - n.X);
            n.Dir = (float)(rad * 180.0 / Math.PI);
            double move = Math.Min(dist, n.RunSpeed * dt);
            n.X += Math.Cos(rad) * move; n.Y += Math.Sin(rad) * move; n.Z = s.Z;
            if (!n.Moving || (now - n.LastSync).TotalSeconds >= AiSyncSeconds)
            {
                n.Moving = true; n.LastSync = now;
                await SendToViewersAsync(viewers, NpcSync(n, true, s.X, s.Y, s.Z, Comp.MoveMode.Run));
            }
        }
    }

    private static async Task ChaseAsync(Mir5Spawns.Npc n, Conn target, List<Conn> viewers, double dt, DateTime now)
    {
        double dx = target.X - n.X, dy = target.Y - n.Y, dist = Math.Sqrt(dx * dx + dy * dy);
        if (n.PlannedSkill == 0 || (n.PlannedIsSkill && n.SkillReadyAt.TryGetValue(n.PlannedSkill, out var rdy) && rdy > now)) PlanAttack(n, dist, now);
        var skill = n.PlannedSkill != 0 ? Mir5Skills.Get(n.PlannedSkill) : null;
        double reach = skill != null ? SkillReach(skill, n.PlannedIsSkill && n.RangedSkills.Contains(n.PlannedSkill) ? 8000 : n.AttackRange) : Math.Clamp(n.AttackRange, 150, 400);
        if (dist > 1) n.Dir = (float)(Math.Atan2(dy, dx) * 180.0 / Math.PI);

        if (dist <= reach * 0.9)
        {
            if (n.Moving)
            {
                n.Moving = false;
                await SendToViewersAsync(viewers, NpcSync(n, false, n.X, n.Y, n.Z, Comp.MoveMode.Idle));
            }
            if (skill != null && now >= n.NextAttack)
            {
                n.NextAttack = now + TimeSpan.FromSeconds(1.8 + n.AttackDelayMin + Rng.NextDouble() * Math.Max(0, n.AttackDelayMax - n.AttackDelayMin));
                n.SkillReadyAt[skill.Id] = now + TimeSpan.FromSeconds(skill.CooldownSeconds);
                if (n.PlannedIsSkill) n.NormalAttackCount = 0; else n.NormalAttackCount++;
                n.PlannedSkill = 0; n.PlannedIsSkill = false;
                await NpcCastAsync(n, skill, target, viewers);
            }
            return;
        }

        // walk towards the target, stopping a little inside the reach
        double move = Math.Min(n.RunSpeed * dt, dist - reach * 0.75);
        if (move > 0)
        {
            n.X += dx / dist * move; n.Y += dy / dist * move; n.Z = target.Z;
        }
        if (!n.Moving || (now - n.LastSync).TotalSeconds >= AiSyncSeconds)
        {
            n.Moving = true; n.LastSync = now;
            await SendToViewersAsync(viewers, NpcSync(n, true, target.X, target.Y, target.Z, Comp.MoveMode.Run));
        }
    }

    /// <summary>
    /// Does a hit group reach the point (px, py)? The monster stands at (ax, ay) facing <paramref name="dirDeg"/>; (tx, ty) is where its target stood.
    /// Generous margins: players keep moving and the client animation is not exact.
    /// </summary>
    private static bool HitShape(Mir5Skills.AttackDef a, double ax, double ay, double dirDeg, double tx, double ty, double px, double py)
    {
        const double Pad = 250;
        double rad = dirDeg * Math.PI / 180.0, fx = Math.Cos(rad), fy = Math.Sin(rad);
        switch (a.Shape)
        {
            case Mir5Skills.Shape.Target:
                return Dist(ax, ay, px, py) <= a.TargetDistance + Pad;
            case Mir5Skills.Shape.TargetCircle:
                return Dist(tx, ty, px, py) <= a.Distance + Pad;
            case Mir5Skills.Shape.SelfDirect:
            {
                double dx = px - ax, dy = py - ay, along = dx * fx + dy * fy, across = Math.Abs(-dx * fy + dy * fx);
                return along >= -Pad && along <= a.Distance + Pad && across <= (a.Width > 0 ? a.Width : 300) / 2 + Pad;
            }
            default: // SelfCircle
            {
                double dist = Dist(ax, ay, px, py);
                if (dist > a.Distance + Pad) return false;
                if (a.AngleDeg >= 350 || dist < 1) return true;
                double bearing = Math.Atan2(py - ay, px - ax) * 180.0 / Math.PI, diff = Math.Abs(((bearing - dirDeg + 540) % 360) - 180);
                return diff <= a.AngleDeg / 2 + 30;
            }
        }
    }

    private static async Task NpcCastAsync(Mir5Spawns.Npc n, Mir5Skills.SkillDef skill, Conn target, List<Conn> viewers)
    {
        double ax = n.X, ay = n.Y;
        double castDir = n.Dir;
        Logger.Info($"[Mir5Ai] npc {n.S.NpcBase} casts {skill.Id} on {target.Nickname} (dist {Dist(n.X, n.Y, target.X, target.Y):0})");
        await SendToViewersAsync(viewers, new SM.ServerMessages
        {
            CastSkillTargetEntityRes = new SM.CastSkillTargetEntityResponse
            {
                SkillId = skill.Id, Position = new MirProto.Vector { X = n.X, Y = n.Y, Z = n.Z }, Direction = n.Dir, CasterId = n.EntityId,
                TargetId = Mir5World.EntityBits(target.PlayerUid), ClientTicks = 0, ServerTicks = ServerTicks(),
            },
        });

        int scheduled = 0;
        foreach (var atk in skill.Attacks)
        {
            foreach (var delay in atk.Delays)
            {
                if (++scheduled > 12) return;
                var attack = atk;
                _ = Task.Run(async () =>
                {
                    try
                    {
                        await Task.Delay(TimeSpan.FromSeconds(Math.Max(0, delay)));
                        if (!n.Alive) return;
                        double mult = attack.Multiplier > 0 ? attack.Multiplier : 1.0;   // normal attacks have no MulDamage in the data: 100%
                        // everybody the hit shape reaches is hit, up to TargetValue players, the target first
                        double tx = target.X, ty = target.Y;
                        var victims = Connections.Values
                            .Where(p => p.InWorld && !p.Dead && InContext(p, n) && HitShape(attack, ax, ay, castDir, tx, ty, p.X, p.Y))
                            .OrderBy(p => p == target ? 0 : 1).ThenBy(p => Dist(ax, ay, p.X, p.Y)).Take(Math.Max(1, attack.MaxTargets)).ToList();
                        foreach (var victim in victims)
                        {
                            double def = Mir5Stats.Get(Mir5Stats.Character(victim.Level)?.Stats, "PhysicalDefense", 0);
                            double raw = n.Attack * mult * (0.9 + Rng.NextDouble() * 0.2);
                            int dmg = (int)Math.Max(1, Math.Round(raw * 100.0 / (100.0 + Math.Max(0, def))));
                            await DamagePlayerAsync(victim, n, attack.Id, dmg, attack.HitVigor);
                        }
                    }
                    catch (Exception ex) { Logger.Warning($"[Mir5Ai] npc hit failed: {ex.Message}"); }
                });
            }
        }
    }
}
