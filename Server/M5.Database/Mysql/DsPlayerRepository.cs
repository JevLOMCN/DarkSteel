using MySqlConnector;

namespace M5.Database.Mysql;

/// <summary>
/// Character (player) data over ds_account.nickname and ds_game.*. In Mir 5 the table key is player_uid
/// (the SqlCharacter*Table protos have no char_uid), so one create-character call seeds one row per table.
/// </summary>
/// <summary>client_msg.CreateCharacterRequest weapon + CharacterCustomInfo (head/body), as stored in ds_game.`character`.</summary>
public record CharacterAppearance(int Weapon, int Gender, int VoiceType, int SkinColor, float Pitch,
    string HeadType, int HeadColor, int FaceType, string HairType,
    string BodyType, int BodySize, int BodyHeadSize, int BodyHandSize, int BodyFootSize);

/// <summary>First spawn: island + world coordinates + facing (from Common/WarpLocation via Common/CharacterCreate.ID_InitWarpLocation).</summary>
public record StartLocation(int IslandId, double X, double Y, double Z, float Direction);

/// <summary>Starting inventory for a new character (Common/CharacterCreate): stackable item ids with counts, and halo points.</summary>
public record StartKit(IReadOnlyList<(int ItemId, int Quantity)> Stackables, int HaloPoint,
    IReadOnlyList<StartEquip> Equipment, int QuestId, int PlayerIconId, int ReturnHomeId);

/// <summary>One starting equipment piece. SlotType is EDS_EquipSlotType (Weapon=1, ArmorChest=2, ArmorPants=3, ArmorGloves=4, ArmorShoes=5, ArmorHelmet=6...).</summary>
public record StartEquip(int ItemId, int SlotType, int SlotIndex, int Durability);

/// <summary>A worn/owned equipment item as stored in ds_game.item_equipment + ds_game.equipment.</summary>
public record EquipRow(long ItemUid, int ItemId, int SlotType, int SlotIndex, int Durability, int Level);

public record QuestRow(int QuestId, int State, int Count1, int Count2, int Count3);

public static class DsPlayerRepository
{
    private static bool _schemaChecked;

    /// <summary>Creates ds_game.`character` when an older DB import lacks it (same DDL as DB/migrations/20261022_ds_game_character.sql).</summary>
    private static async Task EnsureCharacterTableAsync(MySqlConnection conn, CancellationToken ct)
    {
        if (_schemaChecked) return;
        await using var cmd = new MySqlCommand(
            "CREATE TABLE IF NOT EXISTS ds_game.`character` (" +
            "player_uid BIGINT NOT NULL, nickname VARCHAR(12) NOT NULL DEFAULT '', weapon INT NOT NULL DEFAULT 0, " +
            "gender INT NOT NULL DEFAULT 0, voice_type INT NOT NULL DEFAULT 0, skin_color INT NOT NULL DEFAULT 0, pitch FLOAT NOT NULL DEFAULT 0, " +
            "head_type VARCHAR(64) NOT NULL DEFAULT '', head_color INT NOT NULL DEFAULT 0, face_type INT NOT NULL DEFAULT 0, hair_type VARCHAR(64) NOT NULL DEFAULT '', " +
            "body_type VARCHAR(64) NOT NULL DEFAULT '', body_size INT NOT NULL DEFAULT 0, body_head_size INT NOT NULL DEFAULT 0, " +
            "body_hand_size INT NOT NULL DEFAULT 0, body_foot_size INT NOT NULL DEFAULT 0, create_dt DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6), " +
            "PRIMARY KEY (player_uid), UNIQUE KEY character_ix_nickname (nickname)) " +
            "ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci", conn);
        await cmd.ExecuteNonQueryAsync(ct);
        _schemaChecked = true;
    }

    /// <summary>Everything the client needs to enter the world, read from ds_game.* for one player.</summary>
    public record CharacterState(long PlayerUid, string Nickname, CharacterAppearance Appearance, string CustomInfo,
        int Level, long Exp, int Ascend, int Evolve, int PlayerGrade, int PlayerGradeCap, long PlayerGradeExp,
        int Hp, int Mp, int Stamina, int Hunger, int Fatigue, float CombatPower, long Gold,
        int IslandId, string PositionJson, float Direction,
        IReadOnlyList<(int ItemId, int Quantity)> Stackables, int HaloPoint,
        IReadOnlyList<EquipRow> Equipment, IReadOnlyList<QuestRow> MainQuests, int PlayerIconId, int ReturnHomeId);

    public static async Task<CharacterState?> GetCharacterAsync(long playerUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await EnsureCharacterTableAsync(conn, ct);

        async Task<MySqlConnector.MySqlDataReader?> Row(string sql)
        {
            var cmd = new MySqlCommand(sql, conn);
            cmd.Parameters.AddWithValue("@u", playerUid);
            var r = await cmd.ExecuteReaderAsync(ct);
            if (await r.ReadAsync(ct)) return r;
            await r.DisposeAsync();
            return null;
        }

        CharacterAppearance app;
        string nickname;
        await using (var r = await Row("SELECT nickname, weapon, gender, voice_type, skin_color, pitch, head_type, head_color, face_type, hair_type, " +
                                       "body_type, body_size, body_head_size, body_hand_size, body_foot_size FROM ds_game.`character` WHERE player_uid = @u"))
        {
            if (r == null) return null;
            nickname = r.GetString(0);
            app = new CharacterAppearance(r.GetInt32(1), r.GetInt32(2), r.GetInt32(3), r.GetInt32(4), r.GetFloat(5), r.GetString(6), r.GetInt32(7),
                r.GetInt32(8), r.GetString(9), r.GetString(10), r.GetInt32(11), r.GetInt32(12), r.GetInt32(13), r.GetInt32(14));
        }

        string customInfo = "";
        await using (var r = await Row("SELECT custom_info FROM ds_game.g_player WHERE player_uid = @u"))
            if (r != null) customInfo = r.GetString(0);

        int level = 1, ascend = 0, evolve = 0; long exp = 0;
        await using (var r = await Row("SELECT char_level, exp, ascend, evolve FROM ds_game.character_level WHERE player_uid = @u"))
            if (r != null) { level = r.GetInt32(0); exp = r.GetInt64(1); ascend = r.GetInt32(2); evolve = r.GetInt32(3); }

        int grade = 1, cap = 0; long gexp = 0;
        await using (var r = await Row("SELECT player_grade, player_grade_cap, exp FROM ds_game.player_grade WHERE player_uid = @u"))
            if (r != null) { grade = r.GetInt32(0); cap = r.GetInt32(1); gexp = r.GetInt64(2); }

        int hp = 0, mp = 0, stamina = 0, hunger = 0, fatigue = 0;
        await using (var r = await Row("SELECT hp, mp, stamina, hunger, fatigue FROM ds_game.status WHERE player_uid = @u"))
            if (r != null) { hp = r.GetInt32(0); mp = r.GetInt32(1); stamina = r.GetInt32(2); hunger = r.GetInt32(3); fatigue = r.GetInt32(4); }

        float power = 0;
        await using (var r = await Row("SELECT combat_power FROM ds_game.combat_power WHERE player_uid = @u"))
            if (r != null) power = r.GetFloat(0);

        long gold = 0;
        await using (var r = await Row("SELECT quantity FROM ds_game.money WHERE player_uid = @u AND money_id = 11"))
            if (r != null) gold = r.GetInt64(0);

        int island = 1; string posJson = "{\"X\":0,\"Y\":0,\"Z\":0}"; float dir = 0;
        await using (var r = await Row("SELECT island_id, CAST(`position` AS CHAR), direction FROM ds_game.position WHERE player_uid = @u"))
            if (r != null) { island = r.GetInt32(0); posJson = r.GetString(1); dir = r.GetFloat(2); }

        var stackables = new List<(int, int)>();
        {
            await using var cmd = new MySqlCommand("SELECT item_id, quantity FROM ds_game.item_stackable WHERE player_uid = @u AND quantity > 0", conn);
            cmd.Parameters.AddWithValue("@u", playerUid);
            await using var r = await cmd.ExecuteReaderAsync(ct);
            while (await r.ReadAsync(ct)) stackables.Add((r.GetInt32(0), r.GetInt32(1)));
        }

        int halo = 0;
        await using (var r = await Row("SELECT halo_point FROM ds_game.halo_point WHERE player_uid = @u"))
            if (r != null) halo = r.GetInt32(0);

        var equipment = new List<EquipRow>();
        {
            await using var cmd = new MySqlCommand(
                "SELECT i.item_uid, i.item_id, e.slot_type, e.slot_index, i.durability, i.level FROM ds_game.equipment e " +
                "JOIN ds_game.item_equipment i ON i.player_uid = e.player_uid AND i.item_uid = e.item_uid WHERE e.player_uid = @u", conn);
            cmd.Parameters.AddWithValue("@u", playerUid);
            await using var r = await cmd.ExecuteReaderAsync(ct);
            while (await r.ReadAsync(ct)) equipment.Add(new EquipRow(r.GetInt64(0), r.GetInt32(1), r.GetInt32(2), r.GetInt32(3), r.GetInt32(4), r.GetInt32(5)));
        }

        var quests = new List<QuestRow>();
        {
            await using var cmd = new MySqlCommand("SELECT quest_id, quest_state, objective_count_1, objective_count_2, objective_count_3 FROM ds_game.main_quest WHERE player_uid = @u", conn);
            cmd.Parameters.AddWithValue("@u", playerUid);
            await using var r = await cmd.ExecuteReaderAsync(ct);
            while (await r.ReadAsync(ct)) quests.Add(new QuestRow(r.GetInt32(0), r.GetInt32(1), r.GetInt32(2), r.GetInt32(3), r.GetInt32(4)));
        }

        int iconId = 0, returnHome = 0;
        await using (var r = await Row("SELECT player_icon_id FROM ds_game.player_icon WHERE player_uid = @u LIMIT 1"))
            if (r != null) iconId = r.GetInt32(0);
        await using (var r = await Row("SELECT return_home_id FROM ds_game.return_home WHERE player_uid = @u LIMIT 1"))
            if (r != null) returnHome = r.GetInt32(0);

        return new CharacterState(playerUid, nickname, app, customInfo, level, exp, ascend, evolve, grade, cap, gexp,
            hp, mp, stamina, hunger, fatigue, power, gold, island, posJson, dir, stackables, halo,
            equipment, quests, iconId, returnHome);
    }

    /// <summary>Result of <see cref="EquipAsync"/>: Ok, or a reason the client maps to an ErrorCode.</summary>
    public enum EquipResult { Ok, ItemNotFound, WrongSlot }

    /// <summary>
    /// Puts an owned equipment item into a slot (or clears the slot with itemUid 0). The old item in that slot, and any other slot this item
    /// was in, are freed (they stay in the bag as item_equipment rows). <paramref name="slotFor"/> maps an item id to its EDS_EquipSlotType.
    /// </summary>
    public static async Task<(EquipResult Result, int ItemId, IReadOnlyList<(int SlotType, int SlotIndex)> Freed)> EquipAsync(long playerUid, int charId, int slotType, int slotIndex, long itemUid,
        Func<int, (int SlotType, int SlotIndex)> slotFor, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        int itemId = 0;
        if (itemUid != 0)
        {
            await using var sel = new MySqlCommand("SELECT item_id FROM ds_game.item_equipment WHERE player_uid = @u AND item_uid = @i", conn);
            sel.Parameters.AddWithValue("@u", playerUid);
            sel.Parameters.AddWithValue("@i", itemUid);
            var v = await sel.ExecuteScalarAsync(ct);
            if (v == null) return (EquipResult.ItemNotFound, 0, Array.Empty<(int, int)>());
            itemId = Convert.ToInt32(v);
            if (slotFor(itemId) != (slotType, slotIndex)) return (EquipResult.WrongSlot, itemId, Array.Empty<(int, int)>());
        }

        // other slots this item was worn in (it moves), so the caller can tell the client to clear them
        var freed = new List<(int, int)>();
        if (itemUid != 0)
        {
            await using var q = new MySqlCommand(
                "SELECT slot_type, slot_index FROM ds_game.equipment WHERE player_uid = @u AND item_uid = @i AND NOT (slot_type = @s AND slot_index = @x)", conn);
            q.Parameters.AddWithValue("@u", playerUid);
            q.Parameters.AddWithValue("@i", itemUid);
            q.Parameters.AddWithValue("@s", slotType);
            q.Parameters.AddWithValue("@x", slotIndex);
            await using var r = await q.ExecuteReaderAsync(ct);
            while (await r.ReadAsync(ct)) freed.Add((r.GetInt32(0), r.GetInt32(1)));
        }

        await using var tx = await conn.BeginTransactionAsync(ct);
        async Task Exec(string sql, params (string, object)[] ps)
        {
            await using var cmd = new MySqlCommand(sql, conn, tx);
            foreach (var (k, val) in ps) cmd.Parameters.AddWithValue(k, val);
            await cmd.ExecuteNonQueryAsync(ct);
        }
        await Exec("DELETE FROM ds_game.equipment WHERE player_uid = @u AND char_id = @c AND slot_type = @s AND slot_index = @x",
            ("@u", playerUid), ("@c", charId), ("@s", slotType), ("@x", slotIndex));
        if (itemUid != 0)
        {
            await Exec("DELETE FROM ds_game.equipment WHERE player_uid = @u AND item_uid = @i", ("@u", playerUid), ("@i", itemUid));
            await Exec("INSERT INTO ds_game.equipment (player_uid, char_id, slot_type, slot_index, item_uid) VALUES (@u, @c, @s, @x, @i)",
                ("@u", playerUid), ("@c", charId), ("@s", slotType), ("@x", slotIndex), ("@i", itemUid));
        }
        await tx.CommitAsync(ct);
        return (EquipResult.Ok, itemId, freed);
    }

    /// <summary>GM: add an equipment item to the bag; returns the new item_uid.</summary>
    public static async Task<long> AddEquipmentItemAsync(long playerUid, int itemId, int durability, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var max = new MySqlCommand("SELECT COALESCE(MAX(item_uid), @base) FROM ds_game.item_equipment WHERE player_uid = @u", conn);
        max.Parameters.AddWithValue("@u", playerUid);
        max.Parameters.AddWithValue("@base", playerUid * 1_000_000L);
        long itemUid = Convert.ToInt64(await max.ExecuteScalarAsync(ct)) + 1;
        await using var ins = new MySqlCommand(
            "INSERT INTO ds_game.item_equipment (player_uid, item_uid, item_id, inventory_type, level, durability) VALUES (@u, @iu, @i, 1, 1, @d)", conn);
        ins.Parameters.AddWithValue("@u", playerUid);
        ins.Parameters.AddWithValue("@iu", itemUid);
        ins.Parameters.AddWithValue("@i", itemId);
        ins.Parameters.AddWithValue("@d", durability);
        await ins.ExecuteNonQueryAsync(ct);
        return itemUid;
    }

    /// <summary>GM: add to a stackable item and return the new total.</summary>
    public static async Task<int> AddStackableAsync(long playerUid, int itemId, int quantity, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using (var ins = new MySqlCommand(
            "INSERT INTO ds_game.item_stackable (player_uid, item_id, quantity) VALUES (@u, @i, @q) ON DUPLICATE KEY UPDATE quantity = quantity + @q", conn))
        {
            ins.Parameters.AddWithValue("@u", playerUid);
            ins.Parameters.AddWithValue("@i", itemId);
            ins.Parameters.AddWithValue("@q", quantity);
            await ins.ExecuteNonQueryAsync(ct);
        }
        await using var sel = new MySqlCommand("SELECT quantity FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i", conn);
        sel.Parameters.AddWithValue("@u", playerUid);
        sel.Parameters.AddWithValue("@i", itemId);
        return Convert.ToInt32(await sel.ExecuteScalarAsync(ct));
    }

    /// <summary>Takes <paramref name="quantity"/> of a stackable item if the player has that many; returns the new total, or -1 when he does not.</summary>
    public static async Task<int> TakeStackableAsync(long playerUid, int itemId, int quantity, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using (var upd = new MySqlCommand(
            "UPDATE ds_game.item_stackable SET quantity = quantity - @q WHERE player_uid = @u AND item_id = @i AND quantity >= @q", conn))
        {
            upd.Parameters.AddWithValue("@u", playerUid);
            upd.Parameters.AddWithValue("@i", itemId);
            upd.Parameters.AddWithValue("@q", quantity);
            if (await upd.ExecuteNonQueryAsync(ct) == 0) return -1;
        }
        await using var sel = new MySqlCommand("SELECT quantity FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i", conn);
        sel.Parameters.AddWithValue("@u", playerUid);
        sel.Parameters.AddWithValue("@i", itemId);
        int left = Convert.ToInt32(await sel.ExecuteScalarAsync(ct));
        if (left <= 0)      // an empty stack is not an item any more
        {
            await using var del = new MySqlCommand("DELETE FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i AND quantity <= 0", conn);
            del.Parameters.AddWithValue("@u", playerUid);
            del.Parameters.AddWithValue("@i", itemId);
            await del.ExecuteNonQueryAsync(ct);
            left = 0;
        }
        return left;
    }

    /// <summary>GM: set character level (and exp) in ds_game.character_level.</summary>
    public static async Task SetLevelAsync(long playerUid, int level, long exp, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand(
            "INSERT INTO ds_game.character_level (player_uid, char_level, exp) VALUES (@u, @l, @e) ON DUPLICATE KEY UPDATE char_level = @l, exp = @e", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@l", level);
        cmd.Parameters.AddWithValue("@e", exp);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    /// <summary>GM: set the player grade (and cap) in ds_game.player_grade.</summary>
    public static async Task SetPlayerGradeAsync(long playerUid, int grade, long exp, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand(
            "INSERT INTO ds_game.player_grade (player_uid, player_grade, exp) VALUES (@u, @g, @e) ON DUPLICATE KEY UPDATE player_grade = @g, exp = @e", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@g", grade);
        cmd.Parameters.AddWithValue("@e", exp);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    /// <summary>Adds to (or, with <paramref name="set"/>, replaces) a money balance and returns the new quantity. MoneyType: 1 Copper, 11 Gold, 12 NotTradeGold, 51 Mileage.</summary>
    public static async Task<long> ChangeMoneyAsync(long playerUid, int moneyId, long amount, bool set, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using (var cmd = new MySqlCommand(
            set ? "INSERT INTO ds_game.money (player_uid, money_id, quantity) VALUES (@u, @m, @a) ON DUPLICATE KEY UPDATE quantity = @a"
                : "INSERT INTO ds_game.money (player_uid, money_id, quantity) VALUES (@u, @m, GREATEST(0, @a)) ON DUPLICATE KEY UPDATE quantity = GREATEST(0, quantity + @a)", conn))
        {
            cmd.Parameters.AddWithValue("@u", playerUid);
            cmd.Parameters.AddWithValue("@m", moneyId);
            cmd.Parameters.AddWithValue("@a", amount);
            await cmd.ExecuteNonQueryAsync(ct);
        }
        await using var sel = new MySqlCommand("SELECT quantity FROM ds_game.money WHERE player_uid = @u AND money_id = @m", conn);
        sel.Parameters.AddWithValue("@u", playerUid);
        sel.Parameters.AddWithValue("@m", moneyId);
        return Convert.ToInt64(await sel.ExecuteScalarAsync(ct));
    }

    /// <summary>All money balances of the player: (money id, quantity).</summary>
    public static async Task<List<(int MoneyId, long Quantity)>> GetMoneyAsync(long playerUid, CancellationToken ct = default)
    {
        var rows = new List<(int, long)>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand("SELECT money_id, quantity FROM ds_game.money WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) rows.Add((r.GetInt32(0), r.GetInt64(1)));
        return rows;
    }

    /// <summary>Stores where the character is standing (used for the first spawn and later logouts).</summary>
    public static async Task SavePositionAsync(long playerUid, int islandId, double x, double y, double z, float direction, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand(
            "INSERT INTO ds_game.position (player_uid, island_id, `position`, direction) VALUES (@u, @i, @p, @d) " +
            "ON DUPLICATE KEY UPDATE island_id = @i, `position` = @p, direction = @d", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        cmd.Parameters.AddWithValue("@i", islandId);
        cmd.Parameters.AddWithValue("@p", System.FormattableString.Invariant($"{{\"X\":{x},\"Y\":{y},\"Z\":{z}}}"));
        cmd.Parameters.AddWithValue("@d", direction);
        await cmd.ExecuteNonQueryAsync(ct);
    }

    public static async Task<bool> NicknameExistsAsync(string nickname, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync("ds_account", ct);
        await using var cmd = new MySqlCommand("SELECT 1 FROM nickname WHERE nickname = @n LIMIT 1", conn);
        cmd.Parameters.AddWithValue("@n", nickname);
        return await cmd.ExecuteScalarAsync(ct) != null;
    }

    /// <summary>Nickname already registered for this player, or null if they have not created a character.</summary>
    public static async Task<string?> GetNicknameAsync(long playerUid, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync("ds_account", ct);
        await using var cmd = new MySqlCommand("SELECT nickname FROM nickname WHERE player_uid = @u", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        return (await cmd.ExecuteScalarAsync(ct)) as string;
    }

    /// <summary>
    /// Registers the nickname and seeds the starting rows in one transaction.
    /// Returns false if the nickname or the player already exists.
    /// </summary>
    public static async Task<bool> CreateCharacterAsync(long playerUid, string nickname, int worldId,
        CharacterAppearance a, string customInfo, StartLocation start, StartKit kit, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await EnsureCharacterTableAsync(conn, ct);
        await using var tx = await conn.BeginTransactionAsync(ct);

        async Task<int> Exec(string sql, params (string, object)[] ps)
        {
            await using var cmd = new MySqlCommand(sql, conn, tx);
            foreach (var (k, v) in ps) cmd.Parameters.AddWithValue(k, v);
            return await cmd.ExecuteNonQueryAsync(ct);
        }

        try
        {
            // Unique index on nickname makes a duplicate name fail here (0 rows with IGNORE).
            if (await Exec("INSERT IGNORE INTO ds_account.nickname (player_uid, nickname, world_id) VALUES (@u, @n, @w)",
                    ("@u", playerUid), ("@n", nickname), ("@w", worldId)) == 0)
            {
                await tx.RollbackAsync(ct);
                return false;
            }

            await Exec("UPDATE ds_account.session SET nickname = @n WHERE player_uid = @u", ("@u", playerUid), ("@n", nickname));
            await Exec("INSERT IGNORE INTO ds_game.player (player_uid, nickname) VALUES (@u, @n)", ("@u", playerUid), ("@n", nickname));
            await Exec("INSERT IGNORE INTO ds_game.g_player (player_uid, custom_info) VALUES (@u, @c)", ("@u", playerUid), ("@c", customInfo));
            await Exec("INSERT IGNORE INTO ds_game.`character` (player_uid, nickname, weapon, gender, voice_type, skin_color, pitch, " +
                "head_type, head_color, face_type, hair_type, body_type, body_size, body_head_size, body_hand_size, body_foot_size) " +
                "VALUES (@u, @n, @w1, @g, @v, @sc, @p, @ht, @hc, @ft, @hr, @bt, @bs, @bh, @bn, @bf)",
                ("@u", playerUid), ("@n", nickname), ("@w1", a.Weapon), ("@g", a.Gender), ("@v", a.VoiceType), ("@sc", a.SkinColor), ("@p", a.Pitch),
                ("@ht", a.HeadType), ("@hc", a.HeadColor), ("@ft", a.FaceType), ("@hr", a.HairType),
                ("@bt", a.BodyType), ("@bs", a.BodySize), ("@bh", a.BodyHeadSize), ("@bn", a.BodyHandSize), ("@bf", a.BodyFootSize));
            await Exec("INSERT IGNORE INTO ds_game.character_level (player_uid) VALUES (@u)", ("@u", playerUid));
            await Exec("INSERT IGNORE INTO ds_game.character_skin (player_uid) VALUES (@u)", ("@u", playerUid));
            await Exec("INSERT IGNORE INTO ds_game.combat_power (player_uid) VALUES (@u)", ("@u", playerUid));
            await Exec("INSERT IGNORE INTO ds_game.player_grade (player_uid) VALUES (@u)", ("@u", playerUid));
            await Exec("INSERT IGNORE INTO ds_game.position (player_uid, island_id, `position`, direction) VALUES (@u, @i, @p, @d)",
                ("@u", playerUid), ("@i", start.IslandId),
                ("@p", System.FormattableString.Invariant($"{{\"X\":{start.X},\"Y\":{start.Y},\"Z\":{start.Z}}}")), ("@d", start.Direction));
            // Starting vitals; zero would read as dead. Real values come from the Status stat tables later.
            await Exec("INSERT IGNORE INTO ds_game.status (player_uid, hp, mp, stamina, hunger, fatigue) VALUES (@u, 1000, 500, 100, 100, 0)", ("@u", playerUid));
            await Exec("INSERT IGNORE INTO ds_game.money (player_uid, money_id, quantity) VALUES (@u, 11, 0)", ("@u", playerUid));
            await Exec("INSERT IGNORE INTO ds_game.halo_point (player_uid, halo_point) VALUES (@u, @h)", ("@u", playerUid), ("@h", kit.HaloPoint));
            // Starting equipment: item_equipment row per piece + equipment slot row. item_uid = playerUid * 1_000_000 + running number.
            long nextUid = playerUid * 1_000_000L;
            foreach (var eq in kit.Equipment)
            {
                long itemUid = ++nextUid;
                await Exec("INSERT IGNORE INTO ds_game.item_equipment (player_uid, item_uid, item_id, inventory_type, level, durability) VALUES (@u, @iu, @i, 1, 1, @d)",
                    ("@u", playerUid), ("@iu", itemUid), ("@i", eq.ItemId), ("@d", eq.Durability));
                await Exec("INSERT IGNORE INTO ds_game.equipment (player_uid, char_id, slot_type, slot_index, item_uid) VALUES (@u, @c, @s, @x, @iu)",
                    ("@u", playerUid), ("@c", a.Weapon), ("@s", eq.SlotType), ("@x", eq.SlotIndex), ("@iu", itemUid));
            }
            if (kit.QuestId > 0)
                await Exec("INSERT IGNORE INTO ds_game.main_quest (player_uid, quest_id, quest_state) VALUES (@u, @q, 0)", ("@u", playerUid), ("@q", kit.QuestId));
            if (kit.PlayerIconId > 0)
            {
                await Exec("INSERT IGNORE INTO ds_game.player_icon (player_uid, player_icon_id) VALUES (@u, @i)", ("@u", playerUid), ("@i", kit.PlayerIconId));
                await Exec("INSERT IGNORE INTO ds_game.player_icon_equip (player_uid, player_icon_id) VALUES (@u, @i)", ("@u", playerUid), ("@i", kit.PlayerIconId));
            }
            if (kit.ReturnHomeId > 0)
                await Exec("INSERT IGNORE INTO ds_game.return_home (player_uid, return_home_id) VALUES (@u, @r)", ("@u", playerUid), ("@r", kit.ReturnHomeId));
            foreach (var (itemId, qty) in kit.Stackables)
                await Exec("INSERT INTO ds_game.item_stackable (player_uid, item_id, quantity) VALUES (@u, @i, @q) ON DUPLICATE KEY UPDATE quantity = quantity + @q",
                    ("@u", playerUid), ("@i", itemId), ("@q", qty));

            await tx.CommitAsync(ct);
            return true;
        }
        catch
        {
            await tx.RollbackAsync(ct);
            throw;
        }
    }

    /// <summary>Bought extra bag/warehouse slots (ds_game.inven_extend_info.extend_slot_count), keyed by InventoryType.</summary>
    public static async Task<List<(int Type, int Slots)>> GetInvenExtendAsync(long playerUid, CancellationToken ct = default)
    {
        var rows = new List<(int, int)>();
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var cmd = new MySqlCommand(
            "SELECT extend_type, extend_slot_count FROM ds_game.inven_extend_info WHERE player_uid = @u AND extend_slot_count > 0", conn);
        cmd.Parameters.AddWithValue("@u", playerUid);
        await using var r = await cmd.ExecuteReaderAsync(ct);
        while (await r.ReadAsync(ct)) rows.Add((r.GetInt32(0), r.GetInt32(1)));
        return rows;
    }

    public enum InvenExtendResult { Ok, AtMax, MoneyShort, ItemShort }

    public sealed record InvenExtendOutcome(InvenExtendResult Result, int Slots, long? GoldLeft, int? ItemId, int? ItemLeft);

    /// <summary>
    /// Adds <paramref name="addSlots"/> extra slots of <paramref name="inventoryType"/>, taking gold and/or a stackable item in the same
    /// transaction. <paramref name="maxExtra"/> is MaxSlotCount - DefaultSlotCount from Common/InventoryBase (the bought extras, not the total bag size).
    /// </summary>
    public static async Task<InvenExtendOutcome> ExtendInvenAsync(long playerUid, int inventoryType, int addSlots, int maxExtra,
        int moneyId, long moneyCost, int itemId, int itemCost, CancellationToken ct = default)
    {
        await using var conn = await DsDatabase.OpenAsync(null, ct);
        await using var tx = await conn.BeginTransactionAsync(ct);

        async Task<object?> Scalar(string sql, params (string, object)[] ps)
        {
            await using var cmd = new MySqlCommand(sql, conn, tx);
            foreach (var (n, v) in ps) cmd.Parameters.AddWithValue(n, v);
            return await cmd.ExecuteScalarAsync(ct);
        }
        async Task Exec(string sql, params (string, object)[] ps)
        {
            await using var cmd = new MySqlCommand(sql, conn, tx);
            foreach (var (n, v) in ps) cmd.Parameters.AddWithValue(n, v);
            await cmd.ExecuteNonQueryAsync(ct);
        }
        InvenExtendOutcome Fail(InvenExtendResult r) => new(r, 0, null, null, null);

        await Exec(
            "INSERT IGNORE INTO ds_game.inven_extend_info (player_uid, extend_type, extend_slot_count) VALUES (@u, @t, 0)",
            ("@u", playerUid), ("@t", inventoryType));
        int current = Convert.ToInt32(await Scalar(
            "SELECT extend_slot_count FROM ds_game.inven_extend_info WHERE player_uid = @u AND extend_type = @t FOR UPDATE",
            ("@u", playerUid), ("@t", inventoryType)));
        if (addSlots <= 0 || current + addSlots > maxExtra) { await tx.RollbackAsync(ct); return Fail(InvenExtendResult.AtMax); }

        long? goldLeft = null;
        if (moneyCost > 0)
        {
            var have = await Scalar("SELECT quantity FROM ds_game.money WHERE player_uid = @u AND money_id = @m FOR UPDATE",
                ("@u", playerUid), ("@m", moneyId));
            if (have == null || Convert.ToInt64(have) < moneyCost) { await tx.RollbackAsync(ct); return Fail(InvenExtendResult.MoneyShort); }
            await Exec("UPDATE ds_game.money SET quantity = quantity - @q WHERE player_uid = @u AND money_id = @m",
                ("@q", moneyCost), ("@u", playerUid), ("@m", moneyId));
            goldLeft = Convert.ToInt64(await Scalar("SELECT quantity FROM ds_game.money WHERE player_uid = @u AND money_id = @m",
                ("@u", playerUid), ("@m", moneyId)));
        }

        int? itemLeft = null;
        if (itemCost > 0 && itemId > 0)
        {
            var have = await Scalar("SELECT quantity FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i FOR UPDATE",
                ("@u", playerUid), ("@i", itemId));
            if (have == null || Convert.ToInt64(have) < itemCost) { await tx.RollbackAsync(ct); return Fail(InvenExtendResult.ItemShort); }
            await Exec("UPDATE ds_game.item_stackable SET quantity = quantity - @q WHERE player_uid = @u AND item_id = @i",
                ("@q", itemCost), ("@u", playerUid), ("@i", itemId));
            int left = Convert.ToInt32(await Scalar("SELECT quantity FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i",
                ("@u", playerUid), ("@i", itemId)));
            if (left <= 0)
            {
                await Exec("DELETE FROM ds_game.item_stackable WHERE player_uid = @u AND item_id = @i AND quantity <= 0",
                    ("@u", playerUid), ("@i", itemId));
                left = 0;
            }
            itemLeft = left;
        }

        await Exec("UPDATE ds_game.inven_extend_info SET extend_slot_count = extend_slot_count + @a WHERE player_uid = @u AND extend_type = @t",
            ("@a", addSlots), ("@u", playerUid), ("@t", inventoryType));
        int slots = Convert.ToInt32(await Scalar(
            "SELECT extend_slot_count FROM ds_game.inven_extend_info WHERE player_uid = @u AND extend_type = @t",
            ("@u", playerUid), ("@t", inventoryType)));
        await tx.CommitAsync(ct);
        return new InvenExtendOutcome(InvenExtendResult.Ok, slots, goldLeft, itemId > 0 ? itemId : null, itemLeft);
    }
}
