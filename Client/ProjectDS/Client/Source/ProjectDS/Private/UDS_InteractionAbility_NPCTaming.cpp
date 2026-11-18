// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b4bb870

UClass * __cdecl UDS_InteractionAbility_NPCTaming::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCTaming.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCTaming",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCTaming.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPCTaming,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPCTaming>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCTaming>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCTaming.InnerSingleton;
}

// UDS_InteractionAbility_NPCTaming @ 14b4c16f0

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

UDS_InteractionAbility_NPCTaming * __thiscall
UDS_InteractionAbility_NPCTaming::UDS_InteractionAbility_NPCTaming
          (UDS_InteractionAbility_NPCTaming *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MountAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MountAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->TamingState = Max;
  this->DisMountEndTime = 0.0;
  this->DisMountActionTime = 0.0;
  (this->StartRotation).Pitch = 0.0;
  (this->StartRotation).Yaw = 0.0;
  (this->StartRotation).Roll = 0.0;
  (this->StartLocation).field0_0x0._s_0.X = 0.0;
  (this->StartLocation).field0_0x0._s_0.Y = 0.0;
  (this->StartLocation).field0_0x0._s_0.Z = 0.0;
  (this->TargetLocation).field0_0x0._s_0.X = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Y = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Z = 0.0;
  this->GetOffBackDistance = 0.0;
  this->GetOffUpDistance = 0.0;
  (this->TamingSocket).ComparisonIndex = 0;
  (this->TamingSocket).Number = 0;
  (this->AniIndexList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AniIndexList).ArrayNum = 0;
  (this->AniIndexList).ArrayMax = 0;
  return this;
}

// UDS_InteractionAbility_NPCTaming @ 14b4c17c0

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

UDS_InteractionAbility_NPCTaming * __thiscall
UDS_InteractionAbility_NPCTaming::UDS_InteractionAbility_NPCTaming
          (UDS_InteractionAbility_NPCTaming *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MountAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MountAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->TamingState = Max;
  this->DisMountEndTime = 0.0;
  this->DisMountActionTime = 0.0;
  (this->StartRotation).Pitch = 0.0;
  (this->StartRotation).Yaw = 0.0;
  (this->StartRotation).Roll = 0.0;
  (this->StartLocation).field0_0x0._s_0.X = 0.0;
  (this->StartLocation).field0_0x0._s_0.Y = 0.0;
  (this->StartLocation).field0_0x0._s_0.Z = 0.0;
  (this->TargetLocation).field0_0x0._s_0.X = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Y = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Z = 0.0;
  this->GetOffBackDistance = 0.0;
  this->GetOffUpDistance = 0.0;
  (this->TamingSocket).ComparisonIndex = 0;
  (this->TamingSocket).Number = 0;
  (this->AniIndexList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AniIndexList).ArrayNum = 0;
  (this->AniIndexList).ArrayMax = 0;
  return this;
}

// ~UDS_InteractionAbility_NPCTaming @ 14b4c2460

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
UDS_InteractionAbility_NPCTaming::~UDS_InteractionAbility_NPCTaming
          (UDS_InteractionAbility_NPCTaming *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->AniIndexList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c4d20

UClass * __cdecl UDS_InteractionAbility_NPCTaming::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCTaming.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCTaming",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCTaming.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPCTaming,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPCTaming>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCTaming>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCTaming.InnerSingleton;
}

// ShouldTickComponent @ 14b4c54f0

bool __thiscall
UDS_InteractionAbility_NPCTaming::ShouldTickComponent(UDS_InteractionAbility_NPCTaming *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_NPCTaming @ 14b4c56c0

void __cdecl
UDS_InteractionAbility_NPCTaming::StaticRegisterNativesUDS_InteractionAbility_NPCTaming(void)

{
  return;
}

// BindTamingState @ 14b7db7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCTaming::BindTamingState(UDS_InteractionAbility_NPCTaming *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UDS_InteractionEvent *pUVar4;
  UDS_LogManager *pUVar5;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this->TamingState = Max;
  pUVar4 = UDS_InteractionEvent::GetEvent();
  if (pUVar4 == (UDS_InteractionEvent *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                 "UDS_InteractionAbility_NPCTaming::BindTamingState",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Display,local_30,0x13b,L"interactionEvent is nullptr.");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8721591505879302460>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPCTaming.cpp"
                       ,0x13c,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_158._8_4_ = 0;
    lVar1 = this->_padding_;
    local_158._0_8_ = OnTamingStateChangedEvent;
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<unsigned___int64_const_&>
                        (&(pUVar4->InteractionNpcTamingStateDelegate).Subscriptions,
                         (int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1,
                         (ulong64 *)&this->_padding_);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    local_158._24_8_ = CONCAT44(local_158._12_4_,local_158._8_4_);
    local_158._16_8_ = local_158._0_8_;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_InteractionAbility_NPCTaming>
              (this_00,(UDS_InteractionAbility_NPCTaming *)local_158,(pmf_c19ab51f *)this);
  }
  return;
}

// DimountNotifyEvent @ 14b7e3e40

void __thiscall
UDS_InteractionAbility_NPCTaming::DimountNotifyEvent(UDS_InteractionAbility_NPCTaming *this)

{
  if (this->TamingState == FailDismounting) {
    OnTamingFail_StartEvent(this,false);
    return;
  }
  if (this->TamingState == SuccessDismounting) {
    OnTamingSuccess_StartEvent(this,false);
    return;
  }
  return;
}

// OnAbilityRetryActivate @ 14b7f4820

void __thiscall
UDS_InteractionAbility_NPCTaming::OnAbilityRetryActivate(UDS_InteractionAbility_NPCTaming *this)

{
  return;
}

// OnCanActivate @ 14b7f6b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_NPCTaming::OnCanActivate(UDS_InteractionAbility_NPCTaming *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> TVar4;
  undefined1 auStackY_178 [32];
  uint uVar5;
  wchar_t *pwVar6;
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (!bVar1) {
    return false;
  }
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCTaming>
                      (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
    (this->InteractionAbilityData).WeakPtr = *TVar2.WeakPtr;
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPCTaming::OnCanActivate",0x2f,Yes);
      pwVar6 = L"InteractionAbilityData is nullptr.";
      uVar5 = 0x4b;
      goto LAB_14b7f6bf4;
    }
  }
  bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MountAbilityData,(void *)0x0);
  if (!bVar1) {
    return true;
  }
  TVar4 = UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
                    (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
  (this->MountAbilityData).WeakPtr = *TVar4.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MountAbilityData,(void *)0x0);
  if (!bVar1) {
    return true;
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 == (UDS_LogManager *)0x0) {
    return false;
  }
  pUVar3 = UDS_LogManager::GetInst();
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"UDS_InteractionAbility_NPCTaming::OnCanActivate",0x2f,Yes);
  pwVar6 = L"MountAbilityData is nullptr.";
  uVar5 = 0x55;
LAB_14b7f6bf4:
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// OnDeactivateAbility @ 14b7fc4c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_InteractionAbility_NPCTaming::OnDeactivateAbility
          (UDS_InteractionAbility_NPCTaming *this,bool *param_1)

{
  bool bVar1;
  FGameplayTag *pFVar2;
  longlong lVar3;
  USceneComponent *pUVar4;
  EDS_StateTagType local_res8 [16];
  FWeakObjectPtr local_res18 [2];
  TVector<double>_u_0 local_28;
  
  local_res8[0] = Interaction_NPCTaming;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  local_res8[0] = Interaction_NPCTaming_Begin;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  local_res8[0] = Interaction_NPCTaming_Proccess;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  local_res8[0] = Interaction_NPCTaming_Success;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  local_res8[0] = Interaction_NPCTaming_Failed;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  (**(code **)(*(longlong *)this->_padding_ + 0x80))();
  bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_res18,
                     (void *)0x0);
  if (!bVar1) {
    lVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
    pUVar4 = (USceneComponent *)FWeakObjectPtr::Get(local_res18);
    local_28._s_0.X = 0.0;
    local_28._s_0.Y = 0.0;
    local_28._s_0.Z =
         (double)(float)(*(uint *)(lVar3 + 0x50) ^ __xmm_80000000800000008000000080000000);
    USceneComponent::SetRelativeLocation
              (pUVar4,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,None);
    pUVar4 = (USceneComponent *)FWeakObjectPtr::Get(local_res18);
    local_28._s_0.X = ___xmm_c0568000000000000000000000000000;
    local_28._s_0.Y = _UNK_152242e68;
    local_28._s_0.Z = 0.0;
    USceneComponent::SetRelativeRotation
              (pUVar4,(TRotator<double> *)&local_28._s_0,false,(FHitResult *)0x0,None);
  }
  return;
}

// OnFailedMinigameEvent @ 14b7fd7a0

void __thiscall
UDS_InteractionAbility_NPCTaming::OnFailedMinigameEvent
          (UDS_InteractionAbility_NPCTaming *this,UObject *param_1)

{
  int iVar1;
  UObject *pUVar2;
  EDS_TamingRequestType local_res8 [8];
  
  pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  iVar1 = *(int *)&pUVar2[2].field_0x10;
  local_res8[0] = MiniGameFail;
  pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  FDS_TamingService::RequestTaming((ulong64 *)&pUVar2[2].field_0x8,local_res8,iVar1);
  return;
}

// OnPostActivateAbility @ 14b8046b0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCTaming::OnPostActivateAbility(UDS_InteractionAbility_NPCTaming *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr> *this_00;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  UObject *pUVar7;
  FDS_EntityBase *pFVar8;
  UDS_AbilitySystemComponent *pUVar9;
  FWeakObjectPtr *this_01;
  UClass *pUVar10;
  ADS_NPC *this_02;
  FDS_NpcBaseTableRow *pFVar11;
  FDS_MountBaseTableRow *pFVar12;
  FName *pFVar13;
  UDS_InteractionEvent *pUVar14;
  UDS_LogManager *pUVar15;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_03;
  undefined1 auStackY_328 [32];
  EDS_AbilityDeactivateType local_2f8 [3];
  EDS_TamingRequestType local_2f5 [5];
  FWeakObjectPtr local_2f0;
  UObject *local_2e8 [2];
  FName local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8 [48];
  FName local_298;
  longlong lStack_290;
  code *local_288;
  longlong lStack_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  this_00 = &this->InteractionAbilityData;
  bVar6 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar6) {
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pFVar8 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar7[2].field_0x8);
  if (pFVar8 == (FDS_EntityBase *)0x0) {
    local_2f8[0] = Cancel;
    pUVar9 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar9,(FGameplayTag *)&this->_padding_,local_2f8);
    return;
  }
  if (pFVar8->EntityType != NPC) {
    local_2f8[1] = 2;
    pUVar9 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar9,(FGameplayTag *)&this->_padding_,local_2f8 + 1);
    return;
  }
  this_01 = (FWeakObjectPtr *)(**(code **)(pFVar8->_padding_ + 0x150))(pFVar8,local_2c8 + 0x10);
  pUVar7 = FWeakObjectPtr::Get(this_01);
  if (pUVar7 != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_ADS_NPC_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar10->_padding_)) goto LAB_14b8047b5;
  }
  pUVar7 = (UObject *)0x0;
LAB_14b8047b5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_2f0.ObjectIndex = 0;
  local_2f0.ObjectSerialNumber = 0;
  local_2e8[0] = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_2f0,(FObjectPtr)local_2e8);
  bVar6 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&local_2f0,(void *)0x0);
  if (bVar6) {
    local_2f8[2] = 2;
    pUVar9 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar9,(FGameplayTag *)&this->_padding_,local_2f8 + 2);
  }
  else {
    this_02 = (ADS_NPC *)FWeakObjectPtr::Get(&local_2f0);
    pFVar11 = ADS_NPC::GetNpcBaseTable(this_02);
    if (pFVar11->ID_MountBase != 0) {
      pFVar12 = FDS_MountBaseTableRow::GetRef((longlong)pFVar11->ID_MountBase,true);
      this->DisMountEndTime = pFVar12->SuccessDismountingTime;
      this->DisMountActionTime = 0.0;
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar1 = *(int *)&pUVar7[4].field_0x8;
      if ((iVar1 < 0) || ((pFVar12->TamingMountSocketName).ArrayNum <= iVar1)) {
        pUVar15 = UDS_LogManager::GetInst();
        if (pUVar15 != (UDS_LogManager *)0x0) {
          pUVar15 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_InteractionAbility_NPCTaming::OnPostActivateAbility",0x37,Yes);
          UDS_LogManager::PrintLog
                    (pUVar15,1,Warning,local_278.Ptr,0x8c,L"tamingStartIndex is invalid.");
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
        }
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8721591505879302285>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPCTaming.cpp"
                           ,0x8d,"false");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar13 = ::FName::FName(&local_2d8,"MountAni_R");
      }
      else {
        if (((pFVar12->TamingMountSocketName).ArrayNum <= iVar1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (pFVar12->TamingMountSocketName).AllocatorInstance.Data;
        if (*(int *)(pFVar3 + (longlong)iVar1 * 0x10 + 8) == 0) {
          pFVar13 = ::FName::FName((FName *)(local_2c8 + 0x18),L"");
        }
        else {
          pFVar13 = ::FName::FName((FName *)(local_2c8 + 0x18),
                                   *(wchar_t **)(pFVar3 + (longlong)iVar1 * 0x10));
        }
      }
      this->TamingSocket = *pFVar13;
      this->TamingState = Max;
      pUVar14 = UDS_InteractionEvent::GetEvent();
      if (pUVar14 == (UDS_InteractionEvent *)0x0) {
        pUVar15 = UDS_LogManager::GetInst();
        if (pUVar15 != (UDS_LogManager *)0x0) {
          pUVar15 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_InteractionAbility_NPCTaming::BindTamingState",0x31,Yes);
          UDS_LogManager::PrintLog
                    (pUVar15,1,Display,local_158.Ptr,0x13b,L"interactionEvent is nullptr.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8721591505879302460>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPCTaming.cpp"
                           ,0x13c,"false");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uStack_2d0 = 0;
        lVar4 = this->_padding_;
        local_2d8 = (FName)OnTamingStateChangedEvent;
        this_03 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                  TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>_>
                  ::FindOrAddImpl<unsigned___int64_const_&>
                            (&(pUVar14->InteractionNpcTamingStateDelegate).Subscriptions,
                             (int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4,
                             (ulong64 *)&this->_padding_);
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_03,this);
        lStack_290 = CONCAT44(uStack_2cc,uStack_2d0);
        local_298 = local_2d8;
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>
        ::AddUObject<UDS_InteractionAbility_NPCTaming>
                  (this_03,(UDS_InteractionAbility_NPCTaming *)local_2c8,(pmf_c19ab51f *)this);
      }
      if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar2 = *(int *)&pUVar7[2].field_0x10;
        local_2f5[0] = Taming;
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        FDS_TamingService::RequestTaming
                  ((ulong64 *)&pUVar7[2].field_0x8,local_2f5,(EDS_TamingMountSide)iVar1,iVar2);
      }
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_2c8._8_4_ = 0;
      local_2c8._0_8_ = DimountNotifyEvent;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[2].field_0x18,this);
      lStack_280 = CONCAT44(local_2c8._12_4_,local_2c8._8_4_);
      local_288 = (code *)local_2c8._0_8_;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_InteractionAbility_NPCTaming>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pUVar7[2].field_0x18,(UDS_InteractionAbility_NPCTaming *)(local_2c8 + 0x20),
                 (pmf_84fb7c25 *)this);
    }
  }
  return;
}

// OnSucceedMinigameEvent @ 14b808bf0

void __thiscall
UDS_InteractionAbility_NPCTaming::OnSucceedMinigameEvent
          (UDS_InteractionAbility_NPCTaming *this,UObject *param_1)

{
  int iVar1;
  UObject *pUVar2;
  EDS_TamingRequestType local_res8 [8];
  
  pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  iVar1 = *(int *)&pUVar2[2].field_0x10;
  local_res8[0] = MiniGameSuccess;
  pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  FDS_TamingService::RequestTaming((ulong64 *)&pUVar2[2].field_0x8,local_res8,iVar1);
  return;
}

// OnTamingFail_EndEvent @ 14b808c80

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
UDS_InteractionAbility_NPCTaming::OnTamingFail_EndEvent(UDS_InteractionAbility_NPCTaming *this)

{
  bool bVar1;
  FGameplayTag *pFVar2;
  UWN_AbilitySystemComponent *this_00;
  EDS_StateTagType local_res8 [8];
  
  local_res8[0] = Interaction_NPCTaming;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  this_00 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  bVar1 = UWN_AbilitySystemComponent::HasTag(this_00,pFVar2);
  if (bVar1) {
    local_res8[0] = Interaction_NPCTaming_Failed;
    pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  }
  return;
}

// OnTamingFail_StartEvent @ 14b808cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_InteractionAbility_NPCTaming::OnTamingFail_StartEvent
          (UDS_InteractionAbility_NPCTaming *this,bool param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_MountBaseTableRow *pFVar6;
  UDS_MountAbilityData *this_00;
  FGameplayTag *pFVar7;
  UDS_InteractionAbilityData_NPCTaming *this_01;
  undefined1 auStackY_318 [32];
  EDS_StateTagType local_2e8 [16];
  code *local_2d8;
  undefined8 uStack_2d0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_2c8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_2a8;
  undefined1 local_288 [272];
  void *local_178;
  wchar_t *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if (param_1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8721591505879302390>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPCTaming.cpp"
                       ,0xf6,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_178 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_288 + 0x10),
                 "UDS_InteractionAbility_NPCTaming::OnTamingFail_StartEvent",0x39,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_170,0xf7,L"Taming End Notify is not called.");
      if (local_178 != (void *)0x0) {
        FMemory::Free(local_178);
      }
    }
  }
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionAbility_NPCTaming::OnTamingFail_StartEvent",0x39,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0xfc,L"AbilityData is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pFVar6 = FDS_MountBaseTableRow::GetRefByTamingNPC(*(ulong64 *)&pUVar5[2].field_0x8);
    this->DisMountEndTime = pFVar6->FailDismountingTime;
    this_00 = (UDS_MountAbilityData *)FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr);
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_MountAbilityData::TamingUnmount(this_00,this->_padding_,*(long64 *)&pUVar5[2].field_0x8);
    local_2e8[0] = Interaction_NPCTaming_Failed;
    pFVar7 = FDS_GameplayTags::GetStateTag(local_2e8);
    UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar7);
    local_2e8[1] = 0x5c;
    pFVar7 = FDS_GameplayTags::GetStateTag(local_2e8 + 1);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar7);
    local_2d8 = OnTamingFail_EndEvent;
    local_2c8._padding_ = 0;
    local_2c8.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
    local_2c8.InvocationList.ArrayMax = _UNK_150631d44;
    local_2c8.CompactionThreshold = _UNK_150631d48;
    local_2c8.InvocationListLockCount = _UNK_150631d4c;
    local_2c8.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uStack_2d0 = (ulonglong)uStack_2d0._4_4_ << 0x20;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(&local_2c8,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_InteractionAbility_NPCTaming>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &local_2c8,(UDS_InteractionAbility_NPCTaming *)local_288,(pmf_84fb7c25 *)this);
    this_01 = (UDS_InteractionAbilityData_NPCTaming *)
              FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    fVar1 = pFVar6->FailDismountingTime;
    local_2a8.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
    local_2a8.InvocationList.ArrayMax = _UNK_150631d44;
    local_2a8.CompactionThreshold = _UNK_150631d48;
    local_2a8.InvocationListLockCount = _UNK_150631d4c;
    local_2a8._padding_ = 0;
    local_2a8.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              (&local_2a8,&local_2c8);
    UDS_InteractionAbilityData_NPCTaming::TamingTimerStart
              (this_01,(FDS_EventDelegate<> *)&local_2a8,fVar1);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               local_2c8.InvocationList.AllocatorInstance.Data,local_2c8.InvocationList.ArrayNum);
    if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
        local_2c8.InvocationList.AllocatorInstance.Data !=
        (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free(local_2c8.InvocationList.AllocatorInstance.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_2c8);
  }
  return;
}

// OnTamingStart_EndEvent @ 14b809010

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
UDS_InteractionAbility_NPCTaming::OnTamingStart_EndEvent(UDS_InteractionAbility_NPCTaming *this)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FDS_MountBaseTableRow *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FGameplayTag *pFVar8;
  UDS_AbilitySystemComponent *this_00;
  UDS_InteractionAbility_NPCTaming *local_res8;
  undefined1 local_d8 [16];
  int local_c8;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  bool local_a8;
  EAccessType local_98;
  undefined1 local_94;
  undefined1 local_90 [8];
  ForAnyElementType FStack_88;
  int local_80;
  undefined1 local_78 [8];
  ForAnyElementType FStack_70;
  int local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  undefined1 *local_48;
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_40;
  
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar3) {
LAB_14b809572:
    local_res8 = (UDS_InteractionAbility_NPCTaming *)CONCAT71(local_res8._1_7_,2);
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,(EDS_AbilityDeactivateType *)&local_res8);
    return;
  }
  bVar3 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MountAbilityData,(void *)0x0);
  if (bVar3) goto LAB_14b809572;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') goto LAB_14b809537;
  pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  pFVar5 = FDS_MountBaseTableRow::GetRefByTamingNPC(*(ulong64 *)&pUVar4[2].field_0x8);
  local_94 = 1;
  local_80 = 0;
  local_90 = (undefined1  [8])0x0;
  FStack_88.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  local_78 = (undefined1  [8])0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  local_98 = pFVar5->TamingGameTypeValue;
  local_b8 = OnSucceedMinigameEvent;
  uStack_b0 = 0;
  local_d8._0_8_ = (atomic<unsigned___int64>)0x0;
  local_d8._8_8_ = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)local_60);
  local_48 = local_d8 + 8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_d8 + 8));
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_NPCTaming____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
    puVar6[4] = local_b8;
    puVar6[5] = CONCAT44(uStack_ac,uStack_b0);
  }
  if (local_58[8] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_58._0_8_,(FDestructionSentinel *)local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)&local_b8);
  iVar2 = local_c8;
  uVar1 = local_d8._8_8_;
  local_d8._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_c8 = 0;
  if (local_a8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_ac,uStack_b0),
               (FDestructionSentinel *)&local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_b8);
  if (local_80 == 0) {
LAB_14b8091df:
    if (FStack_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data);
    }
  }
  else if (FStack_88.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)FStack_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14b8091df;
  }
  FStack_88.Data = (FScriptContainerElement *)uVar1;
  local_80 = iVar2;
  if (local_a8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_ac,uStack_b0),
               (FDestructionSentinel *)&local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)&local_b8);
  if ((local_c8 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_d8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_d8._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_d8 + 8),0,0,0x10);
    local_c8 = 0;
  }
  if (local_a8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_ac,uStack_b0),
               (FDestructionSentinel *)&local_b8);
  }
  if ((FMRSWRecursiveAccessDetector *)local_d8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  uStack_b0 = 0;
  local_b8 = OnFailedMinigameEvent;
  local_d8._0_8_ = (atomic<unsigned___int64>)0x0;
  local_d8._8_8_ = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)local_60);
  local_48 = local_d8 + 8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_d8 + 8));
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_NPCTaming____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
    puVar6[4] = local_b8;
    puVar6[5] = CONCAT44(uStack_ac,uStack_b0);
  }
  if (local_58[8] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_58._0_8_,(FDestructionSentinel *)local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)&local_b8);
  iVar2 = local_c8;
  uVar1 = local_d8._8_8_;
  local_d8._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_c8 = 0;
  if (local_a8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_ac,uStack_b0),
               (FDestructionSentinel *)&local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_b8);
  if (local_68 == 0) {
LAB_14b809397:
    if (FStack_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_70.Data);
    }
  }
  else if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = 0;
    goto LAB_14b809397;
  }
  local_68 = iVar2;
  FStack_70.Data = (FScriptContainerElement *)uVar1;
  if (local_a8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_ac,uStack_b0),
               (FDestructionSentinel *)&local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)&local_b8);
  if ((local_c8 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_d8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_d8._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_d8 + 8),0,0,0x10);
    local_c8 = 0;
  }
  if (local_a8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_ac,uStack_b0),
               (FDestructionSentinel *)&local_b8);
  }
  if ((FMRSWRecursiveAccessDetector *)local_d8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  local_60._0_4_ = local_98;
  local_94 = 0;
  local_60[4] = false;
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_58,
             (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_90);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
            (&local_40,(TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_78);
  UDS_VM_MiniGame_KeyTimeAttack::StartMiniGame((FDS_MiniGame_KeyTimeParams *)local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)local_d8);
  if ((local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_c8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_d8._8_8_,(FDestructionSentinel *)local_d8);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)local_d8);
  if ((local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_c8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_d8._8_8_,(FDestructionSentinel *)local_d8);
  }
  if (FStack_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
LAB_14b809537:
  local_res8._0_1_ = 0x5c;
  pFVar8 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res8);
  UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar8);
  local_res8 = (UDS_InteractionAbility_NPCTaming *)CONCAT71(local_res8._1_7_,0x5b);
  pFVar8 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar8);
  return;
}

// OnTamingStateChangedEvent @ 14b8095b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_InteractionAbility_NPCTaming::OnTamingStateChangedEvent
          (UDS_InteractionAbility_NPCTaming *this,EDS_TamingState param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr> *pTVar3;
  EDS_MountShapeType EVar4;
  undefined4 uVar5;
  code *pcVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  UDS_LogManager *pUVar13;
  UObject *pUVar14;
  FDS_MountBaseTableRow *pFVar15;
  FGameplayTag *pFVar16;
  UDS_CharStateData *this_00;
  UDS_MountAbilityData *this_01;
  UDS_InteractionAbilityData_NPCTaming *pUVar17;
  longlong lVar18;
  UDS_AbilitySystemComponent *pUVar19;
  FScriptContainerElement *_Dst;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_02;
  int iVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_668 [32];
  EDS_AbilityInputPolicy local_628;
  EDS_StateTagType local_627 [4];
  EDS_AbilityDeactivateType local_623 [11];
  undefined1 local_618 [40];
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_5f0;
  longlong local_5e8;
  longlong lStack_5e0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_5d8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_5b8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_598;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_578;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_558;
  undefined1 local_538 [16];
  code *local_528;
  longlong lStack_520;
  code *local_518;
  longlong lStack_510;
  code *local_508;
  longlong lStack_500;
  FDS_EventDelegate<> local_4f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_668;
  bVar11 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                     (&this->MountAbilityData,(void *)0x0);
  if (bVar11) {
    return;
  }
  this->TamingState = param_1;
  if (param_1 != Mounting) {
    if (param_1 == SuccessDismounting) {
      pTVar3 = &this->InteractionAbilityData;
      bVar11 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                         (pTVar3,(void *)0x0);
      if ((bVar11) ||
         (bVar11 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                             (&this->MountAbilityData,(void *)0x0), bVar11)) {
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar13 = UDS_LogManager::GetInst();
        local_298._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_298,"UDS_InteractionAbility_NPCTaming::OnTamingStateChangedEvent",0x3b,Yes
                  );
        UDS_LogManager::PrintLog(pUVar13,1,Warning,local_298.Ptr,0x176,L"AbilityData is nullptr.");
        if ((void *)local_298._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_298._padding_);
        return;
      }
      pUVar14 = FWeakObjectPtr::Get(&pTVar3->WeakPtr);
      FDS_MountBaseTableRow::GetRefByTamingNPC(*(ulong64 *)&pUVar14[2].field_0x8);
      lVar9 = _UNK_150631d48;
      lVar18 = ___xmm_00000000000000020000000000000000;
      local_618._0_8_ = OnTamingSuccess_StartEvent;
      local_5d8._padding_ = 0;
      local_5d8.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5d8.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
      local_5d8.InvocationList.ArrayMax = _UNK_150631d44;
      local_5d8.CompactionThreshold = _UNK_150631d48;
      local_5d8.InvocationListLockCount = _UNK_150631d4c;
      local_627[2] = 1;
      local_618._8_4_ = 0;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(&local_5d8,this);
      lStack_510 = CONCAT44(local_618._12_4_,local_618._8_4_);
      local_518 = (code *)local_618._0_8_;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_InteractionAbility_NPCTaming,bool>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &local_5d8,(UDS_InteractionAbility_NPCTaming *)(local_538 + 8),(pmf_f091db49 *)this
                 ,(bool *)&local_518);
      pUVar17 = (UDS_InteractionAbilityData_NPCTaming *)FWeakObjectPtr::Get(&pTVar3->WeakPtr);
      lVar10 = _UNK_150631d48;
      lVar8 = ___xmm_00000000000000020000000000000000;
      local_578._padding_ = 0;
      local_578.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ___xmm_00000000000000020000000000000000 = (undefined4)lVar18;
      _UNK_150631d44 = SUB84(lVar18,4);
      local_578.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
      local_578.InvocationList.ArrayMax = _UNK_150631d44;
      _UNK_150631d48 = (undefined4)lVar9;
      _UNK_150631d4c = SUB84(lVar9,4);
      local_578.CompactionThreshold = _UNK_150631d48;
      local_578.InvocationListLockCount = _UNK_150631d4c;
      ___xmm_00000000000000020000000000000000 = lVar8;
      _UNK_150631d48 = lVar10;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                (&local_578,&local_5d8);
      UDS_InteractionAbilityData_NPCTaming::TamingTimerStart
                (pUVar17,(FDS_EventDelegate<> *)&local_578,__real_41200000);
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 local_5d8.InvocationList.AllocatorInstance.Data,local_5d8.InvocationList.ArrayNum);
      if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
          local_5d8.InvocationList.AllocatorInstance.Data !=
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
        FMemory::Free(local_5d8.InvocationList.AllocatorInstance.Data);
      }
      this_02 = &local_5d8;
    }
    else {
      if (param_1 != FailDismounting) {
        if (param_1 == Success) {
          UnbindTamingState(this);
          local_623[0] = Success;
          pUVar19 = (UDS_AbilitySystemComponent *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          UDS_AbilitySystemComponent::DeactivateAbilityByTag
                    (pUVar19,(FGameplayTag *)&this->_padding_,local_623);
          return;
        }
        if (param_1 != Fail) {
          return;
        }
        UnbindTamingState(this);
        local_623[1] = 1;
        pUVar19 = (UDS_AbilitySystemComponent *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_AbilitySystemComponent::DeactivateAbilityByTag
                  (pUVar19,(FGameplayTag *)&this->_padding_,local_623 + 1);
        return;
      }
      pTVar3 = &this->InteractionAbilityData;
      bVar11 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                         (pTVar3,(void *)0x0);
      if (bVar11) {
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar13 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_InteractionAbility_NPCTaming::OnTamingStateChangedEvent",0x3b,Yes
                  );
        UDS_LogManager::PrintLog(pUVar13,1,Warning,local_178.Ptr,0x182,L"AbilityData is nullptr.");
        if ((void *)local_178._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_178._padding_);
        return;
      }
      pUVar14 = FWeakObjectPtr::Get(&pTVar3->WeakPtr);
      FDS_MountBaseTableRow::GetRefByTamingNPC(*(ulong64 *)&pUVar14[2].field_0x8);
      lVar9 = _UNK_150631d48;
      lVar18 = ___xmm_00000000000000020000000000000000;
      local_618._0_8_ = OnTamingFail_StartEvent;
      local_5b8._padding_ = 0;
      local_5b8.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5b8.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
      local_5b8.InvocationList.ArrayMax = _UNK_150631d44;
      local_5b8.CompactionThreshold = _UNK_150631d48;
      local_5b8.InvocationListLockCount = _UNK_150631d4c;
      local_627[3] = 1;
      local_618._8_4_ = 0;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(&local_5b8,this);
      lStack_500 = CONCAT44(local_618._12_4_,local_618._8_4_);
      local_508 = (code *)local_618._0_8_;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_InteractionAbility_NPCTaming,bool>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &local_5b8,(UDS_InteractionAbility_NPCTaming *)local_618,(pmf_f091db49 *)this,
                 (bool *)&local_508);
      pUVar17 = (UDS_InteractionAbilityData_NPCTaming *)FWeakObjectPtr::Get(&pTVar3->WeakPtr);
      lVar10 = _UNK_150631d48;
      lVar8 = ___xmm_00000000000000020000000000000000;
      local_558._padding_ = 0;
      local_558.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ___xmm_00000000000000020000000000000000 = (undefined4)lVar18;
      _UNK_150631d44 = SUB84(lVar18,4);
      local_558.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
      local_558.InvocationList.ArrayMax = _UNK_150631d44;
      _UNK_150631d48 = (undefined4)lVar9;
      _UNK_150631d4c = SUB84(lVar9,4);
      local_558.CompactionThreshold = _UNK_150631d48;
      local_558.InvocationListLockCount = _UNK_150631d4c;
      ___xmm_00000000000000020000000000000000 = lVar8;
      _UNK_150631d48 = lVar10;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                (&local_558,&local_5b8);
      UDS_InteractionAbilityData_NPCTaming::TamingTimerStart
                (pUVar17,(FDS_EventDelegate<> *)&local_558,__real_41200000);
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 local_5b8.InvocationList.AllocatorInstance.Data,local_5b8.InvocationList.ArrayNum);
      if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
          local_5b8.InvocationList.AllocatorInstance.Data !=
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
        FMemory::Free(local_5b8.InvocationList.AllocatorInstance.Data);
      }
      this_02 = &local_5b8;
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_02);
    (**(code **)(*(longlong *)this->_padding_ + 0x80))();
    bVar11 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)(local_618 + 0x18),
                        (void *)0x0);
    if (bVar11) {
      return;
    }
    pUVar14 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pFVar15 = FDS_MountBaseTableRow::GetRefByTamingNPC(*(ulong64 *)&pUVar14[2].field_0x8);
    lVar18 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
    pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_618 + 0x18));
    dVar7 = *(double *)&pUVar14[8].field_0x10;
    (this->StartLocation).field0_0x0._s_0.X = *(double *)&pUVar14[8].field_0x8;
    (this->StartLocation).field0_0x0._s_0.Y = dVar7;
    (this->StartLocation).field0_0x0._s_0.Z = *(double *)&pUVar14[8].field_0x18;
    (this->StartRotation).Pitch = 0.0;
    (this->StartRotation).Yaw = -90.0;
    (this->StartRotation).Roll = 0.0;
    fVar21 = (float)(*(uint *)(lVar18 + 0x50) ^ __xmm_80000000800000008000000080000000);
    (this->TargetLocation).field0_0x0._s_0.X = 0.0;
    (this->TargetLocation).field0_0x0._s_0.Y = 0.0;
    fVar22 = 0.0;
    (this->TargetLocation).field0_0x0._s_0.Z = (double)fVar21;
    if ((pFVar15->CharacterTamingFailCourseValue).ArrayNum < 2) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = *(float *)((pFVar15->CharacterTamingFailCourseValue).AllocatorInstance.Data + 4);
    }
    this->GetOffBackDistance = fVar21;
    if (0 < (pFVar15->CharacterTamingFailCourseValue).ArrayNum) {
      fVar22 = *(float *)(pFVar15->CharacterTamingFailCourseValue).AllocatorInstance.Data;
    }
    this->GetOffUpDistance = fVar22;
    return;
  }
  local_628 = BlockInput;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,&local_628);
  bVar11 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                     (&this->InteractionAbilityData,(void *)0x0);
  if (bVar11) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar13 = UDS_LogManager::GetInst();
    local_4d8._padding_._0_4_ = 0;
    local_4d8._padding_._4_4_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4d8,"UDS_InteractionAbility_NPCTaming::OnTamingStateChangedEvent",0x3b,Yes);
    UDS_LogManager::PrintLog(pUVar13,1,Warning,local_4d8.Ptr,0x15f,L"AbilityData is nullptr.");
    if ((FWeakObjectPtr)local_4d8._padding_ == (FWeakObjectPtr)0x0) {
      return;
    }
    FMemory::Free((void *)local_4d8._padding_);
    return;
  }
  pUVar14 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  pFVar15 = FDS_MountBaseTableRow::GetRefByTamingNPC(*(ulong64 *)&pUVar14[2].field_0x8);
  pTVar2 = &this->AniIndexList;
  iVar20 = (this->AniIndexList).ArrayNum;
  piVar1 = &(this->AniIndexList).ArrayNum;
  if (iVar20 < 3) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,3 - iVar20,&pTVar2->AllocatorInstance,piVar1,
                        &(this->AniIndexList).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4,0,(longlong)(3 - iVar20) << 2);
  }
  else if (3 < iVar20) {
    iVar20 = iVar20 + -3;
    if (iVar20 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if (iVar20 == 0) goto LAB_14b80980e;
    _Dst = (pTVar2->AllocatorInstance).Data + 0xc;
    iVar12 = (*piVar1 - iVar20) + -3;
    if (iVar12 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar20 * 4,(longlong)iVar12 << 2);
    }
    *piVar1 = *piVar1 - iVar20;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&pTVar2->AllocatorInstance,*piVar1,&(this->AniIndexList).ArrayMax);
  }
LAB_14b80980e:
  pUVar14 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  uVar5 = *(undefined4 *)&pUVar14[4].field_0x8;
  if ((*piVar1 < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(undefined4 *)((pTVar2->AllocatorInstance).Data + 4) = uVar5;
  EVar4 = pFVar15->MountShapeType;
  if ((*piVar1 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_627[0] = Interaction_NPCTaming;
  *(uint *)(pTVar2->AllocatorInstance).Data = (uint)EVar4;
  pFVar16 = FDS_GameplayTags::GetStateTag(local_627);
  UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar16);
  local_627[1] = 0x5b;
  pFVar16 = FDS_GameplayTags::GetStateTag(local_627 + 1);
  UDS_CharStateData::GetData((ulong64)(local_618 + 0x10));
  bVar11 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)(local_618 + 0x10),
                      (void *)0x0);
  if (bVar11) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 != (UDS_LogManager *)0x0) {
      pUVar13 = UDS_LogManager::GetInst();
      local_3b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3b8,"UDS_GameplayAbility::AddStateTagToASC",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar13,1,Warning,local_3b8.Ptr,0x2b5,L"charStateData is nullptr.");
      if ((void *)local_3b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_618 + 0x10));
    UDS_CharStateData::SetAniIndexList(this_00,pFVar16,pTVar2);
    UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar16);
  }
  this_01 = (UDS_MountAbilityData *)FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr);
  lVar9 = _UNK_150631d48;
  lVar18 = ___xmm_00000000000000020000000000000000;
  local_4f8.Delegate._16_8_ = ___xmm_00000000000000020000000000000000;
  local_4f8.Delegate._24_8_ = _UNK_150631d48;
  local_4f8.Delegate._0_8_ = 0;
  local_4f8.Delegate._8_8_ = 0;
  pUVar14 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  UDS_MountAbilityData::TamingMount
            (this_01,this->_padding_,*(long64 *)&pUVar14[2].field_0x8,&this->TamingSocket,&local_4f8
            );
  UpdateTaming(this,0.0);
  local_618._32_8_ = 0;
  local_618._0_8_ = OnTamingStart_EndEvent;
  local_5f0 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_5e8 = lVar18;
  lStack_5e0 = lVar9;
  local_618._8_4_ = 0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(local_618 + 0x20),this);
  lStack_520 = CONCAT44(local_618._12_4_,local_618._8_4_);
  local_528 = (code *)local_618._0_8_;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_InteractionAbility_NPCTaming>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (local_618 + 0x20),(UDS_InteractionAbility_NPCTaming *)local_538,(pmf_84fb7c25 *)this);
  pUVar17 = (UDS_InteractionAbilityData_NPCTaming *)
            FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  lVar10 = _UNK_150631d48;
  lVar8 = ___xmm_00000000000000020000000000000000;
  fVar22 = pFVar15->MountingTime;
  local_598._padding_ = 0;
  local_598.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ___xmm_00000000000000020000000000000000 = (undefined4)lVar18;
  _UNK_150631d44 = SUB84(lVar18,4);
  local_598.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_598.InvocationList.ArrayMax = _UNK_150631d44;
  _UNK_150631d48 = (undefined4)lVar9;
  _UNK_150631d4c = SUB84(lVar9,4);
  local_598.CompactionThreshold = _UNK_150631d48;
  local_598.InvocationListLockCount = _UNK_150631d4c;
  ___xmm_00000000000000020000000000000000 = lVar8;
  _UNK_150631d48 = lVar10;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            (&local_598,(TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(local_618 + 0x20));
  UDS_InteractionAbilityData_NPCTaming::TamingTimerStart
            (pUVar17,(FDS_EventDelegate<> *)&local_598,fVar22);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_5f0,(int)local_5e8);
  if (local_5f0 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_5f0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_618 + 0x20));
  return;
}

// OnTamingSuccess_EndEvent @ 14b809f40

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
UDS_InteractionAbility_NPCTaming::OnTamingSuccess_EndEvent(UDS_InteractionAbility_NPCTaming *this)

{
  bool bVar1;
  FGameplayTag *pFVar2;
  UWN_AbilitySystemComponent *this_00;
  EDS_StateTagType local_res8 [8];
  
  local_res8[0] = Interaction_NPCTaming;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  this_00 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  bVar1 = UWN_AbilitySystemComponent::HasTag(this_00,pFVar2);
  if (bVar1) {
    local_res8[0] = Interaction_NPCTaming_Success;
    pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  }
  return;
}

// OnTamingSuccess_StartEvent @ 14b809fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_InteractionAbility_NPCTaming::OnTamingSuccess_StartEvent
          (UDS_InteractionAbility_NPCTaming *this,bool param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_MountBaseTableRow *pFVar6;
  UDS_MountAbilityData *this_00;
  FGameplayTag *pFVar7;
  UDS_InteractionAbilityData_NPCTaming *this_01;
  undefined1 auStackY_318 [32];
  EDS_StateTagType local_2e8 [16];
  code *local_2d8;
  undefined8 uStack_2d0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_2c8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_2a8;
  undefined1 local_288 [272];
  void *local_178;
  wchar_t *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if (param_1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8721591505879302364>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPCTaming.cpp"
                       ,0xdc,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_178 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_288 + 0x10),
                 "UDS_InteractionAbility_NPCTaming::OnTamingSuccess_StartEvent",0x3c,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_170,0xdd,L"Taming End Notify is not called.");
      if (local_178 != (void *)0x0) {
        FMemory::Free(local_178);
      }
    }
  }
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if ((!bVar3) &&
     (bVar3 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                        (&this->MountAbilityData,(void *)0x0), !bVar3)) {
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pFVar6 = FDS_MountBaseTableRow::GetRefByTamingNPC(*(ulong64 *)&pUVar5[2].field_0x8);
    this->DisMountEndTime = pFVar6->SuccessDismountingTime;
    this_00 = (UDS_MountAbilityData *)FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr);
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_MountAbilityData::TamingUnmount(this_00,this->_padding_,*(long64 *)&pUVar5[2].field_0x8);
    local_2e8[0] = Interaction_NPCTaming_Success;
    pFVar7 = FDS_GameplayTags::GetStateTag(local_2e8);
    UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar7);
    local_2e8[1] = 0x5c;
    pFVar7 = FDS_GameplayTags::GetStateTag(local_2e8 + 1);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar7);
    local_2d8 = OnTamingSuccess_EndEvent;
    local_2c8._padding_ = 0;
    local_2c8.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
    local_2c8.InvocationList.ArrayMax = _UNK_150631d44;
    local_2c8.CompactionThreshold = _UNK_150631d48;
    local_2c8.InvocationListLockCount = _UNK_150631d4c;
    local_2c8.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uStack_2d0 = (ulonglong)uStack_2d0._4_4_ << 0x20;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(&local_2c8,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_InteractionAbility_NPCTaming>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &local_2c8,(UDS_InteractionAbility_NPCTaming *)local_288,(pmf_84fb7c25 *)this);
    this_01 = (UDS_InteractionAbilityData_NPCTaming *)
              FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    fVar1 = pFVar6->SuccessDismountingTime;
    local_2a8.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
    local_2a8.InvocationList.ArrayMax = _UNK_150631d44;
    local_2a8.CompactionThreshold = _UNK_150631d48;
    local_2a8.InvocationListLockCount = _UNK_150631d4c;
    local_2a8._padding_ = 0;
    local_2a8.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              (&local_2a8,&local_2c8);
    UDS_InteractionAbilityData_NPCTaming::TamingTimerStart
              (this_01,(FDS_EventDelegate<> *)&local_2a8,fVar1);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               local_2c8.InvocationList.AllocatorInstance.Data,local_2c8.InvocationList.ArrayNum);
    if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
        local_2c8.InvocationList.AllocatorInstance.Data !=
        (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free(local_2c8.InvocationList.AllocatorInstance.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_2c8);
    return;
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InteractionAbility_NPCTaming::OnTamingSuccess_StartEvent",0x3c,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0xe2,L"AbilityData is nullptr.");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  return;
}

// OnTickComponent @ 14b80b120

void __thiscall
UDS_InteractionAbility_NPCTaming::OnTickComponent
          (UDS_InteractionAbility_NPCTaming *this,float param_1)

{
  bool bVar1;
  FGameplayTag *pFVar2;
  UWN_AbilitySystemComponent *pUVar3;
  EDS_StateTagType local_res8 [8];
  
  if ((byte)(this->TamingState - Mounting) < 2) {
    UpdateTaming(this,param_1);
    return;
  }
  if ((byte)(this->TamingState - FailDismounting) < 4) {
    local_res8[0] = Interaction_NPCTaming_Failed;
    pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
    pUVar3 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = UWN_AbilitySystemComponent::HasTag(pUVar3,pFVar2);
    if (!bVar1) {
      local_res8[0] = Interaction_NPCTaming_Success;
      pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
      pUVar3 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_)
      ;
      bVar1 = UWN_AbilitySystemComponent::HasTag(pUVar3,pFVar2);
      if (!bVar1) {
        local_res8[0] = Interaction_NPCTaming_Begin;
        pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
        pUVar3 = (UWN_AbilitySystemComponent *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        bVar1 = UWN_AbilitySystemComponent::HasTag(pUVar3,pFVar2);
        if (!bVar1) {
          local_res8[0] = Interaction_NPCTaming_Proccess;
          pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
          pUVar3 = (UWN_AbilitySystemComponent *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          bVar1 = UWN_AbilitySystemComponent::HasTag(pUVar3,pFVar2);
          if (!bVar1) {
            return;
          }
        }
        UpdateTaming(this,param_1);
        return;
      }
    }
    UpdateGetOffTaming(this,param_1);
  }
  return;
}

// TryActivate @ 14b814c10

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
UDS_InteractionAbility_NPCTaming::TryActivate
          (ulong64 *param_1,ulong64 *param_2,int param_3,int param_4)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_1a8 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityTagType local_168 [8];
  FWeakObjectPtr local_160;
  undefined8 local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_NPCTaming::TryActivate",0x2d,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x25;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_NPCTaming::TryActivate",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x2c,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b814e15;
    }
    local_168[0] = Interaction_NPCTaming;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCTaming>
              ((ulong64 *)&local_160,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr> *)
                       &local_160,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_160);
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_160);
      *(int *)&pUVar3[4].field_0x8 = param_3;
      pUVar3 = FWeakObjectPtr::Get(&local_160);
      local_158[0] = 0;
      local_168[0] = Interaction_NPCTaming;
      *(int *)&pUVar3[2].field_0x10 = param_4;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_168,(TObjectPtr<UWN_AbilityContext>)local_158);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_NPCTaming::TryActivate",0x2d,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0x33;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar4,pwVar5);
LAB_14b814e15:
  if ((FDS_EntityBase *)local_148._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// UnbindTamingState @ 14b817920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCTaming::UnbindTamingState(UDS_InteractionAbility_NPCTaming *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_InteractionEvent *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar3 = UDS_InteractionEvent::GetEvent();
  if (pUVar3 == (UDS_InteractionEvent *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPCTaming::UnbindTamingState",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Display,local_138.Ptr,0x148,L"interactionEvent is nullptr.")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8721591505879302473>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPCTaming.cpp"
                       ,0x149,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FDS_FilteredEventDelegate<unsigned___int64_const_,enum_EDS_TamingState_const_>::
    Remove<UDS_InteractionAbility_NPCTaming>(&pUVar3->InteractionNpcTamingStateDelegate,this);
  }
  return;
}

// UpdateGetOffTaming @ 14b817cc0

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
UDS_InteractionAbility_NPCTaming::UpdateGetOffTaming
          (UDS_InteractionAbility_NPCTaming *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  UDS_AbilitySystemComponent *this_00;
  UObject *pUVar7;
  FDS_EntityBase *this_01;
  TRotator<double> *pTVar8;
  UDS_MovementCore *this_02;
  TVector<double> *pTVar9;
  USceneComponent *pUVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar31;
  undefined1 auVar30 [16];
  double dVar32;
  double dVar34;
  undefined1 auVar33 [16];
  float fVar35;
  uint uVar36;
  uint uVar37;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res18;
  TVector<double>_u_0 local_c8;
  TRotator<double> local_a8 [6];
  
  bVar6 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MountAbilityData,(void *)0x0);
  if (bVar6) {
    local_res8[0] = Cancel;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_res8);
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  this_01 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar7[2].field_0x8);
  if (this_01 != (FDS_EntityBase *)0x0) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pcVar4 = *(code **)(*(longlong *)pUVar7 + 0x370);
    pTVar8 = FDS_EntityBase::GetEntityRotation(this_01,local_a8);
    (*pcVar4)(pUVar7,pTVar8);
  }
  this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar9 = UDS_MovementCore::GetActorForwardVector(this_02,(TVector<double> *)local_a8);
  dVar15 = (pTVar9->field0_0x0)._s_0.X;
  dVar16 = (pTVar9->field0_0x0)._s_0.Y;
  dVar1 = (pTVar9->field0_0x0)._s_0.Z;
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  uVar36 = (uint)__xmm_80000000000000008000000000000000;
  uVar37 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar23 = (double)this->GetOffBackDistance;
  dVar15 = dVar23 * dVar15;
  local_c8._s_0.X =
       (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar37,SUB84(dVar15,0) ^ uVar36);
  dVar16 = dVar23 * dVar16;
  dVar23 = dVar23 * dVar1;
  local_c8._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar37,SUB84(dVar16,0) ^ uVar36);
  local_c8._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) ^ uVar37,SUB84(dVar23,0) ^ uVar36);
  (**(code **)(*(longlong *)pUVar7 + 0x2c8))(pUVar7,&local_c8);
  if (this->DisMountEndTime != 0.0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x80))();
    bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res18,
                       (void *)0x0);
    if (!bVar6) {
      fVar35 = param_1 + this->DisMountActionTime;
      this->DisMountActionTime = fVar35;
      fVar35 = fVar35 / this->DisMountEndTime;
      dVar15 = (this->StartLocation).field0_0x0._s_0.X;
      if (__real_3f800000 <= fVar35) {
        fVar35 = __real_3f800000;
      }
      dVar16 = (this->StartLocation).field0_0x0._s_0.Y;
      dVar1 = (this->TargetLocation).field0_0x0._s_0.X;
      dVar23 = (this->TargetLocation).field0_0x0._s_0.Y;
      dVar2 = (this->StartLocation).field0_0x0._s_0.Z;
      if (fVar35 <= 0.0) {
        fVar35 = 0.0;
      }
      dVar5 = (double)fVar35;
      fVar14 = sinf(fVar35 * __real_40490fdb);
      dVar3 = (this->TargetLocation).field0_0x0._s_0.Z;
      fVar35 = this->GetOffUpDistance;
      pUVar10 = (USceneComponent *)FWeakObjectPtr::Get(&local_res18);
      local_c8._s_0.X = (dVar1 - dVar15) * dVar5 + dVar15;
      local_c8._s_0.Y = (dVar23 - dVar16) * dVar5 + dVar16;
      local_c8._s_0.Z = (double)(fVar14 * fVar35) + (dVar3 - dVar2) * dVar5 + dVar2;
      USceneComponent::SetRelativeLocation
                (pUVar10,(TVector<double> *)&local_c8._s_0,true,(FHitResult *)0x0,None);
      pUVar10 = (USceneComponent *)FWeakObjectPtr::Get(&local_res18);
      dVar15 = (this->StartRotation).Yaw;
      dVar16 = (this->StartRotation).Pitch;
      auVar24._0_8_ = __real_c056800000000000 - dVar15;
      auVar24._8_8_ = 0;
      dVar1 = (this->StartRotation).Roll;
      dVar29 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar37,SUB84(dVar16,0) ^ uVar36)
      ;
      auVar18._0_4_ = SUB84(dVar1,0) ^ uVar36;
      auVar18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20) ^ uVar37;
      dVar32 = (double)CONCAT44(auVar18._4_4_,auVar18._0_4_);
      auVar17._8_4_ = SUB84(auVar24._0_8_,0);
      auVar17._0_8_ = dVar29;
      auVar17._12_4_ = (int)((ulonglong)auVar24._0_8_ >> 0x20);
      auVar17 = divpd(auVar17,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar17 = roundpd(auVar24,auVar17,3);
      dVar23 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar25._0_8_ = auVar17._0_8_ * dVar23;
      dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar25._8_8_ = auVar17._8_8_ * dVar2;
      auVar18._8_8_ = 0;
      auVar17 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      dVar29 = dVar29 - auVar25._0_8_;
      dVar31 = auVar24._0_8_ - auVar25._8_8_;
      auVar17 = roundpd(auVar25,auVar17,3);
      dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar19._8_4_ = SUB84(dVar31,0);
      auVar19._0_8_ = dVar29;
      auVar19._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      dVar32 = dVar32 - auVar17._0_8_ * dVar3;
      dVar34 = 0.0 - auVar17._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      dVar22 = auVar19._8_8_ + dVar2;
      uVar11 = -(ulonglong)(0.0 <= dVar29);
      uVar12 = -(ulonglong)(0.0 <= dVar31);
      auVar26._0_8_ = uVar11 & (ulonglong)dVar29;
      auVar26._8_4_ = (undefined4)(uVar12 & (ulonglong)dVar31);
      auVar26._12_4_ = (undefined4)((uVar12 & (ulonglong)dVar31) >> 0x20);
      auVar28._0_4_ = ~(uint)uVar11 & SUB84(dVar29 + dVar23,0);
      auVar28._4_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)(dVar29 + dVar23) >> 0x20);
      auVar28._8_4_ = ~(uint)uVar12 & SUB84(dVar22,0);
      auVar28._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
      auVar20._8_4_ = SUB84(dVar34,0);
      auVar20._0_8_ = dVar32;
      auVar20._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      uVar11 = -(ulonglong)(0.0 <= dVar32);
      uVar12 = -(ulonglong)(0.0 <= dVar34);
      dVar22 = auVar20._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar28 = auVar28 | auVar26;
      auVar27._0_8_ = uVar11 & (ulonglong)dVar32;
      auVar27._8_4_ = (undefined4)(uVar12 & (ulonglong)dVar34);
      auVar27._12_4_ = (undefined4)((uVar12 & (ulonglong)dVar34) >> 0x20);
      auVar30._0_4_ = ~(uint)uVar11 & SUB84(dVar32 + dVar3,0);
      auVar30._4_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)(dVar32 + dVar3) >> 0x20);
      auVar30._8_4_ = ~(uint)uVar12 & SUB84(dVar22,0);
      auVar30._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
      auVar30 = auVar30 | auVar27;
      uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar28._0_8_);
      uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar28._8_8_);
      auVar33._0_8_ = uVar12 & (ulonglong)(auVar28._0_8_ - dVar23);
      uVar11 = uVar13 & (ulonglong)(auVar28._8_8_ - dVar2);
      auVar33._8_4_ = (undefined4)uVar11;
      auVar33._12_4_ = (undefined4)(uVar11 >> 0x20);
      auVar21._0_4_ = ~(uint)uVar12 & auVar28._0_4_;
      auVar21._4_4_ = ~(uint)(uVar12 >> 0x20) & auVar28._4_4_;
      auVar21._8_4_ = ~(uint)uVar13 & auVar28._8_4_;
      auVar21._12_4_ = ~(uint)(uVar13 >> 0x20) & auVar28._12_4_;
      uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar30._0_8_);
      local_c8._s_0.Y = SUB168(auVar33 | auVar21,8) * dVar5 + dVar15;
      local_c8._s_0.X = SUB168(auVar33 | auVar21,0) * dVar5 + dVar16;
      local_c8._s_0.Z =
           (double)(uVar11 & (ulonglong)(auVar30._0_8_ - dVar3) |
                   CONCAT44(~(uint)(uVar11 >> 0x20) & auVar30._4_4_,~(uint)uVar11 & auVar30._0_4_))
           * dVar5 + dVar1;
      USceneComponent::SetRelativeRotation
                (pUVar10,(TRotator<double> *)&local_c8._s_0,true,(FHitResult *)0x0,None);
    }
  }
  return;
}

// UpdateTaming @ 14b818440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_InteractionAbility_NPCTaming::UpdateTaming(UDS_InteractionAbility_NPCTaming *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UObject *pUVar5;
  FDS_EntityBase *pFVar6;
  longlong lVar7;
  USceneComponent *pUVar8;
  undefined1 auStackY_148 [32];
  FWeakObjectPtr local_118 [2];
  TVector<double>_u_0 local_108;
  FWeakObjectPtr local_e8;
  FWeakObjectPtr local_e0;
  TQuat<double> local_d8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  bVar4 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MountAbilityData,(void *)0x0);
  if (!bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pFVar6 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar5[2].field_0x8);
    if (pFVar6 != (FDS_EntityBase *)0x0) {
      (**(code **)(*(longlong *)this->_padding_ + 0x160))();
      bVar4 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_e0,(void *)0x0);
      if (!bVar4) {
        (**(code **)(*(longlong *)this->_padding_ + 0x80))();
        bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_118,
                           (void *)0x0);
        if (!bVar4) {
          (**(code **)(pFVar6->_padding_ + 0x80))(pFVar6);
          bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_e8,
                             (void *)0x0);
          if (bVar4) {
            lVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
            pUVar8 = (USceneComponent *)FWeakObjectPtr::Get(local_118);
            local_108._s_0.X = 0.0;
            local_108._s_0.Y = 0.0;
            local_108._s_0.Z =
                 (double)(float)(*(uint *)(lVar7 + 0x50) ^ __xmm_80000000800000008000000080000000);
            USceneComponent::SetRelativeLocation
                      (pUVar8,(TVector<double> *)&local_108._s_0,false,(FHitResult *)0x0,None);
            pUVar8 = (USceneComponent *)FWeakObjectPtr::Get(local_118);
            local_108._s_0.X = ___xmm_c0568000000000000000000000000000;
            local_108._s_0.Y = _UNK_152242e68;
            local_108._s_0.Z = 0.0;
            USceneComponent::SetRelativeRotation
                      (pUVar8,(TRotator<double> *)&local_108._s_0,false,(FHitResult *)0x0,None);
          }
          else {
            pUVar5 = FWeakObjectPtr::Get(&local_e8);
            (**(code **)(*(longlong *)pUVar5 + 0x520))(pUVar5,&local_b8);
            pUVar5 = FWeakObjectPtr::Get(&local_e0);
            dVar2 = *(double *)&pUVar5[8].field_0x8;
            dVar3 = *(double *)&pUVar5[8].field_0x10;
            dVar1 = *(double *)&pUVar5[8].field_0x18;
            pUVar8 = (USceneComponent *)FWeakObjectPtr::Get(local_118);
            local_108._s_0.X = local_98 - dVar2;
            local_108._s_0.Z = local_88 - dVar1;
            local_108._s_0.Y = dStack_90 - dVar3;
            local_d8.Z = dVar1;
            USceneComponent::SetRelativeLocation
                      (pUVar8,(TVector<double> *)&local_108._s_0,false,(FHitResult *)0x0,None);
            pUVar8 = (USceneComponent *)FWeakObjectPtr::Get(local_118);
            local_d8.X = local_b8;
            local_d8.Y = dStack_b0;
            local_d8.Z = local_a8;
            local_d8.W = dStack_a0;
            local_108._s_0.X = (pUVar8->RelativeLocation).field0_0x0._s_0.X;
            local_108._s_0.Y = (pUVar8->RelativeLocation).field0_0x0._s_0.Y;
            local_108._s_0.Z = (pUVar8->RelativeLocation).field0_0x0._s_0.Z;
            USceneComponent::SetRelativeLocationAndRotation
                      (pUVar8,(TVector<double> *)&local_108._s_0,&local_d8,false,(FHitResult *)0x0,
                       None);
          }
        }
      }
    }
  }
  return;
}

