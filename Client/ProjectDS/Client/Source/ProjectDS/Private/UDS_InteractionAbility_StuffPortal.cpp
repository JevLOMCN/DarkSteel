// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b4bbbb0

UClass * __cdecl UDS_InteractionAbility_StuffPortal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffPortal.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffPortal",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffPortal.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffPortal,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_StuffPortal>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffPortal>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffPortal.InnerSingleton;
}

// UDS_InteractionAbility_StuffPortal @ 14b4c1b70

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

UDS_InteractionAbility_StuffPortal * __thiscall
UDS_InteractionAbility_StuffPortal::UDS_InteractionAbility_StuffPortal
          (UDS_InteractionAbility_StuffPortal *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_InteractionAbility_StuffPortal @ 14b4c1bc0

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

UDS_InteractionAbility_StuffPortal * __thiscall
UDS_InteractionAbility_StuffPortal::UDS_InteractionAbility_StuffPortal
          (UDS_InteractionAbility_StuffPortal *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_InteractionAbility_StuffPortal @ 14b4c2530

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
UDS_InteractionAbility_StuffPortal::~UDS_InteractionAbility_StuffPortal
          (UDS_InteractionAbility_StuffPortal *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4c3ae0

EDS_AbilityInputPolicy __thiscall
UDS_InteractionAbility_StuffPortal::GetDefaultInputPolicy(UDS_InteractionAbility_StuffPortal *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b4c5020

UClass * __cdecl UDS_InteractionAbility_StuffPortal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffPortal.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffPortal",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffPortal.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffPortal,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_StuffPortal>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffPortal>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffPortal.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c5480

bool __thiscall
UDS_InteractionAbility_StuffPortal::ShouldNotifyChangedCharState
          (UDS_InteractionAbility_StuffPortal *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_StuffPortal @ 14b4c5700

void __cdecl
UDS_InteractionAbility_StuffPortal::StaticRegisterNativesUDS_InteractionAbility_StuffPortal(void)

{
  return;
}

// InitInteractionAbilityData_StuffPortal @ 14b7efbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UDS_InteractionAbility_StuffPortal::InitInteractionAbilityData_StuffPortal
          (TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>::UEOpEquals
                    (param_1,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,
                 "UDS_InteractionAbility_StuffPortal::InitInteractionAbilityData_StuffPortal",0x4a,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xf3,L"OutInteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  return true;
}

// OnAbilityRetryActivate @ 14b7f48b0

void __thiscall
UDS_InteractionAbility_StuffPortal::OnAbilityRetryActivate(UDS_InteractionAbility_StuffPortal *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5293455507653132469>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_StuffPortal.cpp"
                     ,0xb5,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCanActivate @ 14b7f7020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_StuffPortal::OnCanActivate(UDS_InteractionAbility_StuffPortal *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  uint uVar6;
  wchar_t *pwVar7;
  bool local_148 [4];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (!bVar2) {
    return false;
  }
  this_00 = &this->InteractionAbilityData;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    local_148[0] = true;
    TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffPortal>
                      (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
    this_00->WeakPtr = *TVar3.WeakPtr;
  }
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffPortal::OnCanActivate",0x31,Yes);
    pwVar7 = L"InteractionAbilityData is nullptr.";
    uVar6 = 0x28;
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar1 = *(int *)&pUVar5[2].field_0x10;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                      ((ulong64 *)&this->_padding_,(ulong64 *)&pUVar5[2].field_0x8,iVar1,true);
    if (!bVar2) {
      return false;
    }
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar1 = *(int *)&pUVar5[2].field_0x10;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_TargetEntity
                      ((ulong64 *)&pUVar5[2].field_0x8,iVar1,0);
    if (!bVar2) {
      return false;
    }
    local_148[0] = true;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar1 = *(int *)&pUVar5[2].field_0x10;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_Breach
                      ((ulong64 *)&pUVar5[2].field_0x8,iVar1,local_148);
    if (!bVar2) {
      return false;
    }
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (!bVar2) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,
               "UDS_InteractionAbility_StuffPortal::InitInteractionAbilityData_StuffPortal",0x4a,Yes
              );
    pwVar7 = L"OutInteractionAbilityData is nullptr.";
    uVar6 = 0xf3;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// OnChangedBreachDetailInfo @ 14b7f7f60

void __thiscall
UDS_InteractionAbility_StuffPortal::OnChangedBreachDetailInfo
          (UDS_InteractionAbility_StuffPortal *this,FDS_BreachDetailInfo *param_1,
          EDS_BreachInfoChangeType param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_AbilitySystemComponent *pUVar3;
  UDS_ContentManager *this_00;
  UDS_ContentArguments *this_01;
  UDS_StuffPortalData *pUVar4;
  FName local_res8;
  FWeakObjectPtr local_res10 [2];
  UDS_ContentArguments *local_res20;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  if (param_1->StuffPortalEntityID != *(ulong64 *)&pUVar2[2].field_0x8) {
    return;
  }
  if (Updated < param_2) {
    if (param_2 != Removed) {
      return;
    }
    local_res8.ComparisonIndex.Value._0_1_ = 2;
    pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar3,(FGameplayTag *)&this->_padding_,(EDS_AbilityDeactivateType *)&local_res8);
    return;
  }
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 != (UDS_ContentManager *)0x0) {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_StuffPortalData::GetData((ulong64)local_res10);
    bVar1 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)local_res10,(void *)0x0
                      );
    if (!bVar1) {
      pUVar2 = GetTransientPackageAsObject();
      this_01 = NewObject<UDS_ContentArguments>(pUVar2);
      pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      ::FName::FName(&local_res8,"StuffPortalEntityID");
      UDS_ContentArguments::AddUInt64(this_01,&local_res8,(ulong64 *)&pUVar2[2].field_0x8);
      pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      ::FName::FName(&local_res8,"InteractionID");
      UDS_ContentArguments::AddInt32(this_01,&local_res8,(int *)&pUVar2[2].field_0x10);
      pUVar4 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(local_res10);
      bVar1 = UDS_StuffPortalData::IsBreach(pUVar4);
      if (bVar1) {
        local_res20 = this_01;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UDS_ContentArguments *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        local_res8.ComparisonIndex.Value = 15000;
      }
      else {
        pUVar4 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(local_res10);
        bVar1 = UDS_StuffPortalData::IsGate(pUVar4);
        if (!bVar1) goto LAB_14b7f8106;
        local_res20 = this_01;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UDS_ContentArguments *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        local_res8.ComparisonIndex.Value = 17000;
      }
      bVar1 = UDS_ContentManager::OpenContent
                        (this_00,(EDS_ContentsTabFrameType *)&local_res8,
                         (TObjectPtr<UDS_ContentArguments>)&local_res20);
      if (bVar1) {
        return;
      }
    }
  }
LAB_14b7f8106:
  local_res8.ComparisonIndex.Value._0_1_ = 2;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,(FGameplayTag *)&this->_padding_,(EDS_AbilityDeactivateType *)&local_res8);
  return;
}

// OnChangedCharState @ 14b7f96d0

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
UDS_InteractionAbility_StuffPortal::OnChangedCharState
          (UDS_InteractionAbility_StuffPortal *this,
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
                (&local_138,"UDS_InteractionAbility_StuffPortal::OnChangedCharState",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xbe,L"InCharStateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_178[0] = Cancel;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_178);
  }
  else {
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_StuffPortal::OnChangedCharState",0x36,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0xc5,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
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
  }
  return;
}

// OnCloseContentEvent @ 14b7fa8c0

void __thiscall
UDS_InteractionAbility_StuffPortal::OnCloseContentEvent
          (UDS_InteractionAbility_StuffPortal *this,EDS_ContentsTabFrameType param_1)

{
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res10 [24];
  
  if ((param_1 == Breach) || (param_1 == Gate)) {
    local_res10[0] = Success;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_res10);
  }
  return;
}

// OnDeactivateAbility @ 14b7fcb70

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
UDS_InteractionAbility_StuffPortal::OnDeactivateAbility
          (UDS_InteractionAbility_StuffPortal *this,bool *param_1)

{
  bool bVar1;
  FGameplayTag *pFVar2;
  UObject *pUVar3;
  UDS_ContentManager *pUVar4;
  EDS_StateTagType local_res8 [8];
  FWeakObjectPtr local_res18 [2];
  
  local_res8[0] = Interaction_StuffPortal;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
  }
  pUVar4 = UDS_ContentManager::GetInst();
  if (pUVar4 != (UDS_ContentManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->CloseContentEvent,this
              );
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[0xc].field_0x18,this);
  }
  return;
}

// OnPostActivateAbility @ 14b8059e0

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
UDS_InteractionAbility_StuffPortal::OnPostActivateAbility(UDS_InteractionAbility_StuffPortal *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *pUVar4;
  UDS_StuffPortalData *pUVar5;
  UDS_PhasingManager *this_00;
  UObject *pUVar6;
  FGameplayTag *pFVar7;
  UDS_ContentManager *pUVar8;
  undefined1 auStackY_1b8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  EDS_AbilityDeactivateType local_188 [8];
  FWeakObjectPtr local_180;
  undefined1 local_178 [304];
  void *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b805a95;
    pUVar3 = UDS_LogManager::GetInst();
    local_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_178 + 0x30),
               "UDS_InteractionAbility_StuffPortal::OnPostActivateAbility",0x39,Yes);
    pwVar10 = L"InteractionAbilityData is nullptr.";
    uVar9 = 0x4d;
  }
  else {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_StuffPortalData::GetData((ulong64)&local_180);
    bVar2 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)&local_180,(void *)0x0)
    ;
    if (!bVar2) {
      pUVar5 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_180);
      bVar2 = UDS_StuffPortalData::IsBreach(pUVar5);
      if (bVar2) {
LAB_14b805c9d:
        pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
        bVar2 = FDS_PhasingService::RequestBreachDetailInfo((ulong64 *)&pUVar6[2].field_0x8);
        if (bVar2) {
          UDS_PlayerData::GetMainPlayerData();
          bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)(local_178 + 0x10),
                             (void *)0x0);
          if (!bVar2) {
            local_178._8_4_ = 0;
            local_178._0_8_ = OnChangedBreachDetailInfo;
            local_178._40_8_ = (ulonglong)(uint)local_178._12_4_ << 0x20;
            local_178._32_8_ = OnChangedBreachDetailInfo;
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_178 + 0x10));
            TMulticastDelegateRegistration<void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_InteractionAbility_StuffPortal>
                      (&pUVar6[0xc].field_0x18,(UDS_InteractionAbility_StuffPortal *)local_178,
                       (pmf_b980afb6 *)this);
LAB_14b805df2:
            local_188[0] = 0x4e;
            pFVar7 = FDS_GameplayTags::GetStateTag(local_188);
            UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar7);
            pUVar8 = UDS_ContentManager::GetInst();
            if (pUVar8 == (UDS_ContentManager *)0x0) {
              return;
            }
            local_178._8_4_ = 0;
            local_178._0_8_ = OnCloseContentEvent;
            local_178._40_8_ = (ulonglong)(uint)local_178._12_4_ << 0x20;
            local_178._32_8_ = OnCloseContentEvent;
            TMulticastDelegateRegistration<void___cdecl(enum_EDS_ContentsTabFrameType),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_InteractionAbility_StuffPortal>
                      (&pUVar8->CloseContentEvent,(UDS_InteractionAbility_StuffPortal *)local_178,
                       (pmf_33fcb570 *)this);
            return;
          }
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b805d8d;
          pUVar3 = UDS_LogManager::GetInst();
          local_48 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_178 + 0x30),
                     "UDS_InteractionAbility_StuffPortal::OnPostActivateAbility",0x39,Yes);
          pwVar10 = L"playerData is nullptr.";
          uVar9 = 0x67;
        }
        else {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b805d8d;
          pUVar3 = UDS_LogManager::GetInst();
          local_48 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_178 + 0x30),
                     "UDS_InteractionAbility_StuffPortal::OnPostActivateAbility",0x39,Yes);
          pwVar10 = L"Failed to RequestBreachInfo().";
          uVar9 = 0x5f;
        }
      }
      else {
        pUVar5 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_180);
        bVar2 = UDS_StuffPortalData::IsGate(pUVar5);
        if (bVar2) goto LAB_14b805c9d;
        pUVar5 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_180);
        bVar2 = UDS_StuffPortalData::IsInn(pUVar5);
        if (bVar2) {
          this_00 = UDS_PhasingManager::GetInst();
          if (this_00 != (UDS_PhasingManager *)0x0) {
            bVar2 = UDS_PhasingManager::IsPhasingInProgress(this_00);
            if (bVar2) {
              FDS_PhasingService::SendPhasingLeave();
            }
            else {
              pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
              iVar1 = *(int *)&pUVar6[2].field_0x10;
              pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
              UDS_PhasingManager::EnterInn(this_00,(ulong64 *)&pUVar6[2].field_0x8,iVar1);
            }
            local_188[0] = Success;
            pUVar4 = (UDS_AbilitySystemComponent *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            UDS_AbilitySystemComponent::DeactivateAbilityByTag
                      (pUVar4,(FGameplayTag *)&this->_padding_,local_188);
            goto LAB_14b805df2;
          }
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b805d8d;
          pUVar3 = UDS_LogManager::GetInst();
          local_48 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_178 + 0x30),
                     "UDS_InteractionAbility_StuffPortal::OnPostActivateAbility",0x39,Yes);
          pwVar10 = L"phasingMng is nullptr.";
          uVar9 = 0x74;
        }
        else {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b805d8d;
          pUVar3 = UDS_LogManager::GetInst();
          local_48 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_178 + 0x30),
                     "UDS_InteractionAbility_StuffPortal::OnPostActivateAbility",0x39,Yes);
          pwVar10 = L"StuffPortal type is wrong.";
          uVar9 = 0x89;
        }
      }
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_40,uVar9,pwVar10);
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
LAB_14b805d8d:
      local_188[0] = Cancel;
      pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_)
      ;
      UDS_AbilitySystemComponent::DeactivateAbilityByTag
                (pUVar4,(FGameplayTag *)&this->_padding_,local_188);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b805a95;
    pUVar3 = UDS_LogManager::GetInst();
    local_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_178 + 0x30),
               "UDS_InteractionAbility_StuffPortal::OnPostActivateAbility",0x39,Yes);
    pwVar10 = L"stuffPortalData is nullptr.";
    uVar9 = 0x55;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_40,uVar9,pwVar10);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
LAB_14b805a95:
  local_188[0] = Cancel;
  pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar4,(FGameplayTag *)&this->_padding_,local_188);
  return;
}

// OpenBreachContent @ 14b80b530

bool __thiscall
UDS_InteractionAbility_StuffPortal::OpenBreachContent(UDS_InteractionAbility_StuffPortal *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_ContentManager *this_01;
  UObject *pUVar2;
  UDS_ContentArguments *this_02;
  UDS_StuffPortalData *pUVar3;
  FName local_res10;
  FWeakObjectPtr local_res18;
  UDS_ContentArguments *local_res20;
  
  this_01 = UDS_ContentManager::GetInst();
  if (this_01 != (UDS_ContentManager *)0x0) {
    this_00 = &this->InteractionAbilityData;
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_StuffPortalData::GetData((ulong64)&local_res18);
    bVar1 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)&local_res18,
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = GetTransientPackageAsObject();
      this_02 = NewObject<UDS_ContentArguments>(pUVar2);
      pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      ::FName::FName(&local_res10,"StuffPortalEntityID");
      UDS_ContentArguments::AddUInt64(this_02,&local_res10,(ulong64 *)&pUVar2[2].field_0x8);
      pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      ::FName::FName(&local_res10,"InteractionID");
      UDS_ContentArguments::AddInt32(this_02,&local_res10,(int *)&pUVar2[2].field_0x10);
      pUVar3 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_res18);
      bVar1 = UDS_StuffPortalData::IsBreach(pUVar3);
      local_res20 = this_02;
      if (bVar1) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_02 != (UDS_ContentArguments *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        local_res10.ComparisonIndex.Value = 15000;
      }
      else {
        pUVar3 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_res18);
        bVar1 = UDS_StuffPortalData::IsGate(pUVar3);
        if (!bVar1) {
          return false;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_02 != (UDS_ContentArguments *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        local_res10.ComparisonIndex.Value = 17000;
      }
      bVar1 = UDS_ContentManager::OpenContent
                        (this_01,(EDS_ContentsTabFrameType *)&local_res10,
                         (TObjectPtr<UDS_ContentArguments>)&local_res20);
      return bVar1;
    }
  }
  return false;
}

// RequestBreachInfo @ 14b80ffd0

bool __thiscall
UDS_InteractionAbility_StuffPortal::RequestBreachInfo(UDS_InteractionAbility_StuffPortal *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  bVar1 = FDS_PhasingService::RequestBreachDetailInfo((ulong64 *)&pUVar2[2].field_0x8);
  return bVar1;
}

// TryActivate @ 14b8152e0

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
UDS_InteractionAbility_StuffPortal::TryActivate(ulong64 *param_1,ulong64 *param_2,int param_3)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffPortal::TryActivate",0x2f,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0xd6;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffPortal::TryActivate",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xdd,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b8154d3;
    }
    local_158[0] = Interaction_StuffPortal;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffPortal>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr> *)
                       &local_150,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = Interaction_StuffPortal;
      *(int *)&pUVar3[2].field_0x10 = param_3;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffPortal::TryActivate",0x2f,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0xe4;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b8154d3:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

