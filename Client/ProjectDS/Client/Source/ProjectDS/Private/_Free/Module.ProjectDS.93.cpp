// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 407

// DefaultObject'' @ 141271260

void __cdecl `dynamic_initializer_for_'FDS_ChattingTabTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ChattingTabTableRow::DefaultObject.Version,L"");
  FDS_ChattingTabTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_ChattingTabTableRow::DefaultObject.Order = 0;
  FDS_ChattingTabTableRow::DefaultObject.IsAlwaysVisible = false;
  FDS_ChattingTabTableRow::DefaultObject.IsSubTabAvailable = false;
  FDS_ChattingTabTableRow::DefaultObject.ID_Icon = 0;
  FDS_ChattingTabTableRow::DefaultObject.ID_Color = 0;
  FDS_ChattingTabTableRow::DefaultObject.DefaultChatType = None;
  FDS_ChattingTabTableRow::DefaultObject.ID_DisplayableChatTypes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_ChattingTabTableRow::DefaultObject.ID_DisplayableChatTypes.ArrayNum = 0;
  FDS_ChattingTabTableRow::DefaultObject.ID_DisplayableChatTypes.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_ChattingTabTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412712e0

void __cdecl `dynamic_initializer_for_'FDS_CheatKeyBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_CheatKeyBaseTableRow::DefaultObject.Name,L"");
  ::FString::FString(&FDS_CheatKeyBaseTableRow::DefaultObject.Command,L"");
  FDS_CheatKeyBaseTableRow::DefaultObject.IsEssential1 = false;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterType1 = None;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText1.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText1.ArrayNum = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText1.ArrayMax = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue1.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue1.ArrayNum = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue1.ArrayMax = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.IsEssential2 = false;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterType2 = None;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText2.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText2.ArrayNum = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText2.ArrayMax = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue2.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue2.ArrayNum = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue2.ArrayMax = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.IsEssential3 = false;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterType3 = None;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText3.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText3.ArrayNum = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText3.ArrayMax = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue3.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue3.ArrayNum = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue3.ArrayMax = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.IsEssential4 = false;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterType4 = None;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText4.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText4.ArrayNum = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterText4.ArrayMax = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue4.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue4.ArrayNum = 0;
  FDS_CheatKeyBaseTableRow::DefaultObject.ParameterValue4.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_CheatKeyBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412713b0

void __cdecl `dynamic_initializer_for_'FDS_CoiParameterTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_CoiParameterTableRow::DefaultObject.Version,L"");
  FDS_CoiParameterTableRow::DefaultObject.ParamType = None;
  ::FString::FString(&FDS_CoiParameterTableRow::DefaultObject.Value,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_CoiParameterTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271400

void __cdecl `dynamic_initializer_for_'FDS_CollideTableRow::DefaultObject__(void)

{
  FDS_CollideTableRow::DefaultObject.CollideOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_CollideTableRow::DefaultObject.CollideOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_CollideTableRow::DefaultObject.CollideOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  atexit(`dynamic_atexit_destructor_for_'FDS_CollideTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271430

void __cdecl `dynamic_initializer_for_'FDS_CommonActionCastingTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_CommonActionCastingTableRow::DefaultObject.Version,L"");
  FDS_CommonActionCastingTableRow::DefaultObject.CastingTime = 0.0;
  FDS_CommonActionCastingTableRow::DefaultObject.CastingEndTime = 0.0;
  FDS_CommonActionCastingTableRow::DefaultObject.CastingText =
       (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_CommonActionCastingTableRow::DefaultObject.ID_InteractionPompt =
       (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_CommonActionCastingTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  atexit(`dynamic_atexit_destructor_for_'FDS_CommonActionCastingTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412714c0

void __cdecl `dynamic_initializer_for_'FDS_CommonContentsInfoTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CommonContentsInfoTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412714e0

void __cdecl `dynamic_initializer_for_'FDS_CommonDataTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_CommonDataTableRow::DefaultObject.Version,L"");
  FDS_CommonDataTableRow::DefaultObject.IsExtractServer = false;
  FDS_CommonDataTableRow::DefaultObject.IsExtractClient = false;
  ::FString::FString(&FDS_CommonDataTableRow::DefaultObject.UseSystem,L"");
  FDS_CommonDataTableRow::DefaultObject.ColumnDataType = None;
  FDS_CommonDataTableRow::DefaultObject.IsOptionValueArray = false;
  ::FString::FString(&FDS_CommonDataTableRow::DefaultObject.OptionValue,L"");
  FDS_CommonDataTableRow::DefaultObject.OptionValueArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CommonDataTableRow::DefaultObject.OptionValueArray.ArrayNum = 0;
  FDS_CommonDataTableRow::DefaultObject.OptionValueArray.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_CommonDataTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271560

void __cdecl `dynamic_initializer_for_'FDS_CommonFrameBaseTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CommonFrameBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271580

void __cdecl `dynamic_initializer_for_'FDS_CommonGradeTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_CommonGradeTableRow::DefaultObject.ID_TagStyleS,L"");
  ::FString::FString(&FDS_CommonGradeTableRow::DefaultObject.ID_TagStyleM,L"");
  ::FString::FString(&FDS_CommonGradeTableRow::DefaultObject.ID_TagStyleL,L"");
  FDS_CommonGradeTableRow::DefaultObject.ID_ResourceStyleS = 0;
  FDS_CommonGradeTableRow::DefaultObject.ID_ResourceStyleM = 0;
  FDS_CommonGradeTableRow::DefaultObject.ID_RelationGradeName =
       (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_CommonGradeTableRow::DefaultObject.ID_ResourceStyleL = 0;
  FDS_CommonGradeTableRow::DefaultObject.ID_ItemDetailGradeBg = 0;
  FDS_CommonGradeTableRow::DefaultObject.ID_ItemDetailGradeNameBg = 0;
  ::FString::FString(&FDS_CommonGradeTableRow::DefaultObject.ID_ItemNameGrade,L"");
  FDS_CommonGradeTableRow::DefaultObject.ID_DropGradeBg = 0;
  FDS_CommonGradeTableRow::DefaultObject.ID_SkillGradeName = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_CommonGradeTableRow::DefaultObject.ID_SkillGradeColor = 0;
  FDS_CommonGradeTableRow::DefaultObject.ID_SkillLvGradeBg = 0;
  FDS_CommonGradeTableRow::DefaultObject.ID_SkillSlotGradeBg = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_CommonGradeTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271660

void __cdecl `dynamic_initializer_for_'FDS_ContentsBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ContentsBaseTableRow::DefaultObject.Version,L"");
  FDS_ContentsBaseTableRow::DefaultObject.ID_OpenIcon = 0;
  FDS_ContentsBaseTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_ContentsBaseTableRow::DefaultObject.OpenLevel = 0;
  FDS_ContentsBaseTableRow::DefaultObject.OpenPlayerLevel = 0;
  FDS_ContentsBaseTableRow::DefaultObject.OpenTemplateType = None;
  FDS_ContentsBaseTableRow::DefaultObject.OpenValue = 0;
  FDS_ContentsBaseTableRow::DefaultObject.ContentsFunction.ArrayNum = 0;
  FDS_ContentsBaseTableRow::DefaultObject.ContentsFunction.ArrayMax = 0;
  FDS_ContentsBaseTableRow::DefaultObject.ID_OpenString = (FDS_StringUiID)ZEXT816(0x1523de688);
  FDS_ContentsBaseTableRow::DefaultObject.ID_ContentsLockString =
       (FDS_StringUiID)ZEXT816(0x1523de688);
  FDS_ContentsBaseTableRow::DefaultObject.ContentsFunction.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  atexit(`dynamic_atexit_destructor_for_'FDS_ContentsBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271710

void __cdecl `dynamic_initializer_for_'FDS_ContentsFunctionTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ContentsFunctionTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271730

void __cdecl `dynamic_initializer_for_'FDS_ContentsTabFrameStyleTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ContentsTabFrameStyleTableRow::DefaultObject.Version,L"");
  FDS_ContentsTabFrameStyleTableRow::DefaultObject.IsTab = false;
  FDS_ContentsTabFrameStyleTableRow::DefaultObject.IsTabHotKey = false;
  FDS_ContentsTabFrameStyleTableRow::DefaultObject.IsTitle = false;
  FDS_ContentsTabFrameStyleTableRow::DefaultObject.IsExitBtn = false;
  atexit(`dynamic_atexit_destructor_for_'FDS_ContentsTabFrameStyleTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271770

void __cdecl `dynamic_initializer_for_'FDS_ContentsTabFrameTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ContentsTabFrameTableRow::DefaultObject.Version,L"");
  FDS_ContentsTabFrameTableRow::DefaultObject.SubTabType = None;
  FDS_ContentsTabFrameTableRow::DefaultObject.MenuOrder = 0;
  FDS_ContentsTabFrameTableRow::DefaultObject.MainTab = 0;
  FDS_ContentsTabFrameTableRow::DefaultObject.SubTab = 0;
  FDS_ContentsTabFrameTableRow::DefaultObject.ID_WindowBase = None;
  FDS_ContentsTabFrameTableRow::DefaultObject.ID_ContentsBase = None;
  FDS_ContentsTabFrameTableRow::DefaultObject.ActiveBackgroundEvent = false;
  FDS_ContentsTabFrameTableRow::DefaultObject.HistoryGroup = 0;
  FDS_ContentsTabFrameTableRow::DefaultObject.MoneyDisplayCount = 0;
  FDS_ContentsTabFrameTableRow::DefaultObject.DisplayMoney.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_ContentsTabFrameTableRow::DefaultObject.DisplayMoney.ArrayNum = 0;
  FDS_ContentsTabFrameTableRow::DefaultObject.DisplayMoney.ArrayMax = 0;
  FDS_ContentsTabFrameTableRow::DefaultObject.ID_KeyMappingData = 0;
  FDS_ContentsTabFrameTableRow::DefaultObject.IsPlayerInfo = false;
  FDS_ContentsTabFrameTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  atexit(`dynamic_atexit_destructor_for_'FDS_ContentsTabFrameTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271800

void __cdecl `dynamic_initializer_for_'FDS_ContentsTotalMenuTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ContentsTotalMenuTableRow::DefaultObject.Version,L"");
  FDS_ContentsTotalMenuTableRow::DefaultObject.Type = None;
  FDS_ContentsTotalMenuTableRow::DefaultObject.Order = 0;
  FDS_ContentsTotalMenuTableRow::DefaultObject.ID_Group = None;
  FDS_ContentsTotalMenuTableRow::DefaultObject.ID_Icon = 0;
  FDS_ContentsTotalMenuTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_ContentsTotalMenuTableRow::DefaultObject.IsActivate = false;
  FDS_ContentsTotalMenuTableRow::DefaultObject.ID_ContentsBase = None;
  FDS_ContentsTotalMenuTableRow::DefaultObject.ID_ContentsTabFrame = None;
  FDS_ContentsTotalMenuTableRow::DefaultObject.IsRingCmdAble = false;
  FDS_ContentsTotalMenuTableRow::DefaultObject.ID_DisabledMessage =
       (FDS_StringUiID)ZEXT816(0x1523de688);
  atexit(`dynamic_atexit_destructor_for_'FDS_ContentsTotalMenuTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412718a0

void __cdecl `dynamic_initializer_for_'FDS_CustomizingCategoryGroupTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CustomizingCategoryGroupTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412718c0

void __cdecl `dynamic_initializer_for_'FDS_CustomizingCategoryTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CustomizingCategoryTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412718e0

void __cdecl `dynamic_initializer_for_'FDS_CustomizingComponentTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CustomizingComponentTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271900

void __cdecl `dynamic_initializer_for_'FDS_CustomizingGenderCategoryTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CustomizingGenderCategoryTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271920

void __cdecl `dynamic_initializer_for_'FDS_CustomizingOptionItemTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CustomizingOptionItemTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271940

void __cdecl `dynamic_initializer_for_'FDS_CustomizingOptionTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CustomizingOptionTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271960

void __cdecl `dynamic_initializer_for_'FDS_CustomizingPresetTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CustomizingPresetTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271980

void __cdecl `dynamic_initializer_for_'FDS_DataStageValueTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_DataStageValueTableRow::DefaultObject.Version,L"");
  FDS_DataStageValueTableRow::DefaultObject.DataStage = 0;
  ::FString::FString(&FDS_DataStageValueTableRow::DefaultObject.Stream,L"");
  ::FString::FString(&FDS_DataStageValueTableRow::DefaultObject.Name,L"");
  ::FString::FString(&FDS_DataStageValueTableRow::DefaultObject.DevServerListUrl,L"");
  ::FString::FString(&FDS_DataStageValueTableRow::DefaultObject.EventHubsConnectionString,L"");
  ::FString::FString(&FDS_DataStageValueTableRow::DefaultObject.EventHubsLogName,L"");
  ::FString::FString(&FDS_DataStageValueTableRow::DefaultObject.AzureFunctionsUri,L"");
  ::FString::FString(&FDS_DataStageValueTableRow::DefaultObject.AzureFunctionsCode,L"");
  ::FString::FString(&FDS_DataStageValueTableRow::DefaultObject.ServiceBusString,L"");
  ::FString::FString(&FDS_DataStageValueTableRow::DefaultObject.ServiceBusResourceGroup,L"");
  ::FString::FString(&FDS_DataStageValueTableRow::DefaultObject.ServiceBusNamespace,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_DataStageValueTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271a80

void __cdecl `dynamic_initializer_for_'FDS_DevServerListTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_DevServerListTableRow::DefaultObject.Urls,L"");
  ::FString::FString(&FDS_DevServerListTableRow::DefaultObject.ServerAddr,L"");
  ::FString::FString(&FDS_DevServerListTableRow::DefaultObject.AiAddr,L"");
  ::FString::FString(&FDS_DevServerListTableRow::DefaultObject.ServerName,L"");
  FDS_DevServerListTableRow::DefaultObject.FrontEndServerIndex.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_DevServerListTableRow::DefaultObject.FrontEndServerIndex.ArrayNum = 0;
  FDS_DevServerListTableRow::DefaultObject.FrontEndServerIndex.ArrayMax = 0;
  FDS_DevServerListTableRow::DefaultObject.GameServerIndex.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_DevServerListTableRow::DefaultObject.GameServerIndex.ArrayNum = 0;
  FDS_DevServerListTableRow::DefaultObject.GameServerIndex.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_DevServerListTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271b10

void __cdecl `dynamic_initializer_for_'FDS_DropBaseTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_DropBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271b30

void __cdecl `dynamic_initializer_for_'FDS_DropListTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_DropListTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271b50

void __cdecl `dynamic_initializer_for_'FDS_DropStuffSpawnTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_DropStuffSpawnTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271b70

void __cdecl `dynamic_initializer_for_'FDS_DropZoneTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_DropZoneTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271b90

void __cdecl `dynamic_initializer_for_'FDS_DungeonBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_DungeonBaseTableRow::DefaultObject.Version,L"");
  FDS_DungeonBaseTableRow::DefaultObject.DungeonType = None;
  FDS_DungeonBaseTableRow::DefaultObject.LevelGroup = 0;
  FDS_DungeonBaseTableRow::DefaultObject.ID_FirstRewardItemList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_DungeonBaseTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_DungeonBaseTableRow::DefaultObject.ID_Explanation = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_DungeonBaseTableRow::DefaultObject.ID_FirstRewardItemList.ArrayNum = 0;
  FDS_DungeonBaseTableRow::DefaultObject.ID_FirstRewardItemList.ArrayMax = 0;
  FDS_DungeonBaseTableRow::DefaultObject.FirstRewardItemValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_DungeonBaseTableRow::DefaultObject.FirstRewardItemValue.ArrayNum = 0;
  FDS_DungeonBaseTableRow::DefaultObject.FirstRewardItemValue.ArrayMax = 0;
  FDS_DungeonBaseTableRow::DefaultObject.ID_ClearRewardItemDPList = 0;
  FDS_DungeonBaseTableRow::DefaultObject.ID_BackGroundNpc = 0;
  FDS_DungeonBaseTableRow::DefaultObject.OpenPlayerLevel = 0;
  FDS_DungeonBaseTableRow::DefaultObject.ID_RequestQuest = 0;
  FDS_DungeonBaseTableRow::DefaultObject.IsUseDungeonManager = false;
  FDS_DungeonBaseTableRow::DefaultObject.ID_DungeonReward = 0;
  FDS_DungeonBaseTableRow::DefaultObject.ID_ZoneBase = 0;
  FDS_DungeonBaseTableRow::DefaultObject.ID_WarpLocation = 0;
  FDS_DungeonBaseTableRow::DefaultObject.ID_DungeonBuff.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_DungeonBaseTableRow::DefaultObject.ID_DungeonBuff.ArrayNum = 0;
  FDS_DungeonBaseTableRow::DefaultObject.ID_DungeonBuff.ArrayMax = 0;
  ::FString::FString(&FDS_DungeonBaseTableRow::DefaultObject.DungeonScript,L"");
  FDS_DungeonBaseTableRow::DefaultObject.DungeonScriptPart.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_DungeonBaseTableRow::DefaultObject.DungeonScriptPart.ArrayNum = 0;
  FDS_DungeonBaseTableRow::DefaultObject.DungeonScriptPart.ArrayMax = 0;
  FDS_DungeonBaseTableRow::DefaultObject.IsLearningBattleAi = false;
  FDS_DungeonBaseTableRow::DefaultObject.ID_ResurrectionWaiting = 0;
  FDS_DungeonBaseTableRow::DefaultObject.BlockingVolume.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_DungeonBaseTableRow::DefaultObject.BlockingVolume.ArrayNum = 0;
  FDS_DungeonBaseTableRow::DefaultObject.BlockingVolume.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_DungeonBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271c90

void __cdecl `dynamic_initializer_for_'FDS_DungeonLevelGroupTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_DungeonLevelGroupTableRow::DefaultObject.Version,L"");
  FDS_DungeonLevelGroupTableRow::DefaultObject.DisplayOrder = 0;
  FDS_DungeonLevelGroupTableRow::DefaultObject.isVisible = false;
  FDS_DungeonLevelGroupTableRow::DefaultObject.ID_ListIcon = 0;
  FDS_DungeonLevelGroupTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  atexit(`dynamic_atexit_destructor_for_'FDS_DungeonLevelGroupTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271cf0

void __cdecl `dynamic_initializer_for_'FDS_DungeonManagerRewardTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_DungeonManagerRewardTableRow::DefaultObject.Version,L"");
  FDS_DungeonManagerRewardTableRow::DefaultObject.ID_DungeonId = 0;
  FDS_DungeonManagerRewardTableRow::DefaultObject.DungeonScriptClearArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_DungeonManagerRewardTableRow::DefaultObject.DungeonScriptClearArray.ArrayNum = 0;
  FDS_DungeonManagerRewardTableRow::DefaultObject.DungeonScriptClearArray.ArrayMax = 0;
  FDS_DungeonManagerRewardTableRow::DefaultObject.ClearGrade = 0;
  FDS_DungeonManagerRewardTableRow::DefaultObject.MinScore = 0;
  FDS_DungeonManagerRewardTableRow::DefaultObject.MaxScore = 0;
  FDS_DungeonManagerRewardTableRow::DefaultObject.ID_DungeonReward = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_DungeonManagerRewardTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271d40

void __cdecl `dynamic_initializer_for_'FDS_DungeonManagerScoreTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_DungeonManagerScoreTableRow::DefaultObject.Version,L"");
  FDS_DungeonManagerScoreTableRow::DefaultObject.ID_DungeonBase = 0;
  FDS_DungeonManagerScoreTableRow::DefaultObject.DungeonScoreType = None;
  FDS_DungeonManagerScoreTableRow::DefaultObject.Value = 0;
  FDS_DungeonManagerScoreTableRow::DefaultObject.GetScore = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_DungeonManagerScoreTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271d90

void __cdecl `dynamic_initializer_for_'FDS_DungeonManagerScriptListTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_DungeonManagerScriptListTableRow::DefaultObject.Version,L"");
  FDS_DungeonManagerScriptListTableRow::DefaultObject.ID_DungeonBase = 0;
  ::FString::FString(&FDS_DungeonManagerScriptListTableRow::DefaultObject.ScriptFileName,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_DungeonManagerScriptListTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141271de0

void __cdecl `dynamic_initializer_for_'FDS_DungeonRewardTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_DungeonRewardTableRow::DefaultObject.Version,L"");
  FDS_DungeonRewardTableRow::DefaultObject.ID_StuffSpawn.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_DungeonRewardTableRow::DefaultObject.ID_StuffSpawn.ArrayNum = 0;
  FDS_DungeonRewardTableRow::DefaultObject.ID_StuffSpawn.ArrayMax = 0;
  FDS_DungeonRewardTableRow::DefaultObject.ID_StuffBase.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_DungeonRewardTableRow::DefaultObject.ID_StuffBase.ArrayNum = 0;
  FDS_DungeonRewardTableRow::DefaultObject.ID_StuffBase.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_DungeonRewardTableRow::DefaultObject__);
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 141271e30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 141271e50

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 141271e70

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 141271e90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 141271eb0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 141271ed0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 141271ef0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 141271f10

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 141271f30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 141271f50

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 141271f70

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 141271f90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 141271fb0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 141271fd0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 141271ff0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 141272010

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 141272030

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 141272050

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// AccelCalcMinute @ 14b911dc0

int __cdecl DS_CommonDataHelper::AccelCalcMinute(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1c23,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b911dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b911dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// AccelCalcMinutePerGold @ 14b911e10

int __cdecl DS_CommonDataHelper::AccelCalcMinutePerGold(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1c24,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b911e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b911e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// AccelCompleteMoneyType @ 14b911e60

int __cdecl DS_CommonDataHelper::AccelCompleteMoneyType(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1c26,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b911e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b911e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// AchievementNextListCount @ 14b911eb0

int __cdecl DS_CommonDataHelper::AchievementNextListCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x27d8,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b911eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b911eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// AddContinentalCost @ 14b911f00

int __cdecl DS_CommonDataHelper::AddContinentalCost(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1773,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b911f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b911f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// AddIslandCost @ 14b911f50

int __cdecl DS_CommonDataHelper::AddIslandCost(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1772,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b911f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b911f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// AddZoneCost @ 14b911fa0

int __cdecl DS_CommonDataHelper::AddZoneCost(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1771,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b911fca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b911fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// AiGymDungeonId @ 14b911ff0

int __cdecl DS_CommonDataHelper::AiGymDungeonId(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x59e3,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91201a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91202c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// AttackHeightMin @ 14b912040

double __cdecl DS_CommonDataHelper::AttackHeightMin(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x16,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// AutoBattlePointRange @ 14b9120a0

double __cdecl DS_CommonDataHelper::AutoBattlePointRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(3,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9120cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9120e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// AutoBattleZoneRange @ 14b912100

double __cdecl DS_CommonDataHelper::AutoBattleZoneRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(4,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91212c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// BattleStateRegenVigorTime @ 14b912160

float __cdecl DS_CommonDataHelper::BattleStateRegenVigorTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xd,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// BattleViewRange @ 14b9121c0

double __cdecl DS_CommonDataHelper::BattleViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(2,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9121ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// BubbleTalkCoolTimeBattleCheck @ 14b912220

int __cdecl DS_CommonDataHelper::BubbleTalkCoolTimeBattleCheck(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x177c,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91224a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// BubbleTalkCoolTimeNonBattleCheck @ 14b912270

int __cdecl DS_CommonDataHelper::BubbleTalkCoolTimeNonBattleCheck(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x177d,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91229a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9122ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// BubbleTalkOutputLimit @ 14b9122c0

int __cdecl DS_CommonDataHelper::BubbleTalkOutputLimit(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x177b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9122ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9122fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// BuffPotionUseWarning @ 14b912310

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::BuffPotionUseWarning
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x1b5d,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// CameraChangeLockModeRange @ 14b912530

double __cdecl DS_CommonDataHelper::CameraChangeLockModeRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x6979,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91255c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// CameraNotifiyReturnTime @ 14b912590

float __cdecl DS_CommonDataHelper::CameraNotifiyReturnTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x65,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// CampGuideActorOpacity @ 14b9125f0

float __cdecl DS_CommonDataHelper::CampGuideActorOpacity(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x9c45,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// CharDeckNameMax @ 14b912670

int __cdecl DS_CommonDataHelper::CharDeckNameMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x900,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91269a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9126ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CharDeckNameMin @ 14b9126c0

int __cdecl DS_CommonDataHelper::CharDeckNameMin(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x8ff,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9126ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9126fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CharHpLackPer @ 14b912710

float __cdecl DS_CommonDataHelper::CharHpLackPer(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xbf69,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// CharViewerInitialZoomInOutSpeed @ 14b912770

float __cdecl DS_CommonDataHelper::CharViewerInitialZoomInOutSpeed(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x401,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// CharViewerRotateScale @ 14b9127d0

float __cdecl DS_CommonDataHelper::CharViewerRotateScale(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x3ff,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// CharViewerZoomInOutAcceleration @ 14b912830

float __cdecl DS_CommonDataHelper::CharViewerZoomInOutAcceleration(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x402,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// CharWeightPenaltyGroup @ 14b912890

int __cdecl DS_CommonDataHelper::CharWeightPenaltyGroup(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x9c5,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9128ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9128cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CharacterChangeCastingTime @ 14b9128e0

float __cdecl DS_CommonDataHelper::CharacterChangeCastingTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x908,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// CharacterLevelExpGaugeTime @ 14b912940

float __cdecl DS_CommonDataHelper::CharacterLevelExpGaugeTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x911,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// CharacterNickMaxLength @ 14b9129a0

int __cdecl DS_CommonDataHelper::CharacterNickMaxLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x3eb,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9129ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9129dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CharacterNickMinLength @ 14b9129f0

int __cdecl DS_CommonDataHelper::CharacterNickMinLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x3ea,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912a1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CharacterQuickChangerMax @ 14b912a40

int __cdecl DS_CommonDataHelper::CharacterQuickChangerMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x907,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CharacterViewerFadeInDuration @ 14b912a90

float __cdecl DS_CommonDataHelper::CharacterViewerFadeInDuration(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x3f3,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// CharacterViewerFadeOutDuration @ 14b912af0

float __cdecl DS_CommonDataHelper::CharacterViewerFadeOutDuration(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x3f4,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// ChattingCloseTime @ 14b912b50

float __cdecl DS_CommonDataHelper::ChattingCloseTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x1389,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// ChattingCustomTabCount @ 14b912bb0

int __cdecl DS_CommonDataHelper::ChattingCustomTabCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1391,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ChattingFloodingBanDurationSec @ 14b912c00

float __cdecl DS_CommonDataHelper::ChattingFloodingBanDurationSec(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x138f,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// ChattingFloodingDetectionCount @ 14b912c60

int __cdecl DS_CommonDataHelper::ChattingFloodingDetectionCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x138e,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912c8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ChattingFloodingDetectionTimeSec @ 14b912cb0

float __cdecl DS_CommonDataHelper::ChattingFloodingDetectionTimeSec(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x138d,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// ChattingMaxCount @ 14b912d10

int __cdecl DS_CommonDataHelper::ChattingMaxCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x138a,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ChattingMaxFavoriteCount @ 14b912d60

int __cdecl DS_CommonDataHelper::ChattingMaxFavoriteCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1390,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ChattingMaxGroupJoinCount @ 14b912db0

int __cdecl DS_CommonDataHelper::ChattingMaxGroupJoinCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x138b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912dda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ChattingMaxGroupMemberCount @ 14b912e00

int __cdecl DS_CommonDataHelper::ChattingMaxGroupMemberCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x138c,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ChattingMaxGroupPlayerCount @ 14b912e50

int __cdecl DS_CommonDataHelper::ChattingMaxGroupPlayerCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1395,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912e7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ChattingMaxMacroCount @ 14b912ea0

int __cdecl DS_CommonDataHelper::ChattingMaxMacroCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1396,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ChattingMaxWhisperListSaveCount @ 14b912ef0

int __cdecl DS_CommonDataHelper::ChattingMaxWhisperListSaveCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1392,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ChattingMaxWhisperTargetSaveCount @ 14b912f40

int __cdecl DS_CommonDataHelper::ChattingMaxWhisperTargetSaveCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1393,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b912f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b912f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ChattingVoiceToTextLimitTimeSec @ 14b912f90

float __cdecl DS_CommonDataHelper::ChattingVoiceToTextLimitTimeSec(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x1394,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// ClimbingSpeed @ 14b912ff0

double __cdecl DS_CommonDataHelper::ClimbingSpeed(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xcb21,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91301c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// ComboDeckMaxCnt @ 14b913050

int __cdecl DS_CommonDataHelper::ComboDeckMaxCnt(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x8fd,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91307a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CompleteNavigationDistance @ 14b9130a0

int __cdecl DS_CommonDataHelper::CompleteNavigationDistance(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x273c,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9130ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9130dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ConstructionMaxDistance @ 14b9130f0

int __cdecl DS_CommonDataHelper::ConstructionMaxDistance(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xa29,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91311a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91312c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ConstructionTransitionTime @ 14b913140

float __cdecl DS_CommonDataHelper::ConstructionTransitionTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xa2a,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// ContentsBtnPressClearTime @ 14b9131a0

float __cdecl DS_CommonDataHelper::ContentsBtnPressClearTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x93a,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// ContentsBtnPressTime @ 14b913200

float __cdecl DS_CommonDataHelper::ContentsBtnPressTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x939,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// CookingCostTicketType @ 14b913260

int __cdecl DS_CommonDataHelper::CookingCostTicketType(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xb79a,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91328a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91329c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CookingCostTicketValue @ 14b9132b0

int __cdecl DS_CommonDataHelper::CookingCostTicketValue(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xb79b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9132da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9132ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CookingShareTime @ 14b913300

float __cdecl DS_CommonDataHelper::CookingShareTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xb799,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// CriminalPointTotalMax @ 14b913360

int __cdecl DS_CommonDataHelper::CriminalPointTotalMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1f74,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91338a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91339c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CriminalPointTotalMin @ 14b9133b0

int __cdecl DS_CommonDataHelper::CriminalPointTotalMin(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1f73,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9133da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9133ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// CrosshairApplyRange @ 14b913400

double __cdecl DS_CommonDataHelper::CrosshairApplyRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x61a9,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// DailyQuestComplete @ 14b913460

int __cdecl DS_CommonDataHelper::DailyQuestComplete(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x272c,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91348a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// DailyQuestOngoing @ 14b9134b0

int __cdecl DS_CommonDataHelper::DailyQuestOngoing(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x272b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9134da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9134ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// DailyQuestSuggestQuest @ 14b913500

int __cdecl DS_CommonDataHelper::DailyQuestSuggestQuest(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x272a,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91352a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91353c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// DailyQuestSuggestZone @ 14b913550

int __cdecl DS_CommonDataHelper::DailyQuestSuggestZone(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2729,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91357a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91358c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// DamageHitTickTime @ 14b9135a0

float __cdecl DS_CommonDataHelper::DamageHitTickTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xc355,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// DeathUiDelayTime @ 14b913600

float __cdecl DS_CommonDataHelper::DeathUiDelayTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x7fe,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// DeckDefaultIcon @ 14b913660

int __cdecl DS_CommonDataHelper::DeckDefaultIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x8fe,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91368a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// DefaultBattleStateTime @ 14b9136b0

float __cdecl DS_CommonDataHelper::DefaultBattleStateTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xb,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// DefaultBroadCastRange @ 14b913710

double __cdecl DS_CommonDataHelper::DefaultBroadCastRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(1,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91373c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// DefaultPkModeType @ 14b913770

int __cdecl DS_CommonDataHelper::DefaultPkModeType(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1f7d,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91379a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9137ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// DetectionNotiTime @ 14b9137c0

float __cdecl DS_CommonDataHelper::DetectionNotiTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xabe2,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// DetectionTotalMaxCount @ 14b913820

int __cdecl DS_CommonDataHelper::DetectionTotalMaxCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xabe1,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91384a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91385c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// DismantleMaxCount @ 14b913870

int __cdecl DS_CommonDataHelper::DismantleMaxCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1b5f,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91389a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9138ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// DiveStaminaResetTime @ 14b9139c0

float __cdecl DS_CommonDataHelper::DiveStaminaResetTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xafcb,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// DropItemMessageCount @ 14b913a20

int __cdecl DS_CommonDataHelper::DropItemMessageCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x5209,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// EnemyDamageFontPrintOutSpeed @ 14b913a70

float __cdecl DS_CommonDataHelper::EnemyDamageFontPrintOutSpeed(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xc352,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// EnemyDamageFontPrintOutTime @ 14b913ad0

float __cdecl DS_CommonDataHelper::EnemyDamageFontPrintOutTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xc354,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// EnhanceMatsMaxCnt @ 14b913b30

int __cdecl DS_CommonDataHelper::EnhanceMatsMaxCnt(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7532,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// EnhanceMatsMaxType @ 14b913b80

int __cdecl DS_CommonDataHelper::EnhanceMatsMaxType(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7531,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// FallHigherDamageApplicationTime @ 14b913bd0

int __cdecl DS_CommonDataHelper::FallHigherDamageApplicationTime(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xb3b6,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913bfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// FallHigherDamageHeight @ 14b913c20

float __cdecl DS_CommonDataHelper::FallHigherDamageHeight(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xb3b3,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// FallHigherDamageRate @ 14b913c80

int __cdecl DS_CommonDataHelper::FallHigherDamageRate(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xb3b4,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// FallHigherLandEndTime @ 14b913cd0

float __cdecl DS_CommonDataHelper::FallHigherLandEndTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x20,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// FallHigherTime @ 14b913d30

float __cdecl DS_CommonDataHelper::FallHigherTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x1f,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// FluidSurfaceRate @ 14b913d90

int __cdecl DS_CommonDataHelper::FluidSurfaceRate(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xafcd,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ForceAttackListMax @ 14b913de0

int __cdecl DS_CommonDataHelper::ForceAttackListMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1f4b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GameTimeDayGridCount @ 14b913e30

int __cdecl DS_CommonDataHelper::GameTimeDayGridCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xee49,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GameTimeNightGridCount @ 14b913e80

int __cdecl DS_CommonDataHelper::GameTimeNightGridCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xee4a,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913eaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GatherOutViewRange @ 14b913ed0

double __cdecl DS_CommonDataHelper::GatherOutViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x426c,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// GatherToolAxe @ 14b913f30

int __cdecl DS_CommonDataHelper::GatherToolAxe(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x55f3,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GatherToolHoe @ 14b913f80

int __cdecl DS_CommonDataHelper::GatherToolHoe(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x55f2,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b913fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GatherToolPickax @ 14b913fd0

int __cdecl DS_CommonDataHelper::GatherToolPickax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x55f1,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b913ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91400c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GatherViewRange @ 14b914020

double __cdecl DS_CommonDataHelper::GatherViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x426b,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91404c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b914060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// GiftBasketDefaultSlotCount @ 14b91a8e0

int __cdecl DS_CommonDataHelper::GiftBasketDefaultSlotCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1ceb,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91a90a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91a91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GiftBasketMaxSlotCount @ 14b91a930

int __cdecl DS_CommonDataHelper::GiftBasketMaxSlotCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1cec,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91a95a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GoldUsePopupResetTime @ 14b91a980

int __cdecl DS_CommonDataHelper::GoldUsePopupResetTime(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1c25,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91a9aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91a9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GuildNameMaxLength @ 14b91a9d0

int __cdecl DS_CommonDataHelper::GuildNameMaxLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2afa,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91a9fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91aa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GuildNameMinLength @ 14b91aa20

int __cdecl DS_CommonDataHelper::GuildNameMinLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2af9,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91aa4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91aa5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// HandlingActivityRangeReduction @ 14b91aa70

int __cdecl DS_CommonDataHelper::HandlingActivityRangeReduction(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xc73d,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91aa9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91aaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// HandlingDistanceThreshold @ 14b91aac0

float __cdecl DS_CommonDataHelper::HandlingDistanceThreshold(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xc73b,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// HandlingOutOfBoundsDespawnDelay @ 14b91ab20

float __cdecl DS_CommonDataHelper::HandlingOutOfBoundsDespawnDelay(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xc73a,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// HandlingOutOfBoundsWarningPeriod @ 14b91ab80

int __cdecl DS_CommonDataHelper::HandlingOutOfBoundsWarningPeriod(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xc73c,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91abaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91abbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// HealHpAggroPointScale @ 14b91abd0

int __cdecl DS_CommonDataHelper::HealHpAggroPointScale(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x962,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91abfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91ac0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// HealHpCheckRange @ 14b91ac20

double __cdecl DS_CommonDataHelper::HealHpCheckRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x961,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91ac4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91ac60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// HistoryBackStackCount @ 14b91ac80

int __cdecl DS_CommonDataHelper::HistoryBackStackCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x36b1,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91acaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91acbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// HpAutoUseCondition @ 14b91acd0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::HpAutoUseCondition
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x1b5b,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// HpPenaltyChangeCount @ 14b91aef0

int __cdecl DS_CommonDataHelper::HpPenaltyChangeCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xafce,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91af1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91af2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// HudIndicatorShowRange @ 14b91af40

double __cdecl DS_CommonDataHelper::HudIndicatorShowRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x14051,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91af6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91af80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// HudIndicatorShowTime @ 14b91afa0

float __cdecl DS_CommonDataHelper::HudIndicatorShowTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x14052,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// IdDeathTypeDrownIcon @ 14b91c680

int __cdecl DS_CommonDataHelper::IdDeathTypeDrownIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x81a,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91c6aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91c6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdDeathTypeFallIcon @ 14b91c6d0

int __cdecl DS_CommonDataHelper::IdDeathTypeFallIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x819,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91c6fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91c70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdDeathTypeNpcIcon @ 14b91c720

int __cdecl DS_CommonDataHelper::IdDeathTypeNpcIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x817,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91c74a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91c75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdDeathTypePlayerIcon @ 14b91c770

int __cdecl DS_CommonDataHelper::IdDeathTypePlayerIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x818,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91c79a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91c7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdDeathTypeSystemIcon @ 14b91c7c0

int __cdecl DS_CommonDataHelper::IdDeathTypeSystemIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x81c,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91c7ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91c7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdDeathTypeTriggerIcon @ 14b91c810

int __cdecl DS_CommonDataHelper::IdDeathTypeTriggerIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x81b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91c83a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91c84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdDefaultZone @ 14b91c860

uint __cdecl DS_CommonDataHelper::IdDefaultZone(void)

{
  uint uVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x3e81,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91c88a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91c89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _wtoi(L"");
  return uVar1;
}

// IdExpIcon @ 14b91c8b0

int __cdecl DS_CommonDataHelper::IdExpIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xfa3,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91c8da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91c8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdInventoryExpansionMoneyInfo @ 14b91c900

int __cdecl DS_CommonDataHelper::IdInventoryExpansionMoneyInfo(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x4e22,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91c92a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91c93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdLevelupEffect01 @ 14b91c950

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::IdLevelupEffect01
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x7dd,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// IdLevelupEffect02 @ 14b91cb70

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::IdLevelupEffect02
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x7de,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// IdLevelupEffect03 @ 14b91cd90

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::IdLevelupEffect03
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x7df,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// IdPkUnusableBuff @ 14b91cfb0

int __cdecl DS_CommonDataHelper::IdPkUnusableBuff(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1f41,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91cfda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91cfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdResurrectionEffect @ 14b91d000

int __cdecl DS_CommonDataHelper::IdResurrectionEffect(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x80d,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d02a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdResurrectionSkill @ 14b91d050

int __cdecl DS_CommonDataHelper::IdResurrectionSkill(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x803,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d07a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdReturnWarpLocation @ 14b91d0a0

int __cdecl DS_CommonDataHelper::IdReturnWarpLocation(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x82a,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d0ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdWareHouseExpansionMoneyInfo @ 14b91d0f0

int __cdecl DS_CommonDataHelper::IdWareHouseExpansionMoneyInfo(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x4e23,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d11a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdWarpDeviceIconActivation @ 14b91d140

int __cdecl DS_CommonDataHelper::IdWarpDeviceIconActivation(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x869,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d16a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IdWarpDeviceIconDeactivation @ 14b91d190

int __cdecl DS_CommonDataHelper::IdWarpDeviceIconDeactivation(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x86a,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d1ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IgnoreGravitySwimStartHeight @ 14b91d1e0

int __cdecl DS_CommonDataHelper::IgnoreGravitySwimStartHeight(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xafcf,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d20a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ImpulseStrength @ 14b91d230

float __cdecl DS_CommonDataHelper::ImpulseStrength(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xc743,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// IndoormapDisplayRange @ 14b91d290

int __cdecl DS_CommonDataHelper::IndoormapDisplayRange(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7925,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d2ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IndoormapZoomRatioDefault @ 14b91d2e0

int __cdecl DS_CommonDataHelper::IndoormapZoomRatioDefault(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7927,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d30a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// IndoormapZoomRatioRange @ 14b91d330

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::IndoormapZoomRatioRange
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x7926,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// IndoormapZoomStepSizes @ 14b91d550

int __cdecl DS_CommonDataHelper::IndoormapZoomStepSizes(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7928,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d57a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// InstanceQuestAlertMessagetime @ 14b91d5a0

int __cdecl DS_CommonDataHelper::InstanceQuestAlertMessagetime(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2737,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d5ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// InstanceQuestGracetime @ 14b91d5f0

int __cdecl DS_CommonDataHelper::InstanceQuestGracetime(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2736,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d61a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// InstanceQuestMaxAcceptCount @ 14b91d640

int __cdecl DS_CommonDataHelper::InstanceQuestMaxAcceptCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2735,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d66a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// InteractionOpenBoxEndAnimTime @ 14b91d690

float __cdecl DS_CommonDataHelper::InteractionOpenBoxEndAnimTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x81e,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// InteractionPrepareRange @ 14b91d6f0

double __cdecl DS_CommonDataHelper::InteractionPrepareRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x6d61,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// InteractionPromptRange @ 14b91d750

double __cdecl DS_CommonDataHelper::InteractionPromptRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x6d62,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// InteractionPromptRemainingTime @ 14b91d7b0

int __cdecl DS_CommonDataHelper::InteractionPromptRemainingTime(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x6d63,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d7da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// InventoryRandomBoxCapaLimit @ 14b91d800

int __cdecl DS_CommonDataHelper::InventoryRandomBoxCapaLimit(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x4e21,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91d82a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91d83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemAccelMaterialMin @ 14b91dc70

int __cdecl DS_CommonDataHelper::ItemAccelMaterialMin(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1c22,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91dc9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91dcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemCraftSlotDefaultCount @ 14b91dcc0

int __cdecl DS_CommonDataHelper::ItemCraftSlotDefaultCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1bbd,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91dcea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91dcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemCraftSlotMaxCount @ 14b91dd10

int __cdecl DS_CommonDataHelper::ItemCraftSlotMaxCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1bbe,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91dd3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91dd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemDecompositionSlotCount @ 14b91dd60

int __cdecl DS_CommonDataHelper::ItemDecompositionSlotCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1b59,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91dd8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91dd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemDestructionSlotCount @ 14b91ddb0

int __cdecl DS_CommonDataHelper::ItemDestructionSlotCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1b5a,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91ddda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91ddec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemDurabilityPenaltyGroup @ 14b91de00

int __cdecl DS_CommonDataHelper::ItemDurabilityPenaltyGroup(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1d4f,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91de2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91de3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemEnhanceMaxStep @ 14b91de50

int __cdecl DS_CommonDataHelper::ItemEnhanceMaxStep(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1b5e,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91de7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91de8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemFusionSlotDefaultCount @ 14b91dea0

int __cdecl DS_CommonDataHelper::ItemFusionSlotDefaultCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1b60,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91deca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91dedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemFusionSlotMaxCount @ 14b91def0

int __cdecl DS_CommonDataHelper::ItemFusionSlotMaxCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1b61,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91df1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91df2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemSellGarbageRiffraff @ 14b91df40

int __cdecl DS_CommonDataHelper::ItemSellGarbageRiffraff(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x232b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91df6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91df7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemValueMax @ 14b91df90

int __cdecl DS_CommonDataHelper::ItemValueMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1bc0,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91dfba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91dfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ItemWeightMaxValue @ 14b91dfe0

int __cdecl DS_CommonDataHelper::ItemWeightMaxValue(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1bbf,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e00a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// LevelUpMaterialResistMax @ 14b91e030

int __cdecl DS_CommonDataHelper::LevelUpMaterialResistMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x91b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e05a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MailContentMaxLength @ 14b91e080

int __cdecl DS_CommonDataHelper::MailContentMaxLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x84d3,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e0aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MailMultiRecipientLimit @ 14b91e0d0

int __cdecl DS_CommonDataHelper::MailMultiRecipientLimit(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x84d1,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e0fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MailSystemStorageLimit @ 14b91e120

int __cdecl DS_CommonDataHelper::MailSystemStorageLimit(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x84d4,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e14a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MailTitleMaxLength @ 14b91e170

int __cdecl DS_CommonDataHelper::MailTitleMaxLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x84d2,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e19a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MapIndexEdgeTolerance @ 14b91e1c0

int __cdecl DS_CommonDataHelper::MapIndexEdgeTolerance(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7932,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MapIndexHeightDisplayRange @ 14b91e210

int __cdecl DS_CommonDataHelper::MapIndexHeightDisplayRange(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x791d,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e23a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MapIndexHoverScaleRatio @ 14b91e260

float __cdecl DS_CommonDataHelper::MapIndexHoverScaleRatio(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x7933,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// MapLinkMarkerMaxCount @ 14b91e2c0

int __cdecl DS_CommonDataHelper::MapLinkMarkerMaxCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x791f,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e2ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MapMarkerMaxCount @ 14b91e310

int __cdecl DS_CommonDataHelper::MapMarkerMaxCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x791e,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e33a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MapMarkerNotiTextCount @ 14b91e360

int __cdecl DS_CommonDataHelper::MapMarkerNotiTextCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7920,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e38a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MapNameDelay @ 14b91e3b0

float __cdecl DS_CommonDataHelper::MapNameDelay(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x821,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// MapNameHolding @ 14b91e410

float __cdecl DS_CommonDataHelper::MapNameHolding(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x822,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// MaxGemSocket @ 14b91e470

int __cdecl DS_CommonDataHelper::MaxGemSocket(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7533,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e49a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MaxMountMaintainDistance @ 14b91e4c0

int __cdecl DS_CommonDataHelper::MaxMountMaintainDistance(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb8a,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e4ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MaxPlayerGrade @ 14b91e510

int __cdecl DS_CommonDataHelper::MaxPlayerGrade(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x4651,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91e53a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91e54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MinCostDiveStamina @ 14b91e560

float __cdecl DS_CommonDataHelper::MinCostDiveStamina(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xafca,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// MinCostFlyStamina @ 14b91e5c0

float __cdecl DS_CommonDataHelper::MinCostFlyStamina(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xb3b2,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// MinimapDefaultScale @ 14b91e620

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::MinimapDefaultScale
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  undefined1 local_res10 [8];
  float local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x792c,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    dVar10 = _wtof((wchar_t *)_Str.Data);
    local_68[0] = (float)dVar10;
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(float *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// MinimapDisplayRange @ 14b91e850

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::MinimapDisplayRange
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x7919,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// MinimapZoomRatioDefault @ 14b91ea70

int __cdecl DS_CommonDataHelper::MinimapZoomRatioDefault(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x791b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91ea9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91eaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MinimapZoomRatioRange @ 14b91eac0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::MinimapZoomRatioRange
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x791a,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// MinimapZoomStep @ 14b91ece0

int __cdecl DS_CommonDataHelper::MinimapZoomStep(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x792d,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91ed0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91ed1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MinimapZoomStepSizes @ 14b91ed30

int __cdecl DS_CommonDataHelper::MinimapZoomStepSizes(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x791c,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91ed5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91ed6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountDashRotationTime @ 14b91ed80

float __cdecl DS_CommonDataHelper::MountDashRotationTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xbb9b,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// MountDissolveTime @ 14b91ede0

float __cdecl DS_CommonDataHelper::MountDissolveTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xbb9a,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// MountFoundItemMaxCount @ 14b91ee40

int __cdecl DS_CommonDataHelper::MountFoundItemMaxCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb98,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91ee6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91ee7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountFoundItemMinCount @ 14b91ee90

int __cdecl DS_CommonDataHelper::MountFoundItemMinCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb97,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91eeba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91eecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountFoundItemRate @ 14b91eee0

int __cdecl DS_CommonDataHelper::MountFoundItemRate(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb96,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91ef0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91ef1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountLostListDuration @ 14b91ef30

int __cdecl DS_CommonDataHelper::MountLostListDuration(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb93,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91ef5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91ef6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountLostListMax @ 14b91ef80

int __cdecl DS_CommonDataHelper::MountLostListMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb92,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91efaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91efbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountLostListRate @ 14b91efd0

int __cdecl DS_CommonDataHelper::MountLostListRate(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb95,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91effa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountLostReclaimMoney @ 14b91f020

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::MountLostReclaimMoney
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0xbb94,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// MountNickMaxLength @ 14b91f240

int __cdecl DS_CommonDataHelper::MountNickMaxLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb91,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f26a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountNickMinLength @ 14b91f290

int __cdecl DS_CommonDataHelper::MountNickMinLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb90,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f2ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountRepairMaxRateCabin @ 14b91f2e0

int __cdecl DS_CommonDataHelper::MountRepairMaxRateCabin(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb8e,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f30a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountRepairMaxRateCamp @ 14b91f330

int __cdecl DS_CommonDataHelper::MountRepairMaxRateCamp(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb8f,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountRepairMaxRateVillage @ 14b91f380

int __cdecl DS_CommonDataHelper::MountRepairMaxRateVillage(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb8d,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f3aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountStepChangeHeight @ 14b91f3d0

int __cdecl DS_CommonDataHelper::MountStepChangeHeight(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb99,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f3fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MountViewerRotateScale @ 14b91f420

float __cdecl DS_CommonDataHelper::MountViewerRotateScale(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xbb81,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// MountWeightPenaltyGroup @ 14b91f480

int __cdecl DS_CommonDataHelper::MountWeightPenaltyGroup(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x9c6,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f4aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MouseCrosshairEnableRange @ 14b91f4d0

double __cdecl DS_CommonDataHelper::MouseCrosshairEnableRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x6591,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// MoveDisMountOffsetYaw @ 14b91f530

int __cdecl DS_CommonDataHelper::MoveDisMountOffsetYaw(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb8b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f55a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// MovingDirectionDeleteTime @ 14b91f580

float __cdecl DS_CommonDataHelper::MovingDirectionDeleteTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x273f,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// MpAutoUseCondition @ 14b91f5e0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::MpAutoUseCondition
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x1b5c,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// MyDamageFontPrintOutSpeed @ 14b91f800

float __cdecl DS_CommonDataHelper::MyDamageFontPrintOutSpeed(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xc351,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// MyDamageFontPrintOutTime @ 14b91f860

float __cdecl DS_CommonDataHelper::MyDamageFontPrintOutTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xc353,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// NoCriminalPointMinPkCriminalGrade @ 14b91f8c0

int __cdecl DS_CommonDataHelper::NoCriminalPointMinPkCriminalGrade(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1f69,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f8ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// NpcInitBuff @ 14b91f910

int __cdecl DS_CommonDataHelper::NpcInitBuff(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x4275,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f93a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// NpcOutViewRange @ 14b91f960

double __cdecl DS_CommonDataHelper::NpcOutViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x426a,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// NpcVerificationDistance @ 14b91f9c0

int __cdecl DS_CommonDataHelper::NpcVerificationDistance(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x4274,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91f9ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91f9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// NpcVerificationSquared @ 14b91fa10

int __cdecl DS_CommonDataHelper::NpcVerificationSquared(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x426f,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fa3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fa4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// NpcViewRange @ 14b91fa60

double __cdecl DS_CommonDataHelper::NpcViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x4269,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91faa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// OpenBoxMaxCount @ 14b91fac0

int __cdecl DS_CommonDataHelper::OpenBoxMaxCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1b62,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91faea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// OpenLocksTotalMaxCount @ 14b91fb10

int __cdecl DS_CommonDataHelper::OpenLocksTotalMaxCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xac45,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fb3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PadCursorHoverSlowdown @ 14b91fb60

float __cdecl DS_CommonDataHelper::PadCursorHoverSlowdown(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(33000,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// PartyAutoMovementStopRange @ 14b91fbc0

int __cdecl DS_CommonDataHelper::PartyAutoMovementStopRange(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbbd,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fbea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PartyEffectiveRange @ 14b91fc10

int __cdecl DS_CommonDataHelper::PartyEffectiveRange(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbbc,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fc3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PartyFinderListCount @ 14b91fc60

int __cdecl DS_CommonDataHelper::PartyFinderListCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbc0,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fc8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PartyIntroductionMaxLength @ 14b91fcb0

int __cdecl DS_CommonDataHelper::PartyIntroductionMaxLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbba,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fcda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PartyKickMemberListCount @ 14b91fd00

int __cdecl DS_CommonDataHelper::PartyKickMemberListCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbbb,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fd2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PartyMemberMax @ 14b91fd50

int __cdecl DS_CommonDataHelper::PartyMemberMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb9,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fd7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PartyReconnectWaitingTime @ 14b91fda0

int __cdecl DS_CommonDataHelper::PartyReconnectWaitingTime(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbc1,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fdca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PartySyncInterval @ 14b91fdf0

int __cdecl DS_CommonDataHelper::PartySyncInterval(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbbf,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fe1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fe2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PcAttackListMax @ 14b91fe40

int __cdecl DS_CommonDataHelper::PcAttackListMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1f55,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91fe6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fe7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PenaltyPlayerExpMax @ 14b91fe90

int __cdecl DS_CommonDataHelper::PenaltyPlayerExpMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x4655,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91feba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91fecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PenaltyPlayerExpPlayerGradeGap @ 14b91fee0

int __cdecl DS_CommonDataHelper::PenaltyPlayerExpPlayerGradeGap(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x4653,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91ff0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91ff1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PenaltyPlayerExpRate @ 14b91ff30

int __cdecl DS_CommonDataHelper::PenaltyPlayerExpRate(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x4654,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b91ff5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b91ff6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PhasingTimeDirection @ 14b91ff80

float __cdecl DS_CommonDataHelper::PhasingTimeDirection(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x7d01,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// PkCriminalPointNpcLevelGap @ 14b91ffe0

int __cdecl DS_CommonDataHelper::PkCriminalPointNpcLevelGap(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1f60,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92000a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PkHistoryListMax @ 14b920030

int __cdecl DS_CommonDataHelper::PkHistoryListMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1f5f,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92005a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92006c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PlayerGradeupBroadcastingLv @ 14b920080

long64 __cdecl DS_CommonDataHelper::PlayerGradeupBroadcastingLv(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x4652,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return (longlong)iVar1;
  }
  iVar1 = _wtoi(L"");
  return (longlong)iVar1;
}

// PlayerSkillCampInstallationPoint @ 14b9200e0

float __cdecl DS_CommonDataHelper::PlayerSkillCampInstallationPoint(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x9c44,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// PlayerSkillCampSitHeightValue @ 14b920140

float __cdecl DS_CommonDataHelper::PlayerSkillCampSitHeightValue(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x9c43,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// PlayerSkillGaugeRate01 @ 14b9201a0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::PlayerSkillGaugeRate01
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0xa411,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// PlayerSkillGaugeRate02 @ 14b9203c0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::PlayerSkillGaugeRate02
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0xa412,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// PlayerSkillGaugeRate03 @ 14b9205e0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::PlayerSkillGaugeRate03
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0xa413,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// PlayerSkillItemLevelGapDecayFactor @ 14b920800

int __cdecl DS_CommonDataHelper::PlayerSkillItemLevelGapDecayFactor(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1d4d,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92082a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PlayerSkillItemLevelGapDecayFactorMax @ 14b920850

int __cdecl DS_CommonDataHelper::PlayerSkillItemLevelGapDecayFactorMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1d4e,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92087a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PlayerSkillLingNpcMaxList @ 14b9208a0

int __cdecl DS_CommonDataHelper::PlayerSkillLingNpcMaxList(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xa029,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9208ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9208dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// PlayerSkillRotateScale @ 14b9208f0

float __cdecl DS_CommonDataHelper::PlayerSkillRotateScale(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x4656,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// PlayerSkillScalingValue01 @ 14b920950

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::PlayerSkillScalingValue01
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  undefined1 local_res10 [8];
  float local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0xa7f9,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    dVar10 = _wtof((wchar_t *)_Str.Data);
    local_68[0] = (float)dVar10;
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(float *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// PlayerSkillScalingValue02 @ 14b920b80

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::PlayerSkillScalingValue02
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  undefined1 local_res10 [8];
  float local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0xa7fa,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    dVar10 = _wtof((wchar_t *)_Str.Data);
    local_68[0] = (float)dVar10;
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(float *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// PlayerSkillScalingValue03 @ 14b920db0

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::PlayerSkillScalingValue03
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  undefined1 local_res10 [8];
  float local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0xa7fb,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    dVar10 = _wtof((wchar_t *)_Str.Data);
    local_68[0] = (float)dVar10;
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(float *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// PortalLifeTime @ 14b920fe0

float __cdecl DS_CommonDataHelper::PortalLifeTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xea62,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// PortalOutViewRange @ 14b921040

double __cdecl DS_CommonDataHelper::PortalOutViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x4273,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92106c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b921080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// PortalSearchRange @ 14b9210a0

double __cdecl DS_CommonDataHelper::PortalSearchRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xea61,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9210cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9210e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// PortalViewRange @ 14b921100

double __cdecl DS_CommonDataHelper::PortalViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x4272,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92112c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b921140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// PowerJumpDirDegreeOffset @ 14b921160

float __cdecl DS_CommonDataHelper::PowerJumpDirDegreeOffset(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x2b,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// PowerJumpPitchMax @ 14b9211c0

float __cdecl DS_CommonDataHelper::PowerJumpPitchMax(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x2a,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// PowerJumpPitchMin @ 14b921220

float __cdecl DS_CommonDataHelper::PowerJumpPitchMin(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x29,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// QuestAcceptIcon @ 14b921280

int __cdecl DS_CommonDataHelper::QuestAcceptIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2711,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9212aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9212bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestAcceptMaxCount @ 14b9212d0

int __cdecl DS_CommonDataHelper::QuestAcceptMaxCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x271b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9212fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestAcceptMenuIcon @ 14b921320

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::QuestAcceptMenuIcon
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x2716,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// QuestCompleteIcon @ 14b921540

int __cdecl DS_CommonDataHelper::QuestCompleteIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2714,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92156a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92157c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestCompleteMenuIcon @ 14b921590

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::QuestCompleteMenuIcon
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x2719,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// QuestDifficultyA @ 14b9217b0

int __cdecl DS_CommonDataHelper::QuestDifficultyA(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x271e,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9217da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9217ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestDifficultyB @ 14b921800

int __cdecl DS_CommonDataHelper::QuestDifficultyB(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x271f,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92182a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92183c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestDifficultyC @ 14b921850

int __cdecl DS_CommonDataHelper::QuestDifficultyC(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2720,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92187a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92188c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestDifficultyS @ 14b9218a0

int __cdecl DS_CommonDataHelper::QuestDifficultyS(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x271d,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9218ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9218dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestDifficultySs @ 14b9218f0

int __cdecl DS_CommonDataHelper::QuestDifficultySs(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x271c,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92191a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92192c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestEffectOutViewRange @ 14b921940

double __cdecl DS_CommonDataHelper::QuestEffectOutViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x2731,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92196c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b921980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// QuestEffectViewRange @ 14b9219a0

double __cdecl DS_CommonDataHelper::QuestEffectViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x2730,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9219cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9219e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// QuestNavigationInvisibleRange @ 14b921a00

int __cdecl DS_CommonDataHelper::QuestNavigationInvisibleRange(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2732,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b921a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b921a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestNotAcceptIcon @ 14b921a50

int __cdecl DS_CommonDataHelper::QuestNotAcceptIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2712,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b921a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b921a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestNotAcceptMenuIcon @ 14b921aa0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::QuestNotAcceptMenuIcon
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x2717,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// QuestObjectiveIcon @ 14b921cc0

int __cdecl DS_CommonDataHelper::QuestObjectiveIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2715,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b921cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b921cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestObjectiveMenuIcon @ 14b921d10

int __cdecl DS_CommonDataHelper::QuestObjectiveMenuIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x271a,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b921d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b921d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestOngoingIcon @ 14b921d60

int __cdecl DS_CommonDataHelper::QuestOngoingIcon(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2713,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b921d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b921d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestOngoingMenuIcon @ 14b921db0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::QuestOngoingMenuIcon
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x2718,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// QuestRepeatTimeScheduler @ 14b921fd0

int __cdecl DS_CommonDataHelper::QuestRepeatTimeScheduler(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2739,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b921ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92200c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestTypeIconDaily @ 14b922020

int __cdecl DS_CommonDataHelper::QuestTypeIconDaily(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2724,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92204a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92205c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestTypeIconLocal @ 14b922070

int __cdecl DS_CommonDataHelper::QuestTypeIconLocal(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2722,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92209a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9220ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestTypeIconMain @ 14b9220c0

int __cdecl DS_CommonDataHelper::QuestTypeIconMain(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2721,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9220ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9220fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestTypeIconMission @ 14b922110

int __cdecl DS_CommonDataHelper::QuestTypeIconMission(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2726,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92213a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// QuestTypeIconRepeat @ 14b922160

int __cdecl DS_CommonDataHelper::QuestTypeIconRepeat(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2723,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92218a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92219c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RaidPartyFinderListCount @ 14b9221b0

int __cdecl DS_CommonDataHelper::RaidPartyFinderListCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x59d9,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9221da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9221ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RaidPartyMemberMax @ 14b922200

int __cdecl DS_CommonDataHelper::RaidPartyMemberMax(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbbe,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92222a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92223c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RaidPartyPasswordMaxLength @ 14b922250

int __cdecl DS_CommonDataHelper::RaidPartyPasswordMaxLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbc2,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92227a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92228c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RateMinRequireDiveStamina @ 14b9222a0

int __cdecl DS_CommonDataHelper::RateMinRequireDiveStamina(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xafc9,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9222ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9222dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RateMinRequireFlyStamina @ 14b9222f0

int __cdecl DS_CommonDataHelper::RateMinRequireFlyStamina(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xb3b1,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92231a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92232c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RateMinRequireMountStamina @ 14b922340

int __cdecl DS_CommonDataHelper::RateMinRequireMountStamina(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb83,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92236a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92237c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RateOverLevelFlyHpPenalty @ 14b922390

int __cdecl DS_CommonDataHelper::RateOverLevelFlyHpPenalty(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xb3b5,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9223ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9223cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RecruitmentMessageMaxLength @ 14b9223e0

int __cdecl DS_CommonDataHelper::RecruitmentMessageMaxLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x59de,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92240a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92241c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RecruitmentMessageMinLength @ 14b922430

int __cdecl DS_CommonDataHelper::RecruitmentMessageMinLength(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x59df,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92245a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92246c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RepeatQuestDailyCount @ 14b922480

int __cdecl DS_CommonDataHelper::RepeatQuestDailyCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2738,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9224aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9224bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RequiredVotesForKick12 @ 14b9224d0

int __cdecl DS_CommonDataHelper::RequiredVotesForKick12(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x59db,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9224fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92250c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// RequiredVotesForKick4 @ 14b922520

int __cdecl DS_CommonDataHelper::RequiredVotesForKick4(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x59da,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92254a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92255c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ResurrectionSkillLv @ 14b922570

int __cdecl DS_CommonDataHelper::ResurrectionSkillLv(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x804,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92259a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9225ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// SearchCount @ 14b9225c0

int __cdecl DS_CommonDataHelper::SearchCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x32c9,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9225ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9225fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// SearchStorage @ 14b922610

int __cdecl DS_CommonDataHelper::SearchStorage(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x32ca,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92263a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// SelectTargetRetentionTime @ 14b922660

float __cdecl DS_CommonDataHelper::SelectTargetRetentionTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xc,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// SellingBasketSlotCount @ 14b9226c0

int __cdecl DS_CommonDataHelper::SellingBasketSlotCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x232a,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9226ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9226fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ShopBasketDefaultSlotCount @ 14b922710

int __cdecl DS_CommonDataHelper::ShopBasketDefaultSlotCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1ce9,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92273a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92274c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ShopBasketMaxSlotCount @ 14b922760

int __cdecl DS_CommonDataHelper::ShopBasketMaxSlotCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1cea,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92278a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92279c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ShoppingBasketSlotCount @ 14b9227b0

int __cdecl DS_CommonDataHelper::ShoppingBasketSlotCount(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x2329,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9227da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9227ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// SkillAttachFailAbnormal @ 14b922800

int __cdecl DS_CommonDataHelper::SkillAttachFailAbnormal(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x33,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92282a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92283c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// SkillCheckMarginTime @ 14b922850

float __cdecl DS_CommonDataHelper::SkillCheckMarginTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xe,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// SmallTalkDelayTime @ 14b9228b0

float __cdecl DS_CommonDataHelper::SmallTalkDelayTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x2728,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// TamingGameNextStepWaitTime @ 14b922910

float __cdecl DS_CommonDataHelper::TamingGameNextStepWaitTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xbb84,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// TamingNotMovableBuff @ 14b922970

int __cdecl DS_CommonDataHelper::TamingNotMovableBuff(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb89,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92299a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9229ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// TamingOffset @ 14b9229c0

int __cdecl DS_CommonDataHelper::TamingOffset(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb86,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9229ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9229fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// TamingPeriod @ 14b922a10

float __cdecl DS_CommonDataHelper::TamingPeriod(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0xbb87,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// TamingStateBuff @ 14b922a70

int __cdecl DS_CommonDataHelper::TamingStateBuff(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xbb88,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// TargetAngle @ 14b922ac0

int __cdecl DS_CommonDataHelper::TargetAngle(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x17,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// TargetChoiceRemove @ 14b922b10

int __cdecl DS_CommonDataHelper::TargetChoiceRemove(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x3a99,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// TargetHeightMin @ 14b922b60

double __cdecl DS_CommonDataHelper::TargetHeightMin(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x15,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// TooltipOverDelay @ 14b922bc0

float __cdecl DS_CommonDataHelper::TooltipOverDelay(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x92f,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// TradeAbleColor @ 14b922c20

int __cdecl DS_CommonDataHelper::TradeAbleColor(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xfa2,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// TransportOutViewRange @ 14b922c70

double __cdecl DS_CommonDataHelper::TransportOutViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x426e,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// TransportViewRange @ 14b922cd0

double __cdecl DS_CommonDataHelper::TransportViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x426d,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// VoteDuration @ 14b922d30

float __cdecl DS_CommonDataHelper::VoteDuration(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x59dc,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// VoteRetryCoolTime @ 14b922d90

float __cdecl DS_CommonDataHelper::VoteRetryCoolTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x59dd,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// WaitCompleteMaxSize @ 14b922df0

int __cdecl DS_CommonDataHelper::WaitCompleteMaxSize(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1c85,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922e1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// WarpDeviceCostDistance @ 14b922e40

int __cdecl DS_CommonDataHelper::WarpDeviceCostDistance(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1774,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// WarpDeviceOutViewRange @ 14b922e90

double __cdecl DS_CommonDataHelper::WarpDeviceOutViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x4271,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// WarpDeviceViewRange @ 14b922ef0

double __cdecl DS_CommonDataHelper::WarpDeviceViewRange(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x4270,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = wcstod((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  return dVar2;
}

// WarpInvincible @ 14b922f50

int __cdecl DS_CommonDataHelper::WarpInvincible(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x42d0,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// WorldmapDefaultCellY @ 14b922fa0

int __cdecl DS_CommonDataHelper::WorldmapDefaultCellY(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x792e,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b922fca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b922fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// WorldmapDefaultScale @ 14b922ff0

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::WorldmapDefaultScale
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  undefined1 local_res10 [8];
  float local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x792f,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    dVar10 = _wtof((wchar_t *)_Str.Data);
    local_68[0] = (float)dVar10;
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(float *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// WorldmapDisplayRange @ 14b923220

int __cdecl DS_CommonDataHelper::WorldmapDisplayRange(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7921,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92324a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// WorldmapPadCursorSpeed @ 14b923270

float __cdecl DS_CommonDataHelper::WorldmapPadCursorSpeed(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x7931,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// WorldmapZoomRatioDefault @ 14b9232d0

int __cdecl DS_CommonDataHelper::WorldmapZoomRatioDefault(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7923,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9232fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92330c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// WorldmapZoomRatioRange @ 14b923320

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
DS_CommonDataHelper::WorldmapZoomRatioRange
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CommonDataTableRow *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Str;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  int local_68 [2];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pFVar5 = FDS_CommonDataTableRow::GetRef(0x7922,true);
  if (pFVar5 == &FDS_CommonDataTableRow::DefaultObject) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar5->OptionValueArray).ArrayNum;
  pFVar8 = (pFVar5->OptionValueArray).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  while( true ) {
    if ((pFVar5->OptionValueArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    local_48 = *(int *)(pFVar8 + 8);
    lVar7 = (longlong)local_48;
    _Src = *(void **)pFVar8;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,_Src,lVar7 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48 != 0) {
      _Str.Data = local_50.Data;
    }
    local_68[0] = _wtoi((wchar_t *)_Str.Data);
    if (((local_60.Data <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < local_60.Data + (longlong)local_58._4_4_ * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
    *(int *)(local_60.Data + (longlong)iVar4 * 4) = local_68[0];
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// WorldmapZoomStep @ 14b923540

int __cdecl DS_CommonDataHelper::WorldmapZoomStep(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7930,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92356a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92357c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// WorldmapZoomStepSizes @ 14b923590

int __cdecl DS_CommonDataHelper::WorldmapZoomStepSizes(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7924,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9235ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9235cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// WorldmapZoomWheelThreshold @ 14b9235e0

int __cdecl DS_CommonDataHelper::WorldmapZoomWheelThreshold(void)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x7929,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b92360a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b92361c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ZoneEntranceUiCoolTime @ 14b923630

float __cdecl DS_CommonDataHelper::ZoneEntranceUiCoolTime(void)

{
  FDS_CommonDataTableRow *pFVar1;
  double dVar2;
  
  pFVar1 = FDS_CommonDataTableRow::GetRef(0x820,true);
  if (pFVar1 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0.0;
  }
  if ((pFVar1->OptionValue).Data.ArrayNum != 0) {
    dVar2 = _wtof((wchar_t *)(pFVar1->OptionValue).Data.AllocatorInstance.Data);
    return (float)dVar2;
  }
  dVar2 = _wtof(L"");
  return (float)dVar2;
}

// DefaultObject'' @ 1504386c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ChattingTabTableRow::DefaultObject__(void)

{
  if (FDS_ChattingTabTableRow::DefaultObject.ID_DisplayableChatTypes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ChattingTabTableRow::DefaultObject.ID_DisplayableChatTypes.AllocatorInstance.
                  Data);
  }
  if (FDS_ChattingTabTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ChattingTabTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ChattingTabTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438700

void __cdecl `dynamic_atexit_destructor_for_'FDS_CheatKeyBaseTableRow::DefaultObject__(void)

{
  FDS_CheatKeyBaseTableRow::~FDS_CheatKeyBaseTableRow(&FDS_CheatKeyBaseTableRow::DefaultObject);
  return;
}

// DefaultObject'' @ 150438720

void __cdecl `dynamic_atexit_destructor_for_'FDS_CoiParameterTableRow::DefaultObject__(void)

{
  if (FDS_CoiParameterTableRow::DefaultObject.Value.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CoiParameterTableRow::DefaultObject.Value.Data.AllocatorInstance.Data);
  }
  if (FDS_CoiParameterTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CoiParameterTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_CoiParameterTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438760

void __cdecl `dynamic_atexit_destructor_for_'FDS_CollideTableRow::DefaultObject__(void)

{
  FDS_CollideTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438780

void __cdecl `dynamic_atexit_destructor_for_'FDS_CommonActionCastingTableRow::DefaultObject__(void)

{
  if (FDS_CommonActionCastingTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CommonActionCastingTableRow::DefaultObject.Version.Data.AllocatorInstance.Data
                 );
  }
  FDS_CommonActionCastingTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504387b0

void __cdecl `dynamic_atexit_destructor_for_'FDS_CommonContentsInfoTableRow::DefaultObject__(void)

{
  FDS_CommonContentsInfoTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504387d0

void __cdecl `dynamic_atexit_destructor_for_'FDS_CommonDataTableRow::DefaultObject__(void)

{
  DestructItems<FString,int>
            ((FString *)
             FDS_CommonDataTableRow::DefaultObject.OptionValueArray.AllocatorInstance.Data,
             FDS_CommonDataTableRow::DefaultObject.OptionValueArray.ArrayNum);
  if (FDS_CommonDataTableRow::DefaultObject.OptionValueArray.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CommonDataTableRow::DefaultObject.OptionValueArray.AllocatorInstance.Data);
  }
  if (FDS_CommonDataTableRow::DefaultObject.OptionValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CommonDataTableRow::DefaultObject.OptionValue.Data.AllocatorInstance.Data);
  }
  if (FDS_CommonDataTableRow::DefaultObject.UseSystem.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CommonDataTableRow::DefaultObject.UseSystem.Data.AllocatorInstance.Data);
  }
  if (FDS_CommonDataTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CommonDataTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_CommonDataTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438850

void __cdecl `dynamic_atexit_destructor_for_'FDS_CommonFrameBaseTableRow::DefaultObject__(void)

{
  if (FDS_CommonFrameBaseTableRow::DefaultObject.DisplayKey.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CommonFrameBaseTableRow::DefaultObject.DisplayKey.AllocatorInstance.Data);
  }
  if (FDS_CommonFrameBaseTableRow::DefaultObject.DisplayMoney.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CommonFrameBaseTableRow::DefaultObject.DisplayMoney.AllocatorInstance.Data);
  }
  FDS_CommonFrameBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438890

void __cdecl `dynamic_atexit_destructor_for_'FDS_CommonGradeTableRow::DefaultObject__(void)

{
  if (FDS_CommonGradeTableRow::DefaultObject.ID_ItemNameGrade.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CommonGradeTableRow::DefaultObject.ID_ItemNameGrade.Data.AllocatorInstance.
                  Data);
  }
  if (FDS_CommonGradeTableRow::DefaultObject.ID_TagStyleL.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CommonGradeTableRow::DefaultObject.ID_TagStyleL.Data.AllocatorInstance.Data);
  }
  if (FDS_CommonGradeTableRow::DefaultObject.ID_TagStyleM.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CommonGradeTableRow::DefaultObject.ID_TagStyleM.Data.AllocatorInstance.Data);
  }
  if (FDS_CommonGradeTableRow::DefaultObject.ID_TagStyleS.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CommonGradeTableRow::DefaultObject.ID_TagStyleS.Data.AllocatorInstance.Data);
  }
  FDS_CommonGradeTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438900

void __cdecl `dynamic_atexit_destructor_for_'FDS_ContentsBaseTableRow::DefaultObject__(void)

{
  if (FDS_ContentsBaseTableRow::DefaultObject.ContentsFunction.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ContentsBaseTableRow::DefaultObject.ContentsFunction.AllocatorInstance.Data);
  }
  if (FDS_ContentsBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ContentsBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ContentsBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438940

void __cdecl `dynamic_atexit_destructor_for_'FDS_ContentsFunctionTableRow::DefaultObject__(void)

{
  if (FDS_ContentsFunctionTableRow::DefaultObject.FunctionLockValue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ContentsFunctionTableRow::DefaultObject.FunctionLockValue.AllocatorInstance.
                  Data);
  }
  FDS_ContentsFunctionTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438970

void __cdecl
`dynamic_atexit_destructor_for_'FDS_ContentsTabFrameStyleTableRow::DefaultObject__(void)

{
  if (FDS_ContentsTabFrameStyleTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ContentsTabFrameStyleTableRow::DefaultObject.Version.Data.AllocatorInstance.
                  Data);
  }
  FDS_ContentsTabFrameStyleTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504389a0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ContentsTabFrameTableRow::DefaultObject__(void)

{
  if (FDS_ContentsTabFrameTableRow::DefaultObject.DisplayMoney.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ContentsTabFrameTableRow::DefaultObject.DisplayMoney.AllocatorInstance.Data);
  }
  if (FDS_ContentsTabFrameTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ContentsTabFrameTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ContentsTabFrameTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504389e0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ContentsTotalMenuTableRow::DefaultObject__(void)

{
  if (FDS_ContentsTotalMenuTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ContentsTotalMenuTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ContentsTotalMenuTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438a10

void __cdecl
`dynamic_atexit_destructor_for_'FDS_CustomizingCategoryGroupTableRow::DefaultObject__(void)

{
  if (FDS_CustomizingCategoryGroupTableRow::DefaultObject.ID_CustomizingCategory.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CustomizingCategoryGroupTableRow::DefaultObject.ID_CustomizingCategory.
                  AllocatorInstance.Data);
  }
  FDS_CustomizingCategoryGroupTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438a40

void __cdecl `dynamic_atexit_destructor_for_'FDS_CustomizingCategoryTableRow::DefaultObject__(void)

{
  if (FDS_CustomizingCategoryTableRow::DefaultObject.ID_CustomizingComponent.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CustomizingCategoryTableRow::DefaultObject.ID_CustomizingComponent.
                  AllocatorInstance.Data);
  }
  FDS_CustomizingCategoryTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438a70

void __cdecl `dynamic_atexit_destructor_for_'FDS_CustomizingComponentTableRow::DefaultObject__(void)

{
  if (FDS_CustomizingComponentTableRow::DefaultObject.ID_ValueIcon.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CustomizingComponentTableRow::DefaultObject.ID_ValueIcon.AllocatorInstance.
                  Data);
  }
  if (FDS_CustomizingComponentTableRow::DefaultObject.Value.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CustomizingComponentTableRow::DefaultObject.Value.AllocatorInstance.Data);
  }
  FDS_CustomizingComponentTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438ab0

void __cdecl
`dynamic_atexit_destructor_for_'FDS_CustomizingGenderCategoryTableRow::DefaultObject__(void)

{
  if (FDS_CustomizingGenderCategoryTableRow::DefaultObject.ID_CustomizingCategoryGroup.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CustomizingGenderCategoryTableRow::DefaultObject.ID_CustomizingCategoryGroup.
                  AllocatorInstance.Data);
  }
  FDS_CustomizingGenderCategoryTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_
  ;
  return;
}

// DefaultObject'' @ 150438ae0

void __cdecl
`dynamic_atexit_destructor_for_'FDS_CustomizingOptionItemTableRow::DefaultObject__(void)

{
  if (FDS_CustomizingOptionItemTableRow::DefaultObject.ID_ResourceParts.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CustomizingOptionItemTableRow::DefaultObject.ID_ResourceParts.
                  AllocatorInstance.Data);
  }
  FDS_CustomizingOptionItemTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438b10

void __cdecl `dynamic_atexit_destructor_for_'FDS_CustomizingOptionTableRow::DefaultObject__(void)

{
  FDS_CustomizingOptionTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438b30

void __cdecl `dynamic_atexit_destructor_for_'FDS_CustomizingPresetTableRow::DefaultObject__(void)

{
  if (FDS_CustomizingPresetTableRow::DefaultObject.CoiPath.SubPathString.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CustomizingPresetTableRow::DefaultObject.CoiPath.SubPathString.Data.
                  AllocatorInstance.Data);
  }
  FDS_CustomizingPresetTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438b60

void __cdecl `dynamic_atexit_destructor_for_'FDS_DataStageValueTableRow::DefaultObject__(void)

{
  FDS_DataStageValueTableRow::~FDS_DataStageValueTableRow
            (&FDS_DataStageValueTableRow::DefaultObject);
  return;
}

// DefaultObject'' @ 150438b80

void __cdecl `dynamic_atexit_destructor_for_'FDS_DevServerListTableRow::DefaultObject__(void)

{
  if (FDS_DevServerListTableRow::DefaultObject.GameServerIndex.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DevServerListTableRow::DefaultObject.GameServerIndex.AllocatorInstance.Data);
  }
  if (FDS_DevServerListTableRow::DefaultObject.FrontEndServerIndex.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DevServerListTableRow::DefaultObject.FrontEndServerIndex.AllocatorInstance.
                  Data);
  }
  if (FDS_DevServerListTableRow::DefaultObject.ServerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DevServerListTableRow::DefaultObject.ServerName.Data.AllocatorInstance.Data);
  }
  if (FDS_DevServerListTableRow::DefaultObject.AiAddr.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DevServerListTableRow::DefaultObject.AiAddr.Data.AllocatorInstance.Data);
  }
  if (FDS_DevServerListTableRow::DefaultObject.ServerAddr.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DevServerListTableRow::DefaultObject.ServerAddr.Data.AllocatorInstance.Data);
  }
  if (FDS_DevServerListTableRow::DefaultObject.Urls.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DevServerListTableRow::DefaultObject.Urls.Data.AllocatorInstance.Data);
  }
  FDS_DevServerListTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438c10

void __cdecl `dynamic_atexit_destructor_for_'FDS_DropBaseTableRow::DefaultObject__(void)

{
  FDS_DropBaseTableRow::~FDS_DropBaseTableRow(&FDS_DropBaseTableRow::DefaultObject);
  return;
}

// DefaultObject'' @ 150438c30

void __cdecl `dynamic_atexit_destructor_for_'FDS_DropListTableRow::DefaultObject__(void)

{
  FDS_DropListTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438c50

void __cdecl `dynamic_atexit_destructor_for_'FDS_DropStuffSpawnTableRow::DefaultObject__(void)

{
  if (FDS_DropStuffSpawnTableRow::DefaultObject.StuffCnt.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DropStuffSpawnTableRow::DefaultObject.StuffCnt.AllocatorInstance.Data);
  }
  if (FDS_DropStuffSpawnTableRow::DefaultObject.ID_Stuff.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DropStuffSpawnTableRow::DefaultObject.ID_Stuff.AllocatorInstance.Data);
  }
  FDS_DropStuffSpawnTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438c90

void __cdecl `dynamic_atexit_destructor_for_'FDS_DropZoneTableRow::DefaultObject__(void)

{
  FDS_DropZoneTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438cb0

void __cdecl `dynamic_atexit_destructor_for_'FDS_DungeonBaseTableRow::DefaultObject__(void)

{
  FDS_DungeonBaseTableRow::~FDS_DungeonBaseTableRow(&FDS_DungeonBaseTableRow::DefaultObject);
  return;
}

// DefaultObject'' @ 150438cd0

void __cdecl `dynamic_atexit_destructor_for_'FDS_DungeonLevelGroupTableRow::DefaultObject__(void)

{
  if (FDS_DungeonLevelGroupTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DungeonLevelGroupTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_DungeonLevelGroupTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438d00

void __cdecl `dynamic_atexit_destructor_for_'FDS_DungeonManagerRewardTableRow::DefaultObject__(void)

{
  if (FDS_DungeonManagerRewardTableRow::DefaultObject.DungeonScriptClearArray.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DungeonManagerRewardTableRow::DefaultObject.DungeonScriptClearArray.
                  AllocatorInstance.Data);
  }
  if (FDS_DungeonManagerRewardTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DungeonManagerRewardTableRow::DefaultObject.Version.Data.AllocatorInstance.
                  Data);
  }
  FDS_DungeonManagerRewardTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438d40

void __cdecl `dynamic_atexit_destructor_for_'FDS_DungeonManagerScoreTableRow::DefaultObject__(void)

{
  if (FDS_DungeonManagerScoreTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DungeonManagerScoreTableRow::DefaultObject.Version.Data.AllocatorInstance.Data
                 );
  }
  FDS_DungeonManagerScoreTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438d70

void __cdecl
`dynamic_atexit_destructor_for_'FDS_DungeonManagerScriptListTableRow::DefaultObject__(void)

{
  if (FDS_DungeonManagerScriptListTableRow::DefaultObject.ScriptFileName.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DungeonManagerScriptListTableRow::DefaultObject.ScriptFileName.Data.
                  AllocatorInstance.Data);
  }
  if (FDS_DungeonManagerScriptListTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DungeonManagerScriptListTableRow::DefaultObject.Version.Data.AllocatorInstance
                  .Data);
  }
  FDS_DungeonManagerScriptListTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438db0

void __cdecl `dynamic_atexit_destructor_for_'FDS_DungeonRewardTableRow::DefaultObject__(void)

{
  if (FDS_DungeonRewardTableRow::DefaultObject.ID_StuffBase.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DungeonRewardTableRow::DefaultObject.ID_StuffBase.AllocatorInstance.Data);
  }
  if (FDS_DungeonRewardTableRow::DefaultObject.ID_StuffSpawn.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DungeonRewardTableRow::DefaultObject.ID_StuffSpawn.AllocatorInstance.Data);
  }
  if (FDS_DungeonRewardTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_DungeonRewardTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_DungeonRewardTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

