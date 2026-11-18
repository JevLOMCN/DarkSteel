// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 229

// Bit'' @ 14126bb10

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::Bit__(void)

{
  FWidgetStateBitfield::FWidgetStateBitfield(&UWidgetLockedStateRegistration::Bit);
  return;
}

// Empty'' @ 14126bb30

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  FDS_Urls::FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__);
  return;
}

// PathSeparator'' @ 14126bb60

void __cdecl `dynamic_initializer_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ::FString::FString(&FControlRigOverrideValue::PathSeparator,L"->");
  atexit(`dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__);
  return;
}

// RootNodeID'' @ 14126bb90

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// StateName'' @ 14126bbc0

void __cdecl `dynamic_initializer_for_'UWidgetDisabledStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetDisabledStateRegistration::StateName,"Disabled");
  return;
}

// StateName'' @ 14126bbe0

void __cdecl `dynamic_initializer_for_'UWidgetHoveredStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetHoveredStateRegistration::StateName,"Hovered");
  return;
}

// StateName'' @ 14126bc00

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetLockedStateRegistration::StateName,"Locked");
  return;
}

// StateName'' @ 14126bc20

void __cdecl `dynamic_initializer_for_'UWidgetPressedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetPressedStateRegistration::StateName,"Pressed");
  return;
}

// StateName'' @ 14126bc40

void __cdecl `dynamic_initializer_for_'UWidgetSelectedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetSelectedStateRegistration::StateName,"Selected");
  return;
}

// `dynamic_initializer_for_'AbnormalStateTagMap'' @ 14126bc60

void __cdecl _dynamic_initializer_for__AbnormalStateTagMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__AbnormalStateTagMap__);
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 14126bc80

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 14126bca0

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

// `dynamic_initializer_for_'BoolTypeName'' @ 14126bcf0

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

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 14126bd40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 14126bd60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 14126bd80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 14126bda0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 14126bdc0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 14126bde0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 14126be00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 14126be20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 14126be40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 14126be60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 14126be80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 14126bea0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 14126bec0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 14126bee0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 14126bf00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 14126bf20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 14126bf40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 14126bf60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 14126bf80

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 14126bfa0

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

// `dynamic_initializer_for_'DESOLVE_INTENSITY_PARAM_NAME'' @ 14126c020

void __cdecl _dynamic_initializer_for__DESOLVE_INTENSITY_PARAM_NAME__(void)

{
  FName::FName(&DESOLVE_INTENSITY_PARAM_NAME,L"Dissolve_inten");
  return;
}

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 14126c040

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

// `dynamic_initializer_for_'DoubleTypeName'' @ 14126c090

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

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 14126c0e0

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

// `dynamic_initializer_for_'ErrorNamespace'' @ 14126c160

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 14126c190

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

// `dynamic_initializer_for_'FNameTypeName'' @ 14126c1e0

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

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 14126c230

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

// `dynamic_initializer_for_'FStringTypeName'' @ 14126c280

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

// `dynamic_initializer_for_'FTextTypeName'' @ 14126c2d0

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

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 14126c320

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

// `dynamic_initializer_for_'FloatTypeName'' @ 14126c370

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

// `dynamic_initializer_for_'HttpVersion'' @ 14126c3c0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 14126c3e0

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

// `dynamic_initializer_for_'Int32TypeName'' @ 14126c430

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

// `dynamic_initializer_for_'Int64TypeName'' @ 14126c480

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

// `dynamic_initializer_for_'IntTypeName'' @ 14126c4d0

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

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 14126c520

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 14126c540

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 14126c560

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 14126c580

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 14126c5a0

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 14126c5c0

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 14126c5e0

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 14126c600

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 14126c620

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 14126c640

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 14126c660

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 14126c680

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 14126c6a0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 14126c6c0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 14126c6e0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 14126c700

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

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 14126c790

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

// `dynamic_initializer_for_'UInt32TypeName'' @ 14126c7e0

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

// `dynamic_initializer_for_'UInt64TypeName'' @ 14126c830

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

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 14126c880

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

// `dynamic_initializer_for_'UInt8TypeName'' @ 14126c8d0

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

// `dynamic_initializer_for_'UnixSocketPath'' @ 14126c920

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZoneGroupTableRow_h__Script_ProjectDS_3838168283'' @ 14126c940

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZoneGroupTableRow_h__Script_ProjectDS_3838168283__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZoneGroupTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZoneIslandTableRow_h__Script_ProjectDS_3473110142'' @ 14126c980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZoneIslandTableRow_h__Script_ProjectDS_3473110142__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZoneIslandTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZonePropInfoTableRow_h__Script_ProjectDS_240584057'' @ 14126c9c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZonePropInfoTableRow_h__Script_ProjectDS_240584057__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZonePropInfoTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZoneResurrectionTableRow_h__Script_ProjectDS_3501011808'' @ 14126ca00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZoneResurrectionTableRow_h__Script_ProjectDS_3501011808__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_ZoneResurrectionTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ZoneEventNotifyType_h__Script_ProjectDS_3637935522'' @ 14126ca40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ZoneEventNotifyType_h__Script_ProjectDS_3637935522__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ZoneEventNotifyType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ZonePropType_h__Script_ProjectDS_3148475573'' @ 14126ca90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ZonePropType_h__Script_ProjectDS_3148475573__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ZonePropType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ZoneSpawnType_h__Script_ProjectDS_1374516930'' @ 14126cae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ZoneSpawnType_h__Script_ProjectDS_1374516930__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_ZoneSpawnType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_ZoneManager_h__Script_ProjectDS_3179229597'' @ 14126cb30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_ZoneManager_h__Script_ProjectDS_3179229597__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_ZoneManager_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ProjectDS'' @ 14126cb70

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ProjectDS__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x5c428daa;
  local_res8[0].DeclarationsHash = 0xe3df6508;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ProjectDS,L"/Script/ProjectDS",
             &Z_Registration_Info_UPackage__Script_ProjectDS,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14b792770

void * __thiscall
FDS_ZoneIslandTableRow::_scalar_deleting_destructor_(FDS_ZoneIslandTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MapResourcePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_Zone).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// NewStructOps @ 14b7927d0

void * __cdecl Z_Construct_UScriptStruct_FDS_ZoneIslandTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ZoneIslandTableRow,&UE::CoreUObject::Private::Construct<FDS_ZoneIslandTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ZoneIslandTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ZoneIslandTableRow>,&UE::CoreUObject::Private::Copy<FDS_ZoneIslandTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b792a90

void * __thiscall
FDS_ZoneGroupTableRow::_scalar_deleting_destructor_(FDS_ZoneGroupTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
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

// NewStructOps @ 14b792ae0

void * __cdecl Z_Construct_UScriptStruct_FDS_ZoneGroupTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ZoneGroupTableRow,&UE::CoreUObject::Private::Construct<FDS_ZoneGroupTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ZoneGroupTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ZoneGroupTableRow>,&UE::CoreUObject::Private::Copy<FDS_ZoneGroupTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDS_ZoneManager @ 14b792b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_ZoneManager(void)

{
  if (Z_Registration_Info_UClass_UDS_ZoneManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_ZoneManager.OuterSingleton,
               &Z_Construct_UClass_UDS_ZoneManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_ZoneManager.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b792ba0

void * __thiscall
FDS_ZonePropInfoTableRow::_scalar_deleting_destructor_(FDS_ZonePropInfoTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_ZoneBuff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ZoneProp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// Z_Construct_UEnum_ProjectDS_EDS_ZonePropType @ 14b792c00

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_ZonePropType(void)

{
  if (Z_Registration_Info_UEnum_EDS_ZonePropType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_ZonePropType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_ZonePropType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_ZonePropType.InnerSingleton;
}

// NewStructOps @ 14b792c40

void * __cdecl Z_Construct_UScriptStruct_FDS_ZonePropInfoTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ZonePropInfoTableRow,&UE::CoreUObject::Private::Construct<FDS_ZonePropInfoTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ZonePropInfoTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ZonePropInfoTableRow>,&UE::CoreUObject::Private::Copy<FDS_ZonePropInfoTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EDS_ZonePropType_StaticEnum @ 14b792c80

UEnum * __cdecl EDS_ZonePropType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ZonePropType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ZonePropType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ZonePropType,(UObject *)pUVar1,
                       L"EDS_ZonePropType");
  }
  return Z_Registration_Info_UEnum_EDS_ZonePropType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b792d00

void * __thiscall
FDS_ZoneResurrectionTableRow::_scalar_deleting_destructor_
          (FDS_ZoneResurrectionTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 14b792d50

void * __cdecl Z_Construct_UScriptStruct_FDS_ZoneResurrectionTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_ZoneResurrectionTableRow,&UE::CoreUObject::Private::Construct<FDS_ZoneResurrectionTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_ZoneResurrectionTableRow>,&UE::CoreUObject::Private::Destruct<FDS_ZoneResurrectionTableRow>,&UE::CoreUObject::Private::Copy<FDS_ZoneResurrectionTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EDS_ZoneSpawnType_StaticEnum @ 14b792d90

UEnum * __cdecl EDS_ZoneSpawnType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ZoneSpawnType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ZoneSpawnType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ZoneSpawnType,(UObject *)pUVar1,
                       L"EDS_ZoneSpawnType");
  }
  return Z_Registration_Info_UEnum_EDS_ZoneSpawnType.OuterSingleton;
}

// Z_Construct_UPackage__Script_ProjectDS @ 14b7930e0

UPackage * __cdecl Z_Construct_UPackage__Script_ProjectDS(void)

{
  if (Z_Registration_Info_UPackage__Script_ProjectDS.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ProjectDS.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ProjectDS.OuterSingleton;
}

// EDS_ZoneEventNotifyType_StaticEnum @ 14b793120

UEnum * __cdecl EDS_ZoneEventNotifyType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ZoneEventNotifyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ZoneEventNotifyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ZoneEventNotifyType,(UObject *)pUVar1,
                       L"EDS_ZoneEventNotifyType");
  }
  return Z_Registration_Info_UEnum_EDS_ZoneEventNotifyType.OuterSingleton;
}

// CastChecked<ADS_PowerJumpGuideActor,AActor> @ 14b796040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_PowerJumpGuideActor * __cdecl
CastChecked<ADS_PowerJumpGuideActor,AActor>(AActor *param_1,Type param_2)

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
      return (ADS_PowerJumpGuideActor *)0x0;
    }
    pFVar3 = GetTypeName<ADS_PowerJumpGuideActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ADS_PowerJumpGuideActor_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ADS_PowerJumpGuideActor *)param_1;
  }
  pFVar3 = GetTypeName<ADS_PowerJumpGuideActor>(&local_28);
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

// ConstructItems<FDS_AtomicImpactInfo,FDS_AtomicImpactInfo,int> @ 14b796120

void __cdecl
ConstructItems<FDS_AtomicImpactInfo,FDS_AtomicImpactInfo,int>
          (void *param_1,FDS_AtomicImpactInfo *param_2,int param_3)

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
    piVar5 = (int *)((longlong)param_1 + 0x14);
    piVar6 = &(param_2->MulDamage).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar5 + -3);
      *(char *)((longlong)piVar6 + (longlong)param_1 + (-0x20 - (longlong)param_2)) =
           (char)piVar6[-8];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar6[-4];
      _Src = *(void **)(piVar6 + -6);
      piVar5[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,pFVar1,iVar3,piVar5);
        memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 2);
      }
      piVar5[1] = 0;
      piVar5[2] = 0;
      iVar3 = *piVar6;
      _Src_00 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->AllocatorInstance).Data
      ;
      piVar5[3] = iVar3;
      if (iVar3 == 0) {
        piVar5[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,(ForAnyElementType *)(piVar5 + 1),iVar3,piVar5 + 4);
        memcpy(((ForAnyElementType *)(piVar5 + 1))->Data,_Src_00,(longlong)iVar3 << 2);
      }
      piVar5[5] = piVar6[2];
      piVar5[6] = piVar6[3];
      piVar5[7] = piVar6[4];
      piVar5[8] = piVar6[5];
      piVar5[9] = piVar6[6];
      piVar5[10] = piVar6[7];
      uVar4 = *(undefined8 *)(piVar6 + 10);
      *(undefined8 *)(piVar5 + 0xb) = *(undefined8 *)(piVar6 + 8);
      *(undefined8 *)(piVar5 + 0xd) = uVar4;
      *(undefined8 *)(piVar5 + 0xf) = *(undefined8 *)(piVar6 + 0xc);
      piVar5[0x11] = piVar6[0xe];
      piVar5[0x12] = piVar6[0xf];
      piVar5[0x13] = piVar6[0x10];
      piVar5[0x14] = piVar6[0x11];
      piVar5[0x15] = piVar6[0x12];
      piVar5[0x16] = piVar6[0x13];
      piVar5[0x17] = piVar6[0x14];
      piVar2 = piVar6 + 0x15;
      piVar6 = piVar6 + 0x1e;
      piVar5[0x18] = *piVar2;
      piVar5 = piVar5 + 0x1e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// GetTypeName<ADS_PowerJumpGuideActor> @ 14b799620

FString * __cdecl GetTypeName<ADS_PowerJumpGuideActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ADS_PowerJumpGuideActor_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UDS_ZoneManager> @ 14b799660

void __cdecl InternalConstructor<UDS_ZoneManager>(FObjectInitializer *param_1)

{
  UDS_ManagerBase *this;
  
  this = (UDS_ManagerBase *)param_1->Obj;
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_ZoneManager__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].bIsBeingDestroyed = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].bIsBeingDestroyed = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].bIsBeingDestroyed = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 2;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDS_ZoneManager> @ 14b799710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_ZoneManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ManagerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_ZoneManager::GetPrivateStaticClass();
  this = (UDS_ManagerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDS_ZoneManager__6B_;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].bIsBeingDestroyed = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].bIsBeingDestroyed = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].bIsBeingDestroyed = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// LoadObjFromPath<UCurveFloat> @ 14b799840

UCurveFloat * __cdecl DS_Util::LoadObjFromPath<UCurveFloat>(FName *param_1)

{
  int iVar1;
  FString *pFVar2;
  size_t sVar3;
  UClass *pUVar4;
  UCurveFloat *pUVar5;
  wchar_t *_Str;
  int iVar6;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  iVar6 = 0;
  if (*param_1 == (FName)0x0) {
    return (UCurveFloat *)0x0;
  }
  pFVar2 = ::FName::ToString(param_1,(FString *)&local_38);
  ::FString::FString((FString *)&local_48,"None");
  if (local_48.Size == 0) {
    _Str = L"";
LAB_14b7998b0:
    sVar3 = wcslen(_Str);
    iVar1 = ::FString::Find(pFVar2,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
  }
  else {
    _Str = local_48.DataPtr;
    if (local_48.DataPtr != (wchar_t *)0x0) goto LAB_14b7998b0;
    iVar1 = -1;
  }
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (iVar1 != -1) {
    return (UCurveFloat *)0x0;
  }
  local_48.Size = 0;
  local_48._12_4_ = 0;
  local_48.DataPtr = (wchar_t *)0x0;
  pFVar2 = ::FName::ToString(param_1,&local_28);
  if ((pFVar2->Data).ArrayNum == 0) {
    local_38.DataPtr = L"";
LAB_14b799951:
    sVar3 = wcslen(local_38.DataPtr);
    iVar6 = (int)sVar3;
  }
  else {
    local_38.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_14b799951;
  }
  local_38.Size = iVar6;
  pUVar4 = Z_Construct_UClass_UCurveFloat_NoRegister();
  pUVar5 = (UCurveFloat *)
           StaticLoadObject(pUVar4,(UObject *)0x0,&local_38,&local_48,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar5 != (UCurveFloat *)0x0) {
    pUVar4 = Z_Construct_UClass_UCurveFloat_NoRegister();
    iVar6 = (int)pUVar4->_padding_;
    if ((iVar6 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar4->_padding_)) goto LAB_14b7999ce;
  }
  pUVar5 = (UCurveFloat *)0x0;
LAB_14b7999ce:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pUVar5;
}

// NewObject<UDS_AbilityDataSet> @ 14b799a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_AbilityDataSet * __cdecl NewObject<UDS_AbilityDataSet>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_AbilityDataSet *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_AbilityDataSet_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_AbilityDataSet *)
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

// NewObject<UDS_AirWalkStopAbilityContext> @ 14b799aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_AirWalkStopAbilityContext * __cdecl NewObject<UDS_AirWalkStopAbilityContext>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_AirWalkStopAbilityContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_AirWalkStopAbilityContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_AirWalkStopAbilityContext *)
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

// NewObject<UDS_InputEvent> @ 14b799b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_InputEvent * __cdecl NewObject<UDS_InputEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_InputEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_InputEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_InputEvent *)
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

// NewObject<UDS_NPCDataSet> @ 14b799be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_NPCDataSet * __cdecl NewObject<UDS_NPCDataSet>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_NPCDataSet *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_NPCDataSet_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_NPCDataSet *)
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

// NewObject<UDS_SkillAbilityContext> @ 14b799c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_SkillAbilityContext * __cdecl NewObject<UDS_SkillAbilityContext>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_SkillAbilityContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_SkillAbilityContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_SkillAbilityContext *)
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

// NewObject<UDS_SkillDataSet> @ 14b799d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_SkillDataSet * __cdecl NewObject<UDS_SkillDataSet>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_SkillDataSet *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_SkillDataSet_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_SkillDataSet *)
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

// NewObject<UDS_UIEvent> @ 14b799dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_UIEvent * __cdecl NewObject<UDS_UIEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_UIEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_UIEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_UIEvent *)
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

// StaticEnum<enum_EDS_ZoneEventNotifyType> @ 14b79a520

UEnum * __cdecl StaticEnum<enum_EDS_ZoneEventNotifyType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ZoneEventNotifyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ZoneEventNotifyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ZoneEventNotifyType,(UObject *)pUVar1,
                       L"EDS_ZoneEventNotifyType");
  }
  return Z_Registration_Info_UEnum_EDS_ZoneEventNotifyType.OuterSingleton;
}

// StaticEnum<enum_EDS_ZonePropType> @ 14b79a560

UEnum * __cdecl StaticEnum<enum_EDS_ZonePropType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ZonePropType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ZonePropType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ZonePropType,(UObject *)pUVar1,
                       L"EDS_ZonePropType");
  }
  return Z_Registration_Info_UEnum_EDS_ZonePropType.OuterSingleton;
}

// StaticEnum<enum_EDS_ZoneSpawnType> @ 14b79a5a0

UEnum * __cdecl StaticEnum<enum_EDS_ZoneSpawnType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_ZoneSpawnType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ZoneSpawnType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ZoneSpawnType,(UObject *)pUVar1,
                       L"EDS_ZoneSpawnType");
  }
  return Z_Registration_Info_UEnum_EDS_ZoneSpawnType.OuterSingleton;
}

// `vcall'{1008,{flat}}'_}' @ 14b79bcfc

/* [thunk]: __cdecl UDS_AirWalk_BaseAbility::`vcall'{1008,{flat}}' }' */

void __thiscall UDS_AirWalk_BaseAbility::_vcall__1008__flat______(UDS_AirWalk_BaseAbility *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b79bcff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3f0))();
  return;
}

// `vcall'{936,{flat}}'_}' @ 14b79bd0c

/* [thunk]: __cdecl UDS_BuffControlAbility::`vcall'{936,{flat}}' }' */

void __thiscall UDS_BuffControlAbility::_vcall__936__flat______(UDS_BuffControlAbility *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b79bd0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3a8))();
  return;
}

// `scalar_deleting_destructor' @ 14b79bd20

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bd50

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bd80

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_EquipmentAppearanceData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_EquipmentAppearanceData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bdb0

void * __thiscall
IBaseDelegateInstance<void___cdecl(server_msg::AbnormalEventResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(server_msg::AbnormalEventResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bde0

void * __thiscall
IBaseDelegateInstance<void___cdecl(server_msg::BuffDamageResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(server_msg::BuffDamageResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79be10

void * __thiscall
IBaseDelegateInstance<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79be40

void * __thiscall
IBaseDelegateInstance<void___cdecl(server_msg::HealBuffCurrentStatusResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(server_msg::HealBuffCurrentStatusResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79be70

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bea0

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned___int64_const_&,enum_EDS_SpecialBuffType_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bed0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bf00

void * __thiscall
IBaseDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bf30

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bf60

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bf90

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned___int64,server_msg::BuffInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned___int64,server_msg::BuffInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bfc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_AbnormalAbility,void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_AbnormalAbility,void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79bff0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_AbnormalAbility,void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_AbnormalAbility,void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c020

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_AirWalkAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_AirWalkAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c050

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_BaseAbility,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_BaseAbility,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c080

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_BaseAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_BaseAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c0b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_DashAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_DashAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c0e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_DashAbility,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_DashAbility,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c110

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_HoveringAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_HoveringAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c140

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_HoveringAbility,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_AirWalk_HoveringAbility,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c170

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_BuffControlAbility,void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_BuffControlAbility,void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c1a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_BuffControlAbility,void___cdecl(unsigned___int64_const_&,enum_EDS_SpecialBuffType_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c1d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_BuffControlAbility,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_BuffControlAbility,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c200

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CharacterSwitchAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CharacterSwitchAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c230

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CharacterSwitchAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CharacterSwitchAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c260

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ClimbingAbility,void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c290

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_DeathAbility,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_DeathAbility,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c2c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_DeathAbility,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_DeathAbility,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c2f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_DeathAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_DeathAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c320

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EmissiveEffectAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EmissiveEffectAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c350

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EquipmentAppearanceAbility,void___cdecl(FDS_EquipmentAppearanceData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EquipmentAppearanceAbility,void___cdecl(FDS_EquipmentAppearanceData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c380

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EventAnimationAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EventAnimationAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c3b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(server_msg::AbnormalEventResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(server_msg::AbnormalEventResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c3e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(server_msg::BuffDamageResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(server_msg::BuffDamageResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c410

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c440

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(server_msg::HealBuffCurrentStatusResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(server_msg::HealBuffCurrentStatusResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c470

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c4a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FDS_FloatingTextInfo>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FDS_FloatingTextInfo>
           *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c520

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,unsigned___int64,unsigned___int64,int>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,unsigned___int64,unsigned___int64,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c550

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FDS_StruckInfo,unsigned___int64>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FDS_StruckInfo,unsigned___int64>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c580

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(unsigned___int64,server_msg::BuffInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_FloatingTextAbility,void___cdecl(unsigned___int64,server_msg::BuffInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c5b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c5e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c610

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_EquipmentAppearanceData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_EquipmentAppearanceData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c640

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(server_msg::AbnormalEventResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(server_msg::AbnormalEventResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c670

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(server_msg::BuffDamageResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(server_msg::BuffDamageResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c6a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c6d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(server_msg::HealBuffCurrentStatusResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(server_msg::HealBuffCurrentStatusResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c700

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c730

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned___int64_const_&,enum_EDS_SpecialBuffType_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c760

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c790

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c7c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FDS_FloatingTextInfo>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,FDS_FloatingTextInfo>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->Payload).field_0x120;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->Payload).field_0x110;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->Payload).field_0xd8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&(this->Payload).field_0x10 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0xb0);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c840

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,unsigned___int64,unsigned___int64,int>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,unsigned___int64,unsigned___int64,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c870

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c8a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c8d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c900

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FDS_StruckInfo,unsigned___int64>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FDS_StruckInfo,unsigned___int64>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c930

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned___int64,server_msg::BuffInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned___int64,server_msg::BuffInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c960

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext,void_(__cdecl*)(FDS_ViewModelContext_*),1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c9a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_BuffInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_BuffInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79c9e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_FloatingText,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_FloatingText,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b79ca20

void * __thiscall UDS_ZoneManager::_scalar_deleting_destructor_(UDS_ZoneManager *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ZoneManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ZoneDistrictChangedDelegate).field_0x8,
             *(int *)&(this->ZoneDistrictChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ZoneDistrictChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ZoneDistrictChangedDelegate);
  pvVar1 = *(void **)&(this->DistrictIdChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DistrictIdChangeDelegate);
  pvVar1 = *(void **)&(this->ZoneIdChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ZoneIdChangeDelegate);
  pvVar1 = *(void **)&(this->ZoneGroupIdChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ZoneGroupIdChangeDelegate);
  pvVar1 = *(void **)&(this->IslandIdChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IslandIdChangeDelegate);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// CalculateThrowImpact @ 14b79e040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
DS_AbilityUtil_Interaction::CalculateThrowImpact
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,float *param_4,
          float *param_5,float *param_6,float *param_7,TVector<double> *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  TStatId TVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackY_328 [32];
  FCollisionShape local_2d0;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  undefined8 local_280;
  undefined4 uStack_278;
  undefined1 uStack_274;
  undefined2 uStack_273;
  undefined1 uStack_271;
  TQuat<double> local_268;
  FHitResult local_248;
  FCollisionQueryParams local_148;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_148.OwnerTag.ComparisonIndex.Value = 0;
  local_148.OwnerTag.Number = 0;
  local_148.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_148.IgnoreComponents.ArrayNum = 0;
  local_148.IgnoreComponents.ArrayMax = 8;
  local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_148.IgnoreSourceObjects.ArrayNum = 0;
  local_148.IgnoreSourceObjects.ArrayMax = 4;
  local_148.bTraceComplex = false;
  local_148.bFindInitialOverlaps = true;
  local_148.bReturnFaceIndex = false;
  local_148.bReturnPhysicalMaterial = false;
  local_148.MobilityType = Any;
  local_148.TraceTag.ComparisonIndex.Value = 0;
  local_148.TraceTag.Number = 0;
  local_148.bComponentListUnique = true;
  local_148.IgnoreMask = '\0';
  local_148.bIgnoreBlocks = false;
  local_148.bIgnoreTouches = false;
  local_148.bSkipNarrowPhase = false;
  TVar10 = FCollisionQueryParams::GetUnknownStatId();
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_322bcc77;
  local_148.StatId.StatIdPtr = *(TStatIdData **)&(TVar10.StatIdPtr)->Name;
  local_148.bDebugQuery = false;
  local_148.bTraceIntoSubComponents = true;
  local_148.bReplaceHitWithSubComponents = true;
  if ((param_1 == (UWorld *)0x0) ||
     ((float)((uint)*param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    bVar9 = false;
  }
  else {
    fVar15 = 0.0;
    *param_7 = 0.0;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_2d0.ShapeType = Capsule;
    (param_8->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_8->field0_0x0)._s_0.Y = (double)uVar8;
    (param_8->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar7 = __real_407ea00000000000;
    fVar6 = __real_3dcccccd;
    local_2d0.field1_0x4.Box.HalfExtentX = *param_5;
    local_268.X = UE::Math::TQuat<double>::Identity.X;
    local_268.Y = UE::Math::TQuat<double>::Identity.Y;
    local_2d0.field1_0x4.Box.HalfExtentY = *param_6;
    local_2a8._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_2a8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_268.Z = UE::Math::TQuat<double>::Identity.Z;
    local_268.W = UE::Math::TQuat<double>::Identity.W;
    local_2a8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    fVar11 = *param_4;
    if (fVar11 <= 0.0) {
LAB_14b79e3a6:
      bVar9 = true;
    }
    else {
      do {
        fVar16 = fVar15 + fVar6;
        fVar12 = fVar11;
        if (fVar16 <= fVar11) {
          fVar12 = fVar16;
        }
        dVar13 = (double)fVar12;
        local_2c0._s_0.X = dVar13 * (param_3->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
        local_2c0._s_0.Y = dVar13 * (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
        local_2c0._s_0.Z =
             (dVar13 * (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z) -
             (double)(fVar12 * fVar12) * dVar7;
        memset(&local_248,0,0x100);
        uStack_273 = 0;
        uStack_271 = 0;
        local_280 = 0;
        uStack_278 = 0xffffffff;
        local_248.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
        local_248.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
        local_248.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
        local_248.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
        uStack_274 = 0;
        local_248.HitObjectHandle.InstanceIndex = -1;
        local_248.HitObjectHandle.ResolutionStatus = Invalid;
        local_248.HitObjectHandle._29_3_ = 0;
        local_248.HitObjectHandle.ManagerInterface.InterfaceInstance =
             (IActorInstanceManagerInterface *)0x0;
        local_248.Time = 1.0;
        local_248.MyItem = -1;
        bVar9 = UWorld::SweepSingleByChannel
                          (param_1,&local_248,(TVector<double> *)&local_2a8._s_0,
                           (TVector<double> *)&local_2c0._s_0,&local_268,ECC_Visibility,&local_2d0,
                           &local_148,&FCollisionResponseParams::DefaultResponseParam);
        if (bVar9) {
          fVar15 = (fVar12 - fVar15) * local_248.Time + fVar15;
          *param_7 = fVar15;
          dVar14 = (double)fVar15;
          dVar13 = (param_3->field0_0x0)._s_0.Z;
          dVar1 = (param_3->field0_0x0)._s_0.Y;
          dVar2 = (param_2->field0_0x0)._s_0.Z;
          dVar3 = (param_2->field0_0x0)._s_0.Y;
          (param_8->field0_0x0)._s_0.X =
               dVar14 * (param_3->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
          (param_8->field0_0x0)._s_0.Y = dVar14 * dVar1 + dVar3;
          (param_8->field0_0x0)._s_0.Z =
               (dVar14 * dVar13 + dVar2) - (double)(fVar15 * fVar15) * dVar7;
          goto LAB_14b79e3a6;
        }
        local_2a8._s_0.Z = local_2c0._s_0.Z;
        fVar11 = *param_4;
        local_2a8._s_0.X = local_2c0._s_0.X;
        local_2a8._s_0.Y = local_2c0._s_0.Y;
        if ((float)((uint)(fVar12 - fVar11) & uVar5) <= fVar4) goto LAB_14b79e3a6;
        fVar15 = fVar16;
      } while (fVar16 < fVar11);
      bVar9 = true;
    }
  }
  if (local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_148.IgnoreComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_148.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar9;
}

// CalculateThrowLocationAtTime @ 14b79e460

bool __cdecl
DS_AbilityUtil_Interaction::CalculateThrowLocationAtTime
          (TVector<double> *param_1,TVector<double> *param_2,float *param_3,TVector<double> *param_4
          )

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  
  fVar1 = *param_3;
  dVar7 = (double)fVar1;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (double)(fVar1 * fVar1) * __real_407ea00000000000;
  dVar5 = dVar7 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar7 * (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&param_4->field0_0x0 = auVar4;
  (param_4->field0_0x0)._s_0.Z = (dVar7 * dVar2 + dVar3) - dVar6;
  return true;
}

// CalculateThrowVariables @ 14b79e4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
DS_AbilityUtil_Interaction::CalculateThrowVariables
          (TVector<double> *param_1,TVector<double> *param_2,float *param_3,TVector<double> *param_4
          ,float *param_5)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  UDS_LogManager *pUVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auStackY_1d8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (*param_3 <= 0.0 && *param_3 != 0.0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"DS_AbilityUtil_Interaction::CalculateThrowVariables",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_188.Ptr,0x1c8,L"InApexHeight < 0.0f");
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5197844605021716937>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AbilityUtil_Interaction.cpp"
                       ,0x1c9,"false");
    if (!bVar6) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar5;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *param_5 = 0.0;
  dVar16 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar14 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar13 = dVar14;
  if (dVar14 <= dVar1) {
    dVar13 = dVar1;
  }
  auVar10._0_8_ = dVar16 * dVar16;
  auVar10._8_8_ = 0;
  dVar4 = dVar3 * dVar3 + auVar10._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar4;
  auVar11 = sqrtpd(auVar10,auVar11);
  fVar12 = (float)((double)(float)(dVar13 + (double)*param_3) - dVar14) * ___real_44f50000;
  fVar18 = SQRT(fVar12);
  fVar12 = fVar12 - (float)(dVar1 - dVar14) * ___real_44f50000;
  if (fVar12 < 0.0) {
    return false;
  }
  fVar12 = SQRT(fVar12);
  fVar9 = ((float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000) - fVar12) *
          ___real_ba85bf37;
  fVar12 = fVar18 * ___real_3a85bf37 - fVar12 * ___real_3a85bf37;
  if (fVar12 <= fVar9) {
    fVar12 = fVar9;
  }
  *param_5 = fVar12;
  if (fVar12 <= 0.0) {
    return false;
  }
  if (dVar4 != __real_3ff0000000000000) {
    uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (dVar4 < __real_3e45798ee0000000) goto LAB_14b79e728;
    dVar16 = dVar16 * (__real_3ff0000000000000 / SQRT(dVar4));
    dVar3 = dVar3 * (__real_3ff0000000000000 / SQRT(dVar4));
  }
  uVar15 = 0.0;
  uVar17 = dVar16;
  uVar5 = dVar3;
LAB_14b79e728:
  dVar14 = (double)((float)auVar11._0_8_ / fVar12);
  (param_4->field0_0x0)._s_0.X = dVar14 * (double)uVar17;
  (param_4->field0_0x0)._s_0.Y = dVar14 * (double)uVar5;
  (param_4->field0_0x0)._s_0.Z = dVar14 * (double)uVar15 + (double)fVar18;
  return true;
}

// EmptyLinkFunctionForGeneratedCodeDS_ZoneEventNotifyType @ 14b7a5c10

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ZoneEventNotifyType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ZoneGroupTableRow @ 14b7a5c20

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ZoneGroupTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ZoneIslandTableRow @ 14b7a5c30

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ZoneIslandTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ZoneManager @ 14b7a5c40

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ZoneManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ZonePropInfoTableRow @ 14b7a5c50

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ZonePropInfoTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ZonePropType @ 14b7a5c60

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ZonePropType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ZoneResurrectionTableRow @ 14b7a5c70

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ZoneResurrectionTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_ZoneSpawnType @ 14b7a5c80

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_ZoneSpawnType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProjectDS_init @ 14b7a5c90

void __cdecl EmptyLinkFunctionForGeneratedCodeProjectDS_init(void)

{
  return;
}

// GetPlayerSkillLevel_SourceEntity @ 14b7ac920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

int __cdecl
DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity
          (ulong64 *param_1,EDS_PlayerSkillType *param_2)

{
  EDS_PlayerSkillType EVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168;
  FString local_160;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar3 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return -1;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity",0x3c,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x22,L"sourceEntity is nullptr. (%llu)")
    ;
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    UDS_PlayerSkillData::GetDataByCharEntityID((ulong64 *)&local_168,(EDS_PlayerSkillType *)param_1)
    ;
    bVar2 = TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> *)&local_168,(void *)0x0)
    ;
    if (!bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_168);
      return *(int *)&pUVar5[2].field_0x14;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return -1;
    }
    pUVar4 = UDS_LogManager::GetInst();
    EVar1 = *param_2;
    ::FString::FString(&local_160,"EDS_PlayerSkillType");
    DS_Util::GetEnumToString(&local_150,&local_160,(ulonglong)EVar1);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity",0x3c,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_138.Ptr,0x29,L"playerSkillData is nullptr. (%s)");
    if ((FScriptContainerElement *)local_138._padding_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  return -1;
}

// GetPlayerSkillName @ 14b7acb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
DS_AbilityUtil_PlayerSkill::GetPlayerSkillName
          (FString *__return_storage_ptr__,EDS_PlayerSkillType *param_1)

{
  FDS_PlayerSkillBaseTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  FString *pFVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar1 = FDS_PlayerSkillBaseTableRow::Get((ulonglong)*param_1,true);
  if (pFVar1 == (FDS_PlayerSkillBaseTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"DS_AbilityUtil_PlayerSkill::GetPlayerSkillName",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,99,L"playerSkillBaseTable is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    ::FString::FString(__return_storage_ptr__,"");
  }
  else {
    pFVar3 = (FString *)(**(code **)((pFVar1->ID_SkillName)._padding_ + 8))(&pFVar1->ID_SkillName);
    ::FString::FString(__return_storage_ptr__,pFVar3);
  }
  return __return_storage_ptr__;
}

// GetWarpCastingTime @ 14b7ad810

float __cdecl DS_AbilityUtil_Warp::GetWarpCastingTime(EDS_WarpRequestType *param_1)

{
  FDS_CommonActionCastingTableRow *pFVar1;
  long64 lVar2;
  
  if (*param_1 == ReturnHomeWarp) {
    lVar2 = 0xb;
  }
  else {
    if (*param_1 != WarpDeviceWarp) {
      return 0.0;
    }
    lVar2 = 0xc;
  }
  pFVar1 = FDS_CommonActionCastingTableRow::Get(lVar2,true);
  if (pFVar1 == (FDS_CommonActionCastingTableRow *)0x0) {
    return 0.0;
  }
  return pFVar1->CastingTime;
}

// GetZoneBaseTableRow @ 14b7ad860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_ZoneBaseTableRow * __cdecl DS_AbilityUtil_PlayerSkill::GetZoneBaseTableRow(void)

{
  UDS_ZoneManager *pUVar1;
  UDS_LogManager *pUVar2;
  FDS_ZoneBaseTableRow *pFVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_ZoneManager::GetInst();
  if (pUVar1 == (UDS_ZoneManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return (FDS_ZoneBaseTableRow *)0x0;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::GetZoneBaseTableRow",0x2f,Yes);
    pwVar5 = L"zoneMng is nullptr.";
    uVar4 = 0x36;
  }
  else {
    if (pUVar1->ZoneID != 0) {
      pFVar3 = FDS_ZoneBaseTableRow::Get((ulonglong)pUVar1->ZoneID,true);
      if (pFVar3 != (FDS_ZoneBaseTableRow *)0x0) {
        return pFVar3;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return (FDS_ZoneBaseTableRow *)0x0;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"DS_AbilityUtil_PlayerSkill::GetZoneBaseTableRow",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x44,L"zoneBaseTable is nullptr. (%d)");
      goto LAB_14b7ad9d9;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return (FDS_ZoneBaseTableRow *)0x0;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::GetZoneBaseTableRow",0x2f,Yes);
    pwVar5 = L"zoneID is 0.";
    uVar4 = 0x3d;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b7ad9d9:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return (FDS_ZoneBaseTableRow *)0x0;
}

// HasWarpCasting @ 14b7ae1f0

bool __cdecl DS_AbilityUtil_Warp::HasWarpCasting(EDS_WarpRequestType *param_1)

{
  FDS_CommonActionCastingTableRow *pFVar1;
  long64 lVar2;
  float fVar3;
  
  if (*param_1 == ReturnHomeWarp) {
    lVar2 = 0xb;
LAB_14b7ae20d:
    pFVar1 = FDS_CommonActionCastingTableRow::Get(lVar2,true);
    if (pFVar1 != (FDS_CommonActionCastingTableRow *)0x0) {
      fVar3 = pFVar1->CastingTime;
      goto LAB_14b7ae223;
    }
  }
  else if (*param_1 == WarpDeviceWarp) {
    lVar2 = 0xc;
    goto LAB_14b7ae20d;
  }
  fVar3 = 0.0;
LAB_14b7ae223:
  return __real_322bcc77 < (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// IsAbleDetection @ 14b7af2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

EDS_PlayerSkillUnableReason __cdecl DS_AbilityUtil_PlayerSkill::IsAbleDetection(ulong64 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_PlayerSkillDetectionTableRow *pFVar7;
  UDS_CharStateData *this;
  undefined1 auStackY_198 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_PlayerSkillType local_158 [8];
  FWeakObjectPtr local_150;
  EDS_CharState local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158[0] = Detection;
  pFVar4 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"DS_AbilityUtil_PlayerSkill::IsAblePlayerSkill_PlayerSkillLevel",0x3e,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x50,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return LackPlayerSkillLevel;
      }
    }
    return LackPlayerSkillLevel;
  }
  iVar2 = GetPlayerSkillLevel_SourceEntity(param_1,local_158);
  if (iVar2 < 1) {
    return LackPlayerSkillLevel;
  }
  bVar1 = IsAbleDetection_ActionPoint(param_1);
  if (!bVar1) {
    return LackActionPoint;
  }
  local_158[0] = Detection;
  UDS_PlayerSkillData::GetDataByCharEntityID((ulong64 *)&local_150,(EDS_PlayerSkillType *)param_1);
  bVar1 = TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> *)&local_150,(void *)0x0);
  if (bVar1) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return LackMat;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleDetection_Mat",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0xb5,L"playerSkillData is nullptr.");
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&local_150);
    pFVar7 = FDS_PlayerSkillDetectionTableRow::Get((longlong)*(int *)&pUVar6[2].field_0x14,true);
    if (pFVar7 != (FDS_PlayerSkillDetectionTableRow *)0x0) {
      iVar2 = pFVar7->DetectionItemCount;
      if ((0 < iVar2) &&
         (iVar3 = DS_ItemDataUtil::GetTotalStackCountByItemTID
                            (PlayerNormal,pFVar7->ID_DetectionItem), iVar3 < iVar2)) {
        return LackMat;
      }
      pFVar4 = FDS_EntityBase::GetEntityBase(param_1);
      if (pFVar4 == (FDS_EntityBase *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) {
          return SourceEntityState;
        }
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleDetection_SourceEntity",0x38,Yes);
        pwVar9 = L"sourceEntity is nullptr. (%llu)";
        uVar8 = 0xd6;
      }
      else {
        UDS_CharStateData::GetData((ulong64)&local_150);
        bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_150,
                           (void *)0x0);
        if (!bVar1) {
          this = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
          local_148[0] = Dead;
          bVar1 = UDS_CharStateData::HasCharState(this,local_148);
          if (bVar1) {
            return SourceEntityState;
          }
          return None;
        }
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) {
          return SourceEntityState;
        }
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleDetection_SourceEntity",0x38,Yes);
        pwVar9 = L"charStateData is nullptr. (%llu)";
        uVar8 = 0xde;
      }
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,uVar8,pwVar9);
      if ((void *)local_138._padding_ == (void *)0x0) {
        return SourceEntityState;
      }
      FMemory::Free((void *)local_138._padding_);
      return SourceEntityState;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return LackMat;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleDetection_Mat",0x2f,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_138.Ptr,0xbf,L"playerSkillDetectionTable is nullptr. (%d)");
  }
  if ((void *)local_138._padding_ == (void *)0x0) {
    return LackMat;
  }
  FMemory::Free((void *)local_138._padding_);
  return LackMat;
}

// IsAbleDetection_ActionPoint @ 14b7af670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl DS_AbilityUtil_PlayerSkill::IsAbleDetection_ActionPoint(ulong64 *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_PlayerSkillDetectionTableRow *pFVar5;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_PlayerSkillData::GetDataByCharEntityID((ulong64 *)&local_150,(EDS_PlayerSkillType *)param_1);
  bVar2 = TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> *)&local_150,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleDetection_ActionPoint",0x37,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x8c,L"playerSkillData is nullptr.");
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&local_150);
    pFVar5 = FDS_PlayerSkillDetectionTableRow::Get((longlong)*(int *)&pUVar4[2].field_0x14,true);
    if (pFVar5 == (FDS_PlayerSkillDetectionTableRow *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleDetection_ActionPoint",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x96,L"playerSkillDetectionTable is nullptr. (%d)");
    }
    else {
      iVar1 = pFVar5->DetectionTicketCount;
      if (iVar1 < 1) {
        return true;
      }
      UDS_TicketData::GetDataByCharEntityID((ulong64 *)local_148,(EDS_TicketType *)param_1);
      bVar2 = TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> *)local_148,(void *)0x0);
      if (!bVar2) {
        pUVar4 = FWeakObjectPtr::Get(local_148);
        return iVar1 <= *(int *)&pUVar4[2].field_0xc;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleDetection_ActionPoint",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xa1,
                 L"ticketData is nullptr. (EntityID: %llu, TicketType: %d)");
    }
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// IsAbleDetection_Mat @ 14b7af8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl DS_AbilityUtil_PlayerSkill::IsAbleDetection_Mat(ulong64 *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_PlayerSkillDetectionTableRow *pFVar6;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerSkillData::GetDataByCharEntityID((ulong64 *)&local_140,(EDS_PlayerSkillType *)param_1);
  bVar2 = TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> *)&local_140,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleDetection_Mat",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0xb5,L"playerSkillData is nullptr.");
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&local_140);
    pFVar6 = FDS_PlayerSkillDetectionTableRow::Get((longlong)*(int *)&pUVar5[2].field_0x14,true);
    if (pFVar6 != (FDS_PlayerSkillDetectionTableRow *)0x0) {
      iVar1 = pFVar6->DetectionItemCount;
      if (iVar1 < 1) {
        return true;
      }
      iVar3 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,pFVar6->ID_DetectionItem);
      return iVar1 <= iVar3;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleDetection_Mat",0x2f,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_138.Ptr,0xbf,L"playerSkillDetectionTable is nullptr. (%d)");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// IsAbleDetection_SourceEntity @ 14b7afa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __cdecl DS_AbilityUtil_PlayerSkill::IsAbleDetection_SourceEntity(ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_CharStateData *this;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148;
  EDS_CharState local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleDetection_SourceEntity",0x38,Yes);
    pwVar5 = L"sourceEntity is nullptr. (%llu)";
    uVar4 = 0xd6;
  }
  else {
    UDS_CharStateData::GetData((ulong64)&local_148);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_148,(void *)0x0);
    if (!bVar1) {
      this = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_148);
      local_140 = Dead;
      bVar1 = UDS_CharStateData::HasCharState(this,&local_140);
      return !bVar1;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleDetection_SourceEntity",0x38,Yes);
    pwVar5 = L"charStateData is nullptr. (%llu)";
    uVar4 = 0xde;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// IsAbleInstallCamp @ 14b7afc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

EDS_PlayerSkillUnableReason __cdecl DS_AbilityUtil_PlayerSkill::IsAbleInstallCamp(ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_CharStateData *this;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148;
  EDS_CharState local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return SourceEntityState;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleInstallCamp_SourceEntity",0x3a,Yes);
    pwVar5 = L"sourceEntity is nullptr. (%llu)";
    uVar4 = 0xfe;
  }
  else {
    UDS_CharStateData::GetData((ulong64)&local_148);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_148,(void *)0x0);
    if (!bVar1) {
      this = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_148);
      local_140 = Mount|CharSwitch|Remove|Resurrect|Dead|Warp|Abnormal|Groggy|ToggleSkill|Skill|
                  Avoid|Shield|Swim;
      bVar1 = UDS_CharStateData::HasCharState(this,&local_140);
      if (bVar1) {
        return SourceEntityState;
      }
      return None;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return SourceEntityState;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleInstallCamp_SourceEntity",0x3a,Yes);
    pwVar5 = L"charStateData is nullptr. (%llu)";
    uVar4 = 0x106;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ == (void *)0x0) {
    return SourceEntityState;
  }
  FMemory::Free((void *)local_138._padding_);
  return SourceEntityState;
}

// IsAbleInstallCamp_SourceEntity @ 14b7afda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __cdecl DS_AbilityUtil_PlayerSkill::IsAbleInstallCamp_SourceEntity(ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_CharStateData *this;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148;
  EDS_CharState local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleInstallCamp_SourceEntity",0x3a,Yes);
    pwVar5 = L"sourceEntity is nullptr. (%llu)";
    uVar4 = 0xfe;
  }
  else {
    UDS_CharStateData::GetData((ulong64)&local_148);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_148,(void *)0x0);
    if (!bVar1) {
      this = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_148);
      local_140 = Mount|CharSwitch|Remove|Resurrect|Dead|Warp|Abnormal|Groggy|ToggleSkill|Skill|
                  Avoid|Shield|Swim;
      bVar1 = UDS_CharStateData::HasCharState(this,&local_140);
      return !bVar1;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_PlayerSkill::IsAbleInstallCamp_SourceEntity",0x3a,Yes);
    pwVar5 = L"charStateData is nullptr. (%llu)";
    uVar4 = 0x106;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// IsAbleInteraction_Breach @ 14b7aff20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
DS_AbilityUtil_Interaction::IsAbleInteraction_Breach(ulong64 *param_1,int param_2,bool *param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffPortalData *pUVar3;
  FDS_StuffPortalTableRow *pFVar4;
  UObject *pUVar5;
  UDS_QuestManager *this;
  FDS_QuestBaseTableRow *pFVar6;
  FString *pFVar7;
  UDS_PlayerData *this_00;
  undefined1 auStackY_228 [32];
  uint uVar8;
  wchar_t *pwVar9;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1e8;
  FWeakObjectPtr local_1d8;
  FWeakObjectPtr local_1d0;
  FStringFormatArg local_1c8;
  FStringFormatArg local_1a8;
  FDS_BreachDetailInfo local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  UDS_StuffPortalData::GetData((ulong64)&local_1d8);
  bVar1 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)&local_1d8,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_Interaction::IsAbleInteraction_Breach",0x34,Yes);
    pwVar9 = L"stuffPortalData is nullptr. (%llu)";
    uVar8 = 0x14e;
LAB_14b7affca:
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar8,pwVar9);
    local_1a8.StringValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)local_138._padding_;
  }
  else {
    pUVar3 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_1d8);
    bVar1 = UDS_StuffPortalData::IsBreach(pUVar3);
    if (!bVar1) {
      pUVar3 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_1d8);
      bVar1 = UDS_StuffPortalData::IsGate(pUVar3);
      if (!bVar1) {
        return true;
      }
    }
    pUVar3 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_1d8);
    pFVar4 = UDS_StuffPortalData::GetStuffPortalTable(pUVar3);
    if (pFVar4 == (FDS_StuffPortalTableRow *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"DS_AbilityUtil_Interaction::IsAbleInteraction_Breach",0x34,Yes);
      pwVar9 = L"stuffPortalTable is nullptr.";
      uVar8 = 0x15b;
    }
    else {
      UDS_PlayerData::GetMainPlayerData();
      bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_1d0,(void *)0x0);
      if (bVar1) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"DS_AbilityUtil_Interaction::IsAbleInteraction_Breach",0x34,Yes);
        pwVar9 = L"mainPlayerData is nullptr.";
        uVar8 = 0x163;
      }
      else {
        pUVar5 = FWeakObjectPtr::Get(&local_1d0);
        if (*(int *)&pUVar5[6].field_0x10 < pFVar4->PlayerLevel) {
          if (*param_3 != true) {
            return false;
          }
          FStringFormatArg::FStringFormatArg(&local_1c8,pFVar4->PlayerLevel);
          local_1e8.ArrayNum = 1;
          local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_1e8.AllocatorInstance,1,&local_1e8.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_1e8.AllocatorInstance.Data,&local_1c8,1);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x5ccc6,Alert_None_01,&local_1e8,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
          if ((FStringFormatArg *)local_1e8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_1e8.AllocatorInstance.Data);
          }
          local_1a8.StringValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)
               CONCAT44(local_1c8.StringValue.Data.AllocatorInstance.Data._4_4_,
                        local_1c8.StringValue.Data.AllocatorInstance.Data._0_4_);
          goto LAB_14b7b03f5;
        }
        if (pFVar4->ID_NeedItem != 0) {
          DS_ItemDataUtil::GetItemDataByTID((int)&local_1e8);
          bVar1 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_1e8,(void *)0x0);
          if (bVar1) {
            if (*param_3 != true) {
              return false;
            }
            local_1c8.Type = Int;
            local_1c8._4_4_ = 0;
            local_1c8.field1_0x8.IntValue = 0;
            local_1c8.StringValue.Data.AllocatorInstance.Data._0_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi
                      (0x5ccc8,Alert_None_01,
                       (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                        *)&local_1c8);
            return false;
          }
        }
        if ((pFVar4->ID_NeedHoldQuest != 0) &&
           (bVar1 = UDS_QuestManager::HasQuestData(pFVar4->ID_NeedHoldQuest), !bVar1)) {
          return false;
        }
        if (pFVar4->ID_NeedCompleteQuest == 0) {
LAB_14b7b0403:
          this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_1d0);
          UDS_PlayerData::GetBreachDetailInfo(this_00,&local_188,*param_1);
          bVar1 = FDS_BreachDetailInfo::IsEnoughTryCount(&local_188);
          if (bVar1) {
            bVar1 = true;
          }
          else {
            if (*param_3 == true) {
              local_1c8.Type = Int;
              local_1c8._4_4_ = 0;
              local_1c8.field1_0x8.IntValue = 0;
              local_1c8.StringValue.Data.AllocatorInstance.Data._0_4_ = 0;
              UDS_UIMessageManager::OpenMsgByStringUi
                        (0x5ccc9,Alert_None_01,
                         (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                          *)&local_1c8);
            }
            bVar1 = false;
          }
          if (local_188.FirstPlayerName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.FirstPlayerName.Data.AllocatorInstance.Data);
            return bVar1;
          }
          return bVar1;
        }
        this = UDS_QuestManager::GetInst();
        if (this != (UDS_QuestManager *)0x0) {
          bVar1 = UDS_QuestManager::IsQuestCompleted(this,pFVar4->ID_NeedCompleteQuest);
          if (bVar1) goto LAB_14b7b0403;
          if (*param_3 != true) {
            return false;
          }
          pFVar6 = FDS_QuestBaseTableRow::Get((longlong)pFVar4->ID_NeedCompleteQuest,true);
          if (pFVar6 != (FDS_QuestBaseTableRow *)0x0) {
            pFVar7 = (FString *)
                     (**(code **)((pFVar6->ID_QuestTitleId)._padding_ + 8))
                               (&pFVar6->ID_QuestTitleId);
            pFVar7 = ::FString::FString((FString *)&local_1c8,pFVar7);
            FStringFormatArg::FStringFormatArg(&local_1a8,pFVar7);
            local_1e8.ArrayNum = 1;
            local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_1e8.AllocatorInstance,1,&local_1e8.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_1e8.AllocatorInstance.Data,&local_1a8,1);
            UDS_UIMessageManager::OpenMsgByStringUi
                      (0x5ccc7,Alert_None_01,&local_1e8,
                       (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                        *)0x0);
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
            if ((FStringFormatArg *)local_1e8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_1e8.AllocatorInstance.Data);
            }
            goto LAB_14b7b03f5;
          }
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar2 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"DS_AbilityUtil_Interaction::IsAbleInteraction_Breach",0x34,Yes);
          pwVar9 = L"questBaseTable is nullptr. (%d)";
          uVar8 = 0x1a0;
          goto LAB_14b7affca;
        }
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"DS_AbilityUtil_Interaction::IsAbleInteraction_Breach",0x34,Yes);
        pwVar9 = L"questMng is nullptr.";
        uVar8 = 0x195;
      }
    }
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar8,pwVar9);
    local_1a8.StringValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)local_138._padding_;
  }
LAB_14b7b03f5:
  if (local_1a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.StringValue.Data.AllocatorInstance.Data);
  }
  return false;
}

// IsAbleInteraction_Height @ 14b7b04a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __cdecl
DS_AbilityUtil_Interaction::IsAbleInteraction_Height(ulong64 *param_1,ulong64 *param_2,int param_3)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  FDS_StuffBaseTableRow *pFVar4;
  FDS_StuffGatherTableRow *pFVar5;
  UDS_MovementCore *this;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar6;
  TVector<double> *pTVar7;
  double dVar8;
  undefined1 auStackY_1e8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  int local_1a8 [2];
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr local_198;
  TVector<double> local_190;
  TVector<double> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"DS_AbilityUtil_Interaction::IsAbleInteraction_Height",0x34,Yes);
    pwVar10 = L"sourceEntity is nullptr. (%llu)";
    uVar9 = 0xcb;
  }
  else {
    pFVar2 = FDS_EntityBase::GetEntityBase(param_2);
    if (pFVar2 == (FDS_EntityBase *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"DS_AbilityUtil_Interaction::IsAbleInteraction_Height",0x34,Yes);
      pwVar10 = L"targetEntity is nullptr. (%llu)";
      uVar9 = 0xd2;
    }
    else {
      if (pFVar2->EntityType != StuffGather) {
        return true;
      }
      pFVar4 = FDS_StuffBaseTableRow::Get(pFVar2->TableID,true);
      if (pFVar4 == (FDS_StuffBaseTableRow *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = (longlong)pFVar4;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"DS_AbilityUtil_Interaction::IsAbleInteraction_Height",0x34,Yes);
        pwVar10 = L"stuffBaseTable is nullptr. (%d)";
        uVar9 = 0xe0;
      }
      else {
        local_1a8[0] = (int)pFVar2->TableID;
        pFVar5 = FDS_StuffGatherTableRow::GetByEntityTableID(local_1a8);
        if (pFVar5 != (FDS_StuffGatherTableRow *)0x0) {
          if (pFVar5->StuffLocationType != Air) {
            return true;
          }
          UDS_MovementCore::GetMovementCore((ulong64)&local_1a0);
          UDS_MovementCore::GetMovementCore((ulong64)&local_198);
          bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1a0,
                             (void *)0x0);
          if ((!bVar1) &&
             (bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_198,
                                 (void *)0x0), !bVar1)) {
            this = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1a0);
            this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_198);
            pTVar6 = UDS_MovementCore::GetActorFootLocation(this,&local_190);
            pTVar7 = UDS_MovementCore::GetActorFootLocation(this_00,&local_178);
            dVar8 = (pTVar6->field0_0x0)._s_0.Z - (pTVar7->field0_0x0)._s_0.Z;
            return (double)(float)(double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                   SUB84(dVar8,0) &
                                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
                   pFVar4->InteractionRange;
          }
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar3 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"DS_AbilityUtil_Interaction::IsAbleInteraction_Height",0x34,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_158.Ptr,0xf6,
                     L"MovementCore is nullptr. (Source: %llu, Target: %llu)");
          goto LAB_14b7b07c6;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"DS_AbilityUtil_Interaction::IsAbleInteraction_Height",0x34,Yes);
        pwVar10 = L"stuffGatherTable is nullptr. (%d)";
        uVar9 = 0xe7;
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar9,pwVar10);
LAB_14b7b07c6:
  if ((FDS_StuffBaseTableRow *)local_158._padding_ != (FDS_StuffBaseTableRow *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// IsAbleInteraction_Item @ 14b7b0810

bool __cdecl DS_AbilityUtil_PlayerSkill::IsAbleInteraction_Item(int param_1,ulong64 *param_2)

{
  EDS_GradeType EVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res18 [2];
  
  UDS_InteractionData::GetData((ulong64)local_res18,*param_2,SUB41(param_1,0));
  bVar2 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar2) {
    return false;
  }
  pUVar5 = FWeakObjectPtr::Get(local_res18);
  if (pUVar5[3].field_0x1 != '\0') {
    pUVar5 = FWeakObjectPtr::Get(local_res18);
    iVar4 = *(int *)&pUVar5[3].field_0x4;
    pUVar5 = FWeakObjectPtr::Get(local_res18);
    EVar1 = pUVar5[3].field_0x8;
    pUVar5 = FWeakObjectPtr::Get(local_res18);
    iVar3 = FDS_PlayerSkillNeedItemTableRow::GetReqItemTID(pUVar5[3].field_0x1,iVar4,EVar1);
    pUVar5 = FWeakObjectPtr::Get(local_res18);
    iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqItemCount(pUVar5[3].field_0x1,iVar4,EVar1);
    if ((0 < iVar3) && (0 < iVar4)) {
      iVar3 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,iVar3);
      return iVar4 <= iVar3;
    }
  }
  return true;
}

// IsAbleInteraction_Level @ 14b7b0900

bool __cdecl
DS_AbilityUtil_PlayerSkill::IsAbleInteraction_Level(int param_1,ulong64 *param_2,ulong64 *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  EDS_PlayerSkillType local_res8 [8];
  FWeakObjectPtr local_res20;
  
  UDS_InteractionData::GetData((ulong64)&local_res20,*param_3,SUB41(param_1,0));
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    if (pUVar4[3].field_0x1 == '\0') {
      return true;
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    iVar1 = *(int *)&pUVar4[3].field_0x4;
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    local_res8[0] = pUVar4[3].field_0x1;
    iVar3 = GetPlayerSkillLevel_SourceEntity(param_2,local_res8);
    if (iVar3 != -1) {
      return iVar1 <= iVar3;
    }
  }
  return false;
}

// IsAbleInteraction_SourceEntity @ 14b7b09b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

bool __cdecl
DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
          (ulong64 *param_1,ulong64 *param_2,int param_3,bool param_4)

{
  void *_Src;
  bool bVar1;
  int iVar2;
  int iVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  FDS_StuffBaseTableRow *pFVar6;
  FDS_StuffGatherTableRow *pFVar7;
  UDS_CharStateData *pUVar8;
  UDS_InteractionData *pUVar9;
  UObject *pUVar10;
  FDS_PlayerSkillBaseTableRow *pFVar11;
  undefined8 *puVar12;
  FString *pFVar13;
  ForAnyElementType FVar14;
  long64 lVar15;
  longlong lVar16;
  undefined1 auStackY_238 [32];
  uint uVar17;
  wchar_t *pwVar18;
  EDS_PlayerSkillType local_1f8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1f0;
  EDS_CharDetailState local_1e0 [2];
  FWeakObjectPtr local_1d8;
  EDS_CharState local_1d0;
  FString local_1c8;
  FWeakObjectPtr local_1b8 [2];
  FStringFormatArg local_1a8;
  FStringFormatArg local_188;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar4 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity",0x3a,Yes);
    pwVar18 = L"sourceEntity is nullptr. (%llu)";
    uVar17 = 0x27;
  }
  else {
    pFVar4 = FDS_EntityBase::GetEntityBase(param_2);
    if (pFVar4 == (FDS_EntityBase *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity",0x3a,Yes);
      pwVar18 = L"targetEntity is nullptr. (%llu)";
      uVar17 = 0x2e;
    }
    else {
      UDS_CharStateData::GetData((ulong64)local_1b8);
      bVar1 = FWeakObjectPtr::IsValid(local_1b8);
      if (bVar1) {
        UDS_InteractionData::GetData((ulong64)&local_1d8,*param_2,SUB41(param_3,0));
        bVar1 = FWeakObjectPtr::IsValid(&local_1d8);
        if (!bVar1) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar5 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity",0x3a,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_158.Ptr,0x3c,L"interactionData is nullptr. (%llu) (%d)")
          ;
          FVar14.Data = (FScriptContainerElement *)local_158._padding_;
          goto LAB_14b7b0ce0;
        }
        local_1d0 = SkillMode|ItemUse|Climbing|Casting|NPCClientControl|ComeBack|Patrol|NetSync|
                    CharSwitch|Remove|Spawn|Resurrect|Dead|Transport|Warp|PlayerSkill|
                    Abnormal_NonControl|Abnormal|AirWalk|Seal|HitAdditive|Battle|Groggy|AniCut|
                    ToggleSkill|Skill|Avoid|Shield|Swim;
        if (pFVar4->EntityType == StuffGather) {
          pFVar6 = FDS_StuffBaseTableRow::Get(pFVar4->TableID,true);
          if (pFVar6 == (FDS_StuffBaseTableRow *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar5 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity",0x3a,
                       Yes);
            pwVar18 = L"stuffBaseTable is nullptr. (%d)";
            uVar17 = 0x4f;
          }
          else {
            local_1e0[0] = (EDS_CharDetailState)pFVar4->TableID;
            pFVar7 = FDS_StuffGatherTableRow::GetByEntityTableID((int *)local_1e0);
            if (pFVar7 != (FDS_StuffGatherTableRow *)0x0) {
              if (pFVar7->StuffLocationType == Water) {
                pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_1b8);
                local_1e0[0] = SwimSubmerge;
                bVar1 = UDS_CharStateData::HasCharDetailState(pUVar8,local_1e0);
                if (!bVar1) {
                  return false;
                }
                local_1d0 = local_1d0 & ~Swim;
              }
              else if (pFVar7->StuffLocationType == Air) {
                pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_1b8);
                local_1e0[0] = Hovering;
                bVar1 = UDS_CharStateData::HasCharDetailState(pUVar8,local_1e0);
                if (!bVar1) {
                  return false;
                }
                local_1d0 = local_1d0 & ~AirWalk;
              }
              goto LAB_14b7b0d9a;
            }
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar5 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity",0x3a,
                       Yes);
            pwVar18 = L"stuffGatherTable is nullptr. (%d)";
            uVar17 = 0x56;
          }
          goto LAB_14b7b0cbf;
        }
        if ((pFVar4->EntityType == NPC) && (bVar1 = FDS_EntityBase::IsHandlingNPC(pFVar4), bVar1)) {
          local_1d0 = local_1d0 & ~(SkillMode|NetSync|Battle|AniCut|Skill);
        }
LAB_14b7b0d9a:
        pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_1b8);
        bVar1 = UDS_CharStateData::HasCharState(pUVar8,&local_1d0);
        if (bVar1) {
          return false;
        }
        pUVar9 = (UDS_InteractionData *)FWeakObjectPtr::Get(&local_1d8);
        bVar1 = UDS_InteractionData::CheckPlayerSkill(pUVar9);
        if (bVar1) {
          pUVar9 = (UDS_InteractionData *)FWeakObjectPtr::Get(&local_1d8);
          bVar1 = UDS_InteractionData::CheckCost(pUVar9);
          if (bVar1) {
            return true;
          }
          if (!param_4) {
            return false;
          }
          pUVar10 = FWeakObjectPtr::Get(&local_1d8);
          iVar2 = *(int *)&pUVar10[3].field_0x10;
          if (iVar2 < 1) {
            return false;
          }
          pUVar10 = FWeakObjectPtr::Get(&local_1d8);
          iVar3 = DS_ItemDataUtil::GetTotalStackCountByItemTID
                            (PlayerNormal,*(int *)&pUVar10[3].field_0xc);
          if (iVar2 <= iVar3) {
            return false;
          }
          pUVar10 = FWeakObjectPtr::Get(&local_1d8);
          DS_ItemDataUtil::GetItemNameByTID(&local_1c8,*(int *)&pUVar10[3].field_0xc);
          pFVar13 = ::FString::FString(&local_168,&local_1c8);
          FStringFormatArg::FStringFormatArg(&local_1a8,pFVar13);
          FStringFormatArg::FStringFormatArg(&local_188,iVar2);
          local_1f0.ArrayNum = 2;
          local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_1f0.AllocatorInstance,2,&local_1f0.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_1f0.AllocatorInstance.Data,&local_1a8,2);
          lVar15 = 0x1d8b0;
LAB_14b7b1054:
          UDS_UIMessageManager::OpenMsgByStringUi
                    (lVar15,Alert_None_01,&local_1f0,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
          if ((FStringFormatArg *)local_1f0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_1f0.AllocatorInstance.Data);
          }
        }
        else {
          if (!param_4) {
            return false;
          }
          pUVar10 = FWeakObjectPtr::Get(&local_1d8);
          local_1f8[0] = pUVar10[3].field_0x1;
          iVar2 = DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity(param_1,local_1f8);
          pUVar10 = FWeakObjectPtr::Get(&local_1d8);
          pFVar11 = FDS_PlayerSkillBaseTableRow::Get((ulonglong)(byte)pUVar10[3].field_0x1,true);
          if (pFVar11 == (FDS_PlayerSkillBaseTableRow *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 != (UDS_LogManager *)0x0) {
              pUVar5 = UDS_LogManager::GetInst();
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"DS_AbilityUtil_PlayerSkill::GetPlayerSkillName",0x2e,Yes);
              UDS_LogManager::PrintLog
                        (pUVar5,1,Warning,local_158.Ptr,99,
                         L"playerSkillBaseTable is nullptr. (%llu)");
              if ((FScriptContainerElement *)local_158._padding_ != (FScriptContainerElement *)0x0)
              {
                FMemory::Free((void *)local_158._padding_);
              }
            }
            ::FString::FString(&local_1c8,"");
          }
          else {
            puVar12 = (undefined8 *)
                      (**(code **)((pFVar11->ID_SkillName)._padding_ + 8))(&pFVar11->ID_SkillName);
            local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1c8.Data.ArrayNum = *(int *)(puVar12 + 1);
            lVar16 = (longlong)local_1c8.Data.ArrayNum;
            _Src = (void *)*puVar12;
            if (local_1c8.Data.ArrayNum == 0) {
              local_1c8.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_1c8.Data.ArrayNum,0,(ForAnyElementType *)&local_1c8,
                         local_1c8.Data.ArrayNum,&local_1c8.Data.ArrayMax);
              memcpy(local_1c8.Data.AllocatorInstance.Data,_Src,lVar16 * 2);
            }
          }
          if (iVar2 != 0) {
            pUVar10 = FWeakObjectPtr::Get(&local_1d8);
            FVar14.Data = local_1c8.Data.AllocatorInstance.Data;
            if (*(int *)&pUVar10[3].field_0x4 <= iVar2) goto LAB_14b7b0ce0;
            pFVar13 = ::FString::FString(&local_168,&local_1c8);
            FStringFormatArg::FStringFormatArg(&local_1a8,pFVar13);
            pUVar10 = FWeakObjectPtr::Get(&local_1d8);
            FStringFormatArg::FStringFormatArg(&local_188,*(int *)&pUVar10[3].field_0x4);
            local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f0.ArrayNum = 2;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_1f0.AllocatorInstance,2,&local_1f0.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_1f0.AllocatorInstance.Data,&local_1a8,2);
            lVar15 = 0x4c2c1;
            goto LAB_14b7b1054;
          }
          pFVar13 = ::FString::FString(&local_168,&local_1c8);
          FStringFormatArg::FStringFormatArg(&local_1a8,pFVar13);
          local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1f0.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_1f0.AllocatorInstance,1,&local_1f0.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_1f0.AllocatorInstance.Data,&local_1a8,1);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x4c2c6,Alert_None_01,&local_1f0,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
          local_188.StringValue.Data.AllocatorInstance.Data = local_1f0.AllocatorInstance.Data;
        }
        if ((FStringFormatArg *)local_188.StringValue.Data.AllocatorInstance.Data !=
            (FStringFormatArg *)0x0) {
          FMemory::Free(local_188.StringValue.Data.AllocatorInstance.Data);
        }
        FVar14.Data = local_1c8.Data.AllocatorInstance.Data;
        if (local_1a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.StringValue.Data.AllocatorInstance.Data);
          FVar14.Data = local_1c8.Data.AllocatorInstance.Data;
        }
        goto LAB_14b7b0ce0;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity",0x3a,Yes);
      pwVar18 = L"charStateData is nullptr. (%llu)";
      uVar17 = 0x35;
    }
  }
LAB_14b7b0cbf:
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,uVar17,pwVar18);
  FVar14.Data = (FScriptContainerElement *)local_158._padding_;
LAB_14b7b0ce0:
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return false;
}

// IsAbleInteraction_SpecialBuff @ 14b7b11c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __cdecl
DS_AbilityUtil_Interaction::IsAbleInteraction_SpecialBuff
          (ulong64 *param_1,ulong64 *param_2,int param_3,bool *param_4)

{
  bool bVar1;
  EDS_HandlingType EVar2;
  FDS_EntityBase *pFVar3;
  UDS_LogManager *pUVar4;
  UDS_NPCDataSet *pUVar5;
  undefined1 auStackY_198 [32];
  uint uVar6;
  wchar_t *pwVar7;
  bool local_158 [4];
  EDS_SpecialBuffType local_154;
  FWeakObjectPtr local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar3 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"DS_AbilityUtil_Interaction::IsAbleInteraction_SpecialBuff",0x39,Yes);
    pwVar7 = L"sourceEntity is nullptr. (%llu)";
    uVar6 = 0x107;
  }
  else {
    pFVar3 = FDS_EntityBase::GetEntityBase(param_2);
    if (pFVar3 == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"DS_AbilityUtil_Interaction::IsAbleInteraction_SpecialBuff",0x39,Yes);
      pwVar7 = L"targetEntity is nullptr. (%llu)";
      uVar6 = 0x10e;
    }
    else {
      if (pFVar3->EntityType != NPC) {
        return true;
      }
      TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_150);
      bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_150,(void *)0x0);
      if (!bVar1) {
        pUVar5 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_150);
        bVar1 = UDS_NPCDataSet::IsHandlingNPC(pUVar5);
        if (!bVar1) {
          return true;
        }
        pUVar5 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_150);
        EVar2 = UDS_NPCDataSet::GetHandlingType(pUVar5,param_3);
        if (EVar2 == Hold) {
          local_158[0] = true;
          local_154 = ForbidHold;
          bVar1 = UDS_CharBuffData::CheckForbidSpecialBuff(param_1,&local_154,local_158);
          return bVar1;
        }
        if (EVar2 == LiftUp) {
          local_158[0] = true;
          local_154 = ForbidLiftUp;
          bVar1 = UDS_CharBuffData::CheckForbidSpecialBuff(param_1,&local_154,local_158);
        }
        else {
          if (EVar2 != HeavyLiftUp) {
            return true;
          }
          local_158[0] = true;
          local_154 = ForbidHeavyLiftUp;
          bVar1 = UDS_CharBuffData::CheckForbidSpecialBuff(param_1,&local_154,local_158);
        }
        if (bVar1) {
          return true;
        }
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"DS_AbilityUtil_Interaction::IsAbleInteraction_SpecialBuff",0x39,Yes);
      pwVar7 = L"npcDataSet is nullptr. (%llu)";
      uVar6 = 0x11a;
    }
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ == (void *)0x0) {
    return false;
  }
  FMemory::Free((void *)local_148._padding_);
  return false;
}

// IsAbleInteraction_TargetEntity @ 14b7b1440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __cdecl
DS_AbilityUtil_Interaction::IsAbleInteraction_TargetEntity
          (ulong64 *param_1,int param_2,ulong64 param_3)

{
  char cVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  bool bVar4;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"DS_AbilityUtil_Interaction::IsAbleInteraction_TargetEntity",0x3a,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xba,L"targetEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar4 = false;
  }
  else {
    cVar1 = (**(code **)(pFVar2->_padding_ + 0xa8))(pFVar2,param_3);
    bVar4 = cVar1 != '\0';
  }
  return bVar4;
}

// IsAbleInteraction_Ticket @ 14b7b1540

bool __cdecl
DS_AbilityUtil_PlayerSkill::IsAbleInteraction_Ticket(int param_1,ulong64 *param_2,ulong64 *param_3)

{
  EDS_GradeType EVar1;
  bool bVar2;
  EDS_TicketType EVar3;
  int iVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18 [2];
  
  UDS_InteractionData::GetData((ulong64)&local_res20,*param_3,SUB41(param_1,0));
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) {
    return false;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar5[3].field_0x1 != '\0') {
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    iVar4 = *(int *)&pUVar5[3].field_0x4;
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    EVar1 = pUVar5[3].field_0x8;
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    EVar3 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketType(pUVar5[3].field_0x1,iVar4,EVar1);
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketCount(pUVar5[3].field_0x1,iVar4,EVar1);
    if ((EVar3 != None) && (0 < iVar4)) {
      UDS_TicketData::GetDataByCharEntityID((ulong64 *)local_18,(EDS_TicketType *)param_2);
      bVar2 = FWeakObjectPtr::IsValid(local_18);
      if (!bVar2) {
        return false;
      }
      pUVar5 = FWeakObjectPtr::Get(local_18);
      return iVar4 <= *(int *)&pUVar5[2].field_0xc;
    }
  }
  return true;
}

// IsAblePlayerSkill_PlayerSkillLevel @ 14b7b1650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __cdecl
DS_AbilityUtil_PlayerSkill::IsAblePlayerSkill_PlayerSkillLevel
          (ulong64 *param_1,EDS_PlayerSkillType *param_2)

{
  bool bVar1;
  int iVar2;
  FDS_EntityBase *pFVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar3 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"DS_AbilityUtil_PlayerSkill::IsAblePlayerSkill_PlayerSkillLevel",0x3e,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x50,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    iVar2 = GetPlayerSkillLevel_SourceEntity(param_1,param_2);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

// IsAbleWarp_SourceEntity @ 14b7b1750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __cdecl
DS_AbilityUtil_Warp::IsAbleWarp_SourceEntity
          (ulong64 *param_1,EDS_WarpRequestType *param_2,bool *param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *pFVar3;
  UDS_CharStateData *pUVar4;
  long64 lVar5;
  undefined1 auStackY_1a8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_168;
  FWeakObjectPtr local_150;
  EDS_CharState local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*param_2 == None) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_Warp::IsAbleWarp_SourceEntity",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x14,L"InWarpRequestType is None.");
    goto LAB_14b7b1945;
  }
  pFVar3 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_Warp::IsAbleWarp_SourceEntity",0x2c,Yes);
    pwVar7 = L"sourceEntity is nullptr. (%llu)";
    uVar6 = 0x1b;
  }
  else if (pFVar3->EntityType == MainCharacter) {
    UDS_CharStateData::GetData((ulong64)&local_150);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_150,(void *)0x0);
    if (!bVar1) {
      if (*param_2 == ResurrectWarp) {
LAB_14b7b1a06:
        if ((*param_2 != ReturnHomeWarp) ||
           (bVar1 = UDS_TimeCoolDownManager::HasCoolDown(ActionReturnHome,0), !bVar1)) {
          return true;
        }
      }
      else {
        pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
        local_148[0] = Battle;
        bVar1 = UDS_CharStateData::HasCharState(pUVar4,local_148);
        if (bVar1) {
          if (*param_3 != true) {
            return false;
          }
          lVar5 = 0x1adc1;
          goto LAB_14b7b1a25;
        }
        pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
        local_148[0] = AirWalk;
        bVar1 = UDS_CharStateData::HasCharState(pUVar4,local_148);
        if (bVar1) {
          if (*param_3 != true) {
            return false;
          }
          lVar5 = 0x1adc0;
          goto LAB_14b7b1a25;
        }
        pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
        local_148[0] = Interaction|Groggy|Skill|Avoid;
        bVar1 = UDS_CharStateData::HasCharState(pUVar4,local_148);
        if (!bVar1) {
          pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
          bVar1 = UDS_CharStateData::HasControlAbnormalState(pUVar4);
          if (!bVar1) goto LAB_14b7b1a06;
        }
      }
      if (*param_3 != true) {
        return false;
      }
      lVar5 = 0x1adbf;
LAB_14b7b1a25:
      local_168._0_8_ = 0;
      local_168._8_8_ = 0;
      local_168._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(lVar5,Alert_None_01,&local_168);
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_Warp::IsAbleWarp_SourceEntity",0x2c,Yes);
    pwVar7 = L"charStateData is nullptr. (%llu)";
    uVar6 = 0x29;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"DS_AbilityUtil_Warp::IsAbleWarp_SourceEntity",0x2c,Yes);
    pwVar7 = L"sourceEntity is not MainCharacter. (%llu)";
    uVar6 = 0x22;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar6,pwVar7);
LAB_14b7b1945:
  if ((void *)local_138._padding_ == (void *)0x0) {
    return false;
  }
  FMemory::Free((void *)local_138._padding_);
  return false;
}

// NPCClientControlFinalizationAction @ 14b7b31b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __cdecl
DS_AbilityUtil_NPCClientControl::NPCClientControlFinalizationAction
          (ulong64 *param_1,TVector<double> *param_2,float *param_3)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  uint uVar5;
  undefined1 auStackY_1e8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_1a8 [2];
  TVector<double>_u_0 local_198;
  double local_178;
  double dStack_170;
  double local_168;
  TVector<double>_u_0 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"DS_AbilityUtil_NPCClientControl::NPCClientControlFinalizationAction",0x43
               ,Yes);
    pwVar7 = L"sourceEntity is nullptr. (%llu)";
    uVar6 = 0x31;
  }
  else {
    UDS_MovementCore::GetMovementCore((ulong64)local_1a8);
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)local_1a8,(void *)0x0);
    if (!bVar1) {
      pUVar4 = FWeakObjectPtr::Get(local_1a8);
      (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
      local_198._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_198._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_198._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_178 = local_198._s_0.X;
      dStack_170 = local_198._s_0.Y;
      local_168 = local_198._s_0.Z;
      DS_Util::GetNPCFloorLocationByLocation
                ((TVector<double> *)&local_160._s_0,(TVector<double> *)&local_198._s_0,
                 __real_43160000,false);
      uVar6 = SUB84(local_160._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar5 = (uint)((ulonglong)local_160._0_8_ >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar6) &&
            (double)CONCAT44(uVar5,uVar6) != __real_3f1a36e2e0000000) ||
          (uVar6 = SUB84(local_160._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar5 = (uint)((ulonglong)local_160._8_8_ >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar6) &&
          (double)CONCAT44(uVar5,uVar6) != __real_3f1a36e2e0000000)) ||
         (uVar6 = SUB84(local_160._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar5 = (uint)((ulonglong)local_160._16_8_ >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar6) &&
         (double)CONCAT44(uVar5,uVar6) != __real_3f1a36e2e0000000)) {
        local_178 = local_160._s_0.X;
        dStack_170 = local_160._s_0.Y;
        local_168 = (double)pFVar2->ScaledCapsuleHalfHeight + local_160._s_0.Z;
      }
      pUVar4 = FWeakObjectPtr::Get(local_1a8);
      (**(code **)(*(longlong *)pUVar4 + 0x358))(pUVar4,&local_178);
      if (*param_3 <= 0.0 && *param_3 != 0.0) {
        pUVar4 = FWeakObjectPtr::Get(local_1a8);
        local_198._s_0.Y = (double)*param_3;
        local_198._s_0.X = 0.0;
        local_198._s_0.Z = 0.0;
        (**(code **)(*(longlong *)pUVar4 + 0x370))(pUVar4,&local_198);
      }
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"DS_AbilityUtil_NPCClientControl::NPCClientControlFinalizationAction",0x43
               ,Yes);
    pwVar7 = L"sourceMovementCore is nullptr. (%llu)";
    uVar6 = 0x38;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// NPCClientControlPreparationAction @ 14b7b3440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __cdecl
DS_AbilityUtil_NPCClientControl::NPCClientControlPreparationAction
          (ulong64 *param_1,TVector<double> *param_2)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  uint uVar5;
  undefined1 auStackY_1e8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"DS_AbilityUtil_NPCClientControl::NPCClientControlPreparationAction",0x42,
               Yes);
    pwVar7 = L"sourceEntity is nullptr. (%llu)";
    uVar6 = 0x11;
  }
  else {
    UDS_MovementCore::GetMovementCore((ulong64)&local_1a8);
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1a8,(void *)0x0);
    if (!bVar1) {
      pUVar4 = FWeakObjectPtr::Get(&local_1a8);
      (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
      local_1a0 = (param_2->field0_0x0)._s_0.X;
      dStack_198 = (param_2->field0_0x0)._s_0.Y;
      local_190 = (param_2->field0_0x0)._s_0.Z;
      local_168._s_0.X = local_1a0;
      local_168._s_0.Y = dStack_198;
      local_168._s_0.Z = local_190;
      DS_Util::GetNPCFloorLocationByLocation
                ((TVector<double> *)&local_188._s_0,(TVector<double> *)&local_168._s_0,
                 __real_43160000,false);
      uVar6 = SUB84(local_188._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar5 = (uint)((ulonglong)local_188._0_8_ >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar6) &&
            (double)CONCAT44(uVar5,uVar6) != __real_3f1a36e2e0000000) ||
          (uVar6 = SUB84(local_188._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar5 = (uint)((ulonglong)local_188._8_8_ >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar6) &&
          (double)CONCAT44(uVar5,uVar6) != __real_3f1a36e2e0000000)) ||
         (uVar6 = SUB84(local_188._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar5 = (uint)((ulonglong)local_188._16_8_ >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar6) &&
         (double)CONCAT44(uVar5,uVar6) != __real_3f1a36e2e0000000)) {
        local_1a0 = local_188._s_0.X;
        dStack_198 = local_188._s_0.Y;
        local_190 = (double)pFVar2->ScaledCapsuleHalfHeight + local_188._s_0.Z;
      }
      pUVar4 = FWeakObjectPtr::Get(&local_1a8);
      (**(code **)(*(longlong *)pUVar4 + 0x358))(pUVar4,&local_1a0);
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"DS_AbilityUtil_NPCClientControl::NPCClientControlPreparationAction",0x42,
               Yes);
    pwVar7 = L"sourceMovementCore is nullptr. (%llu)";
    uVar6 = 0x18;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// ViewModelContextDeleter @ 14b7ca750

void __cdecl ViewModelContextDeleter(FDS_ViewModelContext *param_1)

{
  UDS_ViewModelContextManager *this;
  
  if (param_1 != (FDS_ViewModelContext *)0x0) {
    this = UDS_ViewModelContextManager::GetInst();
    if (this != (UDS_ViewModelContextManager *)0x0) {
      UDS_ViewModelContextManager::UnregisterContext(this,param_1);
    }
    (**(code **)param_1->_padding_)(param_1,1);
  }
  return;
}

// Z_Construct_UClass_UDS_ZoneManager_NoRegister @ 14b7ca790

UClass * __cdecl Z_Construct_UClass_UDS_ZoneManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ZoneManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ZoneManager",
               &Z_Registration_Info_UClass_UDS_ZoneManager.InnerSingleton,
               UDS_ZoneManager::StaticRegisterNativesUDS_ZoneManager,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ZoneManager>,
               InternalVTableHelperCtorCaller<UDS_ZoneManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ZoneManager.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_ZoneEventNotifyType @ 14b7ca850

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_ZoneEventNotifyType(void)

{
  if (Z_Registration_Info_UEnum_EDS_ZoneEventNotifyType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_ZoneEventNotifyType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_ZoneEventNotifyType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_ZoneEventNotifyType.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_ZoneSpawnType @ 14b7ca890

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_ZoneSpawnType(void)

{
  if (Z_Registration_Info_UEnum_EDS_ZoneSpawnType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_ZoneSpawnType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_ZoneSpawnType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_ZoneSpawnType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDS_ZoneGroupTableRow @ 14b7ca8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ZoneGroupTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ZoneGroupTableRow.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ZoneGroupTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ZoneGroupTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ZoneGroupTableRow.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDS_ZoneGroupTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ZoneIslandTableRow @ 14b7ca950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ZoneIslandTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ZoneIslandTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ZoneIslandTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ZoneIslandTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ZoneIslandTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ZoneIslandTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ZonePropInfoTableRow @ 14b7ca9d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ZonePropInfoTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ZonePropInfoTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ZonePropInfoTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ZonePropInfoTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ZonePropInfoTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ZonePropInfoTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_ZoneResurrectionTableRow @ 14b7caa50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_ZoneResurrectionTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_ZoneResurrectionTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_ZoneResurrectionTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_ZoneResurrectionTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_ZoneResurrectionTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_ZoneResurrectionTableRow.InnerSingleton;
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

// Empty'' @ 150437240

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  TDS_Singleton<FDS_HttpServer>::Empty._padding_ = (longlong)&___7FDS_HttpServer__6B_;
  FDS_Urls::~FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  return;
}

// PathSeparator'' @ 150437260

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

// RootNodeID'' @ 150437280

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

// `dynamic_atexit_destructor_for_'AbnormalStateTagMap'' @ 1504372a0

void __cdecl _dynamic_atexit_destructor_for__AbnormalStateTagMap__(void)

{
  AbnormalStateTagMap._72_4_ = 0;
  if (AbnormalStateTagMap._64_8_ != 0) {
    FMemory::Free((void *)AbnormalStateTagMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&AbnormalStateTagMap);
  return;
}

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 1504372e0

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

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 150437300

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

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 150437320

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

