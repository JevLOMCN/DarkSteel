// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 249

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 141213be0

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 141213c00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 141213c20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 141213c40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 141213c60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 141213c80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 141213ca0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 141213cc0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 141213ce0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 141213d00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 141213d20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 141213d40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 141213d60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 141213d80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 141213da0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 141213dc0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 141213de0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 141213e00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 141213e20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 141213e40

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 141213e60

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

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 141213ee0

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

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 141213f60

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 141213f80

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 141213fa0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 141213fc0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 141213fe0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 141214000

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 141214020

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_StuffAnim_h__Script_ProjectDS_2958874374'' @ 1412140b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_StuffAnim_h__Script_ProjectDS_2958874374__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_StuffAnim_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_StuffVergenceAnim_h__Script_ProjectDS_922949629'' @ 1412140f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_StuffVergenceAnim_h__Script_ProjectDS_922949629__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_StuffVergenceAnim_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StringUiTableRow_h__Script_ProjectDS_504880152'' @ 141214130

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StringUiTableRow_h__Script_ProjectDS_504880152__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StringUiTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StringWorldTableRow_h__Script_ProjectDS_237923955'' @ 141214170

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StringWorldTableRow_h__Script_ProjectDS_237923955__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StringWorldTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffBaseTableRow_h__Script_ProjectDS_1986660080'' @ 1412141b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffBaseTableRow_h__Script_ProjectDS_1986660080__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffBaseTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffGatherTableRow_h__Script_ProjectDS_162587837'' @ 1412141f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffGatherTableRow_h__Script_ProjectDS_162587837__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffGatherTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffPortalTableRow_h__Script_ProjectDS_2271554780'' @ 141214230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffPortalTableRow_h__Script_ProjectDS_2271554780__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffPortalTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffQuestBoardTableRow_h__Script_ProjectDS_488178105'' @ 141214270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffQuestBoardTableRow_h__Script_ProjectDS_488178105__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffQuestBoardTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffQuestTableRow_h__Script_ProjectDS_3653698781'' @ 1412142b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffQuestTableRow_h__Script_ProjectDS_3653698781__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffQuestTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnEditorTableRow_h__Script_ProjectDS_2433484385'' @ 1412142f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnEditorTableRow_h__Script_ProjectDS_2433484385__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnEditorTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnGroupTableRow_h__Script_ProjectDS_2940696829'' @ 141214330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnGroupTableRow_h__Script_ProjectDS_2940696829__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnGroupTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnQuestTableRow_h__Script_ProjectDS_293242466'' @ 141214370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnQuestTableRow_h__Script_ProjectDS_293242466__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnQuestTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnTableRow_h__Script_ProjectDS_3845369370'' @ 1412143b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnTableRow_h__Script_ProjectDS_3845369370__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffSpawnTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffWarpDeviceTableRow_h__Script_ProjectDS_2769379954'' @ 1412143f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffWarpDeviceTableRow_h__Script_ProjectDS_2769379954__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_StuffWarpDeviceTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Wrapper_DS_StringWorldID_h__Script_ProjectDS_2167391852'' @ 141214430

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Wrapper_DS_StringWorldID_h__Script_ProjectDS_2167391852__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Wrapper_DS_StringWorldID_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffGatherType_h__Script_ProjectDS_3347156343'' @ 141214470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffGatherType_h__Script_ProjectDS_3347156343__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffGatherType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffLocationType_h__Script_ProjectDS_287422755'' @ 1412144c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffLocationType_h__Script_ProjectDS_287422755__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffLocationType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffSpawnType_h__Script_ProjectDS_2031085624'' @ 141214510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffSpawnType_h__Script_ProjectDS_2031085624__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffSpawnType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffType_h__Script_ProjectDS_3539257737'' @ 141214560

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffType_h__Script_ProjectDS_3539257737__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_StuffType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_SubTabType_h__Script_ProjectDS_99238247'' @ 1412145b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_SubTabType_h__Script_ProjectDS_99238247__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_SubTabType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffData_h__Script_ProjectDS_428314862'' @ 141214600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffData_h__Script_ProjectDS_428314862__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffData_h__Script_ProjectDS_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffGatherData_h__Script_ProjectDS_1277629700'' @ 141214640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffGatherData_h__Script_ProjectDS_1277629700__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffGatherData_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffGatherData_h__Script_ProjectDS_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffPortalData_h__Script_ProjectDS_3072862479'' @ 141214690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffPortalData_h__Script_ProjectDS_3072862479__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffPortalData_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffQuestBoardData_h__Script_ProjectDS_2387919403'' @ 1412146d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffQuestBoardData_h__Script_ProjectDS_2387919403__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffQuestBoardData_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffQuestData_h__Script_ProjectDS_1619355273'' @ 141214710

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffQuestData_h__Script_ProjectDS_1619355273__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffQuestData_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffWarpDeviceData_h__Script_ProjectDS_4160640219'' @ 141214750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffWarpDeviceData_h__Script_ProjectDS_4160640219__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffWarpDeviceData_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Entity_Prop_DS_StuffWarpDeviceData_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffGather_h__Script_ProjectDS_3120985257'' @ 1412147a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffGather_h__Script_ProjectDS_3120985257__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffGather_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffPortal_h__Script_ProjectDS_261898291'' @ 1412147e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffPortal_h__Script_ProjectDS_261898291__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffPortal_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffQuestBoard_h__Script_ProjectDS_2988721737'' @ 141214820

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffQuestBoard_h__Script_ProjectDS_2988721737__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffQuestBoard_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffQuest_h__Script_ProjectDS_499053083'' @ 141214860

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffQuest_h__Script_ProjectDS_499053083__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffQuest_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffWarpDevice_h__Script_ProjectDS_4050603615'' @ 1412148a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffWarpDevice_h__Script_ProjectDS_4050603615__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_StuffWarpDevice_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_Stuff_h__Script_ProjectDS_3103433051'' @ 1412148e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_Stuff_h__Script_ProjectDS_3103433051__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Prop_DS_Stuff_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `scalar_deleting_destructor' @ 14b5a49d0

void * __thiscall
FDS_StuffGatherTableRow::_scalar_deleting_destructor_(FDS_StuffGatherTableRow *this,uint param_1)

{
  ~FDS_StuffGatherTableRow(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// Z_Construct_UEnum_ProjectDS_EDS_StuffGatherType @ 14b5a4a10

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_StuffGatherType(void)

{
  if (Z_Registration_Info_UEnum_EDS_StuffGatherType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_StuffGatherType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_StuffGatherType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_StuffGatherType.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_StuffLocationType @ 14b5a4a50

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_StuffLocationType(void)

{
  if (Z_Registration_Info_UEnum_EDS_StuffLocationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_StuffLocationType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_StuffLocationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_StuffLocationType.InnerSingleton;
}

// NewProp_IsImmediatelyDelete_SetBit @ 14b5a4a90

void __cdecl
Z_Construct_UScriptStruct_FDS_StuffGatherTableRow_Statics::NewProp_IsImmediatelyDelete_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_IsContinuous_SetBit @ 14b5a4aa0

void __cdecl
Z_Construct_UScriptStruct_FDS_StuffGatherTableRow_Statics::NewProp_IsContinuous_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_IsCasting_SetBit @ 14b5a4b70

void __cdecl
Z_Construct_UScriptStruct_FDS_StuffGatherTableRow_Statics::NewProp_IsCasting_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewStructOps @ 14b5a4c10

void * __cdecl Z_Construct_UScriptStruct_FDS_StuffGatherTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StuffGatherTableRow,&UE::CoreUObject::Private::Construct<FDS_StuffGatherTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StuffGatherTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StuffGatherTableRow>,&UE::CoreUObject::Private::Copy<FDS_StuffGatherTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EDS_StuffGatherType_StaticEnum @ 14b5a4c50

UEnum * __cdecl EDS_StuffGatherType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_StuffGatherType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_StuffGatherType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_StuffGatherType,(UObject *)pUVar1,
                       L"EDS_StuffGatherType");
  }
  return Z_Registration_Info_UEnum_EDS_StuffGatherType.OuterSingleton;
}

// EDS_StuffLocationType_StaticEnum @ 14b5a4c90

UEnum * __cdecl EDS_StuffLocationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_StuffLocationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_StuffLocationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_StuffLocationType,(UObject *)pUVar1,
                       L"EDS_StuffLocationType");
  }
  return Z_Registration_Info_UEnum_EDS_StuffLocationType.OuterSingleton;
}

// EDS_SubTabType_StaticEnum @ 14b5a5000

UEnum * __cdecl EDS_SubTabType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_SubTabType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_SubTabType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_SubTabType,(UObject *)pUVar1,
                       L"EDS_SubTabType");
  }
  return Z_Registration_Info_UEnum_EDS_SubTabType.OuterSingleton;
}

// Z_Construct_UClass_ADS_StuffPortal @ 14b5a5040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADS_StuffPortal(void)

{
  if (Z_Registration_Info_UClass_ADS_StuffPortal.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADS_StuffPortal.OuterSingleton,
               &Z_Construct_UClass_ADS_StuffPortal_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADS_StuffPortal.OuterSingleton;
}

// Z_Construct_UClass_UDS_StuffPortalData @ 14b5a5140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_StuffPortalData(void)

{
  if (Z_Registration_Info_UClass_UDS_StuffPortalData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_StuffPortalData.OuterSingleton,
               &Z_Construct_UClass_UDS_StuffPortalData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_StuffPortalData.OuterSingleton;
}

// Z_Construct_UClass_UDS_StuffAnim @ 14b5a5370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_StuffAnim(void)

{
  if (Z_Registration_Info_UClass_UDS_StuffAnim.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_StuffAnim.OuterSingleton,
               &Z_Construct_UClass_UDS_StuffAnim_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_StuffAnim.OuterSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_StuffState @ 14b5a53b0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_StuffState(void)

{
  if (Z_Registration_Info_UEnum_EDS_StuffState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_StuffState.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_StuffState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_StuffState.InnerSingleton;
}

// NewProp_GatherAction_SetBit @ 14b5a54f0

void __cdecl Z_Construct_UClass_UDS_StuffAnim_Statics::NewProp_GatherAction_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x449) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14b5a5750

void * __thiscall
FDS_StuffPortalTableRow::_scalar_deleting_destructor_(FDS_StuffPortalTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// NewProp_Hide_SetBit @ 14b5a57a0

void __cdecl
Z_Construct_UScriptStruct_FDS_StuffPortalTableRow_Statics::NewProp_Hide_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewStructOps @ 14b5a57b0

void * __cdecl Z_Construct_UScriptStruct_FDS_StuffPortalTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StuffPortalTableRow,&UE::CoreUObject::Private::Construct<FDS_StuffPortalTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StuffPortalTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StuffPortalTableRow>,&UE::CoreUObject::Private::Copy<FDS_StuffPortalTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ADS_StuffQuest @ 14b5a5a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADS_StuffQuest(void)

{
  if (Z_Registration_Info_UClass_ADS_StuffQuest.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADS_StuffQuest.OuterSingleton,
               &Z_Construct_UClass_ADS_StuffQuest_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADS_StuffQuest.OuterSingleton;
}

// Z_Construct_UClass_ADS_StuffQuestBoard @ 14b5a5ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADS_StuffQuestBoard(void)

{
  if (Z_Registration_Info_UClass_ADS_StuffQuestBoard.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADS_StuffQuestBoard.OuterSingleton,
               &Z_Construct_UClass_ADS_StuffQuestBoard_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADS_StuffQuestBoard.OuterSingleton;
}

// Z_Construct_UClass_UDS_StuffQuestBoardData @ 14b5a5ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_StuffQuestBoardData(void)

{
  if (Z_Registration_Info_UClass_UDS_StuffQuestBoardData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_StuffQuestBoardData.OuterSingleton,
               &Z_Construct_UClass_UDS_StuffQuestBoardData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_StuffQuestBoardData.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b5a5d20

void * __thiscall
FDS_StuffQuestBoardTableRow::_scalar_deleting_destructor_
          (FDS_StuffQuestBoardTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewStructOps @ 14b5a5dd0

void * __cdecl Z_Construct_UScriptStruct_FDS_StuffQuestBoardTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StuffQuestBoardTableRow,&UE::CoreUObject::Private::Construct<FDS_StuffQuestBoardTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StuffQuestBoardTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StuffQuestBoardTableRow>,&UE::CoreUObject::Private::Copy<FDS_StuffQuestBoardTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDS_StuffQuestData @ 14b5a5fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_StuffQuestData(void)

{
  if (Z_Registration_Info_UClass_UDS_StuffQuestData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_StuffQuestData.OuterSingleton,
               &Z_Construct_UClass_UDS_StuffQuestData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_StuffQuestData.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b5a6060

void * __thiscall
FDS_StuffQuestTableRow::_scalar_deleting_destructor_(FDS_StuffQuestTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewStructOps @ 14b5a60b0

void * __cdecl Z_Construct_UScriptStruct_FDS_StuffQuestTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StuffQuestTableRow,&UE::CoreUObject::Private::Construct<FDS_StuffQuestTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StuffQuestTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StuffQuestTableRow>,&UE::CoreUObject::Private::Copy<FDS_StuffQuestTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b5a6130

void * __thiscall
FDS_StuffSpawnEditorTableRow::_scalar_deleting_destructor_
          (FDS_StuffSpawnEditorTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Memo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubFolderPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 14b5a6190

void * __cdecl Z_Construct_UScriptStruct_FDS_StuffSpawnEditorTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StuffSpawnEditorTableRow,&UE::CoreUObject::Private::Construct<FDS_StuffSpawnEditorTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StuffSpawnEditorTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StuffSpawnEditorTableRow>,&UE::CoreUObject::Private::Copy<FDS_StuffSpawnEditorTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b5a6210

void * __thiscall
FDS_StuffSpawnGroupTableRow::_scalar_deleting_destructor_
          (FDS_StuffSpawnGroupTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_BannedTerritory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_Territory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataStageString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// NewStructOps @ 14b5a6280

void * __cdecl Z_Construct_UScriptStruct_FDS_StuffSpawnGroupTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StuffSpawnGroupTableRow,&UE::CoreUObject::Private::Construct<FDS_StuffSpawnGroupTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StuffSpawnGroupTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StuffSpawnGroupTableRow>,&UE::CoreUObject::Private::Copy<FDS_StuffSpawnGroupTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b5a6340

void * __thiscall
FDS_StuffSpawnQuestTableRow::_scalar_deleting_destructor_
          (FDS_StuffSpawnQuestTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataStageString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewStructOps @ 14b5a6390

void * __cdecl Z_Construct_UScriptStruct_FDS_StuffSpawnQuestTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StuffSpawnQuestTableRow,&UE::CoreUObject::Private::Construct<FDS_StuffSpawnQuestTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StuffSpawnQuestTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StuffSpawnQuestTableRow>,&UE::CoreUObject::Private::Copy<FDS_StuffSpawnQuestTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b5a63d0

void * __thiscall
FDS_StringUiTableRow::_scalar_deleting_destructor_(FDS_StringUiTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Text).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// NewStructOps @ 14b5a6430

void * __cdecl Z_Construct_UScriptStruct_FDS_StringUiTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StringUiTableRow,&UE::CoreUObject::Private::Construct<FDS_StringUiTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StringUiTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StringUiTableRow>,&UE::CoreUObject::Private::Copy<FDS_StringUiTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FDS_StringWorldID @ 14b5a6570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StringWorldID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StringWorldID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StringWorldID.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StringWorldID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StringWorldID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StringWorldID.InnerSingleton;
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

// NewStructOps @ 14b5a65f0

void * __cdecl Z_Construct_UScriptStruct_FDS_StringWorldID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StringWorldID,&UE::CoreUObject::Private::Construct<FDS_StringWorldID>,&UE::CoreUObject::Private::ConstructForTests<FDS_StringWorldID>,&UE::CoreUObject::Private::Destruct<FDS_StringWorldID>,&UE::CoreUObject::Private::Copy<FDS_StringWorldID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ADS_Stuff @ 14b5a66d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADS_Stuff(void)

{
  if (Z_Registration_Info_UClass_ADS_Stuff.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADS_Stuff.OuterSingleton,
               &Z_Construct_UClass_ADS_Stuff_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADS_Stuff.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b5a6940

void * __thiscall
FDS_StringWorldTableRow::_scalar_deleting_destructor_(FDS_StringWorldTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Text).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// NewStructOps @ 14b5a69a0

void * __cdecl Z_Construct_UScriptStruct_FDS_StringWorldTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StringWorldTableRow,&UE::CoreUObject::Private::Construct<FDS_StringWorldTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StringWorldTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StringWorldTableRow>,&UE::CoreUObject::Private::Copy<FDS_StringWorldTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b5a6c00

void * __thiscall
FDS_StuffBaseTableRow::_scalar_deleting_destructor_(FDS_StuffBaseTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_Interaction).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_GimmickEvent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_Trigger).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UEnum_ProjectDS_EDS_StuffType @ 14b5a6c80

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_StuffType(void)

{
  if (Z_Registration_Info_UEnum_EDS_StuffType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_StuffType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_StuffType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_StuffType.InnerSingleton;
}

// NewProp_IsCancelToDamage_SetBit @ 14b5a6cc0

void __cdecl
Z_Construct_UScriptStruct_FDS_StuffBaseTableRow_Statics::NewProp_IsCancelToDamage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewProp_IsCountIndication_SetBit @ 14b5a6cd0

void __cdecl
Z_Construct_UScriptStruct_FDS_StuffBaseTableRow_Statics::NewProp_IsCountIndication_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x9a) = 1;
  return;
}

// NewStructOps @ 14b5a6ce0

void * __cdecl Z_Construct_UScriptStruct_FDS_StuffBaseTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StuffBaseTableRow,&UE::CoreUObject::Private::Construct<FDS_StuffBaseTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StuffBaseTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StuffBaseTableRow>,&UE::CoreUObject::Private::Copy<FDS_StuffBaseTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDS_StuffData @ 14b5a6d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_StuffData(void)

{
  if (Z_Registration_Info_UClass_UDS_StuffData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_StuffData.OuterSingleton,
               &Z_Construct_UClass_UDS_StuffData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_StuffData.OuterSingleton;
}

// Z_Construct_UClass_UDS_StuffDataSet @ 14b5a6d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_StuffDataSet(void)

{
  if (Z_Registration_Info_UClass_UDS_StuffDataSet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_StuffDataSet.OuterSingleton,
               &Z_Construct_UClass_UDS_StuffDataSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_StuffDataSet.OuterSingleton;
}

// Z_Construct_UClass_ADS_StuffGather @ 14b5a6e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADS_StuffGather(void)

{
  if (Z_Registration_Info_UClass_ADS_StuffGather.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADS_StuffGather.OuterSingleton,
               &Z_Construct_UClass_ADS_StuffGather_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADS_StuffGather.OuterSingleton;
}

// Z_Construct_UClass_UDS_StuffGatherData @ 14b5a7000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_StuffGatherData(void)

{
  if (Z_Registration_Info_UClass_UDS_StuffGatherData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_StuffGatherData.OuterSingleton,
               &Z_Construct_UClass_UDS_StuffGatherData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_StuffGatherData.OuterSingleton;
}

// EDS_StuffState_StaticEnum @ 14b5a7140

UEnum * __cdecl EDS_StuffState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_StuffState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_StuffState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_StuffState,(UObject *)pUVar1,
                       L"EDS_StuffState");
  }
  return Z_Registration_Info_UEnum_EDS_StuffState.OuterSingleton;
}

// EDS_BoxSuffState_StaticEnum @ 14b5a71c0

UEnum * __cdecl EDS_BoxSuffState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_BoxSuffState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_BoxSuffState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_BoxSuffState,(UObject *)pUVar1,
                       L"EDS_BoxSuffState");
  }
  return Z_Registration_Info_UEnum_EDS_BoxSuffState.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b5a7200

void * __thiscall
FDS_StuffSpawnTableRow::_scalar_deleting_destructor_(FDS_StuffSpawnTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->StuffSpawnChance).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_Stuff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataStageString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// Z_Construct_UEnum_ProjectDS_EDS_StuffSpawnType @ 14b5a7270

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_StuffSpawnType(void)

{
  if (Z_Registration_Info_UEnum_EDS_StuffSpawnType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_StuffSpawnType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_StuffSpawnType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_StuffSpawnType.InnerSingleton;
}

// NewProp_IsGroupSpawn_SetBit @ 14b5a72b0

void __cdecl
Z_Construct_UScriptStruct_FDS_StuffSpawnTableRow_Statics::NewProp_IsGroupSpawn_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewStructOps @ 14b5a72c0

void * __cdecl Z_Construct_UScriptStruct_FDS_StuffSpawnTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StuffSpawnTableRow,&UE::CoreUObject::Private::Construct<FDS_StuffSpawnTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StuffSpawnTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StuffSpawnTableRow>,&UE::CoreUObject::Private::Copy<FDS_StuffSpawnTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EDS_StuffSpawnType_StaticEnum @ 14b5a7300

UEnum * __cdecl EDS_StuffSpawnType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_StuffSpawnType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_StuffSpawnType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_StuffSpawnType,(UObject *)pUVar1,
                       L"EDS_StuffSpawnType");
  }
  return Z_Registration_Info_UEnum_EDS_StuffSpawnType.OuterSingleton;
}

// EDS_StuffType_StaticEnum @ 14b5a7400

UEnum * __cdecl EDS_StuffType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_StuffType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_StuffType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_StuffType,(UObject *)pUVar1,L"EDS_StuffType")
    ;
  }
  return Z_Registration_Info_UEnum_EDS_StuffType.OuterSingleton;
}

// Z_Construct_UClass_UDS_StuffVergenceAnim @ 14b5a7650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_StuffVergenceAnim(void)

{
  if (Z_Registration_Info_UClass_UDS_StuffVergenceAnim.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_StuffVergenceAnim.OuterSingleton,
               &Z_Construct_UClass_UDS_StuffVergenceAnim_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_StuffVergenceAnim.OuterSingleton;
}

// NewProp_IsActive_SetBit @ 14b5a7690

void __cdecl
Z_Construct_UClass_UDS_StuffVergenceAnim_Statics::NewProp_IsActive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x448) = 1;
  return;
}

// NewProp_IsActiveAnimaion_SetBit @ 14b5a76a0

void __cdecl
Z_Construct_UClass_UDS_StuffVergenceAnim_Statics::NewProp_IsActiveAnimaion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x449) = 1;
  return;
}

// Z_Construct_UClass_ADS_StuffWarpDevice @ 14b5a7770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADS_StuffWarpDevice(void)

{
  if (Z_Registration_Info_UClass_ADS_StuffWarpDevice.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADS_StuffWarpDevice.OuterSingleton,
               &Z_Construct_UClass_ADS_StuffWarpDevice_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADS_StuffWarpDevice.OuterSingleton;
}

// Z_Construct_UClass_UDS_StuffWarpDeviceData @ 14b5a7a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_StuffWarpDeviceData(void)

{
  if (Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.OuterSingleton,
               &Z_Construct_UClass_UDS_StuffWarpDeviceData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.OuterSingleton;
}

// EDS_WarpDeviceState_StaticEnum @ 14b5a7a70

UEnum * __cdecl EDS_WarpDeviceState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_WarpDeviceState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_WarpDeviceState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_WarpDeviceState,(UObject *)pUVar1,
                       L"EDS_WarpDeviceState");
  }
  return Z_Registration_Info_UEnum_EDS_WarpDeviceState.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b5a7c60

void * __thiscall
FDS_StuffWarpDeviceTableRow::_scalar_deleting_destructor_
          (FDS_StuffWarpDeviceTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// NewProp_IsCostFixed_SetBit @ 14b5a7cb0

void __cdecl
Z_Construct_UScriptStruct_FDS_StuffWarpDeviceTableRow_Statics::NewProp_IsCostFixed_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  return;
}

// NewStructOps @ 14b5a7cc0

void * __cdecl Z_Construct_UScriptStruct_FDS_StuffWarpDeviceTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_StuffWarpDeviceTableRow,&UE::CoreUObject::Private::Construct<FDS_StuffWarpDeviceTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_StuffWarpDeviceTableRow>,&UE::CoreUObject::Private::Destruct<FDS_StuffWarpDeviceTableRow>,&UE::CoreUObject::Private::Copy<FDS_StuffWarpDeviceTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// InternalConstructor<ADS_Stuff> @ 14b5a7d00

void __cdecl InternalConstructor<ADS_Stuff>(FObjectInitializer *param_1)

{
  if ((ADS_Stuff *)param_1->Obj != (ADS_Stuff *)0x0) {
    ADS_Stuff::ADS_Stuff((ADS_Stuff *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ADS_StuffGather> @ 14b5a7d20

void __cdecl InternalConstructor<ADS_StuffGather>(FObjectInitializer *param_1)

{
  if ((ADS_StuffGather *)param_1->Obj != (ADS_StuffGather *)0x0) {
    ADS_StuffGather::ADS_StuffGather((ADS_StuffGather *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ADS_StuffPortal> @ 14b5a7d40

void __cdecl InternalConstructor<ADS_StuffPortal>(FObjectInitializer *param_1)

{
  if ((ADS_StuffPortal *)param_1->Obj != (ADS_StuffPortal *)0x0) {
    ADS_StuffPortal::ADS_StuffPortal((ADS_StuffPortal *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ADS_StuffQuest> @ 14b5a7d60

void __cdecl InternalConstructor<ADS_StuffQuest>(FObjectInitializer *param_1)

{
  if ((ADS_StuffQuest *)param_1->Obj != (ADS_StuffQuest *)0x0) {
    ADS_StuffQuest::ADS_StuffQuest((ADS_StuffQuest *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ADS_StuffQuestBoard> @ 14b5a7d80

void __cdecl InternalConstructor<ADS_StuffQuestBoard>(FObjectInitializer *param_1)

{
  if ((ADS_StuffQuestBoard *)param_1->Obj != (ADS_StuffQuestBoard *)0x0) {
    ADS_StuffQuestBoard::ADS_StuffQuestBoard((ADS_StuffQuestBoard *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ADS_StuffWarpDevice> @ 14b5a7da0

void __cdecl InternalConstructor<ADS_StuffWarpDevice>(FObjectInitializer *param_1)

{
  if ((ADS_StuffWarpDevice *)param_1->Obj != (ADS_StuffWarpDevice *)0x0) {
    ADS_StuffWarpDevice::ADS_StuffWarpDevice((ADS_StuffWarpDevice *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_StuffAnim> @ 14b5a7dc0

void __cdecl InternalConstructor<UDS_StuffAnim>(FObjectInitializer *param_1)

{
  if ((UDS_StuffAnim *)param_1->Obj != (UDS_StuffAnim *)0x0) {
    UDS_StuffAnim::UDS_StuffAnim((UDS_StuffAnim *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_StuffData> @ 14b5a7de0

void __cdecl InternalConstructor<UDS_StuffData>(FObjectInitializer *param_1)

{
  if ((UDS_StuffData *)param_1->Obj != (UDS_StuffData *)0x0) {
    UDS_StuffData::UDS_StuffData((UDS_StuffData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_StuffDataSet> @ 14b5a7e00

void __cdecl InternalConstructor<UDS_StuffDataSet>(FObjectInitializer *param_1)

{
  UDS_EntityDataSet *this;
  
  this = (UDS_EntityDataSet *)param_1->Obj;
  if (this != (UDS_EntityDataSet *)0x0) {
    UDS_EntityDataSet::UDS_EntityDataSet(this,param_1);
    this->_padding_ = (longlong)&___7UDS_StuffDataSet__6B_;
  }
  return;
}

// InternalConstructor<UDS_StuffGatherData> @ 14b5a7e30

void __cdecl InternalConstructor<UDS_StuffGatherData>(FObjectInitializer *param_1)

{
  UDS_StuffData *this;
  
  this = (UDS_StuffData *)param_1->Obj;
  if (this != (UDS_StuffData *)0x0) {
    UDS_StuffData::UDS_StuffData(this,param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x100;
    this->_padding_ = (longlong)&___7UDS_StuffGatherData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UDS_StuffPortalData> @ 14b5a7f00

void __cdecl InternalConstructor<UDS_StuffPortalData>(FObjectInitializer *param_1)

{
  UDS_StuffData *this;
  
  this = (UDS_StuffData *)param_1->Obj;
  if (this != (UDS_StuffData *)0x0) {
    UDS_StuffData::UDS_StuffData(this,param_1);
    this->_padding_ = (longlong)&___7UDS_StuffPortalData__6B_;
  }
  return;
}

// InternalConstructor<UDS_StuffQuestBoardData> @ 14b5a7f30

void __cdecl InternalConstructor<UDS_StuffQuestBoardData>(FObjectInitializer *param_1)

{
  if ((UDS_StuffQuestBoardData *)param_1->Obj != (UDS_StuffQuestBoardData *)0x0) {
    UDS_StuffQuestBoardData::UDS_StuffQuestBoardData
              ((UDS_StuffQuestBoardData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_StuffQuestData> @ 14b5a7f50

void __cdecl InternalConstructor<UDS_StuffQuestData>(FObjectInitializer *param_1)

{
  if ((UDS_StuffQuestData *)param_1->Obj != (UDS_StuffQuestData *)0x0) {
    UDS_StuffQuestData::UDS_StuffQuestData((UDS_StuffQuestData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_StuffVergenceAnim> @ 14b5a7f70

void __cdecl InternalConstructor<UDS_StuffVergenceAnim>(FObjectInitializer *param_1)

{
  if ((UDS_StuffVergenceAnim *)param_1->Obj != (UDS_StuffVergenceAnim *)0x0) {
    UDS_StuffVergenceAnim::UDS_StuffVergenceAnim((UDS_StuffVergenceAnim *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_StuffWarpDeviceData> @ 14b5a7f90

void __cdecl InternalConstructor<UDS_StuffWarpDeviceData>(FObjectInitializer *param_1)

{
  if ((UDS_StuffWarpDeviceData *)param_1->Obj != (UDS_StuffWarpDeviceData *)0x0) {
    UDS_StuffWarpDeviceData::UDS_StuffWarpDeviceData
              ((UDS_StuffWarpDeviceData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<ADS_Stuff> @ 14b5a7fb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ADS_Stuff>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ADS_EntityActorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADS_Stuff::GetPrivateStaticClass();
  this = (ADS_EntityActorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ADS_EntityActorBase *)0x0) {
    ADS_EntityActorBase::ADS_EntityActorBase(this,param_1);
    this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__FDS_EntityBase__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ADS_StuffGather> @ 14b5a8070

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ADS_StuffGather>(FVTableHelper *param_1)

{
  FWeakObjectPtr *this;
  UObject *pUVar1;
  UClass *pUVar2;
  ADS_EntityActorBase *this_00;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADS_StuffGather::GetPrivateStaticClass();
  this_00 = (ADS_EntityActorBase *)
            StaticAllocateObject
                      (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                       Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                       (FGCReconstructionGuard *)0x0);
  if (this_00 != (ADS_EntityActorBase *)0x0) {
    ADS_EntityActorBase::ADS_EntityActorBase(this_00,param_1);
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&ADS_StuffGather::_vftable__for__AActor__;
    this = (FWeakObjectPtr *)((longlong)&this_00[1]._padding_ + 4);
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&ADS_StuffGather::_vftable__for__FDS_EntityBase__;
    this_00[1]._padding_ = 0;
    *(undefined4 *)&this_00[1]._padding_ = 0;
    this->ObjectIndex = 0;
    this->ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(this,(FObjectPtr)&local_res10);
    return (UObject *)this_00;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ADS_StuffPortal> @ 14b5a8160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ADS_StuffPortal>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ADS_EntityActorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADS_StuffPortal::GetPrivateStaticClass();
  this = (ADS_EntityActorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ADS_EntityActorBase *)0x0) {
    ADS_EntityActorBase::ADS_EntityActorBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ADS_StuffPortal::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ADS_StuffPortal::_vftable__for__FDS_EntityBase__;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3fc00000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ADS_StuffQuest> @ 14b5a8240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ADS_StuffQuest>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ADS_EntityActorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADS_StuffQuest::GetPrivateStaticClass();
  this = (ADS_EntityActorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ADS_EntityActorBase *)0x0) {
    ADS_EntityActorBase::ADS_EntityActorBase(this,param_1);
    this->_padding_ = (longlong)&ADS_StuffQuest::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ADS_StuffQuest::_vftable__for__FDS_EntityBase__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ADS_StuffQuestBoard> @ 14b5a8300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ADS_StuffQuestBoard>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ADS_EntityActorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADS_StuffQuestBoard::GetPrivateStaticClass();
  this = (ADS_EntityActorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ADS_EntityActorBase *)0x0) {
    ADS_EntityActorBase::ADS_EntityActorBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ADS_StuffQuestBoard::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ADS_StuffQuestBoard::_vftable__for__FDS_EntityBase__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ADS_StuffWarpDevice> @ 14b5a83d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ADS_StuffWarpDevice>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ADS_EntityActorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADS_StuffWarpDevice::GetPrivateStaticClass();
  this = (ADS_EntityActorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ADS_EntityActorBase *)0x0) {
    ADS_EntityActorBase::ADS_EntityActorBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ADS_StuffWarpDevice::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ADS_StuffWarpDevice::_vftable__for__FDS_EntityBase__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_StuffAnim> @ 14b5a84a0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_StuffAnim>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_AnimInstanceBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_StuffAnim::GetPrivateStaticClass();
  this = (UDS_AnimInstanceBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_AnimInstanceBase *)0x0) {
    UDS_AnimInstanceBase::UDS_AnimInstanceBase(this,param_1);
    *(undefined2 *)&this->field_0x448 = 0;
    *(undefined ***)this = &___7UDS_StuffAnim__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_StuffData> @ 14b5a8560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_StuffData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_StuffData *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_StuffData::GetPrivateStaticClass();
  pUVar3 = (UDS_StuffData *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UDS_StuffData *)0x0) {
    pUVar3 = UDS_StuffData::UDS_StuffData(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_StuffDataSet> @ 14b5a8600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_StuffDataSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_EntityDataSet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_StuffDataSet::GetPrivateStaticClass();
  this = (UDS_EntityDataSet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_EntityDataSet *)0x0) {
    UDS_EntityDataSet::UDS_EntityDataSet(this,param_1);
    this->_padding_ = (longlong)&___7UDS_StuffDataSet__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_StuffGatherData> @ 14b5a86b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_StuffGatherData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_StuffData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_StuffGatherData::GetPrivateStaticClass();
  this = (UDS_StuffData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_StuffData *)0x0) {
    UDS_StuffData::UDS_StuffData(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDS_StuffGatherData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x100;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_StuffPortalData> @ 14b5a87f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_StuffPortalData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_StuffData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_StuffPortalData::GetPrivateStaticClass();
  this = (UDS_StuffData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_StuffData *)0x0) {
    UDS_StuffData::UDS_StuffData(this,param_1);
    this->_padding_ = (longlong)&___7UDS_StuffPortalData__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_StuffQuestBoardData> @ 14b5a88a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_StuffQuestBoardData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_StuffData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_StuffQuestBoardData::GetPrivateStaticClass();
  this = (UDS_StuffData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_StuffData *)0x0) {
    UDS_StuffData::UDS_StuffData(this,param_1);
    this->_padding_ = (longlong)&___7UDS_StuffQuestBoardData__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_StuffQuestData> @ 14b5a8950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_StuffQuestData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_StuffData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_StuffQuestData::GetPrivateStaticClass();
  this = (UDS_StuffData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_StuffData *)0x0) {
    UDS_StuffData::UDS_StuffData(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDS_StuffQuestData__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_StuffVergenceAnim> @ 14b5a8a10

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

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_StuffVergenceAnim>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_AnimInstanceBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_StuffVergenceAnim::GetPrivateStaticClass();
  this = (UDS_AnimInstanceBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_AnimInstanceBase *)0x0) {
    UDS_AnimInstanceBase::UDS_AnimInstanceBase(this,param_1);
    *(undefined2 *)&this->field_0x448 = 0;
    *(undefined ***)this = &___7UDS_StuffVergenceAnim__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_StuffWarpDeviceData> @ 14b5a8ad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_StuffWarpDeviceData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_StuffData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_StuffWarpDeviceData::GetPrivateStaticClass();
  this = (UDS_StuffData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_StuffData *)0x0) {
    UDS_StuffData::UDS_StuffData(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDS_StuffWarpDeviceData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EDS_BoxSuffState> @ 14b5a8bb0

UEnum * __cdecl StaticEnum<enum_EDS_BoxSuffState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_BoxSuffState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_BoxSuffState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_BoxSuffState,(UObject *)pUVar1,
                       L"EDS_BoxSuffState");
  }
  return Z_Registration_Info_UEnum_EDS_BoxSuffState.OuterSingleton;
}

// StaticEnum<enum_EDS_StuffGatherType> @ 14b5a8bf0

UEnum * __cdecl StaticEnum<enum_EDS_StuffGatherType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_StuffGatherType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_StuffGatherType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_StuffGatherType,(UObject *)pUVar1,
                       L"EDS_StuffGatherType");
  }
  return Z_Registration_Info_UEnum_EDS_StuffGatherType.OuterSingleton;
}

// StaticEnum<enum_EDS_StuffLocationType> @ 14b5a8c30

UEnum * __cdecl StaticEnum<enum_EDS_StuffLocationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_StuffLocationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_StuffLocationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_StuffLocationType,(UObject *)pUVar1,
                       L"EDS_StuffLocationType");
  }
  return Z_Registration_Info_UEnum_EDS_StuffLocationType.OuterSingleton;
}

// StaticEnum<enum_EDS_StuffSpawnType> @ 14b5a8c70

UEnum * __cdecl StaticEnum<enum_EDS_StuffSpawnType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_StuffSpawnType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_StuffSpawnType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_StuffSpawnType,(UObject *)pUVar1,
                       L"EDS_StuffSpawnType");
  }
  return Z_Registration_Info_UEnum_EDS_StuffSpawnType.OuterSingleton;
}

// StaticEnum<enum_EDS_StuffState> @ 14b5a8cb0

UEnum * __cdecl StaticEnum<enum_EDS_StuffState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_StuffState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_StuffState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_StuffState,(UObject *)pUVar1,
                       L"EDS_StuffState");
  }
  return Z_Registration_Info_UEnum_EDS_StuffState.OuterSingleton;
}

// StaticEnum<enum_EDS_StuffType> @ 14b5a8cf0

UEnum * __cdecl StaticEnum<enum_EDS_StuffType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_StuffType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_StuffType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_StuffType,(UObject *)pUVar1,L"EDS_StuffType")
    ;
  }
  return Z_Registration_Info_UEnum_EDS_StuffType.OuterSingleton;
}

// StaticEnum<enum_EDS_SubTabType> @ 14b5a8d30

UEnum * __cdecl StaticEnum<enum_EDS_SubTabType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_SubTabType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_SubTabType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_SubTabType,(UObject *)pUVar1,
                       L"EDS_SubTabType");
  }
  return Z_Registration_Info_UEnum_EDS_SubTabType.OuterSingleton;
}

// StaticEnum<enum_EDS_WarpDeviceState> @ 14b5a8d70

UEnum * __cdecl StaticEnum<enum_EDS_WarpDeviceState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_WarpDeviceState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_WarpDeviceState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_WarpDeviceState,(UObject *)pUVar1,
                       L"EDS_WarpDeviceState");
  }
  return Z_Registration_Info_UEnum_EDS_WarpDeviceState.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14b5a9a90

/* [thunk]:public: virtual void * __ptr64 __cdecl ADS_Stuff::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ADS_Stuff::_vector_deleting_destructor__adjustor_704__(ADS_Stuff *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADS_Stuff *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14b5a9aa4

/* [thunk]:public: virtual void * __ptr64 __cdecl ADS_StuffGather::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ADS_StuffGather::_vector_deleting_destructor__adjustor_704__(ADS_StuffGather *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADS_StuffGather *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14b5a9ab8

/* [thunk]:public: virtual void * __ptr64 __cdecl ADS_StuffPortal::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ADS_StuffPortal::_vector_deleting_destructor__adjustor_704__(ADS_StuffPortal *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADS_StuffPortal *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14b5a9acc

/* [thunk]:public: virtual void * __ptr64 __cdecl ADS_StuffQuest::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ADS_StuffQuest::_vector_deleting_destructor__adjustor_704__(ADS_StuffQuest *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADS_StuffQuest *)&this[-1].field_0x468,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14b5a9ae0

/* [thunk]:public: virtual void * __ptr64 __cdecl ADS_StuffQuestBoard::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ADS_StuffQuestBoard::_vector_deleting_destructor__adjustor_704__
          (ADS_StuffQuestBoard *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADS_StuffQuestBoard *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14b5a9af4

/* [thunk]:public: virtual void * __ptr64 __cdecl ADS_StuffWarpDevice::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ADS_StuffWarpDevice::_vector_deleting_destructor__adjustor_704__
          (ADS_StuffWarpDevice *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADS_StuffWarpDevice *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14b5a9b10

void * __thiscall ADS_Stuff::_scalar_deleting_destructor_(ADS_Stuff *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x728);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5a9b80

void * __thiscall ADS_StuffGather::_scalar_deleting_destructor_(ADS_StuffGather *this,uint param_1)

{
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__AActor__;
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x750);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5a9bf0

void * __thiscall ADS_StuffPortal::_scalar_deleting_destructor_(ADS_StuffPortal *this,uint param_1)

{
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__AActor__;
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x750);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5a9c60

void * __thiscall ADS_StuffQuest::_scalar_deleting_destructor_(ADS_StuffQuest *this,uint param_1)

{
  *(undefined ***)this = &ADS_Stuff::_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &ADS_Stuff::_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x728);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5a9cd0

void * __thiscall
ADS_StuffQuestBoard::_scalar_deleting_destructor_(ADS_StuffQuestBoard *this,uint param_1)

{
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__AActor__;
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x740);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5a9d40

void * __thiscall
ADS_StuffWarpDevice::_scalar_deleting_destructor_(ADS_StuffWarpDevice *this,uint param_1)

{
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__AActor__;
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x738);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5a9db0

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

void * __thiscall UDS_StuffAnim::_scalar_deleting_destructor_(UDS_StuffAnim *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDS_StuffAnim__6B_;
  UDS_AnimInstanceBase::~UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x450);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5a9e10

void * __thiscall UDS_StuffData::_scalar_deleting_destructor_(UDS_StuffData *this,uint param_1)

{
  ~UDS_StuffData(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5a9e70

void * __thiscall
UDS_StuffDataSet::_scalar_deleting_destructor_(UDS_StuffDataSet *this,uint param_1)

{
  *(undefined ***)this = &___7UDS_StuffDataSet__6B_;
  UDS_EntityDataSet::~UDS_EntityDataSet((UDS_EntityDataSet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5a9ed0

void * __thiscall
UDS_StuffGatherData::_scalar_deleting_destructor_(UDS_StuffGatherData *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_StuffGatherData__6B_;
  *(undefined4 *)&(this->EffectID_Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EffectID_Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StuffState,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StuffState,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EffectID_Map);
  pFVar2 = (this->GatheringEntityList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedStuffStateDelegate).field_0x8,
             *(int *)&(this->ChangedStuffStateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedStuffStateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedStuffStateDelegate);
  UDS_StuffData::~UDS_StuffData((UDS_StuffData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5a9fb0

void * __thiscall
UDS_StuffPortalData::_scalar_deleting_destructor_(UDS_StuffPortalData *this,uint param_1)

{
  *(undefined ***)this = &___7UDS_StuffPortalData__6B_;
  UDS_StuffData::~UDS_StuffData((UDS_StuffData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5aa010

void * __thiscall
UDS_StuffQuestBoardData::_scalar_deleting_destructor_(UDS_StuffQuestBoardData *this,uint param_1)

{
  *(undefined ***)this = &___7UDS_StuffQuestBoardData__6B_;
  UDS_StuffData::~UDS_StuffData((UDS_StuffData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5aa070

void * __thiscall
UDS_StuffQuestData::_scalar_deleting_destructor_(UDS_StuffQuestData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDS_StuffQuestData__6B_;
  UDS_StuffData::~UDS_StuffData((UDS_StuffData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5aa0d0

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
UDS_StuffVergenceAnim::_scalar_deleting_destructor_(UDS_StuffVergenceAnim *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDS_StuffVergenceAnim__6B_;
  UDS_AnimInstanceBase::~UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x450);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b5aa130

void * __thiscall
UDS_StuffWarpDeviceData::_scalar_deleting_destructor_(UDS_StuffWarpDeviceData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_StuffWarpDeviceData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedWarpStateDelegate).field_0x8,
             *(int *)&(this->ChangedWarpStateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedWarpStateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedWarpStateDelegate);
  UDS_StuffData::~UDS_StuffData((UDS_StuffData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDS_StringUiTableRow @ 14b5aa1d0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StringUiTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StringWorldID @ 14b5aa1e0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StringWorldID(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StringWorldTableRow @ 14b5aa1f0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StringWorldTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_Stuff @ 14b5aa200

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_Stuff(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffAnim @ 14b5aa210

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffAnim(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffBaseTableRow @ 14b5aa220

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffBaseTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffData @ 14b5aa230

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffGather @ 14b5aa240

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffGather(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffGatherData @ 14b5aa250

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffGatherData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffGatherTableRow @ 14b5aa260

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffGatherTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffGatherType @ 14b5aa270

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffGatherType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffLocationType @ 14b5aa280

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffLocationType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffPortal @ 14b5aa290

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffPortal(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffPortalData @ 14b5aa2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffPortalData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffPortalTableRow @ 14b5aa2b0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffPortalTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffQuest @ 14b5aa2c0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffQuest(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffQuestBoard @ 14b5aa2d0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffQuestBoard(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffQuestBoardData @ 14b5aa2e0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffQuestBoardData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffQuestBoardTableRow @ 14b5aa2f0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffQuestBoardTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffQuestData @ 14b5aa300

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffQuestData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffQuestTableRow @ 14b5aa310

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffQuestTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffSpawnEditorTableRow @ 14b5aa320

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffSpawnEditorTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffSpawnGroupTableRow @ 14b5aa330

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffSpawnGroupTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffSpawnQuestTableRow @ 14b5aa340

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffSpawnQuestTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffSpawnTableRow @ 14b5aa350

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffSpawnTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffSpawnType @ 14b5aa360

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffSpawnType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffType @ 14b5aa370

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffVergenceAnim @ 14b5aa380

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffVergenceAnim(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffWarpDevice @ 14b5aa390

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffWarpDevice(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffWarpDeviceData @ 14b5aa3a0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffWarpDeviceData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_StuffWarpDeviceTableRow @ 14b5aa3b0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_StuffWarpDeviceTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_SubTabType @ 14b5aa3c0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_SubTabType(void)

{
  return;
}

// Z_Construct_UClass_ADS_StuffGather_NoRegister @ 14b5ab060

UClass * __cdecl Z_Construct_UClass_ADS_StuffGather_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffGather.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffGather",
               &Z_Registration_Info_UClass_ADS_StuffGather.InnerSingleton,
               ADS_StuffGather::StaticRegisterNativesADS_StuffGather,0x750,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_StuffGather>,InternalVTableHelperCtorCaller<ADS_StuffGather>,
               local_res8,ADS_Stuff::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffGather.InnerSingleton;
}

// Z_Construct_UClass_ADS_StuffPortal_NoRegister @ 14b5ab120

UClass * __cdecl Z_Construct_UClass_ADS_StuffPortal_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffPortal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffPortal",
               &Z_Registration_Info_UClass_ADS_StuffPortal.InnerSingleton,
               ADS_StuffPortal::StaticRegisterNativesADS_StuffPortal,0x750,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_StuffPortal>,InternalVTableHelperCtorCaller<ADS_StuffPortal>,
               local_res8,ADS_Stuff::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffPortal.InnerSingleton;
}

// Z_Construct_UClass_ADS_StuffQuestBoard_NoRegister @ 14b5ab1e0

UClass * __cdecl Z_Construct_UClass_ADS_StuffQuestBoard_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffQuestBoard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuestBoard",
               &Z_Registration_Info_UClass_ADS_StuffQuestBoard.InnerSingleton,
               ADS_StuffQuestBoard::StaticRegisterNativesADS_StuffQuestBoard,0x740,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_StuffQuestBoard>,
               InternalVTableHelperCtorCaller<ADS_StuffQuestBoard>,local_res8,ADS_Stuff::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffQuestBoard.InnerSingleton;
}

// Z_Construct_UClass_ADS_StuffQuest_NoRegister @ 14b5ab2a0

UClass * __cdecl Z_Construct_UClass_ADS_StuffQuest_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuest",
               &Z_Registration_Info_UClass_ADS_StuffQuest.InnerSingleton,
               ADS_StuffQuest::StaticRegisterNativesADS_StuffQuest,0x728,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_StuffQuest>,InternalVTableHelperCtorCaller<ADS_StuffQuest>,
               local_res8,ADS_Stuff::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffQuest.InnerSingleton;
}

// Z_Construct_UClass_ADS_StuffWarpDevice_NoRegister @ 14b5ab360

UClass * __cdecl Z_Construct_UClass_ADS_StuffWarpDevice_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffWarpDevice.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffWarpDevice",
               &Z_Registration_Info_UClass_ADS_StuffWarpDevice.InnerSingleton,
               ADS_StuffWarpDevice::StaticRegisterNativesADS_StuffWarpDevice,0x738,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_StuffWarpDevice>,
               InternalVTableHelperCtorCaller<ADS_StuffWarpDevice>,local_res8,ADS_Stuff::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffWarpDevice.InnerSingleton;
}

// Z_Construct_UClass_ADS_Stuff_NoRegister @ 14b5ab420

UClass * __cdecl Z_Construct_UClass_ADS_Stuff_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_Stuff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_Stuff",&Z_Registration_Info_UClass_ADS_Stuff.InnerSingleton
               ,ADS_Stuff::StaticRegisterNativesADS_Stuff,0x728,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_Stuff>,
               InternalVTableHelperCtorCaller<ADS_Stuff>,local_res8,ADS_EntityActorBase::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_Stuff.InnerSingleton;
}

// Z_Construct_UClass_UDS_StuffAnim_NoRegister @ 14b5ab4e0

UClass * __cdecl Z_Construct_UClass_UDS_StuffAnim_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffAnim",
               &Z_Registration_Info_UClass_UDS_StuffAnim.InnerSingleton,
               UDS_StuffAnim::StaticRegisterNativesUDS_StuffAnim,0x450,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_StuffAnim>,InternalVTableHelperCtorCaller<UDS_StuffAnim>,
               local_res8,UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffAnim.InnerSingleton;
}

// Z_Construct_UClass_UDS_StuffDataSet_NoRegister @ 14b5ab5a0

UClass * __cdecl Z_Construct_UClass_UDS_StuffDataSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffDataSet",
               &Z_Registration_Info_UClass_UDS_StuffDataSet.InnerSingleton,
               UDS_StuffDataSet::StaticRegisterNativesUDS_StuffDataSet,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_StuffDataSet>,
               InternalVTableHelperCtorCaller<UDS_StuffDataSet>,local_res8,
               UDS_EntityDataSet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffDataSet.InnerSingleton;
}

// Z_Construct_UClass_UDS_StuffData_NoRegister @ 14b5ab660

UClass * __cdecl Z_Construct_UClass_UDS_StuffData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffData",
               &Z_Registration_Info_UClass_UDS_StuffData.InnerSingleton,
               UDS_StuffData::StaticRegisterNativesUDS_StuffData,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_StuffData>,
               InternalVTableHelperCtorCaller<UDS_StuffData>,local_res8,UDS_EntityData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffData.InnerSingleton;
}

// Z_Construct_UClass_UDS_StuffGatherData_NoRegister @ 14b5ab720

UClass * __cdecl Z_Construct_UClass_UDS_StuffGatherData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffGatherData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffGatherData",
               &Z_Registration_Info_UClass_UDS_StuffGatherData.InnerSingleton,
               UDS_StuffGatherData::StaticRegisterNativesUDS_StuffGatherData,0x240,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_StuffGatherData>,
               InternalVTableHelperCtorCaller<UDS_StuffGatherData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffGatherData.InnerSingleton;
}

// Z_Construct_UClass_UDS_StuffPortalData_NoRegister @ 14b5ab7e0

UClass * __cdecl Z_Construct_UClass_UDS_StuffPortalData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffPortalData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffPortalData",
               &Z_Registration_Info_UClass_UDS_StuffPortalData.InnerSingleton,
               UDS_StuffPortalData::StaticRegisterNativesUDS_StuffPortalData,0x1a8,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_StuffPortalData>,
               InternalVTableHelperCtorCaller<UDS_StuffPortalData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffPortalData.InnerSingleton;
}

// Z_Construct_UClass_UDS_StuffQuestBoardData_NoRegister @ 14b5ab8a0

UClass * __cdecl Z_Construct_UClass_UDS_StuffQuestBoardData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffQuestBoardData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuestBoardData",
               &Z_Registration_Info_UClass_UDS_StuffQuestBoardData.InnerSingleton,
               UDS_StuffQuestBoardData::StaticRegisterNativesUDS_StuffQuestBoardData,0x1a8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_StuffQuestBoardData>
               ,InternalVTableHelperCtorCaller<UDS_StuffQuestBoardData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffQuestBoardData.InnerSingleton;
}

// Z_Construct_UClass_UDS_StuffQuestData_NoRegister @ 14b5ab960

UClass * __cdecl Z_Construct_UClass_UDS_StuffQuestData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffQuestData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuestData",
               &Z_Registration_Info_UClass_UDS_StuffQuestData.InnerSingleton,
               UDS_StuffQuestData::StaticRegisterNativesUDS_StuffQuestData,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_StuffQuestData>,
               InternalVTableHelperCtorCaller<UDS_StuffQuestData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffQuestData.InnerSingleton;
}

// Z_Construct_UClass_UDS_StuffVergenceAnim_NoRegister @ 14b5aba20

UClass * __cdecl Z_Construct_UClass_UDS_StuffVergenceAnim_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffVergenceAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffVergenceAnim",
               &Z_Registration_Info_UClass_UDS_StuffVergenceAnim.InnerSingleton,
               UDS_StuffVergenceAnim::StaticRegisterNativesUDS_StuffVergenceAnim,0x450,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_StuffVergenceAnim>,
               InternalVTableHelperCtorCaller<UDS_StuffVergenceAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffVergenceAnim.InnerSingleton;
}

// Z_Construct_UClass_UDS_StuffWarpDeviceData_NoRegister @ 14b5abae0

UClass * __cdecl Z_Construct_UClass_UDS_StuffWarpDeviceData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffWarpDeviceData",
               &Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.InnerSingleton,
               UDS_StuffWarpDeviceData::StaticRegisterNativesUDS_StuffWarpDeviceData,0x1d0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_StuffWarpDeviceData>
               ,InternalVTableHelperCtorCaller<UDS_StuffWarpDeviceData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_BoxSuffState @ 14b5abba0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_BoxSuffState(void)

{
  if (Z_Registration_Info_UEnum_EDS_BoxSuffState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_BoxSuffState.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_BoxSuffState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_BoxSuffState.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_SubTabType @ 14b5abbe0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_SubTabType(void)

{
  if (Z_Registration_Info_UEnum_EDS_SubTabType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_SubTabType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_SubTabType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_SubTabType.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_WarpDeviceState @ 14b5abc20

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_WarpDeviceState(void)

{
  if (Z_Registration_Info_UEnum_EDS_WarpDeviceState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_WarpDeviceState.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_WarpDeviceState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_WarpDeviceState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDS_StringUiTableRow @ 14b5abc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StringUiTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StringUiTableRow.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StringUiTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StringUiTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StringUiTableRow.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDS_StringUiTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_StringWorldTableRow @ 14b5abce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StringWorldTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StringWorldTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StringWorldTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StringWorldTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StringWorldTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StringWorldTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_StuffBaseTableRow @ 14b5abd60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StuffBaseTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffBaseTableRow.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StuffBaseTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StuffBaseTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StuffBaseTableRow.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDS_StuffBaseTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_StuffGatherTableRow @ 14b5abde0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StuffGatherTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffGatherTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StuffGatherTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StuffGatherTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StuffGatherTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StuffGatherTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_StuffPortalTableRow @ 14b5abe60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StuffPortalTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffPortalTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StuffPortalTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StuffPortalTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StuffPortalTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StuffPortalTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_StuffQuestBoardTableRow @ 14b5abee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StuffQuestBoardTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffQuestBoardTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StuffQuestBoardTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StuffQuestBoardTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StuffQuestBoardTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StuffQuestBoardTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_StuffQuestTableRow @ 14b5abf60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StuffQuestTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffQuestTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StuffQuestTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StuffQuestTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StuffQuestTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StuffQuestTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_StuffSpawnEditorTableRow @ 14b5abfe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StuffSpawnEditorTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffSpawnEditorTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StuffSpawnEditorTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StuffSpawnEditorTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StuffSpawnEditorTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StuffSpawnEditorTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_StuffSpawnGroupTableRow @ 14b5ac060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StuffSpawnGroupTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffSpawnGroupTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StuffSpawnGroupTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StuffSpawnGroupTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StuffSpawnGroupTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StuffSpawnGroupTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_StuffSpawnQuestTableRow @ 14b5ac0e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StuffSpawnQuestTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffSpawnQuestTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StuffSpawnQuestTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StuffSpawnQuestTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StuffSpawnQuestTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StuffSpawnQuestTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_StuffSpawnTableRow @ 14b5ac160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StuffSpawnTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffSpawnTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StuffSpawnTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StuffSpawnTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StuffSpawnTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StuffSpawnTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_StuffWarpDeviceTableRow @ 14b5ac1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_StuffWarpDeviceTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_StuffWarpDeviceTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_StuffWarpDeviceTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_StuffWarpDeviceTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_StuffWarpDeviceTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_StuffWarpDeviceTableRow.InnerSingleton;
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

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 150434640

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

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 150434660

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

