-- Local dev seed for the Mir 5 ds_* databases (MySQL 5.7+). Safe to re-run.
-- Points every server list at this machine so the client can reach our server.
-- Values follow the leaked server's start_server.bat (F:\Mir5\Server 19.01.26\Server): game server LISTEN 31101,
-- GRPC_LISTEN 31201, front end / DATA_TABLE_URL http://127.0.0.1:7000, GAME_SERVER_INDEX=1, REGION_INDEX=1,
-- SERVER_TYPE=1, TIMEZONE_INDEX=1.
-- UNVERIFIED: the *_state / server_type values below are guesses (the enum names are not in the
-- extracted protos). Confirm them against the client before relying on them.

SET NAMES utf8mb4;

-- Region 1 -> front end (HTTP login/session + server list)
DELETE FROM `ds_config`.`front_end_server_list` WHERE address = '127.0.0.1:31001';

REPLACE INTO `ds_config`.`region_server_list` (region_index, address, server_state, server_refresh_dt, service_bus_string)
VALUES (1, '127.0.0.1:7000', 1, NOW(6), '');

REPLACE INTO `ds_config`.`front_end_server_list` (region_index, server_index, address, players, server_state, server_refresh_dt)
VALUES (1, 1, '127.0.0.1:7000', 0, 1, NOW(6));

-- World 1 -> game server (what -GameServer=ip:port connects to)
REPLACE INTO `ds_config`.`game_server_list`
  (server_index, world_id, server_type, region_index, timezone_index, address, grpc_address, json, game_server_state, game_server_refresh_dt, world_name_id)
VALUES (1, 1, 1, 1, 1, '127.0.0.1:31101', '127.0.0.1:31201', '', 1, NOW(6), 0);

REPLACE INTO `ds_config`.`db_agent_server_list` (world_id, region_index, address, database_address, database_user, database_name, server_state, server_refresh_dt)
VALUES (1, 1, '127.0.0.1:7000', '127.0.0.1', 'dev', 'ds_game', 1, NOW(6));

REPLACE INTO `ds_config`.`guild_server_list` (server_index, address, server_state, server_refresh_dt)
VALUES (1, '127.0.0.1:33007', 1, NOW(6));

-- Test account for the login path (id 'dev', server assigns the uid).
INSERT IGNORE INTO `ds_account`.`player` (id, authority) VALUES ('dev', 21);
