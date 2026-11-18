using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using CM = MirProto.ClientMsg;
using Ds = MirProto.DsGame;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Bag and warehouse size. InventoryExtendRequest (plain 82) buys extra slots from Common/InventoryExtend: gold rows
/// (id 1 bag, id 11 warehouse, 1 gold per slot) and ticket rows (id 2 / 12, +5 slots). The client stores the bought extras
/// from DbWorkItem InvenExtendInfo (extend_type = InventoryType, extend_slot_count = extras on top of InventoryBase.DefaultSlotCount).
/// </summary>
public static partial class Mir5GameServer
{
    private static async Task SendInvenExtendAsync(Conn c)
    {
        var rows = await DsPlayerRepository.GetInvenExtendAsync(c.PlayerUid);
        if (rows.Count == 0) return;
        await PushDbItemsAsync(c, rows.Select(r => InvenExtendItem(c, r.Type, r.Slots)));
    }

    private static Ds.DbWorkItem InvenExtendItem(Conn c, int inventoryType, int slots) => new()
    {
        InvenExtendInfo = new Ds.SqlInvenExtendInfoTable
        {
            PlayerUid = c.PlayerUid,
            ExtendType = inventoryType,
            ExtendSlotCount = slots,
        },
    };

    private static async Task OnInvenExtendAsync(Conn c, CM.InventoryExtendRequest req)
    {
        int extendId = req.ExtendId;
        int count = Math.Max(1, req.ExtendCount);
        if (DataTables.Find("Common/InventoryExtend") is not { } table || !table.TryGetRow(extendId, out var row))
        {
            Logger.Info($"[Mir5Inven] {c.Nickname} extend id {extendId} is not in InventoryExtend");
            return;
        }

        string typeName = Tail(row, "ID_InventoryType");
        if (!System.Enum.TryParse<InventoryType>(typeName, out var invType) || invType is InventoryType.None or InventoryType.PlayerQuest)
        {
            Logger.Info($"[Mir5Inven] {c.Nickname} extend id {extendId} has unsupported inventory type '{typeName}'");
            return;
        }

        int per = row.TryGetProperty("ExtendValue", out var ev) ? ev.GetInt32() : 1;
        if (per <= 0) per = 1;
        int addSlots = per * count;
        int maxExtra = MaxExtraSlots(invType);
        int moneyId = 0;
        long moneyPer = row.TryGetProperty("ExtendMoneyCost", out var mc) ? mc.GetInt64() : 0;
        if (moneyPer > 0 && System.Enum.TryParse<MoneyType>(Tail(row, "ExtendMoneyType"), out var mt) && mt != MoneyType.None)
            moneyId = (int)mt;
        int itemId = row.TryGetProperty("ID_ExtendItem", out var ei) ? ei.GetInt32() : 0;
        int itemPer = row.TryGetProperty("ExtendItemCost", out var ic) ? ic.GetInt32() : 0;

        var outcome = await DsPlayerRepository.ExtendInvenAsync(c.PlayerUid, (int)invType, addSlots, maxExtra,
            moneyId, moneyPer * count, itemId, itemPer * count);
        if (outcome.Result != DsPlayerRepository.InvenExtendResult.Ok)
        {
            Logger.Info($"[Mir5Inven] {c.Nickname} {invType} extend x{count} refused: {outcome.Result} (id {extendId})");
            await SystemMessageAsync(c, outcome.Result switch
            {
                DsPlayerRepository.InvenExtendResult.AtMax => "No more expand inventory",
                DsPlayerRepository.InvenExtendResult.MoneyShort => "Not enough gold.",
                DsPlayerRepository.InvenExtendResult.ItemShort => "Not enough items.",
                _ => "Inventory expand failed.",
            });
            return;
        }

        var work = new List<Ds.DbWorkItem> { InvenExtendItem(c, (int)invType, outcome.Slots) };
        if (outcome.GoldLeft is { } gold && moneyId > 0) work.Add(MoneyItem(c, moneyId, gold));
        if (outcome.ItemId is { } consumed && outcome.ItemLeft is { } left)
            work.Add(StackableItem(c, consumed, left));
        await PushDbItemsAsync(c, work);
        Logger.Info($"[Mir5Inven] {c.Nickname} {invType} +{addSlots} extras (now {outcome.Slots}/{maxExtra}), gold left {outcome.GoldLeft}");
    }

    /// <summary>How many extra slots InventoryBase allows on top of the default bag size.</summary>
    private static int MaxExtraSlots(InventoryType type)
    {
        if (DataTables.Find("Common/InventoryBase") is not { } t) return type == InventoryType.PlayerWareHouse ? 400 : 100;
        foreach (var kv in t.Rows)
        {
            if (Tail(kv.Value, "Type") != type.ToString()) continue;
            int def = kv.Value.TryGetProperty("DefaultSlotCount", out var d) ? d.GetInt32() : 0;
            int max = kv.Value.TryGetProperty("MaxSlotCount", out var m) ? m.GetInt32() : def;
            return Math.Max(0, max - def);
        }
        return type == InventoryType.PlayerWareHouse ? 400 : 100;
    }

    private static string Tail(System.Text.Json.JsonElement row, string name) =>
        row.TryGetProperty(name, out var v) ? (v.GetString() ?? "").Split("::").Last() : "";
}
