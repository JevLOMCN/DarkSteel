// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// StaticClass @ 14b4bcd40

UClass * __cdecl UDS_InteractionAbility_NPCCamp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCCamp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCCamp",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCCamp.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPCCamp,0x1f0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPCCamp>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCCamp>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCCamp.InnerSingleton;
}

// UDS_InteractionAbility_NPCCamp @ 14b4c12d0

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

UDS_InteractionAbility_NPCCamp * __thiscall
UDS_InteractionAbility_NPCCamp::UDS_InteractionAbility_NPCCamp
          (UDS_InteractionAbility_NPCCamp *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->CampEndTimer).Handle = 0;
  (this->SpawnChairActorTimer).Handle = 0;
  (this->ChairActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ChairActor).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_ChairActor).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_ChairActor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *&(this->ChairSpawnTM).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ChairSpawnTM).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ChairSpawnTM).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ChairSpawnTM).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ChairSpawnTM).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ChairSpawnTM).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// UDS_InteractionAbility_NPCCamp @ 14b4c13b0

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

UDS_InteractionAbility_NPCCamp * __thiscall
UDS_InteractionAbility_NPCCamp::UDS_InteractionAbility_NPCCamp
          (UDS_InteractionAbility_NPCCamp *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->CampEndTimer).Handle = 0;
  (this->SpawnChairActorTimer).Handle = 0;
  (this->ChairActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ChairActor).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_ChairActor).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_ChairActor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *&(this->ChairSpawnTM).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ChairSpawnTM).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ChairSpawnTM).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ChairSpawnTM).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ChairSpawnTM).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ChairSpawnTM).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// ~UDS_InteractionAbility_NPCCamp @ 14b4c23a0

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

void __thiscall
UDS_InteractionAbility_NPCCamp::~UDS_InteractionAbility_NPCCamp
          (UDS_InteractionAbility_NPCCamp *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncLoadHandle_ChairActor).SharedReferenceCount.ReferenceController);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4c3a80

EDS_AbilityInputPolicy __thiscall
UDS_InteractionAbility_NPCCamp::GetDefaultInputPolicy(UDS_InteractionAbility_NPCCamp *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b4c4960

UClass * __cdecl UDS_InteractionAbility_NPCCamp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCCamp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCCamp",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCCamp.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPCCamp,0x1f0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPCCamp>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCCamp>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCCamp.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c5420

bool __thiscall
UDS_InteractionAbility_NPCCamp::ShouldNotifyChangedCharState(UDS_InteractionAbility_NPCCamp *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_NPCCamp @ 14b4c5670

void __cdecl
UDS_InteractionAbility_NPCCamp::StaticRegisterNativesUDS_InteractionAbility_NPCCamp(void)

{
  return;
}

// ClearCampEndTimer @ 14b7dc5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCCamp::ClearCampEndTimer(UDS_InteractionAbility_NPCCamp *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->CampEndTimer;
  if (pFVar1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,pFVar1);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  return;
}

// ClearSpawnChairActorTimer @ 14b7dc700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCCamp::ClearSpawnChairActorTimer(UDS_InteractionAbility_NPCCamp *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->SpawnChairActorTimer;
  if (pFVar1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,pFVar1);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  return;
}

// Deactivate @ 14b7e37d0

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
UDS_InteractionAbility_NPCCamp::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_NPCCamp::Deactivate",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x123,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = Interaction_NPCCamp;
      bVar1 = FDS_EntityBase::DeactivateAbility(this,local_148,param_2);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_NPCCamp::Deactivate",0x2a,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x12a,L"sourceEntity is nullptr. (%llu)");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// DoCamp @ 14b7e3e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDS_InteractionAbility_NPCCamp::DoCamp(UDS_InteractionAbility_NPCCamp *this)

{
  double dVar1;
  float fVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_WindowManager *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar7;
  FGameplayTag *pFVar8;
  UObject *pUVar9;
  FTimerManager *pFVar10;
  UDS_NPCCampData *this_01;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStackY_228 [32];
  uint uVar13;
  wchar_t *pwVar14;
  EDS_StateTagType local_1e8 [8];
  undefined1 local_1e0 [8];
  FDelegateAllocation local_1d8;
  code *local_1c8;
  FMRSWRecursiveAccessDetector *pFStack_1c0;
  bool local_1b8;
  FWeakObjectPtr local_1a8;
  UDS_InteractionAbility_NPCCamp *local_1a0;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_InteractionAbility_NPCCamp::DoCamp",0x26,Yes);
    pwVar14 = L"InteractionAbilityData is nullptr.";
    uVar13 = 0x135;
  }
  else {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_NPCCampData::GetData((ulong64)&local_1a8);
    bVar3 = TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> *)&local_1a8,(void *)0x0);
    if (!bVar3) {
      if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
        this_00 = UDS_WindowManager::GetInst();
        if (this_00 == (UDS_WindowManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar4 = UDS_LogManager::GetInst();
          local_178._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_178,"UDS_InteractionAbility_NPCCamp::DoCamp",0x26,Yes);
          pwVar14 = L"windowMng is nullptr.";
          uVar13 = 0x146;
          goto LAB_14b7e3fdf;
        }
        local_1c8 = OnOpenWindow_CampAction;
        pFStack_1c0 = (FMRSWRecursiveAccessDetector *)((ulonglong)pFStack_1c0 & 0xffffffff00000000);
        local_1e0 = (undefined1  [8])0x0;
        local_1d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_1d8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
                   (FWriteAccessScope *)&local_198);
        local_180 = &local_1d8;
        puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_1d8);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[2] = uVar6;
          *puVar5 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_NPCCamp____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar5[3] = 0;
          local_1a0 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_1a0);
          puVar5[4] = local_1c8;
          puVar5[5] = pFStack_1c0;
        }
        if (local_198.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
        }
        pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            &local_1c8,
                            (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            local_1e0);
        bVar3 = UDS_WindowManager::OpenWindow(this_00,CampAction,pTVar7);
        if (!bVar3) {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_178._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_178,"UDS_InteractionAbility_NPCCamp::DoCamp",0x26,Yes);
            UDS_LogManager::PrintLog
                      (pUVar4,1,Warning,local_178.Ptr,0x14d,
                       L"Failed to OpenWindow(EDS_WindowWidget::CampAction).");
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
                     (FWriteAccessScope *)&local_1c8);
          if ((local_1d8.DelegateSize != 0) &&
             (local_1d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_1d8.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_1d8,0,0,0x10);
            local_1d8.DelegateSize = 0;
          }
          if (local_1b8 == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      (pFStack_1c0,(FDestructionSentinel *)&local_1c8);
          }
          if (local_1d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_1d8.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_1e0);
          return false;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
                   (FWriteAccessScope *)&local_1c8);
        if ((local_1d8.DelegateSize != 0) &&
           (local_1d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_1d8.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_1d8,0,0,0x10);
          local_1d8.DelegateSize = 0;
        }
        if (local_1b8 == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (pFStack_1c0,(FDestructionSentinel *)&local_1c8);
        }
        if (local_1d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_1d8.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1e0);
      }
      local_1e8[0] = Interaction_NPCCamp;
      pFVar8 = FDS_GameplayTags::GetStateTag(local_1e8);
      UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar8);
      pUVar9 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      fVar2 = __real_bf800000;
      if (pUVar9[3].field_0x1a == '\x01') {
        pFVar10 = FDS_TimerManager::Get((UObject *)0x0);
        pFStack_1c0 = (FMRSWRecursiveAccessDetector *)((ulonglong)pFStack_1c0 & 0xffffffff00000000);
        local_1c8 = OnSpawnChairActorTimer;
        FTimerManager::SetTimer<UDS_InteractionAbility_NPCCamp>
                  (pFVar10,&this->SpawnChairActorTimer,this,(pmf_03ebaa26 *)&local_1c8,
                   __real_3f000000,false,fVar2);
      }
      this_01 = (UDS_NPCCampData *)FWeakObjectPtr::Get(&local_1a8);
      dVar1 = UDS_NPCCampData::GetCampRemainTime(this_01);
      uVar11 = SUB84(dVar1,0);
      uVar12 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= 0.0) {
        uVar11 = 0;
        uVar12 = 0;
      }
      pFVar10 = FDS_TimerManager::Get((UObject *)0x0);
      pFStack_1c0 = (FMRSWRecursiveAccessDetector *)((ulonglong)pFStack_1c0 & 0xffffffff00000000);
      local_1c8 = OnCampEndTimer;
      FTimerManager::SetTimer<UDS_InteractionAbility_NPCCamp>
                (pFVar10,&this->CampEndTimer,this,(pmf_03ebaa26 *)&local_1c8,
                 (float)(double)CONCAT44(uVar12,uVar11),false,fVar2);
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_InteractionAbility_NPCCamp::DoCamp",0x26,Yes);
    pwVar14 = L"npcCampData is nullptr.";
    uVar13 = 0x13c;
  }
LAB_14b7e3fdf:
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_178.Ptr,uVar13,pwVar14);
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  return false;
}

// OnAbilityRetryActivate @ 14b7f4710

void __thiscall
UDS_InteractionAbility_NPCCamp::OnAbilityRetryActivate(UDS_InteractionAbility_NPCCamp *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9202611861457993521>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPCCamp.cpp"
                     ,0xcf,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCampEndTimer @ 14b7f5bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_InteractionAbility_NPCCamp::OnCampEndTimer(UDS_InteractionAbility_NPCCamp *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_AbilitySystemComponent *this_00;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPCCamp::OnCampEndTimer",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x193,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    local_148[0] = Success;
    pUVar3[3].field_0x19 = 1;
  }
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_148);
  return;
}

// OnCanActivate @ 14b7f64f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_InteractionAbility_NPCCamp::OnCanActivate(UDS_InteractionAbility_NPCCamp *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> *this_00;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> TVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar4 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar4) {
    this_00 = &this->InteractionAbilityData;
    plVar1 = &this->_padding_;
    bVar4 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar4) {
      TVar5 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCCamp>
                        (&local_144,(EDS_AbilityTagType *)plVar1);
                    /* WARNING: Load size is inaccurate */
      this_00->WeakPtr = *TVar5.WeakPtr;
    }
    bVar4 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar4) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_NPCCamp::OnCanActivate",0x2d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_138.Ptr,0x3a,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
        return true;
      }
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar2 = *(int *)&pUVar7[2].field_0x10;
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar4 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                        ((ulong64 *)plVar1,(ulong64 *)&pUVar7[2].field_0x8,iVar2,true);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        lVar3 = *plVar1;
        iVar2 = *(int *)&pUVar7[2].field_0x10;
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        bVar4 = DS_AbilityUtil_Interaction::IsAbleInteraction_TargetEntity
                          ((ulong64 *)&pUVar7[2].field_0x8,(int)lVar3,(longlong)iVar2);
        return bVar4;
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b7f89a0

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

void __thiscall
UDS_InteractionAbility_NPCCamp::OnChangedCharState
          (UDS_InteractionAbility_NPCCamp *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_178 [16];
  FDS_ChangedCharStateInfo local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168.StateTag.TagName = (param_2->StateTag).TagName;
  local_168.bIsStateTagOn = param_2->bIsStateTagOn;
  local_168._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_168.AddedCharState = param_2->AddedCharState;
  local_168.RemovedCharState = param_2->RemovedCharState;
  local_168.AddedCharDetailState = param_2->AddedCharDetailState;
  local_168.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10 = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_168);
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPCCamp::OnChangedCharState",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xd8,L"InCharStateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_178[0] = Cancel;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_178);
    return;
  }
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPCCamp::OnChangedCharState",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xdf,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
      return;
    }
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    iVar1 = *(int *)&pUVar5[2].field_0x10;
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                      ((ulong64 *)&this->_padding_,(ulong64 *)&pUVar5[2].field_0x8,iVar1,true);
    if (bVar2) {
      return;
    }
  }
  local_178[0] = Cancel;
  pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar4,(FGameplayTag *)&this->_padding_,local_178);
  return;
}

// OnChangedMainPlayerMoveMode @ 14b7f9f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCCamp::OnChangedMainPlayerMoveMode
          (UDS_InteractionAbility_NPCCamp *this,EDS_MoveMode *param_1)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UObject *pUVar7;
  undefined1 auStackY_1a8 [32];
  uint uStack_16c;
  UDS_InteractionAbility_NPCCamp *local_168;
  FDestructionSentinel local_160;
  UObject *local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = &this->InteractionAbilityData;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPCCamp::OnChangedMainPlayerMoveMode",0x3b,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x16b,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if (*param_1 == Idle) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (pUVar4[3].field_0x18 == '\x01') {
      pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pUVar4[3].field_0x18 = 0;
      pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar4[3].field_0x20,
                 (FWriteAccessScope *)&local_160);
      local_148 = pUVar4 + 4;
      puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_148);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_NPCCamp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_InteractionAbility_NPCCamp *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[3] = 0;
        local_168 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_InteractionAbility_NPCCamp *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_168);
        puVar5[4] = OnReceiveCampSeatSitDownResponse;
        puVar5[5] = (ulonglong)uStack_16c << 0x20;
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar1 = *(int *)&pUVar7[2].field_0x10;
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FDS_PlayerSkillService::SendCampSeatSitDownRequest
                ((ulong64 *)&pUVar7[2].field_0x8,(int *)&pUVar4[2].field_0x18,iVar1);
    }
  }
  return;
}

// OnCompleteLoadChairActor @ 14b7fa910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCCamp::OnCompleteLoadChairActor(UDS_InteractionAbility_NPCCamp *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UWorld *this_00;
  AActor *pAVar7;
  UObject *pUVar8;
  FDS_CampBaseTableRow *pFVar9;
  ADS_PartsSystemActor *this_01;
  longlong *plVar10;
  undefined1 auStackY_238 [32];
  uint uVar11;
  wchar_t *pwVar12;
  EDS_ClientResourceType local_1f8 [8];
  FWeakObjectPtr local_1f0;
  AActor *local_1e8;
  FSoftObjectPath local_1e0;
  undefined1 local_1b8 [112];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_NPCCamp::OnCompleteLoadChairActor",0x38,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x21c,L"InteractionAbilityData is nullptr.");
      if ((UClass *)local_148._padding_ != (UClass *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_1f8[0] = PartsSystemActor;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_1f8);
    return;
  }
  local_1f8[0] = PartsSystemActor;
  UDS_CommonSetting::GetClientBPPath(&local_1e0,local_1f8);
  if (local_1e0.AssetPath.PackageName == (FName)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_NPCCamp::OnCompleteLoadChairActor",0x38,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x224,L"partsSystemActorBPPath is invalid.");
      if ((UClass *)local_148._padding_ != (UClass *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_1f8[0] = PartsSystemActor;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_1f8);
    goto LAB_14b7fae66;
  }
  pUVar5 = (UClass *)FSoftObjectPath::ResolveObject(&local_1e0);
  if (pUVar5 == (UClass *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)pUVar5;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_NPCCamp::OnCompleteLoadChairActor",0x38,Yes);
      pwVar12 = L"partsSystemActorBPObj is nullptr.";
      uVar11 = 0x22c;
LAB_14b7fae11:
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar11,pwVar12);
LAB_14b7fae2b:
      if ((UClass *)local_148._padding_ != (UClass *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_InteractionAbility_NPCCamp::OnCompleteLoadChairActor",0x38,Yes);
        pwVar12 = L"partsSystemActorBPClass is nullptr.";
        uVar11 = 0x234;
        goto LAB_14b7fae11;
      }
      goto LAB_14b7fae3c;
    }
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_1b8);
    local_1b8[0x32] = local_1b8[0x32] | 4;
    local_1b8[0x30] = AlwaysSpawn;
    local_1b8[0x31] = MultiplyWithRoot;
    local_1b8._16_8_ = (AActor *)0x0;
    local_1b8._24_8_ = (APawn *)0x0;
    pAVar7 = UWorld::SpawnActor(this_00,pUVar5,&this->ChairSpawnTM,
                                (FActorSpawnParameters *)local_1b8);
    if (pAVar7 == (AActor *)0x0) {
LAB_14b7fabba:
      pAVar7 = (AActor *)0x0;
    }
    else {
      pUVar5 = Z_Construct_UClass_ADS_PartsSystemActor_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pAVar7->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_14b7fabba;
    }
    if (local_1b8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1b8 + 0x50);
      if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1b8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    local_1e8 = pAVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar7 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar7);
    }
    FWeakObjectPtr::operator=(&(this->ChairActor).WeakPtr,(FObjectPtr)&local_1e8);
    bVar2 = TWeakObjectPtr<ADS_PartsSystemActor,FWeakObjectPtr>::UEOpEquals
                      (&this->ChairActor,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_InteractionAbility_NPCCamp::OnCompleteLoadChairActor",0x38,Yes);
        pwVar12 = L"ChairActor is nullptr.";
        uVar11 = 0x23c;
        goto LAB_14b7fae11;
      }
    }
    else {
      FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      UDS_NPCCampData::GetData((ulong64)&local_1f0);
      bVar2 = TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> *)&local_1f0,(void *)0x0);
      if (!bVar2) {
        pUVar8 = FWeakObjectPtr::Get(&local_1f0);
        pFVar9 = FDS_CampBaseTableRow::Get((longlong)*(int *)&pUVar8[4].field_0x1c,true);
        if (pFVar9 != (FDS_CampBaseTableRow *)0x0) {
          this_01 = (ADS_PartsSystemActor *)FWeakObjectPtr::Get(&(this->ChairActor).WeakPtr);
          ADS_PartsSystemActor::SetPresetID(this_01,pFVar9->ID_ResourceMesh);
          pAVar7 = (AActor *)FWeakObjectPtr::Get(&(this->ChairActor).WeakPtr);
          UGameplayStatics::FinishSpawningActor(pAVar7,&this->ChairSpawnTM,MultiplyWithRoot);
          goto LAB_14b7fae66;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7fae3c;
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_InteractionAbility_NPCCamp::OnCompleteLoadChairActor",0x38,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_148.Ptr,0x24d,L"campBaseTable is nullptr. (%d)");
        goto LAB_14b7fae2b;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_InteractionAbility_NPCCamp::OnCompleteLoadChairActor",0x38,Yes);
        pwVar12 = L"npcCampData is nullptr.";
        uVar11 = 0x244;
        goto LAB_14b7fae11;
      }
    }
  }
LAB_14b7fae3c:
  local_1f8[0] = PartsSystemActor;
  pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar4,(FGameplayTag *)&this->_padding_,local_1f8);
LAB_14b7fae66:
  if (local_1e0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnDeactivateAbility @ 14b7fbc10

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

void __thiscall
UDS_InteractionAbility_NPCCamp::OnDeactivateAbility
          (UDS_InteractionAbility_NPCCamp *this,bool *param_1)

{
  bool bVar1;
  FTimerManager *pFVar2;
  FTimerData *pFVar3;
  FGameplayTag *pFVar4;
  UDS_EntityManager *pUVar5;
  UObject *pUVar6;
  UDS_NPCCampData *this_00;
  UDS_WindowManager *this_01;
  TRotator<double> *pTVar7;
  AActor *this_02;
  TSharedPtr<FStreamableHandle,1> *pTVar8;
  FWeakObjectPtr local_res8 [2];
  ulonglong local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_158;
  FSharedReferencer<1> FStack_150;
  TRotator<double> local_148;
  TQuat<double> local_128;
  undefined1 local_108 [192];
  undefined1 local_48 [32];
  
  if ((this->CampEndTimer).Handle != 0) {
    pFVar2 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(pFVar2,&this->CampEndTimer);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar2,(FTimerHandle)(this->CampEndTimer).Handle);
    }
    (this->CampEndTimer).Handle = 0;
  }
  if ((this->SpawnChairActorTimer).Handle != 0) {
    pFVar2 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(pFVar2,&this->SpawnChairActorTimer);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar2,(FTimerHandle)(this->SpawnChairActorTimer).Handle);
    }
    (this->SpawnChairActorTimer).Handle = 0;
  }
  local_res8[0].ObjectIndex._0_1_ = 0x4d;
  pFVar4 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar4);
  pUVar5 = UDS_EntityManager::GetInst();
  if (pUVar5 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnRemoveEntityEvent,
               this);
  }
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (!bVar1) {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_NPCCampData::GetData((ulong64)&local_res20);
    bVar1 = TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
    if (!bVar1) {
      pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      this_00 = (UDS_NPCCampData *)FWeakObjectPtr::Get(&local_res20);
      local_res8[0].ObjectIndex = 0;
      local_res8[0].ObjectSerialNumber = 0;
      UDS_NPCCampData::SetOccupantEntityID
                (this_00,(int *)&pUVar6[2].field_0x18,(ulong64 *)local_res8);
    }
    if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &UDS_SyncSendComponent::ChangedMainPlayerMoveModeDelegate,this);
      this_01 = UDS_WindowManager::GetInst();
      if (this_01 != (UDS_WindowManager *)0x0) {
        local_res8[0] = (FWeakObjectPtr)((ulonglong)local_res8[0] & 0xffffffff00000000);
        local_res18 = local_res18 & 0xffffffff00000000;
        UDS_WindowManager::CloseWindow(this_01,CampAction,(uint *)&local_res18,(float *)local_res8);
      }
      pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      if (pUVar6[3].field_0x19 == '\0') {
        FDS_PlayerSkillService::SendCampSeatStandUpRequest();
      }
    }
    pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6);
  }
  bVar1 = TWeakObjectPtr<ADS_PartsSystemActor,FWeakObjectPtr>::UEOpEquals
                    (&this->ChairActor,(void *)0x0);
  if (!bVar1) {
    FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_108);
    local_108._40_8_ = this->_padding_;
    local_108._72_8_ = (this->ChairSpawnTM).Translation.XY.m128d_f64[0];
    local_108._80_8_ = (this->ChairSpawnTM).Translation.XY.m128d_f64[1];
    local_148.Roll = (this->ChairSpawnTM).Translation.ZW.m128d_f64[0];
    local_128.Z = (this->ChairSpawnTM).Rotation.ZW.m128d_f64[0];
    local_128.W = (this->ChairSpawnTM).Rotation.ZW.m128d_f64[1];
    local_128.X = (this->ChairSpawnTM).Rotation.XY.m128d_f64[0];
    local_128.Y = (this->ChairSpawnTM).Rotation.XY.m128d_f64[1];
    local_108._0_4_ = 0xe292;
    local_108._88_8_ = local_148.Roll;
    pTVar7 = UE::Math::TQuat<double>::Rotator(&local_128,&local_148);
    local_108._96_8_ = pTVar7->Pitch;
    local_108._104_8_ = pTVar7->Yaw;
    local_108._112_8_ = pTVar7->Roll;
    UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_108);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    if ((void *)local_48._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_108._184_8_);
    if ((FScriptContainerElement *)local_108._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._24_8_);
    }
    this_02 = (AActor *)FWeakObjectPtr::Get(&(this->ChairActor).WeakPtr);
    AActor::Destroy(this_02,false,true);
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res18);
    (this->ChairActor).WeakPtr = local_res8[0];
  }
  pTVar8 = &this->AsyncLoadHandle_ChairActor;
  if (pTVar8->Object != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(pTVar8->Object);
    local_158 = 0;
    FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar8 != (TSharedPtr<FStreamableHandle,1> *)&local_158) {
      pTVar8->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncLoadHandle_ChairActor).SharedReferenceCount,&FStack_150);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_150.ReferenceController);
  }
  return;
}

// OnOpenWindow_CampAction @ 14b800b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCCamp::OnOpenWindow_CampAction
          (UDS_InteractionAbility_NPCCamp *this,UDS_UserWidget *param_1)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *pUVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_01;
  UObject *pUVar7;
  ADS_PlayerController *this_02;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  undefined1 auStackY_2e8 [32];
  EDS_AbilityDeactivateType local_2b8 [8];
  FWeakObjectPtr local_2b0;
  FWeakObjectPtr local_2a8;
  UDS_UserWidget *local_2a0;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_InteractionAbility_NPCCamp::OnOpenWindow_CampAction",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_278.Ptr,0x1c7,L"InWidget is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    local_2b8[0] = Cancel;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_2b8);
  }
  else {
    this_00 = &this->InteractionAbilityData;
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_InteractionAbility_NPCCamp::OnOpenWindow_CampAction",0x37,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_158.Ptr,0x1ce,L"InteractionAbilityData is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      local_2b8[1] = 2;
      pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_)
      ;
      UDS_AbilitySystemComponent::DeactivateAbilityByTag
                (pUVar4,(FGameplayTag *)&this->_padding_,local_2b8 + 1);
    }
    else {
      pFVar5 = ::operator_new(0x30);
      pFVar9 = (FDS_ViewModelContext *)0x0;
      pFVar8 = pFVar9;
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
        ((atomic<int> *)&pFVar5[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
        *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
        (pFVar5->ViewModelName).ComparisonIndex = 0;
        (pFVar5->ViewModelName).Number = 0;
        pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_HUD_Camp__6B_;
        pFVar5[1]._padding_ = 0;
        *(atomic<int> *)&pFVar5[1].DerivedStaticStruct = (atomic<int>)0x0;
        pFVar8 = pFVar5;
      }
      pFVar5 = ::operator_new(0x20);
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar5->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_HUD_Camp__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar8;
        pFVar9 = pFVar5;
      }
      if ((pFVar8 == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar6 = FDS_ViewModelContext_HUD_Camp::StaticStruct();
      *(UScriptStruct **)&pFVar8->DerivedStaticStruct = pUVar6;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar9 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar9->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_298.Object = pFVar8;
        local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_298);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_298.SharedReferenceCount.ReferenceController);
      }
      pFVar8->ViewModelTemplateKey = HUD_Camp;
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pFVar8[1]._padding_ = *(longlong *)&pUVar7[2].field_0x8;
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      *(atomic<int> *)&pFVar8[1].DerivedStaticStruct = *(atomic<int> *)&pUVar7[2].field_0x10;
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar9->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_288.Object = pFVar8;
      local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_2b0.ObjectIndex = 0;
      local_2b0.ObjectSerialNumber = 0;
      local_2a0 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_2b0,(FObjectPtr)&local_2a0);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_2b0,&local_288,false);
      ADS_PlayerController::GetPlayerController();
      bVar2 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_2a8,
                         (void *)0x0);
      if (!bVar2) {
        this_02 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_2a8);
        ADS_PlayerController::SetActionModeCursor(this_02,true);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar9);
    }
  }
  return;
}

// OnPostActivateAbility @ 14b803550

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

void __thiscall
UDS_InteractionAbility_NPCCamp::OnPostActivateAbility(UDS_InteractionAbility_NPCCamp *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  FTimerManager *pFVar3;
  FTimerData *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_EntityManager *pUVar6;
  UObject *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UObject *pUVar10;
  UDS_AbilitySystemComponent *this_01;
  undefined1 auStackY_1c8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  EDS_AbilityDeactivateType local_198 [16];
  code *local_188;
  ulonglong uStack_180;
  undefined1 local_178 [16];
  FMRSWRecursiveAccessDetector *local_168;
  char local_160;
  UObject *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((this->CampEndTimer).Handle != 0) {
    pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar4 = FTimerManager::FindTimer(pFVar3,&this->CampEndTimer);
    if (pFVar4 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar3,(FTimerHandle)(this->CampEndTimer).Handle);
    }
    (this->CampEndTimer).Handle = 0;
  }
  if ((this->SpawnChairActorTimer).Handle != 0) {
    pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar4 = FTimerManager::FindTimer(pFVar3,&this->SpawnChairActorTimer);
    if (pFVar4 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar3,(FTimerHandle)(this->SpawnChairActorTimer).Handle);
    }
    (this->SpawnChairActorTimer).Handle = 0;
  }
  this_00 = &this->InteractionAbilityData;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14b80383a;
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_NPCCamp::OnPostActivateAbility",0x35,Yes);
    pwVar12 = L"InteractionAbilityData is nullptr.";
    uVar11 = 0x5a;
  }
  else {
    pUVar6 = UDS_EntityManager::GetInst();
    if (pUVar6 != (UDS_EntityManager *)0x0) {
      uStack_180 = uStack_180 & 0xffffffff00000000;
      local_188 = OnRemoveEntity;
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_NPCCamp>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                  *)&pUVar6->OnRemoveEntityEvent,(UDS_InteractionAbility_NPCCamp *)local_178,
                 (pmf_da535f6a *)this);
      if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_188 = OnReceiveCampSeatSitDownResponse;
        uStack_180 = uStack_180 & 0xffffffff00000000;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar7[3].field_0x20,
                   (FWriteAccessScope *)(local_178 + 8));
        local_158 = pUVar7 + 4;
        puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_158);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_NPCCamp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar8[3] = 0;
          local_178._0_8_ = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)local_178);
          puVar8[4] = local_188;
          puVar8[5] = uStack_180;
        }
        if (local_160 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (local_168,(FDestructionSentinel *)(local_178 + 8));
        }
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar1 = *(int *)&pUVar10[2].field_0x10;
        pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        FDS_PlayerSkillService::SendCampSeatSitDownRequest
                  ((ulong64 *)&pUVar10[2].field_0x8,(int *)&pUVar7[2].field_0x18,iVar1);
        return;
      }
      bVar2 = DoCamp(this);
      if (bVar2) {
        return;
      }
      goto LAB_14b80383a;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14b80383a;
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_NPCCamp::OnPostActivateAbility",0x35,Yes);
    pwVar12 = L"entityMng is nullptr.";
    uVar11 = 99;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar11,pwVar12);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14b80383a:
  local_198[0] = Cancel;
  this_01 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_01,(FGameplayTag *)&this->_padding_,local_198);
  return;
}

// OnReceiveCampSeatSitDownResponse @ 14b8086f0

void __thiscall
UDS_InteractionAbility_NPCCamp::OnReceiveCampSeatSitDownResponse
          (UDS_InteractionAbility_NPCCamp *this)

{
  bool bVar1;
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res10 [24];
  
  bVar1 = DoCamp(this);
  if (!bVar1) {
    local_res10[0] = Cancel;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_res10);
  }
  return;
}

// OnRemoveEntity @ 14b8089c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCCamp::OnRemoveEntity
          (UDS_InteractionAbility_NPCCamp *this,ulong64 *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *this_00;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPCCamp::OnRemoveEntity",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x182,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_148);
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(ulong64 *)&pUVar3[2].field_0x8 == *param_1) {
      OnCampEndTimer(this);
    }
  }
  return;
}

// OnSpawnChairActorTimer @ 14b808af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCCamp::OnSpawnChairActorTimer(UDS_InteractionAbility_NPCCamp *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *this_00;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = SpawnChairActor(this);
  if (!bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPCCamp::OnSpawnChairActorTimer",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1a9,L"Failed to SpawnChairActor().")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_148);
  }
  return;
}

// PlayDespawnChairEffect @ 14b80d810

void __thiscall
UDS_InteractionAbility_NPCCamp::PlayDespawnChairEffect(UDS_InteractionAbility_NPCCamp *this)

{
  TRotator<double> *pTVar1;
  TRotator<double> local_128;
  TQuat<double> local_108;
  undefined1 local_e8 [192];
  undefined1 local_28 [32];
  
  FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_e8);
  local_e8._40_8_ = this->_padding_;
  local_e8._72_8_ = (this->ChairSpawnTM).Translation.XY.m128d_f64[0];
  local_e8._80_8_ = (this->ChairSpawnTM).Translation.XY.m128d_f64[1];
  local_128.Roll = (this->ChairSpawnTM).Translation.ZW.m128d_f64[0];
  local_108.Z = (this->ChairSpawnTM).Rotation.ZW.m128d_f64[0];
  local_108.W = (this->ChairSpawnTM).Rotation.ZW.m128d_f64[1];
  local_108.X = (this->ChairSpawnTM).Rotation.XY.m128d_f64[0];
  local_108.Y = (this->ChairSpawnTM).Rotation.XY.m128d_f64[1];
  local_e8._0_4_ = 0xe292;
  local_e8._88_8_ = local_128.Roll;
  pTVar1 = UE::Math::TQuat<double>::Rotator(&local_108,&local_128);
  local_e8._96_8_ = pTVar1->Pitch;
  local_e8._104_8_ = pTVar1->Yaw;
  local_e8._112_8_ = pTVar1->Roll;
  UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  if ((void *)local_28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e8._184_8_);
  if ((FScriptContainerElement *)local_e8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._24_8_);
  }
  return;
}

// PlaySpawnChairEffect @ 14b80ef30

void __thiscall
UDS_InteractionAbility_NPCCamp::PlaySpawnChairEffect(UDS_InteractionAbility_NPCCamp *this)

{
  TRotator<double> *pTVar1;
  TRotator<double> local_128;
  TQuat<double> local_108;
  undefined1 local_e8 [192];
  undefined1 local_28 [32];
  
  FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_e8);
  local_e8._40_8_ = this->_padding_;
  local_e8._72_8_ = (this->ChairSpawnTM).Translation.XY.m128d_f64[0];
  local_e8._80_8_ = (this->ChairSpawnTM).Translation.XY.m128d_f64[1];
  local_128.Roll = (this->ChairSpawnTM).Translation.ZW.m128d_f64[0];
  local_108.Z = (this->ChairSpawnTM).Rotation.ZW.m128d_f64[0];
  local_108.W = (this->ChairSpawnTM).Rotation.ZW.m128d_f64[1];
  local_108.X = (this->ChairSpawnTM).Rotation.XY.m128d_f64[0];
  local_108.Y = (this->ChairSpawnTM).Rotation.XY.m128d_f64[1];
  local_e8._0_4_ = 0xe291;
  local_e8._88_8_ = local_128.Roll;
  pTVar1 = UE::Math::TQuat<double>::Rotator(&local_108,&local_128);
  local_e8._96_8_ = pTVar1->Pitch;
  local_e8._104_8_ = pTVar1->Yaw;
  local_e8._112_8_ = pTVar1->Roll;
  UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  if ((void *)local_28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e8._184_8_);
  if ((FScriptContainerElement *)local_e8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._24_8_);
  }
  return;
}

// SpawnChairActor @ 14b811610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_NPCCamp::SpawnChairActor(UDS_InteractionAbility_NPCCamp *this)

{
  code *pcVar1;
  double dVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FName *pFVar7;
  double *pdVar8;
  UAssetManager *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedPtr<FStreamableHandle,1> *pTVar12;
  TRotator<double> *pTVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_2d8 [32];
  EDS_ClientResourceType local_288 [8];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_280;
  undefined1 local_270 [8];
  FDelegateAllocation local_268;
  undefined1 local_258 [24];
  FWeakObjectPtr local_240;
  FName local_238 [2];
  code *local_228;
  FMRSWRecursiveAccessDetector *pFStack_220;
  char *local_218;
  FString local_208;
  undefined1 local_1f8 [16];
  double local_1e8;
  FDelegateAllocation *pFStack_1e0;
  TSharedPtr<FStreamableHandle,1> local_1d8;
  FSoftObjectPath local_1c8;
  undefined1 local_1a8 [96];
  double local_148;
  double dStack_140;
  double local_138;
  FSharedReferencer<1> local_f0;
  undefined1 local_e8 [64];
  void *local_a8;
  wchar_t *local_a0;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  (**(code **)(*(longlong *)this->_padding_ + 0x80))();
  bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_240,(void *)0x0
                    );
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_a8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_1a8,
                 "UDS_InteractionAbility_NPCCamp::SpawnChairActor",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_a0,0x1e9,L"sourceSKM is nullptr. (%llu)");
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
    }
    bVar3 = false;
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&local_240);
    pcVar1 = *(code **)(*(longlong *)pUVar6 + 0x520);
    pFVar7 = ::FName::FName(local_238,L"Chair_Attach");
    pdVar8 = (double *)(*pcVar1)(pUVar6,local_88,*pFVar7);
    local_288[0] = PartsSystemActor;
    dVar2 = pdVar8[1];
    (this->ChairSpawnTM).Rotation.XY.m128d_f64[0] = *pdVar8;
    (this->ChairSpawnTM).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = pdVar8[3];
    (this->ChairSpawnTM).Rotation.ZW.m128d_f64[0] = pdVar8[2];
    (this->ChairSpawnTM).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = pdVar8[5];
    (this->ChairSpawnTM).Translation.XY.m128d_f64[0] = pdVar8[4];
    (this->ChairSpawnTM).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = pdVar8[7];
    (this->ChairSpawnTM).Translation.ZW.m128d_f64[0] = pdVar8[6];
    (this->ChairSpawnTM).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = pdVar8[9];
    (this->ChairSpawnTM).Scale3D.XY.m128d_f64[0] = pdVar8[8];
    (this->ChairSpawnTM).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = pdVar8[0xb];
    (this->ChairSpawnTM).Scale3D.ZW.m128d_f64[0] = pdVar8[10];
    (this->ChairSpawnTM).Scale3D.ZW.m128d_f64[1] = dVar2;
    UDS_CommonSetting::GetClientBPPath(&local_1c8,local_288);
    if (local_1c8.AssetPath.PackageName == (FName)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_a8 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_1a8,
                   "UDS_InteractionAbility_NPCCamp::SpawnChairActor",0x2f,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_a0,499,L"partsSystemActorBPPath is invalid.");
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
      }
      bVar3 = false;
    }
    else {
      local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.ArrayNum = 0;
      local_280.ArrayMax = 0;
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_280.AllocatorInstance,&local_280.ArrayMax);
      _Src.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
      local_280.ArrayNum = iVar4 + 1;
      *(FName *)&local_280.AllocatorInstance.Data[(longlong)iVar4 * 0x20].field_0x0 =
           local_1c8.AssetPath.PackageName;
      *(FName *)(local_280.AllocatorInstance.Data + (longlong)iVar4 * 0x20 + 8) =
           local_1c8.AssetPath.AssetName;
      pFVar14 = local_280.AllocatorInstance.Data + (longlong)iVar4 * 0x20 + 0x10;
      *(FScriptContainerElement **)pFVar14 = (FScriptContainerElement *)0x0;
      *(int *)(pFVar14 + 8) = local_1c8.SubPathString.Data.ArrayNum;
      if (local_1c8.SubPathString.Data.ArrayNum == 0) {
        *(int *)(pFVar14 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_1c8.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,
                   local_1c8.SubPathString.Data.ArrayNum,(int *)(pFVar14 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar14,_Src.Data,(longlong)local_1c8.SubPathString.Data.ArrayNum);
      }
      pUVar9 = UAssetManager::Get();
      local_258._0_4_ = 0x1fa;
      local_258._4_4_ = 0x45;
      local_258._8_8_ =
           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPCCamp.cpp"
      ;
      local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_258._16_8_ = "bool __cdecl UDS_InteractionAbility_NPCCamp::SpawnChairActor(void)";
      local_208.Data.ArrayNum = 0;
      local_208.Data.ArrayMax = 0;
      local_228 = OnCompleteLoadChairActor;
      pFStack_220 = (FMRSWRecursiveAccessDetector *)
                    ((ulonglong)local_1d8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      local_270 = (undefined1  [8])0x0;
      local_268.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_268.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_270,
                 (FWriteAccessScope *)local_1f8);
      pFStack_1e0 = &local_268;
      puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_268);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_NPCCamp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar10[3] = 0;
        local_238[0] = (FName)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)local_238);
        puVar10[4] = local_228;
        puVar10[5] = pFStack_220;
      }
      if (local_1e8._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_1f8._8_8_,(FDestructionSentinel *)local_1f8
                  );
      }
      local_228._4_4_ = local_258._4_4_;
      local_228._0_4_ = local_258._0_4_;
      pFStack_220 = (FMRSWRecursiveAccessDetector *)local_258._8_8_;
      local_218 = (char *)local_258._16_8_;
      pTVar12 = FStreamableManager::
                RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                          (&pUVar9->StreamableManager,&local_1d8,&local_280,
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_270,0,
                           false,false,&local_208,(FSourceLocation *)&local_228);
      if (&this->AsyncLoadHandle_ChairActor != pTVar12) {
        (this->AsyncLoadHandle_ChairActor).Object = pTVar12->Object;
        pTVar12->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AsyncLoadHandle_ChairActor).SharedReferenceCount,
                   &pTVar12->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_1d8.SharedReferenceCount.ReferenceController._4_4_,
                          local_1d8.SharedReferenceCount.ReferenceController._0_4_));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_270,
                 (FWriteAccessScope *)local_258);
      if ((local_268.DelegateSize != 0) &&
         (local_268.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_268.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_268,0,0,0x10);
        local_268.DelegateSize = 0;
      }
      if (local_258[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_258._8_8_,(FDestructionSentinel *)local_258
                  );
      }
      if (local_268.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_268.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_270);
      FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_1a8);
      local_1a8._40_8_ = this->_padding_;
      local_1a8._72_8_ = (this->ChairSpawnTM).Translation.XY.m128d_f64[0];
      local_1a8._80_8_ = (this->ChairSpawnTM).Translation.XY.m128d_f64[1];
      local_258._16_8_ = (this->ChairSpawnTM).Translation.ZW.m128d_f64[0];
      local_1e8 = (this->ChairSpawnTM).Rotation.ZW.m128d_f64[0];
      pFStack_1e0 = (FDelegateAllocation *)(this->ChairSpawnTM).Rotation.ZW.m128d_f64[1];
      local_1f8._0_8_ = (this->ChairSpawnTM).Rotation.XY.m128d_f64[0];
      local_1f8._8_8_ = (this->ChairSpawnTM).Rotation.XY.m128d_f64[1];
      local_1a8._0_4_ = 0xe291;
      local_1a8._88_8_ = local_258._16_8_;
      pTVar13 = UE::Math::TQuat<double>::Rotator
                          ((TQuat<double> *)local_1f8,(TRotator<double> *)local_258);
      local_148 = pTVar13->Pitch;
      dStack_140 = pTVar13->Yaw;
      local_138 = pTVar13->Roll;
      UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_1a8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
      if ((void *)local_e8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f0.ReferenceController);
      if ((FScriptContainerElement *)local_1a8._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1a8._24_8_);
      }
      bVar3 = true;
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_280.AllocatorInstance.Data,local_280.ArrayNum);
      if ((FSoftObjectPath *)local_280.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_280.AllocatorInstance.Data);
      }
    }
    if (local_1c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// TryActivate @ 14b814030

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
UDS_InteractionAbility_NPCCamp::TryActivate
          (ulong64 *param_1,ulong64 *param_2,FDS_CampSeatInfo *param_3,int param_4)

{
  double dVar1;
  undefined4 uVar2;
  bool bVar3;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_CampBaseTableRow *pFVar6;
  undefined1 auStackY_1b8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  EDS_AbilityTagType local_178 [8];
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168;
  undefined8 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InteractionAbility_NPCCamp::TryActivate",0x2b,Yes);
    pwVar8 = L"Invalid parameter.";
    uVar7 = 0xf4;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionAbility_NPCCamp::TryActivate",0x2b,Yes);
      pwVar8 = L"sourceEntity is nullptr. (%llu)";
      uVar7 = 0xfb;
LAB_14b8140e0:
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar7,pwVar8);
      goto LAB_14b814349;
    }
    local_178[0] = Interaction_NPCCamp;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCCamp>
              ((ulong64 *)&local_170,(EDS_AbilityTagType *)param_1);
    bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> *)
                       &local_170,(void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionAbility_NPCCamp::TryActivate",0x2b,Yes);
      pwVar8 = L"abilityData is nullptr.";
      uVar7 = 0x102;
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&local_170);
      *(ulong64 *)&pUVar5[2].field_0x8 = *param_2;
      pUVar5 = FWeakObjectPtr::Get(&local_170);
      uVar2 = *(undefined4 *)&param_3->field_0x4;
      dVar1 = (param_3->Position).field0_0x0._s_0.X;
      *(int *)&pUVar5[2].field_0x18 = param_3->Index;
      *(undefined4 *)&pUVar5[2].field_0x1c = uVar2;
      *(double *)&pUVar5[2].field_0x20 = dVar1;
      dVar1 = (param_3->Position).field0_0x0._s_0.Z;
      *(double *)(pUVar5 + 3) = (param_3->Position).field0_0x0._s_0.Y;
      *(double *)&pUVar5[3].field_0x8 = dVar1;
      *(ulong64 *)&pUVar5[3].field_0x10 = param_3->OccupantEntityID;
      pUVar5 = FWeakObjectPtr::Get(&local_170);
      *(int *)&pUVar5[2].field_0x10 = param_4;
      UDS_NPCCampData::GetData((ulong64)&local_168);
      bVar3 = TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> *)&local_168,(void *)0x0);
      if (!bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&local_168);
        pFVar6 = FDS_CampBaseTableRow::Get((longlong)*(int *)&pUVar5[4].field_0x1c,true);
        if (pFVar6 != (FDS_CampBaseTableRow *)0x0) {
          pUVar5 = FWeakObjectPtr::Get(&local_170);
          local_160 = 0;
          local_178[0] = Interaction_NPCCamp;
          pUVar5[3].field_0x1a = pFVar6->UseChair;
          bVar3 = FDS_EntityBase::TryActivateAbility
                            (this,local_178,(TObjectPtr<UWN_AbilityContext>)&local_160);
          return bVar3;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_InteractionAbility_NPCCamp::TryActivate",0x2b,Yes);
        pwVar8 = L"campBaseTable is nullptr. (%d)";
        uVar7 = 0x116;
        goto LAB_14b8140e0;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionAbility_NPCCamp::TryActivate",0x2b,Yes);
      pwVar8 = L"npcCampData is nullptr.";
      uVar7 = 0x10e;
    }
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar7,pwVar8);
LAB_14b814349:
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

