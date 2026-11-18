-- ============================================================================
-- Legend of Mir 5 (DarkSteel) - server database schema, MySQL 8.0
-- ----------------------------------------------------------------------------
-- Generated from the client's own protobuf table descriptors (Sql*Table
-- messages, decoded from the .protoc files incl. custom db.* column options;
-- verified identical to the descriptors embedded in ProjectDS.exe).
-- Source model is SQL Server style (Bigint, Datetime2, GetDate, IDENTITY) and
-- has been translated to MySQL. Run in MySQL Workbench: File > Run SQL Script.
--
-- Tables: 81 across 7 schemas. No foreign keys (the client model has none).
-- Assumptions to confirm:
--  * "repeated: N" columns are stored as N numbered columns (<name>_1 .. <name>_N).
--  * Enum columns are INT with the enum name in the column comment.
--  * Columns the model marks ignore=true are not stored (g_player/player.update_types).
--  * Nothing here has been executed against a MySQL server yet.
-- ============================================================================

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

CREATE SCHEMA IF NOT EXISTS `ds_account` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
CREATE SCHEMA IF NOT EXISTS `ds_config` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
CREATE SCHEMA IF NOT EXISTS `ds_game` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
CREATE SCHEMA IF NOT EXISTS `ds_guild` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
CREATE SCHEMA IF NOT EXISTS `ds_mail` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
CREATE SCHEMA IF NOT EXISTS `ds_rank` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
CREATE SCHEMA IF NOT EXISTS `ds_world` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;

-- ============================================================================
-- Part 1: ds_account, ds_config, ds_guild, ds_mail, ds_rank, ds_world
-- ============================================================================

-- Part 1: ds_account, ds_config, ds_guild, ds_mail, ds_rank, ds_world
-- Tables: ds_account.g_account, ds_account.g_nickname, ds_account.nickname, ds_account.player, ds_account.session, ds_config.contents_base, ds_config.contents_function, ds_config.db_agent_server_list, ds_config.front_end_server_list, ds_config.game_server_list, ds_config.guild_server_list, ds_config.node, ds_config.region_node, ds_config.region_server_list, ds_guild.g_guild, ds_guild.g_guild_join_request, ds_guild.g_guild_member, ds_mail.mail, ds_rank.rank_state, ds_rank.raw_rank, ds_rank.summary_rank, ds_world.breach_history, ds_world.district_weather, ds_world.world_boss, ds_world.zone_weather

-- ds_account.g_account
CREATE TABLE IF NOT EXISTS `ds_account`.`g_account` (
  `player_uid` BIGINT NOT NULL AUTO_INCREMENT,
  `wn_pid` VARCHAR(50) NOT NULL,
  `server_id` INT NOT NULL,
  `authority` INT NOT NULL,
  `reg_time` DATETIME(6) NOT NULL,
  `update_time` DATETIME(6) NOT NULL,
  PRIMARY KEY (`player_uid`),
  KEY `g_account_ix_player_uid` (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlGAccountTable from sql_g_account_table.proto.protoc';

-- ds_account.g_nickname
CREATE TABLE IF NOT EXISTS `ds_account`.`g_nickname` (
  `player_uid` BIGINT NOT NULL,
  `nickname` VARCHAR(50) NOT NULL DEFAULT '',
  `reg_time` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlGNicknameTable from sql_g_nickname_table.proto.protoc';

-- ds_account.nickname
CREATE TABLE IF NOT EXISTS `ds_account`.`nickname` (
  `player_uid` BIGINT NOT NULL,
  `nickname` VARCHAR(12) NOT NULL DEFAULT '',
  `world_id` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`),
  UNIQUE KEY `nickname_ix_nickname` (`nickname`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlNicknameTable from sql_nickname_table.proto.protoc';

-- ds_account.player
-- note: distinct from ds_game.player
CREATE TABLE IF NOT EXISTS `ds_account`.`player` (
  `player_uid` BIGINT NOT NULL AUTO_INCREMENT,
  `id` VARCHAR(50) NOT NULL DEFAULT '',
  `authority` INT NOT NULL DEFAULT 11 COMMENT 'enum AccountAuthority: 11 Normal, 21 Gm, 22 GmInvisible, 31 Official',
  `login_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `create_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`),
  UNIQUE KEY `player_ix_id` (`id`),
  KEY `player_ix_login_dt` (`login_dt`),
  KEY `player_ix_create_dt` (`create_dt`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPlayerTable from sql_player_table.proto.protoc';

-- ds_account.session
CREATE TABLE IF NOT EXISTS `ds_account`.`session` (
  `player_uid` BIGINT NOT NULL,
  `player_session_uid` BINARY(16) NULL DEFAULT NULL COMMENT 'UniqueId (UUID)',
  `region_index` INT NOT NULL DEFAULT 0,
  `world_id` INT NOT NULL DEFAULT 0,
  `nickname` VARCHAR(12) NOT NULL DEFAULT '',
  `authority` INT NOT NULL DEFAULT 11 COMMENT 'enum AccountAuthority: 11 Normal, 21 Gm, 22 GmInvisible, 31 Official',
  `login_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `expire_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`),
  KEY `player_ix_login_dt` (`login_dt`),
  KEY `player_ix_expire_dt` (`expire_dt`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlSessionTable from sql_session_table.proto.protoc';

-- MySQL 5.7-compatible UUID generation for session rows.
DROP TRIGGER IF EXISTS `ds_account`.`session_bi_uuid`;
CREATE TRIGGER `ds_account`.`session_bi_uuid`
BEFORE INSERT ON `ds_account`.`session`
FOR EACH ROW
SET NEW.`player_session_uid` = IFNULL(
  NEW.`player_session_uid`,
  UNHEX(REPLACE(UUID(), '-', ''))
);


-- ds_config.contents_base
CREATE TABLE IF NOT EXISTS `ds_config`.`contents_base` (
  `index` INT NOT NULL COMMENT 'enum ContentsBaseType',
  `control_target` INT NOT NULL DEFAULT 0 COMMENT 'enum ContentsControlTargetType',
  `control_target_value` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`index`, `control_target`, `control_target_value`),
  KEY `contents_base_id` (`index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlContentsBaseTable from sql_contents_base_table.proto.protoc';

-- ds_config.contents_function
-- function_lock_value expanded to function_lock_value_1..function_lock_value_5 (assumed layout)
CREATE TABLE IF NOT EXISTS `ds_config`.`contents_function` (
  `index` INT NOT NULL COMMENT 'enum ContentsFunctionType',
  `control_target` INT NOT NULL DEFAULT 0 COMMENT 'enum ContentsControlTargetType',
  `control_target_value` INT NOT NULL DEFAULT 0,
  `function_lock_type` INT NOT NULL DEFAULT 0 COMMENT 'enum FunctionLockType',
  `function_lock_value_1` INT NOT NULL COMMENT 'repeated x 5',
  `function_lock_value_2` INT NOT NULL COMMENT 'repeated x 5',
  `function_lock_value_3` INT NOT NULL COMMENT 'repeated x 5',
  `function_lock_value_4` INT NOT NULL COMMENT 'repeated x 5',
  `function_lock_value_5` INT NOT NULL COMMENT 'repeated x 5',
  PRIMARY KEY (`index`, `control_target`, `control_target_value`),
  KEY `contents_function_id` (`index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlContentsFunctionTable from sql_contents_function_table.proto.protoc';

-- ds_config.db_agent_server_list
CREATE TABLE IF NOT EXISTS `ds_config`.`db_agent_server_list` (
  `world_id` INT NOT NULL DEFAULT 0,
  `region_index` INT NOT NULL DEFAULT 0,
  `address` VARCHAR(50) NOT NULL DEFAULT '',
  `database_address` VARCHAR(50) NOT NULL DEFAULT '',
  `database_user` VARCHAR(50) NOT NULL DEFAULT '',
  `database_name` VARCHAR(50) NOT NULL DEFAULT '',
  `server_state` INT NOT NULL DEFAULT 0,
  `server_refresh_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`world_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlDbAgentServerListTable from sql_db_agent_server_list_table.proto.protoc';

-- ds_config.front_end_server_list
CREATE TABLE IF NOT EXISTS `ds_config`.`front_end_server_list` (
  `region_index` INT NOT NULL DEFAULT 0,
  `server_index` INT NOT NULL DEFAULT 0,
  `address` VARCHAR(50) NOT NULL DEFAULT '',
  `players` INT NOT NULL DEFAULT 0,
  `server_state` INT NOT NULL DEFAULT 0,
  `server_refresh_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`region_index`, `address`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlFrontEndServerListTable from sql_front_end_server_list_table.proto.protoc';

-- ds_config.game_server_list
CREATE TABLE IF NOT EXISTS `ds_config`.`game_server_list` (
  `server_index` INT NOT NULL DEFAULT 0,
  `world_id` INT NOT NULL DEFAULT 0,
  `server_type` INT NOT NULL DEFAULT 0,
  `region_index` INT NOT NULL DEFAULT 1,
  `timezone_index` INT NOT NULL DEFAULT 1,
  `address` VARCHAR(50) NOT NULL DEFAULT '',
  `grpc_address` VARCHAR(50) NOT NULL DEFAULT '',
  `json` VARCHAR(512) NOT NULL DEFAULT '',
  `game_server_state` INT NOT NULL DEFAULT 0,
  `game_server_refresh_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `world_name_id` BIGINT NOT NULL DEFAULT 0,
  PRIMARY KEY (`server_index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlGameServerListTable from sql_game_server_list_table.proto.protoc';

-- ds_config.guild_server_list
CREATE TABLE IF NOT EXISTS `ds_config`.`guild_server_list` (
  `server_index` INT NOT NULL DEFAULT 0,
  `address` VARCHAR(50) NOT NULL DEFAULT '',
  `server_state` INT NOT NULL DEFAULT 0,
  `server_refresh_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`server_index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlGuildServerListTable from sql_guild_server_list_table.proto.protoc';

-- ds_config.node
CREATE TABLE IF NOT EXISTS `ds_config`.`node` (
  `node_uid` INT NOT NULL AUTO_INCREMENT,
  `expired_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`node_uid`),
  KEY `node_ix_refresh_dt` (`expired_dt`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlNodeTable from sql_node_table.proto.protoc';

-- ds_config.region_node
CREATE TABLE IF NOT EXISTS `ds_config`.`region_node` (
  `node_uid` INT NOT NULL AUTO_INCREMENT,
  `expired_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`node_uid`),
  KEY `node_ix_refresh_dt` (`expired_dt`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlRegionNodeTable from sql_region_node_table.proto.protoc';

-- ds_config.region_server_list
CREATE TABLE IF NOT EXISTS `ds_config`.`region_server_list` (
  `region_index` INT NOT NULL DEFAULT 0,
  `address` VARCHAR(50) NOT NULL DEFAULT '',
  `server_state` INT NOT NULL DEFAULT 0,
  `server_refresh_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `service_bus_string` VARCHAR(512) NOT NULL DEFAULT '',
  PRIMARY KEY (`region_index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlRegionServerListTable from sql_region_server_list_table.proto.protoc';

-- ds_guild.g_guild
-- message option insert_proc=0 ignored
CREATE TABLE IF NOT EXISTS `ds_guild`.`g_guild` (
  `guild_uid` BIGINT NOT NULL,
  `guild_name` VARCHAR(24) NOT NULL,
  `master_player_uid` BIGINT NOT NULL,
  `master_nickname` VARCHAR(50) NOT NULL,
  `mark_info` VARCHAR(100) NOT NULL,
  `member_count` INT NOT NULL DEFAULT 1,
  `gold` INT NOT NULL DEFAULT 0,
  `exp` BIGINT NOT NULL DEFAULT 0,
  `level` INT NOT NULL DEFAULT 1,
  `disband_yn` TINYINT NOT NULL DEFAULT 0,
  `disband_time` DATETIME NOT NULL,
  `kick_auto_type` TINYINT NOT NULL DEFAULT 0,
  `recruit_type` TINYINT NOT NULL,
  `recruit_level` INT NOT NULL DEFAULT 1,
  `recruit_message` VARCHAR(200) NOT NULL,
  `notice` VARCHAR(200) NOT NULL DEFAULT '',
  `reg_time` DATETIME NOT NULL,
  `update_time` DATETIME NOT NULL,
  PRIMARY KEY (`guild_uid`, `guild_name`),
  UNIQUE KEY `NIX__TB_G_GUILD__guild_name` (`guild_name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlGuildTable from sql_guild.proto.protoc';

-- ds_guild.g_guild_join_request
-- index_includes on join_type ignored: ['NIX__TB_G_GUILD_JOIN_REQUEST__player_uid']
-- index_includes on expired_time ignored: ['NIX__TB_G_GUILD_JOIN_REQUEST__player_uid']
-- message option update_proc=0 ignored
-- message option upsert_proc=0 ignored
-- message option delete_proc=0 ignored
CREATE TABLE IF NOT EXISTS `ds_guild`.`g_guild_join_request` (
  `player_uid` BIGINT NOT NULL,
  `guild_uid` BIGINT NOT NULL,
  `join_type` TINYINT NOT NULL,
  `expired_time` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `reg_time` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `update_time` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`guild_uid`, `player_uid`, `join_type`),
  KEY `NIX__TB_G_GUILD_JOIN_REQUEST__player_uid` (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlGuildJoinRequestTable from sql_guild_join_request.proto.protoc';

-- ds_guild.g_guild_member
CREATE TABLE IF NOT EXISTS `ds_guild`.`g_guild_member` (
  `guild_uid` BIGINT NOT NULL,
  `player_uid` BIGINT NOT NULL,
  `grade` INT NOT NULL DEFAULT 0 COMMENT 'enum GuildMemberGradeType',
  `reg_time` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `update_time` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`guild_uid`, `player_uid`),
  KEY `NIX__TB_G_GUILD_MEMBER__user_no` (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlGuildMemberTable from sql_guild_member.proto.protoc';

-- ds_mail.mail
CREATE TABLE IF NOT EXISTS `ds_mail`.`mail` (
  `receiver_player_uid` BIGINT NOT NULL,
  `mail_uid` BINARY(16) NOT NULL DEFAULT '' COMMENT 'UniqueId (UUID)',
  `sender_player_uid` BIGINT NOT NULL DEFAULT 0,
  `mail_sender_name` VARCHAR(24) NOT NULL DEFAULT '',
  `mail_title` VARCHAR(24) NOT NULL DEFAULT '',
  `mail_content` VARCHAR(255) NOT NULL DEFAULT '',
  `send_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `remove_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `mail_type` INT NOT NULL DEFAULT 0,
  `mail_category_type` INT NOT NULL DEFAULT 0,
  `reward_values` VARCHAR(7168) NOT NULL DEFAULT '',
  `is_read` TINYINT(1) NOT NULL DEFAULT 0,
  `is_reward` TINYINT(1) NOT NULL DEFAULT 0,
  PRIMARY KEY (`receiver_player_uid`, `mail_uid`),
  KEY `idx_send_time` (`send_dt`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlMailTable from sql_mail.proto.protoc';

-- MySQL 5.7-compatible UUID generation for mail rows.
DROP TRIGGER IF EXISTS `ds_mail`.`mail_bi_uuid`;
CREATE TRIGGER `ds_mail`.`mail_bi_uuid`
BEFORE INSERT ON `ds_mail`.`mail`
FOR EACH ROW
SET NEW.`mail_uid` = IF(
  NEW.`mail_uid` IS NULL OR NEW.`mail_uid` = 0x00000000000000000000000000000000,
  UNHEX(REPLACE(UUID(), '-', '')),
  NEW.`mail_uid`
);


-- ds_rank.rank_state
CREATE TABLE IF NOT EXISTS `ds_rank`.`rank_state` (
  `world_id` BIGINT NOT NULL,
  `state` INT NOT NULL,
  PRIMARY KEY (`world_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlRankStateTable from sql_rank_state.proto.protoc';

-- ds_rank.raw_rank
CREATE TABLE IF NOT EXISTS `ds_rank`.`raw_rank` (
  `world_id` BIGINT NOT NULL,
  `rank_type` INT NOT NULL,
  `player_uid` INT NOT NULL,
  `unique_param` BIGINT NOT NULL,
  `score` BIGINT NOT NULL,
  `score_priority1` BIGINT NOT NULL,
  `score_priority2` BIGINT NOT NULL,
  PRIMARY KEY (`world_id`, `rank_type`, `player_uid`, `unique_param`, `score_priority2`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlRawRankTable from sql_raw_rank_table.proto.protoc';

-- ds_rank.summary_rank
CREATE TABLE IF NOT EXISTS `ds_rank`.`summary_rank` (
  `world_id` BIGINT NOT NULL,
  `rank_type` INT NOT NULL,
  `player_uid` INT NOT NULL,
  `reward_rank` BIGINT NOT NULL DEFAULT 0,
  `unique_param` BIGINT NOT NULL,
  `current_score` BIGINT NOT NULL DEFAULT 0,
  `is_reward` TINYINT(1) NOT NULL DEFAULT 0,
  PRIMARY KEY (`world_id`, `rank_type`, `player_uid`, `reward_rank`, `unique_param`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlSummaryRankTable from sql_summary_rank_table.proto.protoc';

-- ds_world.breach_history
CREATE TABLE IF NOT EXISTS `ds_world`.`breach_history` (
  `zone_id` INT NOT NULL,
  `breach_id` INT NOT NULL,
  `success_count` INT NOT NULL DEFAULT 0,
  `first_clear_player` VARCHAR(12) NOT NULL DEFAULT '',
  `last_update_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`zone_id`, `breach_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlBreachHistoryTable from sql_breach_history.proto.protoc';

-- ds_world.district_weather
-- today_weather expanded to today_weather_1..today_weather_24 (assumed layout)
-- tomorrow_weather expanded to tomorrow_weather_1..tomorrow_weather_24 (assumed layout)
CREATE TABLE IF NOT EXISTS `ds_world`.`district_weather` (
  `district_id` INT NOT NULL,
  `today_weather_probability` INT NOT NULL DEFAULT 0,
  `today_weather_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_4` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_5` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_6` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_7` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_8` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_9` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_10` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_11` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_12` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_13` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_14` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_15` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_16` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_17` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_18` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_19` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_20` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_21` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_22` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_23` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_24` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_probability` INT NOT NULL DEFAULT 0,
  `tomorrow_weather_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_4` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_5` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_6` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_7` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_8` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_9` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_10` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_11` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_12` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_13` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_14` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_15` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_16` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_17` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_18` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_19` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_20` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_21` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_22` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_23` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_24` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  PRIMARY KEY (`district_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlDistrictWeatherTable from sql_district_weather_table.proto.protoc';

-- ds_world.world_boss
CREATE TABLE IF NOT EXISTS `ds_world`.`world_boss` (
  `table_id` INT NOT NULL,
  `until_life_time` BIGINT NOT NULL DEFAULT 0,
  `last_update_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`table_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlWorldBossTable from sql_world_boss_table.proto.protoc';

-- ds_world.zone_weather
-- today_weather expanded to today_weather_1..today_weather_24 (assumed layout)
-- tomorrow_weather expanded to tomorrow_weather_1..tomorrow_weather_24 (assumed layout)
CREATE TABLE IF NOT EXISTS `ds_world`.`zone_weather` (
  `zone_id` INT NOT NULL,
  `today_weather_probability` INT NOT NULL DEFAULT 0,
  `today_weather_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_4` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_5` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_6` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_7` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_8` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_9` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_10` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_11` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_12` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_13` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_14` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_15` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_16` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_17` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_18` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_19` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_20` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_21` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_22` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_23` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `today_weather_24` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_probability` INT NOT NULL DEFAULT 0,
  `tomorrow_weather_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_4` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_5` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_6` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_7` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_8` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_9` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_10` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_11` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_12` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_13` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_14` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_15` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_16` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_17` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_18` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_19` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_20` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_21` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_22` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_23` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  `tomorrow_weather_24` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 24',
  PRIMARY KEY (`zone_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlZoneWeatherTable from sql_zone_weather_table.proto.protoc';

-- ============================================================================
-- Part 2: ds_game (achievement_group .. instance_quest)
-- ============================================================================

-- Part 2: ds_game tables (sorted positions 0-18): achievement_group, action_function, action_point, breach_record, breach_record_history, buff, character_level, character_skin, combat_power, cool_time, daily_quest, daily_quest_pool, dungeon_record, equipment, equipment_character, equipment_player, g_player, halo_point, instance_quest
-- Generated from tables.json; MySQL 8.0 InnoDB.

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`achievement_group` (
  `player_uid` BIGINT NOT NULL,
  `group_id` INT NOT NULL,
  `step` INT NOT NULL DEFAULT 0,
  `state` INT NOT NULL DEFAULT 0,
  `total_count` BIGINT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `group_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlAchievementGroupTable from Protos/Global/ds_game/sql_achievement_group_table.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`action_function` (
  `player_uid` BIGINT NOT NULL,
  `action_base_id` INT NOT NULL DEFAULT 0 COMMENT 'enum ActionFunctionType',
  PRIMARY KEY (`player_uid`, `action_base_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlActionFunctionTable from Protos/Global/ds_game/sql_action_function_table.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`action_point` (
  `player_uid` BIGINT NOT NULL,
  `ticket_type` INT NOT NULL DEFAULT 0,
  `value` INT NOT NULL DEFAULT 0,
  `charge_count` INT NOT NULL DEFAULT 0,
  `update_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`, `ticket_type`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPlayerActionPointTable from Protos/Global/ds_game/sql_player_action_point_table.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`breach_record` (
  `player_uid` BIGINT NOT NULL,
  `zone_id` INT NOT NULL,
  `breach_id` INT NOT NULL,
  `reward_count` INT NOT NULL DEFAULT 0,
  `last_update_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`, `zone_id`, `breach_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPlayerBreachRecordTable from Protos/Global/ds_game/sql_player_breach_record.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`breach_record_history` (
  `player_uid` BIGINT NOT NULL,
  `zone_id` INT NOT NULL,
  `history_values` VARCHAR(1024) NOT NULL,
  PRIMARY KEY (`player_uid`, `zone_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPlayerBreachRecordHistoryTable from Protos/Global/ds_game/sql_player_breach_record_history.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`buff` (
  `player_uid` BIGINT NOT NULL,
  `buff_id` INT NOT NULL,
  `buff_states` VARCHAR(256) NOT NULL,
  `created_at` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`, `buff_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlCharacterBuffTable from Protos/Global/ds_game/sql_character_buff_table.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`character_level` (
  `player_uid` BIGINT NOT NULL,
  `char_level` INT NOT NULL DEFAULT 1,
  `exp` BIGINT NOT NULL DEFAULT 0,
  `ascend` INT NOT NULL DEFAULT 0,
  `evolve` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlCharacterLevelTable from Protos/Global/ds_game/sql_character_level.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`character_skin` (
  `player_uid` BIGINT NOT NULL,
  `skin_id` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlCharacterSkinTable from Protos/Global/ds_game/sql_character_skin_table.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`combat_power` (
  `player_uid` BIGINT NOT NULL,
  `combat_power` FLOAT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlCombatPowerTable from Protos/Global/ds_game/sql_combat_power_table.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`cool_time` (
  `player_uid` BIGINT NOT NULL,
  `is_group` TINYINT(1) NOT NULL DEFAULT 0,
  `cool_time_id` INT NOT NULL DEFAULT 0,
  `expired_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`, `is_group`, `cool_time_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlCoolTimeTable from Protos/Global/ds_game/sql_cool_time_table.proto.protoc';

-- objective_count expanded x3 as objective_count_1.._3 (assumed layout)
-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`daily_quest` (
  `player_uid` BIGINT NOT NULL,
  `quest_id` INT NOT NULL,
  `quest_state` INT NOT NULL DEFAULT 0 COMMENT 'enum QuestStateType',
  `objective_count_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `create_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `auto_tracking` TINYINT(1) NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `quest_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlDailyQuestTable from Protos/Global/ds_game/sql_daily_quest.proto.protoc';

-- quest_id expanded x10 as quest_id_1.._10 (assumed layout)
-- is_complete expanded x10 as is_complete_1.._10 (assumed layout)
-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`daily_quest_pool` (
  `player_uid` BIGINT NOT NULL,
  `pool_index` INT NOT NULL DEFAULT 0,
  `suggest_id` INT NOT NULL DEFAULT 0,
  `quest_id_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `quest_id_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `quest_id_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `quest_id_4` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `quest_id_5` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `quest_id_6` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `quest_id_7` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `quest_id_8` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `quest_id_9` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `quest_id_10` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `is_complete_1` TINYINT(1) NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `is_complete_2` TINYINT(1) NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `is_complete_3` TINYINT(1) NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `is_complete_4` TINYINT(1) NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `is_complete_5` TINYINT(1) NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `is_complete_6` TINYINT(1) NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `is_complete_7` TINYINT(1) NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `is_complete_8` TINYINT(1) NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `is_complete_9` TINYINT(1) NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  `is_complete_10` TINYINT(1) NOT NULL DEFAULT 0 COMMENT 'repeated x 10',
  PRIMARY KEY (`player_uid`, `pool_index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlDailyQuestPoolTable from Protos/Global/ds_game/sql_daily_quest_pool_table.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`dungeon_record` (
  `player_uid` BIGINT NOT NULL,
  `dungeon_id` INT NOT NULL,
  `enter_count` INT NOT NULL DEFAULT 0,
  `reward_count` INT NOT NULL DEFAULT 0,
  `first_clear_reward` TINYINT(1) NOT NULL DEFAULT 0,
  `enter_update_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `reward_update_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`, `dungeon_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPlayerDungeonRecordTable from Protos/Global/ds_game/sql_player_dungeon_record.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`equipment` (
  `player_uid` BIGINT NOT NULL,
  `char_id` INT NOT NULL DEFAULT 111,
  `slot_type` INT NOT NULL DEFAULT 0,
  `slot_index` INT NOT NULL DEFAULT 0,
  `item_uid` BIGINT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `char_id`, `slot_type`, `slot_index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlEquipmentTable from Protos/Global/ds_game/sql_equipment_table.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`equipment_character` (
  `player_uid` BIGINT NOT NULL,
  `char_id` INT NOT NULL DEFAULT 111,
  `slot_index` INT NOT NULL DEFAULT 0,
  `item_uid` BIGINT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `char_id`, `slot_index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlEquipmentCharacterTable from Protos/Global/ds_game/sql_equipment_character_table.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`equipment_player` (
  `player_uid` BIGINT NOT NULL,
  `slot_index` INT NOT NULL DEFAULT 0,
  `item_uid` BIGINT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `slot_index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlEquipmentPlayerTable from Protos/Global/ds_game/sql_equipment_player_table.proto.protoc';

-- proc options ignored: insert_proc=0, update_proc=0, upsert_proc=0
-- update_types: ignore=true, repeated=0 in the client model -> not stored in SQL (column omitted)
-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`g_player` (
  `player_uid` BIGINT NOT NULL,
  `custom_info` VARCHAR(1000) NOT NULL DEFAULT '',
  `login_time` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `logout_time` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `reg_time` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `update_time` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlGPlayerTable from Protos/Global/ds_game/sql_g_player.proto.protoc';

-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`halo_point` (
  `player_uid` BIGINT NOT NULL,
  `halo_point` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlHaloPointTable from Protos/Global/ds_game/sql_halo_point.proto.protoc';

-- objective_count expanded x3 as objective_count_1.._3 (assumed layout)
-- player_uid is a logical reference to the player; no foreign keys.
CREATE TABLE IF NOT EXISTS `ds_game`.`instance_quest` (
  `player_uid` BIGINT NOT NULL,
  `quest_id` INT NOT NULL,
  `quest_state` INT NOT NULL DEFAULT 0 COMMENT 'enum QuestStateType',
  `objective_count_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `limit_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `instance_quest_uid` BIGINT NOT NULL,
  PRIMARY KEY (`player_uid`, `quest_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlInstanceQuestTable from Protos/Global/ds_game/sql_instance_quest.proto.protoc';

-- ============================================================================
-- Part 3: ds_game (inven_extend_info .. position)
-- ============================================================================

-- Part 3: ds_game tables (sorted positions 19-37)
-- Tables: inven_extend_info, item_equipment, item_stackable, learned_skill, local_quest, main_quest, money, monthly_quest, mount_inven_info, mount_list, mount_lost, npc_relation, player, player_fusion_slot, player_grade, player_icon, player_icon_equip, player_skill, position

-- ds_game.inven_extend_info: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`inven_extend_info` (
  `player_uid` BIGINT NOT NULL,
  `extend_type` INT NOT NULL DEFAULT 0,
  `extend_slot_count` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `extend_type`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlInvenExtendInfoTable from sql_inven_extend_info_table.proto.protoc';

-- ds_game.item_equipment: player_uid is a logical reference to ds_game.player.player_uid (no FK).
-- item_gem_socket_tid expanded x3 (storage layout assumed)
-- gem_tid expanded x3 (storage layout assumed)
CREATE TABLE IF NOT EXISTS `ds_game`.`item_equipment` (
  `player_uid` BIGINT NOT NULL,
  `item_uid` BIGINT NOT NULL,
  `item_id` INT NOT NULL DEFAULT 0 COMMENT 'item ID in the JSON static data (Server/Data); client descriptor: DataTable string_item.ID',
  `inventory_type` INT NOT NULL DEFAULT 0 COMMENT 'enum InventoryType',
  `is_trade` TINYINT(1) NOT NULL DEFAULT 0,
  `ascend` INT NOT NULL DEFAULT 0,
  `level` INT NOT NULL DEFAULT 1,
  `exp` INT NOT NULL DEFAULT 0,
  `is_lock` TINYINT(1) NOT NULL DEFAULT 0,
  `prefix` INT NOT NULL DEFAULT 0,
  `passive_skill_id` INT NOT NULL DEFAULT 0,
  `item_gem_socket_tid_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `item_gem_socket_tid_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `item_gem_socket_tid_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `gem_tid_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `gem_tid_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `gem_tid_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `set_effect_tid` INT NOT NULL DEFAULT 0,
  `fusion` INT NOT NULL DEFAULT 0,
  `durability` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `item_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlItemEquipmentTable from sql_item_equipment_table.proto.protoc';

-- ds_game.item_stackable: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`item_stackable` (
  `player_uid` BIGINT NOT NULL,
  `item_id` INT NOT NULL DEFAULT 0 COMMENT 'item ID in the JSON static data (Server/Data); client descriptor: DataTable string_item.ID',
  `quantity` INT NOT NULL DEFAULT 0,
  `quantity_trade` INT NOT NULL DEFAULT 0,
  `ware_house_quantity` INT NOT NULL DEFAULT 0,
  `ware_house_quantity_trade` INT NOT NULL DEFAULT 0,
  `mount_quantity` INT NOT NULL DEFAULT 0,
  `mount_quantity_trade` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `item_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlItemStackableTable from sql_item_stackable_table.proto.protoc';

-- ds_game.learned_skill: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`learned_skill` (
  `player_uid` BIGINT NOT NULL,
  `skill_id` INT NOT NULL,
  PRIMARY KEY (`player_uid`, `skill_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlLearnedSkillTable from sql_learned_skill_table.proto.protoc';

-- ds_game.local_quest: player_uid is a logical reference to ds_game.player.player_uid (no FK).
-- objective_count expanded x3 (storage layout assumed)
CREATE TABLE IF NOT EXISTS `ds_game`.`local_quest` (
  `player_uid` BIGINT NOT NULL,
  `quest_id` INT NOT NULL,
  `quest_state` INT NOT NULL DEFAULT 0 COMMENT 'enum QuestStateType',
  `objective_count_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `create_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `auto_tracking` TINYINT(1) NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `quest_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlLocalQuestTable from sql_local_quest_table.proto.protoc';

-- ds_game.main_quest: player_uid is a logical reference to ds_game.player.player_uid (no FK).
-- objective_count expanded x3 (storage layout assumed)
CREATE TABLE IF NOT EXISTS `ds_game`.`main_quest` (
  `player_uid` BIGINT NOT NULL,
  `quest_id` INT NOT NULL,
  `quest_state` INT NOT NULL DEFAULT 0 COMMENT 'enum QuestStateType',
  `objective_count_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `create_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlMainQuestTable from sql_main_quest_table.proto.protoc';

-- ds_game.money: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`money` (
  `player_uid` BIGINT NOT NULL,
  `money_id` INT NOT NULL DEFAULT 0 COMMENT 'enum MoneyType',
  `quantity` BIGINT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `money_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlMoneyTable from sql_money_table.proto.protoc';

-- ds_game.monthly_quest: player_uid is a logical reference to ds_game.player.player_uid (no FK).
-- objective_count expanded x3 (storage layout assumed)
CREATE TABLE IF NOT EXISTS `ds_game`.`monthly_quest` (
  `player_uid` BIGINT NOT NULL,
  `quest_id` INT NOT NULL,
  `quest_state` INT NOT NULL DEFAULT 0 COMMENT 'enum QuestStateType',
  `objective_count_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `create_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`, `quest_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlMonthlyQuestTable from sql_monthly_quest.proto.protoc';

-- ds_game.mount_inven_info: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`mount_inven_info` (
  `player_uid` BIGINT NOT NULL,
  `extended_slot_count` INT NOT NULL DEFAULT 0,
  `selected_mount_uid` BIGINT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlMountInvenInfoTable from sql_mount_inven_info.proto.protoc';

-- ds_game.mount_list: player_uid is a logical reference to ds_game.player.player_uid (no FK).
-- equip_item_ids expanded x3 (storage layout assumed)
CREATE TABLE IF NOT EXISTS `ds_game`.`mount_list` (
  `player_uid` BIGINT NOT NULL,
  `mount_uid` BIGINT NOT NULL,
  `mount_id` INT NOT NULL,
  `mount_nickname` VARCHAR(12) NOT NULL DEFAULT '',
  `hunger` INT NOT NULL DEFAULT 0,
  `fatigue` INT NOT NULL DEFAULT 0,
  `equip_item_ids_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `equip_item_ids_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `equip_item_ids_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  PRIMARY KEY (`player_uid`, `mount_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlMountListTable from sql_mount_list.proto.protoc';

-- ds_game.mount_lost: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`mount_lost` (
  `player_uid` BIGINT NOT NULL,
  `lost_items` VARCHAR(4096) NOT NULL,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlMountLostTable from sql_mount_lost_table.proto.protoc';

-- ds_game.npc_relation: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`npc_relation` (
  `player_uid` BIGINT NOT NULL,
  `npc_id` INT NOT NULL,
  `grade` INT NOT NULL,
  `point` INT NOT NULL,
  PRIMARY KEY (`player_uid`, `npc_id`),
  KEY `idx_npc_relation_grade` (`grade`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlNpcRelationTable from sql_npc_relation_table.proto.protoc';

-- ds_game.player (distinct from ds_account.player)
-- column update_types (enum ds_game.SqlPlayerUpdateType, ignore=true, repeated=0) expands to zero columns; not stored (storage layout assumed)
CREATE TABLE IF NOT EXISTS `ds_game`.`player` (
  `player_uid` BIGINT NOT NULL,
  `nickname` VARCHAR(12) NOT NULL DEFAULT '',
  `create_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`),
  KEY `character_ix_nickname` (`nickname`),
  KEY `character_ix_create_dt` (`create_dt`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPlayerTable from sql_player.proto.protoc';

-- ds_game.player_fusion_slot: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`player_fusion_slot` (
  `player_uid` BIGINT NOT NULL,
  `fusion_slot_count` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPlayerFusionSlotTable from sql_player_fusion_slot.proto.protoc';

-- ds_game.player_grade: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`player_grade` (
  `player_uid` BIGINT NOT NULL,
  `player_grade` INT NOT NULL DEFAULT 1,
  `player_grade_cap` INT NOT NULL DEFAULT 0,
  `exp` BIGINT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPlayerGradeTable from sql_player_grade.proto.protoc';

-- ds_game.player_icon: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`player_icon` (
  `player_uid` BIGINT NOT NULL,
  `player_icon_id` INT NOT NULL,
  PRIMARY KEY (`player_uid`, `player_icon_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPlayerIconTable from sql_player_icon_table.proto.protoc';

-- ds_game.player_icon_equip: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`player_icon_equip` (
  `player_uid` BIGINT NOT NULL,
  `player_icon_id` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPlayerIconEquipTable from sql_player_icon_equip_table.proto.protoc';

-- ds_game.player_skill: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`player_skill` (
  `player_uid` BIGINT NOT NULL,
  `skill_type` INT NOT NULL DEFAULT 0 COMMENT 'enum PlayerSkillType',
  `level` INT NOT NULL DEFAULT 1,
  `acc_halo_point` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `skill_type`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPlayerSkillTable from sql_player_skill_table.proto.protoc';

-- ds_game.position: player_uid is a logical reference to ds_game.player.player_uid (no FK).
CREATE TABLE IF NOT EXISTS `ds_game`.`position` (
  `player_uid` BIGINT NOT NULL,
  `island_id` INT NOT NULL DEFAULT 1,
  `position` JSON NOT NULL COMMENT 'protobuf message Vector',
  `direction` FLOAT NOT NULL DEFAULT 0.0,
  `transport_spawn_id` INT NULL DEFAULT 0,
  `relative_position` JSON NULL COMMENT 'protobuf message Vector',
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPositionTable from sql_position.proto.protoc';

-- ============================================================================
-- Part 4: ds_game (pvp .. weekly_quest)
-- ============================================================================

-- Part 4: ds_game (c) - sorted positions 38-55 of ds_game tables
-- Tables: pvp, quest_complete, quest_misc, quest_tracking, quick_slot, repeat_quest, repeat_quest_complete, resurrect, return_home, ring_command, shop_buy_limit, skill, status, time_schedule, wait_complete, warp_device, weapon_skill_slot, weekly_quest

CREATE TABLE IF NOT EXISTS `ds_game`.`pvp` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `pk_mode` INT NOT NULL DEFAULT 1,
  `criminal_point` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlPvpTable from Protos/Global/ds_game/sql_pvp_table.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`quest_complete` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `quest_id` INT NOT NULL,
  PRIMARY KEY (`player_uid`, `quest_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlQuestCompleteTable from Protos/Global/ds_game/sql_quest_complete_table.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`quest_misc` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `daily_quest_complete_count` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlQuestMiscTable from Protos/Global/ds_game/sql_quest_misc.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`quest_tracking` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `quest_id` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlQuestTrackingTable from Protos/Global/ds_game/sql_quest_tracking.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`quick_slot` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `deck_index` INT NOT NULL DEFAULT 0,
  `slot_index` INT NOT NULL DEFAULT 0,
  `template_type` INT NOT NULL DEFAULT 0,
  `template_id` INT NOT NULL DEFAULT 0,
  `auto_use` TINYINT(1) NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `deck_index`, `slot_index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlQuickSlotTable from Protos/Global/ds_game/sql_quick_slot_table.proto.protoc';

-- objective_count expanded to objective_count_1..objective_count_3 (storage layout is an assumption)
CREATE TABLE IF NOT EXISTS `ds_game`.`repeat_quest` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `quest_id` INT NOT NULL,
  `quest_state` INT NOT NULL DEFAULT 0 COMMENT 'enum QuestStateType',
  `objective_count_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `create_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `auto_tracking` TINYINT(1) NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `quest_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlRepeatQuestTable from Protos/Global/ds_game/sql_repeat_quest.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`repeat_quest_complete` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `quest_id` INT NOT NULL,
  `complete_count` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `quest_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlRepeatQuestCompleteTable from Protos/Global/ds_game/sql_repeat_quest_complete.proto.protoc';

-- acc_count expanded to acc_count_1..acc_count_4; reset_time expanded to reset_time_1..reset_time_4 (storage layout is an assumption)
CREATE TABLE IF NOT EXISTS `ds_game`.`resurrect` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `death_type` INT NOT NULL DEFAULT 0 COMMENT 'enum DeathType',
  `died_time` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `wait_resurrect` FLOAT NOT NULL DEFAULT 0.0,
  `wait_auto_resurrect` FLOAT NOT NULL DEFAULT 0.0,
  `acc_count_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 4',
  `acc_count_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 4',
  `acc_count_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 4',
  `acc_count_4` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 4',
  `reset_time_1` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6) COMMENT 'repeated x 4',
  `reset_time_2` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6) COMMENT 'repeated x 4',
  `reset_time_3` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6) COMMENT 'repeated x 4',
  `reset_time_4` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6) COMMENT 'repeated x 4',
  `attacker_uid` BIGINT NOT NULL DEFAULT 0,
  `attacker_name` VARCHAR(12) NOT NULL DEFAULT '',
  `dead_zone` INT NOT NULL DEFAULT 0 COMMENT 'enum DeadZoneType',
  `penalty_id` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlResurrectTable from Protos/Global/ds_game/sql_resurrect_table.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`return_home` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `return_home_id` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlReturnHomeTable from Protos/Global/ds_game/sql_return_home.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`ring_command` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `deck_index` INT NOT NULL,
  `slot_index` INT NOT NULL,
  `cmd_type` INT NOT NULL DEFAULT 0 COMMENT 'enum RingCmdType',
  `cmd_value` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `deck_index`, `slot_index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlRingCommandTable from Protos/Global/ds_game/sql_ring_command_table.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`shop_buy_limit` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `shop_list_id` INT NOT NULL,
  `next_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `quantity` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `shop_list_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlShopBuyLimitTable from Protos/Global/ds_game/sql_shop_buy_limit_table.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`skill` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `skill_id` INT NOT NULL,
  `level` INT NOT NULL DEFAULT 1,
  `slot_id` INT NOT NULL DEFAULT 0,
  `ascend_wait_complete_id` BIGINT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `skill_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlSkillTable from Protos/Global/ds_game/sql_skill_table.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`status` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `hp` INT NOT NULL DEFAULT 0,
  `mp` INT NOT NULL DEFAULT 0,
  `stamina` INT NOT NULL DEFAULT 0,
  `hunger` INT NOT NULL DEFAULT 0,
  `fatigue` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlCharacterStatusTable from Protos/Global/ds_game/sql_character_status_table.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`time_schedule` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `schedule_id` INT NOT NULL,
  `last_update_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`, `schedule_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlTimeScheduleTable from Protos/Global/ds_game/sql_time_schedule.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`wait_complete` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `wait_complete_uid` BIGINT NOT NULL,
  `wait_complete_type` INT NOT NULL DEFAULT 0 COMMENT 'enum WaitCompleteType',
  `param1` BIGINT NOT NULL DEFAULT 0,
  `param2` BIGINT NOT NULL DEFAULT 0,
  `param3` BIGINT NOT NULL DEFAULT 0,
  `begin_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `complete_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  `accel_seconds` INT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `wait_complete_uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlWaitCompleteTable from Protos/Global/ds_game/sql_wait_complete_table.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`warp_device` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `device_stuff_id` INT NOT NULL,
  PRIMARY KEY (`player_uid`, `device_stuff_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlWarpDeviceTable from Protos/Global/ds_game/sql_warp_device_table.proto.protoc';

CREATE TABLE IF NOT EXISTS `ds_game`.`weapon_skill_slot` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `weapon_base_id` BIGINT NOT NULL,
  `slot_index` INT NOT NULL,
  `selected_skill_id` INT NOT NULL DEFAULT 0,
  `skill_level` INT NOT NULL DEFAULT 1,
  `ascend_wait_complete_id` BIGINT NOT NULL DEFAULT 0,
  PRIMARY KEY (`player_uid`, `weapon_base_id`, `slot_index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlWeaponSkillSlotTable from Protos/Global/ds_game/sql_weapon_skill_slot_table.proto.protoc';

-- objective_count expanded to objective_count_1..objective_count_3 (storage layout is an assumption)
CREATE TABLE IF NOT EXISTS `ds_game`.`weekly_quest` (
  `player_uid` BIGINT NOT NULL COMMENT 'logical ref ds_account.player / ds_game.player player_uid',
  `quest_id` INT NOT NULL,
  `quest_state` INT NOT NULL DEFAULT 0 COMMENT 'enum QuestStateType',
  `objective_count_1` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_2` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `objective_count_3` INT NOT NULL DEFAULT 0 COMMENT 'repeated x 3',
  `create_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`, `quest_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='SqlWeeklyQuestTable from Protos/Global/ds_game/sql_weekly_quest.proto.protoc';

SET FOREIGN_KEY_CHECKS = 1;

-- ---- 2026-10-22: ds_game.character (see migrations/20261022_ds_game_character.sql) ----
-- ds_game.character: the player's main character created via client_msg.CreateCharacterRequest
-- (class/weapon + CharacterCustomInfo appearance). One row per player_uid, like every other ds_game table.
-- `character` is a reserved word in MySQL: always quote it. Only touches ds_game (never mm_* schemas).
CREATE TABLE IF NOT EXISTS `ds_game`.`character` (
  `player_uid` BIGINT NOT NULL,
  `nickname` VARCHAR(12) NOT NULL DEFAULT '',
  `weapon` INT NOT NULL DEFAULT 0 COMMENT 'CreateCharacterRequest.weapon (EDS_WeaponType)',
  `gender` INT NOT NULL DEFAULT 0 COMMENT 'CharacterCustomInfo.gender (EDS_GenderType)',
  `voice_type` INT NOT NULL DEFAULT 0,
  `skin_color` INT NOT NULL DEFAULT 0,
  `pitch` FLOAT NOT NULL DEFAULT 0,
  `head_type` VARCHAR(64) NOT NULL DEFAULT '',
  `head_color` INT NOT NULL DEFAULT 0,
  `face_type` INT NOT NULL DEFAULT 0,
  `hair_type` VARCHAR(64) NOT NULL DEFAULT '',
  `body_type` VARCHAR(64) NOT NULL DEFAULT '',
  `body_size` INT NOT NULL DEFAULT 0,
  `body_head_size` INT NOT NULL DEFAULT 0,
  `body_hand_size` INT NOT NULL DEFAULT 0,
  `body_foot_size` INT NOT NULL DEFAULT 0,
  `create_dt` DATETIME(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`player_uid`),
  UNIQUE KEY `character_ix_nickname` (`nickname`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci COMMENT='Not generated from a Sql*Table proto: added for the C# server (client_msg.CreateCharacterRequest / CharacterCustomInfo).';
