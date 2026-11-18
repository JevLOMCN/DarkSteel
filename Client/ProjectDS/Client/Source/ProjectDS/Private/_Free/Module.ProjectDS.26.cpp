// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 300

// Empty'' @ 141202520

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  FDS_Urls::FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__);
  return;
}

// PathSeparator'' @ 141202550

void __cdecl `dynamic_initializer_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ::FString::FString(&FControlRigOverrideValue::PathSeparator,L"->");
  atexit(`dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__);
  return;
}

// RootNodeID'' @ 141202580

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 1412025b0

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 1412025d0

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

// `dynamic_initializer_for_'BoolTypeName'' @ 141202620

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

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 141202670

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 141202690

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 1412026b0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 1412026d0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 1412026f0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 141202710

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 141202730

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 141202750

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 141202770

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 141202790

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 1412027b0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 1412027d0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 1412027f0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 141202810

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 141202830

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 141202850

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 141202870

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 141202890

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 1412028b0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 1412028d0

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

// `dynamic_initializer_for_'DoubleTypeName'' @ 141202920

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

// `dynamic_initializer_for_'ErrorNamespace'' @ 141202970

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 1412029a0

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

// `dynamic_initializer_for_'FNameTypeName'' @ 1412029f0

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

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 141202a40

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

// `dynamic_initializer_for_'FStringTypeName'' @ 141202a90

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

// `dynamic_initializer_for_'FTextTypeName'' @ 141202ae0

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

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 141202b30

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

// `dynamic_initializer_for_'FloatTypeName'' @ 141202b80

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

// `dynamic_initializer_for_'HttpVersion'' @ 141202bd0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 141202bf0

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

// `dynamic_initializer_for_'Int32TypeName'' @ 141202c40

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

// `dynamic_initializer_for_'Int64TypeName'' @ 141202c90

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

// `dynamic_initializer_for_'IntTypeName'' @ 141202ce0

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

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 141202d30

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 141202d50

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_GetFluxSurfaceLocation'' @ 141202d70

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_GetFluxSurfaceLocation__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_GetFluxSurfaceLocation,L"GetFluxSurfaceLocation");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_OnChangedPreset'' @ 141202d90

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_OnChangedPreset__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_OnChangedPreset,L"OnChangedPreset");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_OnChargingPowerJump'' @ 141202db0

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_OnChargingPowerJump__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_OnChargingPowerJump,L"OnChargingPowerJump");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_OnEndChargingPowerJump'' @ 141202dd0

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_OnEndChargingPowerJump__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_OnEndChargingPowerJump,L"OnEndChargingPowerJump");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_OnEndPowerJump'' @ 141202df0

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_OnEndPowerJump__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_OnEndPowerJump,L"OnEndPowerJump");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_OnEnterBreach'' @ 141202e10

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_OnEnterBreach__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_OnEnterBreach,L"OnEnterBreach");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_OnFootStep'' @ 141202e30

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_OnFootStep__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_OnFootStep,L"OnFootStep");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_OnStartAirDash'' @ 141202e50

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_OnStartAirDash__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_OnStartAirDash,L"OnStartAirDash");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_OnStartFlyingCrash'' @ 141202e70

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_OnStartFlyingCrash__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_OnStartFlyingCrash,L"OnStartFlyingCrash");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_OnStartHovering'' @ 141202e90

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_OnStartHovering__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_OnStartHovering,L"OnStartHovering");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_OnStartPowerJump'' @ 141202eb0

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_OnStartPowerJump__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_OnStartPowerJump,L"OnStartPowerJump");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_OnStopSequencePlay'' @ 141202ed0

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_OnStopSequencePlay__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_OnStopSequencePlay,L"OnStopSequencePlay");
  return;
}

// `dynamic_initializer_for_'NAME_ADS_MainCharacter_StartSpawnInEffect'' @ 141202ef0

void __cdecl _dynamic_initializer_for__NAME_ADS_MainCharacter_StartSpawnInEffect__(void)

{
  FName::FName(&NAME_ADS_MainCharacter_StartSpawnInEffect,L"StartSpawnInEffect");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 141202f10

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 141202f30

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 141202f50

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 141202f70

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 141202f90

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 141202fb0

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

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 141203040

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

// `dynamic_initializer_for_'UInt32TypeName'' @ 141203090

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

// `dynamic_initializer_for_'UInt64TypeName'' @ 1412030e0

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

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 141203130

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

// `dynamic_initializer_for_'UInt8TypeName'' @ 141203180

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

// `dynamic_initializer_for_'UnixSocketPath'' @ 1412031d0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_MainPlayerAnim_h__Script_ProjectDS_3400897400'' @ 1412031f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_MainPlayerAnim_h__Script_ProjectDS_3400897400__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_MainPlayerAnim_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_MainPlayerCombatAnim_h__Script_ProjectDS_3121608629'' @ 141203230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_MainPlayerCombatAnim_h__Script_ProjectDS_3121608629__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Animation_DS_MainPlayerCombatAnim_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Common_ControlRig_DS_LookAtControlRig_h__Script_ProjectDS_2130554177'' @ 141203270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Common_ControlRig_DS_LookAtControlRig_h__Script_ProjectDS_2130554177__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Common_ControlRig_DS_LookAtControlRig_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_MailBaseTableRow_h__Script_ProjectDS_1896406062'' @ 1412032b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_MailBaseTableRow_h__Script_ProjectDS_1896406062__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_MailBaseTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_MailCategoryTableRow_h__Script_ProjectDS_517622330'' @ 1412032f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_MailCategoryTableRow_h__Script_ProjectDS_517622330__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_MailCategoryTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_MailContentTableRow_h__Script_ProjectDS_3400848348'' @ 141203330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_MailContentTableRow_h__Script_ProjectDS_3400848348__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_DataTable_Public_DS_MailContentTableRow_h__Script_ProjectDS_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_LogoutReason_h__Script_ProjectDS_633147855'' @ 141203370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_LogoutReason_h__Script_ProjectDS_633147855__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_LogoutReason_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_MailBoxType_h__Script_ProjectDS_1211178810'' @ 1412033c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_MailBoxType_h__Script_ProjectDS_1211178810__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_MailBoxType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_MailCategoryType_h__Script_ProjectDS_186256287'' @ 141203410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_MailCategoryType_h__Script_ProjectDS_186256287__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_MailCategoryType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_MailType_h__Script_ProjectDS_3974061654'' @ 141203460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_MailType_h__Script_ProjectDS_3974061654__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Enum_DS_MailType_h__Script_ProjectDS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_GameMode_GameState_DS_LoginState_h__Script_ProjectDS_1755245359'' @ 1412034b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_GameMode_GameState_DS_LoginState_h__Script_ProjectDS_1755245359__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_GameMode_GameState_DS_LoginState_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_GameModuleDefine_DS_LoginModuleDefines_h__Script_ProjectDS_1438665891'' @ 1412034f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_GameModuleDefine_DS_LoginModuleDefines_h__Script_ProjectDS_1438665891__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_GameModuleDefine_DS_LoginModuleDefines_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_LogManager_h__Script_ProjectDS_1110217204'' @ 141203530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_LogManager_h__Script_ProjectDS_1110217204__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_LogManager_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_MailManager_h__Script_ProjectDS_816778538'' @ 141203570

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_MailManager_h__Script_ProjectDS_816778538__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_DS_MailManager_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Ability_DS_LockOnTargetAbilityData_h__Script_ProjectDS_590782'' @ 1412035b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Ability_DS_LockOnTargetAbilityData_h__Script_ProjectDS_590782__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_Ability_DS_LockOnTargetAbilityData_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_DS_MailData_h__Script_ProjectDS_1699918193'' @ 1412035f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_DS_MailData_h__Script_ProjectDS_1699918193__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Data_DS_MailData_h__Script_ProjectDS_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_LoginEvent_h__Script_ProjectDS_1560114631'' @ 141203630

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_LoginEvent_h__Script_ProjectDS_1560114631__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_LoginEvent_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_MailEvent_h__Script_ProjectDS_2830227773'' @ 141203670

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_MailEvent_h__Script_ProjectDS_2830227773__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Manager_Event_DS_MailEvent_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainCharacterCollisionComponent_h__Script_ProjectDS_3357798448'' @ 1412036b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainCharacterCollisionComponent_h__Script_ProjectDS_3357798448__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainCharacterCollisionComponent_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainCharacterStateComponent_h__Script_ProjectDS_2039202863'' @ 1412036f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainCharacterStateComponent_h__Script_ProjectDS_2039202863__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainCharacterStateComponent_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainCharacterTeleportComponent_h__Script_ProjectDS_1190092051'' @ 141203730

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainCharacterTeleportComponent_h__Script_ProjectDS_1190092051__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainCharacterTeleportComponent_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainPlayerMovementComponent_h__Script_ProjectDS_2238093448'' @ 141203770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainPlayerMovementComponent_h__Script_ProjectDS_2238093448__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_Components_DS_MainPlayerMovementComponent_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_DS_MainCharacter_h__Script_ProjectDS_1669502413'' @ 1412037b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_DS_MainCharacter_h__Script_ProjectDS_1669502413__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Character_DS_MainCharacter_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Components_Camera_DS_MainCameraComponent_h__Script_ProjectDS_2105601746'' @ 1412037f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Components_Camera_DS_MainCameraComponent_h__Script_ProjectDS_2105601746__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_SpawnActor_Components_Camera_DS_MainCameraComponent_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Util_DS_LongPressProcessor_h__Script_ProjectDS_2846029506'' @ 141203830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Util_DS_LongPressProcessor_h__Script_ProjectDS_2846029506__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProjectDS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_ProjectDS_Util_DS_LongPressProcessor_h__Script_ProjectDS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UDS_LoginModuleClient_NoRegister @ 14b4e40f0

UClass * __cdecl Z_Construct_UClass_UDS_LoginModuleClient_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginModuleClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LoginModuleClient",
               &Z_Registration_Info_UClass_UDS_LoginModuleClient.InnerSingleton,
               UDS_LoginModuleClient::StaticRegisterNativesUDS_LoginModuleClient,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_LoginModuleClient>,
               InternalVTableHelperCtorCaller<UDS_LoginModuleClient>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginModuleClient.InnerSingleton;
}

// Z_Construct_UClass_ADS_MainCharacter_NoRegister @ 14b4e41a0

UClass * __cdecl Z_Construct_UClass_ADS_MainCharacter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_MainCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacter",
               &Z_Registration_Info_UClass_ADS_MainCharacter.InnerSingleton,
               ADS_MainCharacter::StaticRegisterNativesADS_MainCharacter,0xab0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_MainCharacter>,
               InternalVTableHelperCtorCaller<ADS_MainCharacter>,local_res8,ACharacter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_MainCharacter.InnerSingleton;
}

// Z_Construct_UClass_UDS_LoginModuleClient @ 14b4e43d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_LoginModuleClient(void)

{
  if (Z_Registration_Info_UClass_UDS_LoginModuleClient.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_LoginModuleClient.OuterSingleton,
               &Z_Construct_UClass_UDS_LoginModuleClient_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_LoginModuleClient.OuterSingleton;
}

// Z_Construct_UClass_UDS_LockOnTargetAbilityData @ 14b4e46f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_LockOnTargetAbilityData(void)

{
  if (Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.OuterSingleton,
               &Z_Construct_UClass_UDS_LockOnTargetAbilityData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.OuterSingleton;
}

// Z_Construct_UClass_UDS_MailManager @ 14b4e47f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_MailManager(void)

{
  if (Z_Registration_Info_UClass_UDS_MailManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_MailManager.OuterSingleton,
               &Z_Construct_UClass_UDS_MailManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_MailManager.OuterSingleton;
}

// Z_Construct_UClass_UDS_LoginState @ 14b4e4830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_LoginState(void)

{
  if (Z_Registration_Info_UClass_UDS_LoginState.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_LoginState.OuterSingleton,
               &Z_Construct_UClass_UDS_LoginState_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_LoginState.OuterSingleton;
}

// NewProp_InIsSuccess_SetBit @ 14b4e4870

void __cdecl
Z_Construct_UFunction_UDS_LoginState_OnNetworkConnected_Statics::NewProp_InIsSuccess_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// EDS_MailType_StaticEnum @ 14b4e4940

UEnum * __cdecl EDS_MailType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_MailType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_MailType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_MailType,(UObject *)pUVar1,L"EDS_MailType");
  }
  return Z_Registration_Info_UEnum_EDS_MailType.OuterSingleton;
}

// Z_Construct_UFunction_UDS_LoginState_OnNetworkConnected @ 14b4e4980

UFunction * __cdecl Z_Construct_UFunction_UDS_LoginState_OnNetworkConnected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_LoginState_OnNetworkConnected_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDS_MainCameraComponent_NoRegister @ 14b4e4ab0

UClass * __cdecl Z_Construct_UClass_UDS_MainCameraComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCameraComponent",
               &Z_Registration_Info_UClass_UDS_MainCameraComponent.InnerSingleton,
               UDS_MainCameraComponent::StaticRegisterNativesUDS_MainCameraComponent,0xda0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainCameraComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCameraComponent>,local_res8,
               UDS_CameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCameraComponent.InnerSingleton;
}

// Z_Construct_UClass_UDS_LogManager @ 14b4e4cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_LogManager(void)

{
  if (Z_Registration_Info_UClass_UDS_LogManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_LogManager.OuterSingleton,
               &Z_Construct_UClass_UDS_LogManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_LogManager.OuterSingleton;
}

// Z_Construct_UClass_UDS_LookAtControlRig @ 14b4e4df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_LookAtControlRig(void)

{
  if (Z_Registration_Info_UClass_UDS_LookAtControlRig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_LookAtControlRig.OuterSingleton,
               &Z_Construct_UClass_UDS_LookAtControlRig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_LookAtControlRig.OuterSingleton;
}

// EDS_LogoutReason_StaticEnum @ 14b4e4e30

UEnum * __cdecl EDS_LogoutReason_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_LogoutReason.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_LogoutReason.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_LogoutReason,(UObject *)pUVar1,
                       L"EDS_LogoutReason");
  }
  return Z_Registration_Info_UEnum_EDS_LogoutReason.OuterSingleton;
}

// Z_Construct_UClass_ADS_MainCharacter @ 14b4e4f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADS_MainCharacter(void)

{
  if (Z_Registration_Info_UClass_ADS_MainCharacter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADS_MainCharacter.OuterSingleton,
               &Z_Construct_UClass_ADS_MainCharacter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADS_MainCharacter.OuterSingleton;
}

// Z_Construct_UClass_UDS_MainCharacterCollisionComponent_NoRegister @ 14b4e4f60

UClass * __cdecl Z_Construct_UClass_UDS_MainCharacterCollisionComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacterCollisionComponent",
               &Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.InnerSingleton,
               UDS_MainCharacterCollisionComponent::
               StaticRegisterNativesUDS_MainCharacterCollisionComponent,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainCharacterCollisionComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCharacterCollisionComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.InnerSingleton;
}

// Z_Construct_UClass_UDS_MainCharacterStateComponent_NoRegister @ 14b4e5020

UClass * __cdecl Z_Construct_UClass_UDS_MainCharacterStateComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacterStateComponent",
               &Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.InnerSingleton,
               UDS_MainCharacterStateComponent::StaticRegisterNativesUDS_MainCharacterStateComponent
               ,200,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainCharacterStateComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCharacterStateComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.InnerSingleton;
}

// Z_Construct_UClass_UDS_MainCharacterTeleportComponent_NoRegister @ 14b4e50e0

UClass * __cdecl Z_Construct_UClass_UDS_MainCharacterTeleportComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacterTeleportComponent",
               &Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.InnerSingleton,
               UDS_MainCharacterTeleportComponent::
               StaticRegisterNativesUDS_MainCharacterTeleportComponent,0x180,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainCharacterTeleportComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCharacterTeleportComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.InnerSingleton;
}

// Z_Construct_UClass_UDS_LongPressProcessor @ 14b4e51a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_LongPressProcessor(void)

{
  if (Z_Registration_Info_UClass_UDS_LongPressProcessor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_LongPressProcessor.OuterSingleton,
               &Z_Construct_UClass_UDS_LongPressProcessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_LongPressProcessor.OuterSingleton;
}

// Z_Construct_UFunction_ADS_MainCharacter_GetFluxSurfaceLocation @ 14b4e51e0

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_GetFluxSurfaceLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_GetFluxSurfaceLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_GetFootStepProvider @ 14b4e5220

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_GetFootStepProvider(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_GetFootStepProvider_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InIsPlaying_SetBit @ 14b4e5260

void __cdecl
Z_Construct_UFunction_ADS_MainCharacter_K2_SetActorSequencerPlaying_Statics::
NewProp_InIsPlaying_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ADS_MainCharacter_K2_SetActorSequencerPlaying @ 14b4e5270

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_K2_SetActorSequencerPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_K2_SetActorSequencerPlaying_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnChangedPreset @ 14b4e52b0

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnChangedPreset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnChangedPreset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnChargingPowerJump @ 14b4e52f0

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnChargingPowerJump(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnChargingPowerJump_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnEndChargingPowerJump @ 14b4e5330

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnEndChargingPowerJump(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnEndChargingPowerJump_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnEndPowerJump @ 14b4e5370

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnEndPowerJump(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnEndPowerJump_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnEnterBreach @ 14b4e5470

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnEnterBreach(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnEnterBreach_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnFootStep @ 14b4e54b0

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnFootStep(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnFootStep_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnPhysicsVolumeChanged @ 14b4e54f0

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnPhysicsVolumeChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnPhysicsVolumeChanged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnStartAirDash @ 14b4e5530

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnStartAirDash(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnStartAirDash_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnStartFlyingCrash @ 14b4e5570

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnStartFlyingCrash(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnStartFlyingCrash_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnStartHovering @ 14b4e55b0

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnStartHovering(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnStartHovering_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnStartPowerJump @ 14b4e55f0

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnStartPowerJump(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnStartPowerJump_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_OnStopSequencePlay @ 14b4e5630

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_OnStopSequencePlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_OnStopSequencePlay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADS_MainCharacter_StartSpawnInEffect @ 14b4e5670

UFunction * __cdecl Z_Construct_UFunction_ADS_MainCharacter_StartSpawnInEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADS_MainCharacter_StartSpawnInEffect_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDS_MainPlayerMovementComponent @ 14b4e56b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_MainPlayerMovementComponent(void)

{
  if (Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.OuterSingleton,
               &Z_Construct_UClass_UDS_MainPlayerMovementComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.OuterSingleton;
}

// NewProp_MountFlyingSetInvalidate_SetBit @ 14b4e56f0

void __cdecl
Z_Construct_UClass_UDS_MainPlayerMovementComponent_Statics::NewProp_MountFlyingSetInvalidate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1004) = 1;
  return;
}

// Z_Construct_UClass_UDS_MainCharacterCollisionComponent @ 14b4e5880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_MainCharacterCollisionComponent(void)

{
  if (Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.OuterSingleton,
               &Z_Construct_UClass_UDS_MainCharacterCollisionComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14b4e59c0

void * __thiscall
FDS_MailBaseTableRow::_scalar_deleting_destructor_(FDS_MailBaseTableRow *this,uint param_1)

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

// Z_Construct_UEnum_ProjectDS_EDS_MailCategoryType @ 14b4e5a10

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_MailCategoryType(void)

{
  if (Z_Registration_Info_UEnum_EDS_MailCategoryType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_MailCategoryType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_MailCategoryType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_MailCategoryType.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_MailType @ 14b4e5a50

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_MailType(void)

{
  if (Z_Registration_Info_UEnum_EDS_MailType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_MailType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_MailType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_MailType.InnerSingleton;
}

// NewProp_isMailContentRequired_SetBit @ 14b4e5a90

void __cdecl
Z_Construct_UScriptStruct_FDS_MailBaseTableRow_Statics::NewProp_isMailContentRequired_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewStructOps @ 14b4e5aa0

void * __cdecl Z_Construct_UScriptStruct_FDS_MailBaseTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_MailBaseTableRow,&UE::CoreUObject::Private::Construct<FDS_MailBaseTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_MailBaseTableRow>,&UE::CoreUObject::Private::Destruct<FDS_MailBaseTableRow>,&UE::CoreUObject::Private::Copy<FDS_MailBaseTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDS_MainCharacterStateComponent @ 14b4e5ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_MainCharacterStateComponent(void)

{
  if (Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.OuterSingleton,
               &Z_Construct_UClass_UDS_MainCharacterStateComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.OuterSingleton;
}

// Z_Construct_UClass_UDS_MailData_NoRegister @ 14b4e5b20

UClass * __cdecl Z_Construct_UClass_UDS_MailData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailData",
               &Z_Registration_Info_UClass_UDS_MailData.InnerSingleton,
               UDS_MailData::StaticRegisterNativesUDS_MailData,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MailData>,
               InternalVTableHelperCtorCaller<UDS_MailData>,local_res8,UDS_DataBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailData.InnerSingleton;
}

// Z_Construct_UClass_UDS_MainCharacterTeleportComponent @ 14b4e5ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_MainCharacterTeleportComponent(void)

{
  if (Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.OuterSingleton,
               &Z_Construct_UClass_UDS_MainCharacterTeleportComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.OuterSingleton;
}

// Z_Construct_UFunction_UDS_MainCharacterTeleportComponent_OnStreamingComplete @ 14b4e5f20

UFunction * __cdecl
Z_Construct_UFunction_UDS_MainCharacterTeleportComponent_OnStreamingComplete(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainCharacterTeleportComponent_OnStreamingComplete_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDS_LoginEvent @ 14b4e5f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_LoginEvent(void)

{
  if (Z_Registration_Info_UClass_UDS_LoginEvent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_LoginEvent.OuterSingleton,
               &Z_Construct_UClass_UDS_LoginEvent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_LoginEvent.OuterSingleton;
}

// EDS_MailBoxType_StaticEnum @ 14b4e5fa0

UEnum * __cdecl EDS_MailBoxType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_MailBoxType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_MailBoxType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_MailBoxType,(UObject *)pUVar1,
                       L"EDS_MailBoxType");
  }
  return Z_Registration_Info_UEnum_EDS_MailBoxType.OuterSingleton;
}

// Z_Construct_UClass_UDS_MainPlayerAnim @ 14b4e5fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_MainPlayerAnim(void)

{
  if (Z_Registration_Info_UClass_UDS_MainPlayerAnim.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_MainPlayerAnim.OuterSingleton,
               &Z_Construct_UClass_UDS_MainPlayerAnim_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerAnim.OuterSingleton;
}

// Z_Construct_UClass_UDS_MainPlayerCombatAnim @ 14b4e6020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_MainPlayerCombatAnim(void)

{
  if (Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.OuterSingleton,
               &Z_Construct_UClass_UDS_MainPlayerCombatAnim_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.OuterSingleton;
}

// Z_Construct_UClass_UDS_MainCameraComponent @ 14b4e6060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_MainCameraComponent(void)

{
  if (Z_Registration_Info_UClass_UDS_MainCameraComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_MainCameraComponent.OuterSingleton,
               &Z_Construct_UClass_UDS_MainCameraComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_MainCameraComponent.OuterSingleton;
}

// NewProp_InIsBattleMode_SetBit @ 14b4e60a0

void __cdecl
Z_Construct_UFunction_UDS_MainCameraComponent_OnCameraBattleMode_Statics::
NewProp_InIsBattleMode_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDS_MainPlayerAnim_GetAimModeMoveDirection @ 14b4e60b0

UFunction * __cdecl Z_Construct_UFunction_UDS_MainPlayerAnim_GetAimModeMoveDirection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainPlayerAnim_GetAimModeMoveDirection_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDS_MainCameraComponent_OnCameraBattleMode @ 14b4e60f0

UFunction * __cdecl Z_Construct_UFunction_UDS_MainCameraComponent_OnCameraBattleMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainCameraComponent_OnCameraBattleMode_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDS_MainPlayerAnim_GetShieldMoveDirection @ 14b4e6130

UFunction * __cdecl Z_Construct_UFunction_UDS_MainPlayerAnim_GetShieldMoveDirection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainPlayerAnim_GetShieldMoveDirection_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14b4e61b0

void __cdecl
Z_Construct_UFunction_UDS_MainPlayerAnim_IsAimMode_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 14b4e61c0

void * __thiscall
FDS_MailCategoryTableRow::_scalar_deleting_destructor_(FDS_MailCategoryTableRow *this,uint param_1)

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

// Z_Construct_UFunction_UDS_MainCameraComponent_OnInputChange @ 14b4e6210

UFunction * __cdecl Z_Construct_UFunction_UDS_MainCameraComponent_OnInputChange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainCameraComponent_OnInputChange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDS_MainPlayerAnim_IsAimMode @ 14b4e6250

UFunction * __cdecl Z_Construct_UFunction_UDS_MainPlayerAnim_IsAimMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainPlayerAnim_IsAimMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14b4e6290

void * __cdecl Z_Construct_UScriptStruct_FDS_MailCategoryTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_MailCategoryTableRow,&UE::CoreUObject::Private::Construct<FDS_MailCategoryTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_MailCategoryTableRow>,&UE::CoreUObject::Private::Destruct<FDS_MailCategoryTableRow>,&UE::CoreUObject::Private::Copy<FDS_MailCategoryTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14b4e62d0

void __cdecl
Z_Construct_UFunction_UDS_MainPlayerAnim_IsCastingState_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDS_MainPlayerAnim_IsCastingState @ 14b4e62e0

UFunction * __cdecl Z_Construct_UFunction_UDS_MainPlayerAnim_IsCastingState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainPlayerAnim_IsCastingState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14b4e6320

void __cdecl
Z_Construct_UFunction_UDS_MainPlayerAnim_IsCharSwitchState_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDS_MainPlayerAnim_IsCharSwitchState @ 14b4e6330

UFunction * __cdecl Z_Construct_UFunction_UDS_MainPlayerAnim_IsCharSwitchState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainPlayerAnim_IsCharSwitchState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14b4e6370

void __cdecl
Z_Construct_UFunction_UDS_MainPlayerAnim_IsClimbLayerLinked_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDS_MainPlayerAnim_IsClimbLayerLinked @ 14b4e6380

UFunction * __cdecl Z_Construct_UFunction_UDS_MainPlayerAnim_IsClimbLayerLinked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainPlayerAnim_IsClimbLayerLinked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EDS_MailCategoryType_StaticEnum @ 14b4e63c0

UEnum * __cdecl EDS_MailCategoryType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_MailCategoryType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_MailCategoryType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_MailCategoryType,(UObject *)pUVar1,
                       L"EDS_MailCategoryType");
  }
  return Z_Registration_Info_UEnum_EDS_MailCategoryType.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14b4e6400

void __cdecl
Z_Construct_UFunction_UDS_MainPlayerAnim_IsInteractionLayerLinked_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDS_MainPlayerAnim_IsInteractionLayerLinked @ 14b4e6410

UFunction * __cdecl Z_Construct_UFunction_UDS_MainPlayerAnim_IsInteractionLayerLinked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainPlayerAnim_IsInteractionLayerLinked_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14b4e6450

void __cdecl
Z_Construct_UFunction_UDS_MainPlayerAnim_IsMountLayerLinked_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDS_MainPlayerAnim_IsMountLayerLinked @ 14b4e64a0

UFunction * __cdecl Z_Construct_UFunction_UDS_MainPlayerAnim_IsMountLayerLinked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainPlayerAnim_IsMountLayerLinked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14b4e64e0

void __cdecl
Z_Construct_UFunction_UDS_MainPlayerAnim_IsSwimLayerLinked_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 14b4e64f0

void * __thiscall
FDS_MailContentTableRow::_scalar_deleting_destructor_(FDS_MailContentTableRow *this,uint param_1)

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

// Z_Construct_UFunction_UDS_MainPlayerAnim_IsSwimLayerLinked @ 14b4e6540

UFunction * __cdecl Z_Construct_UFunction_UDS_MainPlayerAnim_IsSwimLayerLinked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainPlayerAnim_IsSwimLayerLinked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14b4e6580

void * __cdecl Z_Construct_UScriptStruct_FDS_MailContentTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDS_MailContentTableRow,&UE::CoreUObject::Private::Construct<FDS_MailContentTableRow>,&UE::CoreUObject::Private::ConstructForTests<FDS_MailContentTableRow>,&UE::CoreUObject::Private::Destruct<FDS_MailContentTableRow>,&UE::CoreUObject::Private::Copy<FDS_MailContentTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14b4e65c0

void __cdecl
Z_Construct_UFunction_UDS_MainPlayerAnim_IsToggleMoveState_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDS_MainPlayerAnim_IsToggleMoveState @ 14b4e65d0

UFunction * __cdecl Z_Construct_UFunction_UDS_MainPlayerAnim_IsToggleMoveState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainPlayerAnim_IsToggleMoveState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14b4e6610

void __cdecl
Z_Construct_UFunction_UDS_MainPlayerAnim_IsWarpState_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDS_MainPlayerAnim_IsWarpState @ 14b4e6620

UFunction * __cdecl Z_Construct_UFunction_UDS_MainPlayerAnim_IsWarpState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_MainPlayerAnim_IsWarpState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsActivePutWeapon_SetBit @ 14b4e6660

void __cdecl
Z_Construct_UClass_UDS_MainPlayerAnim_Statics::NewProp_bIsActivePutWeapon_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8a0) = 1;
  return;
}

// NewProp_bIsCastingEndAnim_SetBit @ 14b4e6670

void __cdecl
Z_Construct_UClass_UDS_MainPlayerAnim_Statics::NewProp_bIsCastingEndAnim_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8b8) = 1;
  return;
}

// NewProp_bIsLocomotionLeanAdditive_SetBit @ 14b4e6680

void __cdecl
Z_Construct_UClass_UDS_MainPlayerAnim_Statics::NewProp_bIsLocomotionLeanAdditive_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8c8) = 1;
  return;
}

// NewProp_bIsUseItem_SetBit @ 14b4e6690

void __cdecl Z_Construct_UClass_UDS_MainPlayerAnim_Statics::NewProp_bIsUseItem_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8ca) = 1;
  return;
}

// Z_Construct_UClass_UDS_MailData @ 14b4e66a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_MailData(void)

{
  if (Z_Registration_Info_UClass_UDS_MailData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_MailData.OuterSingleton,
               &Z_Construct_UClass_UDS_MailData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_MailData.OuterSingleton;
}

// Z_Construct_UClass_UDS_MailDataSet @ 14b4e66e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_MailDataSet(void)

{
  if (Z_Registration_Info_UClass_UDS_MailDataSet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_MailDataSet.OuterSingleton,
               &Z_Construct_UClass_UDS_MailDataSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_MailDataSet.OuterSingleton;
}

// Z_Construct_UClass_UDS_MailEvent @ 14b4e6990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_MailEvent(void)

{
  if (Z_Registration_Info_UClass_UDS_MailEvent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_MailEvent.OuterSingleton,
               &Z_Construct_UClass_UDS_MailEvent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_MailEvent.OuterSingleton;
}

// InternalConstructor<ADS_MainCharacter> @ 14b4e69d0

void __cdecl InternalConstructor<ADS_MainCharacter>(FObjectInitializer *param_1)

{
  if ((ADS_MainCharacter *)param_1->Obj != (ADS_MainCharacter *)0x0) {
    ADS_MainCharacter::ADS_MainCharacter((ADS_MainCharacter *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_LockOnTargetAbilityData> @ 14b4e69f0

void __cdecl InternalConstructor<UDS_LockOnTargetAbilityData>(FObjectInitializer *param_1)

{
  if ((UDS_LockOnTargetAbilityData *)param_1->Obj != (UDS_LockOnTargetAbilityData *)0x0) {
    UDS_LockOnTargetAbilityData::UDS_LockOnTargetAbilityData
              ((UDS_LockOnTargetAbilityData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_LogManager> @ 14b4e6a10

void __cdecl InternalConstructor<UDS_LogManager>(FObjectInitializer *param_1)

{
  UDS_ManagerBase *this;
  
  this = (UDS_ManagerBase *)param_1->Obj;
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UDS_LogManager__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
  }
  return;
}

// InternalConstructor<UDS_LoginEvent> @ 14b4e6a50

void __cdecl InternalConstructor<UDS_LoginEvent>(FObjectInitializer *param_1)

{
  UDS_EventBase *this;
  
  this = (UDS_EventBase *)param_1->Obj;
  if (this != (UDS_EventBase *)0x0) {
    UDS_EventBase::UDS_EventBase(this,param_1);
    *(undefined ***)this = &___7UDS_LoginEvent__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined8 *)&this[2].field_0x10 = 2;
    *(undefined8 *)&this[3].field_0x8 = 2;
    *(undefined8 *)(this + 4) = 2;
    *(undefined8 *)&this[4].field_0x20 = 2;
    *(undefined8 *)&this[5].field_0x18 = 2;
    *(undefined8 *)&this[6].field_0x10 = 2;
    *(undefined8 *)&this[7].field_0x8 = 2;
  }
  return;
}

// InternalConstructor<UDS_LoginModuleClient> @ 14b4e6b70

void __cdecl InternalConstructor<UDS_LoginModuleClient>(FObjectInitializer *param_1)

{
  if ((UDS_LoginModuleClient *)param_1->Obj != (UDS_LoginModuleClient *)0x0) {
    UDS_LoginModuleClient::UDS_LoginModuleClient((UDS_LoginModuleClient *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_LoginState> @ 14b4e6b90

void __cdecl InternalConstructor<UDS_LoginState>(FObjectInitializer *param_1)

{
  UDS_GameStateBase *this;
  
  this = (UDS_GameStateBase *)param_1->Obj;
  if (this != (UDS_GameStateBase *)0x0) {
    UDS_GameStateBase::UDS_GameStateBase(this,param_1);
    *(undefined4 *)&this[1].field_0xc = 0x3c23d70a;
    *(undefined ***)this = &___7UDS_LoginState__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0x40400000;
  }
  return;
}

// InternalConstructor<UDS_LongPressProcessor> @ 14b4e6bf0

void __cdecl InternalConstructor<UDS_LongPressProcessor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDS_LongPressProcessor__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    this[3].field_0x1c = 0;
    *(undefined8 *)(this + 4) = 0;
  }
  return;
}

// InternalConstructor<UDS_LookAtControlRig> @ 14b4e6c60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl InternalConstructor<UDS_LookAtControlRig>(FObjectInitializer *param_1)

{
  UControlRig *this;
  undefined8 uVar1;
  
  this = (UControlRig *)param_1->Obj;
  if (this != (UControlRig *)0x0) {
    UControlRig::UControlRig(this,param_1);
    this->_padding_ = (longlong)&UDS_LookAtControlRig::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UDS_LookAtControlRig::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UDS_LookAtControlRig::_vftable__for__INodeMappingProviderInterface__;
    this->_padding_ = (longlong)&UDS_LookAtControlRig::_vftable__for__IRigHierarchyProvider__;
    this->_padding_ = (longlong)&UDS_LookAtControlRig::_vftable__for__IMeshDeformerProducer__;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UDS_MailData> @ 14b4e6cf0

void __cdecl InternalConstructor<UDS_MailData>(FObjectInitializer *param_1)

{
  if ((UDS_MailData *)param_1->Obj != (UDS_MailData *)0x0) {
    UDS_MailData::UDS_MailData((UDS_MailData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_MailDataSet> @ 14b4e6d10

void __cdecl InternalConstructor<UDS_MailDataSet>(FObjectInitializer *param_1)

{
  UDS_DataSetBase *this;
  
  this = (UDS_DataSetBase *)param_1->Obj;
  if (this != (UDS_DataSetBase *)0x0) {
    UDS_DataSetBase::UDS_DataSetBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_MailDataSet__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].OnDirty = 0;
    *(undefined4 *)&this[1].OnDirty.field_0x4 = 0x80;
    *(undefined4 *)&this[1].OnDirty.field_0x8 = 0xffffffff;
    *(undefined4 *)&this[1].OnDirty.field_0xc = 0;
    *(undefined8 *)&this[1].DataMap = 0;
    *(undefined4 *)&this[1].DataMap.field_0x8 = 0;
    *(undefined8 *)&this[1].DataMap.field_0x10 = 0;
    *(undefined8 *)&this[1].DataMap.field_0x18 = 0;
    this[1].DataMap.field_0x20 = 1;
  }
  return;
}

// InternalConstructor<UDS_MailEvent> @ 14b4e6da0

void __cdecl InternalConstructor<UDS_MailEvent>(FObjectInitializer *param_1)

{
  UDS_EventBase *this;
  
  this = (UDS_EventBase *)param_1->Obj;
  if (this != (UDS_EventBase *)0x0) {
    UDS_EventBase::UDS_EventBase(this,param_1);
    *(undefined ***)this = &___7UDS_MailEvent__6B_;
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

// InternalConstructor<UDS_MailManager> @ 14b4e6e00

void __cdecl InternalConstructor<UDS_MailManager>(FObjectInitializer *param_1)

{
  UDS_ManagerBase *this;
  
  this = (UDS_ManagerBase *)param_1->Obj;
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_MailManager__6B_;
  }
  return;
}

// InternalConstructor<UDS_MainCameraComponent> @ 14b4e6e30

void __cdecl InternalConstructor<UDS_MainCameraComponent>(FObjectInitializer *param_1)

{
  if ((UDS_MainCameraComponent *)param_1->Obj != (UDS_MainCameraComponent *)0x0) {
    UDS_MainCameraComponent::UDS_MainCameraComponent
              ((UDS_MainCameraComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_MainCharacterCollisionComponent> @ 14b4e6e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UDS_MainCharacterCollisionComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UActorComponent *this;
  FObjectInitializer *pFVar2;
  
  this = (UActorComponent *)param_1->Obj;
  if (this == (UActorComponent *)0x0) {
    return;
  }
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent(this,pFVar2);
  this->_padding_ = (longlong)&UDS_MainCharacterCollisionComponent::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&UDS_MainCharacterCollisionComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ =
       (longlong)&UDS_MainCharacterCollisionComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = (longlong)COLLISION_PROFILE_PLAYER;
  return;
}

// InternalConstructor<UDS_MainCharacterStateComponent> @ 14b4e6e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UDS_MainCharacterStateComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UActorComponent *this;
  FObjectInitializer *pFVar2;
  
  this = (UActorComponent *)param_1->Obj;
  if (this == (UActorComponent *)0x0) {
    return;
  }
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent(this,pFVar2);
  this->_padding_ = (longlong)&UDS_MainCharacterStateComponent::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&UDS_MainCharacterStateComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ =
       (longlong)&UDS_MainCharacterStateComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  this[1]._padding_ = 0;
  return;
}

// InternalConstructor<UDS_MainCharacterTeleportComponent> @ 14b4e6e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UDS_MainCharacterTeleportComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UActorComponent *this;
  float fVar2;
  float fVar3;
  float fVar4;
  FObjectInitializer *pFVar5;
  
  this = (UActorComponent *)param_1->Obj;
  if (this == (UActorComponent *)0x0) {
    return;
  }
  pFVar5 = FObjectInitializer::Get();
  UActorComponent::UActorComponent(this,pFVar5);
  this->_padding_ = (longlong)&UDS_MainCharacterTeleportComponent::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&UDS_MainCharacterTeleportComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ =
       (longlong)&UDS_MainCharacterTeleportComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1].PrimaryComponentTick._padding_ = 0;
  this[1]._padding_ = 2;
  this[1].PrimaryComponentTick._padding_ = 2;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  this[1].PrimaryComponentTick._padding_ =
       (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  this[1].PrimaryComponentTick._padding_ = (longlong)(double)fVar2;
  this[1].PrimaryComponentTick.Target = (UActorComponent *)(double)fVar3;
  this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&this[1].ComponentTags.ArrayNum = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar2;
  *(double *)&this[1].AssetUserData.ArrayNum = (double)fVar3;
  *(double *)&this[1].field_0x88 = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&this[1].UCSSerializationIndex = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&this[1].field_0x98 = (double)fVar2;
  this[1].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)(double)fVar3;
  this[1].OwnerPrivate = (AActor *)(double)fVar4;
  pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  this[1].WorldPrivate = (UWorld *)0x0;
  return;
}

// InternalConstructor<UDS_MainPlayerAnim> @ 14b4e6eb0

void __cdecl InternalConstructor<UDS_MainPlayerAnim>(FObjectInitializer *param_1)

{
  if ((UDS_MainPlayerAnim *)param_1->Obj != (UDS_MainPlayerAnim *)0x0) {
    UDS_MainPlayerAnim::UDS_MainPlayerAnim((UDS_MainPlayerAnim *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_MainPlayerCombatAnim> @ 14b4e6ed0

void __cdecl InternalConstructor<UDS_MainPlayerCombatAnim>(FObjectInitializer *param_1)

{
  if ((UDS_MainPlayerCombatAnim *)param_1->Obj != (UDS_MainPlayerCombatAnim *)0x0) {
    UDS_MainPlayerCombatAnim::UDS_MainPlayerCombatAnim
              ((UDS_MainPlayerCombatAnim *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDS_MainPlayerMovementComponent> @ 14b4e6ef0

void __cdecl InternalConstructor<UDS_MainPlayerMovementComponent>(FObjectInitializer *param_1)

{
  if ((UDS_MainPlayerMovementComponent *)param_1->Obj != (UDS_MainPlayerMovementComponent *)0x0) {
    UDS_MainPlayerMovementComponent::UDS_MainPlayerMovementComponent
              ((UDS_MainPlayerMovementComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<ADS_MainCharacter> @ 14b4e6f10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ADS_MainCharacter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ACharacter *this;
  ACharacter *pAVar3;
  
  pAVar3 = (ACharacter *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADS_MainCharacter::GetPrivateStaticClass();
  this = (ACharacter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ACharacter *)0x0) {
    ACharacter::ACharacter(this,param_1);
    FDS_EntityBase::FDS_EntityBase((FDS_EntityBase *)&this->field_0x678);
    *(undefined4 *)&this[1].ReplicatedBasedMovement.Rotation.Roll = 0x41200000;
    *(undefined ***)this = &ADS_MainCharacter::_vftable__for__AActor__;
    *(undefined ***)&this->field_0x2c0 = &ADS_MainCharacter::_vftable__for__INavAgentInterface__;
    *(undefined ***)&this->field_0x678 = &___7ADS_MainCharacter__6B_;
    this[1].BasedMovement.BaseID = 0;
    this[1].BasedMovement.field_0x2 = 0;
    this[1].BasedMovement._padding_ = '\0';
    this[1].BasedMovement.BoneName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].BasedMovement.BoneName.Number = 0;
    this[1].BasedMovement.MovementBase.field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
    *(undefined8 *)&this[1].BasedMovement.Location = 0;
    *(undefined8 *)&this[1].BasedMovement.Location.field_0x8 = 0;
    *(undefined8 *)&this[1].BasedMovement.Location.field_0x10 = 0;
    this[1].BasedMovement.Rotation.Pitch = 0.0;
    this[1].BasedMovement.Rotation.Yaw = 0.0;
    this[1].BasedMovement.Rotation.Roll = 0.0;
    this[1].ReplicatedBasedMovement.BaseID = 0;
    this[1].ReplicatedBasedMovement.field_0x2 = 0;
    this[1].ReplicatedBasedMovement._padding_ = '\0';
    this[1].ReplicatedBasedMovement.BoneName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].ReplicatedBasedMovement.BoneName.Number = 0;
    this[1].ReplicatedBasedMovement.MovementBase.field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
    *(undefined8 *)&this[1].ReplicatedBasedMovement.Location = 0;
    *(undefined8 *)&this[1].ReplicatedBasedMovement.Location.field_0x8 = 0;
    *(undefined8 *)&this[1].ReplicatedBasedMovement.Location.field_0x10 = 0;
    this[1].ReplicatedBasedMovement.Rotation.Pitch = 0.0;
    this[1].ReplicatedBasedMovement.Rotation.Yaw = 0.0;
    this[1].ReplicatedServerLastTransformUpdateTimeStamp = 0.0;
    this[1].ReplayLastTransformUpdateTimeStamp = 0.0;
    *(undefined1 *)&this[1].BaseRotationOffset.X = 0;
    this[1].BaseRotationOffset.Y = 0.0;
    this[1].BaseRotationOffset.Z = 0.0;
    this[1].BaseRotationOffset.W = 0.0;
    this[1].BaseTranslationOffset.field0_0x0._s_0.X = 0.0;
    this[1].BaseTranslationOffset.field0_0x0._s_0.Y = 0.0;
    this[1].BaseTranslationOffset.field0_0x0._s_0.Z = 9.88131291682493e-324;
    pAVar3 = this;
  }
  return (UObject *)pAVar3;
}

// InternalVTableHelperCtorCaller<UDS_LockOnTargetAbilityData> @ 14b4e70a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDS_LockOnTargetAbilityData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_AbilityData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_LockOnTargetAbilityData::GetPrivateStaticClass();
  this = (UDS_AbilityData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_AbilityData *)0x0) {
    UDS_AbilityData::UDS_AbilityData(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDS_LockOnTargetAbilityData__6B_;
    FName::FName((FName *)&this[1].field_0x8,"FocusMode01");
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_LogManager> @ 14b4e7160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_LogManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ManagerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_LogManager::GetPrivateStaticClass();
  this = (UDS_ManagerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UDS_LogManager__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_LoginEvent> @ 14b4e7220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_LoginEvent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_LoginEvent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UDS_EventBase::UDS_EventBase((UDS_EventBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDS_LoginEvent__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 2;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 2;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 2;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 2;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 2;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 2;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_LoginModuleClient> @ 14b4e73b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_LoginModuleClient>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_LoginModuleClient::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDS_LoginModuleClient__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_LoginState> @ 14b4e7460

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_LoginState>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_LoginState::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UDS_GameStateBase::UDS_GameStateBase((UDS_GameStateBase *)pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UDS_LoginState__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x3c23d70a;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x40400000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_LongPressProcessor> @ 14b4e7530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_LongPressProcessor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_LongPressProcessor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[3].field_0x1c = 0;
    *(undefined ***)pUVar1 = &___7UDS_LongPressProcessor__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_LookAtControlRig> @ 14b4e7620

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_LookAtControlRig>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UControlRig *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UDS_LookAtControlRig::GetPrivateStaticClass();
  this = (UControlRig *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UControlRig *)0x0) {
    UControlRig::UControlRig(this,param_1);
    this->_padding_ = (longlong)&UDS_LookAtControlRig::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UDS_LookAtControlRig::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UDS_LookAtControlRig::_vftable__for__INodeMappingProviderInterface__;
    this->_padding_ = (longlong)&UDS_LookAtControlRig::_vftable__for__IRigHierarchyProvider__;
    this->_padding_ = (longlong)&UDS_LookAtControlRig::_vftable__for__IMeshDeformerProducer__;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_MailData> @ 14b4e7730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_MailData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_DataBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_MailData::GetPrivateStaticClass();
  this = (UDS_DataBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_DataBase *)0x0) {
    UDS_DataBase::UDS_DataBase(this,param_1);
    *(undefined4 *)&this[1].field_0x54 = 0x385;
    this->_padding_ = (longlong)&___7UDS_MailData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].OnDirty = 0;
    *(undefined8 *)&this[1].OnDirty.field_0x8 = 0;
    *(undefined8 *)&this[1].OnDirty.field_0x10 = 0;
    this[1].UniqueKey = 0;
    this[1].MyDataSet.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined2 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 2) = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_MailDataSet> @ 14b4e7840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_MailDataSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_DataSetBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_MailDataSet::GetPrivateStaticClass();
  this = (UDS_DataSetBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_DataSetBase *)0x0) {
    UDS_DataSetBase::UDS_DataSetBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_MailDataSet__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].OnDirty = 0;
    *(undefined4 *)&this[1].OnDirty.field_0x4 = 0x80;
    *(undefined4 *)&this[1].OnDirty.field_0x8 = 0xffffffff;
    *(undefined4 *)&this[1].OnDirty.field_0xc = 0;
    *(undefined8 *)&this[1].DataMap = 0;
    *(undefined4 *)&this[1].DataMap.field_0x8 = 0;
    *(undefined8 *)&this[1].DataMap.field_0x10 = 0;
    *(undefined8 *)&this[1].DataMap.field_0x18 = 0;
    this[1].DataMap.field_0x20 = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_MailEvent> @ 14b4e7950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_MailEvent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_MailEvent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UDS_EventBase::UDS_EventBase((UDS_EventBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDS_MailEvent__6B_;
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

// InternalVTableHelperCtorCaller<UDS_MailManager> @ 14b4e7a30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_MailManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ManagerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_MailManager::GetPrivateStaticClass();
  this = (UDS_ManagerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ManagerBase *)0x0) {
    UDS_ManagerBase::UDS_ManagerBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_MailManager__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_MainCameraComponent> @ 14b4e7ae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_MainCameraComponent>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_CameraComponent *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UDS_MainCameraComponent::GetPrivateStaticClass();
  this = (UDS_CameraComponent *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_CameraComponent *)0x0) {
    UDS_CameraComponent::UDS_CameraComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UDS_MainCameraComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UDS_MainCameraComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UDS_MainCameraComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
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
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[1]._padding_ = (longlong)dVar2;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[1]._padding_ = (longlong)dVar2;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_MainCharacterCollisionComponent> @ 14b4e7af0

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

UObject * __cdecl
InternalVTableHelperCtorCaller<UDS_MainCharacterCollisionComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_MainCharacterCollisionComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UDS_MainCharacterCollisionComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UDS_MainCharacterCollisionComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UDS_MainCharacterCollisionComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_MainCharacterStateComponent> @ 14b4e7bc0

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

UObject * __cdecl
InternalVTableHelperCtorCaller<UDS_MainCharacterStateComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_MainCharacterStateComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UDS_MainCharacterStateComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UDS_MainCharacterStateComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UDS_MainCharacterStateComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_MainCharacterTeleportComponent> @ 14b4e7c90

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

UObject * __cdecl
InternalVTableHelperCtorCaller<UDS_MainCharacterTeleportComponent>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UActorComponent *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UDS_MainCharacterTeleportComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UDS_MainCharacterTeleportComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UDS_MainCharacterTeleportComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UDS_MainCharacterTeleportComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 2;
    this[1].PrimaryComponentTick._padding_ = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1].PrimaryComponentTick._padding_ =
         (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1].PrimaryComponentTick._padding_ = (longlong)(double)fVar1;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)(double)fVar2;
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[1].ComponentTags.ArrayNum =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar1;
    *(double *)&this[1].AssetUserData.ArrayNum = (double)fVar2;
    *(double *)&this[1].field_0x88 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[1].UCSSerializationIndex = (double)GlobalVectorConstants::Float1110.m128_f32[0]
    ;
    *(double *)&this[1].field_0x98 = (double)fVar1;
    this[1].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)(double)fVar2;
    this[1].OwnerPrivate = (AActor *)(double)fVar3;
    this[1].WorldPrivate = (UWorld *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_MainPlayerAnim> @ 14b4e7e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_MainPlayerAnim>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UDS_MainPlayerCombatAnim *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UDS_MainPlayerAnim::GetPrivateStaticClass();
  this = (UDS_MainPlayerCombatAnim *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_MainPlayerCombatAnim *)0x0) {
    UDS_MainPlayerCombatAnim::UDS_MainPlayerCombatAnim(this,param_1);
    local_res10 = 0;
    *(undefined ***)this = &___7UDS_MainPlayerAnim__6B_;
    *(undefined8 *)&this->field_0x868 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x868,(FObjectPtr)&local_res10);
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(this + 1) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x8 = uVar1;
    *(double *)&this[1].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x20 = uVar1;
    *(double *)&this[1].field_0x28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x34 = 0;
    *(undefined8 *)&this[1].field_0x3c = 0;
    *(undefined4 *)&this[1].field_0x44 = 0;
    this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x4c = 0;
    *(undefined8 *)&this[1].field_0x54 = 0;
    *(undefined2 *)&this[1].field_0x5c = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_MainPlayerCombatAnim> @ 14b4e7f40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_MainPlayerCombatAnim>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_MainPlayerCombatAnim *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_MainPlayerCombatAnim::GetPrivateStaticClass();
  pUVar3 = (UDS_MainPlayerCombatAnim *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UDS_MainPlayerCombatAnim *)0x0) {
    pUVar3 = UDS_MainPlayerCombatAnim::UDS_MainPlayerCombatAnim(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDS_MainPlayerMovementComponent> @ 14b4e7fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDS_MainPlayerMovementComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCharacterMovementComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_MainPlayerMovementComponent::GetPrivateStaticClass();
  this = (UCharacterMovementComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCharacterMovementComponent *)0x0) {
    UCharacterMovementComponent::UCharacterMovementComponent(this,param_1);
    *(undefined4 *)&this->field_0xff8 = 0x40a00000;
    *(undefined ***)this = &UDS_MainPlayerMovementComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UDS_MainPlayerMovementComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UDS_MainPlayerMovementComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x128 =
         &UDS_MainPlayerMovementComponent::_vftable__for__UPawnMovementComponent__;
    *(undefined ***)&this->field_0x190 =
         &UDS_MainPlayerMovementComponent::_vftable__for__IRVOAvoidanceInterface__;
    *(undefined ***)&this->field_0x198 =
         &UDS_MainPlayerMovementComponent::_vftable__for__INetworkPredictionInterface__;
    *(undefined4 *)&this->field_0xffc = 0x40a00000;
    *(undefined4 *)(this + 1) = 0x41200000;
    this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[1].field_0x38 = 1;
    *(undefined4 *)&this[1].field_0x58 = 0x41200000;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined8 *)&this[1].field_0x78 = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EDS_LogoutReason> @ 14b4e8150

UEnum * __cdecl StaticEnum<enum_EDS_LogoutReason>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_LogoutReason.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_LogoutReason.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_LogoutReason,(UObject *)pUVar1,
                       L"EDS_LogoutReason");
  }
  return Z_Registration_Info_UEnum_EDS_LogoutReason.OuterSingleton;
}

// StaticEnum<enum_EDS_MailBoxType> @ 14b4e8190

UEnum * __cdecl StaticEnum<enum_EDS_MailBoxType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_MailBoxType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_MailBoxType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_MailBoxType,(UObject *)pUVar1,
                       L"EDS_MailBoxType");
  }
  return Z_Registration_Info_UEnum_EDS_MailBoxType.OuterSingleton;
}

// StaticEnum<enum_EDS_MailCategoryType> @ 14b4e81d0

UEnum * __cdecl StaticEnum<enum_EDS_MailCategoryType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_MailCategoryType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_MailCategoryType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_MailCategoryType,(UObject *)pUVar1,
                       L"EDS_MailCategoryType");
  }
  return Z_Registration_Info_UEnum_EDS_MailCategoryType.OuterSingleton;
}

// StaticEnum<enum_EDS_MailType> @ 14b4e8210

UEnum * __cdecl StaticEnum<enum_EDS_MailType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDS_MailType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_MailType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_MailType,(UObject *)pUVar1,L"EDS_MailType");
  }
  return Z_Registration_Info_UEnum_EDS_MailType.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14b4e9ebc

/* [thunk]:public: virtual void * __ptr64 __cdecl ADS_MainCharacter::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ADS_MainCharacter::_vector_deleting_destructor__adjustor_704__(ADS_MainCharacter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADS_MainCharacter *)&this[-1].field_0x7f0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1656}' @ 14b4e9ed0

/* [thunk]:public: virtual void * __ptr64 __cdecl ADS_MainCharacter::`vector deleting
   destructor'`adjustor{1656}' (unsigned int) __ptr64 */

void * __thiscall
ADS_MainCharacter::_vector_deleting_destructor__adjustor_1656__
          (ADS_MainCharacter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADS_MainCharacter *)&this[-1].field_0x438,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14b4e9ee4

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_LookAtControlRig::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDS_LookAtControlRig::_vector_deleting_destructor__adjustor_40__
          (UDS_LookAtControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDS_LookAtControlRig *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{656}' @ 14b4e9ef4

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_LookAtControlRig::`vector deleting
   destructor'`adjustor{656}' (unsigned int) __ptr64 */

void * __thiscall
UDS_LookAtControlRig::_vector_deleting_destructor__adjustor_656__
          (UDS_LookAtControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDS_LookAtControlRig *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{664}' @ 14b4e9f08

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_LookAtControlRig::`vector deleting
   destructor'`adjustor{664}' (unsigned int) __ptr64 */

void * __thiscall
UDS_LookAtControlRig::_vector_deleting_destructor__adjustor_664__
          (UDS_LookAtControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDS_LookAtControlRig *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{672}' @ 14b4e9f1c

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_LookAtControlRig::`vector deleting
   destructor'`adjustor{672}' (unsigned int) __ptr64 */

void * __thiscall
UDS_LookAtControlRig::_vector_deleting_destructor__adjustor_672__
          (UDS_LookAtControlRig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDS_LookAtControlRig *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14b4e9f30

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_MainCameraComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDS_MainCameraComponent::_vector_deleting_destructor__adjustor_40__
          (UDS_MainCameraComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDS_MainCameraComponent *)&this[-1].NotifySkeletalMesh,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14b4e9f40

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_MainCharacterCollisionComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDS_MainCharacterCollisionComponent::_vector_deleting_destructor__adjustor_40__
          (UDS_MainCharacterCollisionComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDS_MainCharacterCollisionComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14b4e9f50

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_MainCharacterStateComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDS_MainCharacterStateComponent::_vector_deleting_destructor__adjustor_40__
          (UDS_MainCharacterStateComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDS_MainCharacterStateComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14b4e9f60

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_MainCharacterTeleportComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDS_MainCharacterTeleportComponent::_vector_deleting_destructor__adjustor_40__
          (UDS_MainCharacterTeleportComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDS_MainCharacterTeleportComponent *)
                      (this[-1].DestinationTransform.Scale3D.XY.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{296}' @ 14b4e9f70

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_MainPlayerMovementComponent::`vector deleting
   destructor'`adjustor{296}' (unsigned int) __ptr64 */

void * __thiscall
UDS_MainPlayerMovementComponent::_vector_deleting_destructor__adjustor_296__
          (UDS_MainPlayerMovementComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDS_MainPlayerMovementComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{400}' @ 14b4e9f84

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_MainPlayerMovementComponent::`vector deleting
   destructor'`adjustor{400}' (unsigned int) __ptr64 */

void * __thiscall
UDS_MainPlayerMovementComponent::_vector_deleting_destructor__adjustor_400__
          (UDS_MainPlayerMovementComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDS_MainPlayerMovementComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{408}' @ 14b4e9f98

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_MainPlayerMovementComponent::`vector deleting
   destructor'`adjustor{408}' (unsigned int) __ptr64 */

void * __thiscall
UDS_MainPlayerMovementComponent::_vector_deleting_destructor__adjustor_408__
          (UDS_MainPlayerMovementComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDS_MainPlayerMovementComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14b4e9fac

/* [thunk]:public: virtual void * __ptr64 __cdecl UDS_MainPlayerMovementComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDS_MainPlayerMovementComponent::_vector_deleting_destructor__adjustor_40__
          (UDS_MainPlayerMovementComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDS_MainPlayerMovementComponent *)&this[-1].CachedCapsuleComps.ArrayNum,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14b4e9fc0

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
ADS_MainCharacter::_scalar_deleting_destructor_(ADS_MainCharacter *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x678 = &___7ADS_MainCharacter__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeActorSequencerPlayDelegate).field_0x8,
             *(int *)&(this->ChangeActorSequencerPlayDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangeActorSequencerPlayDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeActorSequencerPlayDelegate);
  pFVar2 = (this->DefaultMaterialList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PartsComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDS_EntityBase::~FDS_EntityBase((FDS_EntityBase *)&this->field_0x678);
  ACharacter::~ACharacter((ACharacter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0xab0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea0b0

void * __thiscall
UDS_LockOnTargetAbilityData::_scalar_deleting_destructor_
          (UDS_LockOnTargetAbilityData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDS_LockOnTargetAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea110

void * __thiscall UDS_LogManager::_scalar_deleting_destructor_(UDS_LogManager *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDS_LogManager__6B_;
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea170

void * __thiscall UDS_LoginEvent::_scalar_deleting_destructor_(UDS_LoginEvent *this,uint param_1)

{
  ~UDS_LoginEvent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea1d0

void * __thiscall
UDS_LoginModuleClient::_scalar_deleting_destructor_(UDS_LoginModuleClient *this,uint param_1)

{
  ~UDS_LoginModuleClient(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea230

void * __thiscall UDS_LoginState::_scalar_deleting_destructor_(UDS_LoginState *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDS_LoginState__6B_;
  UDS_GameStateBase::~UDS_GameStateBase((UDS_GameStateBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea290

void * __thiscall
UDS_LongPressProcessor::_scalar_deleting_destructor_(UDS_LongPressProcessor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_LongPressProcessor__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLongPressRatioDelegate);
  pvVar1 = *(void **)&(this->OnLongPressRatioDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLongPressRatioDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLongPressPressingDelegate);
  pvVar1 = *(void **)&(this->OnLongPressPressingDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLongPressPressingDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLongPressEndDelegate);
  pvVar1 = *(void **)&(this->OnLongPressEndDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLongPressEndDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLongPressStartDelegate);
  pvVar1 = *(void **)&(this->OnLongPressStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLongPressStartDelegate);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea380

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
UDS_LookAtControlRig::_scalar_deleting_destructor_(UDS_LookAtControlRig *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  UControlRig::~UControlRig((UControlRig *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea420

void * __thiscall UDS_MailData::_scalar_deleting_destructor_(UDS_MailData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_MailData__6B_;
  pFVar1 = (this->MailContent).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailSenderName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailTitle).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea4c0

void * __thiscall UDS_MailDataSet::_scalar_deleting_destructor_(UDS_MailDataSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_MailDataSet__6B_;
  pFVar1 = (this->SelectedMailUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MailDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MailDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MailDataMap);
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea570

void * __thiscall UDS_MailEvent::_scalar_deleting_destructor_(UDS_MailEvent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_MailEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMailRewardNotification).Delegate.field_0x8,
             *(int *)&(this->OnMailRewardNotification).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnMailRewardNotification).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMailRewardNotification);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMailUnreadNotification).Delegate.field_0x8,
             *(int *)&(this->OnMailUnreadNotification).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnMailUnreadNotification).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMailUnreadNotification);
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

// `scalar_deleting_destructor' @ 14b4ea630

void * __thiscall UDS_MailManager::_scalar_deleting_destructor_(UDS_MailManager *this,uint param_1)

{
  *(undefined ***)this = &___7UDS_MailManager__6B_;
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea690

void * __thiscall
UDS_MainCameraComponent::_scalar_deleting_destructor_(UDS_MainCameraComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->NotifySocketName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CameraStateMap_SkillMode).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_CameraStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_CameraStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_CameraStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CameraStateMap_SkillMode);
  *(undefined4 *)&(this->CameraStateMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CameraStateMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CameraStateMap);
  pFVar1 = (this->CameraCommonData).CameraZoomCurvePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraCommonData).CameraBattleCurvePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCameraStateChangeDelegate).field_0x8,
             *(int *)&(this->OnCameraStateChangeDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnCameraStateChangeDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCameraStateChangeDelegate);
  UDS_CameraComponent::~UDS_CameraComponent((UDS_CameraComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xda0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea7d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UDS_MainCharacterCollisionComponent::_scalar_deleting_destructor_
          (UDS_MainCharacterCollisionComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UDS_MainCharacterStateComponent::_scalar_deleting_destructor_
          (UDS_MainCharacterStateComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea8d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UDS_MainCharacterTeleportComponent::_scalar_deleting_destructor_
          (UDS_MainCharacterTeleportComponent *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTeleportFinished).field_0x8,*(int *)&(this->OnTeleportFinished).field_0x10);
  pvVar1 = *(void **)&(this->OnTeleportFinished).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTeleportFinished);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTeleportStart).field_0x8,*(int *)&(this->OnTeleportStart).field_0x10);
  pvVar1 = *(void **)&(this->OnTeleportStart).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTeleportStart);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4ea9c0

void * __thiscall
UDS_MainPlayerAnim::_scalar_deleting_destructor_(UDS_MainPlayerAnim *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDS_MainPlayerAnim__6B_;
  UDS_MainPlayerCombatAnim::~UDS_MainPlayerCombatAnim((UDS_MainPlayerCombatAnim *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x8d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4eaa20

void * __thiscall
UDS_MainPlayerCombatAnim::_scalar_deleting_destructor_(UDS_MainPlayerCombatAnim *this,uint param_1)

{
  ~UDS_MainPlayerCombatAnim(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x870);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b4eaa80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UDS_MainPlayerMovementComponent::_scalar_deleting_destructor_
          (UDS_MainPlayerMovementComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__UPawnMovementComponent__;
  this->_padding_ = (longlong)&_vftable__for__IRVOAvoidanceInterface__;
  this->_padding_ = (longlong)&_vftable__for__INetworkPredictionInterface__;
  pFVar1 = (this->CachedTwoSideBlockHits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedBlockHits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedCapsuleComps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCharacterMovementComponent::~UCharacterMovementComponent((UCharacterMovementComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1090);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDS_LockOnTargetAbilityData @ 14b4eac40

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_LockOnTargetAbilityData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_LogManager @ 14b4eac50

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_LogManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_LoginEvent @ 14b4eac60

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_LoginEvent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_LoginModuleDefines @ 14b4eac70

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_LoginModuleDefines(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_LoginState @ 14b4eac80

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_LoginState(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_LogoutReason @ 14b4eac90

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_LogoutReason(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_LongPressProcessor @ 14b4eaca0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_LongPressProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_LookAtControlRig @ 14b4eacb0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_LookAtControlRig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MailBaseTableRow @ 14b4eacc0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MailBaseTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MailBoxType @ 14b4eacd0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MailBoxType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MailCategoryTableRow @ 14b4eace0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MailCategoryTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MailCategoryType @ 14b4eacf0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MailCategoryType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MailContentTableRow @ 14b4ead00

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MailContentTableRow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MailData @ 14b4ead10

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MailData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MailEvent @ 14b4ead20

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MailEvent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MailManager @ 14b4ead30

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MailManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MailType @ 14b4ead40

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MailType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MainCameraComponent @ 14b4ead50

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MainCameraComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MainCharacter @ 14b4ead60

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MainCharacter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MainCharacterCollisionComponent @ 14b4ead70

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MainCharacterCollisionComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MainCharacterStateComponent @ 14b4ead80

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MainCharacterStateComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MainCharacterTeleportComponent @ 14b4ead90

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MainCharacterTeleportComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MainPlayerAnim @ 14b4eada0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MainPlayerAnim(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MainPlayerCombatAnim @ 14b4eadb0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MainPlayerCombatAnim(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_MainPlayerMovementComponent @ 14b4eadc0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_MainPlayerMovementComponent(void)

{
  return;
}

// Z_Construct_UClass_UDS_LockOnTargetAbilityData_NoRegister @ 14b4ec280

UClass * __cdecl Z_Construct_UClass_UDS_LockOnTargetAbilityData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LockOnTargetAbilityData",
               &Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.InnerSingleton,
               UDS_LockOnTargetAbilityData::StaticRegisterNativesUDS_LockOnTargetAbilityData,0x68,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LockOnTargetAbilityData>,
               InternalVTableHelperCtorCaller<UDS_LockOnTargetAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.InnerSingleton;
}

// Z_Construct_UClass_UDS_LogManager_NoRegister @ 14b4ec340

UClass * __cdecl Z_Construct_UClass_UDS_LogManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LogManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LogManager",
               &Z_Registration_Info_UClass_UDS_LogManager.InnerSingleton,
               UDS_LogManager::StaticRegisterNativesUDS_LogManager,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LogManager>,
               InternalVTableHelperCtorCaller<UDS_LogManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LogManager.InnerSingleton;
}

// Z_Construct_UClass_UDS_LoginEvent_NoRegister @ 14b4ec400

UClass * __cdecl Z_Construct_UClass_UDS_LoginEvent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LoginEvent",
               &Z_Registration_Info_UClass_UDS_LoginEvent.InnerSingleton,
               UDS_LoginEvent::StaticRegisterNativesUDS_LoginEvent,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LoginEvent>,
               InternalVTableHelperCtorCaller<UDS_LoginEvent>,local_res8,UDS_EventBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginEvent.InnerSingleton;
}

// Z_Construct_UClass_UDS_LoginState_NoRegister @ 14b4ec4c0

UClass * __cdecl Z_Construct_UClass_UDS_LoginState_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LoginState",
               &Z_Registration_Info_UClass_UDS_LoginState.InnerSingleton,
               UDS_LoginState::StaticRegisterNativesUDS_LoginState,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LoginState>,
               InternalVTableHelperCtorCaller<UDS_LoginState>,local_res8,
               UDS_GameStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginState.InnerSingleton;
}

// Z_Construct_UClass_UDS_LongPressProcessor_NoRegister @ 14b4ec580

UClass * __cdecl Z_Construct_UClass_UDS_LongPressProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LongPressProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LongPressProcessor",
               &Z_Registration_Info_UClass_UDS_LongPressProcessor.InnerSingleton,
               UDS_LongPressProcessor::StaticRegisterNativesUDS_LongPressProcessor,0xa8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_LongPressProcessor>,
               InternalVTableHelperCtorCaller<UDS_LongPressProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LongPressProcessor.InnerSingleton;
}

// Z_Construct_UClass_UDS_LookAtControlRig_NoRegister @ 14b4ec630

UClass * __cdecl Z_Construct_UClass_UDS_LookAtControlRig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LookAtControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LookAtControlRig",
               &Z_Registration_Info_UClass_UDS_LookAtControlRig.InnerSingleton,
               UDS_LookAtControlRig::StaticRegisterNativesUDS_LookAtControlRig,0xc70,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LookAtControlRig>,
               InternalVTableHelperCtorCaller<UDS_LookAtControlRig>,local_res8,
               UControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LookAtControlRig.InnerSingleton;
}

// Z_Construct_UClass_UDS_MailDataSet_NoRegister @ 14b4ec6f0

UClass * __cdecl Z_Construct_UClass_UDS_MailDataSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailDataSet",
               &Z_Registration_Info_UClass_UDS_MailDataSet.InnerSingleton,
               UDS_MailDataSet::StaticRegisterNativesUDS_MailDataSet,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MailDataSet>,
               InternalVTableHelperCtorCaller<UDS_MailDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailDataSet.InnerSingleton;
}

// Z_Construct_UClass_UDS_MailEvent_NoRegister @ 14b4ec7b0

UClass * __cdecl Z_Construct_UClass_UDS_MailEvent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailEvent",
               &Z_Registration_Info_UClass_UDS_MailEvent.InnerSingleton,
               UDS_MailEvent::StaticRegisterNativesUDS_MailEvent,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MailEvent>,
               InternalVTableHelperCtorCaller<UDS_MailEvent>,local_res8,UDS_EventBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailEvent.InnerSingleton;
}

// Z_Construct_UClass_UDS_MailManager_NoRegister @ 14b4ec870

UClass * __cdecl Z_Construct_UClass_UDS_MailManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailManager",
               &Z_Registration_Info_UClass_UDS_MailManager.InnerSingleton,
               UDS_MailManager::StaticRegisterNativesUDS_MailManager,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MailManager>,
               InternalVTableHelperCtorCaller<UDS_MailManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailManager.InnerSingleton;
}

// Z_Construct_UClass_UDS_MainPlayerAnim_NoRegister @ 14b4ec930

UClass * __cdecl Z_Construct_UClass_UDS_MainPlayerAnim_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainPlayerAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainPlayerAnim",
               &Z_Registration_Info_UClass_UDS_MainPlayerAnim.InnerSingleton,
               UDS_MainPlayerAnim::StaticRegisterNativesUDS_MainPlayerAnim,0x8d0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainPlayerAnim>,
               InternalVTableHelperCtorCaller<UDS_MainPlayerAnim>,local_res8,
               UDS_MainPlayerCombatAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerAnim.InnerSingleton;
}

// Z_Construct_UClass_UDS_MainPlayerCombatAnim_NoRegister @ 14b4ec9f0

UClass * __cdecl Z_Construct_UClass_UDS_MainPlayerCombatAnim_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainPlayerCombatAnim",
               &Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.InnerSingleton,
               UDS_MainPlayerCombatAnim::StaticRegisterNativesUDS_MainPlayerCombatAnim,0x870,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainPlayerCombatAnim>,
               InternalVTableHelperCtorCaller<UDS_MainPlayerCombatAnim>,local_res8,
               UDS_BattleAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.InnerSingleton;
}

// Z_Construct_UClass_UDS_MainPlayerMovementComponent_NoRegister @ 14b4ecab0

UClass * __cdecl Z_Construct_UClass_UDS_MainPlayerMovementComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UCharacterMovementComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainPlayerMovementComponent",
               &Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.InnerSingleton,
               UDS_MainPlayerMovementComponent::StaticRegisterNativesUDS_MainPlayerMovementComponent
               ,0x1090,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainPlayerMovementComponent>,
               InternalVTableHelperCtorCaller<UDS_MainPlayerMovementComponent>,local_res8,
               UCharacterMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_LogoutReason @ 14b4ecb70

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_LogoutReason(void)

{
  if (Z_Registration_Info_UEnum_EDS_LogoutReason.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_LogoutReason.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_LogoutReason_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_LogoutReason.InnerSingleton;
}

// Z_Construct_UEnum_ProjectDS_EDS_MailBoxType @ 14b4ecbb0

UEnum * __cdecl Z_Construct_UEnum_ProjectDS_EDS_MailBoxType(void)

{
  if (Z_Registration_Info_UEnum_EDS_MailBoxType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDS_MailBoxType.InnerSingleton,
               &Z_Construct_UEnum_ProjectDS_EDS_MailBoxType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDS_MailBoxType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDS_MailBaseTableRow @ 14b4ecbf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_MailBaseTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_MailBaseTableRow.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_MailBaseTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_MailBaseTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_MailBaseTableRow.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDS_MailBaseTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_MailCategoryTableRow @ 14b4ecc70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_MailCategoryTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_MailCategoryTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_MailCategoryTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_MailCategoryTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_MailCategoryTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_MailCategoryTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDS_MailContentTableRow @ 14b4eccf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDS_MailContentTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDS_MailContentTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDS_MailContentTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FDS_MailContentTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDS_MailContentTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDS_MailContentTableRow.InnerSingleton;
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

// Empty'' @ 150434340

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  TDS_Singleton<FDS_HttpServer>::Empty._padding_ = (longlong)&___7FDS_HttpServer__6B_;
  FDS_Urls::~FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  return;
}

// PathSeparator'' @ 150434360

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

// RootNodeID'' @ 150434380

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

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 1504343a0

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

