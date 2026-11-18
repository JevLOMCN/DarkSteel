using M5.Core;
using M5.Database.Mysql;
using MirProto;
using Ds = MirProto.DsGame;
using CM = MirProto.ClientMsg;
using SM = MirProto.ServerMsg;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Combat, player attacking monsters: CastSkillRequest -> CastSkillResponse, hit detection from SkillAttack data at the impact times,
/// GroupDamageEventResponse + CurrentStatusResponse to everyone who sees the monster, death (DiedResponse), exp / level up for the killer,
/// body removal and respawn. Monsters do not fight back or move yet.
/// </summary>
public static partial class Mir5GameServer
{
    /// <summary>Multiplier on exp rewards (the data values are small; this is a private server).</summary>
    public static long ExpRate = 10;

    private static readonly Random Rng = new();

    // ---- cast ----

    private static async Task OnCastSkillAsync(Conn c, CM.CastSkillRequest req)
    {
        var skill = Mir5Skills.Get(req.SkillId);
        if (skill == null)
        {
            Logger.Warning($"[Mir5Combat] unknown skill {req.SkillId}");
            await c.Plain(new SM.ServerMessages { CastSkillRes = new SM.CastSkillResponse { SkillId = req.SkillId, ErrorCode = ErrorCode.InvalidSkillId } });
            return;
        }

        if (c.Dead) return;
        var pay = TryPaySkill(c, skill);
        if (pay != ErrorCode.Success)
        {
            Logger.Info($"[Mir5Combat] {c.Nickname} cannot cast {req.SkillId}: {pay} (mp {c.Mp:0}, vigor {c.Vigor:0})");
            await c.Plain(new SM.ServerMessages { CastSkillRes = new SM.CastSkillResponse { SkillId = req.SkillId, ErrorCode = pay } });
            return;
        }
        if (skill.Costs.Count > 0) await PushMyHpAsync(c);      // shows the new Mp (and Hp)

        // The client simulates its own movement; remember where it cast from.
        if (req.Position != null) { c.X = req.Position.X; c.Y = req.Position.Y; c.Z = req.Position.Z; c.PositionDirty = true; }
        c.Direction = req.Direction;

        await c.Plain(new SM.ServerMessages { CastSkillRes = new SM.CastSkillResponse { SkillId = req.SkillId, ErrorCode = ErrorCode.Success } });
        Logger.Info($"[Mir5Combat] {c.Nickname} casts {req.SkillId} ({skill.Type}) target={req.TargetId} attacks={skill.Attacks.Count} at ({c.X:0},{c.Y:0}) dir={req.Direction:0}");

        // Tell other players who can see the caster.
        var cast = new SM.ServerMessages();
        if (req.TargetId != 0)
            cast.CastSkillTargetEntityRes = new SM.CastSkillTargetEntityResponse { SkillId = req.SkillId, Position = req.Position, Direction = req.Direction, CasterId = Mir5World.EntityBits(c.PlayerUid), TargetId = req.TargetId, ClientTicks = req.ClientTicks, ServerTicks = ServerTicks() };
        else
            cast.CastSkillTargetPositionRes = new SM.CastSkillTargetPositionResponse { SkillId = req.SkillId, Position = req.Position, Direction = req.Direction, CasterId = Mir5World.EntityBits(c.PlayerUid), ClientTicks = req.ClientTicks, ServerTicks = ServerTicks() };
        await BroadcastNearAsync(c.IslandId, c.X, c.Y, cast, except: c);

        // Schedule each hit at its impact time.
        double x = c.X, y = c.Y, dir = req.Direction;
        ulong targetId = req.TargetId;
        int scheduled = 0;
        foreach (var atk in skill.Attacks)
        {
            if (atk.Multiplier <= 0 || !atk.EnemyOnly) continue;
            foreach (var delay in atk.Delays)
            {
                if (++scheduled > 12) break;
                var attack = atk;
                _ = Task.Run(async () =>
                {
                    try
                    {
                        await Task.Delay(TimeSpan.FromSeconds(Math.Max(0, delay)));
                        await ResolveHitAsync(c, attack, x, y, dir, targetId);
                    }
                    catch (Exception ex) { Logger.Warning($"[Mir5Combat] hit failed: {ex.Message}"); }
                });
            }
        }
    }

    // ---- hit detection ----

    private static IEnumerable<Mir5Spawns.Npc> FindTargets(Conn c, Mir5Skills.AttackDef atk, double x, double y, double dirDeg, ulong targetId)
    {
        double rad = dirDeg * Math.PI / 180.0, fx = Math.Cos(rad), fy = Math.Sin(rad);
        const double Pad = 120;   // monster body radius allowance
        var candidates = Mir5Spawns.Near(c.IslandId, c.DungeonId, x, y, Math.Max(atk.Distance, atk.TargetDistance) + 3000).Where(n => n.S.Attackable);
        var target = targetId != 0 ? Mir5Spawns.FromEntity(targetId) : null;

        IEnumerable<Mir5Spawns.Npc> hit;
        switch (atk.Shape)
        {
            case Mir5Skills.Shape.Target:
                hit = target is { Alive: true } && Math.Sqrt(Mir5Spawns.Distance2(target, x, y)) <= atk.TargetDistance * 1.5 + Pad
                    ? new[] { target } : candidates.Where(n => InArc(n, x, y, fx, fy, atk.TargetDistance + Pad, 120)).OrderBy(n => Mir5Spawns.Distance2(n, x, y)).Take(1);
                break;
            case Mir5Skills.Shape.TargetCircle:
            {
                double cx = target?.X ?? x + fx * atk.Distance, cy = target?.Y ?? y + fy * atk.Distance;
                hit = candidates.Where(n => { double dx = n.X - cx, dy = n.Y - cy; return Math.Sqrt(dx * dx + dy * dy) <= atk.Distance + Pad; });
                break;
            }
            case Mir5Skills.Shape.SelfDirect:
            {
                double half = (atk.Width > 0 ? atk.Width : 300) / 2 + Pad;
                hit = candidates.Where(n =>
                {
                    double dx = n.X - x, dy = n.Y - y, along = dx * fx + dy * fy, across = Math.Abs(-dx * fy + dy * fx);
                    return along >= -Pad && along <= atk.Distance + Pad && across <= half;
                });
                break;
            }
            default: // SelfCircle
                hit = candidates.Where(n => InArc(n, x, y, fx, fy, atk.Distance + Pad, atk.AngleDeg));
                break;
        }
        return hit.OrderBy(n => Mir5Spawns.Distance2(n, x, y)).Take(atk.MaxTargets);
    }

    private static bool InArc(Mir5Spawns.Npc n, double x, double y, double fx, double fy, double radius, double angleDeg)
    {
        double dx = n.X - x, dy = n.Y - y, dist = Math.Sqrt(dx * dx + dy * dy);
        if (dist > radius) return false;
        if (angleDeg >= 359 || dist < 1) return true;
        double cos = (dx * fx + dy * fy) / dist;
        return Math.Acos(Math.Clamp(cos, -1, 1)) * 180.0 / Math.PI <= angleDeg / 2;
    }

    private static async Task ResolveHitAsync(Conn c, Mir5Skills.AttackDef atk, double x, double y, double dir, ulong targetId)
    {
        var level = Mir5Stats.Character(c.Level);
        double attackPower = Mir5Stats.Get(level?.Stats, "PhysicalAttack", 100);

        var events = new SM.GroupDamageEventResponse();
        var status = new SM.CurrentStatusResponse();
        var deaths = new List<Mir5Spawns.Npc>();
        double now = ServerTicks();

        foreach (var npc in FindTargets(c, atk, x, y, dir, targetId).ToList())
        {
            int dmg; bool crit; int hpAfter;
            lock (npc.Lock)
            {
                if (!npc.Alive) continue;
                crit = Rng.NextDouble() < 0.10;
                double raw = attackPower * atk.Multiplier * (0.9 + Rng.NextDouble() * 0.2) * (crit ? 1.5 : 1.0);
                dmg = (int)Math.Max(1, Math.Round(raw * 100.0 / (100.0 + Math.Max(0, npc.Defense))));
                npc.Hp = Math.Max(0, npc.Hp - dmg);
                hpAfter = (int)Math.Ceiling(npc.Hp);
                if (npc.Hp <= 0) { npc.Alive = false; npc.TargetUid = 0; npc.Mode = Mir5Spawns.AiMode.Idle; npc.Moving = false; deaths.Add(npc); }
                else if (npc.Mode == Mir5Spawns.AiMode.Idle) { npc.TargetUid = c.PlayerUid; npc.Mode = Mir5Spawns.AiMode.Chase; }   // hit from afar: go after the attacker
            }

            events.DamageEvents.Add(new SM.DamageEvent
            {
                AttackerEntityId = Mir5World.EntityBits(c.PlayerUid),
                DefenderEntityId = npc.EntityId,
                Damage = new Damage { Amount = dmg },
                SkillAttackId = atk.Id,
                DamageInfo = crit ? DamageMessage.Critical : DamageMessage.DamageHit,
                ExecuteTime = now,
                EventTime = now,
            });
            var hp = new SM.StatusIntegers();
            hp.StatusList.Add(new SM.StatusInteger { StatusType = StatusType.Hp, StatusValue = hpAfter });
            status.Stats[npc.EntityId] = hp;
        }

        if (events.DamageEvents.Count == 0) return;
        if (atk.AttackVigor > 0) { GainVigor(c, atk.AttackVigor * events.DamageEvents.Count); await PushMyHpAsync(c); }
        Logger.Info($"[Mir5Combat] {c.Nickname} skill-attack {atk.Id}: {events.DamageEvents.Count} hit(s), {string.Join(",", events.DamageEvents.Select(e => e.Damage.Amount))} dmg, {deaths.Count} kill(s)");

        await BroadcastNearAsync(c.IslandId, x, y, new SM.ServerMessages { GroupDamageEventRes = events });
        await BroadcastNearAsync(c.IslandId, x, y, new SM.ServerMessages { CurrentStatusRes = status });
        foreach (var npc in deaths) await OnNpcDiedAsync(c, npc);
    }

    // ---- death, exp, respawn ----

    private static async Task OnNpcDiedAsync(Conn killer, Mir5Spawns.Npc npc)
    {
        var s = npc.S;
        Logger.Info($"[Mir5Combat] {killer.Nickname} killed npc {s.NpcBase} (spawn {s.Id}, lvl {s.Level})");

        await BroadcastNearAsync(npc.Island, npc.X, npc.Y, new SM.ServerMessages
        {
            DiedRes = new SM.DiedResponse { EntityDied = new SM.EntityDied { EntityId = npc.EntityId, EntityDead = new SM.EntityDead { DeadType = SM.EntityDeadType.EntitySuicide } } },
        });

        if (s.Exp > 0) await GrantExpAsync(killer, s.Exp * ExpRate);
        try { await DropLootAsync(killer, npc); } catch (Exception ex) { Logger.Warning($"[Mir5Drops] drop failed for npc {s.NpcBase}: {ex.Message}"); }
        await AchKillEventsAsync(killer, npc);
        await AchDungeonClearCheckAsync(npc);
        try { await QuestOnKillAsync(killer, s.NpcBase); } catch (Exception ex) { Logger.Warning($"[Mir5Quest] kill progress failed: {ex.Message}"); }

        // Remove the body after BodyClearTime, then respawn after the spawn point's respawn delay.
        _ = Task.Run(async () =>
        {
            try
            {
                await Task.Delay(TimeSpan.FromSeconds(Math.Max(1, s.BodyClear)));
                await RemoveFromViewersAsync(npc);
                if (npc.Dynamic) { Mir5Spawns.DropDynamic(npc); return; }   // GM-spawned: gone for good
                if (npc.Island >= Mir5Spawns.DungeonKeyBase && s.RespawnMax <= 0) return;   // dungeon monster: stays dead until the dungeon is reset
                double respawn = s.RespawnMin + Rng.NextDouble() * Math.Max(0, s.RespawnMax - s.RespawnMin);
                await Task.Delay(TimeSpan.FromSeconds(Math.Max(1, respawn - s.BodyClear)));
                lock (npc.Lock) { npc.Hp = npc.MaxHp; npc.Alive = true; npc.ResetToSpawn(); }
                foreach (var conn in Connections.Values.Where(x => x.InWorld && (x.IslandId == npc.Island || Mir5Spawns.DungeonKey(x.DungeonId) == npc.Island)).ToList())
                    _ = UpdateVisibilityAsync(conn);
            }
            catch (Exception ex) { Logger.Warning($"[Mir5Combat] respawn failed: {ex.Message}"); }
        });
    }

    private static async Task RemoveFromViewersAsync(Mir5Spawns.Npc npc)
    {
        foreach (var conn in Connections.Values.Where(x => x.InWorld).ToList())
        {
            if (!conn.Visible.TryRemove(npc.S.Id, out _)) continue;
            try { await conn.Plain(Mir5Spawns.Remove(new[] { npc.S.Id })); } catch { /* connection closing */ }
        }
    }

    /// <summary>Adds exp to the character, handling level ups (CharacterLevel.ReqCharExp), persistence and the client messages.</summary>
    private static async Task GrantExpAsync(Conn c, long amount)
    {
        long exp = c.Exp + amount;
        int level = c.Level, max = Mir5Stats.MaxCharacterLevel();
        bool leveled = false;
        while (level < max && Mir5Stats.Character(level) is { ReqExp: > 0 } row && exp >= row.ReqExp)
        {
            exp -= row.ReqExp; level++; leveled = true;
        }
        c.Level = level; c.Exp = exp;
        if (leveled) { c.Hp = -1; c.Mp = -1; }      // a level up refills health and mana (EnsureHp / EnsureMp recompute the new maximum)

        await DsPlayerRepository.SetLevelAsync(c.PlayerUid, level, exp);
        await c.Plain(new SM.ServerMessages { ExpChangeRes = new SM.ExpChangeResponse { CharId = c.CharId, DeltaExp = amount, Exp = exp } });
        await SendDbItemAsync(c, new Ds.DbWorkItem { CharacterLevel = new Ds.SqlCharacterLevelTable { PlayerUid = c.PlayerUid, CharLevel = level, Exp = exp } });

        if (leveled)
        {
            await AchEventAsync(c, "CharacterLevelUpAppoint", c.CharId, level);     // "Set" define per character id: the character's level
            Logger.Info($"[Mir5Combat] {c.Nickname} reached level {level}");
            await BroadcastNearAsync(c.IslandId, c.X, c.Y, new SM.ServerMessages
            {
                LevelChangeRes = new SM.LevelChangeResponse { EntityId = Mir5World.EntityBits(c.PlayerUid), Level = level, CharId = c.CharId },
            });
            var st = await DsPlayerRepository.GetCharacterAsync(c.PlayerUid);
            if (st != null)
                foreach (var m in Mir5World.Status(st, c.CharId)) await c.Plain(m);
            await SystemMessageAsync(c, $"Level up! You are now level {level}.");
            try { await QuestRefreshStateObjectivesAsync(c); } catch (Exception ex) { Logger.Warning($"[Mir5Quest] level objective refresh failed: {ex.Message}"); }
        }
    }

    // ---- broadcast ----

    /// <summary>Send to every in-world connection within view range of (x, y) on the island.</summary>
    private static async Task BroadcastNearAsync(int island, double x, double y, SM.ServerMessages msg, Conn? except = null)
    {
        double r2 = Mir5Spawns.HideRadius * Mir5Spawns.HideRadius;
        foreach (var conn in Connections.Values.Where(v => v.InWorld && (v.IslandId == island || Mir5Spawns.DungeonKey(v.DungeonId) == island) && v != except).ToList())
        {
            double dx = conn.X - x, dy = conn.Y - y;
            if (dx * dx + dy * dy > r2) continue;
            try { await conn.Plain(msg); } catch { /* connection closing */ }
        }
    }
}
