// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 220

// Bit'' @ 14127a990

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::Bit__(void)

{
  FWidgetStateBitfield::FWidgetStateBitfield(&UWidgetLockedStateRegistration::Bit);
  return;
}

// Empty'' @ 14127a9b0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__);
  return;
}

// Empty'' @ 14127a9e0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  FDS_Urls::FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__);
  return;
}

// Empty'' @ 14127aa10

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_PartyRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_PartyRepo>::Empty__);
  return;
}

// Empty'' @ 14127aa30

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__);
  return;
}

// PathSeparator'' @ 14127aa50

void __cdecl `dynamic_initializer_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ::FString::FString(&FControlRigOverrideValue::PathSeparator,L"->");
  atexit(`dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__);
  return;
}

// RootNodeID'' @ 14127aa80

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// StateName'' @ 14127aab0

void __cdecl `dynamic_initializer_for_'UWidgetDisabledStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetDisabledStateRegistration::StateName,"Disabled");
  return;
}

// StateName'' @ 14127aad0

void __cdecl `dynamic_initializer_for_'UWidgetHoveredStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetHoveredStateRegistration::StateName,"Hovered");
  return;
}

// StateName'' @ 14127aaf0

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetLockedStateRegistration::StateName,"Locked");
  return;
}

// StateName'' @ 14127ab10

void __cdecl `dynamic_initializer_for_'UWidgetPressedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetPressedStateRegistration::StateName,"Pressed");
  return;
}

// StateName'' @ 14127ab30

void __cdecl `dynamic_initializer_for_'UWidgetSelectedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetSelectedStateRegistration::StateName,"Selected");
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 14127ab50

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 14127ab70

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__BoolArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,BoolArrayType);
  BoolArrayTypeName.LiteralType = None;
  BoolArrayTypeName.Number = (*pFVar1).Number;
  BoolArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'BoolTypeName'' @ 14127abc0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__BoolTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,BoolType);
  BoolTypeName.LiteralType = None;
  BoolTypeName.Number = (*pFVar1).Number;
  BoolTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 14127ac10

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 14127ac30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 14127ac50

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 14127ac70

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 14127ac90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 14127acb0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 14127acd0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 14127acf0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 14127ad10

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 14127ad30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 14127ad50

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 14127ad70

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 14127ad90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 14127adb0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 14127add0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 14127adf0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 14127ae10

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 14127ae30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CONTENTSTAB_BUILDER_KEY'' @ 14127ae50

void __cdecl _dynamic_initializer_for__CONTENTSTAB_BUILDER_KEY__(void)

{
  FName::FName(&CONTENTSTAB_BUILDER_KEY,L"EDS_ContentsTabFrameType");
  return;
}

// `dynamic_initializer_for_'CONTENTS_BUILDER_KEY'' @ 14127ae70

void __cdecl _dynamic_initializer_for__CONTENTS_BUILDER_KEY__(void)

{
  FName::FName(&CONTENTS_BUILDER_KEY,L"EDS_WindowWidget");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 14127ae90

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 14127aeb0

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

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 14127af30

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__DoubleArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,DoubleArrayType);
  DoubleArrayTypeName.LiteralType = None;
  DoubleArrayTypeName.Number = (*pFVar1).Number;
  DoubleArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'DoubleTypeName'' @ 14127af80

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__DoubleTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,DoubleType);
  DoubleTypeName.LiteralType = None;
  DoubleTypeName.Number = (*pFVar1).Number;
  DoubleTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 14127afd0

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

// `dynamic_initializer_for_'ErrorNamespace'' @ 14127b050

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 14127b080

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FNameArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FNameArrayType);
  FNameArrayTypeName.LiteralType = None;
  FNameArrayTypeName.Number = (*pFVar1).Number;
  FNameArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FNameTypeName'' @ 14127b0d0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FNameTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FNameType);
  FNameTypeName.LiteralType = None;
  FNameTypeName.Number = (*pFVar1).Number;
  FNameTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 14127b120

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FStringArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FStringArrayType);
  FStringArrayTypeName.LiteralType = None;
  FStringArrayTypeName.Number = (*pFVar1).Number;
  FStringArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FStringTypeName'' @ 14127b170

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FStringTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FStringType);
  FStringTypeName.LiteralType = None;
  FStringTypeName.Number = (*pFVar1).Number;
  FStringTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FTextTypeName'' @ 14127b1c0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FTextTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FTextType);
  FTextTypeName.LiteralType = None;
  FTextTypeName.Number = (*pFVar1).Number;
  FTextTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 14127b210

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FloatArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FloatArrayType);
  FloatArrayTypeName.LiteralType = None;
  FloatArrayTypeName.Number = (*pFVar1).Number;
  FloatArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'FloatTypeName'' @ 14127b260

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__FloatTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,FloatType);
  FloatTypeName.LiteralType = None;
  FloatTypeName.Number = (*pFVar1).Number;
  FloatTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 14127b2b0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 14127b2d0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__Int32ArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,Int32ArrayType);
  Int32ArrayTypeName.LiteralType = None;
  Int32ArrayTypeName.Number = (*pFVar1).Number;
  Int32ArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'Int32TypeName'' @ 14127b320

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__Int32TypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,Int32Type);
  Int32TypeName.LiteralType = None;
  Int32TypeName.Number = (*pFVar1).Number;
  Int32TypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'Int64TypeName'' @ 14127b370

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__Int64TypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,Int64Type);
  Int64TypeName.LiteralType = None;
  Int64TypeName.Number = (*pFVar1).Number;
  Int64TypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'IntTypeName'' @ 14127b3c0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__IntTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,IntType);
  IntTypeName.LiteralType = None;
  IntTypeName.Number = (*pFVar1).Number;
  IntTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 14127b410

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 14127b430

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 14127b450

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 14127b470

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 14127b490

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 14127b4b0

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 14127b4d0

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 14127b4f0

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 14127b510

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 14127b530

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 14127b550

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'NPCFUNCTION_BUILDER_KEY'' @ 14127b570

void __cdecl _dynamic_initializer_for__NPCFUNCTION_BUILDER_KEY__(void)

{
  FName::FName(&NPCFUNCTION_BUILDER_KEY,L"EDS_InteractionFunctionType");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 14127b590

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 14127b5b0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 14127b5d0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 14127b5f0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 14127b610

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 14127b630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PersistentData_Access__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PersistentData_Access ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PersistentData_Access>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PersistentData_Access");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PersistentData_Access,*pFVar1,
               L"Persistent Data Access","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 14127b6c0

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

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 14127b750

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__UInt32ArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,UInt32ArrayType);
  UInt32ArrayTypeName.LiteralType = None;
  UInt32ArrayTypeName.Number = (*pFVar1).Number;
  UInt32ArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'UInt32TypeName'' @ 14127b7a0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__UInt32TypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,UInt32Type);
  UInt32TypeName.LiteralType = None;
  UInt32TypeName.Number = (*pFVar1).Number;
  UInt32TypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'UInt64TypeName'' @ 14127b7f0

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__UInt64TypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,UInt64Type);
  UInt64TypeName.LiteralType = None;
  UInt64TypeName.Number = (*pFVar1).Number;
  UInt64TypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 14127b840

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__UInt8ArrayTypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,UInt8ArrayType);
  UInt8ArrayTypeName.LiteralType = None;
  UInt8ArrayTypeName.Number = (*pFVar1).Number;
  UInt8ArrayTypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'UInt8TypeName'' @ 14127b890

void __cdecl RigVMTypeUtils::_dynamic_initializer_for__UInt8TypeName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,UInt8Type);
  UInt8TypeName.LiteralType = None;
  UInt8TypeName.Number = (*pFVar1).Number;
  UInt8TypeName.Either.PackedName = (ulonglong)*pFVar1 & 0xffffffff | 0x8000000000000000;
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 14127b8e0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'sProtoMessageTypeResolver'' @ 14127b900

void __cdecl _dynamic_initializer_for__sProtoMessageTypeResolver__(void)

{
  atexit(_dynamic_atexit_destructor_for__sProtoMessageTypeResolver__);
  return;
}

// ConstructItems<FDS_NotificationData,FDS_NotificationData,int> @ 14bae12d0

void __cdecl
ConstructItems<FDS_NotificationData,FDS_NotificationData,int>
          (void *param_1,FDS_NotificationData *param_2,int param_3)

{
  EDS_StringTableType *pEVar1;
  undefined4 uVar2;
  FDS_TextFormatArg *pFVar3;
  long64 *plVar4;
  EDS_StringTableType *pEVar5;
  
  if (param_3 != 0) {
    plVar4 = &(param_2->NotificationText).StringTableID;
    pEVar5 = (EDS_StringTableType *)((longlong)param_1 + 8);
    do {
      *(undefined1 *)((longlong)plVar4 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           *(undefined1 *)(plVar4 + -2);
      *pEVar5 = ((FDS_Text *)(plVar4 + -1))->StringTableType;
      *(long64 *)(pEVar5 + 8) = *plVar4;
      *(FName *)(pEVar5 + 0x10) = *(FName *)(plVar4 + 1);
      *(long64 *)(pEVar5 + 0x18) = ((FDateTime *)(plVar4 + 2))->Ticks;
      *(long64 *)(pEVar5 + 0x20) = ((FTimespan *)(plVar4 + 3))->Ticks;
      *(EDS_TimeExpression *)(pEVar5 + 0x28) = *(EDS_TimeExpression *)(plVar4 + 4);
      pEVar5[0x2c] = *(bool *)((longlong)plVar4 + 0x24);
      FString::FString((FString *)(pEVar5 + 0x30),(FString *)(plVar4 + 5));
      pEVar5[0x40] = None;
      pEVar5[0x41] = None;
      pEVar5[0x42] = None;
      pEVar5[0x43] = None;
      pEVar5[0x44] = None;
      pEVar5[0x45] = None;
      pEVar5[0x46] = None;
      pEVar5[0x47] = None;
      uVar2 = *(undefined4 *)(plVar4 + 8);
      pEVar1 = pEVar5 + 0x4c;
      pFVar3 = (FDS_TextFormatArg *)
               (((TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)(plVar4 + 7))->
               AllocatorInstance).Data;
      *(undefined4 *)(pEVar5 + 0x48) = uVar2;
      if (uVar2 == None) {
        pEVar1[0] = None;
        pEVar1[1] = None;
        pEVar1[2] = None;
        pEVar1[3] = None;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar2,0,(ForAnyElementType *)(pEVar5 + 0x40),uVar2,(int *)pEVar1);
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                  (((ForAnyElementType *)(pEVar5 + 0x40))->Data,pFVar3,uVar2);
      }
      pEVar5 = pEVar5 + 0x58;
      plVar4 = plVar4 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FDS_ProjectileSkillAttackInfo,FDS_ProjectileSkillAttackInfo,int> @ 14bae13f0

void __cdecl
ConstructItems<FDS_ProjectileSkillAttackInfo,FDS_ProjectileSkillAttackInfo,int>
          (void *param_1,FDS_ProjectileSkillAttackInfo *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  FScriptContainerElement *_Src_00;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x70);
    piVar6 = &(param_2->TargetInfoArray).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar5 + -6);
      *(char *)((longlong)piVar6 + (longlong)param_1 + (-0x70 - (longlong)param_2)) =
           (char)piVar6[-0x1c];
      *(undefined1 *)((longlong)piVar5 + -0x6f) = *(undefined1 *)((longlong)piVar6 + -0x6f);
      piVar5[-0x1b] = piVar6[-0x1b];
      *(undefined8 *)(piVar5 + -0x1a) = *(undefined8 *)(piVar6 + -0x1a);
      *(undefined8 *)(piVar5 + -0x18) = *(undefined8 *)(piVar6 + -0x18);
      uVar4 = *(undefined8 *)(piVar6 + -0x14);
      *(undefined8 *)(piVar5 + -0x16) = *(undefined8 *)(piVar6 + -0x16);
      *(undefined8 *)(piVar5 + -0x14) = uVar4;
      *(undefined8 *)(piVar5 + -0x12) = *(undefined8 *)(piVar6 + -0x12);
      uVar4 = *(undefined8 *)(piVar6 + -0xe);
      *(undefined8 *)(piVar5 + -0x10) = *(undefined8 *)(piVar6 + -0x10);
      *(undefined8 *)(piVar5 + -0xe) = uVar4;
      *(undefined8 *)(piVar5 + -0xc) = *(undefined8 *)(piVar6 + -0xc);
      piVar5[-10] = piVar6[-10];
      *(undefined8 *)(piVar5 + -8) = *(undefined8 *)(piVar6 + -8);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar6[-4];
      _Src = *(void **)(piVar6 + -6);
      piVar5[-4] = iVar3;
      if (iVar3 == 0) {
        piVar5[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf0,0x10,iVar3,0,pFVar1,iVar3,piVar5 + -3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 0xf0);
      }
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      iVar3 = *piVar6;
      _Src_00 = (((TArray<FDS_ProjectileTargetInfo,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
                AllocatorInstance).Data;
      *piVar5 = iVar3;
      if (iVar3 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,iVar3,0,(ForAnyElementType *)(piVar5 + -2),iVar3,piVar5 + 1);
        memcpy(((ForAnyElementType *)(piVar5 + -2))->Data,_Src_00,(longlong)iVar3 << 7);
      }
      piVar2 = piVar6 + 2;
      piVar6 = piVar6 + 0x20;
      *(undefined8 *)(piVar5 + 2) = *(undefined8 *)piVar2;
      piVar5 = piVar5 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FDS_RaidPartySimpleInfo,FDS_RaidPartySimpleInfo,int> @ 14bae1580

void __cdecl
ConstructItems<FDS_RaidPartySimpleInfo,FDS_RaidPartySimpleInfo,int>
          (void *param_1,FDS_RaidPartySimpleInfo *param_2,int param_3)

{
  bool *pbVar1;
  int *this;
  FString *pFVar2;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 0x10);
    pFVar2 = &param_2->PartyName;
    do {
      (((FString *)(this + -4))->Data).AllocatorInstance.Data =
           *(FScriptContainerElement **)
            ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)this);
      this[-2] = ((FDS_RaidPartySimpleInfo *)(pFVar2 + -1))->DungeonId;
      FString::FString((FString *)this,pFVar2);
      *(bool *)&(((FString *)(this + 4))->Data).AllocatorInstance.Data = *(bool *)(pFVar2 + 1);
      *(long64 *)(this + 6) = *(long64 *)((longlong)(pFVar2 + 1) + 8);
      FString::FString((FString *)(this + 8),pFVar2 + 2);
      *(bool *)&(((FString *)(this + 0xc))->Data).AllocatorInstance.Data = *(bool *)(pFVar2 + 3);
      pbVar1 = (bool *)(pFVar2 + 3);
      pFVar2 = (FString *)((longlong)(pFVar2 + 4) + 8);
      this[0xd] = *(int *)(pbVar1 + 4);
      this = this + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FDS_ServerMessage,FDS_ServerMessage,int> @ 14bae1620

void __cdecl
ConstructItems<FDS_ServerMessage,FDS_ServerMessage,int>
          (void *param_1,FDS_ServerMessage *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  FSharedReferencer<1> *pFVar3;
  
  if (param_3 != 0) {
    pFVar3 = &(param_2->Msg).SharedReferenceCount;
    plVar2 = (longlong *)((longlong)param_1 + 0x10);
    do {
      *(undefined1 *)(plVar2 + -2) =
           *(undefined1 *)((longlong)plVar2 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      plVar2[-1] = (longlong)((TSharedPtr<google::protobuf::Message,1> *)(pFVar3 + -1))->Object;
      pTVar1 = pFVar3->ReferenceController;
      *plVar2 = (longlong)pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar3 = pFVar3 + 3;
      plVar2 = plVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DS_JsonStringToProtoMessage<mail::MailCategoryListResponse> @ 14bae1e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
DS_JsonStringToProtoMessage<mail::MailCategoryListResponse>
          (MailCategoryListResponse *param_1,FString *param_2)

{
  uint uVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined1 uVar4;
  bool bVar5;
  basic_string_view<char,std::char_traits<char>_> *pbVar6;
  uchar *puVar7;
  size_t sVar8;
  undefined8 uVar9;
  ulong64 uVar10;
  wchar_t *_Str;
  uint uVar11;
  undefined1 auStackY_228 [32];
  TypeResolver local_1f0;
  basic_string_view<char,std::char_traits<char>_> local_1e8;
  StringOutputStream local_1d8;
  basic_string_view<char,std::char_traits<char>_> local_1c8;
  ArrayInputStream local_1b8;
  _Bxty local_198;
  ulong64 local_188;
  ulonglong local_180;
  _Bxty local_178;
  undefined8 local_168;
  ulonglong uStack_160;
  _Bxty local_158;
  ulonglong local_140;
  FScriptContainerElement local_138 [128];
  ForAnyElementType local_b8;
  FScriptContainerElement *local_b0;
  int local_a8;
  AlphaNum local_98;
  AlphaNum local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pbVar6 = google::protobuf::MessageLite::GetTypeName((MessageLite *)param_1,&local_1c8);
  local_68.piece_._Mydata = pbVar6->_Mydata;
  local_68.piece_._Mysize = pbVar6->_Mysize;
  local_98.piece_._Mysize = 0x14;
  local_98.piece_._Mydata = "type.googleapis.com/";
  absl::lts_20240722::StrCat
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_158,&local_98
             ,&local_68);
  local_b8.Data = (FScriptContainerElement *)0x0;
  if ((param_2->Data).ArrayNum == 0) {
    _Str = L"";
LAB_14bae1f18:
    sVar8 = wcslen(_Str);
    local_a8 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar8);
    uVar1 = local_a8 + 1;
    uVar11 = uVar1;
    if (uVar1 < 0x81) {
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_14bae1f62;
      }
    }
    else {
LAB_14bae1f62:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,uVar11,1);
    }
    local_b0 = local_138;
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      local_b0 = local_b8.Data;
    }
    puVar7 = UE::Core::Private::Convert((uchar *)local_b0,uVar1,_Str,(int)sVar8 + 1);
    if ((puVar7 == (uchar *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    _Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_14bae1f18;
    local_b0 = (FScriptContainerElement *)0x0;
    local_a8 = 0;
  }
  pFVar3 = local_b0;
  local_178._Ptr = (char *)0x0;
  local_178._8_8_ = 0;
  local_168 = 0;
  uStack_160 = 0;
  sVar8 = strlen((char *)local_b0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_178,
             (char *)pFVar3,sVar8);
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  uVar9 = &local_178;
  if (0xf < uStack_160) {
    uVar9 = local_178._Ptr;
  }
  google::protobuf::io::ArrayInputStream::ArrayInputStream
            (&local_1b8,(void *)uVar9,(int)local_168,-1);
  local_188 = 0;
  local_198._8_8_ = 0;
  local_198._Ptr = (char *)0x0;
  local_180 = 0xf;
  google::protobuf::io::StringOutputStream::StringOutputStream
            (&local_1d8,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_198);
  google::protobuf::json::JsonToBinaryStream
            (&local_1f0,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             sProtoMessageTypeResolver._Mypair._Myval2,(ZeroCopyInputStream *)&local_158._Ptr,
             (ZeroCopyOutputStream *)&local_1b8,(ParseOptions *)&local_1d8);
  if (local_1f0 == (TypeResolver)0x1) {
    local_1e8._Mydata = (char *)&local_198;
    if (0xf < local_180) {
      local_1e8._Mydata = local_198._Ptr;
    }
    local_1e8._Mysize = local_188;
    bVar5 = google::protobuf::MessageLite::ParseFromString((MessageLite *)param_1,&local_1e8);
    if (((ulonglong)local_1f0 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_1f0);
    }
  }
  else {
    if (((ulonglong)local_1f0 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_1f0);
    }
    bVar5 = false;
  }
  local_1d8._padding_ = (longlong)google::protobuf::io::ZeroCopyOutputStream::vftable;
  if (0xf < local_180) {
    uVar10 = local_180 + 1;
    uVar9 = local_198._Ptr;
    if (0xfff < uVar10) {
      uVar9 = *(undefined8 *)(local_198._Ptr + -8);
      uVar10 = local_180 + 0x28;
      if ((char *)0x1f < local_198._Ptr + (-8 - uVar9)) goto LAB_14bae21aa;
    }
    operator_delete((void *)uVar9,uVar10);
  }
  local_188 = 0;
  local_180 = 0xf;
  local_198._Ptr = local_198._Ptr & 0xffffffffffffff00;
  if (0xf < uStack_160) {
    uVar10 = uStack_160 + 1;
    uVar9 = local_178._Ptr;
    if (0xfff < uVar10) {
      uVar9 = *(undefined8 *)(local_178._Ptr + -8);
      uVar10 = uStack_160 + 0x28;
      if ((char *)0x1f < local_178._Ptr + (-8 - uVar9)) goto LAB_14bae21aa;
    }
    operator_delete((void *)uVar9,uVar10);
  }
  local_178._Ptr = local_178._Ptr & 0xffffffffffffff00;
  local_168 = ___xmm_000000000000000f0000000000000000;
  uStack_160 = _UNK_15076add8;
  if (0xf < local_140) {
    uVar10 = local_140 + 1;
    uVar9 = local_158._Ptr;
    if (0xfff < uVar10) {
      uVar9 = *(undefined8 *)(local_158._Ptr + -8);
      uVar10 = local_140 + 0x28;
      if ((char *)0x1f < local_158._Ptr + (-8 - uVar9)) {
LAB_14bae21aa:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete((void *)uVar9,uVar10);
  }
  return bVar5;
}

// DefaultConstruct<client_msg::HeartbeatRequest> @ 14bae21f0

void * __cdecl
google::protobuf::Arena::DefaultConstruct<client_msg::HeartbeatRequest>(Arena *param_1)

{
  HeartbeatRequest *pHVar1;
  
  if (param_1 != (Arena *)0x0) {
    pHVar1 = Allocate(param_1,0x20);
    pHVar1 = client_msg::HeartbeatRequest::HeartbeatRequest(pHVar1,param_1);
    return pHVar1;
  }
  pHVar1 = ::operator_new(0x20);
  pHVar1 = client_msg::HeartbeatRequest::HeartbeatRequest(pHVar1,(Arena *)0x0);
  return pHVar1;
}

// DefaultConstruct<VectorF> @ 14bae2240

void * __cdecl google::protobuf::Arena::DefaultConstruct<VectorF>(Arena *param_1)

{
  VectorF *pVVar1;
  
  if (param_1 != (Arena *)0x0) {
    pVVar1 = Allocate(param_1,0x28);
    pVVar1 = VectorF::VectorF(pVVar1,param_1);
    return pVVar1;
  }
  pVVar1 = ::operator_new(0x28);
  pVVar1 = VectorF::VectorF(pVVar1,(Arena *)0x0);
  return pVVar1;
}

// DestructItems<FDS_RecieveInfoCond,int> @ 14bae2490

void __cdecl DestructItems<FDS_RecieveInfoCond,int>(FDS_RecieveInfoCond *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->FailDel;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this + -1);
      if (*(void **)&this[-1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this[-1].field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(this + -1));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this + -2);
      if (*(void **)&this[-2].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this[-2].field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(this + -2));
      this = this + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`UDS_QuestManager::SortQuestList'::__l2::<lambda_1>_>_> @ 14bae7c60

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_QuestManager::SortQuestList_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_void___cdecl_UDS_QuestManager::SortQuestList(TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<EDS_QuestSortType,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::<lambda_1>_>
          param_4)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar8 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_14bae7d67:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar8 = *param_1;
            iVar5 = 0;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = iVar8;
            if (1 < iVar6) {
              do {
                iVar9 = iVar5 * 2;
                iVar8 = iVar9 + 1;
                if (iVar9 + 2 < iVar6) {
                  bVar4 = `UDS_QuestManager::SortQuestList'::__l2::<lambda_1>::operator()
                                    (param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar8);
                  if (bVar4) {
                    iVar8 = iVar9;
                  }
                  iVar8 = iVar8 + 1;
                }
                piVar1 = param_1 + iVar8;
                piVar2 = param_1 + iVar5;
                bVar4 = `UDS_QuestManager::SortQuestList'::__l2::<lambda_1>::operator()
                                  (param_4.Predicate,piVar2,piVar1);
                if (!bVar4) break;
                iVar5 = *piVar2;
                *piVar2 = *piVar1;
                *piVar1 = iVar5;
                iVar5 = iVar8;
              } while (iVar8 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar8 + -2;
      iVar8 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      bVar4 = `UDS_QuestManager::SortQuestList'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,param_1 + (iVar6 + 2),param_1 + iVar7);
      if (bVar4) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    piVar1 = param_1 + iVar7;
    piVar2 = param_1 + iVar5;
    bVar4 = `UDS_QuestManager::SortQuestList'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,piVar2,piVar1);
    if (!bVar4) goto LAB_14bae7d67;
    iVar5 = *piVar2;
    *piVar2 = *piVar1;
    iVar6 = iVar7 * 2 + 1;
    *piVar1 = iVar5;
    iVar5 = iVar7;
  } while( true );
}

// HeapSortInternal<FDS_NotificationData,int,FIdentityFunctor,TDereferenceWrapper<FDS_NotificationData,`UDS_NotificationManager::RefreshNotificationArray'::__l2::<lambda_1>_>_> @ 14bae7e50

void __cdecl
AlgoImpl::
HeapSortInternal<FDS_NotificationData,int,FIdentityFunctor,TDereferenceWrapper<FDS_NotificationData,_UDS_NotificationManager::RefreshNotificationArray_::__l2::<lambda_1>_>_>
          (FDS_NotificationData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_NotificationData,_public:_void___cdecl_UDS_NotificationManager::RefreshNotificationArray(void)_::_2_::<lambda_1>_>
          param_4)

{
  FDS_NotificationData *pFVar1;
  long64 *plVar2;
  FDateTime *pFVar3;
  code *pcVar4;
  long64 lVar5;
  FName FVar6;
  long64 lVar7;
  long64 lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName FVar11;
  long64 lVar12;
  FScriptContainerElement *pFVar13;
  FDS_Text *pFVar14;
  undefined7 uVar15;
  EDS_StringTableType EVar16;
  undefined7 uVar17;
  undefined3 uVar18;
  int iVar19;
  EDS_NotificationType EVar20;
  undefined7 uVar21;
  EDS_StringTableType EVar22;
  undefined7 uVar23;
  EDS_TimeExpression EVar24;
  bool bVar25;
  undefined3 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  bool bVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  FDS_NotificationData *pFVar36;
  int iVar37;
  int iVar38;
  FDS_NotificationData *pFVar39;
  
  if (param_2 < 0) {
    bVar31 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar31) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar31 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar31) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar32 = (param_2 + -2) / 2;
  iVar33 = iVar32 * 2 + 1;
  iVar37 = iVar33;
  iVar38 = iVar32;
  do {
    while (param_2 <= iVar33) {
LAB_14bae7fc6:
      if (iVar38 == 0) {
        iVar33 = param_2 + -1;
        lVar35 = (longlong)iVar33;
        if (0 < iVar33) {
          pFVar39 = param_1 + lVar35;
          do {
            uVar15 = *(undefined7 *)&pFVar39->field_0x1;
            EVar16 = (pFVar39->NotificationText).StringTableType;
            uVar17 = *(undefined7 *)&(pFVar39->NotificationText).field_0x1;
            iVar34 = (param_1->NotificationText).FormatArgs.ArrayNum;
            iVar19 = (param_1->NotificationText).FormatArgs.ArrayMax;
            EVar20 = param_1->NotificationType;
            uVar21 = *(undefined7 *)&param_1->field_0x1;
            EVar22 = (param_1->NotificationText).StringTableType;
            uVar23 = *(undefined7 *)&(param_1->NotificationText).field_0x1;
            lVar5 = (param_1->NotificationText).StringTableID;
            FVar6 = (param_1->NotificationText).StringEnumTableNameID;
            lVar7 = (param_1->NotificationText).DateTime.Ticks;
            lVar8 = (param_1->NotificationText).TimeSpan.Ticks;
            EVar24 = (param_1->NotificationText).TimeExpressionType;
            bVar25 = (param_1->NotificationText).IsExpression;
            uVar26 = *(undefined3 *)&(param_1->NotificationText).field_0x2d;
            pFVar9 = (param_1->NotificationText).UniqueString.Data.AllocatorInstance.Data;
            iVar32 = (param_1->NotificationText).UniqueString.Data.ArrayNum;
            iVar38 = (param_1->NotificationText).UniqueString.Data.ArrayMax;
            pFVar10 = (param_1->NotificationText).FormatArgs.AllocatorInstance.Data;
            param_1->NotificationType = pFVar39->NotificationType;
            *(undefined7 *)&param_1->field_0x1 = uVar15;
            (param_1->NotificationText).StringTableType = EVar16;
            *(undefined7 *)&(param_1->NotificationText).field_0x1 = uVar17;
            FVar11 = (pFVar39->NotificationText).StringEnumTableNameID;
            (param_1->NotificationText).StringTableID = (pFVar39->NotificationText).StringTableID;
            (param_1->NotificationText).StringEnumTableNameID = FVar11;
            lVar12 = (pFVar39->NotificationText).TimeSpan.Ticks;
            (param_1->NotificationText).DateTime.Ticks = (pFVar39->NotificationText).DateTime.Ticks;
            (param_1->NotificationText).TimeSpan.Ticks = lVar12;
            bVar31 = (pFVar39->NotificationText).IsExpression;
            uVar18 = *(undefined3 *)&(pFVar39->NotificationText).field_0x2d;
            pFVar13 = (pFVar39->NotificationText).UniqueString.Data.AllocatorInstance.Data;
            (param_1->NotificationText).TimeExpressionType =
                 (pFVar39->NotificationText).TimeExpressionType;
            (param_1->NotificationText).IsExpression = bVar31;
            *(undefined3 *)&(param_1->NotificationText).field_0x2d = uVar18;
            (param_1->NotificationText).UniqueString.Data.AllocatorInstance.Data = pFVar13;
            iVar37 = (pFVar39->NotificationText).UniqueString.Data.ArrayMax;
            pFVar13 = (pFVar39->NotificationText).FormatArgs.AllocatorInstance.Data;
            (param_1->NotificationText).UniqueString.Data.ArrayNum =
                 (pFVar39->NotificationText).UniqueString.Data.ArrayNum;
            (param_1->NotificationText).UniqueString.Data.ArrayMax = iVar37;
            (param_1->NotificationText).FormatArgs.AllocatorInstance.Data = pFVar13;
            iVar37 = (pFVar39->NotificationText).FormatArgs.ArrayMax;
            (param_1->NotificationText).FormatArgs.ArrayNum =
                 (pFVar39->NotificationText).FormatArgs.ArrayNum;
            (param_1->NotificationText).FormatArgs.ArrayMax = iVar37;
            pFVar39->NotificationType = EVar20;
            *(undefined7 *)&pFVar39->field_0x1 = uVar21;
            (pFVar39->NotificationText).StringTableType = EVar22;
            *(undefined7 *)&(pFVar39->NotificationText).field_0x1 = uVar23;
            (pFVar39->NotificationText).StringTableID = lVar5;
            (pFVar39->NotificationText).StringEnumTableNameID = FVar6;
            (pFVar39->NotificationText).DateTime.Ticks = lVar7;
            (pFVar39->NotificationText).TimeSpan.Ticks = lVar8;
            (pFVar39->NotificationText).TimeExpressionType = EVar24;
            (pFVar39->NotificationText).IsExpression = bVar25;
            *(undefined3 *)&(pFVar39->NotificationText).field_0x2d = uVar26;
            (pFVar39->NotificationText).UniqueString.Data.AllocatorInstance.Data = pFVar9;
            (pFVar39->NotificationText).UniqueString.Data.ArrayNum = iVar32;
            (pFVar39->NotificationText).UniqueString.Data.ArrayMax = iVar38;
            (pFVar39->NotificationText).FormatArgs.AllocatorInstance.Data = pFVar10;
            (pFVar39->NotificationText).FormatArgs.ArrayNum = iVar34;
            (pFVar39->NotificationText).FormatArgs.ArrayMax = iVar19;
            iVar37 = 0;
            if (1 < iVar33) {
              do {
                iVar38 = iVar37 * 2;
                iVar32 = iVar38 + 1;
                if (iVar38 + 2 < iVar33) {
                  if (param_1[(longlong)iVar38 + 2].NotificationType <
                      param_1[iVar32].NotificationType) {
                    iVar32 = iVar38;
                  }
                  iVar32 = iVar32 + 1;
                }
                pFVar36 = param_1 + iVar32;
                if (pFVar36->NotificationType <= param_1[iVar37].NotificationType) break;
                uVar15 = *(undefined7 *)&pFVar36->field_0x1;
                EVar16 = (pFVar36->NotificationText).StringTableType;
                uVar17 = *(undefined7 *)&(pFVar36->NotificationText).field_0x1;
                iVar27 = param_1[iVar37].NotificationText.FormatArgs.ArrayNum;
                iVar28 = param_1[iVar37].NotificationText.FormatArgs.ArrayMax;
                pFVar1 = param_1 + iVar37;
                EVar20 = pFVar1->NotificationType;
                uVar21 = *(undefined7 *)&pFVar1->field_0x1;
                EVar22 = (pFVar1->NotificationText).StringTableType;
                uVar23 = *(undefined7 *)&(pFVar1->NotificationText).field_0x1;
                plVar2 = &param_1[iVar37].NotificationText.StringTableID;
                lVar5 = *plVar2;
                FVar6 = *(FName *)(plVar2 + 1);
                pFVar3 = &param_1[iVar37].NotificationText.DateTime;
                lVar7 = pFVar3->Ticks;
                lVar8 = ((FTimespan *)(pFVar3 + 1))->Ticks;
                pFVar14 = &param_1[iVar37].NotificationText;
                EVar24 = pFVar14->TimeExpressionType;
                bVar25 = pFVar14->IsExpression;
                uVar26 = *(undefined3 *)&pFVar14->field_0x2d;
                pFVar9 = (pFVar14->UniqueString).Data.AllocatorInstance.Data;
                pFVar14 = &param_1[iVar37].NotificationText;
                iVar34 = (pFVar14->UniqueString).Data.ArrayNum;
                iVar19 = (pFVar14->UniqueString).Data.ArrayMax;
                pFVar10 = (pFVar14->FormatArgs).AllocatorInstance.Data;
                pFVar1 = param_1 + iVar37;
                pFVar1->NotificationType = pFVar36->NotificationType;
                *(undefined7 *)&pFVar1->field_0x1 = uVar15;
                (pFVar1->NotificationText).StringTableType = EVar16;
                *(undefined7 *)&(pFVar1->NotificationText).field_0x1 = uVar17;
                FVar11 = (pFVar36->NotificationText).StringEnumTableNameID;
                plVar2 = &param_1[iVar37].NotificationText.StringTableID;
                *plVar2 = (pFVar36->NotificationText).StringTableID;
                *(FName *)(plVar2 + 1) = FVar11;
                lVar12 = (pFVar36->NotificationText).TimeSpan.Ticks;
                pFVar3 = &param_1[iVar37].NotificationText.DateTime;
                pFVar3->Ticks = (pFVar36->NotificationText).DateTime.Ticks;
                ((FTimespan *)(pFVar3 + 1))->Ticks = lVar12;
                bVar31 = (pFVar36->NotificationText).IsExpression;
                uVar18 = *(undefined3 *)&(pFVar36->NotificationText).field_0x2d;
                pFVar13 = (pFVar36->NotificationText).UniqueString.Data.AllocatorInstance.Data;
                pFVar14 = &param_1[iVar37].NotificationText;
                pFVar14->TimeExpressionType = (pFVar36->NotificationText).TimeExpressionType;
                pFVar14->IsExpression = bVar31;
                *(undefined3 *)&pFVar14->field_0x2d = uVar18;
                (pFVar14->UniqueString).Data.AllocatorInstance.Data = pFVar13;
                iVar38 = (pFVar36->NotificationText).UniqueString.Data.ArrayMax;
                pFVar13 = (pFVar36->NotificationText).FormatArgs.AllocatorInstance.Data;
                pFVar14 = &param_1[iVar37].NotificationText;
                (pFVar14->UniqueString).Data.ArrayNum =
                     (pFVar36->NotificationText).UniqueString.Data.ArrayNum;
                (pFVar14->UniqueString).Data.ArrayMax = iVar38;
                (pFVar14->FormatArgs).AllocatorInstance.Data = pFVar13;
                iVar38 = (pFVar36->NotificationText).FormatArgs.ArrayMax;
                param_1[iVar37].NotificationText.FormatArgs.ArrayNum =
                     (pFVar36->NotificationText).FormatArgs.ArrayNum;
                param_1[iVar37].NotificationText.FormatArgs.ArrayMax = iVar38;
                pFVar36->NotificationType = EVar20;
                *(undefined7 *)&pFVar36->field_0x1 = uVar21;
                (pFVar36->NotificationText).StringTableType = EVar22;
                *(undefined7 *)&(pFVar36->NotificationText).field_0x1 = uVar23;
                (pFVar36->NotificationText).StringTableID = lVar5;
                (pFVar36->NotificationText).StringEnumTableNameID = FVar6;
                (pFVar36->NotificationText).DateTime.Ticks = lVar7;
                (pFVar36->NotificationText).TimeSpan.Ticks = lVar8;
                (pFVar36->NotificationText).TimeExpressionType = EVar24;
                (pFVar36->NotificationText).IsExpression = bVar25;
                *(undefined3 *)&(pFVar36->NotificationText).field_0x2d = uVar26;
                (pFVar36->NotificationText).UniqueString.Data.AllocatorInstance.Data = pFVar9;
                (pFVar36->NotificationText).UniqueString.Data.ArrayNum = iVar34;
                (pFVar36->NotificationText).UniqueString.Data.ArrayMax = iVar19;
                (pFVar36->NotificationText).FormatArgs.AllocatorInstance.Data = pFVar10;
                (pFVar36->NotificationText).FormatArgs.ArrayNum = iVar27;
                (pFVar36->NotificationText).FormatArgs.ArrayMax = iVar28;
                iVar37 = iVar32;
              } while (iVar32 * 2 + 1 < iVar33);
            }
            iVar33 = iVar33 + -1;
            lVar35 = lVar35 + -1;
            pFVar39 = pFVar39 + -1;
          } while (0 < lVar35);
        }
        return;
      }
      iVar32 = iVar38 + -1;
      iVar33 = iVar37 + -2;
      iVar37 = iVar33;
      iVar38 = iVar32;
    }
    iVar33 = iVar32 * 2;
    iVar34 = iVar33 + 1;
    if (iVar33 + 2 < param_2) {
      if (param_1[(longlong)iVar33 + 2].NotificationType < param_1[iVar34].NotificationType) {
        iVar34 = iVar33;
      }
      iVar34 = iVar34 + 1;
    }
    pFVar39 = param_1 + iVar34;
    if (pFVar39->NotificationType <= param_1[iVar32].NotificationType) goto LAB_14bae7fc6;
    uVar15 = *(undefined7 *)&pFVar39->field_0x1;
    EVar16 = (pFVar39->NotificationText).StringTableType;
    uVar17 = *(undefined7 *)&(pFVar39->NotificationText).field_0x1;
    iVar33 = iVar34 * 2 + 1;
    iVar29 = param_1[iVar32].NotificationText.FormatArgs.ArrayNum;
    iVar30 = param_1[iVar32].NotificationText.FormatArgs.ArrayMax;
    pFVar36 = param_1 + iVar32;
    EVar20 = pFVar36->NotificationType;
    uVar21 = *(undefined7 *)&pFVar36->field_0x1;
    EVar22 = (pFVar36->NotificationText).StringTableType;
    uVar23 = *(undefined7 *)&(pFVar36->NotificationText).field_0x1;
    plVar2 = &param_1[iVar32].NotificationText.StringTableID;
    lVar5 = *plVar2;
    FVar6 = *(FName *)(plVar2 + 1);
    pFVar3 = &param_1[iVar32].NotificationText.DateTime;
    lVar7 = pFVar3->Ticks;
    lVar8 = ((FTimespan *)(pFVar3 + 1))->Ticks;
    pFVar14 = &param_1[iVar32].NotificationText;
    EVar24 = pFVar14->TimeExpressionType;
    bVar25 = pFVar14->IsExpression;
    uVar26 = *(undefined3 *)&pFVar14->field_0x2d;
    pFVar9 = (pFVar14->UniqueString).Data.AllocatorInstance.Data;
    pFVar14 = &param_1[iVar32].NotificationText;
    iVar27 = (pFVar14->UniqueString).Data.ArrayNum;
    iVar28 = (pFVar14->UniqueString).Data.ArrayMax;
    pFVar10 = (pFVar14->FormatArgs).AllocatorInstance.Data;
    pFVar36 = param_1 + iVar32;
    pFVar36->NotificationType = pFVar39->NotificationType;
    *(undefined7 *)&pFVar36->field_0x1 = uVar15;
    (pFVar36->NotificationText).StringTableType = EVar16;
    *(undefined7 *)&(pFVar36->NotificationText).field_0x1 = uVar17;
    FVar11 = (pFVar39->NotificationText).StringEnumTableNameID;
    plVar2 = &param_1[iVar32].NotificationText.StringTableID;
    *plVar2 = (pFVar39->NotificationText).StringTableID;
    *(FName *)(plVar2 + 1) = FVar11;
    lVar12 = (pFVar39->NotificationText).TimeSpan.Ticks;
    pFVar3 = &param_1[iVar32].NotificationText.DateTime;
    pFVar3->Ticks = (pFVar39->NotificationText).DateTime.Ticks;
    ((FTimespan *)(pFVar3 + 1))->Ticks = lVar12;
    bVar31 = (pFVar39->NotificationText).IsExpression;
    uVar18 = *(undefined3 *)&(pFVar39->NotificationText).field_0x2d;
    pFVar13 = (pFVar39->NotificationText).UniqueString.Data.AllocatorInstance.Data;
    pFVar14 = &param_1[iVar32].NotificationText;
    pFVar14->TimeExpressionType = (pFVar39->NotificationText).TimeExpressionType;
    pFVar14->IsExpression = bVar31;
    *(undefined3 *)&pFVar14->field_0x2d = uVar18;
    (pFVar14->UniqueString).Data.AllocatorInstance.Data = pFVar13;
    iVar19 = (pFVar39->NotificationText).UniqueString.Data.ArrayMax;
    pFVar13 = (pFVar39->NotificationText).FormatArgs.AllocatorInstance.Data;
    pFVar14 = &param_1[iVar32].NotificationText;
    (pFVar14->UniqueString).Data.ArrayNum = (pFVar39->NotificationText).UniqueString.Data.ArrayNum;
    (pFVar14->UniqueString).Data.ArrayMax = iVar19;
    (pFVar14->FormatArgs).AllocatorInstance.Data = pFVar13;
    iVar19 = (pFVar39->NotificationText).FormatArgs.ArrayMax;
    param_1[iVar32].NotificationText.FormatArgs.ArrayNum =
         (pFVar39->NotificationText).FormatArgs.ArrayNum;
    param_1[iVar32].NotificationText.FormatArgs.ArrayMax = iVar19;
    pFVar39->NotificationType = EVar20;
    *(undefined7 *)&pFVar39->field_0x1 = uVar21;
    (pFVar39->NotificationText).StringTableType = EVar22;
    *(undefined7 *)&(pFVar39->NotificationText).field_0x1 = uVar23;
    (pFVar39->NotificationText).StringTableID = lVar5;
    (pFVar39->NotificationText).StringEnumTableNameID = FVar6;
    (pFVar39->NotificationText).DateTime.Ticks = lVar7;
    (pFVar39->NotificationText).TimeSpan.Ticks = lVar8;
    (pFVar39->NotificationText).TimeExpressionType = EVar24;
    (pFVar39->NotificationText).IsExpression = bVar25;
    *(undefined3 *)&(pFVar39->NotificationText).field_0x2d = uVar26;
    (pFVar39->NotificationText).UniqueString.Data.AllocatorInstance.Data = pFVar9;
    (pFVar39->NotificationText).UniqueString.Data.ArrayNum = iVar27;
    (pFVar39->NotificationText).UniqueString.Data.ArrayMax = iVar28;
    (pFVar39->NotificationText).FormatArgs.AllocatorInstance.Data = pFVar10;
    (pFVar39->NotificationText).FormatArgs.ArrayNum = iVar29;
    (pFVar39->NotificationText).FormatArgs.ArrayMax = iVar30;
    iVar32 = iVar34;
  } while( true );
}

// HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`UDS_LanguageManager::InitBanNamePatterns'::__l17::<lambda_1>_>_> @ 14bae8180

void __cdecl
AlgoImpl::
HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_UDS_LanguageManager::InitBanNamePatterns_::__l17::<lambda_1>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_protected:_void___cdecl_UDS_LanguageManager::InitBanNamePatterns(void)_::_17_::<lambda_1>_>
          param_4)

{
  FString *pFVar1;
  FString *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FString *pFVar15;
  int iVar16;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar13 = iVar6 * 2 + 1;
  do {
    iVar10 = 0;
    iVar9 = iVar6;
    iVar8 = iVar13;
    while (iVar8 < param_2) {
      iVar8 = iVar9 * 2;
      iVar16 = iVar8 + 1;
      if (iVar8 + 2 < param_2) {
        iVar12 = param_1[(longlong)iVar8 + 1].Data.ArrayNum;
        iVar7 = param_1[(longlong)iVar8 + 2].Data.ArrayNum;
        iVar11 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar11 = iVar10;
        }
        iVar7 = iVar12 + -1;
        if (iVar12 == 0) {
          iVar7 = iVar10;
        }
        if (iVar7 < iVar11) {
          iVar16 = iVar8;
        }
        iVar16 = iVar16 + 1;
      }
      iVar8 = param_1[iVar9].Data.ArrayNum;
      iVar12 = param_1[iVar16].Data.ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar10;
      }
      iVar8 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar8 = iVar10;
      }
      if (iVar7 <= iVar8) break;
      pFVar15 = param_1 + iVar16;
      iVar8 = (pFVar15->Data).ArrayNum;
      iVar12 = (pFVar15->Data).ArrayMax;
      pFVar1 = param_1 + iVar9;
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      iVar7 = (pFVar1->Data).ArrayNum;
      iVar11 = (pFVar1->Data).ArrayMax;
      pFVar1 = param_1 + iVar9;
      (pFVar1->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar1->Data).ArrayNum = iVar8;
      (pFVar1->Data).ArrayMax = iVar12;
      pFVar15 = param_1 + iVar16;
      (pFVar15->Data).AllocatorInstance.Data = pFVar4;
      (pFVar15->Data).ArrayNum = iVar7;
      (pFVar15->Data).ArrayMax = iVar11;
      iVar9 = iVar16;
      iVar8 = iVar16 * 2 + 1;
    }
    if (iVar6 == 0) {
      iVar13 = param_2 + -1;
      lVar14 = (longlong)iVar13;
      if (0 < iVar13) {
        pFVar15 = param_1 + lVar14;
        do {
          iVar6 = (pFVar15->Data).ArrayNum;
          iVar9 = (pFVar15->Data).ArrayMax;
          pFVar4 = (param_1->Data).AllocatorInstance.Data;
          iVar8 = (param_1->Data).ArrayNum;
          iVar16 = (param_1->Data).ArrayMax;
          (param_1->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (param_1->Data).ArrayNum = iVar6;
          (param_1->Data).ArrayMax = iVar9;
          (pFVar15->Data).AllocatorInstance.Data = pFVar4;
          (pFVar15->Data).ArrayNum = iVar8;
          (pFVar15->Data).ArrayMax = iVar16;
          iVar6 = 0;
          if (1 < iVar13) {
            do {
              iVar8 = iVar6 * 2;
              iVar9 = iVar8 + 1;
              if (iVar8 + 2 < iVar13) {
                iVar16 = param_1[(longlong)iVar8 + 1].Data.ArrayNum;
                iVar12 = param_1[(longlong)iVar8 + 2].Data.ArrayNum;
                iVar7 = iVar12 + -1;
                if (iVar12 == 0) {
                  iVar7 = iVar10;
                }
                iVar12 = iVar16 + -1;
                if (iVar16 == 0) {
                  iVar12 = iVar10;
                }
                if (iVar12 < iVar7) {
                  iVar9 = iVar8;
                }
                iVar9 = iVar9 + 1;
              }
              iVar8 = param_1[iVar6].Data.ArrayNum;
              iVar16 = param_1[iVar9].Data.ArrayNum;
              iVar12 = iVar8 + -1;
              if (iVar8 == 0) {
                iVar12 = iVar10;
              }
              iVar8 = iVar16 + -1;
              if (iVar16 == 0) {
                iVar8 = iVar10;
              }
              if (iVar12 <= iVar8) break;
              pFVar1 = param_1 + iVar9;
              iVar8 = (pFVar1->Data).ArrayNum;
              iVar16 = (pFVar1->Data).ArrayMax;
              pFVar2 = param_1 + iVar6;
              pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
              iVar12 = (pFVar2->Data).ArrayNum;
              iVar7 = (pFVar2->Data).ArrayMax;
              pFVar2 = param_1 + iVar6;
              (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
              (pFVar2->Data).ArrayNum = iVar8;
              (pFVar2->Data).ArrayMax = iVar16;
              pFVar1 = param_1 + iVar9;
              (pFVar1->Data).AllocatorInstance.Data = pFVar4;
              (pFVar1->Data).ArrayNum = iVar12;
              (pFVar1->Data).ArrayMax = iVar7;
              iVar6 = iVar9;
            } while (iVar9 * 2 + 1 < iVar13);
          }
          iVar13 = iVar13 + -1;
          lVar14 = lVar14 + -1;
          pFVar15 = pFVar15 + -1;
        } while (0 < lVar14);
      }
      return;
    }
    iVar6 = iVar6 + -1;
    iVar13 = iVar13 + -2;
  } while( true );
}

// HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`UDS_LanguageManager::InitBanWordPatterns'::__l17::<lambda_1>_>_> @ 14bae83d0

void __cdecl
AlgoImpl::
HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_UDS_LanguageManager::InitBanWordPatterns_::__l17::<lambda_1>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_protected:_void___cdecl_UDS_LanguageManager::InitBanWordPatterns(void)_::_17_::<lambda_1>_>
          param_4)

{
  FString *pFVar1;
  FString *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FString *pFVar15;
  int iVar16;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar13 = iVar6 * 2 + 1;
  do {
    iVar10 = 0;
    iVar9 = iVar6;
    iVar8 = iVar13;
    while (iVar8 < param_2) {
      iVar8 = iVar9 * 2;
      iVar16 = iVar8 + 1;
      if (iVar8 + 2 < param_2) {
        iVar12 = param_1[(longlong)iVar8 + 1].Data.ArrayNum;
        iVar7 = param_1[(longlong)iVar8 + 2].Data.ArrayNum;
        iVar11 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar11 = iVar10;
        }
        iVar7 = iVar12 + -1;
        if (iVar12 == 0) {
          iVar7 = iVar10;
        }
        if (iVar7 < iVar11) {
          iVar16 = iVar8;
        }
        iVar16 = iVar16 + 1;
      }
      iVar8 = param_1[iVar9].Data.ArrayNum;
      iVar12 = param_1[iVar16].Data.ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar10;
      }
      iVar8 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar8 = iVar10;
      }
      if (iVar7 <= iVar8) break;
      pFVar15 = param_1 + iVar16;
      iVar8 = (pFVar15->Data).ArrayNum;
      iVar12 = (pFVar15->Data).ArrayMax;
      pFVar1 = param_1 + iVar9;
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      iVar7 = (pFVar1->Data).ArrayNum;
      iVar11 = (pFVar1->Data).ArrayMax;
      pFVar1 = param_1 + iVar9;
      (pFVar1->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar1->Data).ArrayNum = iVar8;
      (pFVar1->Data).ArrayMax = iVar12;
      pFVar15 = param_1 + iVar16;
      (pFVar15->Data).AllocatorInstance.Data = pFVar4;
      (pFVar15->Data).ArrayNum = iVar7;
      (pFVar15->Data).ArrayMax = iVar11;
      iVar9 = iVar16;
      iVar8 = iVar16 * 2 + 1;
    }
    if (iVar6 == 0) {
      iVar13 = param_2 + -1;
      lVar14 = (longlong)iVar13;
      if (0 < iVar13) {
        pFVar15 = param_1 + lVar14;
        do {
          iVar6 = (pFVar15->Data).ArrayNum;
          iVar9 = (pFVar15->Data).ArrayMax;
          pFVar4 = (param_1->Data).AllocatorInstance.Data;
          iVar8 = (param_1->Data).ArrayNum;
          iVar16 = (param_1->Data).ArrayMax;
          (param_1->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (param_1->Data).ArrayNum = iVar6;
          (param_1->Data).ArrayMax = iVar9;
          (pFVar15->Data).AllocatorInstance.Data = pFVar4;
          (pFVar15->Data).ArrayNum = iVar8;
          (pFVar15->Data).ArrayMax = iVar16;
          iVar6 = 0;
          if (1 < iVar13) {
            do {
              iVar8 = iVar6 * 2;
              iVar9 = iVar8 + 1;
              if (iVar8 + 2 < iVar13) {
                iVar16 = param_1[(longlong)iVar8 + 1].Data.ArrayNum;
                iVar12 = param_1[(longlong)iVar8 + 2].Data.ArrayNum;
                iVar7 = iVar12 + -1;
                if (iVar12 == 0) {
                  iVar7 = iVar10;
                }
                iVar12 = iVar16 + -1;
                if (iVar16 == 0) {
                  iVar12 = iVar10;
                }
                if (iVar12 < iVar7) {
                  iVar9 = iVar8;
                }
                iVar9 = iVar9 + 1;
              }
              iVar8 = param_1[iVar6].Data.ArrayNum;
              iVar16 = param_1[iVar9].Data.ArrayNum;
              iVar12 = iVar8 + -1;
              if (iVar8 == 0) {
                iVar12 = iVar10;
              }
              iVar8 = iVar16 + -1;
              if (iVar16 == 0) {
                iVar8 = iVar10;
              }
              if (iVar12 <= iVar8) break;
              pFVar1 = param_1 + iVar9;
              iVar8 = (pFVar1->Data).ArrayNum;
              iVar16 = (pFVar1->Data).ArrayMax;
              pFVar2 = param_1 + iVar6;
              pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
              iVar12 = (pFVar2->Data).ArrayNum;
              iVar7 = (pFVar2->Data).ArrayMax;
              pFVar2 = param_1 + iVar6;
              (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
              (pFVar2->Data).ArrayNum = iVar8;
              (pFVar2->Data).ArrayMax = iVar16;
              pFVar1 = param_1 + iVar9;
              (pFVar1->Data).AllocatorInstance.Data = pFVar4;
              (pFVar1->Data).ArrayNum = iVar12;
              (pFVar1->Data).ArrayMax = iVar7;
              iVar6 = iVar9;
            } while (iVar9 * 2 + 1 < iVar13);
          }
          iVar13 = iVar13 + -1;
          lVar14 = lVar14 + -1;
          pFVar15 = pFVar15 + -1;
        } while (0 < lVar14);
      }
      return;
    }
    iVar6 = iVar6 + -1;
    iVar13 = iVar13 + -2;
  } while( true );
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`UDS_QuestManager::SortQuestList'::__l2::<lambda_1>_>_> @ 14bae8620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_QuestManager::SortQuestList_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_void___cdecl_UDS_QuestManager::SortQuestList(TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<EDS_QuestSortType,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppiVar7 = &local_348;
    do {
      piVar4 = ppiVar7[1];
      piVar5 = *ppiVar7;
      local_358 = ppiVar7[2];
      iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      piVar10 = piVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14bae86e0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_14bae8710:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x00014bae8719;
          goto LAB_14bae8730;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar9 = piVar8, piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = `UDS_QuestManager::SortQuestList'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,piVar9,piVar5);
            piVar8 = piVar5;
            if (!bVar2) {
              piVar8 = piVar9;
            }
          }
          iVar6 = *piVar9;
          *piVar9 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_14bae87f4;
      }
LAB_14bae87e3:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_QuestManager::SortQuestList_::__l2::<lambda_1>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_14bae87f4:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x00014bae8719:
  bVar2 = `UDS_QuestManager::SortQuestList'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,piVar10,piVar5);
  if (!bVar2) goto LAB_14bae8710;
LAB_14bae8730:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = `UDS_QuestManager::SortQuestList'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,piVar8,piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_14bae8710;
  }
  iVar3 = *piVar10;
  iVar6 = iVar6 + -1;
  *piVar10 = *piVar8;
  *piVar8 = iVar3;
  if ((longlong)((longlong)piVar8 + (-4 - (longlong)piVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar7 = piVar5;
      ppiVar7[1] = piVar4;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar8 <= piVar10 + 1) goto LAB_14bae87f4;
    piVar4 = piVar9 + -2;
    piVar5 = piVar10;
  }
  else {
    if (piVar10 + 1 < piVar8) {
      *ppiVar7 = piVar10;
      ppiVar7[1] = piVar9 + -2;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_14bae87f4;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_14bae87e3;
  goto LAB_14bae86e0;
}

// IntroSortInternal<FDS_NotificationData,int,FIdentityFunctor,TDereferenceWrapper<FDS_NotificationData,`UDS_NotificationManager::RefreshNotificationArray'::__l2::<lambda_1>_>_> @ 14bae88c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<FDS_NotificationData,int,FIdentityFunctor,TDereferenceWrapper<FDS_NotificationData,_UDS_NotificationManager::RefreshNotificationArray_::__l2::<lambda_1>_>_>
          (FDS_NotificationData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_NotificationData,_public:_void___cdecl_UDS_NotificationManager::RefreshNotificationArray(void)_::_2_::<lambda_1>_>
          param_4)

{
  FDS_NotificationData *pFVar1;
  long64 lVar2;
  FName FVar3;
  long64 lVar4;
  long64 lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  long64 lVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  undefined7 uVar12;
  EDS_StringTableType EVar13;
  undefined7 uVar14;
  bool bVar15;
  undefined3 uVar16;
  EDS_NotificationType EVar17;
  undefined7 uVar18;
  EDS_StringTableType EVar19;
  undefined7 uVar20;
  EDS_TimeExpression EVar21;
  bool bVar22;
  undefined3 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  FDS_NotificationData *pFVar29;
  FDS_NotificationData *pFVar30;
  FDS_NotificationData *pFVar31;
  FDS_NotificationData *pFVar32;
  FDS_NotificationData *pFVar33;
  FDS_NotificationData *pFVar34;
  FDS_NotificationData **ppFVar35;
  float fVar36;
  undefined1 auStack_398 [48];
  FDS_NotificationData *local_368;
  FDS_NotificationData *local_358;
  FDS_NotificationData *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (1 < param_2) {
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar36 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar36;
    memset(local_340,0,0x2e8);
    ppFVar35 = &local_358;
    do {
      pFVar29 = ppFVar35[1];
      pFVar34 = *ppFVar35;
      pFVar1 = ppFVar35[2];
      local_368._0_4_ = (int)pFVar1;
      iVar28 = (int)(((longlong)pFVar29 - (longlong)pFVar34) / 0x58) + 1;
      pFVar33 = pFVar34;
      if ((int)local_368 != 0) {
LAB_14bae89a0:
        if (8 < iVar28) {
          uVar12 = *(undefined7 *)&pFVar33->field_0x1;
          EVar13 = (pFVar33->NotificationText).StringTableType;
          uVar14 = *(undefined7 *)&(pFVar33->NotificationText).field_0x1;
          pFVar31 = pFVar29 + 1;
          pFVar34 = pFVar33 + iVar28 / 2;
          EVar17 = pFVar34->NotificationType;
          uVar18 = *(undefined7 *)&pFVar34->field_0x1;
          EVar19 = (pFVar34->NotificationText).StringTableType;
          uVar20 = *(undefined7 *)&(pFVar34->NotificationText).field_0x1;
          lVar2 = (pFVar34->NotificationText).StringTableID;
          FVar3 = (pFVar34->NotificationText).StringEnumTableNameID;
          lVar4 = (pFVar34->NotificationText).DateTime.Ticks;
          lVar5 = (pFVar34->NotificationText).TimeSpan.Ticks;
          EVar21 = (pFVar34->NotificationText).TimeExpressionType;
          bVar22 = (pFVar34->NotificationText).IsExpression;
          uVar23 = *(undefined3 *)&(pFVar34->NotificationText).field_0x2d;
          pFVar6 = (pFVar34->NotificationText).UniqueString.Data.AllocatorInstance.Data;
          iVar24 = (pFVar34->NotificationText).UniqueString.Data.ArrayNum;
          iVar25 = (pFVar34->NotificationText).UniqueString.Data.ArrayMax;
          pFVar7 = (pFVar34->NotificationText).FormatArgs.AllocatorInstance.Data;
          iVar26 = (pFVar34->NotificationText).FormatArgs.ArrayNum;
          iVar27 = (pFVar34->NotificationText).FormatArgs.ArrayMax;
          pFVar34->NotificationType = pFVar33->NotificationType;
          *(undefined7 *)&pFVar34->field_0x1 = uVar12;
          (pFVar34->NotificationText).StringTableType = EVar13;
          *(undefined7 *)&(pFVar34->NotificationText).field_0x1 = uVar14;
          FVar8 = (pFVar33->NotificationText).StringEnumTableNameID;
          (pFVar34->NotificationText).StringTableID = (pFVar33->NotificationText).StringTableID;
          (pFVar34->NotificationText).StringEnumTableNameID = FVar8;
          lVar9 = (pFVar33->NotificationText).TimeSpan.Ticks;
          (pFVar34->NotificationText).DateTime.Ticks = (pFVar33->NotificationText).DateTime.Ticks;
          (pFVar34->NotificationText).TimeSpan.Ticks = lVar9;
          bVar15 = (pFVar33->NotificationText).IsExpression;
          uVar16 = *(undefined3 *)&(pFVar33->NotificationText).field_0x2d;
          pFVar10 = (pFVar33->NotificationText).UniqueString.Data.AllocatorInstance.Data;
          (pFVar34->NotificationText).TimeExpressionType =
               (pFVar33->NotificationText).TimeExpressionType;
          (pFVar34->NotificationText).IsExpression = bVar15;
          *(undefined3 *)&(pFVar34->NotificationText).field_0x2d = uVar16;
          (pFVar34->NotificationText).UniqueString.Data.AllocatorInstance.Data = pFVar10;
          iVar28 = (pFVar33->NotificationText).UniqueString.Data.ArrayMax;
          pFVar10 = (pFVar33->NotificationText).FormatArgs.AllocatorInstance.Data;
          (pFVar34->NotificationText).UniqueString.Data.ArrayNum =
               (pFVar33->NotificationText).UniqueString.Data.ArrayNum;
          (pFVar34->NotificationText).UniqueString.Data.ArrayMax = iVar28;
          (pFVar34->NotificationText).FormatArgs.AllocatorInstance.Data = pFVar10;
          iVar28 = (pFVar33->NotificationText).FormatArgs.ArrayMax;
          (pFVar34->NotificationText).FormatArgs.ArrayNum =
               (pFVar33->NotificationText).FormatArgs.ArrayNum;
          (pFVar34->NotificationText).FormatArgs.ArrayMax = iVar28;
          pFVar33->NotificationType = EVar17;
          *(undefined7 *)&pFVar33->field_0x1 = uVar18;
          (pFVar33->NotificationText).StringTableType = EVar19;
          *(undefined7 *)&(pFVar33->NotificationText).field_0x1 = uVar20;
          (pFVar33->NotificationText).StringTableID = lVar2;
          (pFVar33->NotificationText).StringEnumTableNameID = FVar3;
          (pFVar33->NotificationText).DateTime.Ticks = lVar4;
          (pFVar33->NotificationText).TimeSpan.Ticks = lVar5;
          (pFVar33->NotificationText).TimeExpressionType = EVar21;
          (pFVar33->NotificationText).IsExpression = bVar22;
          *(undefined3 *)&(pFVar33->NotificationText).field_0x2d = uVar23;
          (pFVar33->NotificationText).UniqueString.Data.AllocatorInstance.Data = pFVar6;
          (pFVar33->NotificationText).UniqueString.Data.ArrayNum = iVar24;
          (pFVar33->NotificationText).UniqueString.Data.ArrayMax = iVar25;
          (pFVar33->NotificationText).FormatArgs.AllocatorInstance.Data = pFVar7;
          (pFVar33->NotificationText).FormatArgs.ArrayNum = iVar26;
          (pFVar33->NotificationText).FormatArgs.ArrayMax = iVar27;
          pFVar34 = pFVar33;
LAB_14bae8a30:
          pFVar30 = pFVar34;
          pFVar34 = pFVar30 + 1;
          if (pFVar34 <= pFVar29) goto code_r0x00014bae8a39;
          goto LAB_14bae8a42;
        }
        for (; pFVar34 = pFVar33, pFVar1 = pFVar33, pFVar33 < pFVar29; pFVar29 = pFVar29 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar29) {
            if (pFVar34->NotificationType < pFVar1->NotificationType) {
              pFVar34 = pFVar1;
            }
          }
          EVar17 = pFVar34->NotificationType;
          uVar18 = *(undefined7 *)&pFVar34->field_0x1;
          EVar19 = (pFVar34->NotificationText).StringTableType;
          uVar20 = *(undefined7 *)&(pFVar34->NotificationText).field_0x1;
          iVar26 = (pFVar34->NotificationText).FormatArgs.ArrayNum;
          iVar27 = (pFVar34->NotificationText).FormatArgs.ArrayMax;
          lVar2 = (pFVar34->NotificationText).StringTableID;
          FVar3 = (pFVar34->NotificationText).StringEnumTableNameID;
          uVar12 = *(undefined7 *)&pFVar29->field_0x1;
          EVar13 = (pFVar29->NotificationText).StringTableType;
          uVar14 = *(undefined7 *)&(pFVar29->NotificationText).field_0x1;
          lVar4 = (pFVar34->NotificationText).DateTime.Ticks;
          lVar5 = (pFVar34->NotificationText).TimeSpan.Ticks;
          EVar21 = (pFVar34->NotificationText).TimeExpressionType;
          bVar22 = (pFVar34->NotificationText).IsExpression;
          uVar23 = *(undefined3 *)&(pFVar34->NotificationText).field_0x2d;
          pFVar6 = (pFVar34->NotificationText).UniqueString.Data.AllocatorInstance.Data;
          iVar24 = (pFVar34->NotificationText).UniqueString.Data.ArrayNum;
          iVar25 = (pFVar34->NotificationText).UniqueString.Data.ArrayMax;
          pFVar7 = (pFVar34->NotificationText).FormatArgs.AllocatorInstance.Data;
          pFVar34->NotificationType = pFVar29->NotificationType;
          *(undefined7 *)&pFVar34->field_0x1 = uVar12;
          (pFVar34->NotificationText).StringTableType = EVar13;
          *(undefined7 *)&(pFVar34->NotificationText).field_0x1 = uVar14;
          FVar8 = (pFVar29->NotificationText).StringEnumTableNameID;
          (pFVar34->NotificationText).StringTableID = (pFVar29->NotificationText).StringTableID;
          (pFVar34->NotificationText).StringEnumTableNameID = FVar8;
          lVar9 = (pFVar29->NotificationText).TimeSpan.Ticks;
          (pFVar34->NotificationText).DateTime.Ticks = (pFVar29->NotificationText).DateTime.Ticks;
          (pFVar34->NotificationText).TimeSpan.Ticks = lVar9;
          bVar15 = (pFVar29->NotificationText).IsExpression;
          uVar16 = *(undefined3 *)&(pFVar29->NotificationText).field_0x2d;
          pFVar10 = (pFVar29->NotificationText).UniqueString.Data.AllocatorInstance.Data;
          (pFVar34->NotificationText).TimeExpressionType =
               (pFVar29->NotificationText).TimeExpressionType;
          (pFVar34->NotificationText).IsExpression = bVar15;
          *(undefined3 *)&(pFVar34->NotificationText).field_0x2d = uVar16;
          (pFVar34->NotificationText).UniqueString.Data.AllocatorInstance.Data = pFVar10;
          iVar28 = (pFVar29->NotificationText).UniqueString.Data.ArrayMax;
          pFVar10 = (pFVar29->NotificationText).FormatArgs.AllocatorInstance.Data;
          (pFVar34->NotificationText).UniqueString.Data.ArrayNum =
               (pFVar29->NotificationText).UniqueString.Data.ArrayNum;
          (pFVar34->NotificationText).UniqueString.Data.ArrayMax = iVar28;
          (pFVar34->NotificationText).FormatArgs.AllocatorInstance.Data = pFVar10;
          iVar28 = (pFVar29->NotificationText).FormatArgs.ArrayMax;
          (pFVar34->NotificationText).FormatArgs.ArrayNum =
               (pFVar29->NotificationText).FormatArgs.ArrayNum;
          (pFVar34->NotificationText).FormatArgs.ArrayMax = iVar28;
          pFVar29->NotificationType = EVar17;
          *(undefined7 *)&pFVar29->field_0x1 = uVar18;
          (pFVar29->NotificationText).StringTableType = EVar19;
          *(undefined7 *)&(pFVar29->NotificationText).field_0x1 = uVar20;
          (pFVar29->NotificationText).StringTableID = lVar2;
          (pFVar29->NotificationText).StringEnumTableNameID = FVar3;
          (pFVar29->NotificationText).DateTime.Ticks = lVar4;
          (pFVar29->NotificationText).TimeSpan.Ticks = lVar5;
          (pFVar29->NotificationText).TimeExpressionType = EVar21;
          (pFVar29->NotificationText).IsExpression = bVar22;
          *(undefined3 *)&(pFVar29->NotificationText).field_0x2d = uVar23;
          (pFVar29->NotificationText).UniqueString.Data.AllocatorInstance.Data = pFVar6;
          (pFVar29->NotificationText).UniqueString.Data.ArrayNum = iVar24;
          (pFVar29->NotificationText).UniqueString.Data.ArrayMax = iVar25;
          (pFVar29->NotificationText).FormatArgs.AllocatorInstance.Data = pFVar7;
          (pFVar29->NotificationText).FormatArgs.ArrayNum = iVar26;
          (pFVar29->NotificationText).FormatArgs.ArrayMax = iVar27;
        }
        goto LAB_14bae8c06;
      }
LAB_14bae8bf7:
      local_368 = pFVar1;
      HeapSortInternal<FDS_NotificationData,int,FIdentityFunctor,TDereferenceWrapper<FDS_NotificationData,_UDS_NotificationManager::RefreshNotificationArray_::__l2::<lambda_1>_>_>
                (pFVar34,iVar28,param_3,param_4);
LAB_14bae8c06:
      ppFVar35 = ppFVar35 + -3;
    } while (&local_358 <= ppFVar35);
  }
  return;
code_r0x00014bae8a39:
  if (pFVar34->NotificationType <= pFVar33->NotificationType) goto LAB_14bae8a30;
LAB_14bae8a42:
  do {
    pFVar32 = pFVar31;
    pFVar31 = pFVar32 + -1;
    if (pFVar31 <= pFVar33) break;
  } while (pFVar33->NotificationType <= pFVar31->NotificationType);
  uVar11 = *(undefined8 *)&pFVar32[-1].NotificationText;
  if (pFVar34 <= pFVar31) {
    EVar17 = pFVar34->NotificationType;
    uVar12 = *(undefined7 *)&pFVar34->field_0x1;
    EVar13 = pFVar30[1].NotificationText.StringTableType;
    uVar14 = *(undefined7 *)&pFVar30[1].NotificationText.field_0x1;
    lVar2 = pFVar30[1].NotificationText.StringTableID;
    FVar3 = pFVar30[1].NotificationText.StringEnumTableNameID;
    lVar4 = pFVar30[1].NotificationText.DateTime.Ticks;
    lVar5 = pFVar30[1].NotificationText.TimeSpan.Ticks;
    EVar21 = pFVar30[1].NotificationText.TimeExpressionType;
    bVar22 = pFVar30[1].NotificationText.IsExpression;
    uVar23 = *(undefined3 *)&pFVar30[1].NotificationText.field_0x2d;
    pFVar7 = pFVar30[1].NotificationText.UniqueString.Data.AllocatorInstance.Data;
    iVar24 = pFVar30[1].NotificationText.UniqueString.Data.ArrayNum;
    iVar25 = pFVar30[1].NotificationText.UniqueString.Data.ArrayMax;
    pFVar10 = pFVar30[1].NotificationText.FormatArgs.AllocatorInstance.Data;
    iVar26 = pFVar30[1].NotificationText.FormatArgs.ArrayNum;
    iVar27 = pFVar30[1].NotificationText.FormatArgs.ArrayMax;
    *(undefined8 *)pFVar34 = *(undefined8 *)pFVar31;
    *(undefined8 *)&pFVar30[1].NotificationText = uVar11;
    FVar8 = pFVar32[-1].NotificationText.StringEnumTableNameID;
    pFVar30[1].NotificationText.StringTableID = pFVar32[-1].NotificationText.StringTableID;
    pFVar30[1].NotificationText.StringEnumTableNameID = FVar8;
    lVar9 = pFVar32[-1].NotificationText.TimeSpan.Ticks;
    pFVar30[1].NotificationText.DateTime.Ticks = pFVar32[-1].NotificationText.DateTime.Ticks;
    pFVar30[1].NotificationText.TimeSpan.Ticks = lVar9;
    bVar15 = pFVar32[-1].NotificationText.IsExpression;
    uVar16 = *(undefined3 *)&pFVar32[-1].NotificationText.field_0x2d;
    pFVar6 = pFVar32[-1].NotificationText.UniqueString.Data.AllocatorInstance.Data;
    pFVar30[1].NotificationText.TimeExpressionType = pFVar32[-1].NotificationText.TimeExpressionType
    ;
    pFVar30[1].NotificationText.IsExpression = bVar15;
    *(undefined3 *)&pFVar30[1].NotificationText.field_0x2d = uVar16;
    pFVar30[1].NotificationText.UniqueString.Data.AllocatorInstance.Data = pFVar6;
    iVar28 = pFVar32[-1].NotificationText.UniqueString.Data.ArrayMax;
    pFVar6 = pFVar32[-1].NotificationText.FormatArgs.AllocatorInstance.Data;
    pFVar30[1].NotificationText.UniqueString.Data.ArrayNum =
         pFVar32[-1].NotificationText.UniqueString.Data.ArrayNum;
    pFVar30[1].NotificationText.UniqueString.Data.ArrayMax = iVar28;
    pFVar30[1].NotificationText.FormatArgs.AllocatorInstance.Data = pFVar6;
    iVar28 = pFVar32[-1].NotificationText.FormatArgs.ArrayMax;
    pFVar30[1].NotificationText.FormatArgs.ArrayNum =
         pFVar32[-1].NotificationText.FormatArgs.ArrayNum;
    pFVar30[1].NotificationText.FormatArgs.ArrayMax = iVar28;
    pFVar31->NotificationType = EVar17;
    *(undefined7 *)&pFVar31->field_0x1 = uVar12;
    pFVar32[-1].NotificationText.StringTableType = EVar13;
    *(undefined7 *)&pFVar32[-1].NotificationText.field_0x1 = uVar14;
    pFVar32[-1].NotificationText.StringTableID = lVar2;
    pFVar32[-1].NotificationText.StringEnumTableNameID = FVar3;
    pFVar32[-1].NotificationText.DateTime.Ticks = lVar4;
    pFVar32[-1].NotificationText.TimeSpan.Ticks = lVar5;
    pFVar32[-1].NotificationText.TimeExpressionType = EVar21;
    pFVar32[-1].NotificationText.IsExpression = bVar22;
    *(undefined3 *)&pFVar32[-1].NotificationText.field_0x2d = uVar23;
    pFVar32[-1].NotificationText.UniqueString.Data.AllocatorInstance.Data = pFVar7;
    pFVar32[-1].NotificationText.UniqueString.Data.ArrayNum = iVar24;
    pFVar32[-1].NotificationText.UniqueString.Data.ArrayMax = iVar25;
    pFVar32[-1].NotificationText.FormatArgs.AllocatorInstance.Data = pFVar10;
    pFVar32[-1].NotificationText.FormatArgs.ArrayNum = iVar26;
    pFVar32[-1].NotificationText.FormatArgs.ArrayMax = iVar27;
    goto LAB_14bae8a30;
  }
  EVar17 = pFVar33->NotificationType;
  uVar12 = *(undefined7 *)&pFVar33->field_0x1;
  EVar13 = (pFVar33->NotificationText).StringTableType;
  uVar14 = *(undefined7 *)&(pFVar33->NotificationText).field_0x1;
  lVar2 = (pFVar33->NotificationText).StringTableID;
  FVar3 = (pFVar33->NotificationText).StringEnumTableNameID;
  local_368._0_4_ = (int)local_368 + -1;
  lVar4 = (pFVar33->NotificationText).DateTime.Ticks;
  lVar5 = (pFVar33->NotificationText).TimeSpan.Ticks;
  EVar21 = (pFVar33->NotificationText).TimeExpressionType;
  bVar22 = (pFVar33->NotificationText).IsExpression;
  uVar23 = *(undefined3 *)&(pFVar33->NotificationText).field_0x2d;
  pFVar6 = (pFVar33->NotificationText).UniqueString.Data.AllocatorInstance.Data;
  iVar24 = (pFVar33->NotificationText).UniqueString.Data.ArrayNum;
  iVar25 = (pFVar33->NotificationText).UniqueString.Data.ArrayMax;
  pFVar7 = (pFVar33->NotificationText).FormatArgs.AllocatorInstance.Data;
  iVar26 = (pFVar33->NotificationText).FormatArgs.ArrayNum;
  iVar27 = (pFVar33->NotificationText).FormatArgs.ArrayMax;
  *(undefined8 *)pFVar33 = *(undefined8 *)pFVar31;
  *(undefined8 *)&pFVar33->NotificationText = uVar11;
  FVar8 = pFVar32[-1].NotificationText.StringEnumTableNameID;
  (pFVar33->NotificationText).StringTableID = pFVar32[-1].NotificationText.StringTableID;
  (pFVar33->NotificationText).StringEnumTableNameID = FVar8;
  lVar9 = pFVar32[-1].NotificationText.TimeSpan.Ticks;
  (pFVar33->NotificationText).DateTime.Ticks = pFVar32[-1].NotificationText.DateTime.Ticks;
  (pFVar33->NotificationText).TimeSpan.Ticks = lVar9;
  bVar15 = pFVar32[-1].NotificationText.IsExpression;
  uVar16 = *(undefined3 *)&pFVar32[-1].NotificationText.field_0x2d;
  pFVar10 = pFVar32[-1].NotificationText.UniqueString.Data.AllocatorInstance.Data;
  (pFVar33->NotificationText).TimeExpressionType = pFVar32[-1].NotificationText.TimeExpressionType;
  (pFVar33->NotificationText).IsExpression = bVar15;
  *(undefined3 *)&(pFVar33->NotificationText).field_0x2d = uVar16;
  (pFVar33->NotificationText).UniqueString.Data.AllocatorInstance.Data = pFVar10;
  iVar28 = pFVar32[-1].NotificationText.UniqueString.Data.ArrayMax;
  pFVar10 = pFVar32[-1].NotificationText.FormatArgs.AllocatorInstance.Data;
  (pFVar33->NotificationText).UniqueString.Data.ArrayNum =
       pFVar32[-1].NotificationText.UniqueString.Data.ArrayNum;
  (pFVar33->NotificationText).UniqueString.Data.ArrayMax = iVar28;
  (pFVar33->NotificationText).FormatArgs.AllocatorInstance.Data = pFVar10;
  iVar28 = pFVar32[-1].NotificationText.FormatArgs.ArrayMax;
  (pFVar33->NotificationText).FormatArgs.ArrayNum = pFVar32[-1].NotificationText.FormatArgs.ArrayNum
  ;
  (pFVar33->NotificationText).FormatArgs.ArrayMax = iVar28;
  pFVar31->NotificationType = EVar17;
  *(undefined7 *)&pFVar31->field_0x1 = uVar12;
  pFVar32[-1].NotificationText.StringTableType = EVar13;
  *(undefined7 *)&pFVar32[-1].NotificationText.field_0x1 = uVar14;
  pFVar32[-1].NotificationText.StringTableID = lVar2;
  pFVar32[-1].NotificationText.StringEnumTableNameID = FVar3;
  pFVar32[-1].NotificationText.DateTime.Ticks = lVar4;
  pFVar32[-1].NotificationText.TimeSpan.Ticks = lVar5;
  pFVar32[-1].NotificationText.TimeExpressionType = EVar21;
  pFVar32[-1].NotificationText.IsExpression = bVar22;
  *(undefined3 *)&pFVar32[-1].NotificationText.field_0x2d = uVar23;
  pFVar32[-1].NotificationText.UniqueString.Data.AllocatorInstance.Data = pFVar6;
  pFVar32[-1].NotificationText.UniqueString.Data.ArrayNum = iVar24;
  pFVar32[-1].NotificationText.UniqueString.Data.ArrayMax = iVar25;
  pFVar32[-1].NotificationText.FormatArgs.AllocatorInstance.Data = pFVar7;
  pFVar32[-1].NotificationText.FormatArgs.ArrayNum = iVar26;
  pFVar32[-1].NotificationText.FormatArgs.ArrayMax = iVar27;
  if (((longlong)pFVar31 + (-0x58 - (longlong)pFVar33)) / 0x58 <
      ((longlong)pFVar29 - (longlong)pFVar34) / 0x58) {
    if (pFVar34 < pFVar29) {
      *ppFVar35 = pFVar34;
      ppFVar35[1] = pFVar29;
      *(int *)(ppFVar35 + 2) = (int)local_368;
      ppFVar35 = ppFVar35 + 3;
    }
    if (pFVar31 <= pFVar33 + 1) goto LAB_14bae8c06;
    pFVar29 = pFVar32 + -2;
    pFVar34 = pFVar33;
  }
  else {
    if (pFVar33 + 1 < pFVar31) {
      *ppFVar35 = pFVar33;
      ppFVar35[1] = pFVar32 + -2;
      *(int *)(ppFVar35 + 2) = (int)local_368;
      ppFVar35 = ppFVar35 + 3;
    }
    if (pFVar29 <= pFVar34) goto LAB_14bae8c06;
  }
  iVar28 = (int)(((longlong)pFVar29 - (longlong)pFVar34) / 0x58) + 1;
  pFVar33 = pFVar34;
  if ((int)local_368 == 0) goto LAB_14bae8bf7;
  goto LAB_14bae89a0;
}

// IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`UDS_LanguageManager::InitBanNamePatterns'::__l17::<lambda_1>_>_> @ 14bae8d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_UDS_LanguageManager::InitBanNamePatterns_::__l17::<lambda_1>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_protected:_void___cdecl_UDS_LanguageManager::InitBanNamePatterns(void)_::_17_::<lambda_1>_>
          param_4)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  FString *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  FString *pFVar16;
  FString **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FString *local_348;
  FString *local_338;
  FString *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar16 = ppFVar17[1];
      pFVar15 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
      local_348._0_4_ = (int)pFVar1;
      pFVar14 = pFVar15;
      if ((int)local_348 != 0) {
LAB_14bae8dd0:
        if (8 < iVar9) {
          iVar10 = (pFVar14->Data).ArrayNum;
          iVar2 = (pFVar14->Data).ArrayMax;
          pFVar11 = pFVar16 + 1;
          pFVar15 = pFVar14 + iVar9 / 2;
          pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
          iVar7 = (pFVar15->Data).ArrayNum;
          iVar8 = (pFVar15->Data).ArrayMax;
          pFVar15 = pFVar14 + iVar9 / 2;
          (pFVar15->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
          (pFVar15->Data).ArrayNum = iVar10;
          (pFVar15->Data).ArrayMax = iVar2;
          (pFVar14->Data).AllocatorInstance.Data = pFVar3;
          (pFVar14->Data).ArrayNum = iVar7;
          (pFVar14->Data).ArrayMax = iVar8;
          pFVar15 = pFVar14;
LAB_14bae8e00:
          pFVar13 = pFVar15;
          pFVar15 = pFVar13 + 1;
          if (pFVar15 <= pFVar16) goto code_r0x00014bae8e09;
          goto LAB_14bae8e27;
        }
        for (; pFVar1 = pFVar14, pFVar15 = pFVar14, pFVar14 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar11 = pFVar1, pFVar1 = pFVar15 + 1, pFVar1 <= pFVar16) {
            iVar10 = pFVar15[1].Data.ArrayNum;
            iVar2 = (pFVar11->Data).ArrayNum;
            iVar9 = iVar10 + -1;
            if (iVar10 == 0) {
              iVar9 = 0;
            }
            iVar10 = iVar2 + -1;
            if (iVar2 == 0) {
              iVar10 = 0;
            }
            pFVar15 = pFVar1;
            if (iVar10 <= iVar9) {
              pFVar1 = pFVar11;
            }
          }
          pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
          iVar2 = (pFVar11->Data).ArrayNum;
          iVar7 = (pFVar11->Data).ArrayMax;
          iVar9 = (pFVar16->Data).ArrayNum;
          iVar10 = (pFVar16->Data).ArrayMax;
          (pFVar11->Data).AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar11->Data).ArrayNum = iVar9;
          (pFVar11->Data).ArrayMax = iVar10;
          (pFVar16->Data).AllocatorInstance.Data = pFVar3;
          (pFVar16->Data).ArrayNum = iVar2;
          (pFVar16->Data).ArrayMax = iVar7;
        }
        goto LAB_14bae8efc;
      }
LAB_14bae8eeb:
      local_348 = pFVar1;
      HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_UDS_LanguageManager::InitBanNamePatterns_::__l17::<lambda_1>_>_>
                (pFVar15,iVar9,param_3,param_4);
LAB_14bae8efc:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x00014bae8e09:
  iVar10 = pFVar13[1].Data.ArrayNum;
  iVar2 = (pFVar14->Data).ArrayNum;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = 0;
  }
  iVar10 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar10 = 0;
  }
  if (iVar10 <= iVar9) goto LAB_14bae8e00;
LAB_14bae8e27:
  do {
    pFVar12 = pFVar11;
    pFVar11 = pFVar12 + -1;
    if (pFVar11 <= pFVar14) break;
    iVar10 = pFVar12[-1].Data.ArrayNum;
    iVar2 = (pFVar14->Data).ArrayNum;
    iVar9 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar9 = 0;
    }
    iVar10 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar10 = 0;
    }
  } while (iVar9 <= iVar10);
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  uVar4 = pFVar12[-1].Data.ArrayNum;
  uVar5 = pFVar12[-1].Data.ArrayMax;
  if (pFVar15 <= pFVar11) {
    pFVar6 = (pFVar15->Data).AllocatorInstance.Data;
    iVar9 = pFVar13[1].Data.ArrayNum;
    iVar10 = pFVar13[1].Data.ArrayMax;
    (pFVar15->Data).AllocatorInstance.Data = pFVar3;
    pFVar13[1].Data.ArrayNum = uVar4;
    pFVar13[1].Data.ArrayMax = uVar5;
    (pFVar11->Data).AllocatorInstance.Data = pFVar6;
    pFVar12[-1].Data.ArrayNum = iVar9;
    pFVar12[-1].Data.ArrayMax = iVar10;
    goto LAB_14bae8e00;
  }
  pFVar6 = (pFVar14->Data).AllocatorInstance.Data;
  iVar9 = (pFVar14->Data).ArrayNum;
  iVar10 = (pFVar14->Data).ArrayMax;
  local_348._0_4_ = (int)local_348 + -1;
  (pFVar14->Data).AllocatorInstance.Data = pFVar3;
  (pFVar14->Data).ArrayNum = uVar4;
  (pFVar14->Data).ArrayMax = uVar5;
  (pFVar11->Data).AllocatorInstance.Data = pFVar6;
  pFVar12[-1].Data.ArrayNum = iVar9;
  pFVar12[-1].Data.ArrayMax = iVar10;
  if ((longlong)((longlong)pFVar11 + (-0x10 - (longlong)pFVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar15 & 0xfffffffffffffff0U)) {
    if (pFVar15 < pFVar16) {
      *ppFVar17 = pFVar15;
      ppFVar17[1] = pFVar16;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar11 <= pFVar14 + 1) goto LAB_14bae8efc;
    pFVar16 = pFVar12 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar11) {
      *ppFVar17 = pFVar14;
      ppFVar17[1] = pFVar12 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar16 <= pFVar15) goto LAB_14bae8efc;
  }
  iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
  pFVar14 = pFVar15;
  if ((int)local_348 == 0) goto LAB_14bae8eeb;
  goto LAB_14bae8dd0;
}

// IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`UDS_LanguageManager::InitBanWordPatterns'::__l17::<lambda_1>_>_> @ 14bae8fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_UDS_LanguageManager::InitBanWordPatterns_::__l17::<lambda_1>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_protected:_void___cdecl_UDS_LanguageManager::InitBanWordPatterns(void)_::_17_::<lambda_1>_>
          param_4)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  FString *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  FString *pFVar16;
  FString **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FString *local_348;
  FString *local_338;
  FString *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar16 = ppFVar17[1];
      pFVar15 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
      local_348._0_4_ = (int)pFVar1;
      pFVar14 = pFVar15;
      if ((int)local_348 != 0) {
LAB_14bae9080:
        if (8 < iVar9) {
          iVar10 = (pFVar14->Data).ArrayNum;
          iVar2 = (pFVar14->Data).ArrayMax;
          pFVar11 = pFVar16 + 1;
          pFVar15 = pFVar14 + iVar9 / 2;
          pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
          iVar7 = (pFVar15->Data).ArrayNum;
          iVar8 = (pFVar15->Data).ArrayMax;
          pFVar15 = pFVar14 + iVar9 / 2;
          (pFVar15->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
          (pFVar15->Data).ArrayNum = iVar10;
          (pFVar15->Data).ArrayMax = iVar2;
          (pFVar14->Data).AllocatorInstance.Data = pFVar3;
          (pFVar14->Data).ArrayNum = iVar7;
          (pFVar14->Data).ArrayMax = iVar8;
          pFVar15 = pFVar14;
LAB_14bae90b0:
          pFVar13 = pFVar15;
          pFVar15 = pFVar13 + 1;
          if (pFVar15 <= pFVar16) goto code_r0x00014bae90b9;
          goto LAB_14bae90d7;
        }
        for (; pFVar1 = pFVar14, pFVar15 = pFVar14, pFVar14 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar11 = pFVar1, pFVar1 = pFVar15 + 1, pFVar1 <= pFVar16) {
            iVar10 = pFVar15[1].Data.ArrayNum;
            iVar2 = (pFVar11->Data).ArrayNum;
            iVar9 = iVar10 + -1;
            if (iVar10 == 0) {
              iVar9 = 0;
            }
            iVar10 = iVar2 + -1;
            if (iVar2 == 0) {
              iVar10 = 0;
            }
            pFVar15 = pFVar1;
            if (iVar10 <= iVar9) {
              pFVar1 = pFVar11;
            }
          }
          pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
          iVar2 = (pFVar11->Data).ArrayNum;
          iVar7 = (pFVar11->Data).ArrayMax;
          iVar9 = (pFVar16->Data).ArrayNum;
          iVar10 = (pFVar16->Data).ArrayMax;
          (pFVar11->Data).AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar11->Data).ArrayNum = iVar9;
          (pFVar11->Data).ArrayMax = iVar10;
          (pFVar16->Data).AllocatorInstance.Data = pFVar3;
          (pFVar16->Data).ArrayNum = iVar2;
          (pFVar16->Data).ArrayMax = iVar7;
        }
        goto LAB_14bae91ac;
      }
LAB_14bae919b:
      local_348 = pFVar1;
      HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_UDS_LanguageManager::InitBanWordPatterns_::__l17::<lambda_1>_>_>
                (pFVar15,iVar9,param_3,param_4);
LAB_14bae91ac:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x00014bae90b9:
  iVar10 = pFVar13[1].Data.ArrayNum;
  iVar2 = (pFVar14->Data).ArrayNum;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = 0;
  }
  iVar10 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar10 = 0;
  }
  if (iVar10 <= iVar9) goto LAB_14bae90b0;
LAB_14bae90d7:
  do {
    pFVar12 = pFVar11;
    pFVar11 = pFVar12 + -1;
    if (pFVar11 <= pFVar14) break;
    iVar10 = pFVar12[-1].Data.ArrayNum;
    iVar2 = (pFVar14->Data).ArrayNum;
    iVar9 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar9 = 0;
    }
    iVar10 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar10 = 0;
    }
  } while (iVar9 <= iVar10);
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  uVar4 = pFVar12[-1].Data.ArrayNum;
  uVar5 = pFVar12[-1].Data.ArrayMax;
  if (pFVar15 <= pFVar11) {
    pFVar6 = (pFVar15->Data).AllocatorInstance.Data;
    iVar9 = pFVar13[1].Data.ArrayNum;
    iVar10 = pFVar13[1].Data.ArrayMax;
    (pFVar15->Data).AllocatorInstance.Data = pFVar3;
    pFVar13[1].Data.ArrayNum = uVar4;
    pFVar13[1].Data.ArrayMax = uVar5;
    (pFVar11->Data).AllocatorInstance.Data = pFVar6;
    pFVar12[-1].Data.ArrayNum = iVar9;
    pFVar12[-1].Data.ArrayMax = iVar10;
    goto LAB_14bae90b0;
  }
  pFVar6 = (pFVar14->Data).AllocatorInstance.Data;
  iVar9 = (pFVar14->Data).ArrayNum;
  iVar10 = (pFVar14->Data).ArrayMax;
  local_348._0_4_ = (int)local_348 + -1;
  (pFVar14->Data).AllocatorInstance.Data = pFVar3;
  (pFVar14->Data).ArrayNum = uVar4;
  (pFVar14->Data).ArrayMax = uVar5;
  (pFVar11->Data).AllocatorInstance.Data = pFVar6;
  pFVar12[-1].Data.ArrayNum = iVar9;
  pFVar12[-1].Data.ArrayMax = iVar10;
  if ((longlong)((longlong)pFVar11 + (-0x10 - (longlong)pFVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar15 & 0xfffffffffffffff0U)) {
    if (pFVar15 < pFVar16) {
      *ppFVar17 = pFVar15;
      ppFVar17[1] = pFVar16;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar11 <= pFVar14 + 1) goto LAB_14bae91ac;
    pFVar16 = pFVar12 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar11) {
      *ppFVar17 = pFVar14;
      ppFVar17[1] = pFVar12 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar16 <= pFVar15) goto LAB_14bae91ac;
  }
  iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
  pFVar14 = pFVar15;
  if ((int)local_348 == 0) goto LAB_14bae919b;
  goto LAB_14bae9080;
}

// MakeContext<FDS_ViewModelContext_ItemDetailInfo> @ 14bae9270

TSharedPtr<FDS_ViewModelContext_ItemDetailInfo,1> * __cdecl
MakeContext<FDS_ViewModelContext_ItemDetailInfo>
          (TSharedPtr<FDS_ViewModelContext_ItemDetailInfo,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_ItemDetailInfo *pFVar3;
  FDS_ViewModelContext_ItemDetailInfo *pFVar4;
  TSharedPtr<FDS_ViewModelContext_ItemDetailInfo,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_ItemDetailInfo *pFVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x50);
  pFVar4 = (FDS_ViewModelContext_ItemDetailInfo *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_ItemDetailInfo *)0x0) {
    pFVar3->_padding_ = 0;
    (pFVar3->ItemData_Comparison).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar3->InfoType = Normal;
    pFVar3->PopupType = FocusPopup;
    pFVar3->bCloseWindow = false;
    pFVar3->_padding_ = '\0';
    *(undefined4 *)&(pFVar3->OnClickCloseDelegate).field_0x0 = 0;
    *(undefined8 *)&(pFVar3->OnClickCloseDelegate).field_0x4 = 0;
    *(undefined8 *)&(pFVar3->OnClickCloseDelegate).field_0xc = 0;
    *(undefined4 *)&(pFVar3->OnClickCloseDelegate).field_0x14 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_ItemDetailInfo__6B_;
    pFVar3->ItemTID = 0;
    (pFVar3->ItemData).WeakPtr = (FWeakObjectPtr)0x0;
    local_res8 = 0;
    FWeakObjectPtr::operator=(&(pFVar3->ItemData).WeakPtr,(FObjectPtr)&local_res8);
    local_res10 = 0;
    (pFVar3->ItemData_Comparison).WeakPtr = (FWeakObjectPtr)0x0;
    FWeakObjectPtr::operator=(&(pFVar3->ItemData_Comparison).WeakPtr,(FObjectPtr)&local_res10);
    pFVar3->InfoType = Normal;
    pFVar3->PopupType = FocusPopup;
    pFVar3->bCloseWindow = false;
    *(undefined8 *)&pFVar3->OnClickCloseDelegate = 0;
    *(undefined8 *)&(pFVar3->OnClickCloseDelegate).field_0x8 = 0;
    *(undefined4 *)&(pFVar3->OnClickCloseDelegate).field_0x10 = 0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_ItemDetailInfo *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ItemDetailInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_ItemDetailInfo *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_ItemDetailInfo,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_ItemDetailInfo::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// NewObject<UDS_ContentsBuilder> @ 14bae93e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ContentsBuilder * __cdecl NewObject<UDS_ContentsBuilder>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ContentsBuilder *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ContentsBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ContentsBuilder *)
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

// NewObject<UDS_ContentsTabBuilder> @ 14bae9480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ContentsTabBuilder * __cdecl NewObject<UDS_ContentsTabBuilder>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ContentsTabBuilder *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ContentsTabBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ContentsTabBuilder *)
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

// NewObject<UDS_DungeonFilterData> @ 14bae9520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_DungeonFilterData * __cdecl NewObject<UDS_DungeonFilterData>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_DungeonFilterData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_DungeonFilterData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_DungeonFilterData *)
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

// NewObject<UDS_GameOptionData> @ 14bae95c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_GameOptionData * __cdecl NewObject<UDS_GameOptionData>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_GameOptionData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_GameOptionData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_GameOptionData *)
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

// NewObject<UDS_GuildEvent> @ 14bae9660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_GuildEvent * __cdecl NewObject<UDS_GuildEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_GuildEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_GuildEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_GuildEvent *)
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

// NewObject<UDS_LoginEvent> @ 14bae9700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LoginEvent * __cdecl NewObject<UDS_LoginEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_LoginEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LoginEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_LoginEvent *)
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

// NewObject<UDS_MailEvent> @ 14bae97a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_MailEvent * __cdecl NewObject<UDS_MailEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_MailEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_MailEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_MailEvent *)
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

// NewObject<UDS_NpcFunctionBuilder> @ 14bae9840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_NpcFunctionBuilder * __cdecl NewObject<UDS_NpcFunctionBuilder>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_NpcFunctionBuilder *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_NpcFunctionBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_NpcFunctionBuilder *)
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

// NewObject<UDS_PacketProcessor> @ 14bae98e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PacketProcessor * __cdecl NewObject<UDS_PacketProcessor>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_PacketProcessor *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PacketProcessor_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_PacketProcessor *)
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

// NewObject<UDS_TransportWarpContext> @ 14bae9980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_TransportWarpContext * __cdecl NewObject<UDS_TransportWarpContext>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_TransportWarpContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_TransportWarpContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_TransportWarpContext *)
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

// get<1,TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>_&> @ 14baec080

TSharedPtr<FDS_ClientMessage_Twoway,1> * __cdecl
get<1,TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>_&>
          (TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_> *param_1)

{
  return (TSharedPtr<FDS_ClientMessage_Twoway,1> *)&param_1->field_0x8;
}

// get<1,TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_&> @ 14baec090

TWeakObjectPtr<AActor,FWeakObjectPtr> * __cdecl
get<1,TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_&>
          (TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_> *param_1)

{
  return (TWeakObjectPtr<AActor,FWeakObjectPtr> *)&param_1->field_0x8;
}

// get<0,TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>_&> @ 14baec0a0

uint * __cdecl
get<0,TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>_&>
          (TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_> *param_1)

{
  return (uint *)param_1;
}

// get<0,TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_&> @ 14baec0b0

ulong64 * __cdecl
get<0,TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_&>
          (TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_> *param_1)

{
  return (ulong64 *)param_1;
}

// ~ArrayOutputStream @ 14baedfe0

void __thiscall google::protobuf::io::ArrayOutputStream::~ArrayOutputStream(ArrayOutputStream *this)

{
  this->_padding_ = (longlong)ZeroCopyOutputStream::vftable;
  return;
}

// `scalar_deleting_destructor' @ 14baee670

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee6a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee6d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee700

void * __thiscall
IBaseDelegateInstance<void___cdecl(UActorComponent_*,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UActorComponent_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee730

void * __thiscall
IBaseDelegateInstance<void___cdecl(UDS_GameOptionData_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UDS_GameOptionData_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee760

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee790

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_AchievementCategory),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee7c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_ItemDetailInfoType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee7f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_LevelSequenceState),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee820

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_LoadingPhase),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee850

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_QuestType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee880

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee8b0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee8e0

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee910

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_DungeonManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_DungeonManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee940

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_DungeonManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_DungeonType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee970

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_DungeonManager,void___cdecl(enum_EDS_LoadingPhase),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee9a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_DungeonManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_DungeonManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baee9d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_DungeonPlayBuildManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_DungeonPlayBuildManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeea00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EffectManager,void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EffectManager,void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeea30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EffectManager,void___cdecl(UActorComponent_*,bool),FDefaultDelegateUserPolicy,TWeakObjectPtr<AActor,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EffectManager,void___cdecl(UActorComponent_*,bool),FDefaultDelegateUserPolicy,TWeakObjectPtr<AActor,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeea60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EffectManager,void___cdecl(void),FDefaultDelegateUserPolicy,FDS_EffectSpawnInfo>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EffectManager,void___cdecl(void),FDefaultDelegateUserPolicy,FDS_EffectSpawnInfo>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeeaf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EntityManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EntityManager,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeeb20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EntityManager,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EntityManager,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeeb50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EntityManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EntityManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeeb80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EventManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EventManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeebb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameOptionManager,void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameOptionManager,void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeebe0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameOptionManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_M_GameOptionDataColor,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameOptionManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_M_GameOptionDataColor,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeec10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameOptionManager,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameOptionManager,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeec40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameOptionManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameOptionManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeec70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_HudManager,void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_HudManager,void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeeca0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_HudManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_HudManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeecd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_HudManager,void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_HudManager,void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeed00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_HudManager,void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeed30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_HudManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_HudManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeed60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ItemDetailInfoManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ItemDetailInfoManager,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeed90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ItemDetailInfoManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ItemDetailInfoManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeedc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ItemDetailInfoManager,void___cdecl(enum_EDS_ItemDetailInfoType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeedf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ItemDetailInfoManager,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ItemDetailInfoManager,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeee20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_LanguageManager,void___cdecl(UDS_GameOptionData_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_LanguageManager,void___cdecl(UDS_GameOptionData_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeee50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_LanguageManager,void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_LanguageManager,void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeee80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_LanguageManager,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,UDS_GameOptionData_*>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_LanguageManager,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,UDS_GameOptionData_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeeeb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_LanguageManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_LanguageManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeeee0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MailManager,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MailManager,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeef10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MailManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MailManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeef40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_NetworkManager,void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_NetworkManager,void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeef70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_NetworkManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_NetworkManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeefa0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_NetworkManager,bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_NetworkManager,bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baeefd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_NotificationManager,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_NotificationManager,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef000

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_NotificationManager,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_NotificationManager,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef030

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_NotificationManager,void___cdecl(enum_EDS_AchievementCategory),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef060

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_NotificationManager,void___cdecl(enum_EDS_QuestType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef090

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_NotificationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_NotificationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef0c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_PhasingManager,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_PhasingManager,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef0f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_PhasingManager,void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_PhasingManager,void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef120

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_PhasingManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool,enum_EDS_PhasingContentsType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef150

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_PhasingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_PhasingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef180

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_PhasingManager,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned___int64,int>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_PhasingManager,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned___int64,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef1b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_PhasingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_PhasingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef1e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ProjectileManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ProjectileManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef210

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_QuestDialogueSceneManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_QuestDialogueSceneManager,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef240

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_QuestDialogueSceneManager,void___cdecl(enum_EDS_LevelSequenceState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef270

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_QuestDialogueSceneManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_QuestDialogueSceneManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef2a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_QuestManager,void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_QuestManager,void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef2d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnCharacterResponse_const_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef300

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy,server_msg::SpawnTransportResponse_const_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef330

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef360

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef390

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UActorComponent_*,bool),FDefaultDelegateUserPolicy,TWeakObjectPtr<AActor,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UActorComponent_*,bool),FDefaultDelegateUserPolicy,TWeakObjectPtr<AActor,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef3c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_GameOptionData_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_GameOptionData_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef3f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_M_GameOptionDataColor,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_M_GameOptionDataColor,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef420

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_DungeonType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef450

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,bool,enum_EDS_PhasingContentsType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef480

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,UDS_GameOptionData_*>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,UDS_GameOptionData_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef4b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef4e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef510

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_AchievementCategory),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef540

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_ItemDetailInfoType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef570

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_LevelSequenceState),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef5a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_LoadingPhase),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef5d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_QuestType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef600

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef630

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FDS_EffectSpawnInfo>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FDS_EffectSpawnInfo>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Payload).field_0xc0);
  pvVar1 = *(void **)&(this->Payload).field_0xc8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Payload).field_0xc0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0xb8);
  pvVar1 = *(void **)&(this->Payload).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef6c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,unsigned___int64,int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,unsigned___int64,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef6f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ViewModelContext,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDS_ViewModelContext,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef730

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRegexPattern,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRegexPattern,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef770

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_CharInfoData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_CharInfoData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef7b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_Common_RequestPopup,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_Common_RequestPopup,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef7f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_HudMenu,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_HudMenu,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef830

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_ItemDetailInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_ItemDetailInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef870

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_OptionColorPicker,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_OptionColorPicker,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef8b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_PhasingCompleteAlarm,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_PhasingCompleteAlarm,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14baef8f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_RaidPartyFinderFilter,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_RaidPartyFinderFilter,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// DS_CreateProtoMessageTypeResolver @ 14bb01eb0

void __cdecl DS_CreateProtoMessageTypeResolver(void)

{
  undefined8 *puVar1;
  unique_ptr<google::protobuf::util::TypeResolver,std::default_delete<google::protobuf::util::TypeResolver>_>
  uVar2;
  DescriptorPool *pDVar3;
  unique_ptr<google::protobuf::util::TypeResolver,std::default_delete<google::protobuf::util::TypeResolver>_>
  uVar4;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  uVar4._Mypair._Myval2 = sProtoMessageTypeResolver._Mypair._Myval2;
  if (sProtoMessageTypeResolver._Mypair._Myval2 == (TypeResolver *)0x0) {
    pDVar3 = google::protobuf::DescriptorPool::generated_pool();
    local_18._Mysize = 0x13;
    local_18._Mydata = "type.googleapis.com";
    uVar4._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<google::protobuf::util::TypeResolver>,google::protobuf::util::TypeResolver_*,1>
          )google::protobuf::util::NewTypeResolverForDescriptorPool(&local_18,pDVar3);
    uVar2 = sProtoMessageTypeResolver;
    if (sProtoMessageTypeResolver._Mypair._Myval2 != (TypeResolver *)0x0) {
      puVar1 = *(undefined8 **)sProtoMessageTypeResolver._Mypair._Myval2;
                    /* WARNING: Could not recover jumptable at 0x00014bb01f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      sProtoMessageTypeResolver._Mypair._Myval2 = uVar4._Mypair._Myval2;
      (*(code *)*puVar1)(uVar2._Mypair._Myval2,1);
      return;
    }
  }
  sProtoMessageTypeResolver._Mypair._Myval2 = uVar4._Mypair._Myval2;
  return;
}

// DS_GetProtoMessageTypeResolver @ 14bb01f20

TypeResolver * __cdecl DS_GetProtoMessageTypeResolver(void)

{
  return sProtoMessageTypeResolver._Mypair._Myval2._Myval2;
}

// GetStringEnumTableKey @ 14bb106d0

FName __cdecl DS_Util::GetStringEnumTableKey(UEnum *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName *pFVar4;
  int iVar5;
  undefined4 in_register_00000014;
  UEnum *this;
  int in_R8D;
  FName local_res10 [2];
  FName local_res20;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this = (UEnum *)CONCAT44(in_register_00000014,param_2);
  if (this != (UEnum *)0x0) {
    UEnum::GetNameStringByValue(this,&local_28,(longlong)in_R8D);
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,&local_38);
    ::FString::PrintfImpl(&local_48,L"%s_%s");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    pFVar4 = ::FName::FName(&local_res20,iVar5,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                            FNAME_Add);
    param_1->_padding_ = (longlong)*pFVar4;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return (FName)param_1;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8627520946023956263>,SUB41(param_2,0),
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",0xd9,
                     "false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// Empty'' @ 15043d980

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::~FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  return;
}

// Empty'' @ 15043d9a0

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  TDS_Singleton<FDS_HttpServer>::Empty._padding_ = (longlong)&___7FDS_HttpServer__6B_;
  FDS_Urls::~FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  return;
}

// Empty'' @ 15043d9c0

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_PartyRepo>::Empty__(void)

{
  FDS_PartyInfo::~FDS_PartyInfo(&TDS_Singleton<FDS_PartyRepo>::Empty.PartyInfo);
  return;
}

// Empty'' @ 15043d9e0

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

// PathSeparator'' @ 15043da40

void __cdecl `dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FControlRigOverrideValue::PathSeparator.Data.AllocatorInstance.Data;
  if (FControlRigOverrideValue::PathSeparator.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FControlRigOverrideValue::PathSeparator.Data.AllocatorInstance.Data !=
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

// RootNodeID'' @ 15043da60

void __cdecl `dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data;
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 15043da80

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

// `dynamic_atexit_destructor_for_'EmptyMountStepArray'' @ 15043daa0

void __cdecl
`UDS_MountManager::GetMountStepArrayByAbilityTag'::__l2::
_dynamic_atexit_destructor_for__EmptyMountStepArray__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyMountStepArray.AllocatorInstance.Data;
  if (EmptyMountStepArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyMountStepArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EnumNameCache'' @ 15043dac0

void __cdecl
`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemImplDetailData>'::__l2::
_dynamic_atexit_destructor_for__EnumNameCache__(void)

{
  `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
  ::__l2::EnumNameCache._72_4_ = 0;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
      ::__l2::EnumNameCache._64_8_ != 0) {
    FMemory::Free((void *)`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
                          ::__l2::EnumNameCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
                 ::__l2::EnumNameCache);
  return;
}

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 15043db00

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

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 15043db20

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

// `dynamic_atexit_destructor_for_'sProtoMessageTypeResolver'' @ 15043db40

void __cdecl _dynamic_atexit_destructor_for__sProtoMessageTypeResolver__(void)

{
  if (sProtoMessageTypeResolver._Mypair._Myval2 != (TypeResolver *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015043db54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)sProtoMessageTypeResolver._Mypair._Myval2)
              (sProtoMessageTypeResolver._Mypair._Myval2,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'swapTemp'' @ 15043db60

void __cdecl
`UDS_NetworkManager::ReceivePacketProcess'::__l2::_dynamic_atexit_destructor_for__swapTemp__(void)

{
  DestructItems<FDS_ServerMessage,int>
            ((FDS_ServerMessage *)swapTemp.AllocatorInstance.Data,swapTemp.ArrayNum);
  if (swapTemp.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(swapTemp.AllocatorInstance.Data);
    return;
  }
  return;
}

