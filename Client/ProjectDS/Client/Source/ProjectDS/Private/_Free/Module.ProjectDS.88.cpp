// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 195

// AbilityClassTemplateMap'' @ 14126cbb0

void __cdecl `dynamic_initializer_for_'UDS_GameplayAbility::AbilityClassTemplateMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UDS_GameplayAbility::AbilityClassTemplateMap__);
  return;
}

// Bit'' @ 14126cbd0

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::Bit__(void)

{
  FWidgetStateBitfield::FWidgetStateBitfield(&UWidgetLockedStateRegistration::Bit);
  return;
}

// ChildInteractionAbilityList'' @ 14126cbf0

void __cdecl
`dynamic_initializer_for_'UDS_InteractionProcessAbility::ChildInteractionAbilityList__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UDS_InteractionProcessAbility::
         ChildInteractionAbilityList__);
  return;
}

// ContinousHitInfoMap'' @ 14126cc10

void __cdecl `dynamic_initializer_for_'UDS_HitProcessAbility::ContinousHitInfoMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UDS_HitProcessAbility::ContinousHitInfoMap__);
  return;
}

// PathSeparator'' @ 14126cc30

void __cdecl `dynamic_initializer_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ::FString::FString(&FControlRigOverrideValue::PathSeparator,L"->");
  atexit(`dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__);
  return;
}

// RootNodeID'' @ 14126cc60

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// StateName'' @ 14126cc90

void __cdecl `dynamic_initializer_for_'UWidgetDisabledStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetDisabledStateRegistration::StateName,"Disabled");
  return;
}

// StateName'' @ 14126ccb0

void __cdecl `dynamic_initializer_for_'UWidgetHoveredStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetHoveredStateRegistration::StateName,"Hovered");
  return;
}

// StateName'' @ 14126ccd0

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetLockedStateRegistration::StateName,"Locked");
  return;
}

// StateName'' @ 14126ccf0

void __cdecl `dynamic_initializer_for_'UWidgetPressedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetPressedStateRegistration::StateName,"Pressed");
  return;
}

// StateName'' @ 14126cd10

void __cdecl `dynamic_initializer_for_'UWidgetSelectedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetSelectedStateRegistration::StateName,"Selected");
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 14126cd30

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 14126cd50

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

// `dynamic_initializer_for_'BoolTypeName'' @ 14126cda0

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

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 14126cdf0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 14126ce10

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 14126ce30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 14126ce50

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 14126ce70

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 14126ce90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 14126ceb0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 14126ced0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 14126cef0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 14126cf10

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 14126cf30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 14126cf50

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 14126cf70

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 14126cf90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 14126cfb0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 14126cfd0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 14126cff0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 14126d010

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 14126d030

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 14126d050

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

// `dynamic_initializer_for_'DefaultSocketName'' @ 14126d0d0

void __cdecl _dynamic_initializer_for__DefaultSocketName__(void)

{
  FName::FName(&DefaultSocketName,"FocusMode01");
  return;
}

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 14126d0f0

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

// `dynamic_initializer_for_'DoubleTypeName'' @ 14126d140

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

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 14126d190

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

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 14126d210

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

// `dynamic_initializer_for_'FNameTypeName'' @ 14126d260

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

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 14126d2b0

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

// `dynamic_initializer_for_'FStringTypeName'' @ 14126d300

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

// `dynamic_initializer_for_'FTextTypeName'' @ 14126d350

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

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 14126d3a0

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

// `dynamic_initializer_for_'FloatTypeName'' @ 14126d3f0

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

// `dynamic_initializer_for_'HttpVersion'' @ 14126d440

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 14126d460

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

// `dynamic_initializer_for_'Int32TypeName'' @ 14126d4b0

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

// `dynamic_initializer_for_'Int64TypeName'' @ 14126d500

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

// `dynamic_initializer_for_'IntTypeName'' @ 14126d550

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

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 14126d5a0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 14126d5c0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 14126d5e0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 14126d600

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 14126d620

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 14126d640

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 14126d660

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 14126d680

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 14126d6a0

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 14126d6c0

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 14126d6e0

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 14126d700

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 14126d720

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 14126d740

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 14126d760

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 14126d780

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 14126d7a0

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

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 14126d830

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

// `dynamic_initializer_for_'TargetSocketNames'' @ 14126d8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _dynamic_initializer_for__TargetSocketNames__(void)

{
  ForAnyElementType FVar1;
  undefined1 auStackY_78 [32];
  FName local_38;
  FName FStack_30;
  FName local_28;
  FName FStack_20;
  FName local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  FName::FName(&local_38,"FocusMode01");
  FName::FName(&FStack_30,"FocusMode02");
  FName::FName(&local_28,"FocusMode03");
  FName::FName(&FStack_20,"FocusMode04");
  FName::FName(&local_18,"FocusMode05");
  TargetSocketNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TargetSocketNames.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,5,0,&TargetSocketNames.AllocatorInstance,5,&TargetSocketNames.ArrayMax);
  FVar1 = TargetSocketNames.AllocatorInstance;
  *(FName *)TargetSocketNames.AllocatorInstance.Data = local_38;
  *(FName *)(FVar1.Data + 8) = FStack_30;
  *(FName *)(FVar1.Data + 0x10) = local_28;
  *(FName *)(FVar1.Data + 0x18) = FStack_20;
  *(FName *)(FVar1.Data + 0x20) = local_18;
  atexit(_dynamic_atexit_destructor_for__TargetSocketNames__);
  return;
}

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 14126d9c0

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

// `dynamic_initializer_for_'UInt32TypeName'' @ 14126da10

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

// `dynamic_initializer_for_'UInt64TypeName'' @ 14126da60

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

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 14126dab0

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

// `dynamic_initializer_for_'UInt8TypeName'' @ 14126db00

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

// `dynamic_initializer_for_'UnixSocketPath'' @ 14126db50

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// MakeContext<FDS_ViewModelContext_InputKeyGroup> @ 14b7d4de0

TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1> * __cdecl
MakeContext<FDS_ViewModelContext_InputKeyGroup>
          (TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_InputKeyGroup *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x58);
  if (pFVar3 == (FDS_ViewModelContext_InputKeyGroup *)0x0) {
    pFVar3 = (FDS_ViewModelContext_InputKeyGroup *)0x0;
  }
  else {
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    pFVar3->InputKeyGroupType = None;
    *(undefined4 *)&pFVar3->field_0x23 = 0;
    *(byte *)((longlong)&pFVar3->WindowWidget + 3) = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_InputKeyGroup__6B_;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->bFollowCursor = false;
    (pFVar3->DefaultKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->DefaultKeys).ArrayNum = 0;
    (pFVar3->DefaultKeys).ArrayMax = 0;
    (pFVar3->TypeDelKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->TypeDelKeys).ArrayNum = 0;
    (pFVar3->TypeDelKeys).ArrayMax = 0;
    (pFVar3->SelfDelKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->SelfDelKeys).ArrayNum = 0;
    (pFVar3->SelfDelKeys).ArrayMax = 0;
  }
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Object = pFVar3;
  pTVar4 = operator_new(0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)ViewModelContextDeleter;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_InputKeyGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext_InputKeyGroup **)&pTVar4[1].SharedReferenceCount = pFVar3;
    pTVar5 = pTVar4;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_InputKeyGroup *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1> *)(*pcVar1)();
    return pTVar6;
  }
  pFVar3 = __return_storage_ptr__->Object;
  pUVar7 = FDS_ViewModelContext_InputKeyGroup::StaticStruct();
  pFVar3->_padding_ = (longlong)pUVar7;
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

// NewObject<UDS_ContentArguments> @ 14b7d4f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ContentArguments * __cdecl NewObject<UDS_ContentArguments>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ContentArguments *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ContentArguments_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ContentArguments *)
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

// NewObject<UDS_InteractionEvent> @ 14b7d4fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_InteractionEvent * __cdecl NewObject<UDS_InteractionEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_InteractionEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_InteractionEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_InteractionEvent *)
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

// NewObject<UDS_LevelSequenceEvent> @ 14b7d5060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LevelSequenceEvent * __cdecl NewObject<UDS_LevelSequenceEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_LevelSequenceEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LevelSequenceEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_LevelSequenceEvent *)
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

// NewObject<UDS_LevelSequencePlayAbilityContext> @ 14b7d5100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LevelSequencePlayAbilityContext * __cdecl
NewObject<UDS_LevelSequencePlayAbilityContext>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_LevelSequencePlayAbilityContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LevelSequencePlayAbilityContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_LevelSequencePlayAbilityContext *)
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

// NewObject<UDS_LoadingEvent> @ 14b7d51a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LoadingEvent * __cdecl NewObject<UDS_LoadingEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_LoadingEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LoadingEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_LoadingEvent *)
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

// `vcall'{888,{flat}}'_}' @ 14b7d8874

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
/* [thunk]: __cdecl UDS_GameplayAbility::`vcall'{888,{flat}}' }' */

void __thiscall UDS_GameplayAbility::_vcall__888__flat______(UDS_GameplayAbility *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b7d8877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x378))();
  return;
}

// `vcall'{912,{flat}}'_}' @ 14b7d8884

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
/* [thunk]: __cdecl UDS_GameplayAbility::`vcall'{912,{flat}}' }' */

void __thiscall UDS_GameplayAbility::_vcall__912__flat______(UDS_GameplayAbility *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b7d8887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x390))();
  return;
}

// `vcall'{936,{flat}}'_}' @ 14b7d8894

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
/* [thunk]: __cdecl UDS_GameplayAbility::`vcall'{936,{flat}}' }' */

void __thiscall UDS_GameplayAbility::_vcall__936__flat______(UDS_GameplayAbility *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b7d8897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3a8))();
  return;
}

// `vcall'{976,{flat}}'_}' @ 14b7d88a4

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
/* [thunk]: __cdecl UDS_GameplayAbility::`vcall'{976,{flat}}' }' */

void __thiscall UDS_GameplayAbility::_vcall__976__flat______(UDS_GameplayAbility *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b7d88a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3d0))();
  return;
}

// `scalar_deleting_destructor' @ 14b7d88c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d88f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_ThrowStartSkillInfo_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_ThrowStartSkillInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8920

void * __thiscall
IBaseDelegateInstance<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8950

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_InputControlType_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8980

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_LiftUpEvent_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d89b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d89e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8a10

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8a40

void * __thiscall
IBaseDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8a70

void * __thiscall
IBaseDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8aa0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_ContentsTabFrameType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8ad0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_FadeInOutPhase),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8b00

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8b30

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8b60

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8b90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameplayAbility,void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameplayAbility,void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8bc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameplayAbility,void___cdecl(unsigned___int64_const_&,enum_EDS_SpecialBuffType_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8bf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameplayAbility,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameplayAbility,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8c20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_GameplayAbility,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_GameplayAbility,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8c50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_HitProcessAbility,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy,int,unsigned___int64,unsigned___int64,FDS_StruckInfo,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_HitProcessAbility,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy,int,unsigned___int64,unsigned___int64,FDS_StruckInfo,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8ca0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_HitProcessAbility,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_HitEndType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8cd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_HitProcessAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_HitProcessAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8d00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_HitProcessAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FDS_StruckInfo>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_HitProcessAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FDS_StruckInfo>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8d30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ImpactEffectAbility,void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ImpactEffectAbility,void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8d60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_Hold,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_Hold,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8d90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_Hold,void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8dc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_Hold,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_Hold,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8df0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_Hold,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_Hold,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8e20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(FDS_ThrowStartSkillInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(FDS_ThrowStartSkillInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8e50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(enum_EDS_LiftUpEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8e80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8eb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8ee0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8f10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8f40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_LiftUp,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8f70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPC,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPC,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8fa0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPC,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPC,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d8fd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCCamp,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCCamp,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9000

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCCamp,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCCamp,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9030

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCCamp,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCCamp,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9060

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCCamp,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCCamp,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9090

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCGimmick,void___cdecl(enum_EDS_ContentsTabFrameType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d90c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCGimmick,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCGimmick,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d90f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCGimmick,void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCGimmick,void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9120

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCGimmick,void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCGimmick,void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9150

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCLing,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCLing,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9180

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCLing,void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCLing,void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d91b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCLing,void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCLing,void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d91e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCLingTalk,void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCLingTalk,void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9210

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCMountInteraction,void___cdecl(enum_EDS_ContentsTabFrameType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9240

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCTaming,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCTaming,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9270

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCTaming,void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d92a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCTaming,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCTaming,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d92d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCTaming,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_NPCTaming,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9300

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_ObjectHandling,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_ObjectHandling,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9330

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_ObjectHandling,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_ObjectHandling,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9360

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffGather,void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9390

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffGather,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffGather,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d93c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffGather,void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffGather,void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d93f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffOpenLocks,void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9420

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffOpenLocks,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffOpenLocks,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9450

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffOpenLocks,void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffOpenLocks,void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9480

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffPortal,void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d94b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffPortal,void___cdecl(enum_EDS_ContentsTabFrameType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d94e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffQuestBoard,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffQuestBoard,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9510

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffQuestBoard,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffQuestBoard,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9540

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffWarpDevice,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffWarpDevice,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9570

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffWarpDevice,void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffWarpDevice,void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d95a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffWarpDevice,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_InteractionAbility_StuffWarpDevice,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d95d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ItemUseAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ItemUseAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9600

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_LevelSequencePlayAbility,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_LevelSequencePlayAbility,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9630

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_LevelSequencePlayAbility,void___cdecl(enum_EDS_FadeInOutPhase),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9660

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_LevelSequencePlayAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_LevelSequencePlayAbility,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9690

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_LevelSequencePlayAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_LevelSequencePlayAbility,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d96c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_LockOnTargetAbility,void___cdecl(enum_EDS_InputControlType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d96f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_LockOnTargetAbility,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_LockOnTargetAbility,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9720

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9750

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_ThrowStartSkillInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_ThrowStartSkillInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9780

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d97b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_InputControlType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d97e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_LiftUpEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9810

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9840

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9870

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d98a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d98d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9900

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9930

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy,int,unsigned___int64,unsigned___int64,FDS_StruckInfo,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy,int,unsigned___int64,unsigned___int64,FDS_StruckInfo,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x90);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9980

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_ContentsTabFrameType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d99b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_FadeInOutPhase),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d99e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9a10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_HitEndType>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9a40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FDS_StruckInfo>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FDS_StruckInfo>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9a70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9aa0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9ad0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_DailyQuestPopupOpen,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_DailyQuestPopupOpen,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9b10

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_HUD_Camp,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_HUD_Camp,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9b50

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_InputKeyGroup,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_InputKeyGroup,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9b90

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_LockOnTarget,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_LockOnTarget,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9bd0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_NpcFunction,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_NpcFunction,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9c10

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<void,`FWN_EndOfRefs::FWN_EndOfRefs'::__l5::<lambda_1>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b7d9c80

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// AbilityClassTemplateMap'' @ 150437340

void __cdecl `dynamic_atexit_destructor_for_'UDS_GameplayAbility::AbilityClassTemplateMap__(void)

{
  UDS_GameplayAbility::AbilityClassTemplateMap._72_4_ = 0;
  if (UDS_GameplayAbility::AbilityClassTemplateMap._64_8_ != 0) {
    FMemory::Free((void *)UDS_GameplayAbility::AbilityClassTemplateMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TSubclassOf<UWN_Ability>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TSubclassOf<UWN_Ability>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TSubclassOf<UWN_Ability>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UDS_GameplayAbility::AbilityClassTemplateMap);
  return;
}

// ChildInteractionAbilityList'' @ 150437380

void __cdecl
`dynamic_atexit_destructor_for_'UDS_InteractionProcessAbility::ChildInteractionAbilityList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UDS_InteractionProcessAbility::ChildInteractionAbilityList.AllocatorInstance.Data;
  if (UDS_InteractionProcessAbility::ChildInteractionAbilityList.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UDS_InteractionProcessAbility::ChildInteractionAbilityList.AllocatorInstance.Data !=
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

// ContinousHitInfoMap'' @ 1504373a0

void __cdecl `dynamic_atexit_destructor_for_'UDS_HitProcessAbility::ContinousHitInfoMap__(void)

{
  UDS_HitProcessAbility::ContinousHitInfoMap._72_4_ = 0;
  if (UDS_HitProcessAbility::ContinousHitInfoMap._64_8_ != 0) {
    FMemory::Free((void *)UDS_HitProcessAbility::ContinousHitInfoMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UDS_HitProcessAbility::ContinousHitInfoMap);
  return;
}

// PathSeparator'' @ 1504373e0

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

// RootNodeID'' @ 150437400

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

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 150437420

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

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 150437440

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

// `dynamic_atexit_destructor_for_'TargetSocketNames'' @ 150437460

void __cdecl _dynamic_atexit_destructor_for__TargetSocketNames__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TargetSocketNames.AllocatorInstance.Data;
  if (TargetSocketNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TargetSocketNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

