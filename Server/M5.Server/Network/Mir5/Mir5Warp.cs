using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using CMT = MirProto.ClientMsgTwoway;
using Ds = MirProto.DsGame;
using SM = MirProto.ServerMsg;
using SMT = MirProto.ServerMsgTwoway;
using DsProto = MirProto.DsProto;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Warp devices (Common/StuffWarpDevice: RequiredLevel, ID_WarpLocation, MoneyType x Cost). The world stuff objects are not spawned yet, so devices are
/// activated with the GM command deviceactivateall (ds_game.warp_device) and used from the world map: WarpDeviceWarpReq (20504) checks that the
/// device is activated, the level and the cost, charges it and teleports to the device's WarpLocation. WarpDeviceActivateReq needs the stuff
/// entity and is answered with an empty success for now.
/// </summary>
public static partial class Mir5GameServer
{
    /// <summary>
    /// Device row ids (1-10) and their StuffBase ids (ID_StuffBase, 200001...). The client's "is activated" check uses one of them
    /// (IsActivateWarpDevice(StuffTableID)), so both are stored.
    /// </summary>
    private static IEnumerable<int> AllWarpDeviceIds()
    {
        var t = DataTables.Find("Common/StuffWarpDevice");
        if (t == null) yield break;
        foreach (var kv in t.Rows)
        {
            yield return int.Parse(kv.Key);
            if (kv.Value.TryGetProperty("ID_StuffBase", out var sb) && sb.GetInt32() > 0) yield return sb.GetInt32();
        }
    }

    private static Ds.DbWorkItem WarpDeviceItem(Conn c, int id) => new() { WarpDevice = new Ds.SqlWarpDeviceTable { PlayerUid = c.PlayerUid, DeviceStuffId = id } };

    private static async Task SendWarpDevicesAsync(Conn c)
    {
        var items = (await DsWarpRepository.ListAsync(c.PlayerUid)).Select(id => WarpDeviceItem(c, id)).ToList();
        if (items.Count > 0) await PushDbItemsAsync(c, items);
    }

    /// <summary>GM deviceactivateall.</summary>
    private static async Task GmActivateAllWarpDevicesAsync(Conn c)
    {
        var ids = AllWarpDeviceIds().ToList();
        await DsWarpRepository.AddAsync(c.PlayerUid, ids);
        await PushDbItemsAsync(c, ids.Select(id => WarpDeviceItem(c, id)));
        await SystemMessageAsync(c, $"Activated {ids.Count / 2} warp devices.");
    }

    private static async Task OnWarpDeviceWarpAsync(Conn c, int field, CMT.WarpDeviceWarpRequest req)
    {
        var body = new SMT.WarpDeviceWarpResponse();
        Logger.Info($"[Mir5Warp] {c.Nickname} asks to warp: warp_device_id={req.WarpDeviceId} interaction={req.InteractionId} device_entity={req.DeviceEntityId}");
        // the id may be the StuffWarpDevice row id (1-10) or its StuffBase id (200001...)
        System.Text.Json.JsonElement row = default; int rowId = 0;
        if (DataTables.Find("Common/StuffWarpDevice") is { } t)
            foreach (var kv in t.Rows)
                if (int.Parse(kv.Key) == req.WarpDeviceId || (kv.Value.TryGetProperty("ID_StuffBase", out var sb) && sb.GetInt32() == req.WarpDeviceId)) { row = kv.Value; rowId = int.Parse(kv.Key); break; }
        if (rowId == 0) { Logger.Info("[Mir5Warp] refused: unknown device id"); await c.Twoway(Failed(field, body, ErrorCode.Failure)); return; }

        var active = await DsWarpRepository.ListAsync(c.PlayerUid);
        if (!active.Contains(rowId) && !active.Contains(row.GetProperty("ID_StuffBase").GetInt32()))
        { Logger.Info($"[Mir5Warp] refused: device {rowId} is not activated"); await c.Twoway(Failed(field, body, ErrorCode.Failure)); return; }

        int needLevel = row.TryGetProperty("RequiredLevel", out var rl) ? rl.GetInt32() : 0;
        if (c.Level < needLevel) { Logger.Info($"[Mir5Warp] refused: level {c.Level} < {needLevel}"); await c.Twoway(Failed(field, body, ErrorCode.Failure)); return; }

        long cost = row.TryGetProperty("Cost", out var cs) ? cs.GetInt64() : 0;
        int moneyId = row.TryGetProperty("MoneyType", out var mt) && (mt.GetString() ?? "").EndsWith("Copper") ? 1 : 11;
        if (cost > 0)
        {
            var have = (await DsPlayerRepository.GetMoneyAsync(c.PlayerUid)).FirstOrDefault(m => m.MoneyId == moneyId).Quantity;
            if (have < cost) { Logger.Info($"[Mir5Warp] refused: needs {cost} of money {moneyId}, has {have}"); await c.Twoway(Failed(field, body, ErrorCode.MoneyNotEnough)); return; }
            long left = await DsPlayerRepository.ChangeMoneyAsync(c.PlayerUid, moneyId, -cost, set: false);
            await PushDbItemsAsync(c, new[] { MoneyItem(c, moneyId, left) });
        }
        int loc = row.GetProperty("ID_WarpLocation").GetInt32();
        Logger.Info($"[Mir5Warp] {c.Nickname} uses warp device {rowId} -> location {loc} (cost {cost} of money {moneyId})");
        await c.Twoway(Reply(field, body));
        await StartDeviceWarpAsync(c, loc);
    }

    // ---- the client-driven warp sequence ----
    // Server: PrepareWarpRes (with the destination) starts the client's warp ability: start animation + fade out. The client then sends
    // WarpLoadingReq -> we answer WarpStartRes; it teleports itself to the destination, then sends WarpArriveReq -> we answer WarpArriveRes,
    // which ends the ability (until then the character is frozen and cannot cast).

    /// <summary>
    /// Starts the client-driven warp (PrepareWarpRes). <paramref name="kind"/> is the WarpType the client's warp ability expects: Device for warp devices,
    /// Resurrect for the Base / Inn / System revive buttons (the client runs the same ability and waits for this sequence, or it stays locked).
    /// </summary>
    private static async Task<bool> StartDeviceWarpAsync(Conn c, int warpLocationId, WarpType kind = WarpType.Device)
    {
        if (DataTables.Find("Common/WarpLocation") is not { } t || !t.TryGetRow(warpLocationId, out var w)) return false;
        var p = w.GetProperty("WarpLocationCoordinate");
        int island = w.GetProperty("ID_ZoneIsland").GetInt32();
        float dir = w.TryGetProperty("WarpDirection", out var d) ? (float)d.GetDouble() : 0f;
        c.IslandId = island; c.X = p.GetProperty("X").GetDouble(); c.Y = p.GetProperty("Y").GetDouble(); c.Z = p.GetProperty("Z").GetDouble(); c.Direction = dir;
        c.PositionDirty = true;
        c.WarpKind = kind;
        await c.Plain(new SM.ServerMessages
        {
            PrepareWarpRes = new SM.PrepareWarpResponse
            {
                EntityId = Mir5World.EntityBits(c.PlayerUid),
                WarpInfo = new DsProto.Warp
                {
                    Position = new MirProto.Vector { X = c.X, Y = c.Y, Z = c.Z }, Direction = dir, IslandId = (uint)island,
                    WarpLocationId = warpLocationId, WarpType = kind,
                },
            },
        });
        return true;
    }

    private static Task OnWarpLoadingAsync(Conn c) => c.Plain(new SM.ServerMessages { WarpStartRes = new SM.WarpStartResponse() });

    private static async Task OnWarpArriveAsync(Conn c)
    {
        var (zone, district) = Mir5World.GetZone(c.IslandId);
        await c.Plain(new SM.ServerMessages { ZoneIdChangeRes = new SM.ZoneIdChangeResponse { ZoneId = zone, DistrictId = district, IslandId = (uint)c.IslandId } });
        await c.Plain(new SM.ServerMessages { WarpArriveRes = new SM.WarpArriveResponse { EntityId = Mir5World.EntityBits(c.PlayerUid), WarpType = c.WarpKind } });
        c.Visible.Clear();
        _ = UpdateVisibilityAsync(c);
        await SavePositionAsync(c, force: true);
        if (c.WarpKind == WarpType.Resurrect && c.PendingResurrect is { } type)
        {
            c.PendingResurrect = null;
            await FinishReviveAsync(c, type);
        }
    }

    private static Task OnWarpCancelAsync(Conn c) => c.Plain(new SM.ServerMessages { WarpCancelRes = new SM.WarpCancelResponse { WarpType = c.WarpKind } });
}
