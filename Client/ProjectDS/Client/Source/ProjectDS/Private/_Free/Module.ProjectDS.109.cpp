// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 232

// BakedResourcePrefix'' @ 141280d00

void __cdecl `dynamic_initializer_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ::FString::FString(&FBakingConfiguration::BakedResourcePrefix,L"BAKE_");
  atexit(`dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__);
  return;
}

// Bit'' @ 141280d30

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::Bit__(void)

{
  FWidgetStateBitfield::FWidgetStateBitfield(&UWidgetLockedStateRegistration::Bit);
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 141280d50

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE__
          (void)

{
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.XY =
       UE::Math::TTransform<double>::Identity.Rotation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.ZW =
       UE::Math::TTransform<double>::Identity.Rotation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.XY =
       UE::Math::TTransform<double>::Identity.Translation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.ZW =
       UE::Math::TTransform<double>::Identity.Translation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY =
       UE::Math::TTransform<double>::Identity.Scale3D.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 141280db0

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE__(void)

{
  FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE = FLinearColor::Black;
  return;
}

// DEFAULT_PARAMETER_VALUE_NAME'' @ 141280dd0

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
         DEFAULT_PARAMETER_VALUE_NAME__);
  return;
}

// Empty'' @ 141280df0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__);
  return;
}

// Empty'' @ 141280e20

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__);
  return;
}

// RenderRoomKey'' @ 141280e40

void __cdecl `dynamic_initializer_for_'ADS_CustomizeRenderRoom::RenderRoomKey__(void)

{
  ::FString::FString(&ADS_CustomizeRenderRoom::RenderRoomKey,L"ADS_CustomizeRenderRoom");
  atexit(`dynamic_atexit_destructor_for_'ADS_CustomizeRenderRoom::RenderRoomKey__);
  return;
}

// StateName'' @ 141280e70

void __cdecl `dynamic_initializer_for_'UWidgetCheckedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetCheckedStateRegistration::StateName,"CheckedState");
  return;
}

// StateName'' @ 141280e90

void __cdecl `dynamic_initializer_for_'UWidgetDisabledStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetDisabledStateRegistration::StateName,"Disabled");
  return;
}

// StateName'' @ 141280eb0

void __cdecl `dynamic_initializer_for_'UWidgetHoveredStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetHoveredStateRegistration::StateName,"Hovered");
  return;
}

// StateName'' @ 141280ed0

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetLockedStateRegistration::StateName,"Locked");
  return;
}

// StateName'' @ 141280ef0

void __cdecl `dynamic_initializer_for_'UWidgetPressedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetPressedStateRegistration::StateName,"Pressed");
  return;
}

// StateName'' @ 141280f10

void __cdecl `dynamic_initializer_for_'UWidgetSelectedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetSelectedStateRegistration::StateName,"Selected");
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 141280f30

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 141280f50

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 141280f70

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 141280f90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 141280fb0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 141280fd0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 141280ff0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 141281010

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 141281030

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 141281050

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 141281070

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 141281090

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 1412810b0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 1412810d0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 1412810f0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 141281110

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 141281130

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 141281150

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 141281170

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 141281190

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 1412811b0

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

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 141281230

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

// `dynamic_initializer_for_'EquipParamTypes'' @ 1412812b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ds_parts::_dynamic_initializer_for__EquipParamTypes__(void)

{
  undefined1 auStackY_58 [32];
  undefined4 local_18;
  undefined2 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  local_18 = 0x5040302;
  local_14 = 0x706;
  EquipParamTypes.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,6,0,&EquipParamTypes.AllocatorInstance,6,&EquipParamTypes.ArrayMax);
  memcpy(EquipParamTypes.AllocatorInstance.Data,&local_18,6);
  atexit(_dynamic_atexit_destructor_for__EquipParamTypes__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 141281350

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 141281370

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 141281390

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 1412813b0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 1412813d0

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 1412813f0

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 141281410

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 141281430

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 141281450

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 141281470

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 141281490

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 1412814b0

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 1412814d0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 1412814f0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 141281510

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 141281530

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 141281550

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 141281570

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

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 141281600

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

// `dynamic_initializer_for_'UnixSocketPath'' @ 141281690

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// TSharedPtr<void,1><void,`FWN_EndOfRefs::FWN_EndOfRefs'::__l5::<lambda_1>_> @ 14bc6f3e0

TSharedPtr<void,1> * __thiscall
TSharedPtr<void,1>::TSharedPtr<void,1><void,_FWN_EndOfRefs::FWN_EndOfRefs_::__l5::<lambda_1>_>
          (TSharedPtr<void,1> *this,void *param_1,<lambda_1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1;
  pTVar1 = ::operator_new(0x30);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    *(undefined8 *)(pTVar1 + 1) = 0;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar1[2]._padding_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar1 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)param_2);
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
    ;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    *(void **)&pTVar1[2].SharedReferenceCount = param_1;
    (this->SharedReferenceCount).ReferenceController = pTVar1;
  }
  return this;
}

// AddWeakLambda<ADS_StuffGather,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_> @ 14bc75280

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
AddWeakLambda<ADS_StuffGather,_ADS_StuffGather::InitStuffDebugUI_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *this,
          ADS_StuffGather *param_1,<lambda_1> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R9;
  <lambda_1> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  lVar6 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = *in_R9;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_60);
  if (((local_70.DelegateSize == 0) ||
      (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      lVar6 = *plVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar6;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar7 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar7 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar7 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_70.DelegateSize;
    local_70.DelegateSize = 0;
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// CastChecked<ADS_CameraActor_BossTarget,AActor> @ 14bc76dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_CameraActor_BossTarget * __cdecl
CastChecked<ADS_CameraActor_BossTarget,AActor>(AActor *param_1,Type param_2)

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
      return (ADS_CameraActor_BossTarget *)0x0;
    }
    pFVar3 = GetTypeName<ADS_CameraActor_BossTarget>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ADS_CameraActor_BossTarget_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ADS_CameraActor_BossTarget *)param_1;
  }
  pFVar3 = GetTypeName<ADS_CameraActor_BossTarget>(&local_28);
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

// CastChecked<ADS_CustomizeRenderRoom,AActor> @ 14bc76ea0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_CustomizeRenderRoom * __cdecl
CastChecked<ADS_CustomizeRenderRoom,AActor>(AActor *param_1,Type param_2)

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
      return (ADS_CustomizeRenderRoom *)0x0;
    }
    pFVar3 = GetTypeName<ADS_CustomizeRenderRoom>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ADS_CustomizeRenderRoom_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ADS_CustomizeRenderRoom *)param_1;
  }
  pFVar3 = GetTypeName<ADS_CustomizeRenderRoom>(&local_28);
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

// ConstructItems<UObject_*,TObjectPtr<UDS_UserObjectTreeItem>,int> @ 14bc76f80

void __cdecl
ConstructItems<UObject_*,TObjectPtr<UDS_UserObjectTreeItem>,int>
          (void *param_1,TObjectPtr<UDS_UserObjectTreeItem> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UDS_UserWidget>,TObjectPtr<UDS_UserWidget>,int> @ 14bc76fb0

void __cdecl
ConstructItems<TObjectPtr<UDS_UserWidget>,TObjectPtr<UDS_UserWidget>,int>
          (void *param_1,TObjectPtr<UDS_UserWidget> *param_2,int param_3)

{
  TObjectPtr<UDS_UserWidget> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UDS_UserWidget>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UDS_UserWidget>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UDS_UserWidget *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UDS_UserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateWidget<UDS_HUD_NpcViewTargetCamera,UWorld_*> @ 14bc7aae0

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

UDS_HUD_NpcViewTargetCamera * __cdecl
CreateWidget<UDS_HUD_NpcViewTargetCamera,UWorld_*>
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
  UDS_HUD_NpcViewTargetCamera *pUVar12;
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
LAB_14bc7ac38:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14bc7ac38;
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
LAB_14bc7acf1:
    pUVar13 = (UObjectBaseUtility *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar11 == (UClass *)0x0) goto LAB_14bc7acf1;
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14bc7acf1;
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
    pUVar12 = (UDS_HUD_NpcViewTargetCamera *)
              UUserWidget::CreateWidgetInstance
                        (param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3);
    if (pUVar12 != (UDS_HUD_NpcViewTargetCamera *)0x0) {
      pUVar11 = Z_Construct_UClass_UDS_HUD_NpcViewTargetCamera_NoRegister();
      iVar2 = (int)pUVar11->_padding_;
      if ((iVar2 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar11->_padding_)) goto LAB_14bc7ad63;
    }
  }
  pUVar12 = (UDS_HUD_NpcViewTargetCamera *)0x0;
LAB_14bc7ad63:
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

// CreateWidget<UDS_UserWidget,UDS_ScrollBox_*> @ 14bc7aeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_UserWidget * __cdecl
CreateWidget<UDS_UserWidget,UDS_ScrollBox_*>
          (UDS_ScrollBox *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

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
LAB_14bc7b008:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14bc7b008;
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
LAB_14bc7b0c1:
    pUVar13 = (UObjectBaseUtility *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar11 == (UClass *)0x0) goto LAB_14bc7b0c1;
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14bc7b0c1;
    pUVar13 = *(UObjectBaseUtility **)param_2.Class.field0_0x0;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_68,pUVar13,TVar10);
  if (param_1 != (UDS_ScrollBox *)0x0) {
    local_res8 = *(LARGE_INTEGER *)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_res8.QuadPart != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar12 = (UDS_UserWidget *)
              UUserWidget::CreateWidgetInstance
                        ((UWidget *)param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3);
    if (pUVar12 != (UDS_UserWidget *)0x0) {
      pUVar11 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
      iVar2 = (int)pUVar11->_padding_;
      if ((iVar2 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar11->_padding_)) goto LAB_14bc7b133;
    }
  }
  pUVar12 = (UDS_UserWidget *)0x0;
LAB_14bc7b133:
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

// GetFormatString<unsigned___int64,__int64> @ 14bc7be30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
DS_Util::GetFormatString<unsigned___int64,__int64>
          (FString *__return_storage_ptr__,FString *param_1,ulong64 param_2,long64 param_3)

{
  uint *puVar1;
  longlong lVar2;
  void *pvVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  ForAnyElementType FVar10;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  wchar_t *pwVar14;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  undefined1 auStackY_148 [32];
  uint local_118;
  int local_114;
  FSparseArrayAllocationInfo local_110;
  undefined4 local_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  wchar_t *local_f0;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *local_e8;
  long64 local_e0;
  FString *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar15 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
  if ((param_1->Data).ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  uVar22 = 1;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_e0 = param_3;
  local_d8 = param_1;
  local_114 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
  if (local_70 == 0) {
    iVar7 = -1;
  }
  else {
    iVar7 = (int)(((int)(local_70 + -1) >> 0x1f & 0x1fU) + local_70 + -1) >> 5;
  }
  local_118 = (int)local_70 >> 0x1f & 0x1f;
  uVar5 = local_70 + local_118;
  uVar21 = 4;
  local_118 = (uVar5 & 0x1f) - local_118;
  iVar16 = (int)uVar5 >> 5;
  if (iVar16 == iVar7) {
    local_70 = local_70 + 1;
  }
  else {
    if ((int)local_6c < (int)(local_70 + 1)) {
      uVar5 = local_6c + 0x1f >> 5;
      uVar6 = local_70 + 0x20 >> 5;
      uVar20 = (ulonglong)uVar6;
      if (uVar6 < 5) {
        iVar7 = 4;
      }
      else {
        if (uVar5 < 5) {
          uVar5 = 0;
        }
        if (uVar5 == 0) {
          uVar8 = 4;
          if (4 < uVar20) {
            uVar8 = uVar20;
          }
        }
        else {
          uVar8 = (uVar20 * 3 >> 3) + 0x10 + uVar20;
        }
        uVar9 = FMemory::QuantizeSize(uVar8 * 4,0);
        iVar7 = (int)(uVar9 >> 2);
        if (iVar7 < (int)uVar6) {
          iVar7 = 0x7fffffff;
        }
      }
      local_6c = iVar7 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)local_88,local_70);
    }
    local_70 = local_70 + 1;
    uVar6 = (int)local_70 >> 0x1f & 0x1f;
    uVar5 = local_70 + uVar6;
    iVar7 = (uVar5 & 0x1f) - uVar6;
    if (iVar7 != 0) {
      FVar12 = (ForElementType<unsigned_int>)local_88;
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78;
      }
      puVar1 = (uint *)((longlong)FVar12 + (longlong)((int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (-(char)iVar7 & 0x1fU);
    }
  }
  FVar12 = (ForElementType<unsigned_int>)local_88;
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FVar12 = local_78;
  }
  puVar1 = (uint *)((longlong)FVar12 + (longlong)iVar16 * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)local_118 & 0x1f));
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,(FSparseArrayAllocationInfo *)&local_f0,local_114);
  pTVar11 = pTVar15;
  if (local_e8 != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    ::FString::FString((FString *)local_e8,L"1");
    FStringFormatArg::FStringFormatArg((FStringFormatArg *)&local_e8->field_0x10,param_2);
    *(undefined4 *)&local_e8->field_0x30 = 0xffffffff;
    pTVar11 = local_e8;
  }
  local_118 = (uint)local_f0;
  local_f0 = L"";
  uVar5 = 0;
  if (*(int *)&pTVar11->field_0x8 == 0) {
    pwVar14 = L"";
    uVar6 = uVar5;
  }
  else {
    pwVar14 = *(wchar_t **)pTVar11;
    uVar6 = *(int *)&pTVar11->field_0x8 - 1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,pwVar14);
  bVar4 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                      *)local_98,uVar6,pTVar11,(int *)&local_118,(bool *)0x0);
  if (bVar4) goto LAB_14bc7c30c;
  uVar17 = 1;
  uVar13 = local_98._8_4_ - local_64;
  if (3 < uVar13) {
    uVar20 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar13 < 1) || ((int)uVar17 <= (int)local_50)) {
    uVar6 = local_50 - 1 & uVar6;
    *(uint *)&pTVar11->field_0x34 = uVar6;
    FVar10.Data = (FScriptContainerElement *)local_60;
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      FVar10.Data = local_58.Data;
    }
    uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar6;
    *(undefined4 *)&pTVar11->field_0x30 = *(undefined4 *)((longlong)FVar10.Data + uVar20 * 4);
    *(uint *)((longlong)FVar10.Data + uVar20 * 4) = local_118;
    goto LAB_14bc7c30c;
  }
  local_50 = uVar17;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar17 != 0) {
    uVar6 = uVar17;
    if (uVar17 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar6 = 0;
        goto LAB_14bc7c13d;
      }
    }
    else {
LAB_14bc7c13d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar6,4);
    }
    if (0 < (int)uVar17) {
      uVar20 = (ulonglong)uVar17;
      pTVar11 = pTVar15;
      do {
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar8 = (ulonglong)pTVar11 & (longlong)(int)uVar17 - 1U;
        pTVar11 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)&pTVar11->field_0x1;
        *(undefined4 *)((longlong)FVar10.Data + uVar8 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_50 != 0) {
    local_110.Pointer = local_88;
    local_110.Index = 0;
    local_110._4_4_ = 1;
    uStack_fc = 0;
    uStack_f8 = 0;
    pTVar11 = pTVar15;
    if (local_70 != 0) {
      FVar12 = (ForElementType<unsigned_int>)local_88;
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78;
      }
      uVar6 = *(uint *)FVar12;
      pTVar19 = pTVar15;
      while (uVar6 == 0) {
        uStack_f8 = (int)pTVar19 + 0x20;
        pTVar19 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)(ulonglong)uStack_f8;
        iVar7 = (int)pTVar11;
        local_110.Index = iVar7 + 1;
        pTVar11 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
                  (ulonglong)(uint)local_110.Index;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_110.Index)
        goto LAB_14bc7c229;
        uVar6 = ((uint *)((longlong)FVar12 + 4))[iVar7];
      }
      local_110._4_4_ = -uVar6 & uVar6;
      uVar20 = (ulonglong)(uint)local_110._4_4_ * 2 + 1;
      lVar2 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_fc = (int)lVar2 + -1 + uStack_f8;
      pTVar11 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)(ulonglong)uStack_fc;
      if ((int)local_70 < (int)uStack_fc) {
LAB_14bc7c229:
        pTVar11 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)(ulonglong)local_70;
        uStack_fc = local_70;
      }
    }
    local_100 = 0xffffffff;
    local_c0._padding_ = CONCAT44(local_110._4_4_,local_110.Index);
    local_c0.CurrentBitIndex = uStack_fc;
    local_c0.UnvisitedBitMask = 0xffffffff;
    local_c0._28_4_ = uStack_f4;
    local_c0.BaseBitIndex = uStack_f8;
    local_c0.Array = local_110.Pointer;
    if ((int)pTVar11 < (int)local_70) {
      do {
        puVar18 = (undefined8 *)((longlong)(int)pTVar11 * 0x38 + *(longlong *)local_98);
        if (*(int *)(puVar18 + 1) == 0) {
          pwVar14 = L"";
          uVar6 = uVar5;
        }
        else {
          pwVar14 = (wchar_t *)*puVar18;
          uVar6 = *(int *)(puVar18 + 1) - 1;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,pwVar14);
        uVar6 = local_50 - 1 & uVar6;
        *(uint *)((longlong)puVar18 + 0x34) = uVar6;
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar18 + 6) = *(undefined4 *)((longlong)FVar10.Data + uVar20 * 4);
        *(int *)((longlong)FVar10.Data + uVar20 * 4) = (int)pTVar11;
        local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
        pTVar11 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
                  (ulonglong)(uint)local_c0.CurrentBitIndex;
      } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
    }
  }
LAB_14bc7c30c:
  if (local_64 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                       (int *)(local_98 + 0xc));
    if (local_70 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = (int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5;
    }
    uVar13 = (int)local_70 >> 0x1f & 0x1f;
    uVar6 = local_70 + uVar13;
    local_114 = (uVar6 & 0x1f) - uVar13;
    iVar23 = (int)uVar6 >> 5;
    if (iVar23 == iVar16) {
      local_70 = local_70 + 1;
    }
    else {
      if ((int)local_6c < (int)(local_70 + 1)) {
        uVar6 = local_6c + 0x1f >> 5;
        uVar13 = local_70 + 0x20 >> 5;
        uVar20 = (ulonglong)uVar13;
        if (4 < uVar13) {
          if (uVar6 < 5) {
            uVar6 = uVar5;
          }
          if (uVar6 == 0) {
            if (4 < uVar20) {
              uVar21 = uVar20;
            }
          }
          else {
            uVar21 = (uVar20 * 3 >> 3) + 0x10 + uVar20;
          }
          uVar9 = FMemory::QuantizeSize(uVar21 * 4,0);
          uVar6 = (uint)(uVar9 >> 2);
          if ((int)uVar6 < (int)uVar13) {
            uVar6 = 0x7fffffff;
          }
          uVar21 = (ulonglong)uVar6;
        }
        local_6c = (int)uVar21 << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)local_88,local_70);
      }
      local_70 = local_70 + 1;
      uVar13 = (int)local_70 >> 0x1f & 0x1f;
      uVar6 = local_70 + uVar13;
      iVar16 = (uVar6 & 0x1f) - uVar13;
      if (iVar16 != 0) {
        FVar12 = (ForElementType<unsigned_int>)local_88;
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_78;
        }
        puVar1 = (uint *)((longlong)FVar12 + (longlong)((int)uVar6 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar16 & 0x1f);
      }
    }
    FVar12 = (ForElementType<unsigned_int>)local_88;
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_78;
    }
    puVar1 = (uint *)((longlong)FVar12 + (longlong)iVar23 * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)local_114 & 0x1f));
    iVar16 = local_68;
  }
  else {
    iVar16 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x38 + 4);
    local_64 = local_64 + -1;
    iVar7 = local_68;
    if (local_64 != 0) {
      *(undefined4 *)(local_98._0_8_ + (longlong)iVar16 * 0x38) = 0xffffffff;
    }
  }
  local_68 = iVar16;
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,&local_110,iVar7);
  pvVar3 = local_110.Pointer;
  if (local_110.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    ::FString::FString(local_110.Pointer,L"2");
    FStringFormatArg::FStringFormatArg((FStringFormatArg *)((longlong)pvVar3 + 0x10),local_e0);
    *(undefined4 *)((longlong)pvVar3 + 0x30) = 0xffffffff;
    pTVar15 = pvVar3;
  }
  local_118 = local_110.Index;
  if (*(int *)&pTVar15->field_0x8 != 0) {
    local_f0 = *(wchar_t **)pTVar15;
    uVar5 = *(int *)&pTVar15->field_0x8 - 1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar5,local_f0);
  bVar4 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                      *)local_98,uVar5,pTVar15,(int *)&local_118,(bool *)0x0);
  if (!bVar4) {
    uVar6 = local_98._8_4_ - local_64;
    if (3 < uVar6) {
      uVar21 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar22 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || ((int)uVar22 <= (int)local_50)) {
      uVar5 = local_50 - 1 & uVar5;
      *(uint *)&pTVar15->field_0x34 = uVar5;
      FVar10.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar10.Data = local_58.Data;
      }
      uVar21 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar5;
      *(undefined4 *)&pTVar15->field_0x30 = *(undefined4 *)((longlong)FVar10.Data + uVar21 * 4);
      *(uint *)((longlong)FVar10.Data + uVar21 * 4) = local_118;
    }
    else {
      local_50 = uVar22;
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)local_98);
    }
  }
  ::FString::FormatImpl
            (__return_storage_ptr__,(wchar_t *)(local_d8->Data).AllocatorInstance.Data,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_98);
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar7 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = -1;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)local_88,0);
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

// GetFormatString<unsigned___int64,__int64,int> @ 14bc7c680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
DS_Util::GetFormatString<unsigned___int64,__int64,int>
          (FString *__return_storage_ptr__,FString *param_1,ulong64 param_2,long64 param_3,
          int param_4)

{
  uint *puVar1;
  longlong lVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  ForAnyElementType FVar10;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  uint uVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined1 auStackY_138 [32];
  uint local_108 [2];
  FSparseArrayAllocationInfo local_100;
  undefined4 local_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  long64 local_e0;
  FString *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pTVar17 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
  if ((param_1->Data).ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_e0 = param_3;
  local_d8 = param_1;
  local_108[0] = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x38,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                            (int *)(local_98 + 0xc));
  if (local_70 == 0) {
    iVar7 = -1;
  }
  else {
    iVar7 = (int)(((int)(local_70 + -1) >> 0x1f & 0x1fU) + local_70 + -1) >> 5;
  }
  uVar13 = (int)local_70 >> 0x1f & 0x1f;
  iVar5 = local_70 + uVar13;
  uVar24 = 4;
  iVar18 = iVar5 >> 5;
  if (iVar18 == iVar7) {
    local_70 = local_70 + 1;
  }
  else {
    if ((int)local_6c < (int)(local_70 + 1)) {
      uVar6 = local_6c + 0x1f >> 5;
      uVar14 = local_70 + 0x20 >> 5;
      uVar22 = (ulonglong)uVar14;
      if (uVar14 < 5) {
        iVar7 = 4;
      }
      else {
        if (uVar6 < 5) {
          uVar6 = 0;
        }
        if (uVar6 == 0) {
          uVar8 = 4;
          if (4 < uVar22) {
            uVar8 = uVar22;
          }
        }
        else {
          uVar8 = (uVar22 * 3 >> 3) + 0x10 + uVar22;
        }
        uVar9 = FMemory::QuantizeSize(uVar8 * 4,0);
        iVar7 = (int)(uVar9 >> 2);
        if (iVar7 < (int)uVar14) {
          iVar7 = 0x7fffffff;
        }
      }
      local_6c = iVar7 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)local_88,local_70);
    }
    local_70 = local_70 + 1;
    uVar14 = (int)local_70 >> 0x1f & 0x1f;
    uVar6 = local_70 + uVar14;
    iVar7 = (uVar6 & 0x1f) - uVar14;
    if (iVar7 != 0) {
      FVar12 = (ForElementType<unsigned_int>)local_88;
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78;
      }
      puVar1 = (uint *)((longlong)FVar12 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (-(char)iVar7 & 0x1fU);
    }
  }
  FVar12 = (ForElementType<unsigned_int>)local_88;
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FVar12 = local_78;
  }
  puVar1 = (uint *)((longlong)FVar12 + (longlong)iVar18 * 4);
  *puVar1 = *puVar1 & ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar13 & 0x1f));
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,&local_100,local_108[0]);
  pvVar3 = local_100.Pointer;
  pTVar11 = pTVar17;
  if (local_100.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    ::FString::FString(local_100.Pointer,L"1");
    FStringFormatArg::FStringFormatArg((FStringFormatArg *)((longlong)pvVar3 + 0x10),param_2);
    *(undefined4 *)((longlong)pvVar3 + 0x30) = 0xffffffff;
    pTVar11 = pvVar3;
  }
  local_108[0] = local_100.Index;
  uVar13 = 0;
  if (*(int *)&pTVar11->field_0x8 == 0) {
    pwVar15 = L"";
    uVar6 = uVar13;
  }
  else {
    pwVar15 = *(wchar_t **)pTVar11;
    uVar6 = *(int *)&pTVar11->field_0x8 - 1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,pwVar15);
  bVar4 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                      *)local_98,uVar6,pTVar11,(int *)local_108,(bool *)0x0);
  if (bVar4) goto LAB_14bc7cb4f;
  uVar19 = 1;
  uVar14 = local_98._8_4_ - local_64;
  if (3 < uVar14) {
    uVar22 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar14 < 1) || ((int)uVar19 <= (int)local_50)) {
    uVar6 = local_50 - 1 & uVar6;
    *(uint *)&pTVar11->field_0x34 = uVar6;
    FVar10.Data = (FScriptContainerElement *)local_60;
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      FVar10.Data = local_58.Data;
    }
    uVar22 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar6;
    *(undefined4 *)&pTVar11->field_0x30 = *(undefined4 *)((longlong)FVar10.Data + uVar22 * 4);
    *(uint *)((longlong)FVar10.Data + uVar22 * 4) = local_108[0];
    goto LAB_14bc7cb4f;
  }
  local_50 = uVar19;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar19 != 0) {
    uVar6 = uVar19;
    if (uVar19 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar6 = 0;
        goto LAB_14bc7c97c;
      }
    }
    else {
LAB_14bc7c97c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar6,4);
    }
    if (0 < (int)uVar19) {
      uVar22 = (ulonglong)uVar19;
      pTVar11 = pTVar17;
      do {
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar8 = (ulonglong)pTVar11 & (longlong)(int)uVar19 - 1U;
        pTVar11 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)&pTVar11->field_0x1;
        *(undefined4 *)((longlong)FVar10.Data + uVar8 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (local_50 != 0) {
    local_100.Pointer = local_88;
    local_100.Index = 0;
    local_100._4_4_ = 1;
    uStack_ec = 0;
    uStack_e8 = 0;
    pTVar11 = pTVar17;
    if (local_70 != 0) {
      FVar12 = (ForElementType<unsigned_int>)local_88;
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78;
      }
      uVar6 = *(uint *)FVar12;
      pTVar21 = pTVar17;
      while (uVar6 == 0) {
        uStack_e8 = (int)pTVar21 + 0x20;
        pTVar21 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)(ulonglong)uStack_e8;
        iVar7 = (int)pTVar11;
        local_100.Index = iVar7 + 1;
        pTVar11 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
                  (ulonglong)(uint)local_100.Index;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_100.Index)
        goto LAB_14bc7ca6a;
        uVar6 = ((uint *)((longlong)FVar12 + 4))[iVar7];
      }
      local_100._4_4_ = -uVar6 & uVar6;
      uVar22 = (ulonglong)(uint)local_100._4_4_ * 2 + 1;
      lVar2 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_ec = (uStack_e8 - 1) + (int)lVar2;
      pTVar11 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)(ulonglong)uStack_ec;
      if ((int)local_70 < (int)uStack_ec) {
LAB_14bc7ca6a:
        pTVar11 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)(ulonglong)local_70;
        uStack_ec = local_70;
      }
    }
    local_f0 = 0xffffffff;
    local_c0._padding_ = CONCAT44(local_100._4_4_,local_100.Index);
    local_c0.CurrentBitIndex = uStack_ec;
    local_c0.UnvisitedBitMask = 0xffffffff;
    local_c0._28_4_ = uStack_e4;
    local_c0.BaseBitIndex = uStack_e8;
    local_c0.Array = local_100.Pointer;
    if ((int)pTVar11 < (int)local_70) {
      do {
        puVar20 = (undefined8 *)((longlong)(int)pTVar11 * 0x38 + *(longlong *)local_98);
        if (*(int *)(puVar20 + 1) == 0) {
          pwVar15 = L"";
          uVar6 = uVar13;
        }
        else {
          pwVar15 = (wchar_t *)*puVar20;
          uVar6 = *(int *)(puVar20 + 1) - 1;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,pwVar15);
        uVar6 = local_50 - 1 & uVar6;
        *(uint *)((longlong)puVar20 + 0x34) = uVar6;
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar22 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar20 + 6) = *(undefined4 *)((longlong)FVar10.Data + uVar22 * 4);
        *(int *)((longlong)FVar10.Data + uVar22 * 4) = (int)pTVar11;
        local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
        pTVar11 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
                  (ulonglong)(uint)local_c0.CurrentBitIndex;
      } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
    }
  }
LAB_14bc7cb4f:
  if (local_64 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                       (int *)(local_98 + 0xc));
    if (local_70 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = (int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5;
    }
    uVar6 = (int)local_70 >> 0x1f & 0x1f;
    iVar18 = local_70 + uVar6;
    iVar23 = iVar18 >> 5;
    if (iVar23 == iVar5) {
      local_70 = local_70 + 1;
    }
    else {
      if ((int)local_6c < (int)(local_70 + 1)) {
        uVar14 = local_6c + 0x1f >> 5;
        uVar19 = local_70 + 0x20 >> 5;
        uVar22 = (ulonglong)uVar19;
        if (4 < uVar19) {
          if (uVar14 < 5) {
            uVar14 = uVar13;
          }
          if (uVar14 == 0) {
            if (4 < uVar22) {
              uVar24 = uVar22;
            }
          }
          else {
            uVar24 = (uVar22 * 3 >> 3) + 0x10 + uVar22;
          }
          uVar9 = FMemory::QuantizeSize(uVar24 * 4,0);
          uVar13 = (uint)(uVar9 >> 2);
          if ((int)uVar13 < (int)uVar19) {
            uVar13 = 0x7fffffff;
          }
          uVar24 = (ulonglong)uVar13;
        }
        local_6c = (int)uVar24 << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)local_88,local_70);
      }
      local_70 = local_70 + 1;
      uVar14 = (int)local_70 >> 0x1f & 0x1f;
      uVar13 = local_70 + uVar14;
      iVar5 = (uVar13 & 0x1f) - uVar14;
      if (iVar5 != 0) {
        FVar12 = (ForElementType<unsigned_int>)local_88;
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_78;
        }
        puVar1 = (uint *)((longlong)FVar12 + (longlong)((int)uVar13 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
      }
    }
    FVar12 = (ForElementType<unsigned_int>)local_88;
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_78;
    }
    puVar1 = (uint *)((longlong)FVar12 + (longlong)iVar23 * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar18 & 0x1f) - (char)uVar6 & 0x1f));
    iVar5 = local_68;
  }
  else {
    local_64 = local_64 + -1;
    iVar5 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x38 + 4);
    iVar7 = local_68;
    if (local_64 != 0) {
      *(undefined4 *)(local_98._0_8_ + (longlong)iVar5 * 0x38) = 0xffffffff;
    }
  }
  local_68 = iVar5;
  pwVar15 = L"";
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,&local_100,iVar7);
  pvVar3 = local_100.Pointer;
  pTVar11 = pTVar17;
  if (local_100.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    ::FString::FString(local_100.Pointer,L"2");
    FStringFormatArg::FStringFormatArg((FStringFormatArg *)((longlong)pvVar3 + 0x10),local_e0);
    *(undefined4 *)((longlong)pvVar3 + 0x30) = 0xffffffff;
    pTVar11 = pvVar3;
  }
  local_108[0] = local_100.Index;
  iVar7 = 0;
  if (*(int *)&pTVar11->field_0x8 == 0) {
    pwVar16 = L"";
    iVar5 = iVar7;
  }
  else {
    pwVar16 = *(wchar_t **)pTVar11;
    iVar5 = *(int *)&pTVar11->field_0x8 + -1;
  }
  uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar16);
  bVar4 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                      *)local_98,uVar13,pTVar11,(int *)local_108,(bool *)0x0);
  if (!bVar4) {
    uVar6 = local_98._8_4_ - local_64;
    if (uVar6 < 4) {
      uVar14 = 1;
    }
    else {
      uVar24 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || ((int)uVar14 <= (int)local_50)) {
      uVar13 = local_50 - 1 & uVar13;
      *(uint *)&pTVar11->field_0x34 = uVar13;
      FVar10.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar10.Data = local_58.Data;
      }
      uVar24 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
      *(undefined4 *)&pTVar11->field_0x30 = *(undefined4 *)((longlong)FVar10.Data + uVar24 * 4);
      *(uint *)((longlong)FVar10.Data + uVar24 * 4) = local_108[0];
    }
    else {
      local_50 = uVar14;
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)local_98);
    }
  }
  if (local_64 == 0) {
    iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x38,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                        (int *)(local_98 + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)local_88,false);
    iVar5 = local_68;
  }
  else {
    local_64 = local_64 + -1;
    iVar5 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x38 + 4);
    iVar18 = local_68;
    if (local_64 != 0) {
      *(undefined4 *)(local_98._0_8_ + (longlong)iVar5 * 0x38) = 0xffffffff;
    }
  }
  local_68 = iVar5;
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,&local_100,iVar18);
  pvVar3 = local_100.Pointer;
  if (local_100.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    ::FString::FString(local_100.Pointer,L"3");
    FStringFormatArg::FStringFormatArg((FStringFormatArg *)((longlong)pvVar3 + 0x10),param_4);
    *(undefined4 *)((longlong)pvVar3 + 0x30) = 0xffffffff;
    pTVar17 = pvVar3;
  }
  local_108[0] = local_100.Index;
  if (*(int *)&pTVar17->field_0x8 != 0) {
    pwVar15 = *(wchar_t **)pTVar17;
    iVar7 = *(int *)&pTVar17->field_0x8 + -1;
  }
  uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar15);
  bVar4 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                      *)local_98,uVar13,pTVar17,(int *)local_108,(bool *)0x0);
  if (!bVar4) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::RehashOrLink((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                    *)local_98,uVar13,pTVar17,local_108[0]);
  }
  ::FString::FormatImpl
            (__return_storage_ptr__,(wchar_t *)(local_d8->Data).AllocatorInstance.Data,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_98);
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar7 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = -1;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)local_88,0);
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

// GetTypeName<ADS_CameraActor_BossTarget> @ 14bc7cfc0

FString * __cdecl GetTypeName<ADS_CameraActor_BossTarget>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ADS_CameraActor_BossTarget_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ADS_CustomizeRenderRoom> @ 14bc7d000

FString * __cdecl GetTypeName<ADS_CustomizeRenderRoom>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ADS_CustomizeRenderRoom_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FDS_CustomizingCategoryTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingCategoryTableRow_const_*,`ADS_CustomizeRenderRoom::InitInfoWithGender'::__l6::<lambda_1>_>_> @ 14bc7d1c0

void __cdecl
AlgoImpl::
HeapSortInternal<FDS_CustomizingCategoryTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingCategoryTableRow_const_*,_ADS_CustomizeRenderRoom::InitInfoWithGender_::__l6::<lambda_1>_>_>
          (FDS_CustomizingCategoryTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_CustomizingCategoryTableRow_const_*,_public:_void___cdecl_ADS_CustomizeRenderRoom::InitInfoWithGender(void)_::_6_::<lambda_1>_>
          param_4)

{
  FDS_CustomizingCategoryTableRow *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar9 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14bc7d2ae:
      if (iVar9 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar9 = iVar8 * 2;
                iVar4 = iVar9 + 1;
                if (iVar9 + 2 < iVar5) {
                  if (param_1[(longlong)iVar9 + 2]->Order < param_1[iVar4]->Order) {
                    iVar4 = iVar9;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar4]->Order <= pFVar1->Order) break;
                param_1[iVar8] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar8 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar9 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar9 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2]->Order < param_1[iVar6]->Order) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar6]->Order <= pFVar1->Order) goto LAB_14bc7d2ae;
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FDS_CustomizingComponentTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingComponentTableRow_const_*,`ADS_CustomizeRenderRoom::InitInfoWithGender'::__l13::<lambda_2>_>_> @ 14bc7d370

void __cdecl
AlgoImpl::
HeapSortInternal<FDS_CustomizingComponentTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingComponentTableRow_const_*,_ADS_CustomizeRenderRoom::InitInfoWithGender_::__l13::<lambda_2>_>_>
          (FDS_CustomizingComponentTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_CustomizingComponentTableRow_const_*,_public:_void___cdecl_ADS_CustomizeRenderRoom::InitInfoWithGender(void)_::_13_::<lambda_2>_>
          param_4)

{
  FDS_CustomizingComponentTableRow *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar9 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14bc7d45e:
      if (iVar9 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar9 = iVar8 * 2;
                iVar4 = iVar9 + 1;
                if (iVar9 + 2 < iVar5) {
                  if (param_1[(longlong)iVar9 + 2]->Order < param_1[iVar4]->Order) {
                    iVar4 = iVar9;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar4]->Order <= pFVar1->Order) break;
                param_1[iVar8] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar8 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar9 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar9 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2]->Order < param_1[iVar6]->Order) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar6]->Order <= pFVar1->Order) goto LAB_14bc7d45e;
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// IntroSortInternal<FDS_CustomizingCategoryTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingCategoryTableRow_const_*,`ADS_CustomizeRenderRoom::InitInfoWithGender'::__l6::<lambda_1>_>_> @ 14bc7d520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FDS_CustomizingCategoryTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingCategoryTableRow_const_*,_ADS_CustomizeRenderRoom::InitInfoWithGender_::__l6::<lambda_1>_>_>
          (FDS_CustomizingCategoryTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_CustomizingCategoryTableRow_const_*,_public:_void___cdecl_ADS_CustomizeRenderRoom::InitInfoWithGender(void)_::_6_::<lambda_1>_>
          param_4)

{
  FDS_CustomizingCategoryTableRow **ppFVar1;
  FDS_CustomizingCategoryTableRow *pFVar2;
  int iVar3;
  FDS_CustomizingCategoryTableRow ***pppFVar4;
  FDS_CustomizingCategoryTableRow **ppFVar5;
  FDS_CustomizingCategoryTableRow **ppFVar6;
  FDS_CustomizingCategoryTableRow **ppFVar7;
  FDS_CustomizingCategoryTableRow **ppFVar8;
  FDS_CustomizingCategoryTableRow **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FDS_CustomizingCategoryTableRow **local_338;
  FDS_CustomizingCategoryTableRow **local_328;
  FDS_CustomizingCategoryTableRow **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar4 = &local_328;
    do {
      ppFVar9 = pppFVar4[1];
      ppFVar5 = *pppFVar4;
      ppFVar1 = pppFVar4[2];
      iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar8 = ppFVar5;
      if ((int)local_338 != 0) {
LAB_14bc7d5d0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar9 + 1;
          pFVar2 = ppFVar8[iVar3 >> 1];
          ppFVar8[iVar3 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar2;
          ppFVar5 = ppFVar8;
LAB_14bc7d600:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x00014bc7d609;
          goto LAB_14bc7d617;
        }
        for (; ppFVar5 = ppFVar8, ppFVar1 = ppFVar8, ppFVar8 < ppFVar9; ppFVar9 = ppFVar9 + -1) {
          while (ppFVar6 = ppFVar5, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar9) {
            ppFVar5 = ppFVar1;
            if ((*ppFVar1)->Order <= (*ppFVar6)->Order) {
              ppFVar5 = ppFVar6;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar9;
          *ppFVar9 = pFVar2;
        }
        goto LAB_14bc7d6d3;
      }
LAB_14bc7d6c2:
      local_338 = ppFVar1;
      HeapSortInternal<FDS_CustomizingCategoryTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingCategoryTableRow_const_*,_ADS_CustomizeRenderRoom::InitInfoWithGender_::__l6::<lambda_1>_>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_14bc7d6d3:
      pppFVar4 = pppFVar4 + -3;
    } while (&local_328 <= pppFVar4);
  }
  return;
code_r0x00014bc7d609:
  if ((*ppFVar5)->Order <= (*ppFVar8)->Order) goto LAB_14bc7d600;
LAB_14bc7d617:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar8) break;
  } while ((*ppFVar8)->Order <= (*ppFVar6)->Order);
  if (ppFVar5 <= ppFVar6) {
    pFVar2 = *ppFVar5;
    *ppFVar5 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_14bc7d600;
  }
  pFVar2 = *ppFVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar8 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar9 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar9) {
      *pppFVar4 = ppFVar5;
      pppFVar4[1] = ppFVar9;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar6 <= ppFVar8 + 1) goto LAB_14bc7d6d3;
    ppFVar9 = ppFVar7 + -2;
    ppFVar5 = ppFVar8;
  }
  else {
    if (ppFVar8 + 1 < ppFVar6) {
      *pppFVar4 = ppFVar8;
      pppFVar4[1] = ppFVar7 + -2;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar9 <= ppFVar5) goto LAB_14bc7d6d3;
  }
  iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar8 = ppFVar5;
  if ((int)local_338 == 0) goto LAB_14bc7d6c2;
  goto LAB_14bc7d5d0;
}

// IntroSortInternal<FDS_CustomizingComponentTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingComponentTableRow_const_*,`ADS_CustomizeRenderRoom::InitInfoWithGender'::__l13::<lambda_2>_>_> @ 14bc7d780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FDS_CustomizingComponentTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingComponentTableRow_const_*,_ADS_CustomizeRenderRoom::InitInfoWithGender_::__l13::<lambda_2>_>_>
          (FDS_CustomizingComponentTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_CustomizingComponentTableRow_const_*,_public:_void___cdecl_ADS_CustomizeRenderRoom::InitInfoWithGender(void)_::_13_::<lambda_2>_>
          param_4)

{
  FDS_CustomizingComponentTableRow **ppFVar1;
  FDS_CustomizingComponentTableRow *pFVar2;
  int iVar3;
  FDS_CustomizingComponentTableRow ***pppFVar4;
  FDS_CustomizingComponentTableRow **ppFVar5;
  FDS_CustomizingComponentTableRow **ppFVar6;
  FDS_CustomizingComponentTableRow **ppFVar7;
  FDS_CustomizingComponentTableRow **ppFVar8;
  FDS_CustomizingComponentTableRow **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FDS_CustomizingComponentTableRow **local_338;
  FDS_CustomizingComponentTableRow **local_328;
  FDS_CustomizingComponentTableRow **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar4 = &local_328;
    do {
      ppFVar9 = pppFVar4[1];
      ppFVar5 = *pppFVar4;
      ppFVar1 = pppFVar4[2];
      iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar8 = ppFVar5;
      if ((int)local_338 != 0) {
LAB_14bc7d830:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar9 + 1;
          pFVar2 = ppFVar8[iVar3 >> 1];
          ppFVar8[iVar3 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar2;
          ppFVar5 = ppFVar8;
LAB_14bc7d860:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x00014bc7d869;
          goto LAB_14bc7d877;
        }
        for (; ppFVar5 = ppFVar8, ppFVar1 = ppFVar8, ppFVar8 < ppFVar9; ppFVar9 = ppFVar9 + -1) {
          while (ppFVar6 = ppFVar5, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar9) {
            ppFVar5 = ppFVar1;
            if ((*ppFVar1)->Order <= (*ppFVar6)->Order) {
              ppFVar5 = ppFVar6;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar9;
          *ppFVar9 = pFVar2;
        }
        goto LAB_14bc7d933;
      }
LAB_14bc7d922:
      local_338 = ppFVar1;
      HeapSortInternal<FDS_CustomizingComponentTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CustomizingComponentTableRow_const_*,_ADS_CustomizeRenderRoom::InitInfoWithGender_::__l13::<lambda_2>_>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_14bc7d933:
      pppFVar4 = pppFVar4 + -3;
    } while (&local_328 <= pppFVar4);
  }
  return;
code_r0x00014bc7d869:
  if ((*ppFVar5)->Order <= (*ppFVar8)->Order) goto LAB_14bc7d860;
LAB_14bc7d877:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar8) break;
  } while ((*ppFVar8)->Order <= (*ppFVar6)->Order);
  if (ppFVar5 <= ppFVar6) {
    pFVar2 = *ppFVar5;
    *ppFVar5 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_14bc7d860;
  }
  pFVar2 = *ppFVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar8 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar9 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar9) {
      *pppFVar4 = ppFVar5;
      pppFVar4[1] = ppFVar9;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar6 <= ppFVar8 + 1) goto LAB_14bc7d933;
    ppFVar9 = ppFVar7 + -2;
    ppFVar5 = ppFVar8;
  }
  else {
    if (ppFVar8 + 1 < ppFVar6) {
      *pppFVar4 = ppFVar8;
      pppFVar4[1] = ppFVar7 + -2;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar9 <= ppFVar5) goto LAB_14bc7d933;
  }
  iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar8 = ppFVar5;
  if ((int)local_338 == 0) goto LAB_14bc7d922;
  goto LAB_14bc7d830;
}

// MakeTDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs> @ 14bc7d9e0

TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs> @ 14bc7da90

TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs> @ 14bc7db40

TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs> @ 14bc7dbf0

TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs> @ 14bc7dca0

TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> @ 14bc7dd50

TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> @ 14bc7de00

TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__
          ,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs> @ 14bc7deb0

TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewObject<UBorder> @ 14bc7df60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBorder * __cdecl NewObject<UBorder>(UObject *param_1)

{
  UClass *pUVar1;
  UBorder *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UBorder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UBorder *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_CommonLazyImage> @ 14bc7e000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CommonLazyImage * __cdecl NewObject<UDS_CommonLazyImage>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CommonLazyImage *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CommonLazyImage_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CommonLazyImage *)
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

// NewObject<UDS_LongPressProcessor> @ 14bc7e0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LongPressProcessor * __cdecl NewObject<UDS_LongPressProcessor>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_LongPressProcessor *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LongPressProcessor_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_LongPressProcessor *)
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

// NewObject<UDS_ModelBase> @ 14bc7e140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ModelBase * __cdecl NewObject<UDS_ModelBase>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ModelBase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ModelBase_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ModelBase *)
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

// NewObject<UDS_NpcLookAtAbilityContext> @ 14bc7e1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_NpcLookAtAbilityContext * __cdecl NewObject<UDS_NpcLookAtAbilityContext>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_NpcLookAtAbilityContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_NpcLookAtAbilityContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_NpcLookAtAbilityContext *)
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

// NewObject<USceneCaptureComponent2D> @ 14bc7e280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USceneCaptureComponent2D * __cdecl NewObject<USceneCaptureComponent2D>(UObject *param_1)

{
  UClass *pUVar1;
  USceneCaptureComponent2D *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USceneCaptureComponent2D *)
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

// ~TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::__l5::<lambda_1>,0,1> @ 14bc84890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride_::__l5::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x28);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `vcall'{72,{flat}}'_}' @ 14bc85480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* [thunk]: __cdecl ADS_NPC::`vcall'{72,{flat}}' }' */

void __thiscall ADS_NPC::_vcall__72__flat______(ADS_NPC *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc85483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))();
  return;
}

// `vcall'{72,{flat}}'_}' @ 14bc8548c

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
/* [thunk]: __cdecl ADS_TransportActor::`vcall'{72,{flat}}' }' */

void __thiscall ADS_TransportActor::_vcall__72__flat______(ADS_TransportActor *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc8548f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))();
  return;
}

// `vcall'{784,{flat}}'_}' @ 14bc85498

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* [thunk]: __cdecl UDS_CommonVideoPlayer::`vcall'{784,{flat}}' }' */

void __thiscall UDS_CommonVideoPlayer::_vcall__784__flat______(UDS_CommonVideoPlayer *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc8549b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x310))();
  return;
}

// `vcall'{712,{flat}}'_}' @ 14bc854a8

/* [thunk]: __cdecl UDS_ViewModelBase::`vcall'{712,{flat}}' }' */

void __thiscall UDS_ViewModelBase::_vcall__712__flat______(UDS_ViewModelBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc854ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))();
  return;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14bc854b8

/* [thunk]:public: virtual void * __ptr64 __cdecl SDS_TableViewBase<class SCommonTileView,class
   UObject * __ptr64>::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SDS_TableViewBase<SCommonTileView,UObject*___ptr64>::_vector_deleting_destructor__adjustor_680__
          (SDS_TableViewBase<SCommonTileView,UObject*___ptr64> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = SDS_TableViewBase<SCommonTileView,UObject_*>::_scalar_deleting_destructor_
                     ((SDS_TableViewBase<SCommonTileView,UObject_*> *)(this + -0x2a8),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1416}' @ 14bc854cc

/* [thunk]:public: virtual void * __ptr64 __cdecl SDS_TableViewBase<class SCommonTileView,class
   UObject * __ptr64>::`vector deleting destructor'`adjustor{1416}' (unsigned int) __ptr64 */

void * __thiscall
SDS_TableViewBase<SCommonTileView,UObject*___ptr64>::_vector_deleting_destructor__adjustor_1416__
          (SDS_TableViewBase<SCommonTileView,UObject*___ptr64> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = SDS_TableViewBase<SCommonTileView,UObject_*>::_scalar_deleting_destructor_
                     ((SDS_TableViewBase<SCommonTileView,UObject_*> *)(this + -0x588),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14bc854e0

/* [thunk]:public: virtual void * __ptr64 __cdecl SDS_TableViewBase<class SCommonTreeView,class
   UObject * __ptr64>::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SDS_TableViewBase<SCommonTreeView,UObject*___ptr64>::_vector_deleting_destructor__adjustor_680__
          (SDS_TableViewBase<SCommonTreeView,UObject*___ptr64> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = SDS_TableViewBase<SCommonTreeView,UObject_*>::_scalar_deleting_destructor_
                     ((SDS_TableViewBase<SCommonTreeView,UObject_*> *)(this + -0x2a8),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1416}' @ 14bc854f4

/* [thunk]:public: virtual void * __ptr64 __cdecl SDS_TableViewBase<class SCommonTreeView,class
   UObject * __ptr64>::`vector deleting destructor'`adjustor{1416}' (unsigned int) __ptr64 */

void * __thiscall
SDS_TableViewBase<SCommonTreeView,UObject*___ptr64>::_vector_deleting_destructor__adjustor_1416__
          (SDS_TableViewBase<SCommonTreeView,UObject*___ptr64> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = SDS_TableViewBase<SCommonTreeView,UObject_*>::_scalar_deleting_destructor_
                     ((SDS_TableViewBase<SCommonTreeView,UObject_*> *)(this + -0x588),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14bc85508

/* [thunk]:public: virtual void * __ptr64 __cdecl SDS_TableViewBase<class SListView,class UObject *
   __ptr64>::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SDS_TableViewBase<SListView,UObject*___ptr64>::_vector_deleting_destructor__adjustor_680__
          (SDS_TableViewBase<SListView,UObject*___ptr64> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = SDS_TableViewBase<SListView,UObject_*>::_scalar_deleting_destructor_
                     ((SDS_TableViewBase<SListView,UObject_*> *)(this + -0x2a8),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1416}' @ 14bc8551c

/* [thunk]:public: virtual void * __ptr64 __cdecl SDS_TableViewBase<class SListView,class UObject *
   __ptr64>::`vector deleting destructor'`adjustor{1416}' (unsigned int) __ptr64 */

void * __thiscall
SDS_TableViewBase<SListView,UObject*___ptr64>::_vector_deleting_destructor__adjustor_1416__
          (SDS_TableViewBase<SListView,UObject*___ptr64> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = SDS_TableViewBase<SListView,UObject_*>::_scalar_deleting_destructor_
                     ((SDS_TableViewBase<SListView,UObject_*> *)(this + -0x588),param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14bc85530

void * __thiscall
IBaseDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85560

void * __thiscall
IBaseDelegateInstance<void___cdecl(float_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(float_const_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85590

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Math::TIntPoint<int>_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Math::TIntPoint<int>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc855c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_KeyActionType_const_&,FDS_InputEventParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc855f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85620

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,FDS_CustomizeComponentInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,FDS_CustomizeComponentInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85650

void * __thiscall
IBaseDelegateInstance<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85680

void * __thiscall
IBaseDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>,enum_EDS_WarpDeviceState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc856b0

void * __thiscall
SDS_TableViewBase<SCommonTileView,UObject_*>::_scalar_deleting_destructor_
          (SDS_TableViewBase<SCommonTileView,UObject_*> *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrollInteracted);
  pvVar1 = *(void **)&(this->OnUserScrollInteracted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUserScrollInteracted);
  SListView<UObject_*>::~SListView<UObject_*>((SListView<UObject_*> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85740

void * __thiscall
SDS_TableViewBase<SCommonTreeView,UObject_*>::_scalar_deleting_destructor_
          (SDS_TableViewBase<SCommonTreeView,UObject_*> *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrollInteracted);
  pvVar1 = *(void **)&(this->OnUserScrollInteracted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUserScrollInteracted);
  STreeView<UObject_*>::~STreeView<UObject_*>((STreeView<UObject_*> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xb20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc857d0

void * __thiscall
SDS_TableViewBase<SListView,UObject_*>::_scalar_deleting_destructor_
          (SDS_TableViewBase<SListView,UObject_*> *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrollInteracted);
  pvVar1 = *(void **)&(this->OnUserScrollInteracted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUserScrollInteracted);
  SListView<UObject_*>::~SListView<UObject_*>((SListView<UObject_*> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85860

void * __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85890

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UDS_ColorBlock_const_,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UDS_ColorBlock_const_,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc858c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UDS_ColorSlider_const_,TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UDS_ColorSlider_const_,TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc858f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UDS_ColorSlider_const_,enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85920

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UDS_ColorSlider_const_,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UDS_ColorSlider_const_,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85950

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UDS_ColorSpectrum_const_,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UDS_ColorSpectrum_const_,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85980

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UDS_ColorWheel_const_,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UDS_ColorWheel_const_,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc859b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_CustomizeRenderRoom,void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_CustomizeRenderRoom,void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc859f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_CustomizeRenderRoom,void___cdecl(int,FDS_CustomizeComponentInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_CustomizeRenderRoom,void___cdecl(int,FDS_CustomizeComponentInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85a20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_CustomizeRenderRoom,void___cdecl(unsigned_int,UWN_MCS_COICore_*,enum_EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85a50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_CustomizeRenderRoom,void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_CustomizeRenderRoom,void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85a80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_CustomizeRenderRoom,void___cdecl(enum_EDS_LoadingPhase),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85ab0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_DummyNetCharacter,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_DummyNetCharacter,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85af0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_DummyNetCharacter,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_DummyNetCharacter,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85b20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NPC,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_NPC,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85b50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NPCBoss,void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy,unsigned___int64>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_NPCBoss,void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy,unsigned___int64>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85b80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NPCBoss,void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_NPCBoss,void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85bb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NPCBoss,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_NPCBoss,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85be0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NPCBoss,void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_NPCBoss,void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85c10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NPCBoss,void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy,unsigned___int64>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_NPCBoss,void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy,unsigned___int64>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85c40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NPCMount,void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_NPCMount,void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85c70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NPCMount,void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_NPCMount,void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85ca0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NetCharacter,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_NetCharacter,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85ce0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NetCharacter,void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_NetCharacter,void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85d20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NetCharacter,void___cdecl(unsigned_int,UWN_MCS_COICore_*,enum_EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85d50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NetCharacter,void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85d80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_NetCharacter,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_NetCharacter,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85db0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_QuestCoordinate,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_QuestCoordinate,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85de0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_Stuff,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_Stuff,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85e20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_Stuff,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_Stuff,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85e50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_StuffGather,void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85e80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_StuffGather,void___cdecl(enum_EDS_StuffState_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85eb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_StuffGather,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_StuffGather,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85ee0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_StuffPortal,void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85f10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_StuffPortal,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_StuffPortal,void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85f40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_StuffWarpDevice,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_StuffWarpDevice,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85f70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_StuffWarpDevice,void___cdecl(TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>,enum_EDS_WarpDeviceState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85fa0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_TotemActor,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_TotemActor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc85fd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_TotemActor,void___cdecl(void),FDefaultDelegateUserPolicy,FString,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_TotemActor,void___cdecl(void),FDefaultDelegateUserPolicy,FString,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86020

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_TotemActor,void___cdecl(void),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_TotemActor,void___cdecl(void),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86060

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_TotemActor,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_TotemActor,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86090

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_TransportActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_TransportActor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc860c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_ViewerCharacter,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_ViewerCharacter,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86100

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_ViewerCharacter,void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_ViewerCharacter,void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86140

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_ViewerCharacter,void___cdecl(unsigned_int,UWN_MCS_COICore_*,enum_EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86170

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_ViewerCharacter,void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc861a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_ViewerCharacter,void___cdecl(void),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_ViewerCharacter,void___cdecl(void),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc861e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ColorSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ColorSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86210

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ColorSpectrum,void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ColorSpectrum,void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86240

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ColorWheel,void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ColorWheel,void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86270

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonListView,void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonListView,void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc862a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonListView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonListView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc862d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonListView,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonListView,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86300

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonListView,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonListView,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86330

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonTileView,void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonTileView,void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86360

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86390

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonTileView,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonTileView,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc863c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonTileView,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonTileView,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc863f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonTreeView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonTreeView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86420

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonTreeView,void___cdecl(UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonTreeView,void___cdecl(UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86450

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonTreeView,void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonTreeView,void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86480

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonTreeView,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonTreeView,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc864b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonTreeView,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonTreeView,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc864e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86510

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86540

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CommonVideoPlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CommonVideoPlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86570

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_DynamicEntryBox,void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_DynamicEntryBox,void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc865a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_EditableText,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_EditableText,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc865d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MultiLineEditableText,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MultiLineEditableText,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86600

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_Slider,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_Slider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86630

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_Slider,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_Slider,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86660

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_UserWidget,void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_UserWidget,void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86690

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_UserWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_UserWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc866c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_UserWidget,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_UserWidget,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc866f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ViewModelBase,void___cdecl(enum_EDS_KeyActionType_const_&,FDS_InputEventParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86720

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_W_B_ContentsFrame,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_W_B_ContentsFrame,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86750

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_W_CommonButton,void___cdecl(float_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_W_CommonButton,void___cdecl(float_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86780

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_W_CommonButton,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_W_CommonButton,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc867b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_W_CommonButton,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_W_CommonButton,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc867e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_W_WindowFrame,void___cdecl(UE::Math::TIntPoint<int>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_W_WindowFrame,void___cdecl(UE::Math::TIntPoint<int>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86810

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_W_WindowFrame,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_W_WindowFrame,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86840

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_W_WindowFrame,void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86870

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_W_WindowFrame,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_W_WindowFrame,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc868a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_W_WindowFrame,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_W_WindowFrame,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc868d0

void * __thiscall
TCommonDelegateInstanceState<TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86900

void * __thiscall
TCommonDelegateInstanceState<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86930

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(float_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(float_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86960

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Math::TIntPoint<int>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Math::TIntPoint<int>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86990

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy,unsigned___int64>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy,unsigned___int64>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc869c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,UWorld_*>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,UWorld_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc869f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_KeyActionType_const_&,FDS_InputEventParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86a20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86a50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,FDS_CustomizeComponentInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,FDS_CustomizeComponentInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86a80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86ab0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy,unsigned___int64>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy,unsigned___int64>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86ae0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>,enum_EDS_WarpDeviceState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86b60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SDS_TableViewBase<SCommonTileView,UObject_*>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDS_TableViewBase<SCommonTileView,UObject_*>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86ba0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SDS_TableViewBase<SCommonTreeView,UObject_*>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86be0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_TableViewBase<SListView,UObject_*>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDS_TableViewBase<SListView,UObject_*>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86c20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_ColorSlider,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SDS_ColorSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86c60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_DynamicEntryHorizontal,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDS_DynamicEntryHorizontal,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86ca0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_DynamicEntryRadial,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDS_DynamicEntryRadial,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86ce0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDS_DynamicEntryVertical,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDS_DynamicEntryVertical,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86d20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UDS_SSlider,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UDS_SSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x348);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86d60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_CommonAnalogCursor,SharedPointerInternals::DefaultDeleter<FDS_CommonAnalogCursor>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_CommonAnalogCursor,SharedPointerInternals::DefaultDeleter<FDS_CommonAnalogCursor>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::_scalar_deleting_destructor_
          (TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86dd0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86e00

void * __thiscall
FDS_NavigationConfig::_scalar_deleting_destructor_(FDS_NavigationConfig *this,uint param_1)

{
  FNavigationConfig::~FNavigationConfig((FNavigationConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86e40

void * __thiscall
SDS_DynamicEntryHorizontal::_scalar_deleting_destructor_
          (SDS_DynamicEntryHorizontal *this,uint param_1)

{
  SBoxPanel::~SBoxPanel((SBoxPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86ea0

void * __thiscall
SDS_DynamicEntryRadial::_scalar_deleting_destructor_(SDS_DynamicEntryRadial *this,uint param_1)

{
  DestructItems<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,int>
            ((TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FChildren::~FChildren((FChildren *)&this->_padding_);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86f40

void * __thiscall
SDS_DynamicEntryVertical::_scalar_deleting_destructor_(SDS_DynamicEntryVertical *this,uint param_1)

{
  SBoxPanel::~SBoxPanel((SBoxPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc86fa0

void * __thiscall UDS_SSlider::_scalar_deleting_destructor_(UDS_SSlider *this,uint param_1)

{
  ~UDS_SSlider(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x338);
  }
  return this;
}

// BakedResourcePrefix'' @ 15043e870

void __cdecl `dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data;
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data !=
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

// DEFAULT_PARAMETER_VALUE_NAME'' @ 15043e890

void __cdecl
`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
DEFAULT_PARAMETER_VALUE_NAME__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.
               AllocatorInstance.Data;
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
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

// Empty'' @ 15043e8b0

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::~FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  return;
}

// Empty'' @ 15043e8d0

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

// RenderRoomKey'' @ 15043e930

void __cdecl `dynamic_atexit_destructor_for_'ADS_CustomizeRenderRoom::RenderRoomKey__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ADS_CustomizeRenderRoom::RenderRoomKey.Data.AllocatorInstance.Data;
  if (ADS_CustomizeRenderRoom::RenderRoomKey.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ADS_CustomizeRenderRoom::RenderRoomKey.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 15043e950

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

// `dynamic_atexit_destructor_for_'EnumNameCache'' @ 15043e970

void __cdecl
`FDS_DataContainer::TransformIndexToName<enum_EDS_TextData>'::__l2::
_dynamic_atexit_destructor_for__EnumNameCache__(void)

{
  `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
  ::__l2::EnumNameCache._72_4_ = 0;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
      ::__l2::EnumNameCache._64_8_ != 0) {
    FMemory::Free((void *)`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                          ::__l2::EnumNameCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                 ::__l2::EnumNameCache);
  return;
}

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 15043e9b0

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

// `dynamic_atexit_destructor_for_'EquipParamTypes'' @ 15043e9d0

void __cdecl ds_parts::_dynamic_atexit_destructor_for__EquipParamTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EquipParamTypes.AllocatorInstance.Data;
  if (EquipParamTypes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EquipParamTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'VideoPlayerMaterialFinder'' @ 15043e9f0

void __cdecl
`UDS_CommonVideoPlayer::UDS_CommonVideoPlayer'::__l2::
_dynamic_atexit_destructor_for__VideoPlayerMaterialFinder__(void)

{
  VideoPlayerMaterialFinder._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&VideoPlayerMaterialFinder);
  return;
}

