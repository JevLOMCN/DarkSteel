// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 114

// DefaultObject'' @ 141270040

void __cdecl `dynamic_initializer_for_'FDS_AccelWaitCompleteTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_AccelWaitCompleteTableRow::DefaultObject.Version,L"");
  FDS_AccelWaitCompleteTableRow::DefaultObject.ItemType.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_AccelWaitCompleteTableRow::DefaultObject.ItemType.ArrayNum = 0;
  FDS_AccelWaitCompleteTableRow::DefaultObject.ItemType.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_AccelWaitCompleteTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270080

void __cdecl `dynamic_initializer_for_'FDS_AchievementBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_AchievementBaseTableRow::DefaultObject.Version,L"");
  FDS_AchievementBaseTableRow::DefaultObject.AchievementCategory = None;
  FDS_AchievementBaseTableRow::DefaultObject.AchievementGroupId = 0;
  FDS_AchievementBaseTableRow::DefaultObject.AchievementGroupStep = 0;
  FDS_AchievementBaseTableRow::DefaultObject.IsVisible = false;
  FDS_AchievementBaseTableRow::DefaultObject.IsAutoComplete = false;
  FDS_AchievementBaseTableRow::DefaultObject.ID_Icon = 0;
  FDS_AchievementBaseTableRow::DefaultObject.ID_Title = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_AchievementBaseTableRow::DefaultObject.ID_Explanation = (FDS_StringBaseID)ZEXT816(0x1523de678)
  ;
  FDS_AchievementBaseTableRow::DefaultObject.ID_AchievementDefine = 0;
  FDS_AchievementBaseTableRow::DefaultObject.AchievementDefineCount = 0;
  FDS_AchievementBaseTableRow::DefaultObject.AchievementDefineCountAccrue = 0;
  FDS_AchievementBaseTableRow::DefaultObject.MaxCountAccumulation = false;
  FDS_AchievementBaseTableRow::DefaultObject.IsCountIndication = false;
  FDS_AchievementBaseTableRow::DefaultObject.IsProgressIndication = false;
  FDS_AchievementBaseTableRow::DefaultObject.ID_AchievementReward = 0;
  FDS_AchievementBaseTableRow::DefaultObject.AchievementCompletionMessage =
       (FDS_StringUiID)ZEXT816(0x1523de688);
  atexit(`dynamic_atexit_destructor_for_'FDS_AchievementBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270140

void __cdecl `dynamic_initializer_for_'FDS_AchievementDefineTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_AchievementDefineTableRow::DefaultObject.Version,L"");
  FDS_AchievementDefineTableRow::DefaultObject.AchievementDefine = None;
  FDS_AchievementDefineTableRow::DefaultObject.AchievementDefineValue1 = 0;
  FDS_AchievementDefineTableRow::DefaultObject.AchievementDefineValue2 = 0;
  FDS_AchievementDefineTableRow::DefaultObject.OperationType = None;
  atexit(`dynamic_atexit_destructor_for_'FDS_AchievementDefineTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270190

void __cdecl `dynamic_initializer_for_'FDS_AchievementRewardTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_AchievementRewardTableRow::DefaultObject.Version,L"");
  FDS_AchievementRewardTableRow::DefaultObject.AchievementExp = 0;
  FDS_AchievementRewardTableRow::DefaultObject.RewardMoneyType.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_AchievementRewardTableRow::DefaultObject.RewardMoneyType.ArrayNum = 0;
  FDS_AchievementRewardTableRow::DefaultObject.RewardMoneyType.ArrayMax = 0;
  FDS_AchievementRewardTableRow::DefaultObject.RewardMoneyCount.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_AchievementRewardTableRow::DefaultObject.RewardMoneyCount.ArrayNum = 0;
  FDS_AchievementRewardTableRow::DefaultObject.RewardMoneyCount.ArrayMax = 0;
  FDS_AchievementRewardTableRow::DefaultObject.ID_RewardItemId.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_AchievementRewardTableRow::DefaultObject.ID_RewardItemId.ArrayNum = 0;
  FDS_AchievementRewardTableRow::DefaultObject.ID_RewardItemId.ArrayMax = 0;
  FDS_AchievementRewardTableRow::DefaultObject.RewardItemCount.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_AchievementRewardTableRow::DefaultObject.RewardItemCount.ArrayNum = 0;
  FDS_AchievementRewardTableRow::DefaultObject.RewardItemCount.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_AchievementRewardTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270200

void __cdecl `dynamic_initializer_for_'FDS_ActionAirWalkTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ActionAirWalkTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270220

void __cdecl `dynamic_initializer_for_'FDS_ActionBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ActionBaseTableRow::DefaultObject.Version,L"");
  FDS_ActionBaseTableRow::DefaultObject.ID_Icon = 0;
  FDS_ActionBaseTableRow::DefaultObject.ID_RequestQuest = 0;
  FDS_ActionBaseTableRow::DefaultObject.RequestPlayerLevel = 0;
  FDS_ActionBaseTableRow::DefaultObject.Order = 0;
  FDS_ActionBaseTableRow::DefaultObject.ID_TimeCoolDown = None;
  FDS_ActionBaseTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_ActionBaseTableRow::DefaultObject.ID_Description = (FDS_StringBaseID)ZEXT816(0x1523de678);
  atexit(`dynamic_atexit_destructor_for_'FDS_ActionBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412702a0

void __cdecl `dynamic_initializer_for_'FDS_ActionHandlingTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ActionHandlingTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412702c0

void __cdecl `dynamic_initializer_for_'FDS_ActionMountTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ActionMountTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412702e0

void __cdecl `dynamic_initializer_for_'FDS_ActionSwimTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ActionSwimTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270300

void __cdecl `dynamic_initializer_for_'FDS_AiGymCharacterCreateTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_AiGymCharacterCreateTableRow::DefaultObject.Version,L"");
  FDS_AiGymCharacterCreateTableRow::DefaultObject.Level = 0;
  FDS_AiGymCharacterCreateTableRow::DefaultObject.ID_Equipments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_AiGymCharacterCreateTableRow::DefaultObject.ID_Equipments.ArrayNum = 0;
  FDS_AiGymCharacterCreateTableRow::DefaultObject.ID_Equipments.ArrayMax = 0;
  FDS_AiGymCharacterCreateTableRow::DefaultObject.EquipAscend.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_AiGymCharacterCreateTableRow::DefaultObject.EquipAscend.ArrayNum = 0;
  FDS_AiGymCharacterCreateTableRow::DefaultObject.EquipAscend.ArrayMax = 0;
  FDS_AiGymCharacterCreateTableRow::DefaultObject.EquipItemLevel.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_AiGymCharacterCreateTableRow::DefaultObject.EquipItemLevel.ArrayNum = 0;
  FDS_AiGymCharacterCreateTableRow::DefaultObject.EquipItemLevel.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_AiGymCharacterCreateTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270360

void __cdecl `dynamic_initializer_for_'FDS_AiGymPlayerCreateTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_AiGymPlayerCreateTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270380

void __cdecl `dynamic_initializer_for_'FDS_BanNameTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_BanNameTableRow::DefaultObject.Text,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_BanNameTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412703b0

void __cdecl `dynamic_initializer_for_'FDS_BanWordTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_BanWordTableRow::DefaultObject.Text,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_BanWordTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412703e0

void __cdecl `dynamic_initializer_for_'FDS_BreachBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_BreachBaseTableRow::DefaultObject.Versionp,L"");
  FDS_BreachBaseTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_BreachBaseTableRow::DefaultObject.BreachContentsType = None;
  FDS_BreachBaseTableRow::DefaultObject.Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_BreachBaseTableRow::DefaultObject.Location.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_BreachBaseTableRow::DefaultObject.Location.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDS_BreachBaseTableRow::DefaultObject.BreachDetailType = None;
  FDS_BreachBaseTableRow::DefaultObject.MapIndex = None;
  FDS_BreachBaseTableRow::DefaultObject.DaliyPlayLimitCount = 0;
  FDS_BreachBaseTableRow::DefaultObject.ID_DailyLimitCountResetTime = 0;
  FDS_BreachBaseTableRow::DefaultObject.ID_RewardFirst = 0;
  FDS_BreachBaseTableRow::DefaultObject.ID_RewardRepeat = 0;
  FDS_BreachBaseTableRow::DefaultObject.ID_EffectActive = 0;
  FDS_BreachBaseTableRow::DefaultObject.ID_EffectDeactive = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_BreachBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270480

void __cdecl `dynamic_initializer_for_'FDS_BreachFormationPosTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_BreachFormationPosTableRow::DefaultObject.Version,L"");
  FDS_BreachFormationPosTableRow::DefaultObject.GroupID = 0;
  FDS_BreachFormationPosTableRow::DefaultObject.RelativeRotationYaw = 0.0;
  FDS_BreachFormationPosTableRow::DefaultObject.RelativeLocation =
       UE::Math::TVector2<double>::ZeroVector;
  atexit(`dynamic_atexit_destructor_for_'FDS_BreachFormationPosTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412704d0

void __cdecl `dynamic_initializer_for_'FDS_BreachFormationSpawnTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_BreachFormationSpawnTableRow::DefaultObject.Version,L"");
  FDS_BreachFormationSpawnTableRow::DefaultObject.GroupID = 0;
  FDS_BreachFormationSpawnTableRow::DefaultObject.ScriptGroupID = 0;
  FDS_BreachFormationSpawnTableRow::DefaultObject.ID_SpawnNpc.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachFormationSpawnTableRow::DefaultObject.ID_SpawnNpc.ArrayNum = 0;
  FDS_BreachFormationSpawnTableRow::DefaultObject.ID_SpawnNpc.ArrayMax = 0;
  FDS_BreachFormationSpawnTableRow::DefaultObject.ID_FormationNpc = 0;
  FDS_BreachFormationSpawnTableRow::DefaultObject.RotateYawNpc = 0.0;
  FDS_BreachFormationSpawnTableRow::DefaultObject.ID_SpawnStuff.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachFormationSpawnTableRow::DefaultObject.ID_SpawnStuff.ArrayNum = 0;
  FDS_BreachFormationSpawnTableRow::DefaultObject.ID_SpawnStuff.ArrayMax = 0;
  FDS_BreachFormationSpawnTableRow::DefaultObject.ID_FormationStuff = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_BreachFormationSpawnTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270530

void __cdecl `dynamic_initializer_for_'FDS_BreachRewardTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_BreachRewardTableRow::DefaultObject.Version,L"");
  FDS_BreachRewardTableRow::DefaultObject.RepeatPlaySection.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.RepeatPlaySection.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.RepeatPlaySection.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.PlayerExp.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.PlayerExp.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.PlayerExp.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.MoneyType.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.MoneyType.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.MoneyType.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.MoneyValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.MoneyValue.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.MoneyValue.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item01.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item01.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item01.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue01.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue01.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue01.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item02.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item02.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item02.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue02.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue02.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue02.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item03.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item03.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item03.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue03.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue03.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue03.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item04.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item04.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item04.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue04.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue04.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue04.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item05.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item05.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.ID_Item05.ArrayMax = 0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue05.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue05.ArrayNum = 0;
  FDS_BreachRewardTableRow::DefaultObject.ItemValue05.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_BreachRewardTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270630

void __cdecl `dynamic_initializer_for_'FDS_BubbleTalkBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_BubbleTalkBaseTableRow::DefaultObject.Version,L"");
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkGroupID = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkGroupCooltime = 0.0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkConditionType.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkConditionType.ArrayNum = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkConditionType.ArrayMax = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkConditionValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkConditionValue.ArrayNum = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkConditionValue.ArrayMax = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkType = None;
  FDS_BubbleTalkBaseTableRow::DefaultObject.ID_StringDialogue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.ID_StringDialogue.ArrayNum = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.ID_StringDialogue.ArrayMax = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkAnimation.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkAnimation.ArrayNum = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkAnimation.ArrayMax = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkKeepTime.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkKeepTime.ArrayNum = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkKeepTime.ArrayMax = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkRate.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkRate.ArrayNum = 0;
  FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkRate.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_BubbleTalkBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412706c0

void __cdecl `dynamic_initializer_for_'FDS_BuffAuraTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_BuffAuraTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412706e0

void __cdecl `dynamic_initializer_for_'FDS_BuffBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_BuffBaseTableRow::DefaultObject.EffectSocket,L"");
  FDS_BuffBaseTableRow::DefaultObject.ID_ExtinctionEffect = 0;
  ::FString::FString(&FDS_BuffBaseTableRow::DefaultObject.ExtinctionEffectSocket,L"");
  FDS_BuffBaseTableRow::DefaultObject.BuffEffectScale = 0.0;
  FDS_BuffBaseTableRow::DefaultObject.EffectHeight = 0;
  FDS_BuffBaseTableRow::DefaultObject.BuffIndexType.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BuffBaseTableRow::DefaultObject.BuffIndexType.ArrayNum = 0;
  FDS_BuffBaseTableRow::DefaultObject.BuffIndexType.ArrayMax = 0;
  FDS_BuffBaseTableRow::DefaultObject.BuffIndex.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BuffBaseTableRow::DefaultObject.BuffIndex.ArrayNum = 0;
  FDS_BuffBaseTableRow::DefaultObject.BuffIndex.ArrayMax = 0;
  FDS_BuffBaseTableRow::DefaultObject.BuffValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BuffBaseTableRow::DefaultObject.BuffValue.ArrayNum = 0;
  FDS_BuffBaseTableRow::DefaultObject.BuffValue.ArrayMax = 0;
  FDS_BuffBaseTableRow::DefaultObject.LevelUpBuffValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BuffBaseTableRow::DefaultObject.LevelUpBuffValue.ArrayNum = 0;
  FDS_BuffBaseTableRow::DefaultObject.LevelUpBuffValue.ArrayMax = 0;
  FDS_BuffBaseTableRow::DefaultObject.BuffValueEx.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_BuffBaseTableRow::DefaultObject.BuffValueEx.ArrayNum = 0;
  FDS_BuffBaseTableRow::DefaultObject.BuffValueEx.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_BuffBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270780

void __cdecl `dynamic_initializer_for_'FDS_BuffOverlapCallTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_BuffOverlapCallTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412707a0

void __cdecl `dynamic_initializer_for_'FDS_CameraCommonParamTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_CameraCommonParamTableRow::DefaultObject.Version,L"");
  ::FString::FString(&FDS_CameraCommonParamTableRow::DefaultObject.ParamName,L"");
  FDS_CameraCommonParamTableRow::DefaultObject.DataType = None;
  ::FString::FString(&FDS_CameraCommonParamTableRow::DefaultObject.ParamValue,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_CameraCommonParamTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270800

void __cdecl `dynamic_initializer_for_'FDS_CameraParametersTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_CameraParametersTableRow::DefaultObject.Version,L"");
  FDS_CameraParametersTableRow::DefaultObject.FOV = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.Distance = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.Pitch = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.Yaw = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.DistanceMin = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.DistanceMax = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.PitchMin = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.PitchMax = 0.0;
  ::FString::FString(&FDS_CameraParametersTableRow::DefaultObject.TargetSocket,L"");
  FDS_CameraParametersTableRow::DefaultObject.TargetingModeLagSpeed = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.SocketOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_CameraParametersTableRow::DefaultObject.SocketOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_CameraParametersTableRow::DefaultObject.TargetOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_CameraParametersTableRow::DefaultObject.TargetOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_CameraParametersTableRow::DefaultObject.SocketOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDS_CameraParametersTableRow::DefaultObject.TargetOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  ::FString::FString(&FDS_CameraParametersTableRow::DefaultObject.PitvotSocket,L"");
  FDS_CameraParametersTableRow::DefaultObject.IsMargin = false;
  FDS_CameraParametersTableRow::DefaultObject.PivotOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDS_CameraParametersTableRow::DefaultObject.PivotOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_CameraParametersTableRow::DefaultObject.PivotOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_CameraParametersTableRow::DefaultObject.AddPitchPositiveAngleMax = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.AddPitchNegativeAngleMax = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.ZoomInSocketOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_CameraParametersTableRow::DefaultObject.ZoomInSocketOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_CameraParametersTableRow::DefaultObject.AddPitchAngleLag = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.LagSpeed = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.LagMaxRange = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.DistanceLag = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.DistanceLagMaxRange = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.DistanceLagSpeed = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.YawLag = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.YawLagMaxAngle = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.YawLagSpeed = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.AddPitchAngleRestoreLag = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.AddPitchAngleSpeed = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.AddPitchAngleRestoreSpeed = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.AddPitchAngleStandardAxisY = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.AddPitchAngleVariancePerStandardAxisY = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.RecoveryWaitTime = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.RecoverySpeedDistance = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.RecoverySpeedPitch = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.RecoverySpeedYaw = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.TargetingModeLag = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.CamSensitivityUpdown = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.CamSensitivityLeftRight = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.CamSensitivityZoomInOut = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.MaximumRotateAnglePerSec = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.CameraZoomInOutLag = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.CameraRotationLag = 0.0;
  FDS_CameraParametersTableRow::DefaultObject.IsSlopeCam = false;
  FDS_CameraParametersTableRow::DefaultObject.ZoomInSocketOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDS_CameraParametersTableRow::DefaultObject.ZoomInSocketOffsetRange = 0.0;
  atexit(`dynamic_atexit_destructor_for_'FDS_CameraParametersTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270930

void __cdecl `dynamic_initializer_for_'FDS_CameraPresetTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_CameraPresetTableRow::DefaultObject.Version,L"");
  FDS_CameraPresetTableRow::DefaultObject.CameraState.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CameraPresetTableRow::DefaultObject.CameraState.ArrayNum = 0;
  FDS_CameraPresetTableRow::DefaultObject.CameraState.ArrayMax = 0;
  FDS_CameraPresetTableRow::DefaultObject.ID_CameraParameter.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CameraPresetTableRow::DefaultObject.ID_CameraParameter.ArrayNum = 0;
  FDS_CameraPresetTableRow::DefaultObject.ID_CameraParameter.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_CameraPresetTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270980

void __cdecl `dynamic_initializer_for_'FDS_CampBaseTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CampBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412709a0

void __cdecl `dynamic_initializer_for_'FDS_CharacterAscendTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CharacterAscendTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412709c0

void __cdecl `dynamic_initializer_for_'FDS_CharacterBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_CharacterBaseTableRow::DefaultObject.Version,L"");
  FDS_CharacterBaseTableRow::DefaultObject.UiOrder = 0;
  FDS_CharacterBaseTableRow::DefaultObject.Grade = None;
  FDS_CharacterBaseTableRow::DefaultObject.RaceType = None;
  FDS_CharacterBaseTableRow::DefaultObject.GenderType = None;
  FDS_CharacterBaseTableRow::DefaultObject.CharEquipType = None;
  FDS_CharacterBaseTableRow::DefaultObject.ElementType = NormalType;
  FDS_CharacterBaseTableRow::DefaultObject.DefaultHeightConditionType = Ground;
  FDS_CharacterBaseTableRow::DefaultObject.ID_ResourcePreset = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_DefaultSkin = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_NormalAttack.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_NormalAttack.ArrayNum = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_NormalAttack.ArrayMax = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_DefaultSkill.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_DefaultSkill.ArrayNum = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_DefaultSkill.ArrayMax = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_SwitchingSkill = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_SKillList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_AirWalkGroup = 0;
  FDS_CharacterBaseTableRow::DefaultObject.MaxAcceleration = 0.0;
  FDS_CharacterBaseTableRow::DefaultObject.MaxDeceleration = 0.0;
  FDS_CharacterBaseTableRow::DefaultObject.HandlingGradeHeavyLift = 0;
  FDS_CharacterBaseTableRow::DefaultObject.RealRaidus = 0;
  FDS_CharacterBaseTableRow::DefaultObject.WalkSpeed = 0.0;
  FDS_CharacterBaseTableRow::DefaultObject.RollSpeed = 0.0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_CharacterBaseTableRow::DefaultObject.ID_Title = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_CharacterBaseTableRow::DefaultObject.ID_ScenarioInfo = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_CharacterBaseTableRow::DefaultObject.Origin = (FDS_StringBaseID)ZEXT816(0x1523de678);
  FDS_CharacterBaseTableRow::DefaultObject.SummaryStatus.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_CharacterBaseTableRow::DefaultObject.SummaryStatus.ArrayNum = 0;
  FDS_CharacterBaseTableRow::DefaultObject.SummaryStatus.ArrayMax = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_AutoBattleBt = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_NormalSkill = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_TraitSkill = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_SpecialSkill = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_JumpSkill = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_AirDashSkill = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_SKillList.ArrayNum = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_SKillList.ArrayMax = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_NotInputRoll = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_InputRoll = 0;
  FDS_CharacterBaseTableRow::DefaultObject.RunSpeed = 0.0;
  FDS_CharacterBaseTableRow::DefaultObject.BattleRunSpeed = 0.0;
  FDS_CharacterBaseTableRow::DefaultObject.StateConGrade = 0;
  FDS_CharacterBaseTableRow::DefaultObject.MoveConGrade = 0;
  FDS_CharacterBaseTableRow::DefaultObject.MaxLevel = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_LevelGroup = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_AscendGroup = 0;
  FDS_CharacterBaseTableRow::DefaultObject.MaxEvolution = 0;
  FDS_CharacterBaseTableRow::DefaultObject.CharConvRewardItem = 0;
  FDS_CharacterBaseTableRow::DefaultObject.CharConvRewardItemCnt = 0;
  FDS_CharacterBaseTableRow::DefaultObject.ID_CameraPreset = 0;
  FDS_CharacterBaseTableRow::DefaultObject.InteractionOffset = 0;
  FDS_CharacterBaseTableRow::DefaultObject.HandlingGradeHold = 0;
  FDS_CharacterBaseTableRow::DefaultObject.HandlingGradeLift = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_CharacterBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270af0

void __cdecl `dynamic_initializer_for_'FDS_CharacterCreateTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CharacterCreateTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270b10

void __cdecl `dynamic_initializer_for_'FDS_CharacterEvolvingTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CharacterEvolvingTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270b30

void __cdecl `dynamic_initializer_for_'FDS_CharacterLevelTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CharacterLevelTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270b50

void __cdecl `dynamic_initializer_for_'FDS_CharacterLevelUpCostTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_CharacterLevelUpCostTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270b70

void __cdecl `dynamic_initializer_for_'FDS_CharacterSkinTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_CharacterSkinTableRow::DefaultObject.Version,L"");
  FDS_CharacterSkinTableRow::DefaultObject.UIOrder = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ID_ReqChar = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ID_Portrait = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ID_CardImg = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ID_ResourcePreset = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ID_OutGameResourcePreset = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ID_ResourceSequence = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ReqTemplateType = None;
  FDS_CharacterSkinTableRow::DefaultObject.ReqTemplateValue = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ReqItem = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ReqItemCnt = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ReqMoneyType = None;
  FDS_CharacterSkinTableRow::DefaultObject.ReqMoneyCnt = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ID_MoneyExchange = 0;
  FDS_CharacterSkinTableRow::DefaultObject.ID_SkinTitle = (FDS_StringBaseID)ZEXT816(0x1523de678);
  atexit(`dynamic_atexit_destructor_for_'FDS_CharacterSkinTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270c00

void __cdecl `dynamic_initializer_for_'FDS_ChattingBaseTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ChattingBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270c20

void __cdecl `dynamic_initializer_for_'FDS_ChattingCommandTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ChattingCommandTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270c40

void __cdecl `dynamic_initializer_for_'FDS_ChattingEmoteTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ChattingEmoteTableRow::DefaultObject.Version,L"");
  FDS_ChattingEmoteTableRow::DefaultObject.Order = 0;
  FDS_ChattingEmoteTableRow::DefaultObject.ID_Icon = 0;
  FDS_ChattingEmoteTableRow::DefaultObject.ID_Name = (FDS_StringBaseID)ZEXT816(0x1523de678);
  atexit(`dynamic_atexit_destructor_for_'FDS_ChattingEmoteTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141270ca0

void __cdecl `dynamic_initializer_for_'FDS_ChattingGroupIconListTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ChattingGroupIconListTableRow::DefaultObject.Version,L"");
  FDS_ChattingGroupIconListTableRow::DefaultObject.Order = 0;
  FDS_ChattingGroupIconListTableRow::DefaultObject.ID_Icon = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_ChattingGroupIconListTableRow::DefaultObject__);
  return;
}

// Empty'' @ 141270ce0

void __cdecl `dynamic_initializer_for_'FDS_NameTagDataCollection::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_NameTagDataCollection::Empty__);
  return;
}

// EmptyNameTagData'' @ 141270d00

void __cdecl `dynamic_initializer_for_'FDS_NameTagData::EmptyNameTagData__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_NameTagData::EmptyNameTagData__);
  return;
}

// OnChangedDisplayNameTag'' @ 141270d20

void __cdecl `dynamic_initializer_for_'UDS_NameTagDataAsset::OnChangedDisplayNameTag__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UDS_NameTagDataAsset::OnChangedDisplayNameTag__);
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 141270d40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 141270d60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 141270d80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 141270da0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 141270dc0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 141270de0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 141270e00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 141270e20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 141270e40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 141270e60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 141270e80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 141270ea0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 141270ec0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 141270ee0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 141270f00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 141270f20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 141270f40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 141270f60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 141270f80

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 141270fa0

void __cdecl _dynamic_initializer_for__CharSortingTypeList__(void)

{
  undefined2 local_res8;
  undefined1 local_resa;
  
  local_res8 = 0x605;
  local_resa = 7;
  CharSortingTypeList.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,3,0,&CharSortingTypeList.AllocatorInstance,3,&CharSortingTypeList.ArrayMax);
  memcpy(CharSortingTypeList.AllocatorInstance.Data,&local_res8,3);
  atexit(_dynamic_atexit_destructor_for__CharSortingTypeList__);
  return;
}

// `dynamic_initializer_for_'EmptyFloatingTextData'' @ 141271020

void __cdecl _dynamic_initializer_for__EmptyFloatingTextData__(void)

{
  FSlateBrush::FSlateBrush(&EmptyFloatingTextData.TextBrush);
  EmptyFloatingTextData.TextBrushID = 0;
  EmptyFloatingTextData.TextEffectColor = FLinearColor::White;
  EmptyFloatingTextData.AnimationSequenceList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  EmptyFloatingTextData.AnimationSequenceList.ArrayNum = 0;
  EmptyFloatingTextData.AnimationSequenceList.ArrayMax = 0;
  atexit(_dynamic_atexit_destructor_for__EmptyFloatingTextData__);
  return;
}

// `dynamic_initializer_for_'EmptyFloatingTextNumberData'' @ 141271070

void __cdecl _dynamic_initializer_for__EmptyFloatingTextNumberData__(void)

{
  atexit(_dynamic_atexit_destructor_for__EmptyFloatingTextNumberData__);
  return;
}

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 141271090

void __cdecl _dynamic_initializer_for__EquipCharSelectSortingTypeList__(void)

{
  undefined2 local_res8;
  undefined1 local_resa;
  
  local_res8 = 0xc0b;
  local_resa = 0xd;
  EquipCharSelectSortingTypeList.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,3,0,&EquipCharSelectSortingTypeList.AllocatorInstance,3,
             &EquipCharSelectSortingTypeList.ArrayMax);
  memcpy(EquipCharSelectSortingTypeList.AllocatorInstance.Data,&local_res8,3);
  atexit(_dynamic_atexit_destructor_for__EquipCharSelectSortingTypeList__);
  return;
}

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 141271110

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 141271130

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 141271150

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 141271170

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 141271190

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 1412711b0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1412711d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// get<1,TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementData>_const_&> @ 14b8ffa00

FDS_NameTagElementData * __cdecl
get<1,TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementData>_const_&>
          (TTuple<EDS_NameTagElementType,FDS_NameTagElementData> *param_1)

{
  return (FDS_NameTagElementData *)&param_1->field_0x4;
}

// get<0,TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementData>_const_&> @ 14b8ffa10

EDS_NameTagElementType * __cdecl
get<0,TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementData>_const_&>
          (TTuple<EDS_NameTagElementType,FDS_NameTagElementData> *param_1)

{
  return (EDS_NameTagElementType *)param_1;
}

// DefaultObject'' @ 150437c00

void __cdecl `dynamic_atexit_destructor_for_'FDS_AccelWaitCompleteTableRow::DefaultObject__(void)

{
  if (FDS_AccelWaitCompleteTableRow::DefaultObject.ItemType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AccelWaitCompleteTableRow::DefaultObject.ItemType.AllocatorInstance.Data);
  }
  if (FDS_AccelWaitCompleteTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AccelWaitCompleteTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_AccelWaitCompleteTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437c40

void __cdecl `dynamic_atexit_destructor_for_'FDS_AchievementBaseTableRow::DefaultObject__(void)

{
  if (FDS_AchievementBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AchievementBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_AchievementBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437c70

void __cdecl `dynamic_atexit_destructor_for_'FDS_AchievementDefineTableRow::DefaultObject__(void)

{
  if (FDS_AchievementDefineTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AchievementDefineTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_AchievementDefineTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437ca0

void __cdecl `dynamic_atexit_destructor_for_'FDS_AchievementRewardTableRow::DefaultObject__(void)

{
  if (FDS_AchievementRewardTableRow::DefaultObject.RewardItemCount.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AchievementRewardTableRow::DefaultObject.RewardItemCount.AllocatorInstance.
                  Data);
  }
  if (FDS_AchievementRewardTableRow::DefaultObject.ID_RewardItemId.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AchievementRewardTableRow::DefaultObject.ID_RewardItemId.AllocatorInstance.
                  Data);
  }
  if (FDS_AchievementRewardTableRow::DefaultObject.RewardMoneyCount.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AchievementRewardTableRow::DefaultObject.RewardMoneyCount.AllocatorInstance.
                  Data);
  }
  if (FDS_AchievementRewardTableRow::DefaultObject.RewardMoneyType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AchievementRewardTableRow::DefaultObject.RewardMoneyType.AllocatorInstance.
                  Data);
  }
  if (FDS_AchievementRewardTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AchievementRewardTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_AchievementRewardTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437d20

void __cdecl `dynamic_atexit_destructor_for_'FDS_ActionAirWalkTableRow::DefaultObject__(void)

{
  if (FDS_ActionAirWalkTableRow::DefaultObject.AvailableTime.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ActionAirWalkTableRow::DefaultObject.AvailableTime.AllocatorInstance.Data);
  }
  if (FDS_ActionAirWalkTableRow::DefaultObject.NextUseAirStep.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ActionAirWalkTableRow::DefaultObject.NextUseAirStep.AllocatorInstance.Data);
  }
  FDS_ActionAirWalkTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437d60

void __cdecl `dynamic_atexit_destructor_for_'FDS_ActionBaseTableRow::DefaultObject__(void)

{
  if (FDS_ActionBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ActionBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ActionBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437d90

void __cdecl `dynamic_atexit_destructor_for_'FDS_ActionHandlingTableRow::DefaultObject__(void)

{
  if (FDS_ActionHandlingTableRow::DefaultObject.ID_ActionBuffPC.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ActionHandlingTableRow::DefaultObject.ID_ActionBuffPC.AllocatorInstance.Data);
  }
  if (FDS_ActionHandlingTableRow::DefaultObject.ID_ActionBuff.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ActionHandlingTableRow::DefaultObject.ID_ActionBuff.AllocatorInstance.Data);
  }
  FDS_ActionHandlingTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437dd0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ActionMountTableRow::DefaultObject__(void)

{
  if (FDS_ActionMountTableRow::DefaultObject.AvailableTime.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ActionMountTableRow::DefaultObject.AvailableTime.AllocatorInstance.Data);
  }
  if (FDS_ActionMountTableRow::DefaultObject.NextUseStep.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ActionMountTableRow::DefaultObject.NextUseStep.AllocatorInstance.Data);
  }
  FDS_ActionMountTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437e10

void __cdecl `dynamic_atexit_destructor_for_'FDS_ActionSwimTableRow::DefaultObject__(void)

{
  if (FDS_ActionSwimTableRow::DefaultObject.AvailableTime.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ActionSwimTableRow::DefaultObject.AvailableTime.AllocatorInstance.Data);
  }
  if (FDS_ActionSwimTableRow::DefaultObject.NextUseStep.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ActionSwimTableRow::DefaultObject.NextUseStep.AllocatorInstance.Data);
  }
  FDS_ActionSwimTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437e50

void __cdecl `dynamic_atexit_destructor_for_'FDS_AiGymCharacterCreateTableRow::DefaultObject__(void)

{
  if (FDS_AiGymCharacterCreateTableRow::DefaultObject.EquipItemLevel.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AiGymCharacterCreateTableRow::DefaultObject.EquipItemLevel.AllocatorInstance.
                  Data);
  }
  if (FDS_AiGymCharacterCreateTableRow::DefaultObject.EquipAscend.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AiGymCharacterCreateTableRow::DefaultObject.EquipAscend.AllocatorInstance.Data
                 );
  }
  if (FDS_AiGymCharacterCreateTableRow::DefaultObject.ID_Equipments.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AiGymCharacterCreateTableRow::DefaultObject.ID_Equipments.AllocatorInstance.
                  Data);
  }
  if (FDS_AiGymCharacterCreateTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AiGymCharacterCreateTableRow::DefaultObject.Version.Data.AllocatorInstance.
                  Data);
  }
  FDS_AiGymCharacterCreateTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437ec0

void __cdecl `dynamic_atexit_destructor_for_'FDS_AiGymPlayerCreateTableRow::DefaultObject__(void)

{
  if (FDS_AiGymPlayerCreateTableRow::DefaultObject.ID_InitStackableItemCnt.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AiGymPlayerCreateTableRow::DefaultObject.ID_InitStackableItemCnt.
                  AllocatorInstance.Data);
  }
  if (FDS_AiGymPlayerCreateTableRow::DefaultObject.ID_InitStackableItem.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_AiGymPlayerCreateTableRow::DefaultObject.ID_InitStackableItem.
                  AllocatorInstance.Data);
  }
  FDS_AiGymPlayerCreateTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437f00

void __cdecl `dynamic_atexit_destructor_for_'FDS_BanNameTableRow::DefaultObject__(void)

{
  if (FDS_BanNameTableRow::DefaultObject.Text.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BanNameTableRow::DefaultObject.Text.Data.AllocatorInstance.Data);
  }
  FDS_BanNameTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437f30

void __cdecl `dynamic_atexit_destructor_for_'FDS_BanWordTableRow::DefaultObject__(void)

{
  if (FDS_BanWordTableRow::DefaultObject.Text.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BanWordTableRow::DefaultObject.Text.Data.AllocatorInstance.Data);
  }
  FDS_BanWordTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437f60

void __cdecl `dynamic_atexit_destructor_for_'FDS_BreachBaseTableRow::DefaultObject__(void)

{
  if (FDS_BreachBaseTableRow::DefaultObject.Versionp.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BreachBaseTableRow::DefaultObject.Versionp.Data.AllocatorInstance.Data);
  }
  FDS_BreachBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437f90

void __cdecl `dynamic_atexit_destructor_for_'FDS_BreachFormationPosTableRow::DefaultObject__(void)

{
  if (FDS_BreachFormationPosTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BreachFormationPosTableRow::DefaultObject.Version.Data.AllocatorInstance.Data)
    ;
  }
  FDS_BreachFormationPosTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150437fc0

void __cdecl `dynamic_atexit_destructor_for_'FDS_BreachFormationSpawnTableRow::DefaultObject__(void)

{
  if (FDS_BreachFormationSpawnTableRow::DefaultObject.ID_SpawnStuff.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BreachFormationSpawnTableRow::DefaultObject.ID_SpawnStuff.AllocatorInstance.
                  Data);
  }
  if (FDS_BreachFormationSpawnTableRow::DefaultObject.ID_SpawnNpc.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BreachFormationSpawnTableRow::DefaultObject.ID_SpawnNpc.AllocatorInstance.Data
                 );
  }
  if (FDS_BreachFormationSpawnTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BreachFormationSpawnTableRow::DefaultObject.Version.Data.AllocatorInstance.
                  Data);
  }
  FDS_BreachFormationSpawnTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438010

void __cdecl `dynamic_atexit_destructor_for_'FDS_BreachRewardTableRow::DefaultObject__(void)

{
  FDS_BreachRewardTableRow::~FDS_BreachRewardTableRow(&FDS_BreachRewardTableRow::DefaultObject);
  return;
}

// DefaultObject'' @ 150438030

void __cdecl `dynamic_atexit_destructor_for_'FDS_BubbleTalkBaseTableRow::DefaultObject__(void)

{
  if (FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkRate.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkRate.AllocatorInstance.Data);
  }
  if (FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkKeepTime.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkKeepTime.AllocatorInstance.
                  Data);
  }
  if (FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkAnimation.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkAnimation.AllocatorInstance.
                  Data);
  }
  if (FDS_BubbleTalkBaseTableRow::DefaultObject.ID_StringDialogue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BubbleTalkBaseTableRow::DefaultObject.ID_StringDialogue.AllocatorInstance.Data
                 );
  }
  if (FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkConditionValue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkConditionValue.
                  AllocatorInstance.Data);
  }
  if (FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkConditionType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BubbleTalkBaseTableRow::DefaultObject.BubbleTalkConditionType.
                  AllocatorInstance.Data);
  }
  if (FDS_BubbleTalkBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BubbleTalkBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_BubbleTalkBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504380d0

void __cdecl `dynamic_atexit_destructor_for_'FDS_BuffAuraTableRow::DefaultObject__(void)

{
  if (FDS_BuffAuraTableRow::DefaultObject.ID_BuffBase.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BuffAuraTableRow::DefaultObject.ID_BuffBase.AllocatorInstance.Data);
  }
  FDS_BuffAuraTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438100

void __cdecl `dynamic_atexit_destructor_for_'FDS_BuffBaseTableRow::DefaultObject__(void)

{
  FDS_BuffBaseTableRow::~FDS_BuffBaseTableRow(&FDS_BuffBaseTableRow::DefaultObject);
  return;
}

// DefaultObject'' @ 150438120

void __cdecl `dynamic_atexit_destructor_for_'FDS_BuffOverlapCallTableRow::DefaultObject__(void)

{
  if (FDS_BuffOverlapCallTableRow::DefaultObject.AttachBuffID.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_BuffOverlapCallTableRow::DefaultObject.AttachBuffID.AllocatorInstance.Data);
  }
  FDS_BuffOverlapCallTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438150

void __cdecl `dynamic_atexit_destructor_for_'FDS_CameraCommonParamTableRow::DefaultObject__(void)

{
  if (FDS_CameraCommonParamTableRow::DefaultObject.ParamValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CameraCommonParamTableRow::DefaultObject.ParamValue.Data.AllocatorInstance.
                  Data);
  }
  if (FDS_CameraCommonParamTableRow::DefaultObject.ParamName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CameraCommonParamTableRow::DefaultObject.ParamName.Data.AllocatorInstance.Data
                 );
  }
  if (FDS_CameraCommonParamTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CameraCommonParamTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_CameraCommonParamTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504381a0

void __cdecl `dynamic_atexit_destructor_for_'FDS_CameraParametersTableRow::DefaultObject__(void)

{
  if (FDS_CameraParametersTableRow::DefaultObject.PitvotSocket.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CameraParametersTableRow::DefaultObject.PitvotSocket.Data.AllocatorInstance.
                  Data);
  }
  if (FDS_CameraParametersTableRow::DefaultObject.TargetSocket.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CameraParametersTableRow::DefaultObject.TargetSocket.Data.AllocatorInstance.
                  Data);
  }
  if (FDS_CameraParametersTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CameraParametersTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_CameraParametersTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504381f0

void __cdecl `dynamic_atexit_destructor_for_'FDS_CameraPresetTableRow::DefaultObject__(void)

{
  if (FDS_CameraPresetTableRow::DefaultObject.ID_CameraParameter.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CameraPresetTableRow::DefaultObject.ID_CameraParameter.AllocatorInstance.Data)
    ;
  }
  if (FDS_CameraPresetTableRow::DefaultObject.CameraState.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CameraPresetTableRow::DefaultObject.CameraState.AllocatorInstance.Data);
  }
  if (FDS_CameraPresetTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CameraPresetTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_CameraPresetTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438240

void __cdecl `dynamic_atexit_destructor_for_'FDS_CampBaseTableRow::DefaultObject__(void)

{
  if (FDS_CampBaseTableRow::DefaultObject.PreviewAniPath.SubPathString.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CampBaseTableRow::DefaultObject.PreviewAniPath.SubPathString.Data.
                  AllocatorInstance.Data);
  }
  if (FDS_CampBaseTableRow::DefaultObject.AttachBuff.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CampBaseTableRow::DefaultObject.AttachBuff.AllocatorInstance.Data);
  }
  FDS_CampBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438280

void __cdecl `dynamic_atexit_destructor_for_'FDS_CharacterAscendTableRow::DefaultObject__(void)

{
  if (FDS_CharacterAscendTableRow::DefaultObject.ReqItemCnt.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterAscendTableRow::DefaultObject.ReqItemCnt.AllocatorInstance.Data);
  }
  if (FDS_CharacterAscendTableRow::DefaultObject.ReqItem.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterAscendTableRow::DefaultObject.ReqItem.AllocatorInstance.Data);
  }
  FDS_CharacterAscendTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504382c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_CharacterBaseTableRow::DefaultObject__(void)

{
  if (FDS_CharacterBaseTableRow::DefaultObject.ID_SKillList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterBaseTableRow::DefaultObject.ID_SKillList.AllocatorInstance.Data);
  }
  if (FDS_CharacterBaseTableRow::DefaultObject.ID_DefaultSkill.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterBaseTableRow::DefaultObject.ID_DefaultSkill.AllocatorInstance.Data);
  }
  if (FDS_CharacterBaseTableRow::DefaultObject.ID_NormalAttack.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterBaseTableRow::DefaultObject.ID_NormalAttack.AllocatorInstance.Data);
  }
  if (FDS_CharacterBaseTableRow::DefaultObject.SummaryStatus.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterBaseTableRow::DefaultObject.SummaryStatus.AllocatorInstance.Data);
  }
  if (FDS_CharacterBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_CharacterBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438340

void __cdecl `dynamic_atexit_destructor_for_'FDS_CharacterCreateTableRow::DefaultObject__(void)

{
  if (FDS_CharacterCreateTableRow::DefaultObject.ID_InitStackableItemCnt.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterCreateTableRow::DefaultObject.ID_InitStackableItemCnt.
                  AllocatorInstance.Data);
  }
  if (FDS_CharacterCreateTableRow::DefaultObject.ID_InitStackableItem.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterCreateTableRow::DefaultObject.ID_InitStackableItem.AllocatorInstance.
                  Data);
  }
  FDS_CharacterCreateTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438380

void __cdecl `dynamic_atexit_destructor_for_'FDS_CharacterEvolvingTableRow::DefaultObject__(void)

{
  if (FDS_CharacterEvolvingTableRow::DefaultObject.ID_Passive.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterEvolvingTableRow::DefaultObject.ID_Passive.AllocatorInstance.Data);
  }
  if (FDS_CharacterEvolvingTableRow::DefaultObject.StatusValue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterEvolvingTableRow::DefaultObject.StatusValue.AllocatorInstance.Data);
  }
  if (FDS_CharacterEvolvingTableRow::DefaultObject.StatusType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterEvolvingTableRow::DefaultObject.StatusType.AllocatorInstance.Data);
  }
  FDS_CharacterEvolvingTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504383d0

void __cdecl `dynamic_atexit_destructor_for_'FDS_CharacterLevelTableRow::DefaultObject__(void)

{
  if (FDS_CharacterLevelTableRow::DefaultObject.StatusValue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterLevelTableRow::DefaultObject.StatusValue.AllocatorInstance.Data);
  }
  if (FDS_CharacterLevelTableRow::DefaultObject.StatusType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterLevelTableRow::DefaultObject.StatusType.AllocatorInstance.Data);
  }
  FDS_CharacterLevelTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438410

void __cdecl `dynamic_atexit_destructor_for_'FDS_CharacterLevelUpCostTableRow::DefaultObject__(void)

{
  if (FDS_CharacterLevelUpCostTableRow::DefaultObject.ReqMoneyValue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterLevelUpCostTableRow::DefaultObject.ReqMoneyValue.AllocatorInstance.
                  Data);
  }
  if (FDS_CharacterLevelUpCostTableRow::DefaultObject.ReqMoneyType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterLevelUpCostTableRow::DefaultObject.ReqMoneyType.AllocatorInstance.
                  Data);
  }
  FDS_CharacterLevelUpCostTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438450

void __cdecl `dynamic_atexit_destructor_for_'FDS_CharacterSkinTableRow::DefaultObject__(void)

{
  if (FDS_CharacterSkinTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_CharacterSkinTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_CharacterSkinTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 150438480

void __cdecl `dynamic_atexit_destructor_for_'FDS_ChattingBaseTableRow::DefaultObject__(void)

{
  FDS_ChattingBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504384a0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ChattingCommandTableRow::DefaultObject__(void)

{
  FDS_ChattingCommandTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504384c0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ChattingEmoteTableRow::DefaultObject__(void)

{
  if (FDS_ChattingEmoteTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ChattingEmoteTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ChattingEmoteTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 1504384f0

void __cdecl
`dynamic_atexit_destructor_for_'FDS_ChattingGroupIconListTableRow::DefaultObject__(void)

{
  if (FDS_ChattingGroupIconListTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ChattingGroupIconListTableRow::DefaultObject.Version.Data.AllocatorInstance.
                  Data);
  }
  FDS_ChattingGroupIconListTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// Empty'' @ 150438520

void __cdecl `dynamic_atexit_destructor_for_'FDS_NameTagDataCollection::Empty__(void)

{
  FDS_NameTagDataCollection::Empty.NameTagDataMap._72_4_ = 0;
  if (FDS_NameTagDataCollection::Empty.NameTagDataMap._64_8_ != 0) {
    FMemory::Free((void *)FDS_NameTagDataCollection::Empty.NameTagDataMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FDS_NameTagDataCollection::Empty.NameTagDataMap);
  FDS_NameTagDataCollection::Empty.AlphaDataMap._72_4_ = 0;
  if (FDS_NameTagDataCollection::Empty.AlphaDataMap._64_8_ != 0) {
    FMemory::Free((void *)FDS_NameTagDataCollection::Empty.AlphaDataMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FDS_NameTagDataCollection::Empty.AlphaDataMap);
  return;
}

// EmptyNameTagData'' @ 150438580

void __cdecl `dynamic_atexit_destructor_for_'FDS_NameTagData::EmptyNameTagData__(void)

{
  FDS_NameTagData::EmptyNameTagData.ElementDataMap._72_4_ = 0;
  if (FDS_NameTagData::EmptyNameTagData.ElementDataMap._64_8_ != 0) {
    FMemory::Free((void *)FDS_NameTagData::EmptyNameTagData.ElementDataMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FDS_NameTagData::EmptyNameTagData.ElementDataMap);
  return;
}

// OnChangedDisplayNameTag'' @ 1504385c0

void __cdecl `dynamic_atexit_destructor_for_'UDS_NameTagDataAsset::OnChangedDisplayNameTag__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UDS_NameTagDataAsset::OnChangedDisplayNameTag._8_8_,
             UDS_NameTagDataAsset::OnChangedDisplayNameTag._16_4_);
  if (UDS_NameTagDataAsset::OnChangedDisplayNameTag._8_8_ != 0) {
    FMemory::Free((void *)UDS_NameTagDataAsset::OnChangedDisplayNameTag._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UDS_NameTagDataAsset::OnChangedDisplayNameTag);
  return;
}

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 150438600

void __cdecl _dynamic_atexit_destructor_for__CharSortingTypeList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CharSortingTypeList.AllocatorInstance.Data;
  if (CharSortingTypeList.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CharSortingTypeList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyFloatingTextData'' @ 150438620

void __cdecl _dynamic_atexit_destructor_for__EmptyFloatingTextData__(void)

{
  if (EmptyFloatingTextData.AnimationSequenceList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyFloatingTextData.AnimationSequenceList.AllocatorInstance.Data);
  }
  EmptyFloatingTextData.TextBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (EmptyFloatingTextData.TextBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyFloatingTextNumberData'' @ 150438660

void __cdecl _dynamic_atexit_destructor_for__EmptyFloatingTextNumberData__(void)

{
  if (EmptyFloatingTextNumberData.IconIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(EmptyFloatingTextNumberData.IconIDs.AllocatorInstance.Data);
  }
  if (EmptyFloatingTextNumberData.AnimationSequenceList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyFloatingTextNumberData.AnimationSequenceList.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 1504386a0

void __cdecl _dynamic_atexit_destructor_for__EquipCharSelectSortingTypeList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EquipCharSelectSortingTypeList.AllocatorInstance.Data;
  if (EquipCharSelectSortingTypeList.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EquipCharSelectSortingTypeList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

