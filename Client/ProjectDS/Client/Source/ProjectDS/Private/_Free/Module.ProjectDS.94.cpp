// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 127

// DefaultObject'' @ 141272070

void __cdecl `dynamic_initializer_for_'FDS_DungeonTypeDataTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_DungeonTypeDataTableRow::DefaultObject.Version,L"");
  FDS_DungeonTypeDataTableRow::DefaultObject.RewardLimitCount = 0;
  FDS_DungeonTypeDataTableRow::DefaultObject.ID_RewardLimitResetTime = 0;
  FDS_DungeonTypeDataTableRow::DefaultObject.EnterLimitCount = 0;
  FDS_DungeonTypeDataTableRow::DefaultObject.ID_EnterLimitResetTime = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_DungeonTypeDataTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412720b0

void __cdecl `dynamic_initializer_for_'FDS_EnvClimateTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_EnvClimateTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412720d0

void __cdecl `dynamic_initializer_for_'FDS_EnvFlooringTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_EnvFlooringTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412720f0

void __cdecl `dynamic_initializer_for_'FDS_EnvWeatherFixedDataTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_EnvWeatherFixedDataTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272110

void __cdecl `dynamic_initializer_for_'FDS_EnvWeatherRandomDataTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_EnvWeatherRandomDataTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272130

void __cdecl `dynamic_initializer_for_'FDS_EnvWeatherTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_EnvWeatherTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272150

void __cdecl `dynamic_initializer_for_'FDS_FactionBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_FactionBaseTableRow::DefaultObject.Version,L"");
  FDS_FactionBaseTableRow::DefaultObject.Friendly.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_FactionBaseTableRow::DefaultObject.Friendly.ArrayNum = 0;
  FDS_FactionBaseTableRow::DefaultObject.Friendly.ArrayMax = 0;
  FDS_FactionBaseTableRow::DefaultObject.Enemy.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_FactionBaseTableRow::DefaultObject.Enemy.ArrayNum = 0;
  FDS_FactionBaseTableRow::DefaultObject.Enemy.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_FactionBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412721a0

void __cdecl `dynamic_initializer_for_'FDS_GachaBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_GachaBaseTableRow::DefaultObject.Version,L"");
  FDS_GachaBaseTableRow::DefaultObject.ID_BackGround = 0;
  FDS_GachaBaseTableRow::DefaultObject.MoneyType = None;
  FDS_GachaBaseTableRow::DefaultObject.MoneyValue = 0;
  FDS_GachaBaseTableRow::DefaultObject.ID_GachaGroup = 0;
  FDS_GachaBaseTableRow::DefaultObject.ID_Title = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_GachaBaseTableRow::DefaultObject.ID_Description = (FDS_StringBaseID)ZEXT816(0x1523de678);
  atexit(`dynamic_atexit_destructor_for_'FDS_GachaBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272220

void __cdecl `dynamic_initializer_for_'FDS_GachaGroupTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_GachaGroupTableRow::DefaultObject.Version,L"");
  FDS_GachaGroupTableRow::DefaultObject.GroupID = 0;
  FDS_GachaGroupTableRow::DefaultObject.GachaType = None;
  FDS_GachaGroupTableRow::DefaultObject.ID_GachaResultGroup = 0;
  FDS_GachaGroupTableRow::DefaultObject.GachaGroupRate = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_GachaGroupTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272270

void __cdecl `dynamic_initializer_for_'FDS_GachaResultCharacterTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_GachaResultCharacterTableRow::DefaultObject.Version,L"");
  FDS_GachaResultCharacterTableRow::DefaultObject.ResultGroupID = 0;
  FDS_GachaResultCharacterTableRow::DefaultObject.ID_ResultCharacter = 0;
  FDS_GachaResultCharacterTableRow::DefaultObject.ResultValue = 0;
  FDS_GachaResultCharacterTableRow::DefaultObject.ExchangeMoneyType = None;
  FDS_GachaResultCharacterTableRow::DefaultObject.ExchangeMoneyValue = 0;
  FDS_GachaResultCharacterTableRow::DefaultObject.GachaResultRate = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_GachaResultCharacterTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412722c0

void __cdecl `dynamic_initializer_for_'FDS_GachaResultItemTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_GachaResultItemTableRow::DefaultObject.Version,L"");
  FDS_GachaResultItemTableRow::DefaultObject.ResultGroupID = 0;
  FDS_GachaResultItemTableRow::DefaultObject.ID_ResultItem = 0;
  FDS_GachaResultItemTableRow::DefaultObject.ResultValue = 0;
  FDS_GachaResultItemTableRow::DefaultObject.GachaResultRate = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_GachaResultItemTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272300

void __cdecl `dynamic_initializer_for_'FDS_GameOptionBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_GameOptionBaseTableRow::DefaultObject.Version,L"");
  FDS_GameOptionBaseTableRow::DefaultObject.ID_ContentsTabFrame = None;
  FDS_GameOptionBaseTableRow::DefaultObject.Category = 0;
  FDS_GameOptionBaseTableRow::DefaultObject.ID_CategoryName = (FDS_StringBaseID)ZEXT816(0x1523de678)
  ;
  FDS_GameOptionBaseTableRow::DefaultObject.ID_OptionName = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_GameOptionBaseTableRow::DefaultObject.ComponentType = None;
  FDS_GameOptionBaseTableRow::DefaultObject.GameOptionDataType = None;
  ::FString::FString(&FDS_GameOptionBaseTableRow::DefaultObject.GameOptionData,L"");
  FDS_GameOptionBaseTableRow::DefaultObject.DefaultValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_GameOptionBaseTableRow::DefaultObject.DefaultValue.ArrayNum = 0;
  FDS_GameOptionBaseTableRow::DefaultObject.DefaultValue.ArrayMax = 0;
  FDS_GameOptionBaseTableRow::DefaultObject.Value1 = 0;
  FDS_GameOptionBaseTableRow::DefaultObject.Value2 = 0;
  FDS_GameOptionBaseTableRow::DefaultObject.Value3 = 0;
  FDS_GameOptionBaseTableRow::DefaultObject.OptionStorageType = None;
  FDS_GameOptionBaseTableRow::DefaultObject.ApplyType = None;
  atexit(`dynamic_atexit_destructor_for_'FDS_GameOptionBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412723b0

void __cdecl `dynamic_initializer_for_'FDS_GameTimeBandTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_GameTimeBandTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412723d0

void __cdecl `dynamic_initializer_for_'FDS_GameTimeBaseTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_GameTimeBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412723f0

void __cdecl `dynamic_initializer_for_'FDS_GameTimeDataTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_GameTimeDataTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272410

void __cdecl `dynamic_initializer_for_'FDS_GuildBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_GuildBaseTableRow::DefaultObject.Version,L"");
  FDS_GuildBaseTableRow::DefaultObject.Level = 0;
  FDS_GuildBaseTableRow::DefaultObject.Exp = 0;
  FDS_GuildBaseTableRow::DefaultObject.MaxMemberNumber = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_GuildBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272450

void __cdecl `dynamic_initializer_for_'FDS_GuildDataTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_GuildDataTableRow::DefaultObject.Version,L"");
  FDS_GuildDataTableRow::DefaultObject.ColumnDataType = None;
  FDS_GuildDataTableRow::DefaultObject.IsOptionValueArray = false;
  ::FString::FString(&FDS_GuildDataTableRow::DefaultObject.OptionValue,L"");
  FDS_GuildDataTableRow::DefaultObject.OptionValueArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_GuildDataTableRow::DefaultObject.OptionValueArray.ArrayNum = 0;
  FDS_GuildDataTableRow::DefaultObject.OptionValueArray.ArrayMax = 0;
  ::FString::FString(&FDS_GuildDataTableRow::DefaultObject.UseSystem,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_GuildDataTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412724c0

void __cdecl `dynamic_initializer_for_'FDS_GuildHistoryTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_GuildHistoryTableRow::DefaultObject.Version,L"");
  FDS_GuildHistoryTableRow::DefaultObject.ID_LogString = (FDS_StringBaseID)ZEXT816(0x1523de678);
  atexit(`dynamic_atexit_destructor_for_'FDS_GuildHistoryTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272510

void __cdecl `dynamic_initializer_for_'FDS_GuildMarkColorTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_GuildMarkColorTableRow::DefaultObject.Version,L"");
  FDS_GuildMarkColorTableRow::DefaultObject.Type = None;
  FDS_GuildMarkColorTableRow::DefaultObject.ID_ResourceColor = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_GuildMarkColorTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272550

void __cdecl `dynamic_initializer_for_'FDS_GuildMarkTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_GuildMarkTableRow::DefaultObject.Version,L"");
  FDS_GuildMarkTableRow::DefaultObject.Type = None;
  FDS_GuildMarkTableRow::DefaultObject.ID_ResourceImage = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_GuildMarkTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272590

void __cdecl `dynamic_initializer_for_'FDS_GuildMemberGradeTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_GuildMemberGradeTableRow::DefaultObject.Version,L"");
  FDS_GuildMemberGradeTableRow::DefaultObject.ID_GradeName = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_GuildMemberGradeTableRow::DefaultObject.MemberLimit = 0;
  FDS_GuildMemberGradeTableRow::DefaultObject.InvitePermission = 0;
  FDS_GuildMemberGradeTableRow::DefaultObject.SettingPermission = 0;
  FDS_GuildMemberGradeTableRow::DefaultObject.GuildMoneyPermission = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_GuildMemberGradeTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412725f0

void __cdecl `dynamic_initializer_for_'FDS_HeightConditionTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_HeightConditionTableRow::DefaultObject.Version,L"");
  FDS_HeightConditionTableRow::DefaultObject.IsBattleHeightChange = false;
  FDS_HeightConditionTableRow::DefaultObject.ChangeHeightConditionType = Ground;
  FDS_HeightConditionTableRow::DefaultObject.HeightDistance = 0.0;
  FDS_HeightConditionTableRow::DefaultObject.HeightApplyType = StartTime;
  FDS_HeightConditionTableRow::DefaultObject.HeightStartTime = 0.0;
  FDS_HeightConditionTableRow::DefaultObject.HeightEndTime = 0.0;
  FDS_HeightConditionTableRow::DefaultObject.HeightReturnStartTime = 0.0;
  FDS_HeightConditionTableRow::DefaultObject.HeightReturnEndTime = 0.0;
  atexit(`dynamic_atexit_destructor_for_'FDS_HeightConditionTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272650

void __cdecl `dynamic_initializer_for_'FDS_IconEnumTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_IconEnumTableRow::DefaultObject.ID,L"");
  FDS_IconEnumTableRow::DefaultObject.DataStage = 0;
  FDS_IconEnumTableRow::DefaultObject.ID_Resourceid = 0;
  FDS_IconEnumTableRow::DefaultObject.LanguageEnum.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_IconEnumTableRow::DefaultObject.LanguageEnum.ArrayNum = 0;
  FDS_IconEnumTableRow::DefaultObject.LanguageEnum.ArrayMax = 0;
  FDS_IconEnumTableRow::DefaultObject.ID_Iconid.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_IconEnumTableRow::DefaultObject.ID_Iconid.ArrayNum = 0;
  FDS_IconEnumTableRow::DefaultObject.ID_Iconid.ArrayMax = 0;
  FDS_IconEnumTableRow::DefaultObject.IconPath.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_IconEnumTableRow::DefaultObject.IconPath.ArrayNum = 0;
  FDS_IconEnumTableRow::DefaultObject.IconPath.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_IconEnumTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412726b0

void __cdecl `dynamic_initializer_for_'FDS_InteractionTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_InteractionTableRow::DefaultObject.Version,L"");
  FDS_InteractionTableRow::DefaultObject.ConditionShowPlayerSkillType = None;
  FDS_InteractionTableRow::DefaultObject.ConditionShowPlayerSkillLevel = 0;
  FDS_InteractionTableRow::DefaultObject.ConditionShowPlayerSkillGrade = None;
  FDS_InteractionTableRow::DefaultObject.ID_CostItem = 0;
  FDS_InteractionTableRow::DefaultObject.CostItemCount = 0;
  FDS_InteractionTableRow::DefaultObject.CastingTime = 0.0;
  FDS_InteractionTableRow::DefaultObject.CastingActionType = None;
  FDS_InteractionTableRow::DefaultObject.IsCastingCancelByDamage = false;
  FDS_InteractionTableRow::DefaultObject.ID_BaseDialogue = 0;
  FDS_InteractionTableRow::DefaultObject.ID_BaseNpcCamera = 0;
  FDS_InteractionTableRow::DefaultObject.ID_BaseNpcFrame = 0;
  FDS_InteractionTableRow::DefaultObject.FunctionType.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_InteractionTableRow::DefaultObject.FunctionType.ArrayNum = 0;
  FDS_InteractionTableRow::DefaultObject.FunctionType.ArrayMax = 0;
  FDS_InteractionTableRow::DefaultObject.FunctionValue1.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_InteractionTableRow::DefaultObject.FunctionValue1.ArrayNum = 0;
  FDS_InteractionTableRow::DefaultObject.FunctionValue1.ArrayMax = 0;
  FDS_InteractionTableRow::DefaultObject.FunctionValue2.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_InteractionTableRow::DefaultObject.FunctionValue2.ArrayNum = 0;
  FDS_InteractionTableRow::DefaultObject.FunctionValue2.ArrayMax = 0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueName.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueName.ArrayNum = 0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueName.ArrayMax = 0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueIcon.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueIcon.ArrayNum = 0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueIcon.ArrayMax = 0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueNpcCamera.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueNpcCamera.ArrayNum = 0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueNpcCamera.ArrayMax = 0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueNpcFrame.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueNpcFrame.ArrayNum = 0;
  FDS_InteractionTableRow::DefaultObject.ID_DialogueNpcFrame.ArrayMax = 0;
  FDS_InteractionTableRow::DefaultObject.InteractionRange = 0.0;
  FDS_InteractionTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_InteractionTableRow::DefaultObject.ID_CastingDesc = (FDS_StringBaseID)ZEXT816(0x1523de678);
  atexit(`dynamic_atexit_destructor_for_'FDS_InteractionTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412727c0

void __cdecl `dynamic_initializer_for_'FDS_InventoryBagGroupTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_InventoryBagGroupTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412727e0

void __cdecl `dynamic_initializer_for_'FDS_InventoryBagTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_InventoryBagTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272800

void __cdecl `dynamic_initializer_for_'FDS_InventoryBaseTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_InventoryBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272820

void __cdecl `dynamic_initializer_for_'FDS_InventoryContentsTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_InventoryContentsTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272840

void __cdecl `dynamic_initializer_for_'FDS_InventoryExtendTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_InventoryExtendTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272860

void __cdecl `dynamic_initializer_for_'FDS_InventoryOrderTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_InventoryOrderTableRow::DefaultObject.Version,L"");
  FDS_InventoryOrderTableRow::DefaultObject.OrderGroupID = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_InventoryOrderTableRow::DefaultObject.Order = 0;
  FDS_InventoryOrderTableRow::DefaultObject.ItemType = None;
  atexit(`dynamic_atexit_destructor_for_'FDS_InventoryOrderTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412728c0

void __cdecl `dynamic_initializer_for_'FDS_InventoryTabTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_InventoryTabTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412728e0

void __cdecl `dynamic_initializer_for_'FDS_ItemAbilityTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ItemAbilityTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272900

void __cdecl `dynamic_initializer_for_'FDS_ItemActionTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ItemActionTableRow::DefaultObject.MeshSocketName,L"");
  ::FString::FString(&FDS_ItemActionTableRow::DefaultObject.AttachedMeshPath,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_ItemActionTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272940

void __cdecl `dynamic_initializer_for_'FDS_ItemBaseTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ItemBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272960

void __cdecl `dynamic_initializer_for_'FDS_ItemConsumeFunctionTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ItemConsumeFunctionTableRow::DefaultObject.Version,L"");
  FDS_ItemConsumeFunctionTableRow::DefaultObject.IsUseFunction = false;
  FDS_ItemConsumeFunctionTableRow::DefaultObject.IsQuickSlotEnroll = false;
  FDS_ItemConsumeFunctionTableRow::DefaultObject.IsAutoUse = false;
  atexit(`dynamic_atexit_destructor_for_'FDS_ItemConsumeFunctionTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412729a0

void __cdecl `dynamic_initializer_for_'FDS_ItemCookingTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ItemCookingTableRow::DefaultObject.Version,L"");
  FDS_ItemCookingTableRow::DefaultObject.IsShare = false;
  atexit(`dynamic_atexit_destructor_for_'FDS_ItemCookingTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412729e0

void __cdecl `dynamic_initializer_for_'FDS_ItemCraftBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ItemCraftBaseTableRow::DefaultObject.Version,L"");
  FDS_ItemCraftBaseTableRow::DefaultObject.ID_ItemCraftGroup = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_ItemCraftBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272a20

void __cdecl `dynamic_initializer_for_'FDS_ItemCraftListTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ItemCraftListTableRow::DefaultObject.Version,L"");
  FDS_ItemCraftListTableRow::DefaultObject.GroupID = 0;
  FDS_ItemCraftListTableRow::DefaultObject.CraftTime = 0.0;
  FDS_ItemCraftListTableRow::DefaultObject.CraftCategory = None;
  FDS_ItemCraftListTableRow::DefaultObject.Order = 0;
  FDS_ItemCraftListTableRow::DefaultObject.CraftType = None;
  FDS_ItemCraftListTableRow::DefaultObject.ID_CraftItem = 0;
  FDS_ItemCraftListTableRow::DefaultObject.IsEquip = false;
  FDS_ItemCraftListTableRow::DefaultObject.RecipeActiveCondition = None;
  FDS_ItemCraftListTableRow::DefaultObject.RecipeActiveValue = 0;
  FDS_ItemCraftListTableRow::DefaultObject.ItemOptionAffix = None;
  FDS_ItemCraftListTableRow::DefaultObject.CraftItemCount = 0;
  FDS_ItemCraftListTableRow::DefaultObject.GreatSuccessRate = 0;
  FDS_ItemCraftListTableRow::DefaultObject.CraftMaxValue = 0;
  FDS_ItemCraftListTableRow::DefaultObject.ID_IngredientItem.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_ItemCraftListTableRow::DefaultObject.ID_IngredientItem.ArrayNum = 0;
  FDS_ItemCraftListTableRow::DefaultObject.ID_IngredientItem.ArrayMax = 0;
  FDS_ItemCraftListTableRow::DefaultObject.IngredientItemValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_ItemCraftListTableRow::DefaultObject.IngredientItemValue.ArrayNum = 0;
  FDS_ItemCraftListTableRow::DefaultObject.IngredientItemValue.ArrayMax = 0;
  FDS_ItemCraftListTableRow::DefaultObject.MoneyType.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_ItemCraftListTableRow::DefaultObject.MoneyType.ArrayNum = 0;
  FDS_ItemCraftListTableRow::DefaultObject.MoneyType.ArrayMax = 0;
  FDS_ItemCraftListTableRow::DefaultObject.MoneyValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_ItemCraftListTableRow::DefaultObject.MoneyValue.ArrayNum = 0;
  FDS_ItemCraftListTableRow::DefaultObject.MoneyValue.ArrayMax = 0;
  FDS_ItemCraftListTableRow::DefaultObject.ID_MoneyExchange.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_ItemCraftListTableRow::DefaultObject.ID_MoneyExchange.ArrayNum = 0;
  FDS_ItemCraftListTableRow::DefaultObject.ID_MoneyExchange.ArrayMax = 0;
  FDS_ItemCraftListTableRow::DefaultObject.ID_CraftRandom.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_ItemCraftListTableRow::DefaultObject.ID_CraftRandom.ArrayNum = 0;
  FDS_ItemCraftListTableRow::DefaultObject.ID_CraftRandom.ArrayMax = 0;
  FDS_ItemCraftListTableRow::DefaultObject.CraftRate.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_ItemCraftListTableRow::DefaultObject.CraftRate.ArrayNum = 0;
  FDS_ItemCraftListTableRow::DefaultObject.CraftRate.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_ItemCraftListTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272b00

void __cdecl `dynamic_initializer_for_'FDS_ItemDismantleCostTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ItemDismantleCostTableRow::DefaultObject.Version,L"");
  FDS_ItemDismantleCostTableRow::DefaultObject.SeasonGroup = 0;
  FDS_ItemDismantleCostTableRow::DefaultObject.ID_ItemType = None;
  FDS_ItemDismantleCostTableRow::DefaultObject.ID_GradeType = None;
  FDS_ItemDismantleCostTableRow::DefaultObject.MoneyType = None;
  FDS_ItemDismantleCostTableRow::DefaultObject.MoneyValue = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_ItemDismantleCostTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272b50

void __cdecl `dynamic_initializer_for_'FDS_ItemDismantleTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ItemDismantleTableRow::DefaultObject.Version,L"");
  FDS_ItemDismantleTableRow::DefaultObject.ResultItemMaxCount = 0;
  FDS_ItemDismantleTableRow::DefaultObject.ResultItemRate = 0;
  FDS_ItemDismantleTableRow::DefaultObject.GroupID = 0;
  FDS_ItemDismantleTableRow::DefaultObject.RewardSet = 0;
  FDS_ItemDismantleTableRow::DefaultObject.ID_ResultItem = 0;
  FDS_ItemDismantleTableRow::DefaultObject.ResultItemMinCount = 0;
  FDS_ItemDismantleTableRow::DefaultObject.ResultItemTradeAbleRate = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_ItemDismantleTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272ba0

void __cdecl `dynamic_initializer_for_'FDS_ItemDisplayTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ItemDisplayTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141272bc0

void __cdecl `dynamic_initializer_for_'FDS_ItemEnchantTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ItemEnchantTableRow::DefaultObject.Version,L"");
  FDS_ItemEnchantTableRow::DefaultObject.ID_GradeType = None;
  FDS_ItemEnchantTableRow::DefaultObject.EnchantType = 0;
  FDS_ItemEnchantTableRow::DefaultObject.ID_Prefix = 0;
  FDS_ItemEnchantTableRow::DefaultObject.ID_SetEffect = 0;
  FDS_ItemEnchantTableRow::DefaultObject.ReqMoneyType = None;
  FDS_ItemEnchantTableRow::DefaultObject.ReqMoneyValue = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_ItemEnchantTableRow::DefaultObject__);
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 141272c10

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 141272c30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 141272c50

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 141272c70

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 141272c90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 141272cb0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 141272cd0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 141272cf0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 141272d10

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 141272d30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 141272d50

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 141272d70

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 141272d90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 141272db0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 141272dd0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 141272df0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 141272e10

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 141272e30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// AutoKickTimeDuration @ 14b929f90

long64 __cdecl DS_GuildDataHelper::AutoKickTimeDuration(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0xb,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return (longlong)iVar1;
  }
  iVar1 = _wtoi(L"");
  return (longlong)iVar1;
}

// AutoOwnerDuration @ 14b929ff0

long64 __cdecl DS_GuildDataHelper::AutoOwnerDuration(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(10,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return (longlong)iVar1;
  }
  iVar1 = _wtoi(L"");
  return (longlong)iVar1;
}

// CreateMoneyType @ 14b92a050

int __cdecl DS_GuildDataHelper::CreateMoneyType(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0x14,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92a07a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92a08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CreateMoneyValue @ 14b92a0a0

int __cdecl DS_GuildDataHelper::CreateMoneyValue(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0x15,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92a0ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92a0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GuildHistoryBatchSize @ 14b9343c0

int __cdecl DS_GuildDataHelper::GuildHistoryBatchSize(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0x17,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9343ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9343fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GuildListBatchSize @ 14b934410

int __cdecl DS_GuildDataHelper::GuildListBatchSize(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0x16,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b93443a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b93444c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GuildMaxInvites @ 14b934460

int __cdecl DS_GuildDataHelper::GuildMaxInvites(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0x19,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b93448a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b93449c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GuildMaxJoinRequests @ 14b9344b0

int __cdecl DS_GuildDataHelper::GuildMaxJoinRequests(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0x18,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9344da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9344ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// InfoRefreshInterval @ 14b9362d0

long64 __cdecl DS_GuildDataHelper::InfoRefreshInterval(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0xc,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return (longlong)iVar1;
  }
  iVar1 = _wtoi(L"");
  return (longlong)iVar1;
}

// InviteDuration @ 14b936330

long64 __cdecl DS_GuildDataHelper::InviteDuration(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(3,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return (longlong)iVar1;
  }
  iVar1 = _wtoi(L"");
  return (longlong)iVar1;
}

// JoinRequestDuration @ 14b9368d0

long64 __cdecl DS_GuildDataHelper::JoinRequestDuration(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(1,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return (longlong)iVar1;
  }
  iVar1 = _wtoi(L"");
  return (longlong)iVar1;
}

// MarkChangeMoneyType @ 14b936930

int __cdecl DS_GuildDataHelper::MarkChangeMoneyType(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0xf,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b93695a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b93696c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MarkChangeMoneyValue @ 14b936980

int __cdecl DS_GuildDataHelper::MarkChangeMoneyValue(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0x10,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9369aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9369bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MaxDescLength @ 14b9369d0

int __cdecl DS_GuildDataHelper::MaxDescLength(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(8,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9369fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b936a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MaxIntroductionLength @ 14b936a20

int __cdecl DS_GuildDataHelper::MaxIntroductionLength(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0x13,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b936a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b936a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MaxInvites @ 14b936a70

int __cdecl DS_GuildDataHelper::MaxInvites(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(4,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b936a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b936aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MaxJoinRequests @ 14b936ac0

int __cdecl DS_GuildDataHelper::MaxJoinRequests(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(2,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b936aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b936afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MaxLogCount @ 14b936b10

int __cdecl DS_GuildDataHelper::MaxLogCount(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(9,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b936b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b936b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MaxNameLength @ 14b936b60

int __cdecl DS_GuildDataHelper::MaxNameLength(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(6,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b936b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b936b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MinDescLength @ 14b936bb0

int __cdecl DS_GuildDataHelper::MinDescLength(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(7,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b936bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b936bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MinIntroductionLength @ 14b936c00

int __cdecl DS_GuildDataHelper::MinIntroductionLength(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0x12,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b936c2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b936c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MinNameLength @ 14b936c50

int __cdecl DS_GuildDataHelper::MinNameLength(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(5,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b936c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b936c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// NameChangeMoneyType @ 14b936ca0

int __cdecl DS_GuildDataHelper::NameChangeMoneyType(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0xd,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b936cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b936cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// NameChangeMoneyValue @ 14b936cf0

int __cdecl DS_GuildDataHelper::NameChangeMoneyValue(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0xe,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b936d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b936d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// NormalMemberChangeDuration @ 14b936d40

long64 __cdecl DS_GuildDataHelper::NormalMemberChangeDuration(void)

{
  int iVar1;
  FDS_GuildDataTableRow *pFVar2;
  
  pFVar2 = FDS_GuildDataTableRow::GetRef(0x11,true);
  if (pFVar2 == &FDS_GuildDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return (longlong)iVar1;
  }
  iVar1 = _wtoi(L"");
  return (longlong)iVar1;
}

// DefaultObject'' @ 150438e00

void __cdecl `dynamic_atexit_destructor_for_'FDS_DungeonTypeDataTableRow::DefaultObject__(void)

{
  if (FDS_DungeonTypeDataTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DungeonTypeDataTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_DungeonTypeDataTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438e30

void __cdecl `dynamic_atexit_destructor_for_'FDS_EnvClimateTableRow::DefaultObject__(void)

{
  FDS_EnvClimateTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438e50

void __cdecl `dynamic_atexit_destructor_for_'FDS_EnvFlooringTableRow::DefaultObject__(void)

{
  FDS_EnvFlooringTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438e70

void __cdecl `dynamic_atexit_destructor_for_'FDS_EnvWeatherFixedDataTableRow::DefaultObject__(void)

{
  if (FDS_EnvWeatherFixedDataTableRow::DefaultObject.ID_WeatherGameTime.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_EnvWeatherFixedDataTableRow::DefaultObject.ID_WeatherGameTime.
                  AllocatorInstance.Data);
  }
  FDS_EnvWeatherFixedDataTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438ea0

void __cdecl `dynamic_atexit_destructor_for_'FDS_EnvWeatherRandomDataTableRow::DefaultObject__(void)

{
  FDS_EnvWeatherRandomDataTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438ec0

void __cdecl `dynamic_atexit_destructor_for_'FDS_EnvWeatherTableRow::DefaultObject__(void)

{
  FDS_EnvWeatherTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438ee0

void __cdecl `dynamic_atexit_destructor_for_'FDS_FactionBaseTableRow::DefaultObject__(void)

{
  if (FDS_FactionBaseTableRow::DefaultObject.Enemy.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_FactionBaseTableRow::DefaultObject.Enemy.AllocatorInstance.Data);
  }
  if (FDS_FactionBaseTableRow::DefaultObject.Friendly.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_FactionBaseTableRow::DefaultObject.Friendly.AllocatorInstance.Data);
  }
  if (FDS_FactionBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_FactionBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_FactionBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438f30

void __cdecl `dynamic_atexit_destructor_for_'FDS_GachaBaseTableRow::DefaultObject__(void)

{
  if (FDS_GachaBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GachaBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_GachaBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438f60

void __cdecl `dynamic_atexit_destructor_for_'FDS_GachaGroupTableRow::DefaultObject__(void)

{
  if (FDS_GachaGroupTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GachaGroupTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_GachaGroupTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438f90

void __cdecl `dynamic_atexit_destructor_for_'FDS_GachaResultCharacterTableRow::DefaultObject__(void)

{
  if (FDS_GachaResultCharacterTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GachaResultCharacterTableRow::DefaultObject.Version.Data.AllocatorInstance.
                  Data);
  }
  FDS_GachaResultCharacterTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438fc0

void __cdecl `dynamic_atexit_destructor_for_'FDS_GachaResultItemTableRow::DefaultObject__(void)

{
  if (FDS_GachaResultItemTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GachaResultItemTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_GachaResultItemTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438ff0

void __cdecl `dynamic_atexit_destructor_for_'FDS_GameOptionBaseTableRow::DefaultObject__(void)

{
  if (FDS_GameOptionBaseTableRow::DefaultObject.DefaultValue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GameOptionBaseTableRow::DefaultObject.DefaultValue.AllocatorInstance.Data);
  }
  if (FDS_GameOptionBaseTableRow::DefaultObject.GameOptionData.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GameOptionBaseTableRow::DefaultObject.GameOptionData.Data.AllocatorInstance.
                  Data);
  }
  if (FDS_GameOptionBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GameOptionBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_GameOptionBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439040

void __cdecl `dynamic_atexit_destructor_for_'FDS_GameTimeBandTableRow::DefaultObject__(void)

{
  FDS_GameTimeBandTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439060

void __cdecl `dynamic_atexit_destructor_for_'FDS_GameTimeBaseTableRow::DefaultObject__(void)

{
  FDS_GameTimeBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439080

void __cdecl `dynamic_atexit_destructor_for_'FDS_GameTimeDataTableRow::DefaultObject__(void)

{
  FDS_GameTimeDataTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504390a0

void __cdecl `dynamic_atexit_destructor_for_'FDS_GuildBaseTableRow::DefaultObject__(void)

{
  if (FDS_GuildBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GuildBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_GuildBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504390d0

void __cdecl `dynamic_atexit_destructor_for_'FDS_GuildDataTableRow::DefaultObject__(void)

{
  if (FDS_GuildDataTableRow::DefaultObject.UseSystem.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GuildDataTableRow::DefaultObject.UseSystem.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)FDS_GuildDataTableRow::DefaultObject.OptionValueArray.AllocatorInstance.Data
             ,FDS_GuildDataTableRow::DefaultObject.OptionValueArray.ArrayNum);
  if (FDS_GuildDataTableRow::DefaultObject.OptionValueArray.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GuildDataTableRow::DefaultObject.OptionValueArray.AllocatorInstance.Data);
  }
  if (FDS_GuildDataTableRow::DefaultObject.OptionValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GuildDataTableRow::DefaultObject.OptionValue.Data.AllocatorInstance.Data);
  }
  if (FDS_GuildDataTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GuildDataTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_GuildDataTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439150

void __cdecl `dynamic_atexit_destructor_for_'FDS_GuildHistoryTableRow::DefaultObject__(void)

{
  if (FDS_GuildHistoryTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GuildHistoryTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_GuildHistoryTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439180

void __cdecl `dynamic_atexit_destructor_for_'FDS_GuildMarkColorTableRow::DefaultObject__(void)

{
  if (FDS_GuildMarkColorTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GuildMarkColorTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_GuildMarkColorTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504391b0

void __cdecl `dynamic_atexit_destructor_for_'FDS_GuildMarkTableRow::DefaultObject__(void)

{
  if (FDS_GuildMarkTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GuildMarkTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_GuildMarkTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504391e0

void __cdecl `dynamic_atexit_destructor_for_'FDS_GuildMemberGradeTableRow::DefaultObject__(void)

{
  if (FDS_GuildMemberGradeTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_GuildMemberGradeTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_GuildMemberGradeTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439210

void __cdecl `dynamic_atexit_destructor_for_'FDS_HeightConditionTableRow::DefaultObject__(void)

{
  if (FDS_HeightConditionTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_HeightConditionTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_HeightConditionTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439240

void __cdecl `dynamic_atexit_destructor_for_'FDS_IconEnumTableRow::DefaultObject__(void)

{
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)FDS_IconEnumTableRow::DefaultObject.IconPath.AllocatorInstance.Data,
             FDS_IconEnumTableRow::DefaultObject.IconPath.ArrayNum);
  if (FDS_IconEnumTableRow::DefaultObject.IconPath.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_IconEnumTableRow::DefaultObject.IconPath.AllocatorInstance.Data);
  }
  if (FDS_IconEnumTableRow::DefaultObject.ID_Iconid.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_IconEnumTableRow::DefaultObject.ID_Iconid.AllocatorInstance.Data);
  }
  if (FDS_IconEnumTableRow::DefaultObject.LanguageEnum.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_IconEnumTableRow::DefaultObject.LanguageEnum.AllocatorInstance.Data);
  }
  if (FDS_IconEnumTableRow::DefaultObject.ID.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_IconEnumTableRow::DefaultObject.ID.Data.AllocatorInstance.Data);
  }
  FDS_IconEnumTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504392c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_InteractionTableRow::DefaultObject__(void)

{
  FDS_InteractionTableRow::~FDS_InteractionTableRow(&FDS_InteractionTableRow::DefaultObject);
  return;
}

// DefaultObject'' @ 1504392e0

void __cdecl `dynamic_atexit_destructor_for_'FDS_InventoryBagGroupTableRow::DefaultObject__(void)

{
  if (FDS_InventoryBagGroupTableRow::DefaultObject.BagGroupInfo.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_InventoryBagGroupTableRow::DefaultObject.BagGroupInfo.AllocatorInstance.Data);
  }
  if (FDS_InventoryBagGroupTableRow::DefaultObject.ID_Bag.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_InventoryBagGroupTableRow::DefaultObject.ID_Bag.AllocatorInstance.Data);
  }
  FDS_InventoryBagGroupTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439320

void __cdecl `dynamic_atexit_destructor_for_'FDS_InventoryBagTableRow::DefaultObject__(void)

{
  if (FDS_InventoryBagTableRow::DefaultObject.ItemFilter.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_InventoryBagTableRow::DefaultObject.ItemFilter.AllocatorInstance.Data);
  }
  if (FDS_InventoryBagTableRow::DefaultObject.ID_Sorting.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_InventoryBagTableRow::DefaultObject.ID_Sorting.AllocatorInstance.Data);
  }
  FDS_InventoryBagTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439360

void __cdecl `dynamic_atexit_destructor_for_'FDS_InventoryBaseTableRow::DefaultObject__(void)

{
  FDS_InventoryBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439380

void __cdecl `dynamic_atexit_destructor_for_'FDS_InventoryContentsTableRow::DefaultObject__(void)

{
  if (FDS_InventoryContentsTableRow::DefaultObject.ID_Item.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_InventoryContentsTableRow::DefaultObject.ID_Item.AllocatorInstance.Data);
  }
  if (FDS_InventoryContentsTableRow::DefaultObject.ItemType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_InventoryContentsTableRow::DefaultObject.ItemType.AllocatorInstance.Data);
  }
  if (FDS_InventoryContentsTableRow::DefaultObject.ID_CategoryName.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_InventoryContentsTableRow::DefaultObject.ID_CategoryName.AllocatorInstance.
                  Data);
  }
  if (FDS_InventoryContentsTableRow::DefaultObject.ID_CategoryIcon.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_InventoryContentsTableRow::DefaultObject.ID_CategoryIcon.AllocatorInstance.
                  Data);
  }
  FDS_InventoryContentsTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504393f0

void __cdecl `dynamic_atexit_destructor_for_'FDS_InventoryExtendTableRow::DefaultObject__(void)

{
  FDS_InventoryExtendTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439410

void __cdecl `dynamic_atexit_destructor_for_'FDS_InventoryOrderTableRow::DefaultObject__(void)

{
  if (FDS_InventoryOrderTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_InventoryOrderTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_InventoryOrderTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439440

void __cdecl `dynamic_atexit_destructor_for_'FDS_InventoryTabTableRow::DefaultObject__(void)

{
  if (FDS_InventoryTabTableRow::DefaultObject.ID_Sorting.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_InventoryTabTableRow::DefaultObject.ID_Sorting.AllocatorInstance.Data);
  }
  if (FDS_InventoryTabTableRow::DefaultObject.ItemType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_InventoryTabTableRow::DefaultObject.ItemType.AllocatorInstance.Data);
  }
  FDS_InventoryTabTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439480

void __cdecl `dynamic_atexit_destructor_for_'FDS_ItemAbilityTableRow::DefaultObject__(void)

{
  if (FDS_ItemAbilityTableRow::DefaultObject.StatusValue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemAbilityTableRow::DefaultObject.StatusValue.AllocatorInstance.Data);
  }
  if (FDS_ItemAbilityTableRow::DefaultObject.StatusType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemAbilityTableRow::DefaultObject.StatusType.AllocatorInstance.Data);
  }
  FDS_ItemAbilityTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504394c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ItemActionTableRow::DefaultObject__(void)

{
  if (FDS_ItemActionTableRow::DefaultObject.AttachedMeshPath.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemActionTableRow::DefaultObject.AttachedMeshPath.Data.AllocatorInstance.Data
                 );
  }
  if (FDS_ItemActionTableRow::DefaultObject.MeshSocketName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemActionTableRow::DefaultObject.MeshSocketName.Data.AllocatorInstance.Data);
  }
  FDS_ItemActionTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439500

void __cdecl `dynamic_atexit_destructor_for_'FDS_ItemBaseTableRow::DefaultObject__(void)

{
  if (FDS_ItemBaseTableRow::DefaultObject.ID_Character.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemBaseTableRow::DefaultObject.ID_Character.AllocatorInstance.Data);
  }
  FDS_ItemBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439530

void __cdecl `dynamic_atexit_destructor_for_'FDS_ItemConsumeFunctionTableRow::DefaultObject__(void)

{
  if (FDS_ItemConsumeFunctionTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemConsumeFunctionTableRow::DefaultObject.Version.Data.AllocatorInstance.Data
                 );
  }
  FDS_ItemConsumeFunctionTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439560

void __cdecl `dynamic_atexit_destructor_for_'FDS_ItemCookingTableRow::DefaultObject__(void)

{
  if (FDS_ItemCookingTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemCookingTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ItemCookingTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439590

void __cdecl `dynamic_atexit_destructor_for_'FDS_ItemCraftBaseTableRow::DefaultObject__(void)

{
  if (FDS_ItemCraftBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemCraftBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ItemCraftBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504395c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ItemCraftListTableRow::DefaultObject__(void)

{
  FDS_ItemCraftListTableRow::~FDS_ItemCraftListTableRow(&FDS_ItemCraftListTableRow::DefaultObject);
  return;
}

// DefaultObject'' @ 1504395e0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ItemDismantleCostTableRow::DefaultObject__(void)

{
  if (FDS_ItemDismantleCostTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemDismantleCostTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ItemDismantleCostTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439610

void __cdecl `dynamic_atexit_destructor_for_'FDS_ItemDismantleTableRow::DefaultObject__(void)

{
  if (FDS_ItemDismantleTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemDismantleTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ItemDismantleTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439640

void __cdecl `dynamic_atexit_destructor_for_'FDS_ItemDisplayTableRow::DefaultObject__(void)

{
  if (FDS_ItemDisplayTableRow::DefaultObject.ID_Money.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemDisplayTableRow::DefaultObject.ID_Money.AllocatorInstance.Data);
  }
  if (FDS_ItemDisplayTableRow::DefaultObject.ID_Item.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemDisplayTableRow::DefaultObject.ID_Item.AllocatorInstance.Data);
  }
  FDS_ItemDisplayTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150439680

void __cdecl `dynamic_atexit_destructor_for_'FDS_ItemEnchantTableRow::DefaultObject__(void)

{
  if (FDS_ItemEnchantTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ItemEnchantTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ItemEnchantTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

