// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 116

// DefaultObject'' @ 1412770d0

void __cdecl `dynamic_initializer_for_'FDS_SortingGroupTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_SortingGroupTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412770f0

void __cdecl `dynamic_initializer_for_'FDS_SortingTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_SortingTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277110

void __cdecl `dynamic_initializer_for_'FDS_SpawnTerritoryEditorTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_SpawnTerritoryEditorTableRow::DefaultObject.SubFolderPath,L"");
  ::FString::FString(&FDS_SpawnTerritoryEditorTableRow::DefaultObject.Memo,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_SpawnTerritoryEditorTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277150

void __cdecl `dynamic_initializer_for_'FDS_SpawnTerritoryTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_SpawnTerritoryTableRow::DefaultObject.DataStageString,L"");
  FDS_SpawnTerritoryTableRow::DefaultObject.TerritoryType = Spawn;
  FDS_SpawnTerritoryTableRow::DefaultObject.TerritorySpawnType = Navi;
  FDS_SpawnTerritoryTableRow::DefaultObject.TerritoryShapeType = Sphere;
  FDS_SpawnTerritoryTableRow::DefaultObject.Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_SpawnTerritoryTableRow::DefaultObject.Location.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_SpawnTerritoryTableRow::DefaultObject.Location.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDS_SpawnTerritoryTableRow::DefaultObject.SpawnRadius = 0.0;
  FDS_SpawnTerritoryTableRow::DefaultObject.Height = 0.0;
  atexit(`dynamic_atexit_destructor_for_'FDS_SpawnTerritoryTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412771c0

void __cdecl `dynamic_initializer_for_'FDS_StatusBattleCalculateTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_StatusBattleCalculateTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412771e0

void __cdecl `dynamic_initializer_for_'FDS_StatusInfoTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StatusInfoTableRow::DefaultObject.Version,L"");
  FDS_StatusInfoTableRow::DefaultObject.ID_AddStatusContents.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_StatusInfoTableRow::DefaultObject.ID_AddStatusContents.ArrayNum = 0;
  FDS_StatusInfoTableRow::DefaultObject.ID_AddStatusContents.ArrayMax = 0;
  FDS_StatusInfoTableRow::DefaultObject.IsViewContents = false;
  FDS_StatusInfoTableRow::DefaultObject.Order = 0;
  FDS_StatusInfoTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  atexit(`dynamic_atexit_destructor_for_'FDS_StatusInfoTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277250

void __cdecl `dynamic_initializer_for_'FDS_StatusTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_StatusTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277270

void __cdecl `dynamic_initializer_for_'FDS_StringBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StringBaseTableRow::DefaultObject.Version,L"");
  ::FString::FString(&FDS_StringBaseTableRow::DefaultObject.Text,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_StringBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412772b0

void __cdecl `dynamic_initializer_for_'FDS_StringDialogueTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StringDialogueTableRow::DefaultObject.Version,L"");
  ::FString::FString(&FDS_StringDialogueTableRow::DefaultObject.Text,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_StringDialogueTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412772f0

void __cdecl `dynamic_initializer_for_'FDS_StringEnumTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StringEnumTableRow::DefaultObject.ID,L"");
  FDS_StringEnumTableRow::DefaultObject.DataStage = 0;
  ::FString::FString(&FDS_StringEnumTableRow::DefaultObject.Version,L"");
  ::FString::FString(&FDS_StringEnumTableRow::DefaultObject.Text,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_StringEnumTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277350

void __cdecl `dynamic_initializer_for_'FDS_StringErrorTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StringErrorTableRow::DefaultObject.Version,L"");
  FDS_StringErrorTableRow::DefaultObject.ID_StringUi = (FDS_StringUiID)ZEXT816(0x1523de688);
  FDS_StringErrorTableRow::DefaultObject.MessageDefine = None;
  atexit(`dynamic_atexit_destructor_for_'FDS_StringErrorTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412773b0

void __cdecl `dynamic_initializer_for_'FDS_StringItemTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StringItemTableRow::DefaultObject.Version,L"");
  ::FString::FString(&FDS_StringItemTableRow::DefaultObject.Text,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_StringItemTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412773f0

void __cdecl `dynamic_initializer_for_'FDS_StringMailTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StringMailTableRow::DefaultObject.Version,L"");
  ::FString::FString(&FDS_StringMailTableRow::DefaultObject.Text,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_StringMailTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277430

void __cdecl `dynamic_initializer_for_'FDS_StringQuestTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StringQuestTableRow::DefaultObject.Version,L"");
  ::FString::FString(&FDS_StringQuestTableRow::DefaultObject.Text,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_StringQuestTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277470

void __cdecl `dynamic_initializer_for_'FDS_StringUiTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StringUiTableRow::DefaultObject.Version,L"");
  ::FString::FString(&FDS_StringUiTableRow::DefaultObject.Text,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_StringUiTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412774b0

void __cdecl `dynamic_initializer_for_'FDS_StringWorldTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StringWorldTableRow::DefaultObject.Version,L"");
  ::FString::FString(&FDS_StringWorldTableRow::DefaultObject.Text,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_StringWorldTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412774f0

void __cdecl `dynamic_initializer_for_'FDS_StuffBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StuffBaseTableRow::DefaultObject.Version,L"");
  FDS_StuffBaseTableRow::DefaultObject.StuffType = None;
  FDS_StuffBaseTableRow::DefaultObject.ID_StuffValue = 0;
  FDS_StuffBaseTableRow::DefaultObject.ID_GradeType = None;
  FDS_StuffBaseTableRow::DefaultObject.ID_Name = (FDS_StringWorldID)ZEXT816(0x1524f00a0);
  FDS_StuffBaseTableRow::DefaultObject.ID_FunctionIcon = 0;
  FDS_StuffBaseTableRow::DefaultObject.ID_ResourcePreset = 0;
  FDS_StuffBaseTableRow::DefaultObject.ID_BpLink = 0;
  FDS_StuffBaseTableRow::DefaultObject.StuffScale = 0.0;
  FDS_StuffBaseTableRow::DefaultObject.ID_Effect = 0;
  FDS_StuffBaseTableRow::DefaultObject.ID_Trigger.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_StuffBaseTableRow::DefaultObject.ID_Trigger.ArrayNum = 0;
  FDS_StuffBaseTableRow::DefaultObject.ID_Trigger.ArrayMax = 0;
  FDS_StuffBaseTableRow::DefaultObject.InteractionTime = 0.0;
  FDS_StuffBaseTableRow::DefaultObject.IsCancelToDamage = false;
  FDS_StuffBaseTableRow::DefaultObject.EntitySpawnRange = None;
  FDS_StuffBaseTableRow::DefaultObject.IsCountIndication = false;
  FDS_StuffBaseTableRow::DefaultObject.ID_GimmickEvent.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_StuffBaseTableRow::DefaultObject.ID_GimmickEvent.ArrayNum = 0;
  FDS_StuffBaseTableRow::DefaultObject.ID_GimmickEvent.ArrayMax = 0;
  FDS_StuffBaseTableRow::DefaultObject.TicketType = None;
  FDS_StuffBaseTableRow::DefaultObject.TicketCost = 0;
  FDS_StuffBaseTableRow::DefaultObject.ID_ConditionItem = 0;
  FDS_StuffBaseTableRow::DefaultObject.SpawnHideType = None;
  FDS_StuffBaseTableRow::DefaultObject.ShowConditionType = None;
  FDS_StuffBaseTableRow::DefaultObject.ShowConditionValue1 = 0;
  FDS_StuffBaseTableRow::DefaultObject.ShowConditionValue2 = 0;
  FDS_StuffBaseTableRow::DefaultObject.RoleType = None;
  FDS_StuffBaseTableRow::DefaultObject.ID_Interaction.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_StuffBaseTableRow::DefaultObject.ID_Interaction.ArrayNum = 0;
  FDS_StuffBaseTableRow::DefaultObject.ID_Interaction.ArrayMax = 0;
  FDS_StuffBaseTableRow::DefaultObject.ID_InteractionPrompt = (FDS_StringBaseID)ZEXT816(0x1523de678)
  ;
  FDS_StuffBaseTableRow::DefaultObject.ID_InteractionDesc = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_StuffBaseTableRow::DefaultObject.ID_SelectPromptName = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_StuffBaseTableRow::DefaultObject.InteractionRange = 0.0;
  atexit(`dynamic_atexit_destructor_for_'FDS_StuffBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277620

void __cdecl `dynamic_initializer_for_'FDS_StuffGatherTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_StuffGatherTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277640

void __cdecl `dynamic_initializer_for_'FDS_StuffPortalTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StuffPortalTableRow::DefaultObject.Version,L"");
  FDS_StuffPortalTableRow::DefaultObject.PortalType = None;
  FDS_StuffPortalTableRow::DefaultObject.ID_PortalLocation = 0;
  FDS_StuffPortalTableRow::DefaultObject.ID_ContentsTabFrame = None;
  FDS_StuffPortalTableRow::DefaultObject.ID_OpenValue = 0;
  FDS_StuffPortalTableRow::DefaultObject.PlayerLevel = 0;
  FDS_StuffPortalTableRow::DefaultObject.ID_NeedItem = 0;
  FDS_StuffPortalTableRow::DefaultObject.ID_NeedHoldQuest = 0;
  FDS_StuffPortalTableRow::DefaultObject.ID_NeedCompleteQuest = 0;
  FDS_StuffPortalTableRow::DefaultObject.NeedTicketType = None;
  FDS_StuffPortalTableRow::DefaultObject.NeedTicketValue = 0;
  FDS_StuffPortalTableRow::DefaultObject.ID_Trigger = 0;
  FDS_StuffPortalTableRow::DefaultObject.Hide = false;
  FDS_StuffPortalTableRow::DefaultObject.ID_Gimmick = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_StuffPortalTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412776b0

void __cdecl `dynamic_initializer_for_'FDS_StuffQuestBoardTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StuffQuestBoardTableRow::DefaultObject.Version,L"");
  FDS_StuffQuestBoardTableRow::DefaultObject.ID_ZoneIsland = 0;
  FDS_StuffQuestBoardTableRow::DefaultObject.ID_ZoneBase = 0;
  FDS_StuffQuestBoardTableRow::DefaultObject.SpawnCoordinate.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_StuffQuestBoardTableRow::DefaultObject.SpawnCoordinate.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_StuffQuestBoardTableRow::DefaultObject.SpawnCoordinate.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  atexit(`dynamic_atexit_destructor_for_'FDS_StuffQuestBoardTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277710

void __cdecl `dynamic_initializer_for_'FDS_StuffQuestTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StuffQuestTableRow::DefaultObject.Version,L"");
  FDS_StuffQuestTableRow::DefaultObject.ActivationQuest = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_StuffQuestTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277750

void __cdecl `dynamic_initializer_for_'FDS_StuffSpawnEditorTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StuffSpawnEditorTableRow::DefaultObject.SubFolderPath,L"");
  ::FString::FString(&FDS_StuffSpawnEditorTableRow::DefaultObject.Memo,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_StuffSpawnEditorTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277790

void __cdecl `dynamic_initializer_for_'FDS_StuffSpawnGroupTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StuffSpawnGroupTableRow::DefaultObject.DataStageString,L"");
  FDS_StuffSpawnGroupTableRow::DefaultObject.ID_Territory.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_StuffSpawnGroupTableRow::DefaultObject.ID_Territory.ArrayNum = 0;
  FDS_StuffSpawnGroupTableRow::DefaultObject.ID_Territory.ArrayMax = 0;
  FDS_StuffSpawnGroupTableRow::DefaultObject.ID_BannedTerritory.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_StuffSpawnGroupTableRow::DefaultObject.ID_BannedTerritory.ArrayNum = 0;
  FDS_StuffSpawnGroupTableRow::DefaultObject.ID_BannedTerritory.ArrayMax = 0;
  FDS_StuffSpawnGroupTableRow::DefaultObject.CountMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_StuffSpawnGroupTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412777f0

void __cdecl `dynamic_initializer_for_'FDS_StuffSpawnQuestTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StuffSpawnQuestTableRow::DefaultObject.DataStageString,L"");
  FDS_StuffSpawnQuestTableRow::DefaultObject.ID_StuffShowQuest = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_StuffSpawnQuestTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277830

void __cdecl `dynamic_initializer_for_'FDS_StuffSpawnTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StuffSpawnTableRow::DefaultObject.DataStageString,L"");
  FDS_StuffSpawnTableRow::DefaultObject.ID_Stuff.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_StuffSpawnTableRow::DefaultObject.Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_StuffSpawnTableRow::DefaultObject.Location.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_StuffSpawnTableRow::DefaultObject.ID_Stuff.ArrayNum = 0;
  FDS_StuffSpawnTableRow::DefaultObject.ID_Stuff.ArrayMax = 0;
  FDS_StuffSpawnTableRow::DefaultObject.Location.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDS_StuffSpawnTableRow::DefaultObject.SpawnRadius = 0.0;
  FDS_StuffSpawnTableRow::DefaultObject.StuffSpawnChance.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_StuffSpawnTableRow::DefaultObject.StuffSpawnChance.ArrayNum = 0;
  FDS_StuffSpawnTableRow::DefaultObject.StuffSpawnChance.ArrayMax = 0;
  FDS_StuffSpawnTableRow::DefaultObject.ID_Zone = 0;
  FDS_StuffSpawnTableRow::DefaultObject.RotateYaw = 0.0;
  FDS_StuffSpawnTableRow::DefaultObject.IsGroupSpawn = false;
  FDS_StuffSpawnTableRow::DefaultObject.SpawnTriggerType = None;
  FDS_StuffSpawnTableRow::DefaultObject.FirstSpawnDelayMin = 0.0;
  FDS_StuffSpawnTableRow::DefaultObject.FirstSpawnDelayMax = 0.0;
  FDS_StuffSpawnTableRow::DefaultObject.RespawnTimeMin = 0.0;
  FDS_StuffSpawnTableRow::DefaultObject.RespawnTimeMax = 0.0;
  FDS_StuffSpawnTableRow::DefaultObject.StuffSpawnType = Navi;
  atexit(`dynamic_atexit_destructor_for_'FDS_StuffSpawnTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412778d0

void __cdecl `dynamic_initializer_for_'FDS_StuffWarpDeviceTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_StuffWarpDeviceTableRow::DefaultObject.Version,L"");
  FDS_StuffWarpDeviceTableRow::DefaultObject.ID_Zone = 0;
  FDS_StuffWarpDeviceTableRow::DefaultObject.RequiredLevel = 0;
  FDS_StuffWarpDeviceTableRow::DefaultObject.ID_RequiredQuest = 0;
  FDS_StuffWarpDeviceTableRow::DefaultObject.ID_WarpLocation = 0;
  FDS_StuffWarpDeviceTableRow::DefaultObject.ID_ZoneIsland = 0;
  FDS_StuffWarpDeviceTableRow::DefaultObject.MoneyType = None;
  FDS_StuffWarpDeviceTableRow::DefaultObject.IsCostFixed = false;
  FDS_StuffWarpDeviceTableRow::DefaultObject.Cost = 0;
  FDS_StuffWarpDeviceTableRow::DefaultObject.ID_MoneyExchange = 0;
  FDS_StuffWarpDeviceTableRow::DefaultObject.ID_StuffBase = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_StuffWarpDeviceTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277930

void __cdecl `dynamic_initializer_for_'FDS_SummonAltarTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_SummonAltarTableRow::DefaultObject.Version,L"");
  FDS_SummonAltarTableRow::DefaultObject.ID_SpawnNpcAltar.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_SummonAltarTableRow::DefaultObject.ID_SpawnNpcAltar.ArrayNum = 0;
  FDS_SummonAltarTableRow::DefaultObject.ID_SpawnNpcAltar.ArrayMax = 0;
  FDS_SummonAltarTableRow::DefaultObject.ID_SpawnNpcBoss = 0;
  FDS_SummonAltarTableRow::DefaultObject.ID_SpawnRewardBox = 0;
  FDS_SummonAltarTableRow::DefaultObject.ID_SummonBossGroup = 0;
  FDS_SummonAltarTableRow::DefaultObject.ID_ResourceEffect.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_SummonAltarTableRow::DefaultObject.ID_ResourceEffect.ArrayNum = 0;
  FDS_SummonAltarTableRow::DefaultObject.ID_ResourceEffect.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_SummonAltarTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277990

void __cdecl `dynamic_initializer_for_'FDS_SummonBossTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_SummonBossTableRow::DefaultObject.Version,L"");
  FDS_SummonBossTableRow::DefaultObject.GroupID = 0;
  FDS_SummonBossTableRow::DefaultObject.ID_SummonBoss = 0;
  FDS_SummonBossTableRow::DefaultObject.ID_Image = 0;
  FDS_SummonBossTableRow::DefaultObject.ID_SummonItem = 0;
  FDS_SummonBossTableRow::DefaultObject.SummonItemValue = 0;
  FDS_SummonBossTableRow::DefaultObject.TimeLife = 0;
  FDS_SummonBossTableRow::DefaultObject.ID_RewardDrop = 0;
  FDS_SummonBossTableRow::DefaultObject.ID_InstanceQuest = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_SummonBossTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412779e0

void __cdecl `dynamic_initializer_for_'FDS_SummonNpcTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_SummonNpcTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277a00

void __cdecl `dynamic_initializer_for_'FDS_SustainDecayTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_SustainDecayTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277a20

void __cdecl `dynamic_initializer_for_'FDS_SustainPenaltyTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_SustainPenaltyTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277a40

void __cdecl `dynamic_initializer_for_'FDS_SvrResCellDataMapTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_SvrResCellDataMapTableRow::DefaultObject.Version,L"");
  FDS_SvrResCellDataMapTableRow::DefaultObject.CellDataMapType = None;
  ::FString::FString(&FDS_SvrResCellDataMapTableRow::DefaultObject.HeightMapPath,L"");
  ::FString::FString(&FDS_SvrResCellDataMapTableRow::DefaultObject.ZoneIdMapPath,L"");
  ::FString::FString(&FDS_SvrResCellDataMapTableRow::DefaultObject.DistrictIdMapPath,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_SvrResCellDataMapTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277ab0

void __cdecl `dynamic_initializer_for_'FDS_SvrResNavMeshTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_SvrResNavMeshTableRow::DefaultObject.Version,L"");
  FDS_SvrResNavMeshTableRow::DefaultObject.NavMeshPath.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_SvrResNavMeshTableRow::DefaultObject.NavMeshPath.ArrayNum = 0;
  FDS_SvrResNavMeshTableRow::DefaultObject.NavMeshPath.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_SvrResNavMeshTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277af0

void __cdecl `dynamic_initializer_for_'FDS_SvrResVoxelDatasTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_SvrResVoxelDatasTableRow::DefaultObject.Version,L"");
  FDS_SvrResVoxelDatasTableRow::DefaultObject.VoxelDataPath.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_SvrResVoxelDatasTableRow::DefaultObject.VoxelDataPath.ArrayNum = 0;
  FDS_SvrResVoxelDatasTableRow::DefaultObject.VoxelDataPath.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_SvrResVoxelDatasTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277b30

void __cdecl `dynamic_initializer_for_'FDS_SvrResWaterVolumeTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_SvrResWaterVolumeTableRow::DefaultObject.WaterVolumeJson,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_SvrResWaterVolumeTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277b60

void __cdecl `dynamic_initializer_for_'FDS_SvrResZone3dVolumeTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_SvrResZone3dVolumeTableRow::DefaultObject.Version,L"");
  ::FString::FString(&FDS_SvrResZone3dVolumeTableRow::DefaultObject.Zone3dJson,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_SvrResZone3dVolumeTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277ba0

void __cdecl `dynamic_initializer_for_'FDS_TimeCoolDownTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_TimeCoolDownTableRow::DefaultObject.Version,L"");
  FDS_TimeCoolDownTableRow::DefaultObject.CoolTime = 0.0;
  atexit(`dynamic_atexit_destructor_for_'FDS_TimeCoolDownTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277be0

void __cdecl `dynamic_initializer_for_'FDS_TimeSchedulerTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_TimeSchedulerTableRow::DefaultObject.RepeatTime,L"");
  FDS_TimeSchedulerTableRow::DefaultObject.ScheduleType = None;
  FDS_TimeSchedulerTableRow::DefaultObject.WorldBossGroup = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_TimeSchedulerTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277c20

void __cdecl `dynamic_initializer_for_'FDS_TransportBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_TransportBaseTableRow::DefaultObject.Version,L"");
  FDS_TransportBaseTableRow::DefaultObject.TransportType = None;
  FDS_TransportBaseTableRow::DefaultObject.ID_Name = 0;
  FDS_TransportBaseTableRow::DefaultObject.Speed = 0.0;
  FDS_TransportBaseTableRow::DefaultObject.ID_Resource = 0;
  FDS_TransportBaseTableRow::DefaultObject.ID_ResourcePreset = 0;
  FDS_TransportBaseTableRow::DefaultObject.ID_BpLink = 0;
  FDS_TransportBaseTableRow::DefaultObject.IsOperate = false;
  FDS_TransportBaseTableRow::DefaultObject.ID_LogoutWarpLocation.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_TransportBaseTableRow::DefaultObject.ID_LogoutWarpLocation.ArrayNum = 0;
  FDS_TransportBaseTableRow::DefaultObject.ID_LogoutWarpLocation.ArrayMax = 0;
  FDS_TransportBaseTableRow::DefaultObject.BoardingRange.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_TransportBaseTableRow::DefaultObject.BoardingRange.ArrayNum = 0;
  FDS_TransportBaseTableRow::DefaultObject.BoardingRange.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_TransportBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277ca0

void __cdecl `dynamic_initializer_for_'FDS_TransportRouteTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_TransportRouteTableRow::DefaultObject.DataStageString,L"");
  FDS_TransportRouteTableRow::DefaultObject.TransportMoveType = None;
  FDS_TransportRouteTableRow::DefaultObject.IsFixed = false;
  FDS_TransportRouteTableRow::DefaultObject.RoutePath.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_TransportRouteTableRow::DefaultObject.RoutePath.ArrayNum = 0;
  FDS_TransportRouteTableRow::DefaultObject.RoutePath.ArrayMax = 0;
  FDS_TransportRouteTableRow::DefaultObject.WaitingTime.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_TransportRouteTableRow::DefaultObject.WaitingTime.ArrayNum = 0;
  FDS_TransportRouteTableRow::DefaultObject.WaitingTime.ArrayMax = 0;
  FDS_TransportRouteTableRow::DefaultObject.TransportCommandType.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_TransportRouteTableRow::DefaultObject.TransportCommandType.ArrayNum = 0;
  FDS_TransportRouteTableRow::DefaultObject.TransportCommandType.ArrayMax = 0;
  FDS_TransportRouteTableRow::DefaultObject.ID_WarpLocation.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_TransportRouteTableRow::DefaultObject.ID_WarpLocation.ArrayNum = 0;
  FDS_TransportRouteTableRow::DefaultObject.ID_WarpLocation.ArrayMax = 0;
  FDS_TransportRouteTableRow::DefaultObject.ID_ReturnWarpLocation.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_TransportRouteTableRow::DefaultObject.ID_ReturnWarpLocation.ArrayNum = 0;
  FDS_TransportRouteTableRow::DefaultObject.ID_ReturnWarpLocation.ArrayMax = 0;
  FDS_TransportRouteTableRow::DefaultObject.Acceleration.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_TransportRouteTableRow::DefaultObject.Acceleration.ArrayNum = 0;
  FDS_TransportRouteTableRow::DefaultObject.Acceleration.ArrayMax = 0;
  FDS_TransportRouteTableRow::DefaultObject.AccelerationTime.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_TransportRouteTableRow::DefaultObject.AccelerationTime.ArrayNum = 0;
  FDS_TransportRouteTableRow::DefaultObject.AccelerationTime.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_TransportRouteTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277d40

void __cdecl `dynamic_initializer_for_'FDS_TransportSpawnTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_TransportSpawnTableRow::DefaultObject.DataStageString,L"");
  FDS_TransportSpawnTableRow::DefaultObject.ID_Transport = 0;
  FDS_TransportSpawnTableRow::DefaultObject.ID_Island = 0;
  FDS_TransportSpawnTableRow::DefaultObject.Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_TransportSpawnTableRow::DefaultObject.Location.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_TransportSpawnTableRow::DefaultObject.Location.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDS_TransportSpawnTableRow::DefaultObject.SpawnRadius = 0.0;
  FDS_TransportSpawnTableRow::DefaultObject.WanderingRadius = 0.0;
  FDS_TransportSpawnTableRow::DefaultObject.LinkGroupRadius = 0.0;
  FDS_TransportSpawnTableRow::DefaultObject.ID_Zone = 0;
  FDS_TransportSpawnTableRow::DefaultObject.RotateYaw = 0.0;
  FDS_TransportSpawnTableRow::DefaultObject.SpawnTriggerType = 0;
  FDS_TransportSpawnTableRow::DefaultObject.FirstSpawnDelayMin = 0.0;
  FDS_TransportSpawnTableRow::DefaultObject.FirstSpawnDelayMax = 0.0;
  FDS_TransportSpawnTableRow::DefaultObject.RespawnTimeMin = 0.0;
  FDS_TransportSpawnTableRow::DefaultObject.RespawnTimeMax = 0.0;
  FDS_TransportSpawnTableRow::DefaultObject.IsWandering = false;
  FDS_TransportSpawnTableRow::DefaultObject.LinkGroupID = 0;
  FDS_TransportSpawnTableRow::DefaultObject.RouteType = false;
  atexit(`dynamic_atexit_destructor_for_'FDS_TransportSpawnTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277de0

void __cdecl `dynamic_initializer_for_'FDS_TriggerBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_TriggerBaseTableRow::DefaultObject.Version,L"");
  FDS_TriggerBaseTableRow::DefaultObject.TriggerRangeType = None;
  FDS_TriggerBaseTableRow::DefaultObject.Range = 0.0;
  atexit(`dynamic_atexit_destructor_for_'FDS_TriggerBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277e20

void __cdecl `dynamic_initializer_for_'FDS_UniqueBpTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_UniqueBpTableRow::DefaultObject.Version,L"");
  FDS_UniqueBpTableRow::DefaultObject.ID_BpLink = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_UniqueBpTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141277e60

void __cdecl `dynamic_initializer_for_'FDS_VolumeTableRow::DefaultObject__(void)

{
  FDS_VolumeTableRow::DefaultObject.Offset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_VolumeTableRow::DefaultObject.Offset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_VolumeTableRow::DefaultObject.Offset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  atexit(`dynamic_atexit_destructor_for_'FDS_VolumeTableRow::DefaultObject__);
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 141277e90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 141277eb0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 141277ed0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 141277ef0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 141277f10

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 141277f30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 141277f50

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 141277f70

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 141277f90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 141277fb0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 141277fd0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 141277ff0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 141278010

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 141278030

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 141278050

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 141278070

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 141278090

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 1412780b0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'LogTBLCommandlet'' @ 1412780d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTBLCommandlet__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTBLCommandlet,L"LogTBLCommandlet",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTBLCommandlet__);
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 141278110

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 141278130

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 141278150

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 141278170

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 141278190

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 1412781b0

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 1412781d0

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 1412781f0

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// DefaultObject'' @ 15043bf90

void __cdecl `dynamic_atexit_destructor_for_'FDS_SortingGroupTableRow::DefaultObject__(void)

{
  if (FDS_SortingGroupTableRow::DefaultObject.ID_SortingType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SortingGroupTableRow::DefaultObject.ID_SortingType.AllocatorInstance.Data);
  }
  FDS_SortingGroupTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043bfc0

void __cdecl `dynamic_atexit_destructor_for_'FDS_SortingTableRow::DefaultObject__(void)

{
  if (FDS_SortingTableRow::DefaultObject.SortingValue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SortingTableRow::DefaultObject.SortingValue.AllocatorInstance.Data);
  }
  FDS_SortingTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043bff0

void __cdecl `dynamic_atexit_destructor_for_'FDS_SpawnTerritoryEditorTableRow::DefaultObject__(void)

{
  if (FDS_SpawnTerritoryEditorTableRow::DefaultObject.Memo.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SpawnTerritoryEditorTableRow::DefaultObject.Memo.Data.AllocatorInstance.Data);
  }
  if (FDS_SpawnTerritoryEditorTableRow::DefaultObject.SubFolderPath.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SpawnTerritoryEditorTableRow::DefaultObject.SubFolderPath.Data.
                  AllocatorInstance.Data);
  }
  FDS_SpawnTerritoryEditorTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c030

void __cdecl `dynamic_atexit_destructor_for_'FDS_SpawnTerritoryTableRow::DefaultObject__(void)

{
  if (FDS_SpawnTerritoryTableRow::DefaultObject.DataStageString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SpawnTerritoryTableRow::DefaultObject.DataStageString.Data.AllocatorInstance.
                  Data);
  }
  FDS_SpawnTerritoryTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c060

void __cdecl
`dynamic_atexit_destructor_for_'FDS_StatusBattleCalculateTableRow::DefaultObject__(void)

{
  FDS_StatusBattleCalculateTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c080

void __cdecl `dynamic_atexit_destructor_for_'FDS_StatusInfoTableRow::DefaultObject__(void)

{
  if (FDS_StatusInfoTableRow::DefaultObject.ID_AddStatusContents.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StatusInfoTableRow::DefaultObject.ID_AddStatusContents.AllocatorInstance.Data)
    ;
  }
  if (FDS_StatusInfoTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StatusInfoTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StatusInfoTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c0c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_StatusTableRow::DefaultObject__(void)

{
  if (FDS_StatusTableRow::DefaultObject.ID_StatusInfo.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StatusTableRow::DefaultObject.ID_StatusInfo.AllocatorInstance.Data);
  }
  if (FDS_StatusTableRow::DefaultObject.ID_AddRateStatus.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StatusTableRow::DefaultObject.ID_AddRateStatus.AllocatorInstance.Data);
  }
  if (FDS_StatusTableRow::DefaultObject.ID_RateStatus.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StatusTableRow::DefaultObject.ID_RateStatus.AllocatorInstance.Data);
  }
  if (FDS_StatusTableRow::DefaultObject.ID_RateStatusValue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StatusTableRow::DefaultObject.ID_RateStatusValue.AllocatorInstance.Data);
  }
  if (FDS_StatusTableRow::DefaultObject.ID_AddStatus.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StatusTableRow::DefaultObject.ID_AddStatus.AllocatorInstance.Data);
  }
  FDS_StatusTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c140

void __cdecl `dynamic_atexit_destructor_for_'FDS_StringBaseTableRow::DefaultObject__(void)

{
  if (FDS_StringBaseTableRow::DefaultObject.Text.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringBaseTableRow::DefaultObject.Text.Data.AllocatorInstance.Data);
  }
  if (FDS_StringBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StringBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c180

void __cdecl `dynamic_atexit_destructor_for_'FDS_StringDialogueTableRow::DefaultObject__(void)

{
  if (FDS_StringDialogueTableRow::DefaultObject.Text.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringDialogueTableRow::DefaultObject.Text.Data.AllocatorInstance.Data);
  }
  if (FDS_StringDialogueTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringDialogueTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StringDialogueTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c1c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_StringEnumTableRow::DefaultObject__(void)

{
  if (FDS_StringEnumTableRow::DefaultObject.Text.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringEnumTableRow::DefaultObject.Text.Data.AllocatorInstance.Data);
  }
  if (FDS_StringEnumTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringEnumTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  if (FDS_StringEnumTableRow::DefaultObject.ID.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringEnumTableRow::DefaultObject.ID.Data.AllocatorInstance.Data);
  }
  FDS_StringEnumTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c210

void __cdecl `dynamic_atexit_destructor_for_'FDS_StringErrorTableRow::DefaultObject__(void)

{
  if (FDS_StringErrorTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringErrorTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StringErrorTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c240

void __cdecl `dynamic_atexit_destructor_for_'FDS_StringItemTableRow::DefaultObject__(void)

{
  if (FDS_StringItemTableRow::DefaultObject.Text.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringItemTableRow::DefaultObject.Text.Data.AllocatorInstance.Data);
  }
  if (FDS_StringItemTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringItemTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StringItemTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c280

void __cdecl `dynamic_atexit_destructor_for_'FDS_StringMailTableRow::DefaultObject__(void)

{
  if (FDS_StringMailTableRow::DefaultObject.Text.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringMailTableRow::DefaultObject.Text.Data.AllocatorInstance.Data);
  }
  if (FDS_StringMailTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringMailTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StringMailTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c2c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_StringQuestTableRow::DefaultObject__(void)

{
  if (FDS_StringQuestTableRow::DefaultObject.Text.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringQuestTableRow::DefaultObject.Text.Data.AllocatorInstance.Data);
  }
  if (FDS_StringQuestTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringQuestTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StringQuestTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c300

void __cdecl `dynamic_atexit_destructor_for_'FDS_StringUiTableRow::DefaultObject__(void)

{
  if (FDS_StringUiTableRow::DefaultObject.Text.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringUiTableRow::DefaultObject.Text.Data.AllocatorInstance.Data);
  }
  if (FDS_StringUiTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringUiTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StringUiTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c340

void __cdecl `dynamic_atexit_destructor_for_'FDS_StringWorldTableRow::DefaultObject__(void)

{
  if (FDS_StringWorldTableRow::DefaultObject.Text.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringWorldTableRow::DefaultObject.Text.Data.AllocatorInstance.Data);
  }
  if (FDS_StringWorldTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StringWorldTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StringWorldTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c380

void __cdecl `dynamic_atexit_destructor_for_'FDS_StuffBaseTableRow::DefaultObject__(void)

{
  if (FDS_StuffBaseTableRow::DefaultObject.ID_Interaction.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffBaseTableRow::DefaultObject.ID_Interaction.AllocatorInstance.Data);
  }
  if (FDS_StuffBaseTableRow::DefaultObject.ID_GimmickEvent.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffBaseTableRow::DefaultObject.ID_GimmickEvent.AllocatorInstance.Data);
  }
  if (FDS_StuffBaseTableRow::DefaultObject.ID_Trigger.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffBaseTableRow::DefaultObject.ID_Trigger.AllocatorInstance.Data);
  }
  if (FDS_StuffBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StuffBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c3f0

void __cdecl `dynamic_atexit_destructor_for_'FDS_StuffGatherTableRow::DefaultObject__(void)

{
  if (FDS_StuffGatherTableRow::DefaultObject.PlayerSkillGrade.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffGatherTableRow::DefaultObject.PlayerSkillGrade.AllocatorInstance.Data);
  }
  if (FDS_StuffGatherTableRow::DefaultObject.PlayerSkillLevel.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffGatherTableRow::DefaultObject.PlayerSkillLevel.AllocatorInstance.Data);
  }
  if (FDS_StuffGatherTableRow::DefaultObject.PlayerSkillType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffGatherTableRow::DefaultObject.PlayerSkillType.AllocatorInstance.Data);
  }
  if (FDS_StuffGatherTableRow::DefaultObject.CostItemValue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffGatherTableRow::DefaultObject.CostItemValue.AllocatorInstance.Data);
  }
  if (FDS_StuffGatherTableRow::DefaultObject.ID_CostItem.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffGatherTableRow::DefaultObject.ID_CostItem.AllocatorInstance.Data);
  }
  FDS_StuffGatherTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c470

void __cdecl `dynamic_atexit_destructor_for_'FDS_StuffPortalTableRow::DefaultObject__(void)

{
  if (FDS_StuffPortalTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffPortalTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StuffPortalTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c4a0

void __cdecl `dynamic_atexit_destructor_for_'FDS_StuffQuestBoardTableRow::DefaultObject__(void)

{
  if (FDS_StuffQuestBoardTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffQuestBoardTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StuffQuestBoardTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c4d0

void __cdecl `dynamic_atexit_destructor_for_'FDS_StuffQuestTableRow::DefaultObject__(void)

{
  if (FDS_StuffQuestTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffQuestTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StuffQuestTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c500

void __cdecl `dynamic_atexit_destructor_for_'FDS_StuffSpawnEditorTableRow::DefaultObject__(void)

{
  if (FDS_StuffSpawnEditorTableRow::DefaultObject.Memo.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffSpawnEditorTableRow::DefaultObject.Memo.Data.AllocatorInstance.Data);
  }
  if (FDS_StuffSpawnEditorTableRow::DefaultObject.SubFolderPath.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffSpawnEditorTableRow::DefaultObject.SubFolderPath.Data.AllocatorInstance.
                  Data);
  }
  FDS_StuffSpawnEditorTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c540

void __cdecl `dynamic_atexit_destructor_for_'FDS_StuffSpawnGroupTableRow::DefaultObject__(void)

{
  if (FDS_StuffSpawnGroupTableRow::DefaultObject.ID_BannedTerritory.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffSpawnGroupTableRow::DefaultObject.ID_BannedTerritory.AllocatorInstance.
                  Data);
  }
  if (FDS_StuffSpawnGroupTableRow::DefaultObject.ID_Territory.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffSpawnGroupTableRow::DefaultObject.ID_Territory.AllocatorInstance.Data);
  }
  if (FDS_StuffSpawnGroupTableRow::DefaultObject.DataStageString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffSpawnGroupTableRow::DefaultObject.DataStageString.Data.AllocatorInstance.
                  Data);
  }
  FDS_StuffSpawnGroupTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c590

void __cdecl `dynamic_atexit_destructor_for_'FDS_StuffSpawnQuestTableRow::DefaultObject__(void)

{
  if (FDS_StuffSpawnQuestTableRow::DefaultObject.DataStageString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffSpawnQuestTableRow::DefaultObject.DataStageString.Data.AllocatorInstance.
                  Data);
  }
  FDS_StuffSpawnQuestTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c5c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_StuffSpawnTableRow::DefaultObject__(void)

{
  if (FDS_StuffSpawnTableRow::DefaultObject.StuffSpawnChance.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffSpawnTableRow::DefaultObject.StuffSpawnChance.AllocatorInstance.Data);
  }
  if (FDS_StuffSpawnTableRow::DefaultObject.ID_Stuff.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffSpawnTableRow::DefaultObject.ID_Stuff.AllocatorInstance.Data);
  }
  if (FDS_StuffSpawnTableRow::DefaultObject.DataStageString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffSpawnTableRow::DefaultObject.DataStageString.Data.AllocatorInstance.Data)
    ;
  }
  FDS_StuffSpawnTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c610

void __cdecl `dynamic_atexit_destructor_for_'FDS_StuffWarpDeviceTableRow::DefaultObject__(void)

{
  if (FDS_StuffWarpDeviceTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_StuffWarpDeviceTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_StuffWarpDeviceTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c640

void __cdecl `dynamic_atexit_destructor_for_'FDS_SummonAltarTableRow::DefaultObject__(void)

{
  if (FDS_SummonAltarTableRow::DefaultObject.ID_ResourceEffect.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SummonAltarTableRow::DefaultObject.ID_ResourceEffect.AllocatorInstance.Data);
  }
  if (FDS_SummonAltarTableRow::DefaultObject.ID_SpawnNpcAltar.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SummonAltarTableRow::DefaultObject.ID_SpawnNpcAltar.AllocatorInstance.Data);
  }
  if (FDS_SummonAltarTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SummonAltarTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_SummonAltarTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c690

void __cdecl `dynamic_atexit_destructor_for_'FDS_SummonBossTableRow::DefaultObject__(void)

{
  if (FDS_SummonBossTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SummonBossTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_SummonBossTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c6c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_SummonNpcTableRow::DefaultObject__(void)

{
  FDS_SummonNpcTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c6e0

void __cdecl `dynamic_atexit_destructor_for_'FDS_SustainDecayTableRow::DefaultObject__(void)

{
  if (FDS_SustainDecayTableRow::DefaultObject.ItemDecayTargetEquipSlotType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SustainDecayTableRow::DefaultObject.ItemDecayTargetEquipSlotType.
                  AllocatorInstance.Data);
  }
  FDS_SustainDecayTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c710

void __cdecl `dynamic_atexit_destructor_for_'FDS_SustainPenaltyTableRow::DefaultObject__(void)

{
  if (FDS_SustainPenaltyTableRow::DefaultObject.ID_Buff.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SustainPenaltyTableRow::DefaultObject.ID_Buff.AllocatorInstance.Data);
  }
  if (FDS_SustainPenaltyTableRow::DefaultObject.ID_MountBuff.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SustainPenaltyTableRow::DefaultObject.ID_MountBuff.AllocatorInstance.Data);
  }
  if (FDS_SustainPenaltyTableRow::DefaultObject.ID_PlayerBuff.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SustainPenaltyTableRow::DefaultObject.ID_PlayerBuff.AllocatorInstance.Data);
  }
  FDS_SustainPenaltyTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c760

void __cdecl `dynamic_atexit_destructor_for_'FDS_SvrResCellDataMapTableRow::DefaultObject__(void)

{
  if (FDS_SvrResCellDataMapTableRow::DefaultObject.DistrictIdMapPath.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SvrResCellDataMapTableRow::DefaultObject.DistrictIdMapPath.Data.
                  AllocatorInstance.Data);
  }
  if (FDS_SvrResCellDataMapTableRow::DefaultObject.ZoneIdMapPath.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SvrResCellDataMapTableRow::DefaultObject.ZoneIdMapPath.Data.AllocatorInstance.
                  Data);
  }
  if (FDS_SvrResCellDataMapTableRow::DefaultObject.HeightMapPath.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SvrResCellDataMapTableRow::DefaultObject.HeightMapPath.Data.AllocatorInstance.
                  Data);
  }
  if (FDS_SvrResCellDataMapTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SvrResCellDataMapTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_SvrResCellDataMapTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c7d0

void __cdecl `dynamic_atexit_destructor_for_'FDS_SvrResNavMeshTableRow::DefaultObject__(void)

{
  DestructItems<FString,int>
            ((FString *)FDS_SvrResNavMeshTableRow::DefaultObject.NavMeshPath.AllocatorInstance.Data,
             FDS_SvrResNavMeshTableRow::DefaultObject.NavMeshPath.ArrayNum);
  if (FDS_SvrResNavMeshTableRow::DefaultObject.NavMeshPath.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SvrResNavMeshTableRow::DefaultObject.NavMeshPath.AllocatorInstance.Data);
  }
  if (FDS_SvrResNavMeshTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SvrResNavMeshTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_SvrResNavMeshTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c830

void __cdecl `dynamic_atexit_destructor_for_'FDS_SvrResVoxelDatasTableRow::DefaultObject__(void)

{
  DestructItems<FString,int>
            ((FString *)
             FDS_SvrResVoxelDatasTableRow::DefaultObject.VoxelDataPath.AllocatorInstance.Data,
             FDS_SvrResVoxelDatasTableRow::DefaultObject.VoxelDataPath.ArrayNum);
  if (FDS_SvrResVoxelDatasTableRow::DefaultObject.VoxelDataPath.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SvrResVoxelDatasTableRow::DefaultObject.VoxelDataPath.AllocatorInstance.Data);
  }
  if (FDS_SvrResVoxelDatasTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SvrResVoxelDatasTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_SvrResVoxelDatasTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c890

void __cdecl `dynamic_atexit_destructor_for_'FDS_SvrResWaterVolumeTableRow::DefaultObject__(void)

{
  if (FDS_SvrResWaterVolumeTableRow::DefaultObject.WaterVolumeJson.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SvrResWaterVolumeTableRow::DefaultObject.WaterVolumeJson.Data.
                  AllocatorInstance.Data);
  }
  FDS_SvrResWaterVolumeTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c8c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_SvrResZone3dVolumeTableRow::DefaultObject__(void)

{
  if (FDS_SvrResZone3dVolumeTableRow::DefaultObject.Zone3dJson.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SvrResZone3dVolumeTableRow::DefaultObject.Zone3dJson.Data.AllocatorInstance.
                  Data);
  }
  if (FDS_SvrResZone3dVolumeTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_SvrResZone3dVolumeTableRow::DefaultObject.Version.Data.AllocatorInstance.Data)
    ;
  }
  FDS_SvrResZone3dVolumeTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c900

void __cdecl `dynamic_atexit_destructor_for_'FDS_TimeCoolDownTableRow::DefaultObject__(void)

{
  if (FDS_TimeCoolDownTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_TimeCoolDownTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_TimeCoolDownTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c930

void __cdecl `dynamic_atexit_destructor_for_'FDS_TimeSchedulerTableRow::DefaultObject__(void)

{
  if (FDS_TimeSchedulerTableRow::DefaultObject.RepeatTime.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_TimeSchedulerTableRow::DefaultObject.RepeatTime.Data.AllocatorInstance.Data);
  }
  FDS_TimeSchedulerTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c960

void __cdecl `dynamic_atexit_destructor_for_'FDS_TransportBaseTableRow::DefaultObject__(void)

{
  if (FDS_TransportBaseTableRow::DefaultObject.BoardingRange.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_TransportBaseTableRow::DefaultObject.BoardingRange.AllocatorInstance.Data);
  }
  if (FDS_TransportBaseTableRow::DefaultObject.ID_LogoutWarpLocation.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_TransportBaseTableRow::DefaultObject.ID_LogoutWarpLocation.AllocatorInstance.
                  Data);
  }
  if (FDS_TransportBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_TransportBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_TransportBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043c9b0

void __cdecl `dynamic_atexit_destructor_for_'FDS_TransportRouteTableRow::DefaultObject__(void)

{
  FDS_TransportRouteTableRow::~FDS_TransportRouteTableRow
            (&FDS_TransportRouteTableRow::DefaultObject);
  return;
}

// DefaultObject'' @ 15043c9d0

void __cdecl `dynamic_atexit_destructor_for_'FDS_TransportSpawnTableRow::DefaultObject__(void)

{
  if (FDS_TransportSpawnTableRow::DefaultObject.DataStageString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_TransportSpawnTableRow::DefaultObject.DataStageString.Data.AllocatorInstance.
                  Data);
  }
  FDS_TransportSpawnTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043ca00

void __cdecl `dynamic_atexit_destructor_for_'FDS_TriggerBaseTableRow::DefaultObject__(void)

{
  if (FDS_TriggerBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_TriggerBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_TriggerBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043ca30

void __cdecl `dynamic_atexit_destructor_for_'FDS_UniqueBpTableRow::DefaultObject__(void)

{
  if (FDS_UniqueBpTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_UniqueBpTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_UniqueBpTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043ca60

void __cdecl `dynamic_atexit_destructor_for_'FDS_VolumeTableRow::DefaultObject__(void)

{
  FDS_VolumeTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'LogTBLCommandlet'' @ 15043ca80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTBLCommandlet__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTBLCommandlet);
  return;
}

