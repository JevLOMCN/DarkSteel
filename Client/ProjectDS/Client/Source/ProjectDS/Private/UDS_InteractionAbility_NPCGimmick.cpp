// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b4bd040

UClass * __cdecl UDS_InteractionAbility_NPCGimmick::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCGimmick.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCGimmick",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCGimmick.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPCGimmick,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPCGimmick>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCGimmick>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCGimmick.InnerSingleton;
}

// UDS_InteractionAbility_NPCGimmick @ 14b4c1490

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

UDS_InteractionAbility_NPCGimmick * __thiscall
UDS_InteractionAbility_NPCGimmick::UDS_InteractionAbility_NPCGimmick
          (UDS_InteractionAbility_NPCGimmick *this,FVTableHelper *param_1)

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

// UDS_InteractionAbility_NPCGimmick @ 14b4c14e0

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

UDS_InteractionAbility_NPCGimmick * __thiscall
UDS_InteractionAbility_NPCGimmick::UDS_InteractionAbility_NPCGimmick
          (UDS_InteractionAbility_NPCGimmick *this,FObjectInitializer *param_1)

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

// ~UDS_InteractionAbility_NPCGimmick @ 14b4c23e0

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
UDS_InteractionAbility_NPCGimmick::~UDS_InteractionAbility_NPCGimmick
          (UDS_InteractionAbility_NPCGimmick *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4c3a90

EDS_AbilityInputPolicy __thiscall
UDS_InteractionAbility_NPCGimmick::GetDefaultInputPolicy(UDS_InteractionAbility_NPCGimmick *this)

{
  return None;
}

// GetPrivateStaticClass @ 14b4c4a20

UClass * __cdecl UDS_InteractionAbility_NPCGimmick::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCGimmick.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCGimmick",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCGimmick.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPCGimmick,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPCGimmick>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCGimmick>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCGimmick.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c5430

bool __thiscall
UDS_InteractionAbility_NPCGimmick::ShouldNotifyChangedCharState
          (UDS_InteractionAbility_NPCGimmick *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_NPCGimmick @ 14b4c5680

void __cdecl
UDS_InteractionAbility_NPCGimmick::StaticRegisterNativesUDS_InteractionAbility_NPCGimmick(void)

{
  return;
}

// BindInteractionEvent @ 14b7daef0

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

bool __thiscall
UDS_InteractionAbility_NPCGimmick::BindInteractionEvent
          (UDS_InteractionAbility_NPCGimmick *this,ulong64 param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UDS_ContentManager *pUVar5;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_188 [2];
  undefined1 local_178 [304];
  void *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_178._32_8_ = param_1;
  pFVar2 = FDS_EntityBase::GetEntityBase((ulong64 *)(local_178 + 0x20));
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_48 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_178 + 0x30),
                 "UDS_InteractionAbility_NPCGimmick::BindInteractionEvent",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_40,0xcc,L"gimmickEntity is nullptr. (%llu)");
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
    }
    bVar1 = false;
  }
  else {
    UDS_NPCGimmickData::GetData((ulong64)local_188);
    bVar1 = FWeakObjectPtr::IsValid(local_188);
    if (bVar1) {
      pUVar4 = FWeakObjectPtr::Get(local_188);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[5].field_0x10,this);
      local_178._8_4_ = 0;
      local_178._0_8_ = OnInteractionStart;
      local_178._24_8_ = (ulonglong)(uint)local_178._12_4_ << 0x20;
      local_178._16_8_ = OnInteractionStart;
      pUVar4 = FWeakObjectPtr::Get(local_188);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_NPCGimmick>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
                  *)&pUVar4[5].field_0x10,(UDS_InteractionAbility_NPCGimmick *)local_178,
                 (pmf_3be06fa9 *)this);
      pUVar4 = FWeakObjectPtr::Get(local_188);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[6].field_0x8,this);
      local_178._8_4_ = 0;
      local_178._0_8_ = OnInteractionCancel;
      local_178._24_8_ = (ulonglong)(uint)local_178._12_4_ << 0x20;
      local_178._16_8_ = OnInteractionCancel;
      pUVar4 = FWeakObjectPtr::Get(local_188);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_NPCGimmick>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
                  *)&pUVar4[6].field_0x8,(UDS_InteractionAbility_NPCGimmick *)local_178,
                 (pmf_2e7cad32 *)this);
      pUVar4 = FWeakObjectPtr::Get(local_188);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 7),this);
      local_178._8_4_ = 0;
      local_178._0_8_ = OnInteractionComplete;
      local_178._24_8_ = (ulonglong)(uint)local_178._12_4_ << 0x20;
      local_178._16_8_ = OnInteractionComplete;
      pUVar4 = FWeakObjectPtr::Get(local_188);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_InteractionAbility_NPCGimmick>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                  *)(pUVar4 + 7),(UDS_InteractionAbility_NPCGimmick *)local_178,(pmf_5ba9f26c *)this
                );
      pUVar4 = FWeakObjectPtr::Get(local_188);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[7].field_0x20,this);
      local_178._8_4_ = 0;
      local_178._0_8_ = OnAltarBossSummonComplete;
      local_178._24_8_ = (ulonglong)(uint)local_178._12_4_ << 0x20;
      local_178._16_8_ = OnAltarBossSummonComplete;
      pUVar4 = FWeakObjectPtr::Get(local_188);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_NPCGimmick>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
                  *)&pUVar4[7].field_0x20,(UDS_InteractionAbility_NPCGimmick *)local_178,
                 (pmf_2e7cad32 *)this);
    }
    pUVar5 = UDS_ContentManager::GetInst();
    if (pUVar5 != (UDS_ContentManager *)0x0) {
      local_178._8_4_ = 0;
      local_178._0_8_ = OnCloseContentEvent;
      local_178._24_8_ = (ulonglong)(uint)local_178._12_4_ << 0x20;
      local_178._16_8_ = OnCloseContentEvent;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_ContentsTabFrameType),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_NPCGimmick>
                (&pUVar5->CloseContentEvent,(UDS_InteractionAbility_NPCGimmick *)local_178,
                 (pmf_bfdc2960 *)this);
    }
    bVar1 = true;
  }
  return bVar1;
}

// DoGimmickInteraction @ 14b7e43c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_NPCGimmick::DoGimmickInteraction(UDS_InteractionAbility_NPCGimmick *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_NPCDataSet *this_01;
  UDS_ContentManager *this_02;
  UObject *pUVar4;
  UDS_ContentArguments *this_03;
  undefined1 auStackY_188 [32];
  FName local_158;
  FWeakObjectPtr local_150;
  UDS_ContentArguments *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = &this->InteractionAbilityData;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPCGimmick::DoGimmickInteraction",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xa7,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_150);
    bVar2 = FWeakObjectPtr::IsValid(&local_150);
    if (bVar2) {
      this_01 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_150);
      bVar2 = UDS_NPCDataSet::HasInteractionFunctionType(this_01,SummonBossAltar);
      if (!bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar1 = *(int *)&pUVar4[2].field_0x10;
        pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        FDS_GimmickService::RequestGimmickInteraction(*(ulong64 *)&pUVar4[2].field_0x8,iVar1);
        return true;
      }
      this_02 = UDS_ContentManager::GetInst();
      if (this_02 != (UDS_ContentManager *)0x0) {
        pUVar4 = GetTransientPackageAsObject();
        this_03 = NewObject<UDS_ContentArguments>(pUVar4);
        pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        ::FName::FName(&local_158,"AltarEntityID");
        UDS_ContentArguments::AddUInt64(this_03,&local_158,(ulong64 *)&pUVar4[2].field_0x8);
        pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        ::FName::FName(&local_158,"InteractionID");
        UDS_ContentArguments::AddInt32(this_03,&local_158,(int *)&pUVar4[2].field_0x10);
        local_148[0] = this_03;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_03 != (UDS_ContentArguments *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_03);
        }
        local_158.ComparisonIndex.Value = 14000;
        UDS_ContentManager::OpenContent
                  (this_02,(EDS_ContentsTabFrameType *)&local_158,
                   (TObjectPtr<UDS_ContentArguments>)local_148);
        return true;
      }
    }
  }
  return false;
}

// OnAbilityRetryActivate @ 14b7f4750

void __thiscall
UDS_InteractionAbility_NPCGimmick::OnAbilityRetryActivate(UDS_InteractionAbility_NPCGimmick *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2293703872562069610>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPCGimmick.cpp"
                     ,0x6a,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnAltarBossSummonComplete @ 14b7f4e10

void __thiscall
UDS_InteractionAbility_NPCGimmick::OnAltarBossSummonComplete
          (UDS_InteractionAbility_NPCGimmick *this,ulong64 param_1,int param_2)

{
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res8 [32];
  
  local_res8[0] = Success;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res8);
  return;
}

// OnCanActivate @ 14b7f6680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_NPCGimmick::OnCanActivate(UDS_InteractionAbility_NPCGimmick *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr> TVar3;
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
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCGimmick>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      this_00->WeakPtr = *TVar3.WeakPtr;
    }
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_NPCGimmick::OnCanActivate",0x30,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x24,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
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
  }
  return false;
}

// OnChangedCharState @ 14b7f8be0

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
UDS_InteractionAbility_NPCGimmick::OnChangedCharState
          (UDS_InteractionAbility_NPCGimmick *this,
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
                (&local_138,"UDS_InteractionAbility_NPCGimmick::OnChangedCharState",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x73,L"InCharStateData is nullptr.");
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
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_NPCGimmick::OnChangedCharState",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x7a,L"InteractionAbilityData is nullptr.");
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

// OnCloseContentEvent @ 14b7fa820

void __thiscall
UDS_InteractionAbility_NPCGimmick::OnCloseContentEvent
          (UDS_InteractionAbility_NPCGimmick *this,EDS_ContentsTabFrameType param_1)

{
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res10 [24];
  
  if (param_1 == SummonBoss) {
    local_res10[0] = Success;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_res10);
  }
  return;
}

// OnDeactivateAbility @ 14b7fbf40

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
UDS_InteractionAbility_NPCGimmick::OnDeactivateAbility
          (UDS_InteractionAbility_NPCGimmick *this,bool *param_1)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr> *this_00;
  bool bVar1;
  FGameplayTag *pFVar2;
  UWN_AbilitySystemComponent *this_01;
  UObject *pUVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_ContentManager *pUVar6;
  undefined1 auStackY_198 [32];
  EDS_StateTagType local_158 [8];
  FWeakObjectPtr local_150;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158[0] = Interaction_NPCGimmick;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_158);
  this_01 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  bVar1 = UWN_AbilitySystemComponent::HasTag(this_01,pFVar2);
  if (bVar1) {
    local_158[0] = Interaction_NPCGimmick;
    pFVar2 = FDS_GameplayTags::GetStateTag(local_158);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  }
  this_00 = &this->InteractionAbilityData;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_148[0] = *(ulong64 *)&pUVar3[2].field_0x8;
    pFVar4 = FDS_EntityBase::GetEntityBase(local_148);
    if (pFVar4 == (FDS_EntityBase *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_NPCGimmick::UnbindInteractionEvent",0x39,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_138.Ptr,0xea,L"gimmickEntity is nullptr. (%llu)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      UDS_NPCGimmickData::GetData((ulong64)&local_150);
      bVar1 = FWeakObjectPtr::IsValid(&local_150);
      if (bVar1) {
        pUVar3 = FWeakObjectPtr::Get(&local_150);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[5].field_0x10,this)
        ;
        pUVar3 = FWeakObjectPtr::Get(&local_150);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x8,this);
        pUVar3 = FWeakObjectPtr::Get(&local_150);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 7),this);
        pUVar3 = FWeakObjectPtr::Get(&local_150);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this)
        ;
      }
      pUVar6 = UDS_ContentManager::GetInst();
      if (pUVar6 != (UDS_ContentManager *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->CloseContentEvent,
                   this);
      }
    }
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
  }
  return;
}

// OnInteractionCancel @ 14b7fe010

void __thiscall
UDS_InteractionAbility_NPCGimmick::OnInteractionCancel
          (UDS_InteractionAbility_NPCGimmick *this,ulong64 param_1,int param_2)

{
  UDS_AbilitySystemComponent *this_00;
  long64 lVar1;
  EDS_AbilityDeactivateType local_res18 [16];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_2 == 0x27da) || (param_2 == 0x27eb)) {
    lVar1 = 0x493e7;
  }
  else if (param_2 == 0x2d53) {
    lVar1 = 0x493e3;
  }
  else {
    if (param_2 != 0x2d54) goto LAB_14b7fe06f;
    lVar1 = 0x493e8;
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(lVar1,None_System_01,&local_28);
LAB_14b7fe06f:
  local_res18[0] = Success;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res18);
  return;
}

// OnInteractionComplete @ 14b7fe310

void __thiscall
UDS_InteractionAbility_NPCGimmick::OnInteractionComplete
          (UDS_InteractionAbility_NPCGimmick *this,ulong64 param_1)

{
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res8 [32];
  
  local_res8[0] = Success;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res8);
  return;
}

// OnInteractionStart @ 14b7fe950

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
UDS_InteractionAbility_NPCGimmick::OnInteractionStart
          (UDS_InteractionAbility_NPCGimmick *this,ulong64 param_1,float param_2)

{
  FGameplayTag *pFVar1;
  EDS_StateTagType local_res20 [8];
  
  local_res20[0] = Interaction_NPCGimmick;
  pFVar1 = FDS_GameplayTags::GetStateTag(local_res20);
  UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar1);
  return;
}

// OnPostActivateAbility @ 14b803890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPCGimmick::OnPostActivateAbility(UDS_InteractionAbility_NPCGimmick *this)

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
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPCGimmick::OnPostActivateAbility",0x38,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x3d,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    bVar1 = BindInteractionEvent(this,*(ulong64 *)&pUVar3[2].field_0x8);
    if ((bVar1) && (bVar1 = DoGimmickInteraction(this), bVar1)) {
      return;
    }
  }
  local_148[0] = Cancel;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_148);
  return;
}

// TryActivate @ 14b814390

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
UDS_InteractionAbility_NPCGimmick::TryActivate(ulong64 *param_1,ulong64 *param_2,int param_3)

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
              (&local_138,"UDS_InteractionAbility_NPCGimmick::TryActivate",0x2e,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x8b;
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
                (&local_138,"UDS_InteractionAbility_NPCGimmick::TryActivate",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x92,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b814583;
    }
    local_158[0] = Interaction_NPCGimmick;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCGimmick>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr> *)
                       &local_150,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = Interaction_NPCGimmick;
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
              (&local_138,"UDS_InteractionAbility_NPCGimmick::TryActivate",0x2e,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0x99;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b814583:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// UnbindInteractionEvent @ 14b817330

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

bool __thiscall
UDS_InteractionAbility_NPCGimmick::UnbindInteractionEvent
          (UDS_InteractionAbility_NPCGimmick *this,ulong64 param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UDS_ContentManager *pUVar5;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148;
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_140 = param_1;
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_140);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPCGimmick::UnbindInteractionEvent",0x39,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xea,L"gimmickEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    UDS_NPCGimmickData::GetData((ulong64)&local_148);
    bVar1 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar1) {
      pUVar4 = FWeakObjectPtr::Get(&local_148);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[5].field_0x10,this);
      pUVar4 = FWeakObjectPtr::Get(&local_148);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[6].field_0x8,this);
      pUVar4 = FWeakObjectPtr::Get(&local_148);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 7),this);
      pUVar4 = FWeakObjectPtr::Get(&local_148);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[7].field_0x20,this);
    }
    pUVar5 = UDS_ContentManager::GetInst();
    if (pUVar5 != (UDS_ContentManager *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->CloseContentEvent,
                 this);
    }
    bVar1 = true;
  }
  return bVar1;
}

