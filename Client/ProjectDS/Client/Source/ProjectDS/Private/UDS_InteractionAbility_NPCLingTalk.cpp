// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b4bb630

UClass * __cdecl UDS_InteractionAbility_NPCLingTalk::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLingTalk.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCLingTalk",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLingTalk.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPCLingTalk,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPCLingTalk>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCLingTalk>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLingTalk.InnerSingleton;
}

// UDS_InteractionAbility_NPCLingTalk @ 14b4c15d0

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

UDS_InteractionAbility_NPCLingTalk * __thiscall
UDS_InteractionAbility_NPCLingTalk::UDS_InteractionAbility_NPCLingTalk
          (UDS_InteractionAbility_NPCLingTalk *this,FVTableHelper *param_1)

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

// UDS_InteractionAbility_NPCLingTalk @ 14b4c1620

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

UDS_InteractionAbility_NPCLingTalk * __thiscall
UDS_InteractionAbility_NPCLingTalk::UDS_InteractionAbility_NPCLingTalk
          (UDS_InteractionAbility_NPCLingTalk *this,FObjectInitializer *param_1)

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

// ~UDS_InteractionAbility_NPCLingTalk @ 14b4c2420

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
UDS_InteractionAbility_NPCLingTalk::~UDS_InteractionAbility_NPCLingTalk
          (UDS_InteractionAbility_NPCLingTalk *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4c3ab0

EDS_AbilityInputPolicy __thiscall
UDS_InteractionAbility_NPCLingTalk::GetDefaultInputPolicy(UDS_InteractionAbility_NPCLingTalk *this)

{
  return EndIfInput;
}

// GetPrivateStaticClass @ 14b4c4ba0

UClass * __cdecl UDS_InteractionAbility_NPCLingTalk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLingTalk.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCLingTalk",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLingTalk.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPCLingTalk,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPCLingTalk>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCLingTalk>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLingTalk.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c5450

bool __thiscall
UDS_InteractionAbility_NPCLingTalk::ShouldNotifyChangedCharState
          (UDS_InteractionAbility_NPCLingTalk *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_NPCLingTalk @ 14b4c56a0

void __cdecl
UDS_InteractionAbility_NPCLingTalk::StaticRegisterNativesUDS_InteractionAbility_NPCLingTalk(void)

{
  return;
}

// BindDelegate @ 14b7daa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCLingTalk::BindDelegate(UDS_InteractionAbility_NPCLingTalk *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168 [2];
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = &this->InteractionAbilityData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_NPCLingData::GetData((ulong64)local_168);
    bVar1 = FWeakObjectPtr::IsValid(local_168);
    if (bVar1) {
      local_158._8_4_ = 0;
      local_158._0_8_ = OnLingNpcTalkStart;
      local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
      local_158._16_8_ = OnLingNpcTalkStart;
      pUVar3 = FWeakObjectPtr::Get(local_168);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_NPCLingTalk>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
                  *)&pUVar3[4].field_0x18,(UDS_InteractionAbility_NPCLingTalk *)local_158,
                 (pmf_ffc6aebd *)this);
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                   "UDS_InteractionAbility_NPCLingTalk::BindDelegate",0x30,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,0x9a,L"npcLingData is nullptr. (%llu)");
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
      }
    }
  }
  return;
}

// OnAbilityRetryActivate @ 14b7f47d0

void __thiscall
UDS_InteractionAbility_NPCLingTalk::OnAbilityRetryActivate(UDS_InteractionAbility_NPCLingTalk *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7169262876245360726>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPCLingTalk.cpp"
                     ,0x56,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCanActivate @ 14b7f6980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_NPCLingTalk::OnCanActivate(UDS_InteractionAbility_NPCLingTalk *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar2) {
    this_00 = &this->InteractionAbilityData;
    bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (!bVar2) {
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCLingTalk>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      this_00->WeakPtr = *TVar3.WeakPtr;
    }
    bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar1 = *(int *)&pUVar5[2].field_0x10;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                        ((ulong64 *)&this->_padding_,(ulong64 *)&pUVar5[2].field_0x8,iVar1,true);
      if (bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar1 = *(int *)&pUVar5[2].field_0x10;
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_TargetEntity
                          ((ulong64 *)&pUVar5[2].field_0x8,iVar1,0);
        return bVar2;
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_NPCLingTalk::OnCanActivate",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x20,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b7f9040

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
UDS_InteractionAbility_NPCLingTalk::OnChangedCharState
          (UDS_InteractionAbility_NPCLingTalk *this,
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
                (&local_138,"UDS_InteractionAbility_NPCLingTalk::OnChangedCharState",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x5f,L"InCharStateData is nullptr.");
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
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_NPCLingTalk::OnChangedCharState",0x36,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x66,L"InteractionAbilityData is nullptr.");
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

// OnDeactivateAbility @ 14b7fc3c0

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
UDS_InteractionAbility_NPCLingTalk::OnDeactivateAbility
          (UDS_InteractionAbility_NPCLingTalk *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_EntityBase *pFVar3;
  FWeakObjectPtr local_res8;
  
  if (*param_1 == true) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      pFVar3 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar2[2].field_0x8);
      if (pFVar3 != (FDS_EntityBase *)0x0) {
        FDS_NpcLingService::RequestLingNpcTalkEnd();
      }
    }
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_NPCLingData::GetData((ulong64)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[4].field_0x18,this);
    }
  }
  return;
}

// OnLingNpcTalkStart @ 14b7ffd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCLingTalk::OnLingNpcTalkStart
          (UDS_InteractionAbility_NPCLingTalk *this,ulong64 param_1,int param_2)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  UDS_AbilitySystemComponent *pUVar3;
  UDS_LogManager *pUVar4;
  UDS_NPCDataSet *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_198 [32];
  EDS_AbilityDeactivateType local_158 [8];
  FWeakObjectPtr local_150;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_148[0] = param_1;
  if (param_2 == 0) {
    local_158[0] = Cancel;
    pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar3,(FGameplayTag *)&this->_padding_,local_158);
  }
  else {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_150);
    bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_150,(void *)0x0);
    if (bVar2) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_NPCLingTalk::OnLingNpcTalkStart",0x36,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0xba,L"npcDataSet is nullptr. (%llu)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      local_158[0] = Success;
      pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_)
      ;
      UDS_AbilitySystemComponent::DeactivateAbilityByTag
                (pUVar3,(FGameplayTag *)&this->_padding_,local_158);
    }
    else {
      pUVar5 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_150);
      this_00 = &this->InteractionAbilityData;
      plVar7 = &this->_padding_;
      bVar2 = UDS_NPCDataSet::IsGimmickInteraction(pUVar5);
      if (bVar2) {
        pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_InteractionAbility_NPCGimmick::TryActivate
                  ((ulong64 *)plVar7,local_148,*(int *)&pUVar6[2].field_0x10);
      }
      else {
        pUVar5 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_150);
        bVar2 = UDS_NPCDataSet::IsCamp(pUVar5);
        if (bVar2) {
          pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          iVar1 = *(int *)&pUVar6[2].field_0x10;
          pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UDS_InteractionAbility_NPCCamp::TryActivate
                    ((ulong64 *)plVar7,local_148,(FDS_CampSeatInfo *)&pUVar6[2].field_0x18,iVar1);
        }
        else {
          pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UDS_InteractionAbility_NPC::TryActivate
                    ((ulong64 *)plVar7,local_148,*(int *)&pUVar6[2].field_0x10);
        }
      }
    }
  }
  return;
}

// OnPostActivateAbility @ 14b8042b0

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
UDS_InteractionAbility_NPCLingTalk::OnPostActivateAbility(UDS_InteractionAbility_NPCLingTalk *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *this_01;
  UObject *pUVar3;
  FDS_EntityBase *pFVar4;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_168 [8];
  FWeakObjectPtr local_160;
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = &this->InteractionAbilityData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar1) {
      FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_NPCLingData::GetData((ulong64)&local_160);
      bVar1 = FWeakObjectPtr::IsValid(&local_160);
      if (bVar1) {
        local_158._8_4_ = 0;
        local_158._0_8_ = OnLingNpcTalkStart;
        local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
        local_158._16_8_ = OnLingNpcTalkStart;
        pUVar3 = FWeakObjectPtr::Get(&local_160);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_InteractionAbility_NPCLingTalk>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
                    *)&pUVar3[4].field_0x18,(UDS_InteractionAbility_NPCLingTalk *)local_158,
                   (pmf_ffc6aebd *)this);
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_38 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                     "UDS_InteractionAbility_NPCLingTalk::BindDelegate",0x30,Yes);
          UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,0x9a,L"npcLingData is nullptr. (%llu)")
          ;
          if (local_38 != (void *)0x0) {
            FMemory::Free(local_38);
          }
        }
      }
    }
    bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pFVar4 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar3[2].field_0x8);
      if (pFVar4 != (FDS_EntityBase *)0x0) {
        pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        FDS_NpcLingService::RequestLingNpcTalkStart(*(ulong64 *)&pUVar3[2].field_0x8);
        return;
      }
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                 "UDS_InteractionAbility_NPCLingTalk::OnPostActivateAbility",0x39,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,0x39,L"InteractionAbilityData is nullptr.")
      ;
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  local_168[0] = Cancel;
  this_01 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_01,(FGameplayTag *)&this->_padding_,local_168);
  return;
}

// SendNpcTalkEndRequest @ 14b810cb0

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

bool __thiscall
UDS_InteractionAbility_NPCLingTalk::SendNpcTalkEndRequest(UDS_InteractionAbility_NPCLingTalk *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_EntityBase *pFVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pFVar3 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar2[2].field_0x8);
    if (pFVar3 != (FDS_EntityBase *)0x0) {
      FDS_NpcLingService::RequestLingNpcTalkEnd();
      return true;
    }
  }
  return false;
}

// SendNpcTalkStartRequest @ 14b810d00

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

bool __thiscall
UDS_InteractionAbility_NPCLingTalk::SendNpcTalkStartRequest
          (UDS_InteractionAbility_NPCLingTalk *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  FDS_EntityBase *pFVar3;
  
  this_00 = &this->InteractionAbilityData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar3 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar2[2].field_0x8);
    if (pFVar3 != (FDS_EntityBase *)0x0) {
      pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FDS_NpcLingService::RequestLingNpcTalkStart(*(ulong64 *)&pUVar2[2].field_0x8);
      return true;
    }
  }
  return false;
}

// TryActivate @ 14b814810

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
UDS_InteractionAbility_NPCLingTalk::TryActivate
          (ulong64 *param_1,ulong64 *param_2,FDS_CampSeatInfo *param_3,int param_4)

{
  double dVar1;
  undefined4 uVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FDS_EntityBase *this;
  UObject *pUVar5;
  undefined1 auStackY_1a8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  EDS_AbilityTagType local_168 [8];
  FWeakObjectPtr local_160;
  undefined8 local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*param_1 == 0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_NPCLingTalk::TryActivate",0x2f,Yes);
    pwVar7 = L"InSourceEntityID is 0.";
    uVar6 = 0x77;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_NPCLingTalk::TryActivate",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x7e,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b8149bc;
    }
    local_168[0] = Interaction_NPCLingTalk;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCLingTalk>
              ((ulong64 *)&local_160,(EDS_AbilityTagType *)param_1);
    bVar3 = FWeakObjectPtr::IsValid(&local_160);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_160);
      *(ulong64 *)&pUVar5[2].field_0x8 = *param_2;
      pUVar5 = FWeakObjectPtr::Get(&local_160);
      uVar2 = *(undefined4 *)&param_3->field_0x4;
      dVar1 = (param_3->Position).field0_0x0._s_0.X;
      *(int *)&pUVar5[2].field_0x18 = param_3->Index;
      *(undefined4 *)&pUVar5[2].field_0x1c = uVar2;
      *(double *)&pUVar5[2].field_0x20 = dVar1;
      dVar1 = (param_3->Position).field0_0x0._s_0.Z;
      *(double *)(pUVar5 + 3) = (param_3->Position).field0_0x0._s_0.Y;
      *(double *)&pUVar5[3].field_0x8 = dVar1;
      *(ulong64 *)&pUVar5[3].field_0x10 = param_3->OccupantEntityID;
      pUVar5 = FWeakObjectPtr::Get(&local_160);
      local_158[0] = 0;
      local_168[0] = Interaction_NPCLingTalk;
      *(int *)&pUVar5[2].field_0x10 = param_4;
      bVar3 = FDS_EntityBase::TryActivateAbility
                        (this,local_168,(TObjectPtr<UWN_AbilityContext>)local_158);
      return bVar3;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_NPCLingTalk::TryActivate",0x2f,Yes);
    pwVar7 = L"abilityData is nullptr.";
    uVar6 = 0x85;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar6,pwVar7);
LAB_14b8149bc:
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// UnbindDelegate @ 14b8170c0

void __thiscall
UDS_InteractionAbility_NPCLingTalk::UnbindDelegate(UDS_InteractionAbility_NPCLingTalk *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_NPCLingData::GetData((ulong64)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[4].field_0x18,this);
    }
  }
  return;
}

