// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 191

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 1411fa4f0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 1411fa510

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 1411fa530

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 1411fa550

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 1411fa570

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 1411fa590

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 1411fa5b0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 1411fa5d0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 1411fa5f0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 1411fa610

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 1411fa630

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 1411fa650

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 1411fa670

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 1411fa690

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 1411fa6b0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 1411fa6d0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 1411fa6f0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 1411fa710

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 1411fa730

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 1411fa750

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

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 1411fa7d0

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

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 1411fa850

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 1411fa870

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 1411fa890

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 1411fa8b0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 1411fa8d0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 1411fa8f0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1411fa910

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Ability_DS_EquipmentAppearanceAbility_h__Script_ProjectDS_3850659317'' @ 1411fa9a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Ability_DS_EquipmentAppearanceAbility_h__Script_ProjectDS_3850659317__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Ability_DS_EquipmentAppearanceAbility_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvClimateTableRow_h__Script_ProjectDS_3009960665'' @ 1411fa9e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvClimateTableRow_h__Script_ProjectDS_3009960665__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvClimateTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvFlooringTableRow_h__Script_ProjectDS_1385645942'' @ 1411faa20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvFlooringTableRow_h__Script_ProjectDS_1385645942__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvFlooringTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvWeatherFixedDataTableRow_h__Script_ProjectDS_3931964629'' @ 1411faa60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvWeatherFixedDataTableRow_h__Script_ProjectDS_3931964629__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvWeatherFixedDataTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvWeatherRandomDataTableRow_h__Script_ProjectDS_229880477'' @ 1411faaa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvWeatherRandomDataTableRow_h__Script_ProjectDS_229880477__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvWeatherRandomDataTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvWeatherTableRow_h__Script_ProjectDS_1600273230'' @ 1411faae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvWeatherTableRow_h__Script_ProjectDS_1600273230__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_EnvWeatherTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EntityDeadType_h__Script_ProjectDS_3446985275'' @ 1411fab20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EntityDeadType_h__Script_ProjectDS_3446985275__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EntityDeadType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EntitySpawnRange_h__Script_ProjectDS_888485108'' @ 1411fab70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EntitySpawnRange_h__Script_ProjectDS_888485108__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EntitySpawnRange_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EquipEntityType_h__Script_ProjectDS_3544976512'' @ 1411fabc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EquipEntityType_h__Script_ProjectDS_3544976512__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EquipEntityType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EquipSlotType_h__Script_ProjectDS_953362659'' @ 1411fac10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EquipSlotType_h__Script_ProjectDS_953362659__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_EquipSlotType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ErrorCode_h__Script_ProjectDS_2270939668'' @ 1411fac60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ErrorCode_h__Script_ProjectDS_2270939668__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ErrorCode_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_EntityManager_h__Script_ProjectDS_3545652362'' @ 1411facb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_EntityManager_h__Script_ProjectDS_3545652362__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_EntityManager_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Ability_DS_EmissiveEffectAbilityData_h__Script_ProjectDS_226771595'' @ 1411facf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Ability_DS_EmissiveEffectAbilityData_h__Script_ProjectDS_226771595__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Ability_DS_EmissiveEffectAbilityData_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Ability_DS_EmissiveEffectAbilityData_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_DS_EntityData_h__Script_ProjectDS_1948848850'' @ 1411fad40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_DS_EntityData_h__Script_ProjectDS_1948848850__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_DS_EntityData_h__Script_ProjectDS_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Environment_DS_EnvironmentManager_h__Script_ProjectDS_3115604922'' @ 1411fad80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Environment_DS_EnvironmentManager_h__Script_ProjectDS_3115604922__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Environment_DS_EnvironmentManager_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_EnvironmentEvent_h__Script_ProjectDS_3301792501'' @ 1411fadc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_EnvironmentEvent_h__Script_ProjectDS_3301792501__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_EnvironmentEvent_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Components_Movement_DS_EntityActorMovementCore_h__Script_ProjectDS_2679953662'' @ 1411fae00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Components_Movement_DS_EntityActorMovementCore_h__Script_ProjectDS_2679953662__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Components_Movement_DS_EntityActorMovementCore_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_DS_EntityActorBase_h__Script_ProjectDS_3132159183'' @ 1411fae40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_DS_EntityActorBase_h__Script_ProjectDS_3132159183__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_DS_EntityActorBase_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_DS_EntityBase_h__Script_ProjectDS_3481383021'' @ 1411fae80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_DS_EntityBase_h__Script_ProjectDS_3481383021__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_DS_EntityBase_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_DS_EntityBase_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_DS_EntityDefines_h__Script_ProjectDS_532899945'' @ 1411faed0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_DS_EntityDefines_h__Script_ProjectDS_532899945__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_DS_EntityDefines_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_DS_EntityDefines_h__Script_ProjectDS_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_UI_Slate_Decorators_DS_EquipmentItemLinkTextDecorator_h__Script_ProjectDS_937733805'' @ 1411faf20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_UI_Slate_Decorators_DS_EquipmentItemLinkTextDecorator_h__Script_ProjectDS_937733805__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_UI_Slate_Decorators_DS_EquipmentItemLinkTextDecorator_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UDS_EnvironmentEvent @ 14b48ecc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_EnvironmentEvent(void)

{
  if (Z_Registration_Info_UClass_UDS_EnvironmentEvent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_EnvironmentEvent.OuterSingleton,
               &Z_Construct_UClass_UDS_EnvironmentEvent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_EnvironmentEvent.OuterSingleton;
}

// EDS_EntityDeadType_StaticEnum @ 14b48ee80

UEnum * __cdecl EDS_EntityDeadType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EntityDeadType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EntityDeadType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EntityDeadType,(UObject *)pUVar1,
                       L"EDS_EntityDeadType");
  }
  return Z_Registration_Info_UEnum_EDS_EntityDeadType.OuterSingleton;
}

// EDS_CharState_StaticEnum @ 14b48efb0

UEnum * __cdecl EDS_CharState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_CharState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_CharState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_CharState,(UObject *)pUVar1,L"EDS_CharState")
    ;
  }
  return Z_Registration_Info_UEnum_EDS_CharState.OuterSingleton;
}

// Z_Construct_UClass_UDS_EnvironmentManager @ 14b48eff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_EnvironmentManager(void)

{
  if (Z_Registration_Info_UClass_UDS_EnvironmentManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_EnvironmentManager.OuterSingleton,
               &Z_Construct_UClass_UDS_EnvironmentManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_EnvironmentManager.OuterSingleton;
}

// EDS_CharDetailState_StaticEnum @ 14b48f030

UEnum * __cdecl EDS_CharDetailState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_CharDetailState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_CharDetailState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_CharDetailState,(UObject *)pUVar1,
                       L"EDS_CharDetailState");
  }
  return Z_Registration_Info_UEnum_EDS_CharDetailState.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b48f0b0

void * __thiscall
FDS_EnvWeatherFixedDataTableRow::_scalar_deleting_destructor_
          (FDS_EnvWeatherFixedDataTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_WeatherGameTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 14b48f100

void * __cdecl Z_Construct_UScriptStruct_FDS_EnvWeatherFixedDataTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_EnvWeatherFixedDataTableRow,&UE::CoreUObject::Private::Construct<FDS_EnvWeatherFixedDataTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_EnvWeatherFixedDataTableRow>,&UE::CoreUObject::Private::Destruct<FDS_EnvWeatherFixedDataTableRow>,&UE::CoreUObject::Private::Copy<FDS_EnvWeatherFixedDataTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ADS_EntityActorBase @ 14b48f140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADS_EntityActorBase(void)

{
  if (Z_Registration_Info_UClass_ADS_EntityActorBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADS_EntityActorBase.OuterSingleton,
               &Z_Construct_UClass_ADS_EntityActorBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADS_EntityActorBase.OuterSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_EntityMaterialType @ 14b48f180

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_EntityMaterialType(void)

{
  if (Z_Registration_Info_UEnum_EDS_EntityMaterialType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_EntityMaterialType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_EntityMaterialType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_EntityMaterialType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDS_EntityMaterialInfo @ 14b48f1c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_EntityMaterialInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_EntityMaterialInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_EntityMaterialInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_EntityMaterialInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_EntityMaterialInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_EntityMaterialInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_ADS_EntityActorBase_UpdateMaskValue @ 14b48f240

UFunction * __cdecl Z_Construct_UFunction_ADS_EntityActorBase_UpdateMaskValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_EntityActorBase_UpdateMaskValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14b48f330

void * __thiscall
FDS_EnvWeatherRandomDataTableRow::_scalar_deleting_destructor_
          (FDS_EnvWeatherRandomDataTableRow *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewStructOps @ 14b48f460

void * __cdecl
Z_Construct_UScriptStruct_FDS_EnvWeatherRandomDataTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_EnvWeatherRandomDataTableRow,&UE::CoreUObject::Private::Construct<FDS_EnvWeatherRandomDataTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_EnvWeatherRandomDataTableRow>,&UE::CoreUObject::Private::Destruct<FDS_EnvWeatherRandomDataTableRow>,&UE::CoreUObject::Private::Copy<FDS_EnvWeatherRandomDataTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EDS_LookAtType_StaticEnum @ 14b48f4a0

UEnum * __cdecl EDS_LookAtType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_LookAtType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_LookAtType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_LookAtType,(UObject *)pUVar1,
                       L"EDS_LookAtType");
  }
  return Z_Registration_Info_UEnum_EDS_LookAtType.OuterSingleton;
}

// EDS_EntityType_StaticEnum @ 14b48f4e0

UEnum * __cdecl EDS_EntityType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EntityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EntityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EntityType,(UObject *)pUVar1,
                       L"EDS_EntityType");
  }
  return Z_Registration_Info_UEnum_EDS_EntityType.OuterSingleton;
}

// NewStructOps @ 14b48f520

void * __cdecl Z_Construct_UScriptStruct_FDS_CharStateInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_CharStateInfo,&UE::CoreUObject::Private::Construct<FDS_CharStateInfo>,&UE::CoreUObject::Private::ConstructForTests<FDS_CharStateInfo>,&UE::CoreUObject::Private::Destruct<FDS_CharStateInfo>,&UE::CoreUObject::Private::Copy<FDS_CharStateInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14b48f560

void * __cdecl Z_Construct_UScriptStruct_FDS_LocomotionStateInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_LocomotionStateInfo,&UE::CoreUObject::Private::Construct<FDS_LocomotionStateInfo>,&UE::CoreUObject::Private::ConstructForTests<FDS_LocomotionStateInfo>,&UE::CoreUObject::Private::Destruct<FDS_LocomotionStateInfo>,&UE::CoreUObject::Private::Copy<FDS_LocomotionStateInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14b48f670

void * __cdecl Z_Construct_UScriptStruct_FDS_StruckInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StruckInfo,&UE::CoreUObject::Private::Construct<FDS_StruckInfo>,&UE::CoreUObject::Private::ConstructForTests<FDS_StruckInfo>,&UE::CoreUObject::Private::Destruct<FDS_StruckInfo>,&UE::CoreUObject::Private::Copy<FDS_StruckInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b48f890

void * __thiscall
FDS_EnvWeatherTableRow::_scalar_deleting_destructor_(FDS_EnvWeatherTableRow *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewStructOps @ 14b48f8d0

void * __cdecl Z_Construct_UScriptStruct_FDS_EnvWeatherTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_EnvWeatherTableRow,&UE::CoreUObject::Private::Construct<FDS_EnvWeatherTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_EnvWeatherTableRow>,&UE::CoreUObject::Private::Destruct<FDS_EnvWeatherTableRow>,&UE::CoreUObject::Private::Copy<FDS_EnvWeatherTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDS_EntityActorMovementCore @ 14b48f9d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_EntityActorMovementCore(void)

{
  if (Z_Registration_Info_UClass_UDS_EntityActorMovementCore.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_EntityActorMovementCore.OuterSingleton,
               &Z_Construct_UClass_UDS_EntityActorMovementCore_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_EntityActorMovementCore.OuterSingleton;
}

// EDS_EntityMaterialType_StaticEnum @ 14b48fa10

UEnum * __cdecl EDS_EntityMaterialType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EntityMaterialType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EntityMaterialType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EntityMaterialType,(UObject *)pUVar1,
                       L"EDS_EntityMaterialType");
  }
  return Z_Registration_Info_UEnum_EDS_EntityMaterialType.OuterSingleton;
}

// NewStructOps @ 14b48fb30

void * __cdecl Z_Construct_UScriptStruct_FDS_EntityMaterialInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_EntityMaterialInfo,&UE::CoreUObject::Private::Construct<FDS_EntityMaterialInfo>,&UE::CoreUObject::Private::ConstructForTests<FDS_EntityMaterialInfo>,&UE::CoreUObject::Private::Destruct<FDS_EntityMaterialInfo>,&UE::CoreUObject::Private::Copy<FDS_EntityMaterialInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDS_EmissiveEffectAbilityData @ 14b48fb70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_EmissiveEffectAbilityData(void)

{
  if (Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.OuterSingleton,
               &Z_Construct_UClass_UDS_EmissiveEffectAbilityData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.OuterSingleton;
}

// EDS_EmissiveEffectType_StaticEnum @ 14b48fc20

UEnum * __cdecl EDS_EmissiveEffectType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EmissiveEffectType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EmissiveEffectType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EmissiveEffectType,(UObject *)pUVar1,
                       L"EDS_EmissiveEffectType");
  }
  return Z_Registration_Info_UEnum_EDS_EmissiveEffectType.OuterSingleton;
}

// NewProp_bIsVisible_SetBit @ 14b48fd20

void __cdecl
Z_Construct_UScriptStruct_FDS_EquipmentAppearanceData_Statics::NewProp_bIsVisible_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14b48fd30

void * __cdecl Z_Construct_UScriptStruct_FDS_EquipmentAppearanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_EquipmentAppearanceData,&UE::CoreUObject::Private::Construct<FDS_EquipmentAppearanceData>,&UE::CoreUObject::Private::ConstructForTests<FDS_EquipmentAppearanceData>,&UE::CoreUObject::Private::Destruct<FDS_EquipmentAppearanceData>,&UE::CoreUObject::Private::Copy<FDS_EquipmentAppearanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EDS_EquipEntityType_StaticEnum @ 14b48fd70

UEnum * __cdecl EDS_EquipEntityType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EquipEntityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EquipEntityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EquipEntityType,(UObject *)pUVar1,
                       L"EDS_EquipEntityType");
  }
  return Z_Registration_Info_UEnum_EDS_EquipEntityType.OuterSingleton;
}

// Z_Construct_UClass_UDS_EquipmentItemLinkTextDecoratorObject @ 14b48fe50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_EquipmentItemLinkTextDecoratorObject(void)

{
  if (Z_Registration_Info_UClass_UDS_EquipmentItemLinkTextDecoratorObject.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_EquipmentItemLinkTextDecoratorObject.OuterSingleton,
               &Z_Construct_UClass_UDS_EquipmentItemLinkTextDecoratorObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_EquipmentItemLinkTextDecoratorObject.OuterSingleton;
}

// EDS_EquipSlotType_StaticEnum @ 14b48fe90

UEnum * __cdecl EDS_EquipSlotType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EquipSlotType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EquipSlotType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EquipSlotType,(UObject *)pUVar1,
                       L"EDS_EquipSlotType");
  }
  return Z_Registration_Info_UEnum_EDS_EquipSlotType.OuterSingleton;
}

// Z_Construct_UClass_UDS_EquipmentAppearanceAbility @ 14b48ffd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_EquipmentAppearanceAbility(void)

{
  if (Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.OuterSingleton,
               &Z_Construct_UClass_UDS_EquipmentAppearanceAbility_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.OuterSingleton;
}

// Z_Construct_UClass_UDS_EntityManager @ 14b4901e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_EntityManager(void)

{
  if (Z_Registration_Info_UClass_UDS_EntityManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_EntityManager.OuterSingleton,
               &Z_Construct_UClass_UDS_EntityManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_EntityManager.OuterSingleton;
}

// EDS_EntitySpawnRange_StaticEnum @ 14b490220

UEnum * __cdecl EDS_EntitySpawnRange_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EntitySpawnRange.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EntitySpawnRange.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EntitySpawnRange,(UObject *)pUVar1,
                       L"EDS_EntitySpawnRange");
  }
  return Z_Registration_Info_UEnum_EDS_EntitySpawnRange.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b4903e0

void * __thiscall
FDS_EnvClimateTableRow::_scalar_deleting_destructor_(FDS_EnvClimateTableRow *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 14b490420

void * __cdecl Z_Construct_UScriptStruct_FDS_EnvClimateTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_EnvClimateTableRow,&UE::CoreUObject::Private::Construct<FDS_EnvClimateTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_EnvClimateTableRow>,&UE::CoreUObject::Private::Destruct<FDS_EnvClimateTableRow>,&UE::CoreUObject::Private::Copy<FDS_EnvClimateTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EDS_ErrorCode_StaticEnum @ 14b490460

UEnum * __cdecl EDS_ErrorCode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ErrorCode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ErrorCode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ErrorCode,(UObject *)pUVar1,L"EDS_ErrorCode")
    ;
  }
  return Z_Registration_Info_UEnum_EDS_ErrorCode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b4904e0

void * __thiscall
FDS_EnvFlooringTableRow::_scalar_deleting_destructor_(FDS_EnvFlooringTableRow *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 14b490520

void * __cdecl Z_Construct_UScriptStruct_FDS_EnvFlooringTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_EnvFlooringTableRow,&UE::CoreUObject::Private::Construct<FDS_EnvFlooringTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_EnvFlooringTableRow>,&UE::CoreUObject::Private::Destruct<FDS_EnvFlooringTableRow>,&UE::CoreUObject::Private::Copy<FDS_EnvFlooringTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDS_EntityData @ 14b490620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_EntityData(void)

{
  if (Z_Registration_Info_UClass_UDS_EntityData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_EntityData.OuterSingleton,
               &Z_Construct_UClass_UDS_EntityData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_EntityData.OuterSingleton;
}

// Z_Construct_UClass_UDS_EntityDataSet @ 14b490660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_EntityDataSet(void)

{
  if (Z_Registration_Info_UClass_UDS_EntityDataSet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_EntityDataSet.OuterSingleton,
               &Z_Construct_UClass_UDS_EntityDataSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_EntityDataSet.OuterSingleton;
}

// InternalConstructor<ADS_EntityActorBase> @ 14b4907b0

void __cdecl InternalConstructor<ADS_EntityActorBase>(FObjectInitializer *param_1)

{
  if ((ADS_EntityActorBase *)param_1->Obj != (ADS_EntityActorBase *)0x0) {
    ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_EmissiveEffectAbilityData> @ 14b4907d0

void __cdecl InternalConstructor<UDS_EmissiveEffectAbilityData>(FObjectInitializer *param_1)

{
  UDS_AbilityData *this;
  
  this = (UDS_AbilityData *)param_1->Obj;
  if (this != (UDS_AbilityData *)0x0) {
    UDS_AbilityData::UDS_AbilityData(this,param_1);
    *(undefined ***)this = &___7UDS_EmissiveEffectAbilityData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0;
  }
  return;
}

// InternalConstructor<UDS_EntityActorMovementCore> @ 14b490870

void __cdecl InternalConstructor<UDS_EntityActorMovementCore>(FObjectInitializer *param_1)

{
  if ((UDS_EntityActorMovementCore *)param_1->Obj != (UDS_EntityActorMovementCore *)0x0) {
    UDS_EntityActorMovementCore::UDS_EntityActorMovementCore
              ((UDS_EntityActorMovementCore *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_EntityData> @ 14b490890

void __cdecl InternalConstructor<UDS_EntityData>(FObjectInitializer *param_1)

{
  if ((UDS_EntityData *)param_1->Obj != (UDS_EntityData *)0x0) {
    UDS_EntityData::UDS_EntityData((UDS_EntityData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_EntityDataSet> @ 14b4908b0

void __cdecl InternalConstructor<UDS_EntityDataSet>(FObjectInitializer *param_1)

{
  if ((UDS_EntityDataSet *)param_1->Obj != (UDS_EntityDataSet *)0x0) {
    UDS_EntityDataSet::UDS_EntityDataSet((UDS_EntityDataSet *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_EntityManager> @ 14b4908d0

void __cdecl InternalConstructor<UDS_EntityManager>(FObjectInitializer *param_1)

{
  UDS_ManagerBase *this;
  
  this = (UDS_ManagerBase *)param_1->Obj;
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_EntityManager__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].bIsBeingDestroyed = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].bIsBeingDestroyed = 0;
    this[3]._padding_ = 0;
    this[1]._padding_ = 2;
    this[2]._padding_ = 2;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5].bIsBeingDestroyed = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6].bIsBeingDestroyed = 0;
    *(undefined4 *)&this[6].field_0x2c = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    this[7]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UDS_EnvironmentEvent> @ 14b490a10

void __cdecl InternalConstructor<UDS_EnvironmentEvent>(FObjectInitializer *param_1)

{
  UDS_EventBase *this;
  
  this = (UDS_EventBase *)param_1->Obj;
  if (this != (UDS_EventBase *)0x0) {
    UDS_EventBase::UDS_EventBase(this,param_1);
    *(undefined ***)this = &___7UDS_EnvironmentEvent__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined8 *)(this + 3) = 2;
  }
  return;
}

// InternalConstructor<UDS_EnvironmentManager> @ 14b490a80

void __cdecl InternalConstructor<UDS_EnvironmentManager>(FObjectInitializer *param_1)

{
  UDS_ManagerBase *this;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  this = (UDS_ManagerBase *)param_1->Obj;
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = __real_4240c388d0004000;
    this->_padding_ = (longlong)&___7UDS_EnvironmentManager__6B_;
    this[1]._padding_ = 0;
    auVar1 = roundpd(auVar1,auVar1,1);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = __real_4220c388d0010000;
    this[1]._padding_ = (longlong)auVar1._0_8_;
    auVar2 = roundpd(auVar2,auVar2,1);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = __real_4239254d38008000;
    this[1]._padding_ = (longlong)auVar2._0_8_;
    this[1]._padding_ = (longlong)auVar1._0_8_;
    auVar1 = roundpd(auVar3,auVar3,1);
    this[1]._padding_ = (longlong)auVar1._0_8_;
    *(longlong *)&this[1].bIsBeingDestroyed = (longlong)auVar2._0_8_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    this[2]._padding_ = 0x4082c00000000000;
    this[2]._padding_ = 0x40a2c00000000000;
    *(undefined8 *)&this[2].bIsBeingDestroyed = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].bIsBeingDestroyed = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4].bIsBeingDestroyed = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UDS_EquipmentAppearanceAbility> @ 14b490b90

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

void __cdecl InternalConstructor<UDS_EquipmentAppearanceAbility>(FObjectInitializer *param_1)

{
  UDS_GameplayAbility *this;
  
  this = (UDS_GameplayAbility *)param_1->Obj;
  if (this != (UDS_GameplayAbility *)0x0) {
    UDS_GameplayAbility::UDS_GameplayAbility(this,param_1);
    this->_padding_ = (longlong)&UDS_EquipmentAppearanceAbility::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UDS_EquipmentAppearanceAbility::_vftable__for__IGameplayTaskOwnerInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UDS_EquipmentItemLinkTextDecoratorObject> @ 14b490c40

void __cdecl
InternalConstructor<UDS_EquipmentItemLinkTextDecoratorObject>(FObjectInitializer *param_1)

{
  URichTextBlockDecorator *this;
  
  this = (URichTextBlockDecorator *)param_1->Obj;
  if (this != (URichTextBlockDecorator *)0x0) {
    URichTextBlockDecorator::URichTextBlockDecorator(this,param_1);
    *(undefined ***)this = &___7UDS_EquipmentItemLinkTextDecoratorObject__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<ADS_EntityActorBase> @ 14b490c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ADS_EntityActorBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  AActor *pAVar3;
  undefined8 local_res10;
  
  pAVar3 = (AActor *)0x0;
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADS_EntityActorBase::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    FDS_EntityBase::FDS_EntityBase((FDS_EntityBase *)(this + 1));
    local_res10 = 0;
    this->_padding_ = (longlong)&ADS_EntityActorBase::_vftable__for__AActor__;
    *(undefined8 *)&this[2].AttachmentReplication.RelativeScale3D.field_0x10 = 0;
    this[1]._padding_ = (longlong)&ADS_EntityActorBase::_vftable__for__FDS_EntityBase__;
    this[2].AttachmentReplication.RotationOffset.Pitch = 0.0;
    this[2].AttachmentReplication.RotationOffset.Yaw = 0.0;
    this[2].AttachmentReplication.RotationOffset.Roll = 9.88131291682493e-324;
    this[2].AttachmentReplication.AttachSocket.ComparisonIndex = 0;
    this[2].AttachmentReplication.AttachSocket.Number = 0;
    this[2].AttachmentReplication.AttachComponent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    this[2].ReplicatedMovement.LinearVelocity.field0_0x0._s_0.X = 0.0;
    this[2].ReplicatedMovement.LinearVelocity.field0_0x0._s_0.Y = 0.0;
    this[2].ReplicatedMovement.LinearVelocity.field0_0x0._s_0.Z = 0.0;
    this[2].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.X = 0.0;
    this[2].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.Y = 0.0;
    this[2].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.Z = 0.0;
    this[2].ReplicatedMovement.Location.field0_0x0._s_0.X = 0.0;
    this[2].ReplicatedMovement.Location.field0_0x0._s_0.Y = 0.0;
    this[2].ReplicatedMovement.Rotation.Yaw = 0.0;
    *(undefined4 *)&this[2].ReplicatedMovement.Rotation.Roll = 0;
    *(undefined4 *)((longlong)&this[2].ReplicatedMovement.Rotation.Roll + 4) = 0x80;
    *(undefined4 *)&this[2].ReplicatedMovement.Acceleration.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this[2].ReplicatedMovement.Acceleration.field0_0x0 + 4) = 0;
    this[2].ReplicatedMovement.Acceleration.field0_0x0._s_0.Z = 0.0;
    *(undefined4 *)&this[2].ReplicatedMovement.field_0x78 = 0;
    this[2].ReplicatedMovement.ServerPhysicsHandle = 0;
    this[2].ReplicatedMovement.LocationQuantizationLevel = RoundWholeNumber;
    this[2].ReplicatedMovement.VelocityQuantizationLevel = RoundWholeNumber;
    this[2].ReplicatedMovement.RotationQuantizationLevel = ByteComponents;
    this[2].ReplicatedMovement.field_0x87 = 0;
    this[2].Owner.field0_0x0.DebugPtr = (AActor *)0x0;
    this[2].NetDriverName.ComparisonIndex = 0;
    this[2].NetDriverName.Number = 0;
    this[2].Role = '\0';
    this[2].NetDormancy = '\0';
    this[2].SpawnCollisionHandlingMethod = Undefined;
    this[2].AutoReceiveInput = '\0';
    this[2].InputPriority = 0;
    *(undefined8 *)&this[2].CreationTime = 0;
    this[2].InputComponent.field0_0x0.DebugPtr = (UInputComponent *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[2].InputComponent,(FObjectPtr)&local_res10);
    this[2].NetTag = 0;
    this[2].NetCullDistanceSquared = 0.0;
    this[2].NetUpdateFrequency = 0.0;
    this[2].MinNetUpdateFrequency = 0.0;
    this[2].NetPriority = 0.0;
    this[2].PhysicsReplicationMode = Default;
    this[2].field_0x195 = 0;
    this[2]._padding_ = 0;
    pAVar3 = this;
  }
  return (UObject *)pAVar3;
}

// InternalVTableHelperCtorCaller<UDS_EmissiveEffectAbilityData> @ 14b490e30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDS_EmissiveEffectAbilityData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_AbilityData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_EmissiveEffectAbilityData::GetPrivateStaticClass();
  this = (UDS_AbilityData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_AbilityData *)0x0) {
    UDS_AbilityData::UDS_AbilityData(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined ***)this = &___7UDS_EmissiveEffectAbilityData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_EntityActorMovementCore> @ 14b490f50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDS_EntityActorMovementCore>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_MovementCore *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_EntityActorMovementCore::GetPrivateStaticClass();
  this = (UDS_MovementCore *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_MovementCore *)0x0) {
    UDS_MovementCore::UDS_MovementCore(this,param_1);
    this->_padding_ = (longlong)&___7UDS_EntityActorMovementCore__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_EntityData> @ 14b491010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_EntityData>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UDS_DataBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UDS_EntityData::GetPrivateStaticClass();
  this = (UDS_DataBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_DataBase *)0x0) {
    UDS_DataBase::UDS_DataBase(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 2) = 0x3030000;
    this->_padding_ = (longlong)&___7UDS_EntityData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 0;
    *(undefined4 *)&this[1].OnDirty = 0;
    *(undefined4 *)&this[1].OnDirty.field_0x4 = 0x3f800000;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)&this[1].OnDirty.field_0x8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].OnDirty.field_0x10 = uVar1;
    this[1].UniqueKey = (ulong64)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].OnDirty = 0;
    *(undefined8 *)&this[2].OnDirty.field_0x8 = 0;
    *(undefined8 *)&this[2].OnDirty.field_0x10 = 0;
    this[2].UniqueKey = 0;
    this[2].MyDataSet.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this[2].bIsDirty = 2;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 2;
    this[1].MyDataSet.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this[1].bIsDirty = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_EntityDataSet> @ 14b491190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_EntityDataSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_DataSetBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_EntityDataSet::GetPrivateStaticClass();
  this = (UDS_DataSetBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_DataSetBase *)0x0) {
    UDS_DataSetBase::UDS_DataSetBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_EntityDataSet__6B_;
    FString::FString((FString *)(this + 1),"");
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_EntityManager> @ 14b491250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_EntityManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ManagerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_EntityManager::GetPrivateStaticClass();
  this = (UDS_ManagerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_EntityManager__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].bIsBeingDestroyed = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].bIsBeingDestroyed = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5].bIsBeingDestroyed = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6].bIsBeingDestroyed = 0;
    *(undefined4 *)&this[6].field_0x2c = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_EnvironmentEvent> @ 14b491400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_EnvironmentEvent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_EnvironmentEvent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UDS_EventBase::UDS_EventBase((UDS_EventBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDS_EnvironmentEvent__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 2;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_EnvironmentManager> @ 14b4914e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_EnvironmentManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ManagerBase *this;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_EnvironmentManager::GetPrivateStaticClass();
  this = (UDS_ManagerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = __real_4240c388d0004000;
    this->_padding_ = (longlong)&___7UDS_EnvironmentManager__6B_;
    this[1]._padding_ = 0;
    auVar3 = roundpd(auVar3,auVar3,1);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = __real_4220c388d0010000;
    this[1]._padding_ = (longlong)auVar3._0_8_;
    auVar4 = roundpd(auVar4,auVar4,1);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = __real_4239254d38008000;
    this[1]._padding_ = (longlong)auVar4._0_8_;
    this[1]._padding_ = (longlong)auVar3._0_8_;
    auVar3 = roundpd(auVar5,auVar5,1);
    this[1]._padding_ = (longlong)auVar3._0_8_;
    *(longlong *)&this[1].bIsBeingDestroyed = (longlong)auVar4._0_8_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    this[2]._padding_ = 0x4082c00000000000;
    this[2]._padding_ = 0x40a2c00000000000;
    *(undefined8 *)&this[2].bIsBeingDestroyed = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].bIsBeingDestroyed = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4].bIsBeingDestroyed = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_EquipmentAppearanceAbility> @ 14b491670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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

UObject * __cdecl
InternalVTableHelperCtorCaller<UDS_EquipmentAppearanceAbility>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_GameplayAbility *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_EquipmentAppearanceAbility::GetPrivateStaticClass();
  this = (UDS_GameplayAbility *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_GameplayAbility *)0x0) {
    UDS_GameplayAbility::UDS_GameplayAbility(this,param_1);
    this->_padding_ = (longlong)&UDS_EquipmentAppearanceAbility::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UDS_EquipmentAppearanceAbility::_vftable__for__IGameplayTaskOwnerInterface__;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_EquipmentItemLinkTextDecoratorObject> @ 14b4917a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDS_EquipmentItemLinkTextDecoratorObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_EquipmentItemLinkTextDecoratorObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    URichTextBlockDecorator::URichTextBlockDecorator((URichTextBlockDecorator *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDS_EquipmentItemLinkTextDecoratorObject__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeShared<FDS_EquipmentItemLinkTextDecorator,1,URichTextBlock_*_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_&> @ 14b491850

TSharedRef<FDS_EquipmentItemLinkTextDecorator,1> * __cdecl
MakeShared<FDS_EquipmentItemLinkTextDecorator,1,URichTextBlock_*_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_&>
          (TSharedRef<FDS_EquipmentItemLinkTextDecorator,1> *__return_storage_ptr__,
          URichTextBlock **param_1,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_2)

{
  URichTextBlock *pUVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FDS_EquipmentItemLinkTextDecorator,1> *pTVar5;
  undefined1 local_78 [8];
  ForAnyElementType local_70;
  int local_68;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  int local_50;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  
  pTVar4 = operator_new(0x40);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FDS_EquipmentItemLinkTextDecorator *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_EquipmentItemLinkTextDecorator___00_SharedPointerInternals__6B_
    ;
    local_60 = (undefined1  [8])0x0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)local_60,
               param_2);
    pUVar1 = *param_1;
    local_78 = (undefined1  [8])0x0;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)local_78,
               (TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)local_60);
    FRichTextDecorator::FRichTextDecorator((FRichTextDecorator *)(pTVar4 + 1),pUVar1);
    *(undefined1 *)&pTVar4[2]._padding_ = 1;
    pTVar4[1]._padding_ = (longlong)&___7FDS_BaseLinkTextDecorator__6B_;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)
               &pTVar4[2].SharedReferenceCount,
               (TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_48);
    if ((local_68 != 0) && (local_70.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_70.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_70,0,0,0x10);
      local_68 = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_78);
    pTVar4[1]._padding_ = (longlong)&___7FDS_EquipmentItemLinkTextDecorator__6B_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
               (FWriteAccessScope *)&local_30);
    if ((local_50 != 0) && (local_58.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_58.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_60);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    __return_storage_ptr__->Object = (FDS_EquipmentItemLinkTextDecorator *)(pTVar4 + 1);
    if ((FDS_EquipmentItemLinkTextDecorator *)(pTVar4 + 1) ==
        (FDS_EquipmentItemLinkTextDecorator *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FDS_EquipmentItemLinkTextDecorator,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UDS_ItemData> @ 14b491a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ItemData * __cdecl NewObject<UDS_ItemData>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ItemData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ItemData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ItemData *)
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

// StaticEnum<enum_EDS_CharDetailState> @ 14b491b00

UEnum * __cdecl StaticEnum<enum_EDS_CharDetailState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_CharDetailState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_CharDetailState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_CharDetailState,(UObject *)pUVar1,
                       L"EDS_CharDetailState");
  }
  return Z_Registration_Info_UEnum_EDS_CharDetailState.OuterSingleton;
}

// StaticEnum<enum_EDS_CharState> @ 14b491b40

UEnum * __cdecl StaticEnum<enum_EDS_CharState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_CharState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_CharState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_CharState,(UObject *)pUVar1,L"EDS_CharState")
    ;
  }
  return Z_Registration_Info_UEnum_EDS_CharState.OuterSingleton;
}

// StaticEnum<enum_EDS_EmissiveEffectType> @ 14b491b80

UEnum * __cdecl StaticEnum<enum_EDS_EmissiveEffectType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EmissiveEffectType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EmissiveEffectType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EmissiveEffectType,(UObject *)pUVar1,
                       L"EDS_EmissiveEffectType");
  }
  return Z_Registration_Info_UEnum_EDS_EmissiveEffectType.OuterSingleton;
}

// StaticEnum<enum_EDS_EntityDeadType> @ 14b491bc0

UEnum * __cdecl StaticEnum<enum_EDS_EntityDeadType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EntityDeadType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EntityDeadType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EntityDeadType,(UObject *)pUVar1,
                       L"EDS_EntityDeadType");
  }
  return Z_Registration_Info_UEnum_EDS_EntityDeadType.OuterSingleton;
}

// StaticEnum<enum_EDS_EntityMaterialType> @ 14b491c00

UEnum * __cdecl StaticEnum<enum_EDS_EntityMaterialType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EntityMaterialType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EntityMaterialType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EntityMaterialType,(UObject *)pUVar1,
                       L"EDS_EntityMaterialType");
  }
  return Z_Registration_Info_UEnum_EDS_EntityMaterialType.OuterSingleton;
}

// StaticEnum<enum_EDS_EntitySpawnRange> @ 14b491c40

UEnum * __cdecl StaticEnum<enum_EDS_EntitySpawnRange>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EntitySpawnRange.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EntitySpawnRange.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EntitySpawnRange,(UObject *)pUVar1,
                       L"EDS_EntitySpawnRange");
  }
  return Z_Registration_Info_UEnum_EDS_EntitySpawnRange.OuterSingleton;
}

// StaticEnum<enum_EDS_EntityType> @ 14b491c80

UEnum * __cdecl StaticEnum<enum_EDS_EntityType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EntityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EntityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EntityType,(UObject *)pUVar1,
                       L"EDS_EntityType");
  }
  return Z_Registration_Info_UEnum_EDS_EntityType.OuterSingleton;
}

// StaticEnum<enum_EDS_EquipEntityType> @ 14b491cc0

UEnum * __cdecl StaticEnum<enum_EDS_EquipEntityType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EquipEntityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EquipEntityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EquipEntityType,(UObject *)pUVar1,
                       L"EDS_EquipEntityType");
  }
  return Z_Registration_Info_UEnum_EDS_EquipEntityType.OuterSingleton;
}

// StaticEnum<enum_EDS_EquipSlotType> @ 14b491d00

UEnum * __cdecl StaticEnum<enum_EDS_EquipSlotType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_EquipSlotType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_EquipSlotType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_EquipSlotType,(UObject *)pUVar1,
                       L"EDS_EquipSlotType");
  }
  return Z_Registration_Info_UEnum_EDS_EquipSlotType.OuterSingleton;
}

// StaticEnum<enum_EDS_ErrorCode> @ 14b491d40

UEnum * __cdecl StaticEnum<enum_EDS_ErrorCode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ErrorCode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ErrorCode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ErrorCode,(UObject *)pUVar1,L"EDS_ErrorCode")
    ;
  }
  return Z_Registration_Info_UEnum_EDS_ErrorCode.OuterSingleton;
}

// StaticEnum<enum_EDS_LookAtType> @ 14b491d80

UEnum * __cdecl StaticEnum<enum_EDS_LookAtType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_LookAtType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_LookAtType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_LookAtType,(UObject *)pUVar1,
                       L"EDS_LookAtType");
  }
  return Z_Registration_Info_UEnum_EDS_LookAtType.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14b4938d8

/* [thunk]:public: virtual void * __ptr64 __cdecl ADS_EntityActorBase::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ADS_EntityActorBase::_vector_deleting_destructor__adjustor_704__
          (ADS_EntityActorBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADS_EntityActorBase *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14b4938ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_EquipmentAppearanceAbility::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDS_EquipmentAppearanceAbility::_vector_deleting_destructor__adjustor_40__
          (UDS_EquipmentAppearanceAbility *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDS_EquipmentAppearanceAbility *)&this[-1].DeactivateRequestTags,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14b493900

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EquipmentItemLinkTextDecoratorObject,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,URichTextBlock_*,TObjectPtr<UDS_ItemData>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EquipmentItemLinkTextDecoratorObject,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,URichTextBlock_*,TObjectPtr<UDS_ItemData>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b493930

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,URichTextBlock_*,TObjectPtr<UDS_ItemData>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,URichTextBlock_*,TObjectPtr<UDS_ItemData>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b493960

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_EquipmentItemLinkTextDecorator,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDS_EquipmentItemLinkTextDecorator,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4939a0

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

void * __thiscall
ADS_EntityActorBase::_scalar_deleting_destructor_(ADS_EntityActorBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  pFVar1 = (this->TriggerOverlaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GCAsyncLoadHandle).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->DefaultMaterialList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EntityMaterialInfoMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EntityMaterialInfoMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTriggerOverlapDelegate).field_0x8,
             *(int *)&(this->OnTriggerOverlapDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnTriggerOverlapDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTriggerOverlapDelegate);
  FDS_EntityBase::~FDS_EntityBase((FDS_EntityBase *)&this->_padding_);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x718);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b493ab0

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

void * __thiscall FDS_EntityBase::_scalar_deleting_destructor_(FDS_EntityBase *this,uint param_1)

{
  ~FDS_EntityBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b493af0

void * __thiscall
FDS_EquipmentItemLinkTextDecorator::_scalar_deleting_destructor_
          (FDS_EquipmentItemLinkTextDecorator *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  *(undefined ***)this = &___7ITextDecorator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b493b60

void * __thiscall
UDS_EmissiveEffectAbilityData::_scalar_deleting_destructor_
          (UDS_EmissiveEffectAbilityData *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_EmissiveEffectAbilityData__6B_;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EmissiveEffectTimerHandleMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EmissiveEffectType,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_EmissiveEffectType,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EmissiveEffectTimerHandleMap);
  pFVar2 = (this->EmissiveEffectList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCahngedEmissiveEffectDelegate).field_0x8,
             *(int *)&(this->OnCahngedEmissiveEffectDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnCahngedEmissiveEffectDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCahngedEmissiveEffectDelegate);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b493c30

void * __thiscall
UDS_EntityActorMovementCore::_scalar_deleting_destructor_
          (UDS_EntityActorMovementCore *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDS_EntityActorMovementCore__6B_;
  UDS_MovementCore::~UDS_MovementCore((UDS_MovementCore *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b493c90

void * __thiscall UDS_EntityData::_scalar_deleting_destructor_(UDS_EntityData *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_EntityData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeHeightConditionDelegate).field_0x8,
             *(int *)&(this->OnChangeHeightConditionDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangeHeightConditionDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeHeightConditionDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeMoveModeDelegate).field_0x8,
             *(int *)&(this->OnChangeMoveModeDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangeMoveModeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeMoveModeDelegate);
  pvVar1 = *(void **)&(this->DataPropertyDelegate_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_Debug);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->NameDel).field_0x8,
             *(int *)&(this->NameDel).field_0x10);
  pvVar1 = *(void **)&(this->NameDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NameDel);
  pFVar2 = (this->DebugString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b493dd0

void * __thiscall
UDS_EntityDataSet::_scalar_deleting_destructor_(UDS_EntityDataSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_EntityDataSet__6B_;
  pFVar1 = (this->DefaultEntityName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b493e50

void * __thiscall
UDS_EntityManager::_scalar_deleting_destructor_(UDS_EntityManager *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_EntityManager__6B_;
  *(undefined4 *)&(this->EntityMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntityMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntityMap);
  *(undefined4 *)&(this->DonotDestroyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DonotDestroyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DonotDestroyMap);
  *(undefined4 *)&(this->EntityTypeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntityTypeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EntityTypeMap);
  pFVar2 = (this->EntityList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemoveEntityEvent).field_0x8,*(int *)&(this->OnRemoveEntityEvent).field_0x10
            );
  pvVar1 = *(void **)&(this->OnRemoveEntityEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveEntityEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSpawnEntityEvent).field_0x8,*(int *)&(this->OnSpawnEntityEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnSpawnEntityEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSpawnEntityEvent);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b493f90

void * __thiscall
UDS_EnvironmentEvent::_scalar_deleting_destructor_(UDS_EnvironmentEvent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_EnvironmentEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdateEnvironment).Delegate.field_0x8,
             *(int *)&(this->OnUpdateEnvironment).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdateEnvironment).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateEnvironment);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->QueryDayNight);
  pvVar1 = *(void **)&(this->QueryDayNight).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->QueryDayNight);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdateGameTime).Delegate.field_0x8,
             *(int *)&(this->OnUpdateGameTime).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdateGameTime).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateGameTime);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b494070

void * __thiscall
UDS_EnvironmentManager::_scalar_deleting_destructor_(UDS_EnvironmentManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_EnvironmentManager__6B_;
  pFVar1 = (this->NextDayWeatherData).RandomWeatherIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextDayWeatherData).FixedWeatherIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TodayWeatherData).RandomWeatherIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TodayWeatherData).FixedWeatherIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b494120

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

void * __thiscall
UDS_EquipmentAppearanceAbility::_scalar_deleting_destructor_
          (UDS_EquipmentAppearanceAbility *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->DeactivateRequestTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EquipmentAppearanceDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StateTagType,FDS_EquipmentAppearanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StateTagType,FDS_EquipmentAppearanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EquipmentAppearanceDataMap);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4941e0

void * __thiscall
UDS_EquipmentItemLinkTextDecoratorObject::_scalar_deleting_destructor_
          (UDS_EquipmentItemLinkTextDecoratorObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDS_EquipmentItemLinkTextDecoratorObject__6B_;
  URichTextBlockDecorator::~URichTextBlockDecorator((URichTextBlockDecorator *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDS_EmissiveEffectAbilityData @ 14b494860

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EmissiveEffectAbilityData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EntityActorBase @ 14b494870

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EntityActorBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EntityActorMovementCore @ 14b494880

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EntityActorMovementCore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EntityBase @ 14b494890

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EntityBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EntityData @ 14b4948a0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EntityData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EntityDeadType @ 14b4948b0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EntityDeadType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EntityDefines @ 14b4948c0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EntityDefines(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EntityManager @ 14b4948d0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EntityManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EntitySpawnRange @ 14b4948e0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EntitySpawnRange(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EnvClimateTableRow @ 14b4948f0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EnvClimateTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EnvFlooringTableRow @ 14b494900

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EnvFlooringTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EnvWeatherFixedDataTableRow @ 14b494910

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EnvWeatherFixedDataTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EnvWeatherRandomDataTableRow @ 14b494920

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EnvWeatherRandomDataTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EnvWeatherTableRow @ 14b494930

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EnvWeatherTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EnvironmentEvent @ 14b494940

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EnvironmentEvent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EnvironmentManager @ 14b494950

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EnvironmentManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EquipEntityType @ 14b494960

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EquipEntityType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EquipSlotType @ 14b494970

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EquipSlotType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EquipmentAppearanceAbility @ 14b494980

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EquipmentAppearanceAbility(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_EquipmentItemLinkTextDecorator @ 14b494990

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_EquipmentItemLinkTextDecorator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ErrorCode @ 14b4949a0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ErrorCode(void)

{
  return;
}

// Z_Construct_UClass_ADS_EntityActorBase_NoRegister @ 14b495920

UClass * __cdecl Z_Construct_UClass_ADS_EntityActorBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_EntityActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityActorBase",
               &Z_Registration_Info_UClass_ADS_EntityActorBase.InnerSingleton,
               ADS_EntityActorBase::StaticRegisterNativesADS_EntityActorBase,0x718,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_EntityActorBase>,
               InternalVTableHelperCtorCaller<ADS_EntityActorBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_EntityActorBase.InnerSingleton;
}

// Z_Construct_UClass_UDS_EmissiveEffectAbilityData_NoRegister @ 14b4959e0

UClass * __cdecl Z_Construct_UClass_UDS_EmissiveEffectAbilityData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EmissiveEffectAbilityData",
               &Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.InnerSingleton,
               UDS_EmissiveEffectAbilityData::StaticRegisterNativesUDS_EmissiveEffectAbilityData,
               0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_EmissiveEffectAbilityData>,
               InternalVTableHelperCtorCaller<UDS_EmissiveEffectAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.InnerSingleton;
}

// Z_Construct_UClass_UDS_EntityActorMovementCore_NoRegister @ 14b495aa0

UClass * __cdecl Z_Construct_UClass_UDS_EntityActorMovementCore_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityActorMovementCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityActorMovementCore",
               &Z_Registration_Info_UClass_UDS_EntityActorMovementCore.InnerSingleton,
               UDS_EntityActorMovementCore::StaticRegisterNativesUDS_EntityActorMovementCore,0x268,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_EntityActorMovementCore>,
               InternalVTableHelperCtorCaller<UDS_EntityActorMovementCore>,local_res8,
               UDS_MovementCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityActorMovementCore.InnerSingleton;
}

// Z_Construct_UClass_UDS_EntityDataSet_NoRegister @ 14b495b60

UClass * __cdecl Z_Construct_UClass_UDS_EntityDataSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityDataSet",
               &Z_Registration_Info_UClass_UDS_EntityDataSet.InnerSingleton,
               UDS_EntityDataSet::StaticRegisterNativesUDS_EntityDataSet,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_EntityDataSet>,
               InternalVTableHelperCtorCaller<UDS_EntityDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityDataSet.InnerSingleton;
}

// Z_Construct_UClass_UDS_EntityData_NoRegister @ 14b495c20

UClass * __cdecl Z_Construct_UClass_UDS_EntityData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityData",
               &Z_Registration_Info_UClass_UDS_EntityData.InnerSingleton,
               UDS_EntityData::StaticRegisterNativesUDS_EntityData,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_EntityData>,
               InternalVTableHelperCtorCaller<UDS_EntityData>,local_res8,UDS_DataBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityData.InnerSingleton;
}

// Z_Construct_UClass_UDS_EntityManager_NoRegister @ 14b495ce0

UClass * __cdecl Z_Construct_UClass_UDS_EntityManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityManager",
               &Z_Registration_Info_UClass_UDS_EntityManager.InnerSingleton,
               UDS_EntityManager::StaticRegisterNativesUDS_EntityManager,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_EntityManager>,
               InternalVTableHelperCtorCaller<UDS_EntityManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityManager.InnerSingleton;
}

// Z_Construct_UClass_UDS_EnvironmentEvent_NoRegister @ 14b495da0

UClass * __cdecl Z_Construct_UClass_UDS_EnvironmentEvent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EnvironmentEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EnvironmentEvent",
               &Z_Registration_Info_UClass_UDS_EnvironmentEvent.InnerSingleton,
               UDS_EnvironmentEvent::StaticRegisterNativesUDS_EnvironmentEvent,0x80,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_EnvironmentEvent>,
               InternalVTableHelperCtorCaller<UDS_EnvironmentEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EnvironmentEvent.InnerSingleton;
}

// Z_Construct_UClass_UDS_EnvironmentManager_NoRegister @ 14b495e60

UClass * __cdecl Z_Construct_UClass_UDS_EnvironmentManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EnvironmentManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EnvironmentManager",
               &Z_Registration_Info_UClass_UDS_EnvironmentManager.InnerSingleton,
               UDS_EnvironmentManager::StaticRegisterNativesUDS_EnvironmentManager,0xf0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_EnvironmentManager>,
               InternalVTableHelperCtorCaller<UDS_EnvironmentManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EnvironmentManager.InnerSingleton;
}

// Z_Construct_UClass_UDS_EquipmentAppearanceAbility_NoRegister @ 14b495f20

UClass * __cdecl Z_Construct_UClass_UDS_EquipmentAppearanceAbility_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EquipmentAppearanceAbility",
               &Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.InnerSingleton,
               UDS_EquipmentAppearanceAbility::StaticRegisterNativesUDS_EquipmentAppearanceAbility,
               0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_EquipmentAppearanceAbility>,
               InternalVTableHelperCtorCaller<UDS_EquipmentAppearanceAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.InnerSingleton;
}

// Z_Construct_UClass_UDS_EquipmentItemLinkTextDecoratorObject_NoRegister @ 14b495fe0

UClass * __cdecl Z_Construct_UClass_UDS_EquipmentItemLinkTextDecoratorObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EquipmentItemLinkTextDecoratorObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EquipmentItemLinkTextDecoratorObject",
               &Z_Registration_Info_UClass_UDS_EquipmentItemLinkTextDecoratorObject.InnerSingleton,
               UDS_EquipmentItemLinkTextDecoratorObject::
               StaticRegisterNativesUDS_EquipmentItemLinkTextDecoratorObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_EquipmentItemLinkTextDecoratorObject>,
               InternalVTableHelperCtorCaller<UDS_EquipmentItemLinkTextDecoratorObject>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EquipmentItemLinkTextDecoratorObject.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_CharDetailState @ 14b4960a0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_CharDetailState(void)

{
  if (Z_Registration_Info_UEnum_EDS_CharDetailState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_CharDetailState.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_CharDetailState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_CharDetailState.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_CharState @ 14b4960e0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_CharState(void)

{
  if (Z_Registration_Info_UEnum_EDS_CharState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_CharState.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_CharState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_CharState.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_EmissiveEffectType @ 14b496120

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_EmissiveEffectType(void)

{
  if (Z_Registration_Info_UEnum_EDS_EmissiveEffectType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_EmissiveEffectType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_EmissiveEffectType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_EmissiveEffectType.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_EntityDeadType @ 14b496160

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_EntityDeadType(void)

{
  if (Z_Registration_Info_UEnum_EDS_EntityDeadType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_EntityDeadType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_EntityDeadType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_EntityDeadType.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_EntitySpawnRange @ 14b4961a0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_EntitySpawnRange(void)

{
  if (Z_Registration_Info_UEnum_EDS_EntitySpawnRange.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_EntitySpawnRange.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_EntitySpawnRange_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_EntitySpawnRange.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_EntityType @ 14b4961e0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_EntityType(void)

{
  if (Z_Registration_Info_UEnum_EDS_EntityType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_EntityType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_EntityType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_EntityType.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_EquipEntityType @ 14b496220

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_EquipEntityType(void)

{
  if (Z_Registration_Info_UEnum_EDS_EquipEntityType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_EquipEntityType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_EquipEntityType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_EquipEntityType.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_EquipSlotType @ 14b496260

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_EquipSlotType(void)

{
  if (Z_Registration_Info_UEnum_EDS_EquipSlotType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_EquipSlotType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_EquipSlotType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_EquipSlotType.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_ErrorCode @ 14b4962a0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_ErrorCode(void)

{
  if (Z_Registration_Info_UEnum_EDS_ErrorCode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_ErrorCode.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_ErrorCode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_ErrorCode.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_LookAtType @ 14b4962e0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_LookAtType(void)

{
  if (Z_Registration_Info_UEnum_EDS_LookAtType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_LookAtType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_LookAtType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_LookAtType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDS_CharStateInfo @ 14b496320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_CharStateInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_CharStateInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_CharStateInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_CharStateInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_CharStateInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_CharStateInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FDS_EnvClimateTableRow @ 14b4963a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_EnvClimateTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_EnvClimateTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_EnvClimateTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_EnvClimateTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_EnvClimateTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_EnvClimateTableRow.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FDS_EnvFlooringTableRow @ 14b496420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_EnvFlooringTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_EnvFlooringTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_EnvFlooringTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_EnvFlooringTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_EnvFlooringTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_EnvFlooringTableRow.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FDS_EnvWeatherFixedDataTableRow @ 14b4964a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_EnvWeatherFixedDataTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_EnvWeatherFixedDataTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_EnvWeatherFixedDataTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_EnvWeatherFixedDataTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_EnvWeatherFixedDataTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_EnvWeatherFixedDataTableRow.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FDS_EnvWeatherRandomDataTableRow @ 14b496520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_EnvWeatherRandomDataTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_EnvWeatherRandomDataTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_EnvWeatherRandomDataTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_EnvWeatherRandomDataTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_EnvWeatherRandomDataTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_EnvWeatherRandomDataTableRow.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FDS_EnvWeatherTableRow @ 14b4965a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_EnvWeatherTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_EnvWeatherTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_EnvWeatherTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_EnvWeatherTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_EnvWeatherTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_EnvWeatherTableRow.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FDS_EquipmentAppearanceData @ 14b496620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_EquipmentAppearanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_EquipmentAppearanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_EquipmentAppearanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_EquipmentAppearanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_EquipmentAppearanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_EquipmentAppearanceData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FDS_LocomotionStateInfo @ 14b4966a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_LocomotionStateInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_LocomotionStateInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_LocomotionStateInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_LocomotionStateInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_LocomotionStateInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_LocomotionStateInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FDS_StruckInfo @ 14b496720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StruckInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StruckInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StruckInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StruckInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StruckInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StruckInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 150434170

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

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 150434190

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

