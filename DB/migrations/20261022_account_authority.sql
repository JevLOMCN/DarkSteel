-- ds_account.player.authority is the client's AccountAuthority enum (ErrorCode-style values from ProjectDS.exe):
--   0 None, 11 Normal, 21 Gm, 22 GmInvisible, 31 Official, 41 Premium, 51 Parametrix
-- The imported schema defaulted to 1, which is not a valid value. Normal accounts are 11; GM (21) unlocks the DS.Chat console
-- commands in the client (the Mir 4 equivalent was account_grade 2). Only touches ds_account.
ALTER TABLE `ds_account`.`player` ALTER COLUMN `authority` SET DEFAULT 11;
UPDATE `ds_account`.`player` SET `authority` = 11 WHERE `authority` = 1;

-- Developer accounts of this private server (add your own ids here).
UPDATE `ds_account`.`player` SET `authority` = 21 WHERE `id` IN ('dev', 'JevLOMCN');
