using Google.Protobuf;
using Google.Protobuf.WellKnownTypes;
using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using CMT = MirProto.ClientMsgTwoway;
using Ds = MirProto.DsGame;
using SM = MirProto.ServerMsg;
using SMT = MirProto.ServerMsgTwoway;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Item crafting (ItemCraftReq 20301 and the wait-queue requests 20330-20332).
/// A recipe is a row of Common/ItemCraftList: ingredients (ID_IngredientItem x IngredientItemValue), money (MoneyType x MoneyValue),
/// the result (ID_CraftItem x CraftItemCount) and CraftTime seconds per craft. Starting a craft takes the materials and the money and puts
/// a row in ds_game.wait_complete (type ItemCraft; param1 = recipe row id, param2 = quantity); when its time is up the player claims it
/// and gets the result. The queue size is the player-grade stat WaitCompleteItemCraft (see Mir5Stats.PlayerGrade).
/// Random-type recipes are treated like fixed ones: they produce ID_CraftItem (a box). Great success is not rolled yet.
/// </summary>
public static partial class Mir5GameServer
{
    private sealed record Recipe(int Id, int ResultItem, int ResultCount, bool IsEquip, double Seconds, int MaxQuantity,
        List<(int ItemId, int Quantity)> Ingredients, List<(int MoneyId, long Quantity)> Money);

    private static Recipe? FindRecipe(long listId)
    {
        var table = DataTables.Find("Common/ItemCraftList");
        if (table == null || !table.TryGetRow(listId, out var row)) return null;

        var ingredients = new List<(int, int)>();
        if (row.TryGetProperty("ID_IngredientItem", out var ids) && row.TryGetProperty("IngredientItemValue", out var vals))
        {
            var idList = ids.EnumerateArray().Select(x => x.GetInt32()).ToList();
            var valList = vals.EnumerateArray().Select(x => x.GetInt32()).ToList();
            for (int i = 0; i < idList.Count && i < valList.Count; i++)
                if (idList[i] > 0 && valList[i] > 0) ingredients.Add((idList[i], valList[i]));
        }
        var money = new List<(int, long)>();
        if (row.TryGetProperty("MoneyType", out var types) && row.TryGetProperty("MoneyValue", out var amounts))
        {
            var typeList = types.EnumerateArray().Select(x => (x.GetString() ?? "").Split("::").Last()).ToList();
            var amountList = amounts.EnumerateArray().Select(x => x.GetInt64()).ToList();
            for (int i = 0; i < typeList.Count && i < amountList.Count; i++)
                if (amountList[i] > 0 && System.Enum.TryParse<MoneyType>(typeList[i], out var mt)) money.Add(((int)mt, amountList[i]));
        }

        return new Recipe((int)listId,
            row.TryGetProperty("ID_CraftItem", out var item) ? item.GetInt32() : 0,
            row.TryGetProperty("CraftItemCount", out var cnt) ? Math.Max(1, cnt.GetInt32()) : 1,
            row.TryGetProperty("IsEquip", out var eq) && eq.ValueKind == System.Text.Json.JsonValueKind.True,
            row.TryGetProperty("CraftTime", out var time) ? time.GetDouble() : 0,
            row.TryGetProperty("CraftMaxValue", out var max) ? max.GetInt32() : 1,
            ingredients, money);
    }

    private static Ds.DbWorkItem StackableItem(Conn c, int itemId, int quantity) => new()
    {
        ItemStackable = new Ds.SqlItemStackableTable { PlayerUid = c.PlayerUid, ItemId = itemId, Quantity = quantity },
        DirtyFlag = quantity <= 0 ? DirtyFlag.Delete : DirtyFlag.None,
    };

    private static Ds.DbWorkItem MoneyItem(Conn c, int moneyId, long quantity) => new()
    {
        Money = new Ds.SqlMoneyTable { PlayerUid = c.PlayerUid, MoneyId = (MoneyType)moneyId, Quantity = quantity },
    };

    private static Ds.DbWorkItem WaitItem(Conn c, DsCraftRepository.WaitRow w, bool delete = false) => new()
    {
        WaitComplete = new Ds.SqlWaitCompleteTable
        {
            PlayerUid = c.PlayerUid, WaitCompleteUid = w.Uid, WaitCompleteType = (WaitCompleteType)w.Type,
            Param1 = w.Param1, Param2 = w.Param2, Param3 = w.Param3,
            BeginDt = Timestamp.FromDateTime(w.BeginUtc), CompleteDt = Timestamp.FromDateTime(w.CompleteUtc), AccelSeconds = w.AccelSeconds,
        },
        DirtyFlag = delete ? DirtyFlag.Delete : DirtyFlag.None,
    };

    /// <summary>
    /// The client applies changes to its OWN items, money and timers from a normal UpdateMyInfoResponse (the db_work_items inside a twoway
    /// reply are not applied by the craft service), so every craft change is pushed this way as well, before the reply.
    /// </summary>
    private static Task PushDbItemsAsync(Conn c, IEnumerable<Ds.DbWorkItem> items)
    {
        var update = new SM.UpdateMyInfoResponse { ErrorCode = ErrorCode.Success };
        update.DbWorkItems.AddRange(items);
        return update.DbWorkItems.Count == 0 ? Task.CompletedTask : c.Plain(new SM.ServerMessages { UpdateMyInfoRes = update });
    }

    private static SMT.ServerMessagesTwoway Failed(int field, IMessage body, ErrorCode error)
    {
        var reply = Reply(field, body);
        reply.ErrorCode = error;
        return reply;
    }

    /// <summary>ItemCraftRequest: start a craft.</summary>
    private static async Task OnItemCraftAsync(Conn c, int field, CMT.ItemCraftRequest req)
    {
        var recipe = FindRecipe(req.ItemCraftListId);
        int quantity = req.ItemCraftQuantity;
        Logger.Info($"[Mir5Craft] craft list={req.ItemCraftListId} base={req.ItemCraftBaseId} qty={quantity} -> {(recipe == null ? "unknown recipe" : $"item {recipe.ResultItem}")}");
        if (recipe == null || quantity < 1 || quantity > Math.Max(1, recipe.MaxQuantity) || recipe.ResultItem <= 0)
        {
            await c.Twoway(Failed(field, new SMT.ItemCraftResponse { ErrorCode = ErrorCode.ItemCraftQuantityWrong }, ErrorCode.ItemCraftQuantityWrong));
            return;
        }

        var state = await DsPlayerRepository.GetCharacterAsync(c.PlayerUid);
        int queueMax = (int)Mir5Stats.Get(Mir5Stats.PlayerGrade(Math.Max(1, state?.PlayerGrade ?? 1)), "WaitCompleteItemCraft", 5);

        var outcome = await DsCraftRepository.StartAsync(c.PlayerUid, (int)WaitCompleteType.ItemCraft, queueMax,
            recipe.Ingredients.Select(i => (i.ItemId, i.Quantity * quantity)).ToList(),
            recipe.Money.Select(m => (m.MoneyId, m.Quantity * quantity)).ToList(),
            recipe.Id, quantity, 0, TimeSpan.FromSeconds(recipe.Seconds * quantity));

        if (outcome.Result != DsCraftRepository.StartResult.Ok)
        {
            var error = outcome.Result switch
            {
                DsCraftRepository.StartResult.MaterialShort => ErrorCode.ItemCraftIngredientNotEnough,
                DsCraftRepository.StartResult.MoneyShort => ErrorCode.ItemCraftCostNotEnough,
                _ => ErrorCode.ItemCraftWaitFull,
            };
            Logger.Info($"[Mir5Craft] craft refused: {outcome.Result}");
            await c.Twoway(Failed(field, new SMT.ItemCraftResponse { ErrorCode = error }, error));
            return;
        }

        var res = new SMT.ItemCraftResponse { ErrorCode = ErrorCode.Success };
        foreach (var (itemId, qty) in outcome.Stackables) res.DbWorkItems.Add(StackableItem(c, itemId, qty));
        foreach (var (moneyId, qty) in outcome.Money) res.DbWorkItems.Add(MoneyItem(c, moneyId, qty));
        res.DbWorkItems.Add(WaitItem(c, outcome.Wait!));
        Logger.Info($"[Mir5Craft] queued uid={outcome.Wait!.Uid}: {recipe.ResultItem} x{recipe.ResultCount * quantity}, ready in {recipe.Seconds * quantity:0}s");
        await PushDbItemsAsync(c, res.DbWorkItems);
        await c.Twoway(Reply(field, res));
    }

    /// <summary>Pays out one finished entry (items into the bag) and removes it from the queue; returns false when it was not claimable.</summary>
    private static async Task<(bool Ok, ErrorCode Error)> ClaimAsync(Conn c, DsCraftRepository.WaitRow w, List<Ds.DbWorkItem> items)
    {
        if (w.Type != (int)WaitCompleteType.ItemCraft) return (false, ErrorCode.ItemCraftWaitWrong);
        if (w.CompleteUtc > DateTime.UtcNow) return (false, ErrorCode.ItemCraftNotComplete);
        var recipe = FindRecipe(w.Param1);
        if (recipe == null) return (false, ErrorCode.ItemCraftWaitWrong);
        if (!await DsCraftRepository.DeleteAsync(c.PlayerUid, w.Uid)) return (false, ErrorCode.ItemCraftWaitWrong);   // already claimed

        long total = (long)recipe.ResultCount * Math.Max(1, w.Param2);
        if (recipe.IsEquip)
        {
            var (_, _, durability) = Mir5World.DescribeEquipItem(recipe.ResultItem);
            for (long i = 0; i < Math.Min(total, 50); i++)
            {
                long uid = await DsPlayerRepository.AddEquipmentItemAsync(c.PlayerUid, recipe.ResultItem, durability);
                items.Add(new Ds.DbWorkItem
                {
                    ItemEquipment = new Ds.SqlItemEquipmentTable
                    { PlayerUid = c.PlayerUid, ItemUid = uid, ItemId = recipe.ResultItem, InventoryType = InventoryType.PlayerNormal, Level = 1, Durability = durability },
                });
            }
        }
        else
        {
            int now = await DsPlayerRepository.AddStackableAsync(c.PlayerUid, recipe.ResultItem, (int)total);
            items.Add(StackableItem(c, recipe.ResultItem, now));
        }
        items.Add(WaitItem(c, w, delete: true));
        Logger.Info($"[Mir5Craft] claimed uid={w.Uid}: item {recipe.ResultItem} x{total}");
        return (true, ErrorCode.Success);
    }

    /// <summary>ItemCraftWaitCompleteRequest: claim one finished craft.</summary>
    private static async Task OnItemCraftClaimAsync(Conn c, int field, CMT.ItemCraftWaitCompleteRequest req)
    {
        var res = new SMT.ItemCraftWaitCompleteResponse { WaitCompleteUid = req.WaitCompleteUid };
        var row = await DsCraftRepository.GetAsync(c.PlayerUid, req.WaitCompleteUid);
        if (row == null) { await c.Twoway(Failed(field, res, ErrorCode.ItemCraftWaitWrong)); return; }
        var items = new List<Ds.DbWorkItem>();
        var (ok, error) = await ClaimAsync(c, row, items);
        if (!ok) { await c.Twoway(Failed(field, res, error)); return; }
        res.DbWorkItems.AddRange(items);
        await PushDbItemsAsync(c, items);
        await c.Twoway(Reply(field, res));
    }

    /// <summary>ItemCraftWaitCompleteAllRequest: claim every finished craft.</summary>
    private static async Task OnItemCraftClaimAllAsync(Conn c, int field)
    {
        var res = new SMT.ItemCraftWaitCompleteAllResponse();
        var items = new List<Ds.DbWorkItem>();
        foreach (var row in await DsCraftRepository.ListAsync(c.PlayerUid))
        {
            var (ok, _) = await ClaimAsync(c, row, items);
            if (ok) res.WaitCompleteUids.Add(row.Uid);
        }
        res.DbWorkItems.AddRange(items);
        await PushDbItemsAsync(c, items);
        await c.Twoway(Reply(field, res));
    }

    /// <summary>ItemCraftWaitCompleteCancelRequest: give the materials and money back and drop the entry.</summary>
    private static async Task OnItemCraftCancelAsync(Conn c, int field, CMT.ItemCraftWaitCompleteCancelRequest req)
    {
        var res = new SMT.ItemCraftWaitCompleteCancelResponse { ErrorCode = ErrorCode.Success, WaitCompleteUid = req.WaitCompleteUid };
        var row = await DsCraftRepository.GetAsync(c.PlayerUid, req.WaitCompleteUid);
        var recipe = row == null ? null : FindRecipe(row.Param1);
        if (row == null || recipe == null || row.Type != (int)WaitCompleteType.ItemCraft || !await DsCraftRepository.DeleteAsync(c.PlayerUid, row.Uid))
        {
            res.ErrorCode = ErrorCode.ItemCraftWaitWrong;
            await c.Twoway(Failed(field, res, ErrorCode.ItemCraftWaitWrong));
            return;
        }

        long qty = Math.Max(1, row.Param2);
        var update = new SM.UpdateMyInfoResponse { ErrorCode = ErrorCode.Success };
        foreach (var (itemId, n) in recipe.Ingredients)
            update.DbWorkItems.Add(StackableItem(c, itemId, await DsPlayerRepository.AddStackableAsync(c.PlayerUid, itemId, (int)(n * qty))));
        foreach (var (moneyId, n) in recipe.Money)
            update.DbWorkItems.Add(MoneyItem(c, moneyId, await DsPlayerRepository.ChangeMoneyAsync(c.PlayerUid, moneyId, n * qty, set: false)));
        update.DbWorkItems.Add(WaitItem(c, row, delete: true));
        Logger.Info($"[Mir5Craft] cancelled uid={row.Uid}: refunded the materials and money");
        await c.Plain(new SM.ServerMessages { UpdateMyInfoRes = update });
        await c.Twoway(Reply(field, res));
    }

    // ---- acceleration (AccelWaitReq 21100) ----

    /// <summary>Minutes one ticket removes from this kind of timer (ItemBase.ItemTypeValue), or 0 when the item cannot accelerate it (Common/AccelWaitComplete).</summary>
    private static int AccelMinutes(int itemId, WaitCompleteType type)
    {
        var items = DataTables.Find("Common/ItemBase");
        if (items == null || !items.TryGetRow(itemId, out var item)) return 0;
        var itemType = item.TryGetProperty("ItemType", out var it) ? it.GetString() ?? "" : "";
        var rules = DataTables.Find("Common/AccelWaitComplete");
        if (rules == null) return 0;
        foreach (var kv in rules.Rows)
        {
            if (!kv.Value.TryGetProperty("ID", out var id) || !string.Equals((id.GetString() ?? "").Split("::").Last(), type.ToString(), StringComparison.Ordinal)) continue;
            if (kv.Value.TryGetProperty("ItemType", out var allowed) && allowed.EnumerateArray().Any(a => a.GetString() == itemType))
                return item.TryGetProperty("ItemTypeValue", out var v) ? v.GetInt32() : 0;
        }
        return 0;
    }

    /// <summary>Gold accelerate pricing from Common/CommonData: every started block of AccelCalcMinute minutes costs AccelCalcMinutePerGold gold.</summary>
    private static (int UnitMinutes, int GoldPerUnit) AccelGoldRule()
    {
        int Get(int id, int fallback)
        {
            var t = DataTables.Find("Common/CommonData");
            return t != null && t.TryGetRow(id, out var r) && r.TryGetProperty("OptionValue", out var o) && int.TryParse(o.GetString(), out var n) && n > 0 ? n : fallback;
        }
        return (Get(7203, 10), Get(7204, 4));
    }

    /// <summary>AccelWaitRequest: finish (or shorten) a queued timer with acceleration tickets or gold.</summary>
    private static async Task OnAccelWaitAsync(Conn c, int field, CMT.AccelWaitRequest req)
    {
        var res = new SMT.AccelWaitResponse();
        var row = await DsCraftRepository.GetAsync(c.PlayerUid, req.WaitCompleteUid);
        if (row == null) { await c.Twoway(Failed(field, res, ErrorCode.NotEnableAccelWaitCompleteType)); return; }

        var type = (WaitCompleteType)row.Type;
        var now = DateTime.UtcNow;
        double remaining = (row.CompleteUtc - now).TotalSeconds;               // complete_dt is already the accelerated end
        if (remaining <= 0) { await c.Twoway(Reply(field, res)); return; }

        var used = new List<(int ItemId, int Quantity)>();
        long goldCost = 0;
        int reduce;
        if (req.UseGold)
        {
            var (unitMinutes, goldPerUnit) = AccelGoldRule();
            goldCost = (long)Math.Ceiling(remaining / (unitMinutes * 60.0)) * goldPerUnit;
            reduce = (int)Math.Ceiling(remaining);                               // ends right now
        }
        else
        {
            double left = remaining;
            double removed = 0;
            foreach (var offered in req.AccelItems)
            {
                if (offered.ItemStackable == null) continue;
                int minutes = AccelMinutes(offered.ItemStackable.ItemId, type);
                if (minutes <= 0) { await c.Twoway(Failed(field, res, ErrorCode.NotEnableAccelWaitCompleteType)); return; }
                int count = (int)Math.Min(offered.ItemStackable.Quantity, Math.Ceiling(left / (minutes * 60.0)));   // never burn more tickets than needed
                if (count <= 0) continue;
                used.Add((offered.ItemStackable.ItemId, count));
                removed += count * minutes * 60.0;
                left -= count * minutes * 60.0;
                if (left <= 0) break;
            }
            if (used.Count == 0) { await c.Twoway(Failed(field, res, ErrorCode.NotInputAnyAccelWaitItem)); return; }
            reduce = (int)Math.Min(Math.Ceiling(remaining), Math.Ceiling(removed));
        }

        var outcome = await DsCraftRepository.AccelerateAsync(c.PlayerUid, row.Uid, reduce, used, (int)MoneyType.Gold, goldCost);
        if (outcome.Result != DsCraftRepository.AccelResult.Ok)
        {
            var error = outcome.Result == DsCraftRepository.AccelResult.GoldShort ? ErrorCode.ItemCraftCostNotEnough
                      : outcome.Result == DsCraftRepository.AccelResult.ItemsShort ? ErrorCode.NotInputAnyAccelWaitItem : ErrorCode.NotEnableAccelWaitCompleteType;
            Logger.Info($"[Mir5Craft] accelerate refused: {outcome.Result}");
            await c.Twoway(Failed(field, res, error));
            return;
        }

        var items = new List<Ds.DbWorkItem>();
        foreach (var (itemId, qty) in outcome.Stackables) items.Add(StackableItem(c, itemId, qty));
        if (outcome.Gold != null) items.Add(MoneyItem(c, (int)MoneyType.Gold, outcome.Gold.Value));
        items.Add(WaitItem(c, outcome.Wait!));
        Logger.Info($"[Mir5Craft] accelerated uid={row.Uid}: {(req.UseGold ? $"{goldCost} gold" : string.Join(", ", used.Select(u => $"{u.ItemId} x{u.Quantity}")))} -> {reduce}s off the timer");
        await PushDbItemsAsync(c, items);
        await c.Twoway(Reply(field, res));
    }

    /// <summary>Sends the player's queued crafts (and other timers) at login so the queue survives a relog.</summary>
    private static async Task SendWaitRowsAsync(Conn c)
    {
        var rows = await DsCraftRepository.ListAsync(c.PlayerUid);
        if (rows.Count == 0) return;
        var update = new SM.UpdateMyInfoResponse { ErrorCode = ErrorCode.Success };
        foreach (var r in rows) update.DbWorkItems.Add(WaitItem(c, r));
        await c.Plain(new SM.ServerMessages { UpdateMyInfoRes = update });
    }
}
