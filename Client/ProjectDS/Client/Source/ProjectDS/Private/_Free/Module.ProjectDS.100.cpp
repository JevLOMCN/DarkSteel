// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 240

// Bit'' @ 141278210

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::Bit__(void)

{
  FWidgetStateBitfield::FWidgetStateBitfield(&UWidgetLockedStateRegistration::Bit);
  return;
}

// DefaultObject'' @ 141278230

void __cdecl `dynamic_initializer_for_'FDS_WarpBaseTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_WarpBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141278250

void __cdecl `dynamic_initializer_for_'FDS_WarpLocationTableRow::DefaultObject__(void)

{
  FDS_WarpLocationTableRow::DefaultObject.WarpLocationCoordinate.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_WarpLocationTableRow::DefaultObject.WarpLocationCoordinate.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_WarpLocationTableRow::DefaultObject.WarpLocationCoordinate.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  atexit(`dynamic_atexit_destructor_for_'FDS_WarpLocationTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141278280

void __cdecl `dynamic_initializer_for_'FDS_WaterVolumeTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_WaterVolumeTableRow::DefaultObject.UniqueID,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_WaterVolumeTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412782b0

void __cdecl `dynamic_initializer_for_'FDS_WeaponTypeBaseTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_WeaponTypeBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412782d0

void __cdecl `dynamic_initializer_for_'FDS_WindowBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_WindowBaseTableRow::DefaultObject.Version,L"");
  FDS_WindowBaseTableRow::DefaultObject.WindowLayerGroupType = None;
  FDS_WindowBaseTableRow::DefaultObject.WindowInstanceType = None;
  FDS_WindowBaseTableRow::DefaultObject.IsUseUiScale = false;
  FDS_WindowBaseTableRow::DefaultObject.WindowAnchorType = None;
  FDS_WindowBaseTableRow::DefaultObject.IsClose = false;
  FDS_WindowBaseTableRow::DefaultObject.Subordination = None;
  FDS_WindowBaseTableRow::DefaultObject.DefaultPosition = UE::Math::TVector2<double>::ZeroVector;
  FDS_WindowBaseTableRow::DefaultObject.TestID = 0;
  FDS_WindowBaseTableRow::DefaultObject.DefaultSize = UE::Math::TVector2<double>::ZeroVector;
  FDS_WindowBaseTableRow::DefaultObject.WidgetPath.AssetPath = (FTopLevelAssetPath)ZEXT816(0);
  FDS_WindowBaseTableRow::DefaultObject.WidgetPath.SubPathString.Data =
       (TArray<char8_t,TSizedDefaultAllocator<32>_>)ZEXT816(0);
  ::FString::FString(&FDS_WindowBaseTableRow::DefaultObject.WindowOverDelay,L"");
  ::FString::FString(&FDS_WindowBaseTableRow::DefaultObject.WindowHideDelay,L"");
  FDS_WindowBaseTableRow::DefaultObject.InputMappingType = None;
  atexit(`dynamic_atexit_destructor_for_'FDS_WindowBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141278390

void __cdecl `dynamic_initializer_for_'FDS_WindowGroupTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_WindowGroupTableRow::DefaultObject.Version,L"");
  FDS_WindowGroupTableRow::DefaultObject.ID_WindowWidget.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_WindowGroupTableRow::DefaultObject.ID_WindowWidget.ArrayNum = 0;
  FDS_WindowGroupTableRow::DefaultObject.ID_WindowWidget.ArrayMax = 0;
  FDS_WindowGroupTableRow::DefaultObject.TestID = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_WindowGroupTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412783e0

void __cdecl `dynamic_initializer_for_'FDS_WindowRewardResultTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_WindowRewardResultTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141278400

void __cdecl `dynamic_initializer_for_'FDS_WorldBaseTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_WorldBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141278420

void __cdecl `dynamic_initializer_for_'FDS_WorldBossTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_WorldBossTableRow::DefaultObject.Version,L"");
  FDS_WorldBossTableRow::DefaultObject.ID_NpcBase = 0;
  FDS_WorldBossTableRow::DefaultObject.Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_WorldBossTableRow::DefaultObject.Location.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_WorldBossTableRow::DefaultObject.Location.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDS_WorldBossTableRow::DefaultObject.ID_DescSid = 0;
  FDS_WorldBossTableRow::DefaultObject.ID_ListIcon = 0;
  FDS_WorldBossTableRow::DefaultObject.ID_Spawn = 0;
  FDS_WorldBossTableRow::DefaultObject.IslandNumber = 0;
  FDS_WorldBossTableRow::DefaultObject.RotateYaw = 0.0;
  FDS_WorldBossTableRow::DefaultObject.AlarmTime = 0.0;
  FDS_WorldBossTableRow::DefaultObject.ID_SpawnSchedule = 0;
  FDS_WorldBossTableRow::DefaultObject.LifeTime = 0.0;
  FDS_WorldBossTableRow::DefaultObject.DeleteAlarmTime = 0.0;
  FDS_WorldBossTableRow::DefaultObject.ID_Image = 0;
  FDS_WorldBossTableRow::DefaultObject.ID_ZoneBase = 0;
  FDS_WorldBossTableRow::DefaultObject.ID_SpawnPreAppear.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_WorldBossTableRow::DefaultObject.ID_SpawnPreAppear.ArrayNum = 0;
  FDS_WorldBossTableRow::DefaultObject.ID_SpawnPreAppear.ArrayMax = 0;
  FDS_WorldBossTableRow::DefaultObject.ID_SpawnAppear.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FDS_WorldBossTableRow::DefaultObject.ID_SpawnAppear.ArrayNum = 0;
  FDS_WorldBossTableRow::DefaultObject.ID_SpawnAppear.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_WorldBossTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412784c0

void __cdecl `dynamic_initializer_for_'FDS_WorldInfoBaseTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_WorldInfoBaseTableRow::DefaultObject.Version,L"");
  FDS_WorldInfoBaseTableRow::DefaultObject.MapResourcePath.AssetPath =
       (FTopLevelAssetPath)ZEXT816(0);
  FDS_WorldInfoBaseTableRow::DefaultObject.MapResourcePath.SubPathString.Data =
       (TArray<char8_t,TSizedDefaultAllocator<32>_>)ZEXT816(0);
  FDS_WorldInfoBaseTableRow::DefaultObject.MapInfoPath.AssetPath = (FTopLevelAssetPath)ZEXT816(0);
  FDS_WorldInfoBaseTableRow::DefaultObject.MapInfoPath.SubPathString.Data =
       (TArray<char8_t,TSizedDefaultAllocator<32>_>)ZEXT816(0);
  atexit(`dynamic_atexit_destructor_for_'FDS_WorldInfoBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141278550

void __cdecl `dynamic_initializer_for_'FDS_WorldMapZoomStepTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_WorldMapZoomStepTableRow::DefaultObject.Version,L"");
  FDS_WorldMapZoomStepTableRow::DefaultObject.WheelCount = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_WorldMapZoomStepTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141278590

void __cdecl `dynamic_initializer_for_'FDS_ZoneBaseTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ZoneBaseTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412785b0

void __cdecl `dynamic_initializer_for_'FDS_ZoneDeathPenaltyTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ZoneDeathPenaltyTableRow::DefaultObject.ZoneNotiCenterResourcePath,L"");
  FDS_ZoneDeathPenaltyTableRow::DefaultObject.ID_ZoneNameMiniMapTitleColor = 0;
  FDS_ZoneDeathPenaltyTableRow::DefaultObject.ID_ZoneNameMsgBg = 0;
  FDS_ZoneDeathPenaltyTableRow::DefaultObject.ID_FontStyle = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_ZoneDeathPenaltyTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141278600

void __cdecl `dynamic_initializer_for_'FDS_ZoneDistrictPropTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ZoneDistrictPropTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141278620

void __cdecl `dynamic_initializer_for_'FDS_ZoneDistrictTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ZoneDistrictTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141278640

void __cdecl `dynamic_initializer_for_'FDS_ZoneGroupTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ZoneGroupTableRow::DefaultObject.Version,L"");
  FDS_ZoneGroupTableRow::DefaultObject.ID_ZoneGroupName = (FDS_StringWorldID)ZEXT816(0x1524f00a0);
  FDS_ZoneGroupTableRow::DefaultObject.ID_DropGroup = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_ZoneGroupTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412786a0

void __cdecl `dynamic_initializer_for_'FDS_ZoneIslandTableRow::DefaultObject__(void)

{
  FDS_ZoneIslandTableRow::DefaultObject.DefaultMapCenterPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FDS_ZoneIslandTableRow::DefaultObject.DefaultMapCenterPosition.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FDS_ZoneIslandTableRow::DefaultObject.DefaultMapCenterPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  ::FString::FString(&FDS_ZoneIslandTableRow::DefaultObject.MapResourcePath,L"");
  atexit(`dynamic_atexit_destructor_for_'FDS_ZoneIslandTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 1412786f0

void __cdecl `dynamic_initializer_for_'FDS_ZonePropInfoTableRow::DefaultObject__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ZonePropInfoTableRow::DefaultObject__);
  return;
}

// DefaultObject'' @ 141278710

void __cdecl `dynamic_initializer_for_'FDS_ZoneResurrectionTableRow::DefaultObject__(void)

{
  ::FString::FString(&FDS_ZoneResurrectionTableRow::DefaultObject.Version,L"");
  FDS_ZoneResurrectionTableRow::DefaultObject.ID_Zone = 0;
  FDS_ZoneResurrectionTableRow::DefaultObject.ResurrectionPointType = None;
  FDS_ZoneResurrectionTableRow::DefaultObject.ID_WarpLocation = 0;
  atexit(`dynamic_atexit_destructor_for_'FDS_ZoneResurrectionTableRow::DefaultObject__);
  return;
}

// Empty'' @ 141278760

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__);
  return;
}

// Empty'' @ 141278790

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_DataRepoManager>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_DataRepoManager>::Empty__);
  return;
}

// Empty'' @ 1412787b0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  FDS_Urls::FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__);
  return;
}

// Empty'' @ 1412787e0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_PlayerRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_PlayerRepo>::Empty__);
  return;
}

// Empty'' @ 141278800

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__);
  return;
}

// Empty'' @ 141278820

void __cdecl `dynamic_initializer_for_'FDS_StringIDWrapper::Empty__(void)

{
  FString *this;
  
  this = ::operator_new(0x10);
  if (this != (FString *)0x0) {
    FDS_StringIDWrapper::Empty = ::FString::FString(this,L"");
    return;
  }
  FDS_StringIDWrapper::Empty = (FString *)0x0;
  return;
}

// InValid'' @ 141278870

void __cdecl `dynamic_initializer_for_'FDS_StringIDWrapper::InValid__(void)

{
  FString *this;
  
  this = ::operator_new(0x10);
  if (this != (FString *)0x0) {
    FDS_StringIDWrapper::InValid = ::FString::FString(this,L"?!?");
    return;
  }
  FDS_StringIDWrapper::InValid = (FString *)0x0;
  return;
}

// ItemTypeMap'' @ 1412788c0

void __cdecl `dynamic_initializer_for_'FDS_WeaponTypeBaseTableRow::ItemTypeMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_WeaponTypeBaseTableRow::ItemTypeMap__);
  return;
}

// StateName'' @ 1412788e0

void __cdecl `dynamic_initializer_for_'UWidgetDisabledStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetDisabledStateRegistration::StateName,"Disabled");
  return;
}

// StateName'' @ 141278900

void __cdecl `dynamic_initializer_for_'UWidgetHoveredStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetHoveredStateRegistration::StateName,"Hovered");
  return;
}

// StateName'' @ 141278920

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetLockedStateRegistration::StateName,"Locked");
  return;
}

// StateName'' @ 141278940

void __cdecl `dynamic_initializer_for_'UWidgetPressedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetPressedStateRegistration::StateName,"Pressed");
  return;
}

// StateName'' @ 141278960

void __cdecl `dynamic_initializer_for_'UWidgetSelectedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetSelectedStateRegistration::StateName,"Selected");
  return;
}

// Urls'' @ 141278980

void __cdecl `dynamic_initializer_for_'UDS_GameInstance::Urls__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UDS_GameInstance::Urls__);
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 1412789a0

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 1412789c0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 1412789e0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 141278a00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 141278a20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 141278a40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 141278a60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 141278a80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 141278aa0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 141278ac0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 141278ae0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 141278b00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 141278b20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 141278b40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 141278b60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 141278b80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 141278ba0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 141278bc0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 141278be0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 141278c00

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 141278c20

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

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 141278ca0

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

// `dynamic_initializer_for_'ErrorNamespace'' @ 141278d20

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 141278d50

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 141278d70

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 141278d90

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 141278db0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 141278dd0

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 141278df0

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 141278e10

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 141278e30

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 141278e50

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 141278e70

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 141278e90

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 141278eb0

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 141278ed0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 141278ef0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 141278f10

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 141278f30

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 141278f50

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 141278f70

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

// `dynamic_initializer_for_'UnixSocketPath'' @ 141279000

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `scalar_deleting_destructor' @ 14b98cea0

void * __thiscall
FDS_DataRepoManager::_scalar_deleting_destructor_(FDS_DataRepoManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RepoArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// CastChecked<ADS_StreamingSourceActor,AActor> @ 14b98dff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_StreamingSourceActor * __cdecl
CastChecked<ADS_StreamingSourceActor,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (ADS_StreamingSourceActor *)0x0;
    }
    pFVar3 = GetTypeName<ADS_StreamingSourceActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ADS_StreamingSourceActor_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ADS_StreamingSourceActor *)param_1;
  }
  pFVar3 = GetTypeName<ADS_StreamingSourceActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CreateWidget<UDS_DungeonPlayBuild_DebugScreen,UWorld_*> @ 14b98e1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_DungeonPlayBuild_DebugScreen * __cdecl
CreateWidget<UDS_DungeonPlayBuild_DebugScreen,UWorld_*>
          (UWorld *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_CreateWidget> FVar9;
  TStatId TVar10;
  UClass *pUVar11;
  UDS_DungeonPlayBuild_DebugScreen *pUVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  UObjectBaseUtility *pUVar13;
  undefined4 uVar14;
  LARGE_INTEGER LVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_68;
  byte local_60;
  LARGE_INTEGER local_58;
  FStatMessage local_48;
  
  uVar14 = 0;
  FVar9 = StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName(&local_res10,"STAT_CreateWidget");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                       L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  LVar15 = *(LARGE_INTEGER *)FVar9;
  local_58.s.LowPart = 0;
  local_58.s.HighPart = 0;
  bVar5 = false;
  bVar7 = false;
  if ((LVar15.s.LowPart == 0) && (LVar15.s.HighPart == 0)) {
LAB_14b98e338:
    bVar6 = false;
    LVar15 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidget.h"
                   ,0x728);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14b98e338;
    local_res8 = LVar15;
    local_58 = LVar15;
    FThreadStats::AddMessage((FName)LVar15.s,CycleScopeStart);
    bVar6 = true;
    uVar14 = local_58._0_4_;
  }
  TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName((FName *)&local_res8.s,"STAT_CreateWidget");
    TVar10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                    L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar3 == 0) {
LAB_14b98e3f1:
    pUVar13 = (UObjectBaseUtility *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar11 == (UClass *)0x0) goto LAB_14b98e3f1;
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14b98e3f1;
    pUVar13 = *(UObjectBaseUtility **)param_2.Class.field0_0x0;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_68,pUVar13,TVar10);
  if (param_1 != (UWorld *)0x0) {
    local_res8 = *(LARGE_INTEGER *)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_res8.QuadPart != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar12 = (UDS_DungeonPlayBuild_DebugScreen *)
              UUserWidget::CreateWidgetInstance
                        (param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3);
    if (pUVar12 != (UDS_DungeonPlayBuild_DebugScreen *)0x0) {
      pUVar11 = Z_Construct_UClass_UDS_DungeonPlayBuild_DebugScreen_NoRegister();
      iVar2 = (int)pUVar11->_padding_;
      if ((iVar2 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar11->_padding_)) goto LAB_14b98e463;
    }
  }
  pUVar12 = (UDS_DungeonPlayBuild_DebugScreen *)0x0;
LAB_14b98e463:
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  local_60 = 0;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar15.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = LVar15.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = uVar14;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return pUVar12;
}

// CreateWidget<UDS_UserWidget,UWorld_*> @ 14b98e5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_UserWidget * __cdecl
CreateWidget<UDS_UserWidget,UWorld_*>
          (UWorld *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_CreateWidget> FVar9;
  TStatId TVar10;
  UClass *pUVar11;
  UDS_UserWidget *pUVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  UObjectBaseUtility *pUVar13;
  undefined4 uVar14;
  LARGE_INTEGER LVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_68;
  byte local_60;
  LARGE_INTEGER local_58;
  FStatMessage local_48;
  
  uVar14 = 0;
  FVar9 = StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName(&local_res10,"STAT_CreateWidget");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                       L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  LVar15 = *(LARGE_INTEGER *)FVar9;
  local_58.s.LowPart = 0;
  local_58.s.HighPart = 0;
  bVar5 = false;
  bVar7 = false;
  if ((LVar15.s.LowPart == 0) && (LVar15.s.HighPart == 0)) {
LAB_14b98e708:
    bVar6 = false;
    LVar15 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidget.h"
                   ,0x728);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14b98e708;
    local_res8 = LVar15;
    local_58 = LVar15;
    FThreadStats::AddMessage((FName)LVar15.s,CycleScopeStart);
    bVar6 = true;
    uVar14 = local_58._0_4_;
  }
  TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName((FName *)&local_res8.s,"STAT_CreateWidget");
    TVar10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                    L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar3 == 0) {
LAB_14b98e7c1:
    pUVar13 = (UObjectBaseUtility *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar11 == (UClass *)0x0) goto LAB_14b98e7c1;
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14b98e7c1;
    pUVar13 = *(UObjectBaseUtility **)param_2.Class.field0_0x0;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_68,pUVar13,TVar10);
  if (param_1 != (UWorld *)0x0) {
    local_res8 = *(LARGE_INTEGER *)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_res8.QuadPart != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar12 = (UDS_UserWidget *)
              UUserWidget::CreateWidgetInstance
                        (param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3);
    if (pUVar12 != (UDS_UserWidget *)0x0) {
      pUVar11 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
      iVar2 = (int)pUVar11->_padding_;
      if ((iVar2 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar11->_padding_)) goto LAB_14b98e833;
    }
  }
  pUVar12 = (UDS_UserWidget *)0x0;
LAB_14b98e833:
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  local_60 = 0;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar15.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = LVar15.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = uVar14;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return pUVar12;
}

// DefaultConstruct<server_msg::CharacterEntityPair> @ 14b98e980

void * __cdecl
google::protobuf::Arena::DefaultConstruct<server_msg::CharacterEntityPair>(Arena *param_1)

{
  CharacterEntityPair *pCVar1;
  
  if (param_1 != (Arena *)0x0) {
    pCVar1 = Allocate(param_1,0x30);
    pCVar1 = server_msg::CharacterEntityPair::CharacterEntityPair(pCVar1,param_1);
    return pCVar1;
  }
  pCVar1 = ::operator_new(0x30);
  pCVar1 = server_msg::CharacterEntityPair::CharacterEntityPair(pCVar1,(Arena *)0x0);
  return pCVar1;
}

// DefaultConstruct<messages::CharacterEntityType> @ 14b98e9d0

void * __cdecl
google::protobuf::Arena::DefaultConstruct<messages::CharacterEntityType>(Arena *param_1)

{
  CharacterEntityType *pCVar1;
  
  if (param_1 != (Arena *)0x0) {
    pCVar1 = Allocate(param_1,0x20);
    pCVar1 = messages::CharacterEntityType::CharacterEntityType(pCVar1,param_1);
    return pCVar1;
  }
  pCVar1 = ::operator_new(0x20);
  pCVar1 = messages::CharacterEntityType::CharacterEntityType(pCVar1,(Arena *)0x0);
  return pCVar1;
}

// DefaultConstruct<messages::MainCharacter> @ 14b98ea20

void * __cdecl google::protobuf::Arena::DefaultConstruct<messages::MainCharacter>(Arena *param_1)

{
  MainCharacter *pMVar1;
  
  if (param_1 != (Arena *)0x0) {
    pMVar1 = Allocate(param_1,0x20);
    pMVar1 = messages::MainCharacter::MainCharacter(pMVar1,param_1);
    return pMVar1;
  }
  pMVar1 = ::operator_new(0x20);
  pMVar1 = messages::MainCharacter::MainCharacter(pMVar1,(Arena *)0x0);
  return pMVar1;
}

// DefaultConstruct<ds_game::SqlPositionTable> @ 14b98ea70

void * __cdecl google::protobuf::Arena::DefaultConstruct<ds_game::SqlPositionTable>(Arena *param_1)

{
  SqlPositionTable *pSVar1;
  
  if (param_1 != (Arena *)0x0) {
    pSVar1 = Allocate(param_1,0x40);
    pSVar1 = ds_game::SqlPositionTable::SqlPositionTable(pSVar1,param_1);
    return pSVar1;
  }
  pSVar1 = ::operator_new(0x40);
  pSVar1 = ds_game::SqlPositionTable::SqlPositionTable(pSVar1,(Arena *)0x0);
  return pSVar1;
}

// DefaultConstruct<Vector> @ 14b98eac0

void * __cdecl google::protobuf::Arena::DefaultConstruct<Vector>(Arena *param_1)

{
  Vector *pVVar1;
  
  if (param_1 != (Arena *)0x0) {
    pVVar1 = Allocate(param_1,0x30);
    pVVar1 = Vector::Vector(pVVar1,param_1);
    return pVVar1;
  }
  pVVar1 = ::operator_new(0x30);
  pVVar1 = Vector::Vector(pVVar1,(Arena *)0x0);
  return pVVar1;
}

// DuplicateObject<UPlayerMappableKeySettings> @ 14b98ecb0

UPlayerMappableKeySettings * __cdecl
DuplicateObject<UPlayerMappableKeySettings>
          (UPlayerMappableKeySettings *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UPlayerMappableKeySettings *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister();
  pUVar2 = (UPlayerMappableKeySettings *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// ForEachComponent_Internal<UDS_InteractBrush,1,1,`AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14b98fbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UDS_InteractBrush,1,1,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UDS_InteractBrush *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  double local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UDS_InteractBrush_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14b98fcd3;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14b98fcd3:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14b98fd6d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14b98fd6d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14b98fe70;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14b98fe70:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UDS_InteractBrush,1,1,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UDS_InteractBrush **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UDS_InteractBrush *)0x0) {
      `AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = (pUVar8->Size).field0_0x0._s_0.Y, local_1a0 != 0.0)
         ) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (double *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(double *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UDS_InteractBrush,1,0,`AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14b9900e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UDS_InteractBrush,1,0,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UDS_InteractBrush *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UDS_InteractBrush_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14b9901e6;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14b9901e6:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14b99026d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14b99026d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14b990371;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14b990371:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UDS_InteractBrush **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UDS_InteractBrush *)0x0) {
      `AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UDS_InteractBrush,0,1,`AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14b9903f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UDS_InteractBrush,0,1,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UDS_InteractBrush *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  double local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UDS_InteractBrush_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14b9904e3;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14b9904e3:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14b990590;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14b990590:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14b9906a0;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14b9906a0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UDS_InteractBrush,0,1,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UDS_InteractBrush **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UDS_InteractBrush *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = (pUVar8->Size).field0_0x0._s_0.Y, local_1a0 != 0.0)
         ) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (double *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(double *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UDS_InteractBrush,0,0,`AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14b990930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UDS_InteractBrush,0,0,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UDS_InteractBrush *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UDS_InteractBrush_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14b990a0e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14b990a0e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14b990a9f;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14b990a9f:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14b990bb0;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14b990bb0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UDS_InteractBrush **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UDS_InteractBrush *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetTypeName<ADS_StreamingSourceActor> @ 14b994070

FString * __cdecl GetTypeName<ADS_StreamingSourceActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ADS_StreamingSourceActor_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// NewObject<UDS_AttackableManager> @ 14b9940b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_AttackableManager * __cdecl NewObject<UDS_AttackableManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_AttackableManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_AttackableManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_AttackableManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_BubbleTalkManager> @ 14b994150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_BubbleTalkManager * __cdecl NewObject<UDS_BubbleTalkManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_BubbleTalkManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_BubbleTalkManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_BubbleTalkManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_CCSAIManager> @ 14b9941f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CCSAIManager * __cdecl NewObject<UDS_CCSAIManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CCSAIManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CCSAIManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CCSAIManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_ChattingManager> @ 14b994290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ChattingManager * __cdecl NewObject<UDS_ChattingManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ChattingManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ChattingManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ChattingManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_CommonPopupManager> @ 14b994330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CommonPopupManager * __cdecl NewObject<UDS_CommonPopupManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CommonPopupManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CommonPopupManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CommonPopupManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_ConstructionManager> @ 14b9943d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ConstructionManager * __cdecl NewObject<UDS_ConstructionManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ConstructionManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ConstructionManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ConstructionManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_ContentManager> @ 14b994470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ContentManager * __cdecl NewObject<UDS_ContentManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ContentManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ContentManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ContentManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_CraftManager> @ 14b994510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CraftManager * __cdecl NewObject<UDS_CraftManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CraftManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CraftManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CraftManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_DailyQuestManager> @ 14b9945b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_DailyQuestManager * __cdecl NewObject<UDS_DailyQuestManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_DailyQuestManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_DailyQuestManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_DailyQuestManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_DataManager> @ 14b994650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_DataManager * __cdecl NewObject<UDS_DataManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_DataManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_DataManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_DataManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_DungeonManager> @ 14b9946f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_DungeonManager * __cdecl NewObject<UDS_DungeonManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_DungeonManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_DungeonManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_DungeonManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_DungeonPlayBuildManager> @ 14b994790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_DungeonPlayBuildManager * __cdecl NewObject<UDS_DungeonPlayBuildManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_DungeonPlayBuildManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_DungeonPlayBuildManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_DungeonPlayBuildManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_EffectManager> @ 14b994830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_EffectManager * __cdecl NewObject<UDS_EffectManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_EffectManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_EffectManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_EffectManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_EntityManager> @ 14b9948d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_EntityManager * __cdecl NewObject<UDS_EntityManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_EntityManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_EntityManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_EntityManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_EnvironmentManager> @ 14b994970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_EnvironmentManager * __cdecl NewObject<UDS_EnvironmentManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_EnvironmentManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_EnvironmentManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_EnvironmentManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_EventManager> @ 14b994a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_EventManager * __cdecl NewObject<UDS_EventManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_EventManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_EventManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_EventManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_GameOptionManager> @ 14b994ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_GameOptionManager * __cdecl NewObject<UDS_GameOptionManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_GameOptionManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_GameOptionManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_GameStartState> @ 14b994b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_GameStartState * __cdecl NewObject<UDS_GameStartState>(UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_GameStartState_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UDS_GameStartState *)pUVar2;
}

// NewObject<UDS_GuildManager> @ 14b994bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_GuildManager * __cdecl NewObject<UDS_GuildManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_GuildManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_GuildManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_GuildManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_HistoryManager> @ 14b994c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_HistoryManager * __cdecl NewObject<UDS_HistoryManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_HistoryManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_HistoryManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_HistoryManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_HudManager> @ 14b994d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_HudManager * __cdecl NewObject<UDS_HudManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_HudManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_HudManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_HudManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_IngameState> @ 14b994dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_IngameState * __cdecl NewObject<UDS_IngameState>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_IngameState *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_IngameState_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_IngameState *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_ItemDetailInfoManager> @ 14b994e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ItemDetailInfoManager * __cdecl NewObject<UDS_ItemDetailInfoManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ItemDetailInfoManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ItemDetailInfoManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ItemDetailInfoManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_LanguageManager> @ 14b994f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LanguageManager * __cdecl NewObject<UDS_LanguageManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_LanguageManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LanguageManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_LanguageManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_LogManager> @ 14b994fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LogManager * __cdecl NewObject<UDS_LogManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LogManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_LogManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_LoginModuleClient> @ 14b995050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LoginModuleClient * __cdecl NewObject<UDS_LoginModuleClient>(UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LoginModuleClient_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UDS_LoginModuleClient *)pUVar2;
}

// NewObject<UDS_LoginState> @ 14b9950f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LoginState * __cdecl NewObject<UDS_LoginState>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_LoginState *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LoginState_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_LoginState *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_MailManager> @ 14b995190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_MailManager * __cdecl NewObject<UDS_MailManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_MailManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_MailManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_MailManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_MountManager> @ 14b995230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_MountManager * __cdecl NewObject<UDS_MountManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_MountManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_MountManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_MountManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_NetworkManager> @ 14b9952d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_NetworkManager * __cdecl NewObject<UDS_NetworkManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_NetworkManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_NetworkManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_NetworkManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_NotificationManager> @ 14b995370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_NotificationManager * __cdecl NewObject<UDS_NotificationManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_NotificationManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_NotificationManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_NotificationManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_PKDataSet> @ 14b995410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PKDataSet * __cdecl NewObject<UDS_PKDataSet>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_PKDataSet *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PKDataSet_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_PKDataSet *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_PartsSystemControl> @ 14b9954b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PartsSystemControl * __cdecl NewObject<UDS_PartsSystemControl>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_PartsSystemControl *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PartsSystemControl_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_PartsSystemControl *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_PhasingManager> @ 14b995550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PhasingManager * __cdecl NewObject<UDS_PhasingManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_PhasingManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PhasingManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_PhasingManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_ProjectileManager> @ 14b9955f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ProjectileManager * __cdecl NewObject<UDS_ProjectileManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ProjectileManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ProjectileManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ProjectileManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_QuestDialogueSceneManager> @ 14b995690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_QuestDialogueSceneManager * __cdecl NewObject<UDS_QuestDialogueSceneManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_QuestDialogueSceneManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_QuestDialogueSceneManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_QuestDialogueSceneManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_QuestManager> @ 14b995730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_QuestManager * __cdecl NewObject<UDS_QuestManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_QuestManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_QuestManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_QuestManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_QuestSpawnActorManager> @ 14b9957d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_QuestSpawnActorManager * __cdecl NewObject<UDS_QuestSpawnActorManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_QuestSpawnActorManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_QuestSpawnActorManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_QuestSpawnActorManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_RenderRoomManager> @ 14b995870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_RenderRoomManager * __cdecl NewObject<UDS_RenderRoomManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_RenderRoomManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_RenderRoomManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_RenderRoomManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_SendPacketManager> @ 14b995910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_SendPacketManager * __cdecl NewObject<UDS_SendPacketManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_SendPacketManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_SendPacketManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_SendPacketManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_ShopManager> @ 14b9959b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ShopManager * __cdecl NewObject<UDS_ShopManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ShopManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ShopManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ShopManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_SmallTalkManager> @ 14b995a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_SmallTalkManager * __cdecl NewObject<UDS_SmallTalkManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_SmallTalkManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_SmallTalkManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_SmallTalkManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_SyncServer> @ 14b995af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_SyncServer * __cdecl NewObject<UDS_SyncServer>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_SyncServer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_SyncServer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_SyncServer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_SystemModuleClient> @ 14b995b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_SystemModuleClient * __cdecl NewObject<UDS_SystemModuleClient>(UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_SystemModuleClient_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UDS_SystemModuleClient *)pUVar2;
}

// NewObject<UDS_TencentCloudChatManager> @ 14b995c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_TencentCloudChatManager * __cdecl NewObject<UDS_TencentCloudChatManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_TencentCloudChatManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_TencentCloudChatManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_TencentCloudChatManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_TimeCoolDownManager> @ 14b995cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_TimeCoolDownManager * __cdecl NewObject<UDS_TimeCoolDownManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_TimeCoolDownManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_TimeCoolDownManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_TimeCoolDownManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_TimeUtilManager> @ 14b995d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_TimeUtilManager * __cdecl NewObject<UDS_TimeUtilManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_TimeUtilManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_TimeUtilManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_TimeUtilManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_UIMessageManager> @ 14b995e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_UIMessageManager * __cdecl NewObject<UDS_UIMessageManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_UIMessageManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_UIMessageManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_UIMessageManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_ViewModelContextManager> @ 14b995eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ViewModelContextManager * __cdecl NewObject<UDS_ViewModelContextManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ViewModelContextManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ViewModelContextManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ViewModelContextManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_ViewerManager> @ 14b995f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ViewerManager * __cdecl NewObject<UDS_ViewerManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ViewerManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ViewerManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ViewerManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_WindowManager> @ 14b995ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_WindowManager * __cdecl NewObject<UDS_WindowManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_WindowManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_WindowManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_WindowManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_WorldBossManager> @ 14b996090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_WorldBossManager * __cdecl NewObject<UDS_WorldBossManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_WorldBossManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_WorldBossManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_WorldBossManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_WorldMapEvent> @ 14b996130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_WorldMapEvent * __cdecl NewObject<UDS_WorldMapEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_WorldMapEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_WorldMapEvent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_WorldMapManager> @ 14b9961d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_WorldMapManager * __cdecl NewObject<UDS_WorldMapManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_WorldMapManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_WorldMapManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_WorldMapManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_WorldMapMarkerManager> @ 14b996270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_WorldMapMarkerManager * __cdecl NewObject<UDS_WorldMapMarkerManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_WorldMapMarkerManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_WorldMapMarkerManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_WorldMapMarkerManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_ZoneManager> @ 14b996310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ZoneManager * __cdecl NewObject<UDS_ZoneManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ZoneManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ZoneManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ZoneManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UInputMappingContext> @ 14b9963b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInputMappingContext * __cdecl NewObject<UInputMappingContext>(UObject *param_1)

{
  UClass *pUVar1;
  UInputMappingContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInputMappingContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInputMappingContext *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UInputTriggerChordAction> @ 14b996450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInputTriggerChordAction * __cdecl NewObject<UInputTriggerChordAction>(UObject *param_1)

{
  UClass *pUVar1;
  UInputTriggerChordAction *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInputTriggerChordAction_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInputTriggerChordAction *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UWN_ISKM_CharacterCore> @ 14b9964f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWN_ISKM_CharacterCore * __cdecl NewObject<UWN_ISKM_CharacterCore>(UObject *param_1)

{
  UClass *pUVar1;
  UWN_ISKM_CharacterCore *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UWN_ISKM_CharacterCore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UWN_ISKM_CharacterCore *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UWN_PakDownloader> @ 14b996590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWN_PakDownloader * __cdecl NewObject<UWN_PakDownloader>(UObject *param_1)

{
  UClass *pUVar1;
  UWN_PakDownloader *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UWN_PakDownloader_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UWN_PakDownloader *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// `scalar_deleting_destructor' @ 14b99a420

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a450

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_ScriptBlockingWallInfo_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_ScriptBlockingWallInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a480

void * __thiscall
IBaseDelegateInstance<bool___cdecl(google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a4b0

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a4e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_BlockingBox,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_BlockingBox,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a510

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_BlockingBox,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_BlockingBox,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a540

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_InnCharacterActor,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_InnCharacterActor,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a570

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_InstallGuideActor,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_InstallGuideActor,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a5a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_InstallGuideActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_InstallGuideActor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a5d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_InstallGuideActor,void___cdecl(void),FDefaultDelegateUserPolicy,FString,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_InstallGuideActor,void___cdecl(void),FDefaultDelegateUserPolicy,FString,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a620

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_InstallGuideActor,void___cdecl(void),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_InstallGuideActor,void___cdecl(void),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a660

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_InstallGuideActor,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_InstallGuideActor,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a690

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PatchGameMode,void___cdecl(void),FDefaultDelegateUserPolicy,FSoftObjectPath>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_PatchGameMode,void___cdecl(void),FDefaultDelegateUserPolicy,FSoftObjectPath>
           *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a6e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_ScriptBlockingWall,void___cdecl(FDS_ScriptBlockingWallInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_ScriptBlockingWall,void___cdecl(FDS_ScriptBlockingWallInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a710

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_SkillGuideActor,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy,FDS_SkillGuideInfo,enum_EDS_GuideColorType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a740

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_StreamingSourceActor,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_StreamingSourceActor,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a770

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_WorldDrawingBoard,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_WorldDrawingBoard,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a7a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_WorldInteractVolume,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_WorldInteractVolume,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a7d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ContentManager,bool___cdecl(google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ContentManager,bool___cdecl(google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a800

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_DungeonPlayBuild_DebugScreen,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_DungeonPlayBuild_DebugScreen,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a830

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_DungeonPlayBuild_DebugScreen,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_DungeonPlayBuild_DebugScreen,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a860

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a890

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a8c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a910

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a940

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a970

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameInstance,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a9a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_IngameState,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_IngameState,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99a9d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99aa00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_ScriptBlockingWallInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_ScriptBlockingWallInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99aa30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy,FDS_SkillGuideInfo,enum_EDS_GuideColorType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99aa60

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FSoftObjectPath>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FSoftObjectPath>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->Payload).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99aab0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  DestructItems<FSoftObjectPath,int>
            (*(FSoftObjectPath **)&this->Payload,*(int *)&(this->Payload).field_0x8);
  if (*(void **)&this->Payload != (void *)0x0) {
    FMemory::Free(*(void **)&this->Payload);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99ab00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FString,FWN_EndOfRefs>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FString,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x18);
  if (*(void **)&this->Payload != (void *)0x0) {
    FMemory::Free(*(void **)&this->Payload);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99ab50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FWN_EndOfRefs>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b99ab90

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// DeepCopyMapping @ 14b9a6470

void __cdecl
DS_InputUtil::DeepCopyMapping(FEnhancedActionKeyMapping *param_1,FEnhancedActionKeyMapping *param_2)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FField *pFVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  UPackage *pUVar10;
  UClass *pUVar11;
  UScriptStruct *pUVar12;
  UPlayerMappableKeySettings *pUVar13;
  UObject *pUVar14;
  int *piVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UObject *local_c8;
  UObject *local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  TFieldIterator<FProperty> local_a0;
  TFieldIterator<FProperty> local_88;
  TFieldIterator<FObjectProperty> local_70;
  FName local_58;
  FName local_50;
  FName local_48;
  
  pFVar16 = (param_1->Modifiers).AllocatorInstance.Data;
  iVar3 = (param_1->Modifiers).ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_1->Modifiers).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UInputModifier>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar16 == pFVar1) break;
    pUVar14 = *(UObject **)pFVar16;
    if (pUVar14 != (UObject *)0x0) {
      local_58.ComparisonIndex.Value = 0;
      local_58.Number = 0;
      pUVar10 = GetTransientPackage();
      pUVar11 = Z_Construct_UClass_UInputModifier_NoRegister();
      local_c8 = DuplicateObject_Internal(pUVar11,pUVar14,(UObject *)pUVar10,local_58);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_c8);
      }
      pFVar4 = (param_2->Modifiers).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 <
           pFVar4 + (longlong)(param_2->Modifiers).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (param_2->Modifiers).ArrayNum;
      piVar15 = &(param_2->Modifiers).ArrayMax;
      if (iVar9 == *piVar15) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(param_2->Modifiers).AllocatorInstance,piVar15);
      }
      (param_2->Modifiers).ArrayNum = iVar9 + 1;
      *(UObject **)((param_2->Modifiers).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_c8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_c8);
      }
    }
    pFVar16 = pFVar16 + 8;
  }
  pFVar16 = (param_1->Triggers).AllocatorInstance.Data;
  iVar3 = (param_1->Triggers).ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_1->Triggers).ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UInputTrigger>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar16 == pFVar1) break;
    pUVar14 = *(UObject **)pFVar16;
    if (pUVar14 != (UObject *)0x0) {
      local_50.ComparisonIndex.Value = 0;
      local_50.Number = 0;
      pUVar10 = GetTransientPackage();
      pUVar11 = Z_Construct_UClass_UInputTrigger_NoRegister();
      local_c0 = DuplicateObject_Internal(pUVar11,pUVar14,(UObject *)pUVar10,local_50);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_c0);
      }
      pFVar4 = (param_2->Triggers).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_c0) &&
          ((FScriptContainerElement *)&local_c0 <
           pFVar4 + (longlong)(param_2->Triggers).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (param_2->Triggers).ArrayNum;
      piVar15 = &(param_2->Triggers).ArrayMax;
      if (iVar9 == *piVar15) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)param_2,piVar15);
      }
      (param_2->Triggers).ArrayNum = iVar9 + 1;
      *(UObject **)((param_2->Triggers).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_c0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_c0);
      }
    }
    pFVar16 = pFVar16 + 8;
  }
  pUVar12 = FEnhancedActionKeyMapping::StaticStruct();
  piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar15 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_SettingBehavior,L"SettingBehavior");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar15 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_PlayerMappableKeySettings,L"PlayerMappableKeySettings");
    _Init_thread_footer(&::_TSS3);
  }
  FVar7 = Name_SettingBehavior;
  if (Name_SettingBehavior == (FName)0x0) {
    return;
  }
  if (pUVar12 == (UScriptStruct *)0x0) {
    local_a0.Field = (FField *)0x0;
  }
  else {
    local_a0.Field = (FField *)pUVar12->_padding_;
  }
  local_a0.InterfaceIndex = -1;
  local_a0.bIncludeSuper = true;
  local_a0.bIncludeDeprecated = true;
  local_a0.bIncludeInterface = false;
  local_a0.Struct = (UStruct *)pUVar12;
  TFieldIterator<FProperty>::IterateToNext(&local_a0);
  pFVar6 = local_a0.Field;
  while( true ) {
    if (pFVar6 == (FField *)0x0) {
      return;
    }
    local_a0.Field = pFVar6;
    bVar8 = IsThisNotNull(pFVar6,"FField::GetFName");
    if (bVar8) {
      local_b8 = pFVar6->NamePrivate;
    }
    else {
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
    }
    if (local_b8 == FVar7) break;
    local_a0.Field = pFVar6->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_a0);
    pFVar6 = local_a0.Field;
  }
  if (pFVar6 == (FField *)0x0) {
    return;
  }
  if (((int)pFVar6[1]._padding_ < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar8))
  {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar7 = Name_SettingBehavior;
  cVar2 = *(char *)((longlong)&(param_1->Triggers).AllocatorInstance.Data +
                   (longlong)*(int *)((longlong)&pFVar6[1].Owner.Container + 4));
  if (Name_SettingBehavior != (FName)0x0) {
    if (pUVar12 == (UScriptStruct *)0x0) {
      local_88.Field = (FField *)0x0;
    }
    else {
      local_88.Field = (FField *)pUVar12->_padding_;
    }
    local_88.InterfaceIndex = -1;
    local_88.bIncludeSuper = true;
    local_88.bIncludeDeprecated = true;
    local_88.bIncludeInterface = false;
    local_88.Struct = (UStruct *)pUVar12;
    TFieldIterator<FProperty>::IterateToNext(&local_88);
    pFVar6 = local_88.Field;
    while (local_88.Field = pFVar6, pFVar6 != (FField *)0x0) {
      bVar8 = IsThisNotNull(pFVar6,"FField::GetFName");
      if (bVar8) {
        local_b0 = pFVar6->NamePrivate;
      }
      else {
        local_b0.ComparisonIndex.Value = 0;
        local_b0.Number = 0;
      }
      if (local_b0 == FVar7) {
        if (pFVar6 != (FField *)0x0) {
          if (((int)pFVar6[1]._padding_ < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((param_2 == (FEnhancedActionKeyMapping *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(char *)((longlong)&(param_2->Triggers).AllocatorInstance.Data +
                   (longlong)*(int *)((longlong)&pFVar6[1].Owner.Container + 4)) = cVar2;
        }
        break;
      }
      local_88.Field = pFVar6->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_88);
      pFVar6 = local_88.Field;
    }
  }
  if ((cVar2 == '\x01') &&
     (pUVar13 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1),
     pUVar13 != (UPlayerMappableKeySettings *)0x0)) {
    local_48.ComparisonIndex.Value = 0;
    local_48.Number = 0;
    pUVar10 = GetTransientPackage();
    pUVar11 = Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister();
    pUVar14 = DuplicateObject_Internal(pUVar11,(UObject *)pUVar13,(UObject *)pUVar10,local_48);
    FVar7 = Name_PlayerMappableKeySettings;
    if (Name_PlayerMappableKeySettings != (FName)0x0) {
      if (pUVar12 == (UScriptStruct *)0x0) {
        local_70.Field = (FField *)0x0;
      }
      else {
        local_70.Field = (FField *)pUVar12->_padding_;
      }
      local_70.InterfaceIndex = -1;
      local_70.bIncludeSuper = true;
      local_70.bIncludeDeprecated = true;
      local_70.bIncludeInterface = false;
      local_70.Struct = (UStruct *)pUVar12;
      TFieldIterator<FObjectProperty>::IterateToNext(&local_70);
      pFVar6 = local_70.Field;
      while (pFVar6 != (FField *)0x0) {
        local_70.Field = pFVar6;
        bVar8 = IsThisNotNull(pFVar6,"FField::GetFName");
        if (bVar8) {
          local_a8 = pFVar6->NamePrivate;
        }
        else {
          local_a8.ComparisonIndex.Value = 0;
          local_a8.Number = 0;
        }
        if (local_a8 == FVar7) {
          if (pFVar6 == (FField *)0x0) {
            return;
          }
          if (((int)pFVar6[1]._padding_ < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((param_2 == (FEnhancedActionKeyMapping *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(UObject **)
           ((longlong)&(param_2->Triggers).AllocatorInstance.Data +
           (longlong)*(int *)((longlong)&pFVar6[1].Owner.Container + 4)) = pUVar14;
          return;
        }
        local_70.Field = pFVar6->Next;
        TFieldIterator<FObjectProperty>::IterateToNext(&local_70);
        pFVar6 = local_70.Field;
      }
    }
  }
  return;
}

// DeepCopyMappingContext @ 14b9a6b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UInputMappingContext> __cdecl
DS_InputUtil::DeepCopyMappingContext(TObjectPtr<UInputMappingContext> param_1)

{
  int iVar1;
  longlong lVar2;
  UInputMappingContext *this;
  UPackage *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FEnhancedActionKeyMapping *pFVar6;
  longlong *plVar7;
  longlong *in_RDX;
  FEnhancedActionKeyMapping *pFVar8;
  FEnhancedActionKeyMapping *pFVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  FKey local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar3 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UInputMappingContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1.field0_0x0 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  lVar2 = *in_RDX;
  iVar1 = *(int *)(lVar2 + 0x48);
  pFVar8 = *(FEnhancedActionKeyMapping **)(lVar2 + 0x40);
  pFVar9 = pFVar8 + iVar1;
  while( true ) {
    if (*(int *)(lVar2 + 0x48) != iVar1) {
      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c8);
    }
    if (pFVar8 == pFVar9) break;
    local_c0.KeyName = (pFVar8->Key).KeyName;
    this = *(UInputMappingContext **)param_1.field0_0x0;
    local_c0.KeyDetails.Object = (pFVar8->Key).KeyDetails.Object;
    local_c0.KeyDetails.SharedReferenceCount.ReferenceController =
         (pFVar8->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_c0.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c0.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c0.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar6 = UInputMappingContext::MapKey(this,(pFVar8->Action).field0_0x0.DebugPtr,&local_c0);
    DeepCopyMapping(pFVar8,pFVar6);
    pFVar8 = pFVar8 + 1;
  }
  return (TObjectPtr<UInputMappingContext>)param_1.field0_0x0.DebugPtr;
}

// GetChordInputAction @ 14b9adf70

TObjectPtr<UInputAction_const_> __cdecl
DS_InputUtil::GetChordInputAction
          (TObjectPtr<UInputMappingContext> param_1,TObjectPtr<UInputAction_const_> param_2,
          EDS_InputDeviceType param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined7 in_register_00000081;
  char in_R9B;
  longlong lVar5;
  ForAnyElementType local_38;
  
  lVar2 = *(longlong *)param_2.field0_0x0;
  if ((lVar2 == 0) || (*(longlong *)CONCAT71(in_register_00000081,param_3) == 0)) {
    *(undefined8 *)param_1.field0_0x0 = 0;
    return (TObjectPtr<UInputAction_const_>)param_1.field0_0x0.DebugPtr;
  }
  lVar4 = *(longlong *)(lVar2 + 0x40);
  iVar1 = *(int *)(lVar2 + 0x48);
  lVar5 = (longlong)iVar1 * 0x50 + lVar4;
  do {
    while( true ) {
      if (*(int *)(lVar2 + 0x48) != iVar1) {
        `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&stack0x00000010);
      }
      if (lVar4 == lVar5) {
        *(undefined8 *)param_1.field0_0x0 = 0;
        return (TObjectPtr<UInputAction_const_>)param_1.field0_0x0.DebugPtr;
      }
      if (*(longlong *)(lVar4 + 0x20) == *(longlong *)CONCAT71(in_register_00000081,param_3)) break;
LAB_14b9ae018:
      lVar4 = lVar4 + 0x50;
    }
    bVar3 = FKey::IsGamepadKey((FKey *)(lVar4 + 0x28));
    if (in_R9B != '\x02') {
      if ((in_R9B == '\x01') && (!bVar3)) goto LAB_14b9ae001;
      goto LAB_14b9ae018;
    }
    if (bVar3) {
LAB_14b9ae001:
      GetTriggerChordAction((FEnhancedActionKeyMapping *)&stack0xffffffffffffffc8);
      if ((UObject *)local_38.Data != (UObject *)0x0) {
        *(FScriptContainerElement **)param_1.field0_0x0 = local_38.Data;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_38.Data);
        }
        return (TObjectPtr<UInputAction_const_>)param_1.field0_0x0.DebugPtr;
      }
      goto LAB_14b9ae018;
    }
    lVar4 = lVar4 + 0x50;
  } while( true );
}

// GetInputAction @ 14b9ae3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UInputAction * __cdecl
DS_InputUtil::GetInputAction(UDS_InputConfig *param_1,EDS_KeyActionType param_2)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  UInputAction *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198 [8];
  FString local_190;
  FString local_180;
  FName local_170;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_2 == None) {
LAB_14b9ae4fb:
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      ::FString::FString(&local_190,L"EDS_KeyActionType");
      DS_Util::GetEnumToString(&local_168,&local_190,(longlong)(int)param_2);
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"DS_InputUtil::GetInputAction",0x1c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_158.Ptr,0xad,L"IA is nullptr. InputActionType=%s");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
    }
    pUVar3 = (UInputAction *)0x0;
  }
  else {
    iVar1 = (param_1->NativeInputActions).ArrayNum;
    pFVar4 = (param_1->NativeInputActions).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((param_1->NativeInputActions).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDS_InputAction_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_198);
      }
      if (pFVar4 == pFVar5) {
        if (1 < (byte)LogTemp._0_1_) {
          if (param_1 == (UDS_InputConfig *)0x0) {
            ::FString::FString(&local_180,L"None");
          }
          else {
            local_170 = (FName)param_1->_padding_;
            ::FName::ToString(&local_170,&local_180);
          }
          ::FString::FString(&local_190,"EDS_KeyActionType");
          DS_Util::GetEnumToString(&local_168,&local_190,(longlong)(int)param_2);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14b9ae4fb;
      }
      pUVar3 = *(UInputAction **)pFVar4;
      if ((pUVar3 != (UInputAction *)0x0) && (*(EDS_KeyActionType *)(pFVar4 + 8) == param_2)) break;
      pFVar4 = pFVar4 + 0x10;
    }
  }
  return pUVar3;
}

// GetInputAction @ 14b9ae600

UInputAction * __cdecl
DS_InputUtil::GetInputAction(TObjectPtr<UInputMappingContext_const_> param_1,FKey *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)param_1.field0_0x0;
  iVar1 = *(int *)(lVar2 + 0x48);
  lVar3 = *(longlong *)(lVar2 + 0x40);
  lVar4 = (longlong)iVar1 * 0x50 + lVar3;
  while( true ) {
    if (*(int *)(lVar2 + 0x48) != iVar1) {
      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar3 == lVar4) break;
    if (*(FName *)(lVar3 + 0x28) == param_2->KeyName) {
      return *(UInputAction **)(lVar3 + 0x20);
    }
    lVar3 = lVar3 + 0x50;
  }
  return (UInputAction *)0x0;
}

// GetInputIconID @ 14b9ae680

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl DS_InputUtil::GetInputIconID(EDS_KeyActionType param_1)

{
  EDS_InputDeviceType EVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  FString *pFVar5;
  size_t sVar6;
  UClass *pUVar7;
  UEnum *this;
  FName *pFVar8;
  long64 lVar9;
  FDS_KeyTypeDataTableRow *pFVar10;
  int iVar11;
  wchar_t *pwVar12;
  FWeakObjectPtr local_res10;
  FName local_res18;
  UObject *local_res20;
  TStringView<wchar_t> local_68;
  FString local_58;
  FString local_48;
  FKey local_38;
  
  ADS_PlayerController::GetPlayerController();
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    return 0;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  local_res18 = (FName)GetInputAction(*(UDS_InputConfig **)&pUVar4[0x30].field_0x8,param_1);
  if (local_res18 == (FName)0x0) {
    return 0;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  EVar1 = pUVar4[0x36].field_0x8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  local_res20 = *(UObject **)&pUVar4[0x38].field_0x10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  GetMainKey(&local_38,(TObjectPtr<UInputMappingContext>)&local_res20,
             (TObjectPtr<UInputAction_const_>)&local_res18,EVar1);
  bVar3 = FKey::IsValid(&local_38);
  if (!bVar3) {
    iVar11 = 0;
    goto LAB_14b9ae864;
  }
  bVar3 = FKey::IsValid(&local_38);
  if (bVar3) {
    ::FString::FString(&local_58,"EDS_KeyType");
    pFVar5 = FKey::ToString(&local_38,&local_48);
    pwVar12 = L"";
    local_68.Size = 0;
    if (local_58.Data.ArrayNum == 0) {
      local_68.DataPtr = L"";
LAB_14b9ae7d5:
      sVar6 = wcslen(local_68.DataPtr);
      local_68.Size = (int)sVar6;
    }
    else {
      local_68.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14b9ae7d5;
    }
    pUVar7 = Z_Construct_UClass_UEnum_NoRegister();
    this = (UEnum *)StaticFindFirstObjectSafe(pUVar7,&local_68,None,NoLogging,(wchar_t *)0x0);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_res18,pwVar12);
    lVar9 = UEnum::GetValueByName(this,*pFVar8,None);
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    iVar11 = (int)lVar9;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar11 = 0;
  }
  pFVar10 = FDS_KeyTypeDataTableRow::GetRef((longlong)iVar11,true);
  iVar11 = pFVar10->ID_Icon;
LAB_14b9ae864:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
  return iVar11;
}

// GetInputKeyByName @ 14b9ae8a0

FKey * __cdecl DS_InputUtil::GetInputKeyByName(FKey *__return_storage_ptr__,FString *param_1)

{
  FKey *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  ForAnyElementType this;
  bool bVar7;
  undefined1 local_res18 [16];
  TArray<FKey,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  EKeys::GetAllKeys(&local_48);
  iVar4 = local_48.ArrayNum;
  pFVar1 = (FKey *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x18);
  this.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((FKey *)this.Data == pFVar1) {
      (__return_storage_ptr__->KeyName).ComparisonIndex = 0;
      (__return_storage_ptr__->KeyName).Number = 0;
      (__return_storage_ptr__->KeyDetails).Object = (FKeyDetails *)0x0;
      (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14b9ae98d;
    }
    pFVar6 = FKey::ToString((FKey *)this.Data,&local_38);
    iVar5 = (param_1->Data).ArrayNum;
    iVar2 = (pFVar6->Data).ArrayNum;
    if (iVar2 == iVar5) {
      if (iVar2 < 2) {
        bVar7 = true;
      }
      else {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar7 = iVar5 == 0;
      }
    }
    else {
      bVar7 = iVar5 + iVar2 == 1;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar7) break;
    this.Data = this.Data + 0x18;
  }
  __return_storage_ptr__->KeyName = ((FKey *)this.Data)->KeyName;
  (__return_storage_ptr__->KeyDetails).Object = (((FKey *)this.Data)->KeyDetails).Object;
  pTVar3 = (((FKey *)this.Data)->KeyDetails).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14b9ae98d:
  DestructItems<FKey,int>((FKey *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FKey *)local_48.AllocatorInstance.Data != (FKey *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetInputTriggerHold @ 14b9ae9d0

TObjectPtr<UDS_InputTriggerHold_const_> __cdecl
DS_InputUtil::GetInputTriggerHold(FEnhancedActionKeyMapping *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  longlong lVar3;
  FObjectPtr_u_0 FVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong *in_RDX;
  FObjectPtr_u_0 *pFVar7;
  FObjectPtr_u_0 local_res10;
  
  pFVar7 = (FObjectPtr_u_0 *)*in_RDX;
  lVar3 = in_RDX[1];
  pFVar1 = pFVar7 + (int)lVar3;
  do {
    if ((int)in_RDX[1] != (int)lVar3) {
      `TCheckedPointerIterator<TObjectPtr<UInputTrigger>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res10);
    }
    if (pFVar7 == pFVar1) {
      (param_1->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      return (TObjectPtr<UDS_InputTriggerHold_const_>)
             (TObjectPtr<UDS_InputTriggerHold_const_>_u_0)param_1;
    }
    local_res10 = (FObjectPtr_u_0)pFVar7->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14b9aea3b:
      FVar4 = local_res10;
      if (local_res10.Handle != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_InputTriggerHold_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if (((iVar2 <= *(int *)(*(longlong *)&(FVar4.Handle)->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&(FVar4.Handle)->field_0x10 + 0x30) + (longlong)iVar2 * 8)
             == &pUVar6->_padding_)) && (local_res10.Handle != (UObject *)0x0)) {
          pUVar6 = Z_Construct_UClass_UDS_InputTriggerHold_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar6);
          if ((bVar5) && (local_res10.Handle != (UObject *)0x0)) {
            (param_1->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)local_res10;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(local_res10.Handle);
            }
            return (TObjectPtr<UDS_InputTriggerHold_const_>)
                   (TObjectPtr<UDS_InputTriggerHold_const_>_u_0)param_1;
          }
        }
      }
    }
    else if (local_res10.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res10.Handle);
      goto LAB_14b9aea3b;
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// GetKey @ 14b9afb00

FKey * __cdecl
DS_InputUtil::GetKey
          (FKey *__return_storage_ptr__,TObjectPtr<UInputMappingContext> param_1,
          TObjectPtr<UInputAction_const_> param_2,EDS_KeyActionType param_3,
          EDS_InputDeviceType param_4)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  lVar2 = *(longlong *)param_1.field0_0x0;
  if ((lVar2 == 0) || (*(longlong *)param_2.field0_0x0 == 0)) {
    (__return_storage_ptr__->KeyName).ComparisonIndex = 0;
    (__return_storage_ptr__->KeyName).Number = 0;
    (__return_storage_ptr__->KeyDetails).Object = (FKeyDetails *)0x0;
    (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  lVar5 = *(longlong *)(lVar2 + 0x40);
  iVar1 = *(int *)(lVar2 + 0x48);
  lVar6 = (longlong)iVar1 * 0x50 + lVar5;
  do {
    if (*(int *)(lVar2 + 0x48) != iVar1) {
      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (lVar5 == lVar6) {
      (__return_storage_ptr__->KeyName).ComparisonIndex = 0;
      (__return_storage_ptr__->KeyName).Number = 0;
      (__return_storage_ptr__->KeyDetails).Object = (FKeyDetails *)0x0;
      (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    if (*(longlong *)(lVar5 + 0x20) == *(longlong *)param_2.field0_0x0) {
      bVar4 = FKey::IsGamepadKey((FKey *)(lVar5 + 0x28));
      if (param_4 == GamePad) {
        if (bVar4) goto LAB_14b9afb91;
      }
      else if ((param_4 == KeyboardMouse) && (!bVar4)) {
LAB_14b9afb91:
        __return_storage_ptr__->KeyName = *(FName *)(lVar5 + 0x28);
        (__return_storage_ptr__->KeyDetails).Object = *(FKeyDetails **)(lVar5 + 0x30);
        pTVar3 = *(TReferenceControllerBase<1> **)(lVar5 + 0x38);
        (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        return __return_storage_ptr__;
      }
    }
    lVar5 = lVar5 + 0x50;
  } while( true );
}

// GetKey @ 14b9afc20

FKey * __cdecl DS_InputUtil::GetKey(FKey *__return_storage_ptr__,EDS_KeyType param_1)

{
  FKey *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  ForAnyElementType this;
  bool bVar6;
  undefined1 local_res10 [8];
  TArray<FKey,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  ::FString::FString((FString *)&local_48,L"EDS_KeyType");
  DS_Util::GetEnumToString(&local_38,(FString *)&local_48,(longlong)(int)param_1);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  EKeys::GetAllKeys(&local_48);
  iVar3 = local_48.ArrayNum;
  pFVar1 = (FKey *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x18);
  this.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((FKey *)this.Data == pFVar1) {
      (__return_storage_ptr__->KeyName).ComparisonIndex = 0;
      (__return_storage_ptr__->KeyName).Number = 0;
      (__return_storage_ptr__->KeyDetails).Object = (FKeyDetails *)0x0;
      (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14b9afd44;
    }
    pFVar5 = FKey::ToString((FKey *)this.Data,&local_28);
    iVar4 = (pFVar5->Data).ArrayNum;
    if (iVar4 == local_38.Data.ArrayNum) {
      if (iVar4 < 2) {
        bVar6 = true;
      }
      else {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                           (wchar_t *)local_38.Data.AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
    }
    else {
      bVar6 = local_38.Data.ArrayNum + iVar4 == 1;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar6) break;
    this.Data = this.Data + 0x18;
  }
  __return_storage_ptr__->KeyName = ((FKey *)this.Data)->KeyName;
  (__return_storage_ptr__->KeyDetails).Object = (((FKey *)this.Data)->KeyDetails).Object;
  pTVar2 = (((FKey *)this.Data)->KeyDetails).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14b9afd44:
  DestructItems<FKey,int>((FKey *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FKey *)local_48.AllocatorInstance.Data != (FKey *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetKeyType @ 14b9afda0

/* WARNING: Enum "Type": Some values do not have unique names */

EDS_KeyType __cdecl DS_InputUtil::GetKeyType(FKey *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  size_t sVar4;
  UClass *pUVar5;
  UEnum *this;
  FName *pFVar6;
  long64 lVar7;
  wchar_t *pwVar8;
  FName local_res10;
  TStringView<wchar_t> local_38;
  FString local_28;
  FString local_18;
  
  bVar2 = FKey::IsValid(param_1);
  if (!bVar2) {
    return None;
  }
  ::FString::FString(&local_28,"EDS_KeyType");
  pFVar3 = FKey::ToString(param_1,&local_18);
  pwVar8 = L"";
  if (local_28.Data.ArrayNum == 0) {
    local_38.DataPtr = L"";
  }
  else {
    local_38.Size = 0;
    local_38.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14b9afe16;
  }
  sVar4 = wcslen(local_38.DataPtr);
  local_38.Size = (int)sVar4;
LAB_14b9afe16:
  pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
  this = (UEnum *)StaticFindFirstObjectSafe(pUVar5,&local_38,None,NoLogging,(wchar_t *)0x0);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(&local_res10,pwVar8);
  lVar7 = UEnum::GetValueByName(this,*pFVar6,None);
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (EDS_KeyType)lVar7;
}

// GetKeys @ 14b9afeb0

TArray<FKey,TSizedDefaultAllocator<32>_> * __cdecl
DS_InputUtil::GetKeys
          (TArray<FKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TObjectPtr<UInputMappingContext> param_1,TObjectPtr<UInputAction_const_> param_2,
          EDS_KeyActionType param_3,EDS_InputDeviceType param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  uint local_res10;
  TObjectPtr<UInputAction_const_>_u_0 local_res18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar2 = *(longlong *)param_1.field0_0x0;
  if ((lVar2 != 0) && (*(longlong *)param_2.field0_0x0 != 0)) {
    local_res10 = *(uint *)(lVar2 + 0x48);
    uVar6 = (ulonglong)(int)local_res10;
    lVar8 = *(longlong *)(lVar2 + 0x40);
    lVar9 = uVar6 * 0x50 + lVar8;
    plVar7 = (longlong *)(lVar8 + 0x38);
    local_res18 = param_2.field0_0x0;
    while( true ) {
      if (*(int *)(lVar2 + 0x48) != (int)uVar6) {
        `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        param_2.field0_0x0 = local_res18;
      }
      if (lVar8 == lVar9) break;
      if (plVar7[-3] == ((UInputAction *)param_2.field0_0x0)->_padding_) {
        bVar4 = FKey::IsGamepadKey((FKey *)(plVar7 + -2));
        param_2.field0_0x0 = local_res18;
        if (param_4 != GamePad) {
          if ((param_4 == KeyboardMouse) && (!bVar4)) goto LAB_14b9aff7b;
          goto LAB_14b9affcb;
        }
        if (bVar4) {
LAB_14b9aff7b:
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x18;
          *(longlong *)pFVar1 = plVar7[-2];
          *(longlong *)(pFVar1 + 8) = plVar7[-1];
          lVar3 = *plVar7;
          *(longlong *)(pFVar1 + 0x10) = lVar3;
          param_2.field0_0x0 = local_res18;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          goto LAB_14b9affcb;
        }
        lVar8 = lVar8 + 0x50;
        uVar6 = (ulonglong)local_res10;
        plVar7 = plVar7 + 10;
      }
      else {
LAB_14b9affcb:
        uVar6 = (ulonglong)local_res10;
        lVar8 = lVar8 + 0x50;
        plVar7 = plVar7 + 10;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetLongPressTime @ 14b9b01c0

float __cdecl
DS_InputUtil::GetLongPressTime
          (UDS_InputConfig *param_1,TObjectPtr<UInputMappingContext> param_2,
          EDS_KeyActionType param_3,EDS_InputDeviceType param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UInputAction *pUVar4;
  longlong lVar5;
  longlong lVar6;
  ForAnyElementType local_28;
  
  if ((((param_1 != (UDS_InputConfig *)0x0) && (*(longlong *)param_2.field0_0x0 != 0)) &&
      (param_3 != None)) &&
     (pUVar4 = GetInputAction(param_1,param_3), pUVar4 != (UInputAction *)0x0)) {
    lVar2 = *(longlong *)param_2.field0_0x0;
    iVar1 = *(int *)(lVar2 + 0x48);
    lVar5 = *(longlong *)(lVar2 + 0x40);
    lVar6 = (longlong)iVar1 * 0x50 + lVar5;
    while( true ) {
      if (*(int *)(lVar2 + 0x48) != iVar1) {
        `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&stack0x00000008);
      }
      if (lVar5 == lVar6) break;
      if ((*(UInputAction **)(lVar5 + 0x20) == (UInputAction *)0x0) ||
         (*(UInputAction **)(lVar5 + 0x20) != pUVar4)) {
LAB_14b9b0287:
        lVar5 = lVar5 + 0x50;
      }
      else {
        bVar3 = FKey::IsGamepadKey((FKey *)(lVar5 + 0x28));
        if (param_4 != GamePad) {
          if ((param_4 == KeyboardMouse) && (!bVar3)) goto LAB_14b9b0270;
          goto LAB_14b9b0287;
        }
        if (bVar3) {
LAB_14b9b0270:
          GetInputTriggerHold((FEnhancedActionKeyMapping *)&stack0xffffffffffffffd8);
          if (local_28.Data != (FScriptContainerElement *)0x0) {
            return *(float *)(local_28.Data + 0x54);
          }
          goto LAB_14b9b0287;
        }
        lVar5 = lVar5 + 0x50;
      }
    }
  }
  return 0.0;
}

// GetMainKey @ 14b9b02c0

FKey * __cdecl
DS_InputUtil::GetMainKey
          (FKey *__return_storage_ptr__,TObjectPtr<UInputMappingContext> param_1,
          TObjectPtr<UInputAction_const_> param_2,EDS_InputDeviceType param_3)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  lVar2 = *(longlong *)param_1.field0_0x0;
  if ((lVar2 == 0) || (*(longlong *)param_2.field0_0x0 == 0)) {
    (__return_storage_ptr__->KeyName).ComparisonIndex = 0;
    (__return_storage_ptr__->KeyName).Number = 0;
    (__return_storage_ptr__->KeyDetails).Object = (FKeyDetails *)0x0;
    (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  lVar5 = *(longlong *)(lVar2 + 0x40);
  iVar1 = *(int *)(lVar2 + 0x48);
  lVar6 = (longlong)iVar1 * 0x50 + lVar5;
  do {
    if (*(int *)(lVar2 + 0x48) != iVar1) {
      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (lVar5 == lVar6) {
      (__return_storage_ptr__->KeyName).ComparisonIndex = 0;
      (__return_storage_ptr__->KeyName).Number = 0;
      (__return_storage_ptr__->KeyDetails).Object = (FKeyDetails *)0x0;
      (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    if (*(longlong *)(lVar5 + 0x20) == *(longlong *)param_2.field0_0x0) {
      bVar4 = FKey::IsGamepadKey((FKey *)(lVar5 + 0x28));
      if (bVar4) {
        bVar4 = param_3 == GamePad;
      }
      else {
        bVar4 = param_3 == KeyboardMouse;
      }
      if (bVar4) {
        __return_storage_ptr__->KeyName = *(FName *)(lVar5 + 0x28);
        (__return_storage_ptr__->KeyDetails).Object = *(FKeyDetails **)(lVar5 + 0x30);
        pTVar3 = *(TReferenceControllerBase<1> **)(lVar5 + 0x38);
        (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        return __return_storage_ptr__;
      }
    }
    lVar5 = lVar5 + 0x50;
  } while( true );
}

// GetMainKey @ 14b9b03d0

FKey * __cdecl DS_InputUtil::GetMainKey(FKey *__return_storage_ptr__,EDS_KeyActionType param_1)

{
  EDS_InputDeviceType EVar1;
  bool bVar2;
  UObject *pUVar3;
  UInputAction *pUVar4;
  FWeakObjectPtr local_res18;
  UInputAction *local_res20;
  UObject *local_58;
  FKey local_50;
  FName local_38;
  
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  ADS_PlayerController::GetPlayerController();
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    pUVar4 = GetInputAction(*(UDS_InputConfig **)&pUVar3[0x30].field_0x8,param_1);
    if (pUVar4 != (UInputAction *)0x0) {
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      EVar1 = pUVar3[0x36].field_0x8;
      local_res20 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      local_58 = *(UObject **)&pUVar3[0x38].field_0x10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_58);
      }
      GetMainKey(&local_50,(TObjectPtr<UInputMappingContext>)&local_58,
                 (TObjectPtr<UInputAction_const_>)&local_res20,EVar1);
      bVar2 = FKey::IsValid(&local_50);
      if (bVar2) {
        __return_storage_ptr__->KeyName = local_50.KeyName;
        (__return_storage_ptr__->KeyDetails).Object = local_50.KeyDetails.Object;
        (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
             local_50.KeyDetails.SharedReferenceCount.ReferenceController;
        if (local_50.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_50.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_50.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      else {
        __return_storage_ptr__->KeyName = local_38;
        (__return_storage_ptr__->KeyDetails).Object = (FKeyDetails *)0x0;
        (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.KeyDetails.SharedReferenceCount.ReferenceController);
      goto LAB_14b9b050b;
    }
  }
  __return_storage_ptr__->KeyName = local_38;
  (__return_storage_ptr__->KeyDetails).Object = (FKeyDetails *)0x0;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14b9b050b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetMaxRaidPartyMember @ 14b9b0710

int __cdecl DS_CommonDataHelper::GetMaxRaidPartyMember(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xff;
  if (((uVar2 == 1) || (uVar2 == 2)) || (iVar1 = 0xc, uVar2 != 3)) {
    iVar1 = 4;
  }
  return iVar1;
}

// GetPlayerSkillGaugeColorAndStyle @ 14b9b0ad0

void __cdecl
DS_CommonDataHelper::GetPlayerSkillGaugeColorAndStyle
          (int param_1,FLinearColor *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  ForAnyElementType FVar3;
  FDS_ResourceColorTableRow *pFVar4;
  float fVar5;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  PlayerSkillGaugeRate01(&local_28);
  PlayerSkillGaugeRate02(&local_38);
  PlayerSkillGaugeRate03(&local_18);
  if (((0 < local_28.ArrayNum) && (0 < local_38.ArrayNum)) && (0 < local_18.ArrayNum)) {
    if ((param_1 < 0) || (*(int *)local_28.AllocatorInstance.Data < param_1)) {
      if ((*(int *)local_28.AllocatorInstance.Data < param_1) &&
         (param_1 <= *(int *)local_38.AllocatorInstance.Data)) {
        FVar3.Data = local_38.AllocatorInstance.Data;
        local_18.ArrayNum = local_38.ArrayNum;
        if (1 < local_38.ArrayNum) {
          pFVar4 = FDS_ResourceColorTableRow::GetRef
                             ((longlong)*(int *)(local_38.AllocatorInstance.Data + 4),true);
          fVar1 = FLinearColor::sRGBToLinearTable[(pFVar4->Color).field0_0x0._s_0.G];
          fVar2 = FLinearColor::sRGBToLinearTable[(pFVar4->Color).field0_0x0._s_0.B];
          fVar5 = (float)(pFVar4->Color).field0_0x0._s_0.A * __real_3b808081;
          (param_2->field0_0x0)._s_0.R =
               FLinearColor::sRGBToLinearTable[(pFVar4->Color).field0_0x0._s_0.R];
          (param_2->field0_0x0)._s_0.G = fVar1;
          (param_2->field0_0x0)._s_0.B = fVar2;
          (param_2->field0_0x0)._s_0.A = fVar5;
          FVar3.Data = local_38.AllocatorInstance.Data;
          local_18.ArrayNum = local_38.ArrayNum;
        }
      }
      else {
        if ((param_1 <= *(int *)local_38.AllocatorInstance.Data) ||
           (*(int *)local_18.AllocatorInstance.Data < param_1)) goto LAB_14b9b0c99;
        FVar3.Data = local_18.AllocatorInstance.Data;
        if (1 < local_18.ArrayNum) {
          pFVar4 = FDS_ResourceColorTableRow::GetRef
                             ((longlong)*(int *)(local_18.AllocatorInstance.Data + 4),true);
          fVar1 = FLinearColor::sRGBToLinearTable[(pFVar4->Color).field0_0x0._s_0.G];
          fVar2 = FLinearColor::sRGBToLinearTable[(pFVar4->Color).field0_0x0._s_0.B];
          fVar5 = (float)(pFVar4->Color).field0_0x0._s_0.A * __real_3b808081;
          (param_2->field0_0x0)._s_0.R =
               FLinearColor::sRGBToLinearTable[(pFVar4->Color).field0_0x0._s_0.R];
          (param_2->field0_0x0)._s_0.G = fVar1;
          (param_2->field0_0x0)._s_0.B = fVar2;
          (param_2->field0_0x0)._s_0.A = fVar5;
          FVar3.Data = local_18.AllocatorInstance.Data;
        }
      }
    }
    else {
      FVar3.Data = local_28.AllocatorInstance.Data;
      local_18.ArrayNum = local_28.ArrayNum;
      if (1 < local_28.ArrayNum) {
        pFVar4 = FDS_ResourceColorTableRow::GetRef
                           ((longlong)*(int *)(local_28.AllocatorInstance.Data + 4),true);
        fVar1 = FLinearColor::sRGBToLinearTable[(pFVar4->Color).field0_0x0._s_0.G];
        fVar2 = FLinearColor::sRGBToLinearTable[(pFVar4->Color).field0_0x0._s_0.B];
        fVar5 = (float)(pFVar4->Color).field0_0x0._s_0.A * __real_3b808081;
        (param_2->field0_0x0)._s_0.R =
             FLinearColor::sRGBToLinearTable[(pFVar4->Color).field0_0x0._s_0.R];
        (param_2->field0_0x0)._s_0.G = fVar1;
        (param_2->field0_0x0)._s_0.B = fVar2;
        (param_2->field0_0x0)._s_0.A = fVar5;
        FVar3.Data = local_28.AllocatorInstance.Data;
        local_18.ArrayNum = local_28.ArrayNum;
      }
    }
    if (2 < local_18.ArrayNum) {
      *param_3 = *(int *)(FVar3.Data + 8);
    }
  }
LAB_14b9b0c99:
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GetTriggerChordAction @ 14b9b42f0

TObjectPtr<UInputAction_const_> __cdecl
DS_InputUtil::GetTriggerChordAction(FEnhancedActionKeyMapping *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  FObjectPtr_u_0 FVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong *in_RDX;
  FObjectPtr_u_0 *pFVar8;
  FObjectPtr_u_0 local_res10;
  
  pFVar8 = (FObjectPtr_u_0 *)*in_RDX;
  lVar4 = in_RDX[1];
  pFVar1 = pFVar8 + (int)lVar4;
  do {
    if ((int)in_RDX[1] != (int)lVar4) {
      `TCheckedPointerIterator<TObjectPtr<UInputTrigger>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res10);
    }
    if (pFVar8 == pFVar1) {
      (param_1->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      return (TObjectPtr<UInputAction_const_>)(TObjectPtr<UInputAction_const_>_u_0)param_1;
    }
    local_res10 = (FObjectPtr_u_0)pFVar8->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14b9b435b:
      FVar5 = local_res10;
      if (local_res10.Handle != (UObject *)0x0) {
        pUVar7 = Z_Construct_UClass_UInputTriggerChordAction_NoRegister();
        iVar2 = (int)pUVar7->_padding_;
        if (((iVar2 <= *(int *)(*(longlong *)&(FVar5.Handle)->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&(FVar5.Handle)->field_0x10 + 0x30) + (longlong)iVar2 * 8)
             == &pUVar7->_padding_)) && (local_res10.Handle != (UObject *)0x0)) {
          pUVar7 = Z_Construct_UClass_UInputTriggerChordAction_NoRegister();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar7);
          if (((bVar6) && (local_res10.Handle != (UObject *)0x0)) &&
             (pUVar3 = *(UObject **)(local_res10.Handle + 2), pUVar3 != (UObject *)0x0)) {
            (param_1->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)pUVar3;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar3);
            }
            return (TObjectPtr<UInputAction_const_>)(TObjectPtr<UInputAction_const_>_u_0)param_1;
          }
        }
      }
    }
    else if (local_res10.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res10.Handle);
      goto LAB_14b9b435b;
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// IsExistsInputAction @ 14b9b7350

bool __cdecl
DS_InputUtil::IsExistsInputAction
          (TObjectPtr<UInputMappingContext> param_1,TObjectPtr<UInputAction_const_> param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)param_1.field0_0x0;
  iVar1 = *(int *)(lVar2 + 0x48);
  lVar3 = *(longlong *)(lVar2 + 0x40);
  lVar4 = (longlong)iVar1 * 0x50 + lVar3;
  while( true ) {
    if (*(int *)(lVar2 + 0x48) != iVar1) {
      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar3 == lVar4) break;
    if (*(longlong *)(lVar3 + 0x20) == *(longlong *)param_2.field0_0x0) {
      return true;
    }
    lVar3 = lVar3 + 0x50;
  }
  return false;
}

// IsExistsKey @ 14b9b73d0

bool __cdecl DS_InputUtil::IsExistsKey(TObjectPtr<UInputMappingContext> param_1,FKey *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if ((*(longlong *)param_1.field0_0x0 != 0) && (bVar3 = FKey::IsValid(param_2), bVar3)) {
    lVar2 = *(longlong *)param_1.field0_0x0;
    iVar1 = *(int *)(lVar2 + 0x48);
    lVar4 = *(longlong *)(lVar2 + 0x40);
    lVar5 = (longlong)iVar1 * 0x50 + lVar4;
    while( true ) {
      if (*(int *)(lVar2 + 0x48) != iVar1) {
        `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (lVar4 == lVar5) break;
      if (*(FName *)(lVar4 + 0x28) == param_2->KeyName) {
        return true;
      }
      lVar4 = lVar4 + 0x50;
    }
  }
  return false;
}

// IsLongPressKey @ 14b9b74e0

bool __cdecl
DS_InputUtil::IsLongPressKey
          (UDS_InputConfig *param_1,TObjectPtr<UInputMappingContext> param_2,
          EDS_KeyActionType param_3,EDS_InputDeviceType param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UInputAction *pUVar4;
  longlong lVar5;
  longlong lVar6;
  ForAnyElementType local_28;
  
  if ((((param_1 != (UDS_InputConfig *)0x0) && (*(longlong *)param_2.field0_0x0 != 0)) &&
      (param_3 != None)) &&
     (pUVar4 = GetInputAction(param_1,param_3), pUVar4 != (UInputAction *)0x0)) {
    lVar2 = *(longlong *)param_2.field0_0x0;
    iVar1 = *(int *)(lVar2 + 0x48);
    lVar5 = *(longlong *)(lVar2 + 0x40);
    lVar6 = (longlong)iVar1 * 0x50 + lVar5;
    while( true ) {
      if (*(int *)(lVar2 + 0x48) != iVar1) {
        `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&stack0x00000008);
      }
      if (lVar5 == lVar6) break;
      if ((*(UInputAction **)(lVar5 + 0x20) == (UInputAction *)0x0) ||
         (*(UInputAction **)(lVar5 + 0x20) != pUVar4)) {
LAB_14b9b75a5:
        lVar5 = lVar5 + 0x50;
      }
      else {
        bVar3 = FKey::IsGamepadKey((FKey *)(lVar5 + 0x28));
        if (param_4 != GamePad) {
          if ((param_4 == KeyboardMouse) && (!bVar3)) goto LAB_14b9b7590;
          goto LAB_14b9b75a5;
        }
        if (bVar3) {
LAB_14b9b7590:
          GetInputTriggerHold((FEnhancedActionKeyMapping *)&stack0xffffffffffffffd8);
          if (local_28.Data != (FScriptContainerElement *)0x0) {
            return true;
          }
          goto LAB_14b9b75a5;
        }
        lVar5 = lVar5 + 0x50;
      }
    }
  }
  return false;
}

// OverrideKey @ 14b9bf890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UInputMappingContext> __cdecl
DS_InputUtil::OverrideKey
          (UDS_InputConfig *param_1,TObjectPtr<UInputMappingContext> param_2,
          EDS_KeyActionType param_3,EDS_InputDeviceType param_4,EDS_KeyType param_5,
          EDS_KeyType param_6)

{
  int *piVar1;
  UInputAction *pUVar2;
  FObjectPtr_u_0 *this;
  UObject *pUVar3;
  undefined8 uVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  FKey *pFVar8;
  FEnhancedActionKeyMapping *pFVar9;
  UClass *pUVar10;
  UPackage *pUVar11;
  UObject *pUVar12;
  int iVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  FEnhancedActionKeyMapping *pFVar16;
  longlong lVar17;
  FObjectPtr_u_0 *this_00;
  FScriptContainerElement *pFVar18;
  UInputMappingContext *this_01;
  undefined4 in_register_00000084;
  ulonglong uVar19;
  undefined3 in_register_00000089;
  int iVar20;
  FEnhancedActionKeyMapping *pFVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  EDS_KeyType in_stack_00000038;
  undefined1 auStack_178 [32];
  byte local_158 [4];
  EDS_KeyType local_154;
  FEnhancedActionKeyMapping *local_150;
  UInputMappingContext *local_148;
  UInputAction *local_140;
  UInputAction *local_138;
  EDS_KeyType local_130;
  uint local_12c;
  UInputMappingContext *local_128;
  FEnhancedActionKeyMapping *local_120;
  FKey local_118;
  undefined1 local_100 [16];
  ForAnyElementType local_f0;
  TObjectPtr<UInputMappingContext>_u_0 local_e8;
  FKey local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_140 = *(UInputAction **)CONCAT44(in_register_00000084,param_3);
  local_154 = param_6;
  local_130 = in_stack_00000038;
  local_e8 = (TObjectPtr<UInputMappingContext>_u_0)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_140 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  DeepCopyMappingContext((TObjectPtr<UInputMappingContext>)&local_128);
  this_01 = local_128;
  if (local_128 == (UInputMappingContext *)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    local_140 = GetInputAction((UDS_InputConfig *)param_2.field0_0x0,
                               CONCAT31(in_register_00000089,param_4));
    if (local_140 != (UInputAction *)0x0) {
      local_f0.Data = *(FScriptContainerElement **)CONCAT44(in_register_00000084,param_3);
      local_12c = *(uint *)(local_f0.Data + 0x48);
      uVar19 = (ulonglong)(int)local_12c;
      pFVar21 = *(FEnhancedActionKeyMapping **)(local_f0.Data + 0x40);
      pFVar16 = pFVar21 + uVar19;
      local_150 = pFVar16;
      while( true ) {
        local_120 = pFVar21;
        if (*(int *)(local_f0.Data + 0x48) != (int)uVar19) {
          `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_158);
        }
        param_1 = (UDS_InputConfig *)local_e8;
        if (pFVar21 == pFVar16) break;
        pUVar2 = (pFVar21->Action).field0_0x0.DebugPtr;
        if ((pUVar2 != (UInputAction *)0x0) && (pUVar2 == local_140)) {
          local_138 = pUVar2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          local_148 = this_01;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          bVar5 = IsExistsInputAction((TObjectPtr<UInputMappingContext>)&local_148,
                                      (TObjectPtr<UInputAction_const_>)&local_138);
          if (bVar5) {
            bVar5 = FKey::IsGamepadKey(&pFVar21->Key);
            pFVar16 = local_150;
            if ((undefined1)param_5 == MouseScrollDown) {
              if (bVar5) {
LAB_14b9bfa09:
                local_118.KeyName = (pFVar21->Key).KeyName;
                local_118.KeyDetails.Object = (pFVar21->Key).KeyDetails.Object;
                local_118.KeyDetails.SharedReferenceCount.ReferenceController =
                     (pFVar21->Key).KeyDetails.SharedReferenceCount.ReferenceController;
                if (local_118.KeyDetails.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_118.KeyDetails.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_118.KeyDetails.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                UInputMappingContext::UnmapKey
                          (this_01,(pFVar21->Action).field0_0x0.DebugPtr,&local_118);
                pFVar8 = GetKey(&local_e0,param_6);
                pFVar9 = UInputMappingContext::MapKey
                                   (this_01,(pFVar21->Action).field0_0x0.DebugPtr,pFVar8);
                local_100._8_8_ = pFVar9;
                DeepCopyMapping(pFVar21,pFVar9);
                GetTriggerChordAction((FEnhancedActionKeyMapping *)local_100);
                uVar4 = local_100._0_8_;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   ((UObject *)local_100._0_8_ != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_100._0_8_);
                }
                iVar20 = (pFVar9->Triggers).ArrayNum;
                lVar17 = (longlong)iVar20;
                if (iVar20 != 0) {
                  this = (FObjectPtr_u_0 *)(pFVar9->Triggers).AllocatorInstance.Data;
                  iVar20 = 0;
                  iVar24 = 0;
                  local_148 = (UInputMappingContext *)((ulonglong)local_148 & 0xffffffff00000000);
                  lVar22 = 0;
                  if (this->Handle == (UObject *)0x0) {
LAB_14b9bfadd:
                    bVar7 = 1;
                  }
                  else {
                    pUVar10 = Z_Construct_UClass_UInputTriggerChordAction_NoRegister();
                    bVar5 = FObjectPtr::IsA((FObjectPtr *)this,pUVar10);
                    if (((!bVar5) || (this->Handle == (UObject *)0x0)) ||
                       (*(UObject **)(this->Handle + 2) != (UObject *)uVar4)) goto LAB_14b9bfadd;
                    bVar7 = 0;
                  }
                  do {
                    lVar22 = lVar22 + 1;
                    iVar23 = iVar24 + 1;
                    local_138 = (UInputAction *)CONCAT44(local_138._4_4_,iVar24);
                    iVar13 = iVar24;
                    local_158[0] = bVar7;
                    iVar24 = iVar23;
                    if (lVar22 < lVar17) {
                      this_00 = this + lVar22;
                      do {
                        if (this_00->Handle == (UObject *)0x0) {
LAB_14b9bfb3c:
                          bVar6 = 1;
                        }
                        else {
                          pUVar10 = Z_Construct_UClass_UInputTriggerChordAction_NoRegister();
                          bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
                          if (((!bVar5) || (this_00->Handle == (UObject *)0x0)) ||
                             (*(UObject **)(this_00->Handle + 2) != (UObject *)uVar4))
                          goto LAB_14b9bfb3c;
                          bVar6 = 0;
                        }
                        if (bVar7 != bVar6) break;
                        iVar24 = iVar24 + 1;
                        lVar22 = lVar22 + 1;
                        this_00 = this_00 + 1;
                      } while (lVar22 < lVar17);
                      iVar13 = (int)local_138;
                      iVar20 = (int)local_148;
                    }
                    if (local_158[0] != 0) {
                      if (iVar20 != iVar13) {
                        memmove(this + iVar20,this + iVar13,(longlong)(iVar24 - iVar13) << 3);
                      }
                      iVar20 = iVar20 + (iVar24 - iVar13);
                      local_148 = (UInputMappingContext *)CONCAT44(local_148._4_4_,iVar20);
                    }
                    bVar7 = local_158[0] ^ 1;
                  } while (lVar22 < lVar17);
                  ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)local_100._8_8_)
                  ->ArrayNum = iVar20;
                  this_01 = local_128;
                  pFVar9 = (FEnhancedActionKeyMapping *)local_100._8_8_;
                  pFVar21 = local_120;
                  local_158[0] = bVar7;
                }
                if (local_130 != None) {
                  pFVar8 = GetKey(&local_118,local_130);
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this_01);
                  }
                  iVar20 = (this_01->DefaultKeyMappings).Mappings.ArrayNum;
                  pFVar15 = (this_01->DefaultKeyMappings).Mappings.AllocatorInstance.Data;
                  pFVar18 = pFVar15 + (longlong)iVar20 * 0x50;
                  while( true ) {
                    if ((this_01->DefaultKeyMappings).Mappings.ArrayNum != iVar20) {
                      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='
                      ::__l2::<lambda_1>::operator()(local_158);
                    }
                    if (pFVar15 == pFVar18) {
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_118.KeyDetails.SharedReferenceCount.ReferenceController);
                      pFVar16 = local_150;
                      param_6 = local_154;
                      goto LAB_14b9bfd2d;
                    }
                    if (*(FName *)(pFVar15 + 0x28) == pFVar8->KeyName) break;
                    pFVar15 = pFVar15 + 0x50;
                  }
                  pUVar3 = *(UObject **)(pFVar15 + 0x20);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline
                            (local_118.KeyDetails.SharedReferenceCount.ReferenceController);
                  pFVar16 = local_150;
                  param_6 = local_154;
                  if (pUVar3 == (UObject *)0x0) goto LAB_14b9bfd2d;
                  pUVar11 = GetTransientPackage();
                  FObjectInitializer::AssertIfInConstructor
                            ((UObject *)pUVar11,
                             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                            );
                  pUVar10 = Z_Construct_UClass_UInputTriggerChordAction_NoRegister();
                  FStaticConstructObjectParameters::FStaticConstructObjectParameters
                            ((FStaticConstructObjectParameters *)local_c8,pUVar10);
                  local_c8._8_8_ = pUVar11;
                  pUVar12 = StaticConstructObject_Internal
                                      ((FStaticConstructObjectParameters *)local_c8);
                  if (local_c8._64_8_ != 0) {
                    plVar14 = (longlong *)(local_c8 + 0x50);
                    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                      plVar14 = (longlong *)local_c8._104_8_;
                    }
                    (**(code **)(*plVar14 + 0x10))();
                  }
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (pUVar12 != (UObject *)0x0) {
                      UE::GC::MarkAsReachable(pUVar12);
                    }
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable(pUVar3);
                    }
                  }
                  *(UObject **)(pUVar12 + 2) = pUVar3;
                  piVar1 = &(pFVar9->Triggers).ArrayMax;
                  iVar20 = (pFVar9->Triggers).ArrayNum;
                  if (iVar20 == *piVar1) {
                    iVar20 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,(ForAnyElementType *)pFVar9,piVar1);
                  }
                  (pFVar9->Triggers).ArrayNum = iVar20 + 1;
                  *(UObject **)((pFVar9->Triggers).AllocatorInstance.Data + (longlong)iVar20 * 8) =
                       pUVar12;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar12 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar12);
                  }
                }
                pFVar16 = local_150;
                param_6 = local_154;
                if (0 < (pFVar21->Modifiers).ArrayNum) {
                  TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_>::operator=
                            (&pFVar9->Modifiers,&pFVar21->Modifiers);
                  pFVar16 = local_150;
                  param_6 = local_154;
                }
              }
            }
            else if (((undefined1)param_5 == MouseScrollUp) && (!bVar5)) goto LAB_14b9bfa09;
          }
        }
LAB_14b9bfd2d:
        pFVar21 = pFVar21 + 1;
        uVar19 = (ulonglong)local_12c;
      }
    }
    *(UInputMappingContext **)param_1 = this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
  }
  return (TObjectPtr<UInputMappingContext>)(TObjectPtr<UInputMappingContext>_u_0)param_1;
}

// OverrideMappingContext @ 14b9bfda0

TObjectPtr<UInputMappingContext> __cdecl
DS_InputUtil::OverrideMappingContext
          (TObjectPtr<UInputMappingContext> param_1,TObjectPtr<UInputMappingContext> param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  UInputMappingContext *this;
  FScriptContainerElement *pFVar6;
  FEnhancedActionKeyMapping *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  FEnhancedActionKeyMapping *pFVar10;
  longlong lVar11;
  FEnhancedActionKeyMapping *pFVar12;
  longlong *in_R8;
  longlong lVar13;
  longlong lVar14;
  TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *pTVar15;
  UObject *local_res8;
  uint local_res10;
  longlong *local_res18;
  longlong local_res20;
  FKey local_68;
  
  local_res8 = *(UObject **)param_2.field0_0x0;
  local_res18 = in_R8;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  DeepCopyMappingContext(param_1);
  local_res20 = *in_R8;
  local_res10 = *(uint *)(local_res20 + 0x48);
  uVar8 = (ulonglong)(int)local_res10;
  lVar9 = *(longlong *)(local_res20 + 0x40);
  lVar13 = uVar8 * 0x50 + lVar9;
  do {
    if (*(int *)(local_res20 + 0x48) != (int)uVar8) {
      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (lVar9 == lVar13) {
      lVar9 = *local_res18;
      iVar2 = *(int *)(lVar9 + 0x48);
      pFVar12 = *(FEnhancedActionKeyMapping **)(lVar9 + 0x40);
      pFVar10 = pFVar12 + iVar2;
      while( true ) {
        if (*(int *)(lVar9 + 0x48) != iVar2) {
          `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res18);
        }
        if (pFVar12 == pFVar10) break;
        if ((pFVar12->Action).field0_0x0.DebugPtr != (UInputAction *)0x0) {
          local_68.KeyName = (pFVar12->Key).KeyName;
          this = *(UInputMappingContext **)param_1.field0_0x0;
          local_68.KeyDetails.Object = (pFVar12->Key).KeyDetails.Object;
          local_68.KeyDetails.SharedReferenceCount.ReferenceController =
               (pFVar12->Key).KeyDetails.SharedReferenceCount.ReferenceController;
          if (local_68.KeyDetails.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.KeyDetails.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar7 = UInputMappingContext::MapKey
                             (this,(pFVar12->Action).field0_0x0.DebugPtr,&local_68);
          iVar3 = (pFVar12->Triggers).ArrayNum;
          if ((0 < iVar3) && (pFVar7 != pFVar12)) {
            pFVar6 = (pFVar12->Triggers).AllocatorInstance.Data;
            (pFVar7->Triggers).ArrayNum = iVar3;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar3,(pFVar7->Triggers).ArrayMax,(ForAnyElementType *)pFVar7,iVar3,
                       &(pFVar7->Triggers).ArrayMax);
            ConstructItems<TObjectPtr<UInputTrigger>,TObjectPtr<UInputTrigger>,int>
                      ((pFVar7->Triggers).AllocatorInstance.Data,(TObjectPtr<UInputTrigger> *)pFVar6
                       ,iVar3);
          }
          iVar3 = (pFVar12->Modifiers).ArrayNum;
          if (0 < iVar3) {
            pTVar15 = &pFVar7->Modifiers;
            if (pTVar15 != &pFVar12->Modifiers) {
              pFVar6 = (pFVar12->Modifiers).AllocatorInstance.Data;
              piVar1 = &(pFVar7->Modifiers).ArrayMax;
              (pFVar7->Modifiers).ArrayNum = iVar3;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar3,*piVar1,&pTVar15->AllocatorInstance,iVar3,piVar1);
              ConstructItems<TObjectPtr<UInputModifier>,TObjectPtr<UInputModifier>,int>
                        ((pTVar15->AllocatorInstance).Data,(TObjectPtr<UInputModifier> *)pFVar6,
                         iVar3);
            }
          }
        }
        pFVar12 = pFVar12 + 1;
      }
      return (TObjectPtr<UInputMappingContext>)param_1.field0_0x0.DebugPtr;
    }
    pUVar4 = *(UObject **)(lVar9 + 0x20);
    if (pUVar4 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      pUVar5 = *(UObject **)param_1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      iVar2 = *(int *)&pUVar5[1].field_0x20;
      lVar11 = *(longlong *)&pUVar5[1].field_0x18;
      lVar14 = (longlong)iVar2 * 0x50 + lVar11;
      while( true ) {
        if (*(int *)&pUVar5[1].field_0x20 != iVar2) {
          `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (lVar11 == lVar14) goto LAB_14b9bfea7;
        if (*(UObject **)(lVar11 + 0x20) == pUVar4) break;
        lVar11 = lVar11 + 0x50;
      }
      UInputMappingContext::UnmapAllKeysFromAction
                (*(UInputMappingContext **)param_1.field0_0x0,*(UInputAction **)(lVar9 + 0x20));
    }
LAB_14b9bfea7:
    lVar9 = lVar9 + 0x50;
    uVar8 = (ulonglong)local_res10;
  } while( true );
}

// ReleaseAllKeys @ 14b9c1fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DS_InputUtil::ReleaseAllKeys(APlayerController *param_1)

{
  FKey *pFVar1;
  FInputDeviceId FVar2;
  UGameViewportClient *pUVar3;
  UPlayerInput *pUVar4;
  int iVar5;
  bool bVar6;
  ULocalPlayer *pUVar7;
  FViewport *pFVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  TArray<FKey,TSizedDefaultAllocator<32>_> local_b8;
  FKey local_a8;
  FInputKeyEventArgs local_88;
  
  if (((param_1 != (APlayerController *)0x0) &&
      ((param_1->PlayerInput).field0_0x0.DebugPtr != (UPlayerInput *)0x0)) &&
     (pUVar7 = APlayerController::GetLocalPlayer(param_1), pUVar7 != (ULocalPlayer *)0x0)) {
    pFVar8 = (FViewport *)0x0;
    pUVar3 = (GEngine->GameViewport).field0_0x0.DebugPtr;
    if (pUVar3 != (UGameViewportClient *)0x0) {
      pFVar8 = pUVar3->Viewport;
    }
    FVar2.InternalId = pUVar7->ControllerId;
    QueryPerformanceCounter(&local_res10);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    EKeys::GetAllKeys(&local_b8);
    iVar5 = local_b8.ArrayNum;
    pFVar1 = (FKey *)(local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 0x18);
    FVar9.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      if (local_b8.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((FKey *)FVar9.Data == pFVar1) break;
      local_a8.KeyName = ((FKey *)FVar9.Data)->KeyName;
      pUVar4 = (param_1->PlayerInput).field0_0x0.DebugPtr;
      local_a8.KeyDetails.Object = (((FKey *)FVar9.Data)->KeyDetails).Object;
      local_a8.KeyDetails.SharedReferenceCount.ReferenceController =
           (((FKey *)FVar9.Data)->KeyDetails).SharedReferenceCount.ReferenceController;
      if (local_a8.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar6 = UPlayerInput::IsPressed(pUVar4,&local_a8);
      if (bVar6) {
        FInputKeyEventArgs::FInputKeyEventArgs
                  (&local_88,pFVar8,FVar2,(FKey *)FVar9.Data,IE_Released,0.0,false,
                   local_res10.QuadPart);
        pUVar4 = (param_1->PlayerInput).field0_0x0.DebugPtr;
        (**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      }
      FVar9.Data = FVar9.Data + 0x18;
    }
    DestructItems<FKey,int>((FKey *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FKey *)local_b8.AllocatorInstance.Data != (FKey *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return;
}

// DefaultObject'' @ 15043caa0

void __cdecl `dynamic_atexit_destructor_for_'FDS_WarpBaseTableRow::DefaultObject__(void)

{
  FDS_WarpBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cac0

void __cdecl `dynamic_atexit_destructor_for_'FDS_WarpLocationTableRow::DefaultObject__(void)

{
  FDS_WarpLocationTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cae0

void __cdecl `dynamic_atexit_destructor_for_'FDS_WaterVolumeTableRow::DefaultObject__(void)

{
  if (FDS_WaterVolumeTableRow::DefaultObject.UniqueID.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WaterVolumeTableRow::DefaultObject.UniqueID.Data.AllocatorInstance.Data);
  }
  FDS_WaterVolumeTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cb10

void __cdecl `dynamic_atexit_destructor_for_'FDS_WeaponTypeBaseTableRow::DefaultObject__(void)

{
  if (FDS_WeaponTypeBaseTableRow::DefaultObject.ID_LinkSkillList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WeaponTypeBaseTableRow::DefaultObject.ID_LinkSkillList.AllocatorInstance.Data)
    ;
  }
  if (FDS_WeaponTypeBaseTableRow::DefaultObject.ID_NormalAttack.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WeaponTypeBaseTableRow::DefaultObject.ID_NormalAttack.AllocatorInstance.Data);
  }
  FDS_WeaponTypeBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cb50

void __cdecl `dynamic_atexit_destructor_for_'FDS_WindowBaseTableRow::DefaultObject__(void)

{
  if (FDS_WindowBaseTableRow::DefaultObject.WindowHideDelay.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WindowBaseTableRow::DefaultObject.WindowHideDelay.Data.AllocatorInstance.Data)
    ;
  }
  if (FDS_WindowBaseTableRow::DefaultObject.WindowOverDelay.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WindowBaseTableRow::DefaultObject.WindowOverDelay.Data.AllocatorInstance.Data)
    ;
  }
  if (FDS_WindowBaseTableRow::DefaultObject.WidgetPath.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WindowBaseTableRow::DefaultObject.WidgetPath.SubPathString.Data.
                  AllocatorInstance.Data);
  }
  if (FDS_WindowBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WindowBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_WindowBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cbc0

void __cdecl `dynamic_atexit_destructor_for_'FDS_WindowGroupTableRow::DefaultObject__(void)

{
  if (FDS_WindowGroupTableRow::DefaultObject.ID_WindowWidget.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WindowGroupTableRow::DefaultObject.ID_WindowWidget.AllocatorInstance.Data);
  }
  if (FDS_WindowGroupTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WindowGroupTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_WindowGroupTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cc00

void __cdecl `dynamic_atexit_destructor_for_'FDS_WindowRewardResultTableRow::DefaultObject__(void)

{
  FDS_WindowRewardResultTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cc20

void __cdecl `dynamic_atexit_destructor_for_'FDS_WorldBaseTableRow::DefaultObject__(void)

{
  if (FDS_WorldBaseTableRow::DefaultObject.WorldName.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WorldBaseTableRow::DefaultObject.WorldName.AllocatorInstance.Data);
  }
  if (FDS_WorldBaseTableRow::DefaultObject.WorldID.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WorldBaseTableRow::DefaultObject.WorldID.AllocatorInstance.Data);
  }
  FDS_WorldBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cc60

void __cdecl `dynamic_atexit_destructor_for_'FDS_WorldBossTableRow::DefaultObject__(void)

{
  if (FDS_WorldBossTableRow::DefaultObject.ID_SpawnAppear.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WorldBossTableRow::DefaultObject.ID_SpawnAppear.AllocatorInstance.Data);
  }
  if (FDS_WorldBossTableRow::DefaultObject.ID_SpawnPreAppear.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WorldBossTableRow::DefaultObject.ID_SpawnPreAppear.AllocatorInstance.Data);
  }
  if (FDS_WorldBossTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WorldBossTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_WorldBossTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043ccb0

void __cdecl `dynamic_atexit_destructor_for_'FDS_WorldInfoBaseTableRow::DefaultObject__(void)

{
  if (FDS_WorldInfoBaseTableRow::DefaultObject.MapInfoPath.SubPathString.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WorldInfoBaseTableRow::DefaultObject.MapInfoPath.SubPathString.Data.
                  AllocatorInstance.Data);
  }
  if (FDS_WorldInfoBaseTableRow::DefaultObject.MapResourcePath.SubPathString.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WorldInfoBaseTableRow::DefaultObject.MapResourcePath.SubPathString.Data.
                  AllocatorInstance.Data);
  }
  if (FDS_WorldInfoBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WorldInfoBaseTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_WorldInfoBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cd00

void __cdecl `dynamic_atexit_destructor_for_'FDS_WorldMapZoomStepTableRow::DefaultObject__(void)

{
  if (FDS_WorldMapZoomStepTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_WorldMapZoomStepTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_WorldMapZoomStepTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cd30

void __cdecl `dynamic_atexit_destructor_for_'FDS_ZoneBaseTableRow::DefaultObject__(void)

{
  FDS_ZoneBaseTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cd50

void __cdecl `dynamic_atexit_destructor_for_'FDS_ZoneDeathPenaltyTableRow::DefaultObject__(void)

{
  if (FDS_ZoneDeathPenaltyTableRow::DefaultObject.ZoneNotiCenterResourcePath.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZoneDeathPenaltyTableRow::DefaultObject.ZoneNotiCenterResourcePath.Data.
                  AllocatorInstance.Data);
  }
  if (FDS_ZoneDeathPenaltyTableRow::DefaultObject.DeathPenaltyMountLostItem.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZoneDeathPenaltyTableRow::DefaultObject.DeathPenaltyMountLostItem.
                  AllocatorInstance.Data);
  }
  if (FDS_ZoneDeathPenaltyTableRow::DefaultObject.DeathPenaltyItemDurability.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZoneDeathPenaltyTableRow::DefaultObject.DeathPenaltyItemDurability.
                  AllocatorInstance.Data);
  }
  if (FDS_ZoneDeathPenaltyTableRow::DefaultObject.DeathPenaltyInjure.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZoneDeathPenaltyTableRow::DefaultObject.DeathPenaltyInjure.AllocatorInstance.
                  Data);
  }
  if (FDS_ZoneDeathPenaltyTableRow::DefaultObject.DeathPenaltyEXP.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZoneDeathPenaltyTableRow::DefaultObject.DeathPenaltyEXP.AllocatorInstance.Data
                 );
  }
  FDS_ZoneDeathPenaltyTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cdd0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ZoneDistrictPropTableRow::DefaultObject__(void)

{
  FDS_ZoneDistrictPropTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cdf0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ZoneDistrictTableRow::DefaultObject__(void)

{
  if (FDS_ZoneDistrictTableRow::DefaultObject.MountLocationType.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZoneDistrictTableRow::DefaultObject.MountLocationType.AllocatorInstance.Data);
  }
  if (FDS_ZoneDistrictTableRow::DefaultObject.ID_DistrictBuff.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZoneDistrictTableRow::DefaultObject.ID_DistrictBuff.AllocatorInstance.Data);
  }
  if (FDS_ZoneDistrictTableRow::DefaultObject._padding_ != 0) {
    FMemory::Free((void *)FDS_ZoneDistrictTableRow::DefaultObject._padding_);
  }
  FDS_ZoneDistrictTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043ce40

void __cdecl `dynamic_atexit_destructor_for_'FDS_ZoneGroupTableRow::DefaultObject__(void)

{
  if (FDS_ZoneGroupTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZoneGroupTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ZoneGroupTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043ce70

void __cdecl `dynamic_atexit_destructor_for_'FDS_ZoneIslandTableRow::DefaultObject__(void)

{
  if (FDS_ZoneIslandTableRow::DefaultObject.MapResourcePath.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZoneIslandTableRow::DefaultObject.MapResourcePath.Data.AllocatorInstance.Data)
    ;
  }
  if (FDS_ZoneIslandTableRow::DefaultObject.ID_Zone.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZoneIslandTableRow::DefaultObject.ID_Zone.AllocatorInstance.Data);
  }
  FDS_ZoneIslandTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043ceb0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ZonePropInfoTableRow::DefaultObject__(void)

{
  if (FDS_ZonePropInfoTableRow::DefaultObject.ID_ZoneBuff.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZonePropInfoTableRow::DefaultObject.ID_ZoneBuff.AllocatorInstance.Data);
  }
  if (FDS_ZonePropInfoTableRow::DefaultObject.ZoneProp.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZonePropInfoTableRow::DefaultObject.ZoneProp.AllocatorInstance.Data);
  }
  FDS_ZonePropInfoTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// DefaultObject'' @ 15043cef0

void __cdecl `dynamic_atexit_destructor_for_'FDS_ZoneResurrectionTableRow::DefaultObject__(void)

{
  if (FDS_ZoneResurrectionTableRow::DefaultObject.Version.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_ZoneResurrectionTableRow::DefaultObject.Version.Data.AllocatorInstance.Data);
  }
  FDS_ZoneResurrectionTableRow::DefaultObject._padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// Empty'' @ 15043cf20

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::~FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  return;
}

// Empty'' @ 15043cf40

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_DataRepoManager>::Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TDS_Singleton<FDS_DataRepoManager>::Empty.RepoArray.AllocatorInstance.Data;
  if (TDS_Singleton<FDS_DataRepoManager>::Empty.RepoArray.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (TDS_Singleton<FDS_DataRepoManager>::Empty.RepoArray.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// Empty'' @ 15043cf60

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  TDS_Singleton<FDS_HttpServer>::Empty._padding_ = (longlong)&___7FDS_HttpServer__6B_;
  FDS_Urls::~FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  return;
}

// Empty'' @ 15043cf80

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_PlayerRepo>::Empty__(void)

{
  DestructItems<misc::Player,int>
            ((Player *)TDS_Singleton<FDS_PlayerRepo>::Empty.PlayerList.AllocatorInstance.Data,
             TDS_Singleton<FDS_PlayerRepo>::Empty.PlayerList.ArrayNum);
  if (TDS_Singleton<FDS_PlayerRepo>::Empty.PlayerList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TDS_Singleton<FDS_PlayerRepo>::Empty.PlayerList.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)
             TDS_Singleton<FDS_PlayerRepo>::Empty.SearchedPlayerNameList.AllocatorInstance.Data,
             TDS_Singleton<FDS_PlayerRepo>::Empty.SearchedPlayerNameList.ArrayNum);
  if (TDS_Singleton<FDS_PlayerRepo>::Empty.SearchedPlayerNameList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TDS_Singleton<FDS_PlayerRepo>::Empty.SearchedPlayerNameList.AllocatorInstance.Data
                 );
    return;
  }
  return;
}

// Empty'' @ 15043cfe0

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__(void)

{
  if (TDS_Singleton<FDS_RaidPartyRepo>::Empty.Password.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TDS_Singleton<FDS_RaidPartyRepo>::Empty.Password.Data.AllocatorInstance.Data);
  }
  DestructItems<FDS_RaidPartyMemberInfo,int>
            ((FDS_RaidPartyMemberInfo *)
             TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.Members.AllocatorInstance.Data,
             TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.Members.ArrayNum);
  if (TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.Members.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.Members.AllocatorInstance.
                  Data);
  }
  if (TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.PartyName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.PartyName.Data.
                  AllocatorInstance.Data);
    return;
  }
  return;
}

// ItemTypeMap'' @ 15043d040

void __cdecl `dynamic_atexit_destructor_for_'FDS_WeaponTypeBaseTableRow::ItemTypeMap__(void)

{
  FDS_WeaponTypeBaseTableRow::ItemTypeMap._72_4_ = 0;
  if (FDS_WeaponTypeBaseTableRow::ItemTypeMap._64_8_ != 0) {
    FMemory::Free((void *)FDS_WeaponTypeBaseTableRow::ItemTypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemType,enum_EDS_WeaponType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemType,enum_EDS_WeaponType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FDS_WeaponTypeBaseTableRow::ItemTypeMap);
  return;
}

// Urls'' @ 15043d080

void __cdecl `dynamic_atexit_destructor_for_'UDS_GameInstance::Urls__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UDS_GameInstance::Urls.Data.AllocatorInstance.Data;
  if (UDS_GameInstance::Urls.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UDS_GameInstance::Urls.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 15043d0a0

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

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 15043d0c0

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

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 15043d0e0

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

