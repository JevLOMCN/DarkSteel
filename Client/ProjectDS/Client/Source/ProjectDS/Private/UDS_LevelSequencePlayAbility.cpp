// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b4dbc30

UClass * __cdecl UDS_LevelSequencePlayAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelSequencePlayAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelSequencePlayAbility",
               &Z_Registration_Info_UClass_UDS_LevelSequencePlayAbility.InnerSingleton,
               StaticRegisterNativesUDS_LevelSequencePlayAbility,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LevelSequencePlayAbility>,
               InternalVTableHelperCtorCaller<UDS_LevelSequencePlayAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelSequencePlayAbility.InnerSingleton;
}

// UDS_LevelSequencePlayAbility @ 14b4dfab0

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

UDS_LevelSequencePlayAbility * __thiscall
UDS_LevelSequencePlayAbility::UDS_LevelSequencePlayAbility
          (UDS_LevelSequencePlayAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  this->LvelSequencePlayStartTime = 0.0;
  this->MinimumPlaybackTime = 0.0;
  this->bIsStartSequenced = false;
  this->bRemoveReserved = false;
  this->IsFinishLevelSequeceResourceLoad = false;
  (this->LevelSequencePlayAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_LevelSequencePlayAbility @ 14b4dfb10

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

UDS_LevelSequencePlayAbility * __thiscall
UDS_LevelSequencePlayAbility::UDS_LevelSequencePlayAbility
          (UDS_LevelSequencePlayAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  this->LvelSequencePlayStartTime = 0.0;
  this->MinimumPlaybackTime = 0.0;
  this->bIsStartSequenced = false;
  this->bRemoveReserved = false;
  this->IsFinishLevelSequeceResourceLoad = false;
  (this->LevelSequencePlayAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_LevelSequencePlayAbility @ 14b4e0330

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
UDS_LevelSequencePlayAbility::~UDS_LevelSequencePlayAbility(UDS_LevelSequencePlayAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e1e50

UClass * __cdecl UDS_LevelSequencePlayAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelSequencePlayAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelSequencePlayAbility",
               &Z_Registration_Info_UClass_UDS_LevelSequencePlayAbility.InnerSingleton,
               StaticRegisterNativesUDS_LevelSequencePlayAbility,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LevelSequencePlayAbility>,
               InternalVTableHelperCtorCaller<UDS_LevelSequencePlayAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelSequencePlayAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_LevelSequencePlayAbility @ 14b4e2800

void __cdecl UDS_LevelSequencePlayAbility::StaticRegisterNativesUDS_LevelSequencePlayAbility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_LevelSequencePlayAbility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnEndPlayLevelSequence @ 14b4e3aa0

void __cdecl
UDS_LevelSequencePlayAbility::execOnEndPlayLevelSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnEndPlayLevelSequence((UDS_LevelSequencePlayAbility *)param_1);
  return;
}

// ChangeLevelSequence @ 14b7dbb80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LevelSequencePlayAbility::ChangeLevelSequence(UDS_LevelSequencePlayAbility *this)

{
  bool bVar1;
  UDS_AbilitySystemComponent *pUVar2;
  UObject *pUVar3;
  FDS_ResourceSequenceTableRow *pFVar4;
  UAssetManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FString *pFVar8;
  UDS_WindowManager *this_00;
  UDS_LoadingEvent *pUVar9;
  UDS_FadeInOutData *this_01;
  UDS_LevelSequencePlayAbility *local_res8;
  FWeakObjectPtr local_res10;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  FString local_c8;
  undefined1 local_b8 [32];
  FString local_98;
  code *local_88;
  FMRSWRecursiveAccessDetector *pFStack_80;
  char *local_78;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  TSharedPtr<FStreamableHandle,1> local_48;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->LevelSequencePlayAbilityData).WeakPtr);
  if (!bVar1) {
    local_res8 = (UDS_LevelSequencePlayAbility *)CONCAT71(local_res8._1_7_,2);
    pUVar2 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar2,(FGameplayTag *)&this->_padding_,(EDS_AbilityDeactivateType *)&local_res8);
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->LevelSequencePlayAbilityData).WeakPtr);
  pFVar4 = FDS_ResourceSequenceTableRow::Get((longlong)*(int *)&pUVar3[2].field_0x8,true);
  if (pFVar4 == (FDS_ResourceSequenceTableRow *)0x0) {
    local_res8 = (UDS_LevelSequencePlayAbility *)CONCAT71(local_res8._1_7_,2);
    pUVar2 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar2,(FGameplayTag *)&this->_padding_,(EDS_AbilityDeactivateType *)&local_res8);
  }
  else {
    this->IsFinishLevelSequeceResourceLoad = false;
    pUVar5 = UAssetManager::Get();
    local_b8._0_4_ = 0x137;
    local_b8._4_4_ = 0x10;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8._8_8_ =
         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_LevelSequencePlayAbility.cpp"
    ;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_b8._16_8_ = "void __cdecl UDS_LevelSequencePlayAbility::ChangeLevelSequence(void)";
    local_88 = OnFinishLevelSequenceResource;
    pFStack_80 = (FMRSWRecursiveAccessDetector *)(local_98.Data._8_8_ & 0xffffffff00000000);
    local_e8 = (undefined1  [8])0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_e0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_e0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_LevelSequencePlayAbility____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
      puVar6[4] = local_88;
      puVar6[5] = pFStack_80;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pFVar8 = FSoftObjectPath::ToString(&pFVar4->SequenceResourcePath,&local_98);
    local_88._4_4_ = local_b8._4_4_;
    local_88._0_4_ = local_b8._0_4_;
    pFStack_80 = (FMRSWRecursiveAccessDetector *)local_b8._8_8_;
    local_78 = (char *)local_b8._16_8_;
    FStreamableManager::
    RequestAsyncLoad<FString,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
              (&pUVar5->StreamableManager,&local_48,pFVar8,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_e8,0,false,false,
               &local_c8,(FSourceLocation *)&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)local_b8);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_b8[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e8);
    pUVar3 = FWeakObjectPtr::Get(&(this->LevelSequencePlayAbilityData).WeakPtr);
    if (pUVar3[2].field_0x10 == '\0') {
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 != (UDS_WindowManager *)0x0) {
        UDS_WindowManager::CloseAllWindow(this_00);
      }
    }
    pUVar9 = UDS_LoadingEvent::GetEvent();
    if (pUVar9 != (UDS_LoadingEvent *)0x0) {
      local_c8.Data._8_8_ = local_c8.Data._8_8_ & 0xffffffff00000000;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnFadeInOutPhase;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar9->FadeInOutPhaseDelegate,this);
      local_98.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      local_98.Data.ArrayNum = local_c8.Data.ArrayNum;
      local_98.Data.ArrayMax = local_c8.Data.ArrayMax;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_FadeInOutPhase),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_LevelSequencePlayAbility>
                (&pUVar9->FadeInOutPhaseDelegate,(UDS_LevelSequencePlayAbility *)&local_res8,
                 (pmf_34d55e74 *)this);
    }
    UDS_FadeInOutData::GetInst();
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      local_res8 = (UDS_LevelSequencePlayAbility *)
                   CONCAT44(local_res8._4_4_,pFVar4->FadeOutTime + pFVar4->FadeInTime);
      this_01 = (UDS_FadeInOutData *)FWeakObjectPtr::Get(&local_res10);
      UDS_FadeInOutData::StartFadeInOut(this_01,(FDS_FadeInOutInfo *)&local_res8);
    }
  }
  return;
}

// ClearVariables @ 14b7dc8f0

void __thiscall UDS_LevelSequencePlayAbility::ClearVariables(UDS_LevelSequencePlayAbility *this)

{
  this->MinimumPlaybackTime = 0.0;
  this->LvelSequencePlayStartTime = 0.0;
  this->bIsStartSequenced = false;
  this->bRemoveReserved = false;
  this->IsFinishLevelSequeceResourceLoad = false;
  return;
}

// Deactivate @ 14b7e3ab0

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

bool __cdecl UDS_LevelSequencePlayAbility::Deactivate(EDS_AbilityDeactivateType *param_1)

{
  bool bVar1;
  FDS_EntityBase *this;
  EDS_AbilityTagType local_res10 [24];
  
  this = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (this == (FDS_EntityBase *)0x0) {
    return false;
  }
  local_res10[0] = LevelSequencePlay;
  bVar1 = FDS_EntityBase::DeactivateAbility(this,local_res10,param_1);
  return bVar1;
}

// EndWithMinimumTime @ 14b7e5860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_LevelSequencePlayAbility::EndWithMinimumTime(UDS_LevelSequencePlayAbility *this)

{
  float fVar1;
  double dVar2;
  double dVar3;
  UDS_AbilitySystemComponent *this_00;
  UDS_LevelSequenceEvent *pUVar4;
  FTimerManager *this_01;
  float fVar5;
  FTimerHandle local_res8 [4];
  code *local_38;
  undefined8 uStack_30;
  
  dVar2 = this->LvelSequencePlayStartTime;
  dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
  fVar1 = this->MinimumPlaybackTime;
  fVar5 = (float)(dVar3 - dVar2);
  if (fVar5 <= fVar1) {
    local_res8[0].Handle = 0;
    this_01 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
    local_38 = OnEndPlayLevelSequence;
    FTimerManager::SetTimer<UDS_LevelSequencePlayAbility>
              (this_01,local_res8,this,(pmf_eac34d10 *)&local_38,fVar1 - fVar5,false,__real_bf800000
              );
  }
  else {
    local_res8[0].Handle._0_1_ = 1;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,(EDS_AbilityDeactivateType *)local_res8);
    pUVar4 = UDS_LevelSequenceEvent::GetEvent();
    if (pUVar4 != (UDS_LevelSequenceEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_LevelSequenceState_const_>::Broadcast
                (&pUVar4->LevelSequenceChangeStateDelegate,SequenceFinished);
      return;
    }
  }
  return;
}

// OnAbilityRetryActivate @ 14b7f4b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LevelSequencePlayAbility::OnAbilityRetryActivate(UDS_LevelSequencePlayAbility *this)

{
  UDS_LogManager *pUVar1;
  longlong lVar2;
  UDS_AbilitySystemComponent *this_00;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_LevelSequencePlayAbility::OnAbilityRetryActivate",0x34,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0xb7,L"OnAbilityRetryActivate");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  lVar2 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar2 == 0) {
    local_148[0] = Cancel;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_148);
  }
  else if (this->bIsStartSequenced == false) {
    this->bRemoveReserved = true;
  }
  else {
    EndWithMinimumTime(this);
  }
  return;
}

// OnCanActivate @ 14b7f7c70

bool __thiscall UDS_LevelSequencePlayAbility::OnCanActivate(UDS_LevelSequencePlayAbility *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr> TVar5;
  UDS_LevelSequencePlayAbilityData *this_00;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  bVar2 = UDS_GameInstance::GetIsCCSAIMode();
  if (bVar2) {
    return false;
  }
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (!bVar2) {
    return false;
  }
  pUVar3 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_LevelSequencePlayAbilityContext_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b7f7d3b;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b7f7d3b:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    bVar2 = TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->LevelSequencePlayAbilityData,(void *)0x0);
    if (bVar2) {
      local_res10.ObjectIndex._0_1_ = 0x5e;
      TVar5 = UDS_AbilityDataSet::GetAbilityData<UDS_LevelSequencePlayAbilityData>
                        ((ulong64 *)&local_res20,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->LevelSequencePlayAbilityData).WeakPtr = *TVar5.WeakPtr;
    }
    bVar2 = FWeakObjectPtr::IsValid(&(this->LevelSequencePlayAbilityData).WeakPtr);
    if (bVar2) {
      this_00 = (UDS_LevelSequencePlayAbilityData *)
                FWeakObjectPtr::Get(&(this->LevelSequencePlayAbilityData).WeakPtr);
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      bVar2 = (bool)pUVar3[1].field_0x4;
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      bVar2 = UDS_LevelSequencePlayAbilityData::InitData(this_00,*(int *)(pUVar3 + 1),bVar2);
      return bVar2;
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b7fd210

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
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UDS_LevelSequencePlayAbility::OnDeactivateAbility(UDS_LevelSequencePlayAbility *this,bool *param_1)

{
  ULevelSequencePlayer *this_00;
  char cVar1;
  UDS_LevelSequenceEvent *pUVar2;
  FGameplayTag *pFVar3;
  UDS_AbilitySystemComponent *this_01;
  UObject *pUVar4;
  UDS_HudManager *this_02;
  bool bVar5;
  bool local_res8 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  if ((*param_1 == false) &&
     (pUVar2 = UDS_LevelSequenceEvent::GetEvent(), pUVar2 != (UDS_LevelSequenceEvent *)0x0)) {
    FDS_EventDelegate<enum_EDS_LevelSequenceState_const_>::Broadcast
              (&pUVar2->LevelSequenceChangeStateDelegate,Failed);
  }
  pUVar2 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar2 != (UDS_LevelSequenceEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->LevelSequencePlayDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->LevelSequencePauseDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->LevelSequenceSkipDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->LevelSequenceJumpDelegate,this);
  }
  local_res8[0] = true;
  pFVar3 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar3);
  cVar1 = (char)this->_padding_;
  *(undefined1 *)&this->_padding_ = 0;
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x3c8))(this);
    if (cVar1 == '\0') goto LAB_14b7fd307;
LAB_14b7fd2bc:
    bVar5 = (char)this->_padding_ == '\x03';
    if (!bVar5) {
      cVar1 = (**(code **)(this->_padding_ + 0x3c8))(this);
      if (cVar1 != '\x03') goto LAB_14b7fd307;
      goto LAB_14b7fd2d5;
    }
  }
  else {
    if (cVar1 != '\x03') goto LAB_14b7fd2bc;
LAB_14b7fd2d5:
    bVar5 = (char)this->_padding_ == '\x03';
  }
  local_res8[0] = bVar5;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    this_01 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::SetIgnoreInput(this_01,(FGameplayTag *)&this->_padding_,local_res8);
  }
LAB_14b7fd307:
  UDS_NameTagDataAsset::SetDisplayNameTag(true);
  pUVar4 = FWeakObjectPtr::Get(&(this->LevelSequencePlayAbilityData).WeakPtr);
  if ((pUVar4[2].field_0x10 == '\0') &&
     (this_02 = UDS_HudManager::GetInst(), this_02 != (UDS_HudManager *)0x0)) {
    UDS_HudManager::OpenHUD(this_02);
  }
  this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 != (ULevelSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)this_00);
    (this->SequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_res8[0] = false;
  UDS_IngameState::SetLevelSequencePlaying(local_res8,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// OnEndPlayLevelSequence @ 14b7fd6e0

void __thiscall
UDS_LevelSequencePlayAbility::OnEndPlayLevelSequence(UDS_LevelSequencePlayAbility *this)

{
  UDS_AbilitySystemComponent *this_00;
  UDS_LevelSequenceEvent *pUVar1;
  EDS_AbilityDeactivateType local_res8 [32];
  
  local_res8[0] = Success;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res8);
  pUVar1 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar1 != (UDS_LevelSequenceEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_LevelSequenceState_const_>::Broadcast
              (&pUVar1->LevelSequenceChangeStateDelegate,SequenceFinished);
    return;
  }
  return;
}

// OnFadeInOutPhase @ 14b7fd740

void __thiscall
UDS_LevelSequencePlayAbility::OnFadeInOutPhase
          (UDS_LevelSequencePlayAbility *this,EDS_FadeInOutPhase param_1)

{
  bool bVar1;
  UDS_FadeInOutData *this_00;
  FWeakObjectPtr local_res18 [2];
  
  if (param_1 == Waiting) {
    if (this->IsFinishLevelSequeceResourceLoad == true) {
      UDS_FadeInOutData::GetInst();
      bVar1 = FWeakObjectPtr::IsValid(local_res18);
      if (bVar1) {
        this_00 = (UDS_FadeInOutData *)FWeakObjectPtr::Get(local_res18);
        UDS_FadeInOutData::SetFadeInOutPhase(this_00,FadeIn);
      }
    }
  }
  else if (param_1 == FadeIn) {
    PlayLevelSequence(this);
    return;
  }
  return;
}

// OnFinishLevelSequenceResource @ 14b7fd830

void __thiscall
UDS_LevelSequencePlayAbility::OnFinishLevelSequenceResource(UDS_LevelSequencePlayAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_FadeInOutData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  this->IsFinishLevelSequeceResourceLoad = true;
  UDS_FadeInOutData::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    if (*(int *)(pUVar2 + 1) == 2) {
      this_00 = (UDS_FadeInOutData *)FWeakObjectPtr::Get(local_res8);
      UDS_FadeInOutData::SetFadeInOutPhase(this_00,FadeIn);
    }
  }
  return;
}

// OnLevelSequenceJump @ 14b7ff180

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LevelSequencePlayAbility::OnLevelSequenceJump(UDS_LevelSequencePlayAbility *this,float param_1)

{
  ULevelSequencePlayer *this_00;
  FQualifiedFrameTime *pFVar1;
  int iVar2;
  float fStackX_1c;
  FQualifiedFrameTime local_68;
  FMovieSceneSequencePlaybackParams local_58;
  
  if ((0.0 < param_1) &&
     (this_00 = (this->SequencePlayer).field0_0x0.DebugPtr, this_00 != (ULevelSequencePlayer *)0x0))
  {
    pFVar1 = UMovieSceneSequencePlayer::GetCurrentTime
                       ((UMovieSceneSequencePlayer *)this_00,&local_68);
    iVar2 = (pFVar1->Rate).Denominator;
    fStackX_1c = (pFVar1->Time).SubFrame;
    if (((float)((longlong)iVar2 * (longlong)(pFVar1->Time).FrameNumber.Value) +
        (float)iVar2 * fStackX_1c) / (float)(pFVar1->Rate).Numerator < param_1) {
      local_58.Frame.FrameNumber.Value = 0;
      local_58.Frame.SubFrame = 0.0;
      local_58.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.MarkedFrame.Data.ArrayNum = 0;
      local_58.MarkedFrame.Data.ArrayMax = 0;
      local_58.Timecode.Hours = 0;
      local_58.Timecode.Minutes = 0;
      local_58.Timecode.Seconds = 0;
      local_58.Timecode.Frames = 0;
      local_58.Timecode.Subframe = 0.0;
      local_58.Timecode.bDropFrameFormat = false;
      local_58.bHasJumped = false;
      local_58.PositionType = Time;
      local_58.UpdateMethod = Jump;
      local_58.Time = param_1;
      UMovieSceneSequencePlayer::SetPlaybackPosition
                ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr,&local_58);
    }
  }
  return;
}

// OnLevelSequencePause @ 14b7ff270

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LevelSequencePlayAbility::OnLevelSequencePause(UDS_LevelSequencePlayAbility *this)

{
  TObjectPtr<ULevelSequencePlayer>_u_0 this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FRootInstanceHandle FVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UEnum *this_01;
  FMovieSceneTimeController *this_02;
  undefined4 extraout_var;
  TObjectPtr<ULevelSequencePlayer>_u_0 TStackX_10;
  TObjectPtr<ULevelSequencePlayer>_u_0 TStackX_18;
  FName FStackX_20;
  undefined1 auStack_1a8 [8];
  FDelegateAllocation FStack_1a0;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> TStack_188;
  TObjectPtr<ULevelSequencePlayer>_u_0 TStack_178;
  FDelegateAllocation FStack_170;
  FString FStack_160;
  FString FStack_150;
  FQualifiedFrameTime FStack_140;
  FDestructionSentinel FStack_130;
  FDestructionSentinel FStack_118;
  FDelegateAllocation *pFStack_100;
  FMovieSceneContext FStack_f8;
  FMovieSceneEvaluationRange FStack_78;
  
  this_00 = (TObjectPtr<ULevelSequencePlayer>_u_0)(this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00.DebugPtr == (ULevelSequencePlayer *)0x0) {
    return;
  }
  if (((*(longlong *)&(this_00.DebugPtr)->_padding_ == 0) || ((this_00.DebugPtr)->_padding_ == 0))
     || (cVar2 = (**(code **)(*(longlong *)(this_00.DebugPtr)->_padding_ + 0x10))(), cVar2 != '\0'))
  {
    bVar3 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&(this_00.DebugPtr)->_padding_);
    if (bVar3) {
      TStack_188.Object = (FMovieSceneEntitySystemRunner *)UMovieSceneSequencePlayer::Pause;
      TStack_188.SharedReferenceCount.ReferenceController._4_4_ = FStack_140.Rate.Denominator;
      TStack_188.SharedReferenceCount.ReferenceController._0_4_ = 0;
      FStack_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_170.DelegateSize = 0;
      puVar5 = UE::Core::Private::DelegateAllocate(0x30,&FStack_170);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00.DebugPtr != (ULevelSequencePlayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
        }
        puVar5[3] = 0;
        TStackX_18 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00.DebugPtr != (ULevelSequencePlayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&TStackX_18);
        puVar5[4] = TStack_188.Object;
        puVar5[5] = CONCAT44(TStack_188.SharedReferenceCount.ReferenceController._4_4_,
                             TStack_188.SharedReferenceCount.ReferenceController._0_4_);
      }
      UMovieSceneSequencePlayer::QueueLatentAction
                ((UMovieSceneSequencePlayer *)this_00.DebugPtr,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &FStack_170);
    }
    else {
      UMovieSceneSequencePlayer::GetSequenceName
                ((UMovieSceneSequencePlayer *)this_00.DebugPtr,&FStack_150,true);
      if (5 < (byte)LogMovieScene._0_1_) {
        this_01 = StaticEnum<enum_EMovieScenePlayerStatus::Type>();
        if ((this_01 == (UEnum *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xca4,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UEnum::GetNameByValue(this_01,(long64)&FStackX_20);
        ::FName::ToString(&FStackX_20,&FStack_160);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (FStack_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_160.Data.AllocatorInstance.Data);
        }
      }
      if (((TEnumAsByte<EMovieScenePlayerStatus::Type> *)&(this_00.DebugPtr)->_padding_)->Value ==
          '\x01') {
        ((TEnumAsByte<EMovieScenePlayerStatus::Type> *)&(this_00.DebugPtr)->_padding_)->Value =
             '\x05';
        this_02 = TSharedPtr<FMovieSceneTimeController,1>::operator->
                            ((TSharedPtr<FMovieSceneTimeController,1> *)
                             &(this_00.DebugPtr)->_padding_);
        FStack_140.Time = *(FFrameTime *)((longlong)&(this_00.DebugPtr)->_padding_ + 4);
        FStack_140.Rate = ((FMovieScenePlaybackPosition *)&(this_00.DebugPtr)->_padding_)->InputRate
        ;
        FMovieSceneTimeController::StopPlaying(this_02,&FStack_140);
        if (*(bool *)&(this_00.DebugPtr)->_padding_ != false) {
          *(bool *)&(this_00.DebugPtr)->_padding_ = false;
        }
        if (*(bool *)&(this_00.DebugPtr)->_padding_ != false) {
          *(bool *)&(this_00.DebugPtr)->_padding_ = false;
        }
        TStackX_10 = this_00;
        FMovieSceneRootEvaluationTemplateInstance::GetRunner
                  ((FMovieSceneRootEvaluationTemplateInstance *)&(this_00.DebugPtr)->_padding_,
                   &TStack_188);
        if (TStack_188.Object == (FMovieSceneEntitySystemRunner *)0x0) {
          `UMovieSceneSequencePlayer::Pause'::__l29::<lambda_1>::operator()(&TStackX_10);
        }
        else {
          FMovieScenePlaybackPosition::GetCurrentPositionAsRange
                    ((FMovieScenePlaybackPosition *)&(this_00.DebugPtr)->_padding_,&FStack_78);
          if ((*(longlong *)&(this_00.DebugPtr)->_padding_ != 0) &&
             ((this_00.DebugPtr)->_padding_ != 0)) {
            (**(code **)(*(longlong *)(this_00.DebugPtr)->_padding_ + 0x30))
                      ((longlong *)(this_00.DebugPtr)->_padding_,&FStack_78);
          }
          FStack_f8.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
          FStack_f8.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
          FStack_f8._padding_._0_1_ = FStack_78.EvaluationRange.LowerBound.Type.Value;
          FStack_f8._padding_._1_3_ = FStack_78.EvaluationRange.LowerBound._1_3_;
          FStack_f8._padding_._4_4_ = FStack_78.EvaluationRange.LowerBound.Value.FrameNumber.Value;
          FStack_f8._padding_._0_4_ = FStack_78.EvaluationRange.LowerBound.Value.SubFrame;
          FStack_f8._padding_._4_1_ = FStack_78.EvaluationRange.UpperBound.Type.Value;
          FStack_f8._padding_._5_3_ = FStack_78.EvaluationRange.UpperBound._1_3_;
          FStack_f8._padding_._0_4_ = FStack_78.Direction;
          FStack_f8._padding_._4_4_ = FStack_78.TimeOverride.Value;
          FStack_f8._padding_._0_4_ = FStack_78.EvaluationRange.UpperBound.Value.FrameNumber.Value;
          FStack_f8._padding_._4_4_ = FStack_78.EvaluationRange.UpperBound.Value.SubFrame;
          FStack_f8._padding_._0_4_ = FStack_78.CurrentFrameRate.Numerator;
          FStack_f8._padding_._4_4_ = FStack_78.CurrentFrameRate.Denominator;
          FStack_f8.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
          FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          FStack_f8.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
          FStack_f8.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
          FMovieSceneWarpCounter::FMovieSceneWarpCounter(&FStack_f8.RootToSequenceWarpCounter);
          FStack_f8.bHasPostRollStartTime = false;
          FStack_f8.bHasPreRollEndTime = false;
          FStack_f8.bSectionPostRoll = false;
          FStack_f8.bSectionPreRoll = false;
          FStack_f8.bSilent = false;
          FStack_f8.bHasLooped = false;
          FStack_f8.bHasJumped = false;
          FStack_f8.Status = Stopped;
          FStack_f8.PrePostRollStartEndTime.Value = -0x80000000;
          FStack_f8.HierarchicalBias = 0;
          if ((TStack_188.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          auStack_1a8 = (undefined1  [8])0x0;
          FStack_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          FStack_1a0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1a8,
                     (FWriteAccessScope *)&FStack_118);
          pFStack_100 = &FStack_1a0;
          puVar5 = UE::Core::Private::DelegateAllocate(0x28,&FStack_1a0);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar6 = FDelegateHandle::GenerateNewID();
            puVar5[2] = uVar6;
            *puVar5 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMovieSceneSequencePlayer::Pause'::`29'::<lambda_1>_>
                       ::_vftable_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
            }
            puVar5[3] = 0;
            TStack_178 = this_00;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&TStack_178);
            ((TObjectPtr<ULevelSequencePlayer>_u_0 *)(puVar5 + 4))->DebugPtr =
                 (ULevelSequencePlayer *)this_00;
          }
          if (FStack_118.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_118.Accessor,&FStack_118);
          }
          FVar4 = FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle
                            ((FMovieSceneRootEvaluationTemplateInstance *)
                             &(this_00.DebugPtr)->_padding_);
          FMovieSceneEntitySystemRunner::QueueUpdate
                    (TStack_188.Object,&FStack_f8,*(FInstanceHandle *)CONCAT44(extraout_var,FVar4),
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_1a8,None);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1a8,
                     (FWriteAccessScope *)&FStack_130);
          if ((FStack_1a0.DelegateSize != 0) &&
             (FStack_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)FStack_1a0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&FStack_1a0,0,0,0x10);
            FStack_1a0.DelegateSize = 0;
          }
          if (FStack_130.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_130.Accessor,&FStack_130);
          }
          if (FStack_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)FStack_1a0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_1a8);
          FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&FStack_f8.RootToSequenceWarpCounter);
          DestructItems<FMovieSceneNestedSequenceTransform,int>
                    ((FMovieSceneNestedSequenceTransform *)
                     FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                     FStack_f8.RootToSequenceTransform.NestedTransforms.ArrayNum);
          if ((FMovieSceneNestedSequenceTransform *)
              FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
              (FMovieSceneNestedSequenceTransform *)0x0) {
            FMemory::Free(FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data)
            ;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(TStack_188.SharedReferenceCount.ReferenceController._4_4_,
                            TStack_188.SharedReferenceCount.ReferenceController._0_4_));
      }
      if (FStack_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_150.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnLevelSequencePlay @ 14b7ff290

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LevelSequencePlayAbility::OnLevelSequencePlay(UDS_LevelSequencePlayAbility *this)

{
  ULevelSequencePlayer *this_00;
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  ULevelSequencePlayer *pUStackX_8;
  FDelegateAllocation FStack_18;
  
  this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 == (ULevelSequencePlayer *)0x0) {
    return;
  }
  bVar1 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this_00->_padding_);
  if (bVar1) {
    FStack_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_18.DelegateSize = 0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&FStack_18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (ULevelSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      puVar2[3] = 0;
      pUStackX_8 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (ULevelSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&pUStackX_8);
      puVar2[4] = UMovieSceneSequencePlayer::Play;
      puVar2[5] = (ulonglong)(uint)FStack_18._12_4_ << 0x20;
    }
    UMovieSceneSequencePlayer::QueueLatentAction
              ((UMovieSceneSequencePlayer *)this_00,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
               &FStack_18);
    return;
  }
  *(uint *)((TEnumAsByte<EMovieScenePlayerStatus::Type> *)&this_00->_padding_ + 4) =
       *(uint *)((TEnumAsByte<EMovieScenePlayerStatus::Type> *)&this_00->_padding_ + 4) & 0xfffffffe
  ;
  UMovieSceneSequencePlayer::PlayInternal((UMovieSceneSequencePlayer *)this_00);
  return;
}

// OnLevelSequenceSkip @ 14b7ff2b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LevelSequencePlayAbility::OnLevelSequenceSkip(UDS_LevelSequencePlayAbility *this)

{
  ULevelSequencePlayer *this_00;
  float fVar1;
  int iVar2;
  FQualifiedFrameTime *pFVar3;
  float fStackX_c;
  FQualifiedFrameTime local_68;
  FMovieSceneSequencePlaybackParams local_58;
  
  this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 != (ULevelSequencePlayer *)0x0) {
    pFVar3 = UMovieSceneSequencePlayer::GetDuration((UMovieSceneSequencePlayer *)this_00,&local_68);
    fStackX_c = (pFVar3->Time).SubFrame;
    iVar2 = (pFVar3->Rate).Denominator;
    fVar1 = ((float)iVar2 * fStackX_c +
            (float)((longlong)iVar2 * (longlong)(pFVar3->Time).FrameNumber.Value)) /
            (float)(pFVar3->Rate).Numerator;
    pFVar3 = UMovieSceneSequencePlayer::GetCurrentTime
                       ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr,
                        &local_68);
    iVar2 = (pFVar3->Rate).Denominator;
    fStackX_c = (pFVar3->Time).SubFrame;
    if (__real_3f000000 <
        fVar1 - ((float)iVar2 * fStackX_c +
                (float)((longlong)iVar2 * (longlong)(pFVar3->Time).FrameNumber.Value)) /
                (float)(pFVar3->Rate).Numerator) {
      local_58.Time = fVar1 - __real_3f000000;
      local_58.PositionType = Time;
      local_58.UpdateMethod = Jump;
      local_58.Frame.FrameNumber.Value = 0;
      local_58.Frame.SubFrame = 0.0;
      local_58.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.MarkedFrame.Data.ArrayNum = 0;
      local_58.MarkedFrame.Data.ArrayMax = 0;
      local_58.Timecode.Hours = 0;
      local_58.Timecode.Minutes = 0;
      local_58.Timecode.Seconds = 0;
      local_58.Timecode.Frames = 0;
      local_58.Timecode.Subframe = 0.0;
      local_58.Timecode.bDropFrameFormat = false;
      local_58.bHasJumped = false;
      UMovieSceneSequencePlayer::SetPlaybackPosition
                ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr,&local_58);
    }
  }
  return;
}

// OnPostActivateAbility @ 14b806ff0

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
UDS_LevelSequencePlayAbility::OnPostActivateAbility(UDS_LevelSequencePlayAbility *this)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  UDS_AbilitySystemComponent *pUVar4;
  UDS_LevelSequenceEvent *pUVar5;
  FGameplayTag *pFVar6;
  bool local_res8 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_28;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->LevelSequencePlayAbilityData).WeakPtr);
  if (!bVar2) {
    local_res8[0] = true;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_res8);
    return;
  }
  pUVar5 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar5 != (UDS_LevelSequenceEvent *)0x0) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)OnLevelSequencePlay;
    local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->LevelSequencePlayDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_LevelSequencePlayAbility>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar5->LevelSequencePlayDelegate,(UDS_LevelSequencePlayAbility *)local_res8,
               (pmf_eac34d10 *)this);
    local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)OnLevelSequencePause;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->LevelSequencePauseDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_LevelSequencePlayAbility>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar5->LevelSequencePauseDelegate,(UDS_LevelSequencePlayAbility *)local_res8,
               (pmf_eac34d10 *)this);
    local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)OnLevelSequenceSkip;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->LevelSequenceSkipDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_LevelSequencePlayAbility>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar5->LevelSequenceSkipDelegate,(UDS_LevelSequencePlayAbility *)local_res8,
               (pmf_eac34d10 *)this);
    local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)OnLevelSequenceJump;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->LevelSequenceJumpDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_LevelSequencePlayAbility>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &pUVar5->LevelSequenceJumpDelegate,(UDS_LevelSequencePlayAbility *)local_res8,
               (pmf_37218309 *)this);
  }
  local_res8[0] = true;
  pFVar6 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar6);
  lVar1 = this->_padding_;
  *(undefined1 *)&this->_padding_ = 3;
  if ((char)lVar1 == '\x03') {
    cVar3 = (**(code **)(this->_padding_ + 0x3c8))(this);
    if (cVar3 == '\x03') goto LAB_14b8071b7;
  }
  local_res8[0] = (char)this->_padding_ == '\x03';
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::SetIgnoreInput(pUVar4,(FGameplayTag *)&this->_padding_,local_res8);
  }
LAB_14b8071b7:
  ChangeLevelSequence(this);
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_res8[0] = true;
  UDS_IngameState::SetLevelSequencePlaying(local_res8,&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// PlayLevelSequence @ 14b80e3b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UDS_LevelSequencePlayAbility::PlayLevelSequence(UDS_LevelSequencePlayAbility *this)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UObject *pUVar8;
  FDS_ResourceSequenceTableRow *pFVar9;
  ULevelSequence *pUVar10;
  UClass *pUVar11;
  ULevelSequencePlayer *pUVar12;
  UDS_LevelSequenceEvent *pUVar13;
  char *pcVar14;
  UFunction *pUVar15;
  UDS_LoadingEvent *pUVar16;
  <lambda_1> local_res10 [8];
  undefined8 local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FWeakObjectPtr local_130;
  FName local_128;
  uint local_120;
  FMovieSceneSequenceLoopCount FStack_11c;
  float fStack_118;
  float fStack_114;
  undefined2 local_110;
  undefined2 uStack_10e;
  float fStack_10c;
  float fStack_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr> local_f8;
  ALevelSequenceActor *local_f0;
  FName local_e8;
  UDS_LevelSequencePlayAbility *local_e0;
  FName *local_d8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_d0;
  FDestructionSentinel local_c0;
  FReadAccessScope local_a8;
  FMovieSceneSequencePlaybackSettings local_88;
  FReadAccessScope local_58;
  
  UDS_LoadingData::GetInst();
  bVar6 = TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr>::UEOpEquals(&local_f8,(void *)0x0);
  if ((bVar6) ||
     (bVar6 = FWeakObjectPtr::IsValid(&(this->LevelSequencePlayAbilityData).WeakPtr), !bVar6)) {
    return false;
  }
  pUVar8 = FWeakObjectPtr::Get(&(this->LevelSequencePlayAbilityData).WeakPtr);
  pFVar9 = FDS_ResourceSequenceTableRow::Get((longlong)*(int *)&pUVar8[2].field_0x8,true);
  if (pFVar9 == (FDS_ResourceSequenceTableRow *)0x0) {
    return false;
  }
  pUVar10 = (ULevelSequence *)FSoftObjectPath::ResolveObject(&pFVar9->SequenceResourcePath);
  if (pUVar10 == (ULevelSequence *)0x0) {
    return false;
  }
  pUVar11 = Z_Construct_UClass_ULevelSequence_NoRegister();
  iVar1 = (int)pUVar11->_padding_;
  if (*(int *)(pUVar10->_padding_ + 0x38) < iVar1) {
    return false;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar11->_padding_) {
    return false;
  }
  dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
  uStack_104 = uStack_104 & 0xffffffc0;
  local_120 = local_120 & 0xfffffffe;
  this->LvelSequencePlayStartTime = dVar3;
  this->MinimumPlaybackTime = pFVar9->MinHoldingTime;
  FStack_11c.Value = 0;
  fStack_118 = 0.0;
  uStack_fc = uStack_fc & 0xfffffffa | 2;
  fStack_114 = 0.0;
  local_110 = 0x100;
  fStack_10c = 1.0;
  fStack_108 = 0.0;
  local_100 = local_100 & 0xffffff00;
  local_f0 = (ALevelSequenceActor *)0x0;
  pUVar8 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
  local_88.LoopCount.Value = FStack_11c.Value;
  local_88._0_4_ = local_120;
  local_88.TickInterval.EvaluationBudgetMicroseconds = fStack_114;
  local_88.TickInterval.TickIntervalSeconds = fStack_118;
  local_88.TickInterval._10_2_ = uStack_10e;
  local_88.TickInterval.bTickWhenPaused = (bool)(undefined1)local_110;
  local_88.TickInterval.bAllowRounding = (bool)local_110._1_1_;
  local_88.PlayRate = fStack_10c;
  local_88._28_4_ = uStack_104;
  local_88.StartTime = fStack_108;
  local_88._36_4_ = uStack_fc;
  local_88._32_4_ = local_100;
  pUVar12 = ULevelSequencePlayer::CreateLevelSequencePlayer(pUVar8,pUVar10,&local_88,&local_f0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar12 == (ULevelSequencePlayer *)0x0)) {
    (this->SequencePlayer).field0_0x0.DebugPtr = pUVar12;
    if (pUVar12 == (ULevelSequencePlayer *)0x0) {
      return false;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
    (this->SequencePlayer).field0_0x0.DebugPtr = pUVar12;
  }
  this->bIsStartSequenced = true;
  UDS_NameTagDataAsset::SetDisplayNameTag(false);
  pUVar12 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (pFVar9->MaxLoopCnt < 1) {
    UMovieSceneSequencePlayer::Play((UMovieSceneSequencePlayer *)pUVar12);
  }
  else {
    UMovieSceneSequencePlayer::PlayLooping((UMovieSceneSequencePlayer *)pUVar12,pFVar9->MaxLoopCnt);
  }
  pUVar13 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar13 != (UDS_LevelSequenceEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_LevelSequenceState_const_>::Broadcast
              (&pUVar13->LevelSequenceChangeStateDelegate,SequenceStart);
  }
  pUVar12 = (this->SequencePlayer).field0_0x0.DebugPtr;
  pcVar14 = strstr("&UDS_LevelSequencePlayAbility::OnEndPlayLevelSequence","::");
  pcVar5 = (char *)0x0;
  while (pcVar4 = pcVar14, pcVar4 != (char *)0x0) {
    pcVar14 = strstr(pcVar4 + 1,"::");
    pcVar5 = pcVar4;
  }
  if (((pcVar5 == (char *)0x0) || (pcVar5[2] == '0')) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  ::FName::FName(&local_e8,pcVar5 + 2);
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.ObjectIndex = 0;
  local_130.ObjectSerialNumber = 0;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  local_res20 = local_e8;
  local_e0 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_e0);
  local_128 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_138,&local_a8);
  local_res18 = 0;
  if ((local_128 == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&local_130), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
  }
  else {
    pUVar15 = UObject::FindFunction(pUVar8,local_128);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
    if (pUVar15 != (UFunction *)0x0) goto LAB_14b80e6ab;
  }
  local_d8 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_BindDynamic<UDS_LevelSequencePlayAbility>'::__l2::<lambda_1>::operator()(&local_d8);
LAB_14b80e6ab:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_138,&local_58);
  local_d0.Object = local_130;
  local_d0.FunctionName = local_128;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar12->_padding_,
             (FWriteAccessScope *)&local_c0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar12->_padding_,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar12->_padding_,&local_d0);
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  pUVar16 = UDS_LoadingEvent::GetEvent();
  if (pUVar16 != (UDS_LoadingEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar16->FadeInOutPhaseDelegate,this);
  }
  if (this->bRemoveReserved != false) {
    EndWithMinimumTime(this);
  }
  return true;
}

// TryActivate @ 14b815e20

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl UDS_LevelSequencePlayAbility::TryActivate(int param_1,bool param_2)

{
  bool bVar1;
  FDS_EntityBase *this;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  EDS_AbilityTagType local_a8 [8];
  UObject *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this = FDS_EntityBase::GetMainPlayerEntityBase(true);
  bVar1 = false;
  if (this != (FDS_EntityBase *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_LevelSequencePlayAbilityContext_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._8_8_ = pUVar2;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(int *)(pUVar2 + 1) = param_1;
    pUVar2[1].field_0x4 = param_2;
    local_a0 = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_a8[0] = LevelSequencePlay;
    bVar1 = FDS_EntityBase::TryActivateAbility
                      (this,local_a8,(TObjectPtr<UWN_AbilityContext>)&local_a0);
  }
  return bVar1;
}

