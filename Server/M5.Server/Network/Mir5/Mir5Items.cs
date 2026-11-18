using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using CM = MirProto.ClientMsg;
using Ds = MirProto.DsGame;
using SM = MirProto.ServerMsg;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Using items (ItemUseRequest, plain 21). Only the health and mana potions are implemented:
///   ItemBase.ID_Template points at a Common/BuffBase row (template type BuffBase) whose BuffValue is parts per million of the maximum Hp / Mp to
///   restore (BuffIndex 3002 = Hp, 3004 = Mp); a "Dot" buff repeats every Period for BuffTime seconds, a "Once" buff applies a single time.
///   The potion's cooldown is ItemBase.IndividualCoolTime seconds on the cooldown type (ID_CoolDown), so a health potion does not block a mana potion.
/// One item is taken from the stack, the new stack row is sent (as a normal inventory update and in ItemUseResponse) and the "ItemTypeUse" achievement
/// event fires (1001 = health potion, 1002 = mana potion). Other item types are answered with a failure and not consumed.
/// </summary>
public static partial class Mir5GameServer
{
    private static async Task OnItemUseAsync(Conn c, CM.ItemUseRequest req)
    {
        var res = new SM.ItemUseResponse { TargetId = req.TargetId };
        async Task Refuse(ErrorCode error, string why)
        {
            Logger.Info($"[Mir5Item] {c.Nickname} use of item {req.ItemId} refused: {why}");
            res.ErrorCode = error;
            await c.Plain(new SM.ServerMessages { ItemUseRes = res });
        }

        if (c.Dead) { await Refuse(ErrorCode.Failure, "dead"); return; }
        if (DataTables.Find("Common/ItemBase") is not { } items || !items.TryGetRow(req.ItemId, out var row)) { await Refuse(ErrorCode.Failure, "unknown item"); return; }
        string type = row.TryGetProperty("ItemType", out var it) ? (it.GetString() ?? "").Split("::").Last() : "";
        int potion = type switch { "ConsumeHpPotion" => 1, "ConsumeMpPotion" => 2, _ => 0 };
        if (potion == 0) { await Refuse(ErrorCode.Failure, $"{type} items are not implemented"); return; }

        string coolKey = row.TryGetProperty("ID_CoolDown", out var cd) ? (cd.GetString() ?? "None") : "None";
        if (coolKey == "None" || coolKey.EndsWith("::None")) coolKey = "item" + req.ItemId;
        double coolSeconds = row.TryGetProperty("IndividualCoolTime", out var ct) ? ct.GetDouble() : 0;
        var now = DateTime.UtcNow;
        lock (c.ItemCooldowns)
        {
            if (c.ItemCooldowns.TryGetValue(coolKey, out var until) && until > now) { _ = Refuse(ErrorCode.CoolTimeWrong, "cooling down"); return; }
        }

        // the effect, from the potion's buff row (BuffIndex / BuffValue are arrays: index 3002 = Hp, 3004 = Mp, value in parts per million of the maximum).
        // Read before anything is taken, so a data problem never eats the potion.
        double valuePpm = 0, period = 1, duration = 1; bool dot = false;
        if (row.TryGetProperty("ID_Template", out var tid) && DataTables.Find("Common/BuffBase") is { } buffs && buffs.TryGetRow(tid.GetInt32(), out var buff))
        {
            int wantIndex = potion == 1 ? 3002 : 3004;
            if (buff.TryGetProperty("BuffIndex", out var idx) && buff.TryGetProperty("BuffValue", out var vals))
                for (int i = 0; i < idx.GetArrayLength() && i < vals.GetArrayLength(); i++)
                    if (idx[i].GetInt32() == wantIndex) valuePpm += vals[i].GetDouble();
            period = buff.TryGetProperty("Period", out var bp) && bp.ValueKind == System.Text.Json.JsonValueKind.Number && bp.GetDouble() > 0 ? bp.GetDouble() : 1;
            duration = buff.TryGetProperty("BuffTime", out var bt) && bt.ValueKind == System.Text.Json.JsonValueKind.Number ? bt.GetDouble() : 1;
            dot = buff.TryGetProperty("BuffType", out var btype) && (btype.GetString() ?? "").EndsWith("Dot");
        }
        if (valuePpm <= 0) { await Refuse(ErrorCode.Failure, "no healing value found in the potion's buff row"); return; }

        int left = await DsPlayerRepository.TakeStackableAsync(c.PlayerUid, req.ItemId, 1);
        if (left < 0) { await Refuse(ErrorCode.ItemQuantityNotEnough, "none left"); return; }
        lock (c.ItemCooldowns) c.ItemCooldowns[coolKey] = now + TimeSpan.FromSeconds(coolSeconds);

        _ = ApplyPotionAsync(c, potion == 1, valuePpm, dot ? Math.Max(1, (int)Math.Round(duration / period)) : 1, TimeSpan.FromSeconds(period));
        Logger.Info($"[Mir5Item] {c.Nickname} drinks {(potion == 1 ? "health" : "mana")} potion {req.ItemId} ({valuePpm / 10000:0.#}% x {(dot ? duration / period : 1):0}), {left} left");

        var stack = new Ds.DbWorkItem
        {
            ItemStackable = new Ds.SqlItemStackableTable { PlayerUid = c.PlayerUid, ItemId = req.ItemId, Quantity = left },
            DirtyFlag = left == 0 ? DirtyFlag.Delete : DirtyFlag.None,
        };
        await PushDbItemsAsync(c, new[] { stack });
        res.ErrorCode = ErrorCode.Success;
        res.DbWorkItem = stack;
        await c.Plain(new SM.ServerMessages { ItemUseRes = res });
        await AchEventAsync(c, "ItemTypeUse", potion == 1 ? 1001 : 1002);
    }

    /// <summary>Restores <paramref name="valuePpm"/> parts per million of the maximum Hp or Mp, <paramref name="ticks"/> times, one tick per <paramref name="period"/>.</summary>
    private static async Task ApplyPotionAsync(Conn c, bool hp, double valuePpm, int ticks, TimeSpan period)
    {
        try
        {
            for (int i = 0; i < ticks; i++)
            {
                if (i > 0) await Task.Delay(period);
                if (c.Dead || !c.InWorld) return;
                if (hp)
                {
                    EnsureHp(c);
                    double max = PlayerMaxHp(c);
                    lock (c) c.Hp = Math.Min(max, c.Hp + max * valuePpm / 1_000_000.0);
                }
                else
                {
                    EnsureMp(c);
                    double max = PlayerMaxMp(c);
                    lock (c) c.Mp = Math.Min(max, c.Mp + max * valuePpm / 1_000_000.0);
                }
                await PushMyHpAsync(c);
                if (hp) await PushHpToOthersAsync(c);
            }
        }
        catch (Exception ex) { Logger.Warning($"[Mir5Item] potion effect failed for {c.Nickname}: {ex.Message}"); }
    }
}
