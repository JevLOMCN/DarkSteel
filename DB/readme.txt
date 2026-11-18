DB - Legend of Mir 5 (DarkSteel) server database
================================================

mir5_server_db.sql
------------------
MySQL 8.0 schema for the player and config data. 81 tables, 537 columns, 7 schemas
(ds_account, ds_config, ds_game, ds_guild, ds_mail, ds_rank, ds_world). No foreign keys.
Run it in MySQL Workbench with File > Run SQL Script. It creates the schemas itself.

Where it comes from
- The client's own protobuf table descriptors (the Sql*Table messages in Server/Protos/Global).
  These carry the primary keys, indexes, column lengths, defaults and identity flags.
- They match the descriptors embedded in ProjectDS.exe and the client decompile
  (field names, numbers and order checked for every table).
- The client model is SQL Server style (Bigint, Datetime2, GetDate, IDENTITY) and was
  translated to MySQL.

What is NOT in the database: static game data
- Item stats, monsters, skills, NPCs, maps, quests and the other design data stay as JSON
  in Server/Data (exported from the client's DataTables), as the Mir 4 server does.
  The server loads and validates against those files.
- The database holds per-player and per-server state only. For example, ds_game.item_equipment
  and ds_game.item_stackable store the items a character owns, and their item_id points at an
  item ID in the JSON static data.

Assumptions to confirm
1. Columns the client marks "repeated N" are stored as N numbered columns
   (objective_count_1 .. _3, quest_id_1 .. _10, the weather columns, and so on).
   The descriptors do not say how the original server stored them.
2. Enum columns are INT with the enum name in the column comment.
3. Columns marked ignore=true in the client model are not stored (update_types).
4. SqlUniqueIdDefault_None is mapped to a random UUID. It may really mean an empty UUID
   (affects ds_account.session.player_session_uid).
5. ds_guild.g_guild has a composite primary key (guild_uid, guild_name) and guild_name is also
   unique. That looks odd but is what the model says.

Status
- Not yet run against a MySQL server. The file was checked by script: all 81 tables present,
  every table has a primary key, parentheses balanced, per-table column counts match the model.
- First step: run it in Workbench and note any errors.
