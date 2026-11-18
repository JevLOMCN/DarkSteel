// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 184

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 141200e80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 141200ea0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 141200ec0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 141200ee0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 141200f00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 141200f20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 141200f40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 141200f60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 141200f80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 141200fa0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 141200fc0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 141200fe0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 141201000

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 141201020

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 141201040

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 141201060

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 141201080

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 1412010a0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 1412010c0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 1412010e0

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

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 141201160

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

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 1412011e0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 141201200

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 141201220

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 141201240

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 141201260

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 141201280

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1412012a0

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemFilterTableRow_h__Script_ProjectDS_2245208977'' @ 141201330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemFilterTableRow_h__Script_ProjectDS_2245208977__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemFilterTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemGatherToolTableRow_h__Script_ProjectDS_1234996887'' @ 141201370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemGatherToolTableRow_h__Script_ProjectDS_1234996887__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemGatherToolTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemGemSocketListTableRow_h__Script_ProjectDS_39312362'' @ 1412013b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemGemSocketListTableRow_h__Script_ProjectDS_39312362__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemGemSocketListTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemGemSocketTableRow_h__Script_ProjectDS_1457372715'' @ 1412013f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemGemSocketTableRow_h__Script_ProjectDS_1457372715__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemGemSocketTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemInventoryPriorityTableRow_h__Script_ProjectDS_1010571367'' @ 141201430

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemInventoryPriorityTableRow_h__Script_ProjectDS_1010571367__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemInventoryPriorityTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemPassiveGroupTableRow_h__Script_ProjectDS_842153699'' @ 141201470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemPassiveGroupTableRow_h__Script_ProjectDS_842153699__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemPassiveGroupTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemPrefixGroupTableRow_h__Script_ProjectDS_2349918001'' @ 1412014b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemPrefixGroupTableRow_h__Script_ProjectDS_2349918001__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemPrefixGroupTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemPrefixTableRow_h__Script_ProjectDS_796285440'' @ 1412014f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemPrefixTableRow_h__Script_ProjectDS_796285440__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemPrefixTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemRepairTableRow_h__Script_ProjectDS_2481740866'' @ 141201530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemRepairTableRow_h__Script_ProjectDS_2481740866__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemRepairTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemRestoreTableRow_h__Script_ProjectDS_561097990'' @ 141201570

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemRestoreTableRow_h__Script_ProjectDS_561097990__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemRestoreTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSetEffectGroupTableRow_h__Script_ProjectDS_3442488721'' @ 1412015b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSetEffectGroupTableRow_h__Script_ProjectDS_3442488721__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSetEffectGroupTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSetEffectTableRow_h__Script_ProjectDS_62224504'' @ 1412015f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSetEffectTableRow_h__Script_ProjectDS_62224504__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSetEffectTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSetTableRow_h__Script_ProjectDS_1253990047'' @ 141201630

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSetTableRow_h__Script_ProjectDS_1253990047__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSetTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSlotStateTableRow_h__Script_ProjectDS_1971042621'' @ 141201670

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSlotStateTableRow_h__Script_ProjectDS_1971042621__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ItemSlotStateTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemInvenPriorityType_h__Script_ProjectDS_2474333601'' @ 1412016b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemInvenPriorityType_h__Script_ProjectDS_2474333601__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemInvenPriorityType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemMainType_h__Script_ProjectDS_737837074'' @ 141201700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemMainType_h__Script_ProjectDS_737837074__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemMainType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemNameTagStyle_h__Script_ProjectDS_208312696'' @ 141201750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemNameTagStyle_h__Script_ProjectDS_208312696__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemNameTagStyle_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemOptionAffixType_h__Script_ProjectDS_985099095'' @ 1412017a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemOptionAffixType_h__Script_ProjectDS_985099095__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemOptionAffixType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemSlotStateType_h__Script_ProjectDS_792024300'' @ 1412017f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemSlotStateType_h__Script_ProjectDS_792024300__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemSlotStateType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemType_h__Script_ProjectDS_3437546388'' @ 141201840

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemType_h__Script_ProjectDS_3437546388__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ItemType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_ItemRepairEvent_h__Script_ProjectDS_2535876342'' @ 141201890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_ItemRepairEvent_h__Script_ProjectDS_2535876342__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_ItemRepairEvent_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_UI_Slate_Decorators_DS_ItemLinkTextDecorator_h__Script_ProjectDS_4060447211'' @ 1412018d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_UI_Slate_Decorators_DS_ItemLinkTextDecorator_h__Script_ProjectDS_4060447211__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_UI_Slate_Decorators_DS_ItemLinkTextDecorator_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `scalar_deleting_destructor' @ 14b4d66f0

void * __thiscall
FDS_ItemRepairTableRow::_scalar_deleting_destructor_(FDS_ItemRepairTableRow *this,uint param_1)

{
  ~FDS_ItemRepairTableRow(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// NewStructOps @ 14b4d6770

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemRepairTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemRepairTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemRepairTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemRepairTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemRepairTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemRepairTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b4d67b0

void * __thiscall
FDS_ItemFilterTableRow::_scalar_deleting_destructor_(FDS_ItemFilterTableRow *this,uint param_1)

{
  ~FDS_ItemFilterTableRow(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// Z_Construct_UEnum_ProjectDS_EDS_ItemType @ 14b4d67f0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_ItemType(void)

{
  if (Z_Registration_Info_UEnum_EDS_ItemType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_ItemType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_ItemType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_ItemType.InnerSingleton;
}

// NewProp_IsEquipCheckable_SetBit @ 14b4d6830

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsEquipCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_IsLockCheckable_SetBit @ 14b4d6840

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsLockCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_IsGradeCheckable_SetBit @ 14b4d6850

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsGradeCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_IsItemTypeCheckable_SetBit @ 14b4d6860

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsItemTypeCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_IsEnhanceItemCheckable_SetBit @ 14b4d6870

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsEnhanceItemCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_IsItemDismantleCheckable_SetBit @ 14b4d6880

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsItemDismantleCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewProp_IsRingCmdCheckable_SetBit @ 14b4d6890

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsRingCmdCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// NewProp_IsCharIdCheckable_SetBit @ 14b4d68a0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsCharIdCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// NewProp_IsCharEquipTypeCheckable_SetBit @ 14b4d68b0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsCharEquipTypeCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe0) = 1;
  return;
}

// NewProp_IsSeasonGroupCheckable_SetBit @ 14b4d68c0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsSeasonGroupCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf8) = 1;
  return;
}

// NewProp_IsShowAll_SetBit @ 14b4d68d0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsShowAll_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf9) = 1;
  return;
}

// NewProp_ItemRepairCheckable_SetBit @ 14b4d6920

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_ItemRepairCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  return;
}

// NewProp_ItemDurabilityCheckable_SetBit @ 14b4d6930

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_ItemDurabilityCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x128) = 1;
  return;
}

// NewProp_IsItemEnchantCheckable_SetBit @ 14b4d6940

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewProp_IsItemEnchantCheckable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// NewProp_IsItemEnchantScrollCheckable_SetBit @ 14b4d6950

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::
NewProp_IsItemEnchantScrollCheckable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x158) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14b4d6960

void * __thiscall
FDS_ItemRestoreTableRow::_scalar_deleting_destructor_(FDS_ItemRestoreTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IngredientItemValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_IngredientItem).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MoneyValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MoneyType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// NewStructOps @ 14b4d69e0

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemFilterTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemFilterTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemFilterTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemFilterTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemFilterTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14b4d6a20

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemRestoreTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemRestoreTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemRestoreTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemRestoreTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemRestoreTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemRestoreTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b4d6c40

void * __thiscall
FDS_ItemSetEffectGroupTableRow::_scalar_deleting_destructor_
          (FDS_ItemSetEffectGroupTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SetEffectRate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_SetEffect).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 14b4d6ca0

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemSetEffectGroupTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemSetEffectGroupTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemSetEffectGroupTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemSetEffectGroupTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemSetEffectGroupTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemSetEffectGroupTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b4d6d60

void * __thiscall
FDS_ItemGatherToolTableRow::_scalar_deleting_destructor_
          (FDS_ItemGatherToolTableRow *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewStructOps @ 14b4d6da0

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemGatherToolTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemGatherToolTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemGatherToolTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemGatherToolTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemGatherToolTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemGatherToolTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b4d6de0

void * __thiscall
FDS_ItemSetEffectTableRow::_scalar_deleting_destructor_
          (FDS_ItemSetEffectTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_Passive).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatusValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatusType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SetOptionType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SetCount).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// NewStructOps @ 14b4d6f90

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemSetEffectTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemSetEffectTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemSetEffectTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemSetEffectTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemSetEffectTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemSetEffectTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b4d7220

void * __thiscall
FDS_ItemGemSocketListTableRow::_scalar_deleting_destructor_
          (FDS_ItemGemSocketListTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RandomSocketRate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_RandomSocket).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_FixedSocket).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 14b4d72e0

void * __thiscall
FDS_ItemSetTableRow::_scalar_deleting_destructor_(FDS_ItemSetTableRow *this,uint param_1)

{
  ~FDS_ItemSetTableRow(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// NewStructOps @ 14b4d7320

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemGemSocketListTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemGemSocketListTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemGemSocketListTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemGemSocketListTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemGemSocketListTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemGemSocketListTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14b4d7360

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemSetTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemSetTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemSetTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemSetTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemSetTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemSetTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b4d7ef0

void * __thiscall
FDS_ItemSlotStateTableRow::_scalar_deleting_destructor_
          (FDS_ItemSlotStateTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DimmedDisplayType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// Z_Construct_UEnum_ProjectDS_EDS_ItemSlotStateType @ 14b4d7f50

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_ItemSlotStateType(void)

{
  if (Z_Registration_Info_UEnum_EDS_ItemSlotStateType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_ItemSlotStateType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_ItemSlotStateType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_ItemSlotStateType.InnerSingleton;
}

// NewProp_IsDefault_SetBit @ 14b4d7f90

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsDefault_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_IsEquip_SetBit @ 14b4d7fa0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsEquip_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_IsTrade_SetBit @ 14b4d7fb0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsTrade_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// NewProp_IsRegister_SetBit @ 14b4d7fc0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsRegister_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x23) = 1;
  return;
}

// NewProp_IsQuickSlotRegister_SetBit @ 14b4d8000

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsQuickSlotRegister_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_IsPeriod_SetBit @ 14b4d8040

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsPeriod_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// NewProp_IsLock_SetBit @ 14b4d8050

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsLock_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  return;
}

// NewProp_IsDiscard_SetBit @ 14b4d80a0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsDiscard_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x27) = 1;
  return;
}

// NewProp_IsRecommend_SetBit @ 14b4d80b0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsRecommend_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_IsRepair_SetBit @ 14b4d80c0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsRepair_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_IsDurability_SetBit @ 14b4d80d0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsDurability_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// NewProp_IsCoolDown_SetBit @ 14b4d80e0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsCoolDown_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  return;
}

// NewProp_IsNewSymbol_SetBit @ 14b4d80f0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsNewSymbol_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_IsDrag_SetBit @ 14b4d8100

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsDrag_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// NewProp_IsDetailTooltip_SetBit @ 14b4d8110

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsDetailTooltip_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewProp_IsDetailInfo_SetBit @ 14b4d8120

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsDetailInfo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return;
}

// NewProp_IsRemove_SetBit @ 14b4d81c0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsRemove_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_IsItemLevel_SetBit @ 14b4d81d0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsItemLevel_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_IsQuantity_SetBit @ 14b4d81e0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsQuantity_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return;
}

// NewProp_IsDimmed_SetBit @ 14b4d81f0

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsDimmed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  return;
}

// NewProp_IsSlotCountPerMax_SetBit @ 14b4d8200

void __cdecl
Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewProp_IsSlotCountPerMax_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4a) = 1;
  return;
}

// NewStructOps @ 14b4d8210

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemSlotStateTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemSlotStateTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemSlotStateTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemSlotStateTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemSlotStateTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b4d8290

void * __thiscall
FDS_ItemGemSocketTableRow::_scalar_deleting_destructor_
          (FDS_ItemGemSocketTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BonusItemType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EquipItemType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// NewStructOps @ 14b4d8300

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemGemSocketTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemGemSocketTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemGemSocketTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemGemSocketTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemGemSocketTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemGemSocketTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EDS_ItemSlotStateType_StaticEnum @ 14b4d83e0

UEnum * __cdecl EDS_ItemSlotStateType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemSlotStateType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemSlotStateType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemSlotStateType,(UObject *)pUVar1,
                       L"EDS_ItemSlotStateType");
  }
  return Z_Registration_Info_UEnum_EDS_ItemSlotStateType.OuterSingleton;
}

// EDS_ItemType_StaticEnum @ 14b4d84b0

UEnum * __cdecl EDS_ItemType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemType,(UObject *)pUVar1,L"EDS_ItemType");
  }
  return Z_Registration_Info_UEnum_EDS_ItemType.OuterSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_ItemInvenPriorityType @ 14b4d85b0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_ItemInvenPriorityType(void)

{
  if (Z_Registration_Info_UEnum_EDS_ItemInvenPriorityType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_ItemInvenPriorityType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_ItemInvenPriorityType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_ItemInvenPriorityType.InnerSingleton;
}

// Z_Construct_UClass_UDS_ItemLinkTextDecoratorObject @ 14b4d85f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_ItemLinkTextDecoratorObject(void)

{
  if (Z_Registration_Info_UClass_UDS_ItemLinkTextDecoratorObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_ItemLinkTextDecoratorObject.OuterSingleton,
               &Z_Construct_UClass_UDS_ItemLinkTextDecoratorObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_ItemLinkTextDecoratorObject.OuterSingleton;
}

// EDS_ItemInvenPriorityType_StaticEnum @ 14b4d8630

UEnum * __cdecl EDS_ItemInvenPriorityType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemInvenPriorityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemInvenPriorityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemInvenPriorityType,(UObject *)pUVar1,
                       L"EDS_ItemInvenPriorityType");
  }
  return Z_Registration_Info_UEnum_EDS_ItemInvenPriorityType.OuterSingleton;
}

// EDS_ItemMainType_StaticEnum @ 14b4d8670

UEnum * __cdecl EDS_ItemMainType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemMainType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemMainType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemMainType,(UObject *)pUVar1,
                       L"EDS_ItemMainType");
  }
  return Z_Registration_Info_UEnum_EDS_ItemMainType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b4d86f0

void * __thiscall
FDS_ItemInventoryPriorityTableRow::_scalar_deleting_destructor_
          (FDS_ItemInventoryPriorityTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->InventoryPriorityType02).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InventoryPriorityType01).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 14b4d8750

void * __cdecl
Z_Construct_UScriptStruct_FDS_ItemInventoryPriorityTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemInventoryPriorityTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemInventoryPriorityTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemInventoryPriorityTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemInventoryPriorityTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemInventoryPriorityTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_ProjectDS_EDS_ItemNameTagStyle @ 14b4d8790

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_ItemNameTagStyle(void)

{
  if (Z_Registration_Info_UEnum_EDS_ItemNameTagStyle.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_ItemNameTagStyle.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_ItemNameTagStyle_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_ItemNameTagStyle.InnerSingleton;
}

// EDS_ItemNameTagStyle_StaticEnum @ 14b4d87d0

UEnum * __cdecl EDS_ItemNameTagStyle_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemNameTagStyle.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemNameTagStyle.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemNameTagStyle,(UObject *)pUVar1,
                       L"EDS_ItemNameTagStyle");
  }
  return Z_Registration_Info_UEnum_EDS_ItemNameTagStyle.OuterSingleton;
}

// EDS_ItemOptionAffixType_StaticEnum @ 14b4d8810

UEnum * __cdecl EDS_ItemOptionAffixType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemOptionAffixType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemOptionAffixType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemOptionAffixType,(UObject *)pUVar1,
                       L"EDS_ItemOptionAffixType");
  }
  return Z_Registration_Info_UEnum_EDS_ItemOptionAffixType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b4d8890

void * __thiscall
FDS_ItemPassiveGroupTableRow::_scalar_deleting_destructor_
          (FDS_ItemPassiveGroupTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SkillPassiveRate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_SkillPassive).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 14b4d88f0

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemPassiveGroupTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemPassiveGroupTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemPassiveGroupTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemPassiveGroupTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemPassiveGroupTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemPassiveGroupTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b4d8970

void * __thiscall
FDS_ItemPrefixGroupTableRow::_scalar_deleting_destructor_
          (FDS_ItemPrefixGroupTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrefixRate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_Prefix).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 14b4d89d0

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemPrefixGroupTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemPrefixGroupTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemPrefixGroupTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemPrefixGroupTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemPrefixGroupTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemPrefixGroupTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b4d8d10

void * __thiscall
FDS_ItemPrefixTableRow::_scalar_deleting_destructor_(FDS_ItemPrefixTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->StatusValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatusType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewStructOps @ 14b4d8d70

void * __cdecl Z_Construct_UScriptStruct_FDS_ItemPrefixTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ItemPrefixTableRow,&UE::CoreUObject::Private::Construct<FDS_ItemPrefixTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ItemPrefixTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ItemPrefixTableRow>,&UE::CoreUObject::Private::Copy<FDS_ItemPrefixTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDS_ItemRepairEvent @ 14b4d8e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_ItemRepairEvent(void)

{
  if (Z_Registration_Info_UClass_UDS_ItemRepairEvent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_ItemRepairEvent.OuterSingleton,
               &Z_Construct_UClass_UDS_ItemRepairEvent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_ItemRepairEvent.OuterSingleton;
}

// InternalConstructor<UDS_ItemLinkTextDecoratorObject> @ 14b4d8ed0

void __cdecl InternalConstructor<UDS_ItemLinkTextDecoratorObject>(FObjectInitializer *param_1)

{
  URichTextBlockDecorator *this;
  
  this = (URichTextBlockDecorator *)param_1->Obj;
  if (this != (URichTextBlockDecorator *)0x0) {
    URichTextBlockDecorator::URichTextBlockDecorator(this,param_1);
    *(undefined ***)this = &___7UDS_ItemLinkTextDecoratorObject__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UDS_ItemRepairEvent> @ 14b4d8f10

void __cdecl InternalConstructor<UDS_ItemRepairEvent>(FObjectInitializer *param_1)

{
  UDS_EventBase *this;
  
  this = (UDS_EventBase *)param_1->Obj;
  if (this != (UDS_EventBase *)0x0) {
    UDS_EventBase::UDS_EventBase(this,param_1);
    *(undefined ***)this = &___7UDS_ItemRepairEvent__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined8 *)&this[2].field_0x10 = 2;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDS_ItemLinkTextDecoratorObject> @ 14b4d8f70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDS_ItemLinkTextDecoratorObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_ItemLinkTextDecoratorObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    URichTextBlockDecorator::URichTextBlockDecorator((URichTextBlockDecorator *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDS_ItemLinkTextDecoratorObject__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_ItemRepairEvent> @ 14b4d9020

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_ItemRepairEvent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_ItemRepairEvent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UDS_EventBase::UDS_EventBase((UDS_EventBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDS_ItemRepairEvent__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 2;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeShared<FDS_ItemLinkTextDecorator,1,URichTextBlock_*_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_&> @ 14b4d9100

TSharedRef<FDS_ItemLinkTextDecorator,1> * __cdecl
MakeShared<FDS_ItemLinkTextDecorator,1,URichTextBlock_*_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_&>
          (TSharedRef<FDS_ItemLinkTextDecorator,1> *__return_storage_ptr__,URichTextBlock **param_1,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_2)

{
  URichTextBlock *pUVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FDS_ItemLinkTextDecorator,1> *pTVar5;
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
    __return_storage_ptr__->Object = (FDS_ItemLinkTextDecorator *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_ItemLinkTextDecorator___00_SharedPointerInternals__6B_
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
    pTVar4[1]._padding_ = (longlong)&___7FDS_ItemLinkTextDecorator__6B_;
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
    __return_storage_ptr__->Object = (FDS_ItemLinkTextDecorator *)(pTVar4 + 1);
    if ((FDS_ItemLinkTextDecorator *)(pTVar4 + 1) == (FDS_ItemLinkTextDecorator *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FDS_ItemLinkTextDecorator,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// StaticEnum<enum_EDS_ItemInvenPriorityType> @ 14b4d9310

UEnum * __cdecl StaticEnum<enum_EDS_ItemInvenPriorityType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemInvenPriorityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemInvenPriorityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemInvenPriorityType,(UObject *)pUVar1,
                       L"EDS_ItemInvenPriorityType");
  }
  return Z_Registration_Info_UEnum_EDS_ItemInvenPriorityType.OuterSingleton;
}

// StaticEnum<enum_EDS_ItemMainType> @ 14b4d9350

UEnum * __cdecl StaticEnum<enum_EDS_ItemMainType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemMainType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemMainType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemMainType,(UObject *)pUVar1,
                       L"EDS_ItemMainType");
  }
  return Z_Registration_Info_UEnum_EDS_ItemMainType.OuterSingleton;
}

// StaticEnum<enum_EDS_ItemNameTagStyle> @ 14b4d9390

UEnum * __cdecl StaticEnum<enum_EDS_ItemNameTagStyle>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemNameTagStyle.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemNameTagStyle.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemNameTagStyle,(UObject *)pUVar1,
                       L"EDS_ItemNameTagStyle");
  }
  return Z_Registration_Info_UEnum_EDS_ItemNameTagStyle.OuterSingleton;
}

// StaticEnum<enum_EDS_ItemOptionAffixType> @ 14b4d93d0

UEnum * __cdecl StaticEnum<enum_EDS_ItemOptionAffixType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemOptionAffixType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemOptionAffixType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemOptionAffixType,(UObject *)pUVar1,
                       L"EDS_ItemOptionAffixType");
  }
  return Z_Registration_Info_UEnum_EDS_ItemOptionAffixType.OuterSingleton;
}

// StaticEnum<enum_EDS_ItemSlotStateType> @ 14b4d9410

UEnum * __cdecl StaticEnum<enum_EDS_ItemSlotStateType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemSlotStateType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemSlotStateType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemSlotStateType,(UObject *)pUVar1,
                       L"EDS_ItemSlotStateType");
  }
  return Z_Registration_Info_UEnum_EDS_ItemSlotStateType.OuterSingleton;
}

// StaticEnum<enum_EDS_ItemType> @ 14b4d9450

UEnum * __cdecl StaticEnum<enum_EDS_ItemType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ItemType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemType,(UObject *)pUVar1,L"EDS_ItemType");
  }
  return Z_Registration_Info_UEnum_EDS_ItemType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b4da0c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ItemLinkTextDecoratorObject,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,URichTextBlock_*,TObjectPtr<UDS_ItemData>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ItemLinkTextDecoratorObject,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,URichTextBlock_*,TObjectPtr<UDS_ItemData>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4da0f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ItemLinkTextDecorator,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDS_ItemLinkTextDecorator,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4da130

void * __thiscall
FDS_ItemLinkTextDecorator::_scalar_deleting_destructor_
          (FDS_ItemLinkTextDecorator *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b4da1a0

void * __thiscall
UDS_ItemLinkTextDecoratorObject::_scalar_deleting_destructor_
          (UDS_ItemLinkTextDecoratorObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDS_ItemLinkTextDecoratorObject__6B_;
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

// `scalar_deleting_destructor' @ 14b4da200

void * __thiscall
UDS_ItemRepairEvent::_scalar_deleting_destructor_(UDS_ItemRepairEvent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ItemRepairEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnReceiveRestoreCancelResult).Delegate.field_0x8,
             *(int *)&(this->OnReceiveRestoreCancelResult).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnReceiveRestoreCancelResult).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReceiveRestoreCancelResult);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnReceivedRegisterRestoreWaitCompleteResult).Delegate.field_0x8,
             *(int *)&(this->OnReceivedRegisterRestoreWaitCompleteResult).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnReceivedRegisterRestoreWaitCompleteResult).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReceivedRegisterRestoreWaitCompleteResult);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemFilterTableRow @ 14b4da6a0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemFilterTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemGatherToolTableRow @ 14b4da6b0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemGatherToolTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemGemSocketListTableRow @ 14b4da6c0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemGemSocketListTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemGemSocketTableRow @ 14b4da6d0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemGemSocketTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemInvenPriorityType @ 14b4da6e0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemInvenPriorityType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemInventoryPriorityTableRow @ 14b4da6f0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemInventoryPriorityTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemLinkTextDecorator @ 14b4da700

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemLinkTextDecorator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemMainType @ 14b4da710

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemMainType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemNameTagStyle @ 14b4da720

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemNameTagStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemOptionAffixType @ 14b4da730

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemOptionAffixType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemPassiveGroupTableRow @ 14b4da740

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemPassiveGroupTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemPrefixGroupTableRow @ 14b4da750

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemPrefixGroupTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemPrefixTableRow @ 14b4da760

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemPrefixTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemRepairEvent @ 14b4da770

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemRepairEvent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemRepairTableRow @ 14b4da780

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemRepairTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemRestoreTableRow @ 14b4da790

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemRestoreTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemSetEffectGroupTableRow @ 14b4da7a0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemSetEffectGroupTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemSetEffectTableRow @ 14b4da7b0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemSetEffectTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemSetTableRow @ 14b4da7c0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemSetTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemSlotStateTableRow @ 14b4da7d0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemSlotStateTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemSlotStateType @ 14b4da7e0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemSlotStateType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ItemType @ 14b4da7f0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ItemType(void)

{
  return;
}

// Z_Construct_UClass_UDS_ItemLinkTextDecoratorObject_NoRegister @ 14b4dac40

UClass * __cdecl Z_Construct_UClass_UDS_ItemLinkTextDecoratorObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemLinkTextDecoratorObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemLinkTextDecoratorObject",
               &Z_Registration_Info_UClass_UDS_ItemLinkTextDecoratorObject.InnerSingleton,
               UDS_ItemLinkTextDecoratorObject::StaticRegisterNativesUDS_ItemLinkTextDecoratorObject
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ItemLinkTextDecoratorObject>,
               InternalVTableHelperCtorCaller<UDS_ItemLinkTextDecoratorObject>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemLinkTextDecoratorObject.InnerSingleton;
}

// Z_Construct_UClass_UDS_ItemRepairEvent_NoRegister @ 14b4dad00

UClass * __cdecl Z_Construct_UClass_UDS_ItemRepairEvent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemRepairEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemRepairEvent",
               &Z_Registration_Info_UClass_UDS_ItemRepairEvent.InnerSingleton,
               UDS_ItemRepairEvent::StaticRegisterNativesUDS_ItemRepairEvent,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ItemRepairEvent>,
               InternalVTableHelperCtorCaller<UDS_ItemRepairEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemRepairEvent.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_ItemMainType @ 14b4dadc0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_ItemMainType(void)

{
  if (Z_Registration_Info_UEnum_EDS_ItemMainType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_ItemMainType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_ItemMainType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_ItemMainType.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_ItemOptionAffixType @ 14b4dae00

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_ItemOptionAffixType(void)

{
  if (Z_Registration_Info_UEnum_EDS_ItemOptionAffixType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_ItemOptionAffixType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_ItemOptionAffixType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_ItemOptionAffixType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDS_ItemFilterTableRow @ 14b4dae40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemFilterTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemFilterTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemFilterTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemFilterTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemFilterTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemFilterTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemGatherToolTableRow @ 14b4daec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemGatherToolTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemGatherToolTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemGatherToolTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemGatherToolTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemGatherToolTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemGatherToolTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemGemSocketListTableRow @ 14b4daf40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemGemSocketListTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemGemSocketListTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemGemSocketListTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemGemSocketListTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemGemSocketListTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemGemSocketListTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemGemSocketTableRow @ 14b4dafc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemGemSocketTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemGemSocketTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemGemSocketTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemGemSocketTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemGemSocketTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemGemSocketTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemInventoryPriorityTableRow @ 14b4db040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemInventoryPriorityTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemInventoryPriorityTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemInventoryPriorityTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemInventoryPriorityTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemInventoryPriorityTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemInventoryPriorityTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemPassiveGroupTableRow @ 14b4db0c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemPassiveGroupTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemPassiveGroupTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemPassiveGroupTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemPassiveGroupTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemPassiveGroupTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemPassiveGroupTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemPrefixGroupTableRow @ 14b4db140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemPrefixGroupTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemPrefixGroupTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemPrefixGroupTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemPrefixGroupTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemPrefixGroupTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemPrefixGroupTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemPrefixTableRow @ 14b4db1c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemPrefixTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemPrefixTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemPrefixTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemPrefixTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemPrefixTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemPrefixTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemRepairTableRow @ 14b4db240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemRepairTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemRepairTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemRepairTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemRepairTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemRepairTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemRepairTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemRestoreTableRow @ 14b4db2c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemRestoreTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemRestoreTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemRestoreTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemRestoreTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemRestoreTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemRestoreTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemSetEffectGroupTableRow @ 14b4db340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemSetEffectGroupTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemSetEffectGroupTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemSetEffectGroupTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemSetEffectGroupTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemSetEffectGroupTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemSetEffectGroupTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemSetEffectTableRow @ 14b4db3c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemSetEffectTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemSetEffectTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemSetEffectTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemSetEffectTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemSetEffectTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemSetEffectTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemSetTableRow @ 14b4db440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemSetTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemSetTableRow.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemSetTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemSetTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemSetTableRow.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDS_ItemSetTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow @ 14b4db4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemSlotStateTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ItemSlotStateTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ItemSlotStateTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ItemSlotStateTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ItemSlotStateTableRow.InnerSingleton;
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

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 150434300

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

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 150434320

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

