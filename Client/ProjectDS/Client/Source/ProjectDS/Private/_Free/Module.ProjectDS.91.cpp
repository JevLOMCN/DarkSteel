// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 257

// AbilityTagMap'' @ 14126ed20

void __cdecl `dynamic_initializer_for_'FDS_GameplayTags::AbilityTagMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_GameplayTags::AbilityTagMap__);
  return;
}

// AbilityTagTypeMap'' @ 14126ed40

void __cdecl `dynamic_initializer_for_'FDS_GameplayTags::AbilityTagTypeMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_GameplayTags::AbilityTagTypeMap__);
  return;
}

// Bit'' @ 14126ed60

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::Bit__(void)

{
  FWidgetStateBitfield::FWidgetStateBitfield(&UWidgetLockedStateRegistration::Bit);
  return;
}

// CameraLocation'' @ 14126ed80

void __cdecl `dynamic_initializer_for_'ADS_CameraManager::CameraLocation__(void)

{
  ADS_CameraManager::CameraLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  ADS_CameraManager::CameraLocation.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  ADS_CameraManager::CameraLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// CameraRotation'' @ 14126edb0

void __cdecl `dynamic_initializer_for_'ADS_CameraManager::CameraRotation__(void)

{
  ADS_CameraManager::CameraRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  ADS_CameraManager::CameraRotation.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  ADS_CameraManager::CameraRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// ChangeInputDelegate'' @ 14126ede0

void __cdecl `dynamic_initializer_for_'ADS_PlayerController::ChangeInputDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'ADS_PlayerController::ChangeInputDelegate__);
  return;
}

// ChatCoolDownTypeMap'' @ 14126ee00

void __cdecl `dynamic_initializer_for_'FDS_ChatService::ChatCoolDownTypeMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_ChatService::ChatCoolDownTypeMap__);
  return;
}

// CollectStatusTypes'' @ 14126ee20

void __cdecl `dynamic_initializer_for_'FDS_PartyMemberStat::CollectStatusTypes__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_PartyMemberStat::CollectStatusTypes__);
  return;
}

// DefaultMemberInfo'' @ 14126ee40

void __cdecl `dynamic_initializer_for_'FDS_RaidPartyInfo::DefaultMemberInfo__(void)

{
  FDS_RaidPartyMemberSyncData::FDS_RaidPartyMemberSyncData
            (&FDS_RaidPartyInfo::DefaultMemberInfo.RaidPartyMemberSyncData);
  atexit(`dynamic_atexit_destructor_for_'FDS_RaidPartyInfo::DefaultMemberInfo__);
  return;
}

// Empty'' @ 14126ee70

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__);
  return;
}

// Empty'' @ 14126eea0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  FDS_Urls::FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__);
  return;
}

// Empty'' @ 14126eed0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_PartyRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_PartyRepo>::Empty__);
  return;
}

// Empty'' @ 14126eef0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_PlayerRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_PlayerRepo>::Empty__);
  return;
}

// Empty'' @ 14126ef10

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__);
  return;
}

// Empty'' @ 14126ef30

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_UIData>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_UIData>::Empty__);
  return;
}

// OnLoadWindowCallbackManualDelegate'' @ 14126ef50

void __cdecl
`dynamic_initializer_for_'UDS_ContentsController::OnLoadWindowCallbackManualDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UDS_ContentsController::
         OnLoadWindowCallbackManualDelegate__);
  return;
}

// PartyCreateDelegate'' @ 14126ef70

void __cdecl `dynamic_initializer_for_'FDS_PartyService::PartyCreateDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_PartyService::PartyCreateDelegate__);
  return;
}

// PathSeparator'' @ 14126ef90

void __cdecl `dynamic_initializer_for_'FControlRigOverrideValue::PathSeparator__(void)

{
  ::FString::FString(&FControlRigOverrideValue::PathSeparator,L"->");
  atexit(`dynamic_atexit_destructor_for_'FControlRigOverrideValue::PathSeparator__);
  return;
}

// RootNodeID'' @ 14126efc0

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// StateName'' @ 14126eff0

void __cdecl `dynamic_initializer_for_'UWidgetDisabledStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetDisabledStateRegistration::StateName,"Disabled");
  return;
}

// StateName'' @ 14126f010

void __cdecl `dynamic_initializer_for_'UWidgetHoveredStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetHoveredStateRegistration::StateName,"Hovered");
  return;
}

// StateName'' @ 14126f030

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetLockedStateRegistration::StateName,"Locked");
  return;
}

// StateName'' @ 14126f050

void __cdecl `dynamic_initializer_for_'UWidgetPressedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetPressedStateRegistration::StateName,"Pressed");
  return;
}

// StateName'' @ 14126f070

void __cdecl `dynamic_initializer_for_'UWidgetSelectedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetSelectedStateRegistration::StateName,"Selected");
  return;
}

// StateTagMap'' @ 14126f090

void __cdecl `dynamic_initializer_for_'FDS_GameplayTags::StateTagMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_GameplayTags::StateTagMap__);
  return;
}

// StateTagTypeMap'' @ 14126f0b0

void __cdecl `dynamic_initializer_for_'FDS_GameplayTags::StateTagTypeMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDS_GameplayTags::StateTagTypeMap__);
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 14126f0d0

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'BoolArrayTypeName'' @ 14126f0f0

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

// `dynamic_initializer_for_'BoolTypeName'' @ 14126f140

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

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 14126f190

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 14126f1b0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 14126f1d0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 14126f1f0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 14126f210

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 14126f230

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 14126f250

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 14126f270

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 14126f290

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 14126f2b0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 14126f2d0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 14126f2f0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 14126f310

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 14126f330

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 14126f350

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 14126f370

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 14126f390

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 14126f3b0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 14126f3d0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 14126f3f0

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

// `dynamic_initializer_for_'DefaultSocketName'' @ 14126f470

void __cdecl _dynamic_initializer_for__DefaultSocketName__(void)

{
  FName::FName(&DefaultSocketName,"FocusMode01");
  return;
}

// `dynamic_initializer_for_'DoubleArrayTypeName'' @ 14126f490

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

// `dynamic_initializer_for_'DoubleTypeName'' @ 14126f4e0

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

// `dynamic_initializer_for_'ElementKey_Foot_L'' @ 14126f530

void __cdecl _dynamic_initializer_for__ElementKey_Foot_L__(void)

{
  FName::FName(&ElementKey_Foot_L,L"foot_l");
  return;
}

// `dynamic_initializer_for_'ElementKey_Foot_R'' @ 14126f550

void __cdecl _dynamic_initializer_for__ElementKey_Foot_R__(void)

{
  FName::FName(&ElementKey_Foot_R,L"foot_r");
  return;
}

// `dynamic_initializer_for_'ElementKey_Hand_L'' @ 14126f570

void __cdecl _dynamic_initializer_for__ElementKey_Hand_L__(void)

{
  FName::FName(&ElementKey_Hand_L,L"hand_l");
  return;
}

// `dynamic_initializer_for_'ElementKey_Hand_R'' @ 14126f590

void __cdecl _dynamic_initializer_for__ElementKey_Hand_R__(void)

{
  FName::FName(&ElementKey_Hand_R,L"hand_r");
  return;
}

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 14126f5b0

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

// `dynamic_initializer_for_'ErrorNamespace'' @ 14126f630

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'FDS_ChatService_'' @ 14126f660

void __cdecl _dynamic_initializer_for__FDS_ChatService___(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  undefined1 local_40 [8];
  FDelegateAllocation local_38;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_ChatService::ProcessError;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  local_40 = (undefined1  [8])0x0;
  local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_38.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_38;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_ChatService::ReceiveChatResponse;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  UDS_NetworkManager::RegistReceive
            (kChatRes,(TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
                       *)local_40,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_58);
  return;
}

// `dynamic_initializer_for_'FDS_PartyService_'' @ 14126f780

void __cdecl _dynamic_initializer_for__FDS_PartyService___(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 auStack_78 [8];
  FDelegateAllocation FStack_70;
  undefined1 auStack_60 [8];
  FDelegateAllocation FStack_58;
  FDestructionSentinel FStack_48;
  FDelegateAllocation *pFStack_30;
  
  auStack_78 = (undefined1  [8])0x0;
  FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_78,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  auStack_60 = (undefined1  [8])0x0;
  FStack_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_60,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyInfo;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyInfoRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)auStack_60,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)auStack_78);
  auStack_60 = (undefined1  [8])0x0;
  FStack_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_60,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  auStack_78 = (undefined1  [8])0x0;
  FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_78,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::RecievePartySlotChanged;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartySlotChangeRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)auStack_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)auStack_60);
  auStack_60 = (undefined1  [8])0x0;
  FStack_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_60,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  auStack_78 = (undefined1  [8])0x0;
  FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_78,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyInvited;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyInvitedRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)auStack_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)auStack_60);
  auStack_60 = (undefined1  [8])0x0;
  FStack_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_60,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  auStack_78 = (undefined1  [8])0x0;
  FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_78,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyLeaderChange;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyLeaderChangeRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)auStack_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)auStack_60);
  auStack_60 = (undefined1  [8])0x0;
  FStack_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_60,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  auStack_78 = (undefined1  [8])0x0;
  FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_78,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyMemberSync;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyMemberSyncRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)auStack_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)auStack_60);
  auStack_60 = (undefined1  [8])0x0;
  FStack_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_60,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  auStack_78 = (undefined1  [8])0x0;
  FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_78,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyDismiss;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyDismissRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)auStack_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)auStack_60);
  auStack_60 = (undefined1  [8])0x0;
  FStack_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_60,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  auStack_78 = (undefined1  [8])0x0;
  FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_78,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyKicked;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyKickedRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)auStack_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)auStack_60);
  auStack_60 = (undefined1  [8])0x0;
  FStack_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_60,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  auStack_78 = (undefined1  [8])0x0;
  FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_78,
             (FWriteAccessScope *)&FStack_48);
  pFStack_30 = &FStack_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&FStack_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyRejectInfo;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyRejectInfoRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)auStack_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)auStack_60);
  return;
}

// `dynamic_initializer_for_'FNameArrayTypeName'' @ 14126f790

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

// `dynamic_initializer_for_'FNameTypeName'' @ 14126f7e0

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

// `dynamic_initializer_for_'FStringArrayTypeName'' @ 14126f830

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

// `dynamic_initializer_for_'FStringTypeName'' @ 14126f880

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

// `dynamic_initializer_for_'FTextTypeName'' @ 14126f8d0

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

// `dynamic_initializer_for_'FloatArrayTypeName'' @ 14126f920

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

// `dynamic_initializer_for_'FloatTypeName'' @ 14126f970

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

// `dynamic_initializer_for_'HttpVersion'' @ 14126f9c0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'Int32ArrayTypeName'' @ 14126f9e0

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

// `dynamic_initializer_for_'Int32TypeName'' @ 14126fa30

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

// `dynamic_initializer_for_'Int64TypeName'' @ 14126fa80

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

// `dynamic_initializer_for_'IntTypeName'' @ 14126fad0

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

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 14126fb20

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 14126fb40

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 14126fb60

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 14126fb80

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 14126fba0

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 14126fbc0

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 14126fbe0

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 14126fc00

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 14126fc20

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 14126fc40

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 14126fc60

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 14126fc80

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 14126fca0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 14126fcc0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 14126fce0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 14126fd00

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

// `dynamic_initializer_for_'TargetSocketNames'' @ 14126fd90

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

// `dynamic_initializer_for_'UInt32ArrayTypeName'' @ 14126fe90

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

// `dynamic_initializer_for_'UInt32TypeName'' @ 14126fee0

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

// `dynamic_initializer_for_'UInt64TypeName'' @ 14126ff30

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

// `dynamic_initializer_for_'UInt8ArrayTypeName'' @ 14126ff80

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

// `dynamic_initializer_for_'UInt8TypeName'' @ 14126ffd0

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

// `dynamic_initializer_for_'UnixSocketPath'' @ 141270020

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `scalar_deleting_destructor' @ 14b8a58d0

void * __thiscall FDS_UIData::_scalar_deleting_destructor_(FDS_UIData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDS_UIData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8a59e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8a5a30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8a5c60

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// operator<<<19> @ 14b8a6030

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<19>(LogMessage *this,char (*param_1) [19])

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = strlen(*param_1);
  local_18._Mydata = *param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// CastChecked<UDS_InputComponent,UInputComponent> @ 14b8ab430

UDS_InputComponent * __cdecl
CastChecked<UDS_InputComponent,UInputComponent>(UInputComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UInputComponent *)0x0) {
    pFVar3 = GetTypeName<UDS_InputComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UDS_InputComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UDS_InputComponent *)param_1;
  }
  pFVar3 = GetTypeName<UDS_InputComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UInputComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FChainGunInstance,FChainGunInstance,int> @ 14b8ab510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
ConstructItems<FChainGunInstance,FChainGunInstance,int>
          (void *param_1,FChainGunInstance *param_2,int param_3)

{
  undefined8 *puVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  int *piVar5;
  AActor **ppAVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0xc);
    lVar7 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    ppAVar6 = &param_2->TargetActor;
    do {
      *(undefined8 *)(lVar7 + (longlong)ppAVar6) = 0;
      pFVar2 = (ForAnyElementType *)(lVar7 + (longlong)ppAVar6);
      iVar3 = *(int *)(ppAVar6 + -1);
      _Src = (((FChainGunInstance *)(ppAVar6 + -2))->ChainPoints).AllocatorInstance.Data;
      piVar5[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf0,0x10,iVar3,0,pFVar2,iVar3,piVar5);
        memcpy(pFVar2->Data,_Src,(longlong)iVar3 * 0xf0);
      }
      *(AActor **)(piVar5 + 1) = *ppAVar6;
      *(longlong *)(piVar5 + 3) = ((FComponentReference *)(ppAVar6 + 1))->_padding_;
      FString::FString((FString *)(piVar5 + 5),(FString *)(ppAVar6 + 2));
      *(AActor **)(piVar5 + 9) = ppAVar6[4];
      *(FWeakObjectPtr *)(piVar5 + 0xb) = *(FWeakObjectPtr *)(ppAVar6 + 5);
      *(UInstancedStaticMeshComponent **)(piVar5 + 0xd) =
           (UInstancedStaticMeshComponent *)ppAVar6[6];
      piVar5[0xf] = *(int *)(ppAVar6 + 7);
      uVar4 = ppAVar6[9];
      *(double *)(piVar5 + 0x11) = (((TVector<double> *)(ppAVar6 + 8))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar5 + 0x13) = uVar4;
      puVar1 = ppAVar6 + 10;
      ppAVar6 = ppAVar6 + 0xd;
      *(undefined8 *)(piVar5 + 0x15) = *puVar1;
      piVar5 = piVar5 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FDS_ClientMessage_Twoway,1>,TSharedPtr<FDS_ClientMessage_Twoway,1>,int> @ 14b8ab640

void __cdecl
ConstructItems<TSharedPtr<FDS_ClientMessage_Twoway,1>,TSharedPtr<FDS_ClientMessage_Twoway,1>,int>
          (void *param_1,TSharedPtr<FDS_ClientMessage_Twoway,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FDS_ClientMessage_Twoway **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateWidget<UDS_CCSAI_LoginWidget,UWorld_*> @ 14b8ab750

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

UDS_CCSAI_LoginWidget * __cdecl
CreateWidget<UDS_CCSAI_LoginWidget,UWorld_*>
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
  UDS_CCSAI_LoginWidget *pUVar12;
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
LAB_14b8ab8a8:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14b8ab8a8;
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
LAB_14b8ab961:
    pUVar13 = (UObjectBaseUtility *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar11 == (UClass *)0x0) goto LAB_14b8ab961;
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14b8ab961;
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
    pUVar12 = (UDS_CCSAI_LoginWidget *)
              UUserWidget::CreateWidgetInstance
                        (param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3);
    if (pUVar12 != (UDS_CCSAI_LoginWidget *)0x0) {
      pUVar11 = Z_Construct_UClass_UDS_CCSAI_LoginWidget_NoRegister();
      iVar2 = (int)pUVar11->_padding_;
      if ((iVar2 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar11->_padding_)) goto LAB_14b8ab9d3;
    }
  }
  pUVar12 = (UDS_CCSAI_LoginWidget *)0x0;
LAB_14b8ab9d3:
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

// DS_JsonStringToProtoMessage<misc::PlayerList> @ 14b8abb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl DS_JsonStringToProtoMessage<misc::PlayerList>(PlayerList *param_1,FString *param_2)

{
  uchar *_Str;
  bool bVar1;
  basic_string_view<char,std::char_traits<char>_> *pbVar2;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar3;
  size_t sVar4;
  TypeResolver *pTVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  ulong64 uVar8;
  undefined1 auStackY_1f8 [32];
  TypeResolver local_1c0;
  basic_string_view<char,std::char_traits<char>_> local_1b8;
  StringOutputStream local_1a8;
  ArrayInputStream local_198;
  _Bxty local_178;
  ulong64 local_168;
  ulonglong local_160;
  _Bxty local_158;
  undefined8 local_148;
  ulonglong uStack_140;
  _Bxty local_138;
  ulonglong local_120;
  AlphaNum local_118;
  AlphaNum local_e8;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pbVar2 = google::protobuf::MessageLite::GetTypeName((MessageLite *)param_1,&local_1b8);
  local_e8.piece_._Mydata = pbVar2->_Mydata;
  local_e8.piece_._Mysize = pbVar2->_Mysize;
  local_118.piece_._Mysize = 0x14;
  local_118.piece_._Mydata = "type.googleapis.com/";
  absl::lts_20240722::StrCat
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_138,
             &local_118,&local_e8);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pTVar3 = StringCast<char8_t,128,wchar_t>(&local_b8,pwVar7);
  _Str = pTVar3->Ptr;
  local_158._Ptr = (char *)0x0;
  local_158._8_8_ = 0;
  local_148 = 0;
  uStack_140 = 0;
  sVar4 = strlen((char *)_Str);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_158,
             (char *)_Str,sVar4);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  uVar6 = &local_158;
  if (0xf < uStack_140) {
    uVar6 = local_158._Ptr;
  }
  google::protobuf::io::ArrayInputStream::ArrayInputStream
            (&local_198,(void *)uVar6,(int)local_148,-1);
  local_168 = 0;
  local_178._8_8_ = 0;
  local_178._Ptr = (char *)0x0;
  local_160 = 0xf;
  google::protobuf::io::StringOutputStream::StringOutputStream
            (&local_1a8,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_178);
  pTVar5 = DS_GetProtoMessageTypeResolver();
  google::protobuf::json::JsonToBinaryStream
            (&local_1c0,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)pTVar5,
             (ZeroCopyInputStream *)&local_138._Ptr,(ZeroCopyOutputStream *)&local_198,
             (ParseOptions *)&local_1a8);
  if (local_1c0 == (TypeResolver)0x1) {
    local_1b8._Mydata = (char *)&local_178;
    if (0xf < local_160) {
      local_1b8._Mydata = local_178._Ptr;
    }
    local_1b8._Mysize = local_168;
    bVar1 = google::protobuf::MessageLite::ParseFromString((MessageLite *)param_1,&local_1b8);
    if (((ulonglong)local_1c0 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_1c0);
    }
  }
  else {
    if (((ulonglong)local_1c0 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_1c0);
    }
    bVar1 = false;
  }
  local_1a8._padding_ = (longlong)google::protobuf::io::ZeroCopyOutputStream::vftable;
  if (0xf < local_160) {
    uVar8 = local_160 + 1;
    uVar6 = local_178._Ptr;
    if (0xfff < uVar8) {
      uVar6 = *(undefined8 *)(local_178._Ptr + -8);
      uVar8 = local_160 + 0x28;
      if ((char *)0x1f < local_178._Ptr + (-8 - uVar6)) goto LAB_14b8abd89;
    }
    operator_delete((void *)uVar6,uVar8);
  }
  local_168 = 0;
  local_160 = 0xf;
  local_178._Ptr = local_178._Ptr & 0xffffffffffffff00;
  if (0xf < uStack_140) {
    uVar8 = uStack_140 + 1;
    uVar6 = local_158._Ptr;
    if (0xfff < uVar8) {
      uVar6 = *(undefined8 *)(local_158._Ptr + -8);
      uVar8 = uStack_140 + 0x28;
      if ((char *)0x1f < local_158._Ptr + (-8 - uVar6)) goto LAB_14b8abd89;
    }
    operator_delete((void *)uVar6,uVar8);
  }
  local_158._Ptr = local_158._Ptr & 0xffffffffffffff00;
  local_148 = ___xmm_000000000000000f0000000000000000;
  uStack_140 = _UNK_15076add8;
  if (0xf < local_120) {
    uVar8 = local_120 + 1;
    uVar6 = local_138._Ptr;
    if (0xfff < uVar8) {
      uVar6 = *(undefined8 *)(local_138._Ptr + -8);
      uVar8 = local_120 + 0x28;
      if ((char *)0x1f < local_138._Ptr + (-8 - uVar6)) {
LAB_14b8abd89:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete((void *)uVar6,uVar8);
  }
  return bVar1;
}

// DefaultConstruct<client_msg::ChatRequest> @ 14b8abde0

void * __cdecl google::protobuf::Arena::DefaultConstruct<client_msg::ChatRequest>(Arena *param_1)

{
  ChatRequest *pCVar1;
  
  if (param_1 != (Arena *)0x0) {
    pCVar1 = Allocate(param_1,0x28);
    pCVar1 = client_msg::ChatRequest::ChatRequest(pCVar1,param_1);
    return pCVar1;
  }
  pCVar1 = ::operator_new(0x28);
  pCVar1 = client_msg::ChatRequest::ChatRequest(pCVar1,(Arena *)0x0);
  return pCVar1;
}

// DefaultConstruct<client_msg_twoway::PartyCreateRequest> @ 14b8abe30

void * __cdecl
google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyCreateRequest>(Arena *param_1)

{
  PartyCreateRequest *pPVar1;
  
  if (param_1 != (Arena *)0x0) {
    pPVar1 = Allocate(param_1,0x20);
    pPVar1 = client_msg_twoway::PartyCreateRequest::PartyCreateRequest(pPVar1,param_1);
    return pPVar1;
  }
  pPVar1 = ::operator_new(0x20);
  pPVar1 = client_msg_twoway::PartyCreateRequest::PartyCreateRequest(pPVar1,(Arena *)0x0);
  return pPVar1;
}

// DefaultConstruct<client_msg_twoway::PartyDismissRequest> @ 14b8abe80

void * __cdecl
google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyDismissRequest>(Arena *param_1)

{
  PartyDismissRequest *pPVar1;
  
  if (param_1 != (Arena *)0x0) {
    pPVar1 = Allocate(param_1,0x20);
    pPVar1 = client_msg_twoway::PartyDismissRequest::PartyDismissRequest(pPVar1,param_1);
    return pPVar1;
  }
  pPVar1 = ::operator_new(0x20);
  pPVar1 = client_msg_twoway::PartyDismissRequest::PartyDismissRequest(pPVar1,(Arena *)0x0);
  return pPVar1;
}

// DefaultConstruct<client_msg_twoway::PartyInviteRequest> @ 14b8abed0

void * __cdecl
google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyInviteRequest>(Arena *param_1)

{
  PartyInviteRequest *pPVar1;
  
  if (param_1 != (Arena *)0x0) {
    pPVar1 = Allocate(param_1,0x28);
    pPVar1 = client_msg_twoway::PartyInviteRequest::PartyInviteRequest(pPVar1,param_1);
    return pPVar1;
  }
  pPVar1 = ::operator_new(0x28);
  pPVar1 = client_msg_twoway::PartyInviteRequest::PartyInviteRequest(pPVar1,(Arena *)0x0);
  return pPVar1;
}

// DefaultConstruct<client_msg_twoway::PartyInvitedAcceptRequest> @ 14b8abf20

void * __cdecl
google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyInvitedAcceptRequest>
          (Arena *param_1)

{
  PartyInvitedAcceptRequest *pPVar1;
  
  if (param_1 != (Arena *)0x0) {
    pPVar1 = Allocate(param_1,0x20);
    pPVar1 = client_msg_twoway::PartyInvitedAcceptRequest::PartyInvitedAcceptRequest(pPVar1,param_1)
    ;
    return pPVar1;
  }
  pPVar1 = ::operator_new(0x20);
  pPVar1 = client_msg_twoway::PartyInvitedAcceptRequest::PartyInvitedAcceptRequest
                     (pPVar1,(Arena *)0x0);
  return pPVar1;
}

// DefaultConstruct<client_msg_twoway::PartyInvitedRejectRequest> @ 14b8abf70

void * __cdecl
google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyInvitedRejectRequest>
          (Arena *param_1)

{
  PartyInvitedRejectRequest *pPVar1;
  
  if (param_1 != (Arena *)0x0) {
    pPVar1 = Allocate(param_1,0x20);
    pPVar1 = client_msg_twoway::PartyInvitedRejectRequest::PartyInvitedRejectRequest(pPVar1,param_1)
    ;
    return pPVar1;
  }
  pPVar1 = ::operator_new(0x20);
  pPVar1 = client_msg_twoway::PartyInvitedRejectRequest::PartyInvitedRejectRequest
                     (pPVar1,(Arena *)0x0);
  return pPVar1;
}

// DefaultConstruct<client_msg_twoway::PartyJoinRequest> @ 14b8abfc0

void * __cdecl
google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyJoinRequest>(Arena *param_1)

{
  PartyJoinRequest *pPVar1;
  
  if (param_1 != (Arena *)0x0) {
    pPVar1 = Allocate(param_1,0x20);
    pPVar1 = client_msg_twoway::PartyJoinRequest::PartyJoinRequest(pPVar1,param_1);
    return pPVar1;
  }
  pPVar1 = ::operator_new(0x20);
  pPVar1 = client_msg_twoway::PartyJoinRequest::PartyJoinRequest(pPVar1,(Arena *)0x0);
  return pPVar1;
}

// DefaultConstruct<client_msg_twoway::PartyKickRequest> @ 14b8ac010

void * __cdecl
google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyKickRequest>(Arena *param_1)

{
  PartyKickRequest *pPVar1;
  
  if (param_1 != (Arena *)0x0) {
    pPVar1 = Allocate(param_1,0x20);
    pPVar1 = client_msg_twoway::PartyKickRequest::PartyKickRequest(pPVar1,param_1);
    return pPVar1;
  }
  pPVar1 = ::operator_new(0x20);
  pPVar1 = client_msg_twoway::PartyKickRequest::PartyKickRequest(pPVar1,(Arena *)0x0);
  return pPVar1;
}

// DefaultConstruct<client_msg_twoway::PartyLeaderChangeRequest> @ 14b8ac060

void * __cdecl
google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyLeaderChangeRequest>
          (Arena *param_1)

{
  PartyLeaderChangeRequest *pPVar1;
  
  if (param_1 != (Arena *)0x0) {
    pPVar1 = Allocate(param_1,0x20);
    pPVar1 = client_msg_twoway::PartyLeaderChangeRequest::PartyLeaderChangeRequest(pPVar1,param_1);
    return pPVar1;
  }
  pPVar1 = ::operator_new(0x20);
  pPVar1 = client_msg_twoway::PartyLeaderChangeRequest::PartyLeaderChangeRequest
                     (pPVar1,(Arena *)0x0);
  return pPVar1;
}

// DefaultConstruct<client_msg_twoway::PartyLeaveRequest> @ 14b8ac0b0

void * __cdecl
google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyLeaveRequest>(Arena *param_1)

{
  PartyLeaveRequest *pPVar1;
  
  if (param_1 != (Arena *)0x0) {
    pPVar1 = Allocate(param_1,0x20);
    pPVar1 = client_msg_twoway::PartyLeaveRequest::PartyLeaveRequest(pPVar1,param_1);
    return pPVar1;
  }
  pPVar1 = ::operator_new(0x20);
  pPVar1 = client_msg_twoway::PartyLeaveRequest::PartyLeaveRequest(pPVar1,(Arena *)0x0);
  return pPVar1;
}

// DestructItems<misc::Player,int> @ 14b8ac1e0

void __cdecl DestructItems<misc::Player,int>(Player *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    misc::Player::~Player(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// GetFullNameForCastLogError<UInputComponent> @ 14b8af2f0

FString * __cdecl
GetFullNameForCastLogError<UInputComponent>
          (FString *__return_storage_ptr__,UInputComponent *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UDS_InputComponent> @ 14b8af420

FString * __cdecl GetTypeName<UDS_InputComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UDS_InputComponent_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_ContentsFrame> @ 14b8af4b0

TSharedPtr<FDS_ViewModelContext_ContentsFrame,1> * __cdecl
MakeContext<FDS_ViewModelContext_ContentsFrame>
          (TSharedPtr<FDS_ViewModelContext_ContentsFrame,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_ContentsFrame *pFVar3;
  FDS_ViewModelContext_ContentsFrame *pFVar4;
  TSharedPtr<FDS_ViewModelContext_ContentsFrame,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_ContentsFrame *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_ContentsFrame *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_ContentsFrame *)0x0) {
    *(undefined8 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined4 *)&pFVar3->BackgroundButtonVisibility = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_ContentsFrame__6B_;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_ContentsFrame *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ContentsFrame__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_ContentsFrame *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_ContentsFrame,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_ContentsFrame::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_ContentsOpen> @ 14b8af5d0

TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> * __cdecl
MakeContext<FDS_ViewModelContext_ContentsOpen>
          (TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_ContentsOpen *pFVar3;
  FDS_ViewModelContext_ContentsOpen *pFVar4;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_ContentsOpen *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x30);
  pFVar4 = (FDS_ViewModelContext_ContentsOpen *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_ContentsOpen *)0x0) {
    *(undefined8 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined4 *)&pFVar3->field_0x2c = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_ContentsOpen__6B_;
    (pFVar3->ContentArguments).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_ContentsOpen *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ContentsOpen__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_ContentsOpen::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_RingCmd> @ 14b8af6f0

TSharedPtr<FDS_ViewModelContext_RingCmd,1> * __cdecl
MakeContext<FDS_ViewModelContext_RingCmd>
          (TSharedPtr<FDS_ViewModelContext_RingCmd,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_RingCmd *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FDS_ViewModelContext_RingCmd,1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x78);
  if (pFVar3 == (FDS_ViewModelContext_RingCmd *)0x0) {
    pFVar3 = (FDS_ViewModelContext_RingCmd *)0x0;
  }
  else {
    pFVar3->_padding_ = 0;
    *(undefined8 *)&(pFVar3->OnClickRingMenuDelegate).field_0x10 = 0;
    *(undefined8 *)&(pFVar3->OnDoubleClickRingMenuDelegate).field_0x10 = 0;
    *(undefined8 *)&(pFVar3->OnHoverRingMenuDelegate).field_0x10 = 0;
    *(undefined4 *)&pFVar3->field_0x72 = 0;
    *(undefined2 *)&pFVar3->field_0x76 = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_RingCmd__6B_;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined8 *)&pFVar3->OnClickRingMenuDelegate = 0;
    *(undefined8 *)&(pFVar3->OnClickRingMenuDelegate).field_0x8 = 0;
    *(undefined8 *)&pFVar3->OnDoubleClickRingMenuDelegate = 0;
    *(undefined8 *)&(pFVar3->OnDoubleClickRingMenuDelegate).field_0x8 = 0;
    *(undefined8 *)&pFVar3->OnHoverRingMenuDelegate = 0;
    *(undefined8 *)&(pFVar3->OnHoverRingMenuDelegate).field_0x8 = 0;
    pFVar3->RingCmdDeckNum = 0;
    pFVar3->RingCmdIndex = 0;
    pFVar3->bIsSelected = false;
    pFVar3->bIsEditMode = false;
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
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RingCmd__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext_RingCmd **)&pTVar4[1].SharedReferenceCount = pFVar3;
    pTVar5 = pTVar4;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_RingCmd *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDS_ViewModelContext_RingCmd,1> *)(*pcVar1)();
    return pTVar6;
  }
  pFVar3 = __return_storage_ptr__->Object;
  pUVar7 = FDS_ViewModelContext_RingCmd::StaticStruct();
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

// MakeShared<FDS_ClientMessage_Twoway,1> @ 14b8af840

TSharedRef<FDS_ClientMessage_Twoway,1> * __cdecl
MakeShared<FDS_ClientMessage_Twoway,1>
          (TSharedRef<FDS_ClientMessage_Twoway,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  
  pTVar3 = operator_new(0x70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FDS_ClientMessage_Twoway *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDS_ClientMessage_Twoway___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0xffffffff;
    client_msg_twoway::ClientMessagesTwoway::ClientMessagesTwoway
              ((ClientMessagesTwoway *)(pTVar3 + 5),(Arena *)0x0);
    pTVar3[5]._padding_ = (longlong)&___7ClientMessagesTwoway_client_msg_twoway__6B_;
    __return_storage_ptr__->Object = (FDS_ClientMessage_Twoway *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FDS_ClientMessage_Twoway *)(pTVar3 + 1) == (FDS_ClientMessage_Twoway *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FDS_ClientMessage_Twoway,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FDS_HttpRequest,1> @ 14b8af930

TSharedRef<FDS_HttpRequest,1> * __cdecl
MakeShared<FDS_HttpRequest,1>(TSharedRef<FDS_HttpRequest,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FDS_HttpRequest,1> *pTVar4;
  
  pTVar3 = operator_new(0x70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FDS_HttpRequest *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFDS_HttpRequest___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FDS_HttpRequest *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FDS_HttpRequest *)(pTVar3 + 1) == (FDS_HttpRequest *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FDS_HttpRequest,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UDS_CameraAction_Battle> @ 14b8afce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CameraAction_Battle * __cdecl NewObject<UDS_CameraAction_Battle>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CameraAction_Battle *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CameraAction_Battle_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CameraAction_Battle *)
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

// NewObject<UDS_CameraAction_CamTracking> @ 14b8afd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CameraAction_CamTracking * __cdecl NewObject<UDS_CameraAction_CamTracking>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CameraAction_CamTracking *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CameraAction_CamTracking_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CameraAction_CamTracking *)
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

// NewObject<UDS_CameraAction_Slope> @ 14b8afe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CameraAction_Slope * __cdecl NewObject<UDS_CameraAction_Slope>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CameraAction_Slope *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CameraAction_Slope_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CameraAction_Slope *)
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

// NewObject<UDS_CameraAction_SmoothRotation> @ 14b8afec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CameraAction_SmoothRotation * __cdecl
NewObject<UDS_CameraAction_SmoothRotation>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CameraAction_SmoothRotation *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CameraAction_SmoothRotation_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CameraAction_SmoothRotation *)
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

// NewObject<UDS_CameraInterp> @ 14b8aff60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CameraInterp * __cdecl NewObject<UDS_CameraInterp>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CameraInterp *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CameraInterp_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CameraInterp *)
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

// NewObject<UDS_ChatEvent> @ 14b8b0000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ChatEvent * __cdecl NewObject<UDS_ChatEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ChatEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ChatEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ChatEvent *)
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

// NewObject<UDS_DungeonEvent> @ 14b8b00a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_DungeonEvent * __cdecl NewObject<UDS_DungeonEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_DungeonEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_DungeonEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_DungeonEvent *)
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

// NewObject<UDS_LockOnTargetAbilityContext> @ 14b8b0140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LockOnTargetAbilityContext * __cdecl NewObject<UDS_LockOnTargetAbilityContext>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_LockOnTargetAbilityContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LockOnTargetAbilityContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_LockOnTargetAbilityContext *)
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

// NewObject<UDS_NiagaraComponent> @ 14b8b01e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_NiagaraComponent * __cdecl NewObject<UDS_NiagaraComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_NiagaraComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_NiagaraComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_NiagaraComponent *)
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

// NewObject<UDS_PartyEvent> @ 14b8b0280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PartyEvent * __cdecl NewObject<UDS_PartyEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_PartyEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PartyEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_PartyEvent *)
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

// NewObject<UDS_PlayerEvent> @ 14b8b0320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PlayerEvent * __cdecl NewObject<UDS_PlayerEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_PlayerEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PlayerEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_PlayerEvent *)
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

// NewObject<UDS_QuickSlotDeckDataSet> @ 14b8b03c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_QuickSlotDeckDataSet * __cdecl NewObject<UDS_QuickSlotDeckDataSet>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_QuickSlotDeckDataSet *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_QuickSlotDeckDataSet_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_QuickSlotDeckDataSet *)
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

// NewObject<UDS_RingCommandUIEvent> @ 14b8b0460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_RingCommandUIEvent * __cdecl NewObject<UDS_RingCommandUIEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_RingCommandUIEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_RingCommandUIEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_RingCommandUIEvent *)
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

// NewObject<UForceFeedbackEffect> @ 14b8b0500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UForceFeedbackEffect * __cdecl NewObject<UForceFeedbackEffect>(UObject *param_1)

{
  UClass *pUVar1;
  UForceFeedbackEffect *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UForceFeedbackEffect *)
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

// StringCast<char8_t,128,wchar_t> @ 14b8b0c80

TStringConversion<TStringConvert<wchar_t,char8_t>,128> * __cdecl
StringCast<char8_t,128,wchar_t>
          (TStringConversion<TStringConvert<wchar_t,char8_t>,128> *__return_storage_ptr__,
          wchar_t *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  uchar *puVar6;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar7;
  uint uVar8;
  
  __return_storage_ptr__->_padding_ = 0;
  if (param_1 == (wchar_t *)0x0) {
    __return_storage_ptr__->Ptr = (uchar *)0x0;
    __return_storage_ptr__->StringLength = 0;
    return __return_storage_ptr__;
  }
  sVar5 = wcslen(param_1);
  iVar4 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,(int)sVar5);
  __return_storage_ptr__->StringLength = iVar4;
  uVar1 = iVar4 + 1;
  uVar8 = uVar1;
  if (uVar1 < 0x81) {
    if (__return_storage_ptr__->_padding_ == 0) goto LAB_14b8b0d00;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&__return_storage_ptr__->_padding_,0,uVar8,1);
LAB_14b8b0d00:
  pTVar7 = __return_storage_ptr__;
  if ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)__return_storage_ptr__->_padding_ !=
      (TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)0x0) {
    pTVar7 = (TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)
             __return_storage_ptr__->_padding_;
  }
  __return_storage_ptr__->Ptr = (uchar *)pTVar7;
  puVar6 = UE::Core::Private::Convert((uchar *)pTVar7,uVar1,param_1,(int)sVar5 + 1);
  if ((puVar6 == (uchar *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)(*pcVar2)();
    return pTVar7;
  }
  return __return_storage_ptr__;
}

// set_text<char_const_*> @ 14b8b0e50

void __thiscall client_msg::ChatRequest::set_text<char_const_*>(ChatRequest *this,char **param_1)

{
  char *_Str;
  Arena *pAVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  _Str = *param_1;
  local_18._Mysize = strlen(_Str);
  local_18._Mydata = _Str;
  google::protobuf::internal::ArenaStringPtr::Set(&(this->_impl_).text_,&local_18,pAVar1);
  return;
}

// ~ArrayInputStream @ 14b8b3050

void __thiscall google::protobuf::io::ArrayInputStream::~ArrayInputStream(ArrayInputStream *this)

{
  return;
}

// ~StringOutputStream @ 14b8b3200

void __thiscall
google::protobuf::io::StringOutputStream::~StringOutputStream(StringOutputStream *this)

{
  this->_padding_ = (longlong)ZeroCopyOutputStream::vftable;
  return;
}

// ~ZeroCopyInputStream @ 14b8b3220

void __thiscall
google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream(ZeroCopyInputStream *this)

{
  return;
}

// ~ZeroCopyOutputStream @ 14b8b3230

void __thiscall
google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream(ZeroCopyOutputStream *this)

{
  *this = (ZeroCopyOutputStream)vftable;
  return;
}

// `vcall'{1224,{flat}}'_}' @ 14b8b3ac0

/* [thunk]: __cdecl UDS_ControlRig::`vcall'{1224,{flat}}' }' */

void __thiscall UDS_ControlRig::_vcall__1224__flat______(UDS_ControlRig *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b8b3ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4c8))();
  return;
}

// `scalar_deleting_destructor' @ 14b8b3ad0

void * __thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Delegate).Delegate.SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3b10

void * __thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Delegate).Delegate.SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3b50

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3b80

void * __thiscall
IBaseDelegateInstance<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3bb0

void * __thiscall
IBaseDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3be0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3c10

void * __thiscall
IBaseDelegateInstance<void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3c40

void * __thiscall
IBaseDelegateInstance<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3c70

void * __thiscall
IBaseDelegateInstance<void___cdecl(UDS_GameOptionData_*,enum_EDS_GameOptionKeySettingIndex),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3ca0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3cd0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3d00

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3d30

void * __thiscall
IBaseDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3d60

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3d90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3dc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3df0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3e20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3e50

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3e80

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3ee0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3f10

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3f40

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3f70

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3fa0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b3fd0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4000

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4080

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b40e0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4140

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4170

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b41a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b41d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4200

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy,enum_EDS_KeyActionType,enum_ETriggerEvent>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4230

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy,enum_ETriggerEvent>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4260

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4290

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(UDS_GameOptionData_*,enum_EDS_GameOptionKeySettingIndex),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b42c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b42f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4320

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4350

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,enum_EDS_InputMappingType,enum_EDS_KeyActionType,enum_EDS_InputDeviceType,enum_EDS_KeyType,enum_EDS_KeyType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4380

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b43b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(enum_EDS_ContentsTabFrameType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b43e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4410

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4440

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(enum_EInputDeviceConnectionState,FPlatformUserId,FInputDeviceId),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4470

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b44a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b44d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ETriggerEvent>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4500

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_PlayerController,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4530

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CameraAction_Battle,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CameraAction_Battle,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4560

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ContentsController,void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ContentsController,void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4590

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ContentsController,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_ContentsTabFrameType,enum_EDS_WindowWidget,int>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b45c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ContentsController,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ContentsController,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b45f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ControlRig,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ControlRig,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4620

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4650

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4680

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy,enum_EDS_KeyActionType,enum_ETriggerEvent>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b46b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy,enum_ETriggerEvent>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b46e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4710

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  pvVar1 = *(void **)&(this->Payload).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4770

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy,__int64>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b47a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy,__int64>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b47d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4800

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4830

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_GameOptionData_*,enum_EDS_GameOptionKeySettingIndex),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4860

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_ContentsTabFrameType,enum_EDS_WindowWidget,int>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4890

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,enum_EDS_PartyType,enum_EDS_PartyMenuType,__int64>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b48c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b48f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,enum_EDS_InputMappingType,enum_EDS_KeyActionType,enum_EDS_InputDeviceType,enum_EDS_KeyType,enum_EDS_KeyType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4920

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,__int64>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4950

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Payload).field_0x20);
  pvVar1 = *(void **)&(this->Payload).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Payload).field_0x20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Payload).field_0x8);
  pvVar1 = *(void **)&(this->Payload).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b49d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  pvVar1 = *(void **)&(this->Payload).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4a30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4a60

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_ETriggerEvent>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4a90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,__int64>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,__int64> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4ac0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4af0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_ClientMessage_Twoway,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDS_ClientMessage_Twoway,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4b30

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4b70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_HttpRequest,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FDS_HttpRequest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4bb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_ContentsFrame,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_ContentsFrame,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4bf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_ContentsOpen,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_ContentsOpen,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4c30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_InputKey,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_InputKey,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4c70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_PartyInformation,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_PartyInformation,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4cb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_PartyInvitation,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_PartyInvitation,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4cf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_PopupTitle,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_PopupTitle,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4d30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_RingCmd,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_RingCmd,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4d70

void * __thiscall
FDS_CommonAnalogCursor::_scalar_deleting_destructor_(FDS_CommonAnalogCursor *this,uint param_1)

{
  FCommonAnalogCursor::~FCommonAnalogCursor((FCommonAnalogCursor *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b8b4db0

void * __thiscall
google::protobuf::io::ZeroCopyOutputStream::_scalar_deleting_destructor_
          (ZeroCopyOutputStream *this,uint param_1)

{
  *this = (ZeroCopyOutputStream)vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AllowsAliasing @ 14b8b5350

bool __thiscall
google::protobuf::io::ZeroCopyOutputStream::AllowsAliasing(ZeroCopyOutputStream *this)

{
  return false;
}

// FDS_PartyService_STATIC @ 14b8c1bd0

void __cdecl FDS_PartyService_STATIC(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  undefined1 local_60 [8];
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyInfo;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyInfoRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_60,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_78);
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::RecievePartySlotChanged;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartySlotChangeRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_60);
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyInvited;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyInvitedRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_60);
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyLeaderChange;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyLeaderChangeRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_60);
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyMemberSync;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyMemberSyncRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_60);
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyDismiss;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyDismissRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_60);
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyKicked;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyKickedRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_60);
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FDS_PartyService::ProcessError;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = FDS_PartyService::ReceivePartyRejectInfo;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  UDS_NetworkManager::RegistReceive
            (kPartyRejectInfoRes,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_78,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_60);
  return;
}

// AbilityTagMap'' @ 150437750

void __cdecl `dynamic_atexit_destructor_for_'FDS_GameplayTags::AbilityTagMap__(void)

{
  FDS_GameplayTags::AbilityTagMap._72_4_ = 0;
  if (FDS_GameplayTags::AbilityTagMap._64_8_ != 0) {
    FMemory::Free((void *)FDS_GameplayTags::AbilityTagMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbilityTagType,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbilityTagType,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FDS_GameplayTags::AbilityTagMap);
  return;
}

// AbilityTagTypeMap'' @ 150437790

void __cdecl `dynamic_atexit_destructor_for_'FDS_GameplayTags::AbilityTagTypeMap__(void)

{
  FDS_GameplayTags::AbilityTagTypeMap._72_4_ = 0;
  if (FDS_GameplayTags::AbilityTagTypeMap._64_8_ != 0) {
    FMemory::Free((void *)FDS_GameplayTags::AbilityTagTypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,enum_EDS_AbilityTagType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,enum_EDS_AbilityTagType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FDS_GameplayTags::AbilityTagTypeMap);
  return;
}

// ChangeInputDelegate'' @ 1504377d0

void __cdecl `dynamic_atexit_destructor_for_'ADS_PlayerController::ChangeInputDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             ADS_PlayerController::ChangeInputDelegate._8_8_,
             ADS_PlayerController::ChangeInputDelegate._16_4_);
  if (ADS_PlayerController::ChangeInputDelegate._8_8_ != 0) {
    FMemory::Free((void *)ADS_PlayerController::ChangeInputDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&ADS_PlayerController::ChangeInputDelegate);
  return;
}

// ChatCoolDownTypeMap'' @ 150437810

void __cdecl `dynamic_atexit_destructor_for_'FDS_ChatService::ChatCoolDownTypeMap__(void)

{
  FDS_ChatService::ChatCoolDownTypeMap._72_4_ = 0;
  if (FDS_ChatService::ChatCoolDownTypeMap._64_8_ != 0) {
    FMemory::Free((void *)FDS_ChatService::ChatCoolDownTypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingType,enum_EDS_CoolDownType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingType,enum_EDS_CoolDownType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FDS_ChatService::ChatCoolDownTypeMap);
  return;
}

// CollectStatusTypes'' @ 150437850

void __cdecl `dynamic_atexit_destructor_for_'FDS_PartyMemberStat::CollectStatusTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FDS_PartyMemberStat::CollectStatusTypes.AllocatorInstance.Data;
  if (FDS_PartyMemberStat::CollectStatusTypes.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FDS_PartyMemberStat::CollectStatusTypes.AllocatorInstance.Data !=
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

// DefaultMemberInfo'' @ 150437870

void __cdecl `dynamic_atexit_destructor_for_'FDS_RaidPartyInfo::DefaultMemberInfo__(void)

{
  FDS_RaidPartyMemberSyncData::~FDS_RaidPartyMemberSyncData
            (&FDS_RaidPartyInfo::DefaultMemberInfo.RaidPartyMemberSyncData);
  if (FDS_RaidPartyInfo::DefaultMemberInfo.NickName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDS_RaidPartyInfo::DefaultMemberInfo.NickName.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// Empty'' @ 1504378a0

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::~FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  return;
}

// Empty'' @ 1504378c0

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  TDS_Singleton<FDS_HttpServer>::Empty._padding_ = (longlong)&___7FDS_HttpServer__6B_;
  FDS_Urls::~FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  return;
}

// Empty'' @ 1504378e0

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_PartyRepo>::Empty__(void)

{
  FDS_PartyInfo::~FDS_PartyInfo(&TDS_Singleton<FDS_PartyRepo>::Empty.PartyInfo);
  return;
}

// Empty'' @ 150437900

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

// Empty'' @ 150437960

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

// Empty'' @ 1504379c0

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_UIData>::Empty__(void)

{
  TDS_Singleton<FDS_UIData>::Empty._padding_ = (longlong)&___7FDS_UIData__6B_;
  return;
}

// OnLoadWindowCallbackManualDelegate'' @ 1504379e0

void __cdecl
`dynamic_atexit_destructor_for_'UDS_ContentsController::OnLoadWindowCallbackManualDelegate__(void)

{
  UDS_ContentsController::OnLoadWindowCallbackManualDelegate._72_4_ = 0;
  if (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._64_8_ != 0) {
    FMemory::Free((void *)UDS_ContentsController::OnLoadWindowCallbackManualDelegate._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&UDS_ContentsController::OnLoadWindowCallbackManualDelegate);
  return;
}

// PartyCreateDelegate'' @ 150437a20

void __cdecl `dynamic_atexit_destructor_for_'FDS_PartyService::PartyCreateDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FDS_PartyService::PartyCreateDelegate,(FWriteAccessScope *)&local_28);
  if ((FDS_PartyService::PartyCreateDelegate._16_4_ != 0) &&
     (FDS_PartyService::PartyCreateDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FDS_PartyService::PartyCreateDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FDS_PartyService::PartyCreateDelegate.field_0x8,0,0,0x10);
    FDS_PartyService::PartyCreateDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FDS_PartyService::PartyCreateDelegate._8_8_ != 0) {
    FMemory::Free((void *)FDS_PartyService::PartyCreateDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FDS_PartyService::PartyCreateDelegate);
  return;
}

// PathSeparator'' @ 150437ac0

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

// RootNodeID'' @ 150437ae0

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

// StateTagMap'' @ 150437b00

void __cdecl `dynamic_atexit_destructor_for_'FDS_GameplayTags::StateTagMap__(void)

{
  FDS_GameplayTags::StateTagMap._72_4_ = 0;
  if (FDS_GameplayTags::StateTagMap._64_8_ != 0) {
    FMemory::Free((void *)FDS_GameplayTags::StateTagMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StateTagType,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StateTagType,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FDS_GameplayTags::StateTagMap);
  return;
}

// StateTagTypeMap'' @ 150437b40

void __cdecl `dynamic_atexit_destructor_for_'FDS_GameplayTags::StateTagTypeMap__(void)

{
  FDS_GameplayTags::StateTagTypeMap._72_4_ = 0;
  if (FDS_GameplayTags::StateTagTypeMap._64_8_ != 0) {
    FMemory::Free((void *)FDS_GameplayTags::StateTagTypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,enum_EDS_StateTagType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,enum_EDS_StateTagType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FDS_GameplayTags::StateTagTypeMap);
  return;
}

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 150437b80

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

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 150437ba0

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

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 150437bc0

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

// `dynamic_atexit_destructor_for_'TargetSocketNames'' @ 150437be0

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

