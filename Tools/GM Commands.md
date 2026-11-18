# Mir 5 Game Master Commands

All commands the client's cheat panel knows (`Server/Bin/Data/Common/CheatKeyBase.json`, 96 entries) plus the extra commands our server adds.
Status is for **our server** (`Server/M5.Server/Network/Mir5/Mir5Gm.cs`).

## How to use them

- Open the chat box and type the command. A leading `/` and the `ds.chat` / `DS.Chat` prefix are optional: `/item 340000000 5`, `item 340000000 5` and `ds.chat item 340000000 5` all work.
- The account needs **GM rights**: `ds_account.player.authority` = 21 (Gm) or higher (22 hides the HUD, so use 21).
- Anything that is not a GM command is sent as normal chat. A known GM command that is not built yet answers *"GM command 'x' is not implemented on this server yet."*
- Parameters: `<x>` required, `[x]` optional. Commands are not case sensitive.

**Status legend**

| Status | Meaning |
|---|---|
| **Working** | Implemented on our server. |
| **Not Implemented Yet** | An official command that the server answers with "not implemented yet". |
| **Client-side** | A `DS.*` console command the client runs itself (it is not sent to the server). It does not depend on our server, but we have not tested them one by one. |

Ids used below: money types `1` Copper, `11` Gold, `12` Non-tradable Gold, `51` Mileage. Look item ids up in the DarkSteel Studio *Game Data* tab or `Server/Bin/Data/Common/ItemBase.json`.

---

## Character

| Command | Parameters | Example | Status |
|---|---|---|---|
| `help` (also `commands`) | none | `help` | **Working** (extra, lists the working commands) |
| `getpos` | none. Prints island, X, Y, Z and direction | `getpos` | **Working** (extra) |
| `charlevel` | `<level>` set the character level (exp reset to 0) | `charlevel 50` | **Working** |
| `charexp` | `<exp>` set the current exp amount | `charexp 100000` | **Working** |
| `playergrade` | `<level>` set the player (account) grade | `playergrade 5` | **Working** |
| `playerexp` | `<exp>` add player grade exp | `playerexp 5000` | Not Implemented Yet |
| `immortal` | none. You take no damage | `immortal` | **Working** (monsters cannot hurt you yet, so no visible effect) |
| `mortal` | none. Turns immortal off | `mortal` | **Working** |
| `suicide` | none. Kill your character | `suicide` | Not Implemented Yet |
| `resurrect` | `<0 revive in zone \| 1 revive in place>` | `resurrect 1` | Not Implemented Yet |
| `stat` | `<StatusType> <rate>` change a stat | `stat 1 150` | Not Implemented Yet |
| `buff` | `<Buff ID>` apply a buff | `buff 1510` | Not Implemented Yet |
| `getchar` | `[CharacterBase ID]` unlock a character | `getchar 1` | Not Implemented Yet |
| `PlayerSkillLearn` | `<skill 1-12> <level>` set an ascender skill level (1 Harvesting, 2 Mining, 3 Logging, 4 Open Locks, 5 Cooking, 6 Linguistics, 7 Archaeology, 8 Farming, 9 Ground mount, 10 Air mount, 11 Water mount, 12 Detection). Learn skills normally in the Ascender window, which works | `ds.chat PlayerSkillLearn 1 5` | Not Implemented Yet |
| `getActionSkillAll` | none. Learn all action skills | `getActionSkillAll` | Not Implemented Yet |
| `getActionSkill` | `<Action ID>` learn one action skill | `getActionSkill 3` | Not Implemented Yet |
| `CharItemDurability` | `<character 1-6> <slot 1-8> <durability>` | `CharItemDurability 1 1 100` | Not Implemented Yet |
| `PlayerItemDurability` | `<tool 1-8> <durability>` skill-tool durability | `PlayerItemDurability 1 50` | Not Implemented Yet |

## Character deck

| Command | Parameters | Example | Status |
|---|---|---|---|
| `decklist` | none | `decklist` | Not Implemented Yet |
| `DeckCharacterSignUp` | `<deck 1-5> <CharacterBase ID> <CharacterBase ID> <CharacterBase ID>` | `DeckCharacterSignUp 1 1 2 3` | Not Implemented Yet |
| `deckselect` | `<deck 1-5>` | `deckselect 2` | Not Implemented Yet |
| `DeckIconChange` | `<deck 1-5> [SlotDeckIcon ID]` | `DeckIconChange 1 2` | Not Implemented Yet |
| `DeckNameChange` | `<deck 1-5> <name>` | `DeckNameChange 1 Raid` | Not Implemented Yet |
| `DeckInitialize` | `<deck 1-5>` clear a deck | `DeckInitialize 1` | Not Implemented Yet |

## Teleport and world

| Command | Parameters | Example | Status |
|---|---|---|---|
| `warplocation` | `<WarpLocation ID>` teleport to a warp location (`Common/WarpLocation`). The official panel buttons use ids 2-17 (below) | `warplocation 2` | **Working** |
| `warplocation 2` ... `17` | Panel presets: 2 village square, 3 harbour, 4 inn, 5 hall, 6 battle breach (Imara), 7 gathering breach, 8-17 the demo quest start points | `warplocation 9` | **Working** |
| `jumpisland1` | none. Warp to the main island | `jumpisland1` | **Working** (island changes are lightly tested) |
| `jumpisland2` | none. Warp to the test island | `jumpisland2` | **Working** |
| `jumpisland` | `<island id>` (extra) first warp location of that island | `jumpisland 2` | **Working** (extra) |
| `gotopos` | Official: `<ZoneBase ID> <vector>`. **Ours:** `<x> <y> [z]` on your current island | `gotopos 12000 8000` | **Working** (our syntax) |
| `gotonpc` | `<NpcBase ID>` teleport to an NPC | `gotonpc 110000001` | Not Implemented Yet |
| `jump_to_player` | `<player name>` teleport to a player | `jump_to_player Jev` | Not Implemented Yet |
| `deviceactivateall` | none. Activate every warp device (they then show as available on the world map) | `deviceactivateall` | **Working** (new, untested in game) |
| `DS.SetSkyTime` | `<0-2400>` set the time of day | `DS.SetSkyTime 1200` | Client-side |
| `DS.ViewGameTime` | none. Show game time | `DS.ViewGameTime` | Client-side |
| `DS.ForceTransportWarpFail` | `[0 off \| 1 on]` force warps to fail | `DS.ForceTransportWarpFail 1` | Client-side |
| `resetschedule` | `<TimeScheduler ID>` | `resetschedule 1` | Not Implemented Yet |
| `scriptclear` / `scriptquit` | none. Finish or leave the running script (`DS.Chat`) | `scriptclear` | Not Implemented Yet |

## Items, money and inventory

| Command | Parameters | Example | Status |
|---|---|---|---|
| `item` | `<ItemBase ID> [quantity] [tradeable quantity]` add to the bag (equipment up to 20 at once). Aliases: `additem`, `getitem` | `item 250000002 5` | **Working** |
| `moneymake` | `[type] <amount>` add money. Without a type it adds Gold (11). Types: 1 Copper, 11 Gold, 12 Non-tradable Gold, 51 Mileage. Negative amounts subtract | `moneymake 1 50000` | **Working** |
| `moneymake 11` (panel "Make gold") | `<amount>` | `moneymake 11 1000` | **Working** |
| `money_set` | `[type] <amount>` set the exact amount | `money_set 1 0` | **Working** |
| `inventory_clear` | `<0 all \| 1 player \| 3 warehouse \| 6 mount>` | `inventory_clear 1` | Not Implemented Yet |
| `DS.inventory` | none. Show inventory | `DS.inventory` | Client-side |
| `DS.DestroyItem` | `<slot number> <count>` | `DS.DestroyItem 1 1` | Client-side |
| `item_enhance` | `<Item UID>` enhance +1 | `DS.item_enhance 123` | Not Implemented Yet |
| `item_enhance_level` | `<Item UID> <level>` | `DS.item_enhance_level 123 5` | Not Implemented Yet |
| `DS.DropItemShow` | `[Item UID] [quantity] [on/off]` show the pick-up effect (no parameters = random) | `DS.DropItemShow` | Client-side |
| `npcdrop` | `<NpcBase ID> <class 1-5>` roll the drop table of an NPC (1 Warrior, 2 Fighter, 3 Archer, 4 Taoist, 5 Mage) | `DS.npcdrop 210021003 1` | Not Implemented Yet |
| `ticketuse` | `<1 action points \| 2 dungeon ticket> <value>` | `ticketuse 1 10` | Not Implemented Yet |
| `ticketchargecountreset` | `<1 action points \| 2 dungeon ticket>` | `ticketchargecountreset 1` | Not Implemented Yet |
| `stuffmake` | `<stuff ID>` | `stuffmake 1` | Not Implemented Yet |

## Crafting

| Command | Parameters | Example | Status |
|---|---|---|---|
| `DS.itemcraft` | `<ItemCraftBase ID> <ItemCraftList ID>` | `DS.itemcraft 1 1` | Not Implemented Yet (craft in the game window, which works) |
| `DS.itemcraftlist` | none. Show the craft queue | `DS.itemcraftlist` | Not Implemented Yet |
| `DS.itemcraftcancel` | `<queue number>` | `DS.itemcraftcancel 1` | Not Implemented Yet |
| `DS.itemcrafttime` | `<queue number> <seconds>` | `DS.itemcrafttime 1 10` | Not Implemented Yet |
| `DS.itemcraftcomplete` | `<queue number>` | `DS.itemcraftcomplete 1` | Not Implemented Yet |

## Quests

| Command | Parameters | Example | Status |
|---|---|---|---|
| `Questaccept` | `<Quest ID>` accept a quest of any type | `Questaccept 100101` | **Working** |
| `Questcomplete` | `[Quest ID]` finish the quest (no id = the active main quest) | `Questcomplete 100101` | **Working** |
| `Questreset` | `<Quest ID>` remove the quest and its completed mark so it can be taken again | `Questreset 100101` | **Working** |
| `questset` | `<Quest ID>` (extra) make it the active main quest | `questset 100101` | **Working** (extra) |
| `questprogress` | `[n]` (extra) add progress to the tracked quest's objectives | `questprogress 5` | **Working** (extra) |
| `queststatus` | none (extra) list your active quests | `queststatus` | **Working** (extra) |
| `Questmission` | `<Quest ID> <count>` raise the objective count | `Questmission 100101 10` | Not Implemented Yet (use `questprogress`) |
| `QuestFast` | `<count>` | `QuestFast 5` | Not Implemented Yet (use `questprogress`) |
| `Questresetall` | `<Quest ID>` | `Questresetall 100101` | Not Implemented Yet |
| `mainquestcomplete` | none. Finish the main quest | `mainquestcomplete` | Not Implemented Yet (use `Questcomplete`) |
| `DS.UIMessage` | `<StringUi ID> <MessageTypeDefine>` show a UI message | `DS.UIMessage 1 1` | Client-side |

## Monsters and combat

| Command | Parameters | Example | Status |
|---|---|---|---|
| `npcmake` | `<NpcBase ID> [count 1-20]` spawn monsters in front of you (`Common/NpcBase`) | `npcmake 210021003 5` | **Working** |
| `Entity` | `<entity number>` show information about an entity | `Entity 12` | Not Implemented Yet |
| `DS.AutoBattle` | `<0 50m \| 1 100m \| 2 unlimited \| 3 off>` | `DS.AutoBattle 1` | Client-side |
| `DS.AutoCounterAttack` | none | `DS.AutoCounterAttack` | Client-side |
| `DS.AutoUseSkill` | none | `DS.AutoUseSkill` | Client-side |
| `DS.AutoBattleRangeType` | `<0 50m \| 1 100m \| 2 unlimited>` | `DS.AutoBattleRangeType 1` | Client-side |
| `DS.AutoBattleDebug` | none. Show the auto-battle range | `DS.AutoBattleDebug` | Client-side |
| `DS.ViewSyncDebug` / `UseSyncLog` | damage-sync debug view / network sync log (on/off) | `DS.ViewSyncDebug` | Client-side |

## Dungeons

| Command | Parameters | Example | Status |
|---|---|---|---|
| `dungeonresetenterlimitcount` | `<1 normal \| 2 hero \| 3 raid>` | `dungeonresetenterlimitcount 1` | Not Implemented Yet |
| `dungeonresetrewardlimitcount` | `<1 normal \| 2 hero \| 3 raid>` | `dungeonresetrewardlimitcount 1` | Not Implemented Yet |

## Party

| Command | Parameters | Example | Status |
|---|---|---|---|
| `ds.party search` | `<character name>` | `ds.party search Jev` | Not Implemented Yet |
| `ds.party create` | none | `ds.party create` | Not Implemented Yet |
| `partyinvite` | `<character name>` | `partyinvite Jev` | Not Implemented Yet |
| `ds.party leave` | none | `ds.party leave` | Not Implemented Yet |
| `ds.party dismiss` | none | `ds.party dismiss` | Not Implemented Yet |

## Mounts

| Command | Parameters | Example | Status |
|---|---|---|---|
| `mountadd` | `<MountBase ID>` give yourself a mount (the first one is selected as your companion automatically). Ids in `Common/MountBase`: 5, 6, 7, 77, 999, 10001, 10002 | `mountadd 77` | **Working** (new, untested in game) |
| `mountlost` | `<0 default time \| 1 custom> <seconds>` create the lost-mount list | `mountlost 0 0` | Not Implemented Yet |

## Misc

| Command | Parameters | Example | Status |
|---|---|---|---|
| `DS.ShowConstructionMode` | `<1 \| 2>` cube mode | `DS.ShowConstructionMode 1` | Client-side |

## Guilds

There are no official guild cheats. Guilds are used from the guild window (create, join, leave, disband, settings), which is implemented. See `Server/M5.Server/Network/Mir5/Mir5Guilds.cs`.

---

Keep this file up to date: when a command moves from *Not Implemented Yet* to *Working* in `Mir5Gm.cs`, change its row here.
