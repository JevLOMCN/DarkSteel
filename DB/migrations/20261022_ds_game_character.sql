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
