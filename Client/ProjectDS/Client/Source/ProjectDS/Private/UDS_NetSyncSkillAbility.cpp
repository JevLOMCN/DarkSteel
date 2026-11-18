// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b52a3e0

UClass * __cdecl UDS_NetSyncSkillAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NetSyncSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NetSyncSkillAbility",
               &Z_Registration_Info_UClass_UDS_NetSyncSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_NetSyncSkillAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NetSyncSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_NetSyncSkillAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NetSyncSkillAbility.InnerSingleton;
}

// UDS_NetSyncSkillAbility @ 14b52f520

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

UDS_NetSyncSkillAbility * __thiscall
UDS_NetSyncSkillAbility::UDS_NetSyncSkillAbility
          (UDS_NetSyncSkillAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_NetSyncSkillAbility @ 14b52f560

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

UDS_NetSyncSkillAbility * __thiscall
UDS_NetSyncSkillAbility::UDS_NetSyncSkillAbility
          (UDS_NetSyncSkillAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_NetSyncSkillAbility @ 14b530860

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

void __thiscall UDS_NetSyncSkillAbility::~UDS_NetSyncSkillAbility(UDS_NetSyncSkillAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b532c00

UClass * __cdecl UDS_NetSyncSkillAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NetSyncSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NetSyncSkillAbility",
               &Z_Registration_Info_UClass_UDS_NetSyncSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_NetSyncSkillAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NetSyncSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_NetSyncSkillAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NetSyncSkillAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_NetSyncSkillAbility @ 14b533150

void __cdecl UDS_NetSyncSkillAbility::StaticRegisterNativesUDS_NetSyncSkillAbility(void)

{
  return;
}

// AbilityTagProcess @ 14b824330

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
UDS_NetSyncSkillAbility::AbilityTagProcess(UDS_NetSyncSkillAbility *this,int param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  FDS_SkillTableRow *pFVar4;
  EDS_AbilityDeactivateType *pEVar5;
  TObjectPtr<UWN_AbilityContext>_u_0 TVar6;
  undefined1 auStackY_1b8 [32];
  EDS_AbilityDeactivateType local_178 [4];
  FWeakObjectPtr local_174;
  UObject *local_168;
  UObject *local_160;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)local_158);
  bVar1 = FWeakObjectPtr::IsValid(local_158);
  if (!bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NetSyncSkillAbility::AbilityTagProcess",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0xc6,L"abilityDataSet is invalid. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_178[1] = 2;
    pEVar5 = local_178 + 1;
    goto LAB_14b824650;
  }
  local_178[1] = 0x18;
  bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_178 + 1);
  if (bVar1) {
LAB_14b824436:
    local_178[1] = 1;
    local_178[0] = 0x11;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178,local_178 + 1);
  }
  else {
    local_178[1] = 0x19;
    bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_178 + 1);
    if (bVar1) goto LAB_14b824436;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
  local_174.ObjectIndex = *(int *)&pUVar3[0xf].field_0x8;
  if (*(int *)&pUVar3[0xf].field_0x8 != 0) {
    ObjectHandlingSkillProcess(this,(EDS_ObjectHandlingSkillType *)&local_174);
    return;
  }
  pFVar4 = FDS_SkillTableRow::Get((longlong)param_1,true);
  if (pFVar4 == (FDS_SkillTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NetSyncSkillAbility::AbilityTagProcess",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0xdd,L"skillTableRow is nullptr. SkillID : %d");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_178[0] = Cancel;
  }
  else {
    pUVar3 = (UObject *)this->_padding_;
    if (pFVar4->SkillUseType == ToggleSkill) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
      local_174.ObjectIndex = 0;
      local_174.ObjectSerialNumber = 0;
      local_160 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&local_174,(FObjectPtr)&local_160);
      local_168 = FWeakObjectPtr::Get(&local_174);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_168 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_168);
      }
      local_178[0] = 0x15;
      TVar6.DebugPtr = (UWN_AbilityContext *)&local_168;
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
      local_174.ObjectIndex = 0;
      local_174.ObjectSerialNumber = 0;
      local_168 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&local_174,(FObjectPtr)&local_168);
      local_160 = FWeakObjectPtr::Get(&local_174);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_160);
      }
      local_178[0] = 0x11;
      TVar6.DebugPtr = (UWN_AbilityContext *)&local_160;
    }
    UDS_GameplayAbility::TryActivateAbility
              ((UDS_GameplayAbility *)this,local_178,(TObjectPtr<UWN_AbilityContext>)TVar6);
    local_178[0] = Success;
  }
  pEVar5 = local_178;
LAB_14b824650:
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,pEVar5);
  return;
}

// ObjectHandlingSkillProcess @ 14b836f40

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
UDS_NetSyncSkillAbility::ObjectHandlingSkillProcess
          (UDS_NetSyncSkillAbility *this,EDS_ObjectHandlingSkillType *param_1)

{
  longlong *plVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 auStackY_1b8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168;
  FReadAccessScope local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar2 = FWeakObjectPtr::IsValid(&local_168);
  if (!bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NetSyncSkillAbility::ObjectHandlingSkillProcess",0x33,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0xfa,L"skillContext is invalid.");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
            ((ulong64 *)&local_170,(EDS_AbilityTagType *)&this->_padding_);
  bVar2 = FWeakObjectPtr::IsValid(&local_170);
  if (bVar2) {
    if (*param_1 == ThrowSkillReady) {
      pUVar4 = FWeakObjectPtr::Get(&local_170);
      if (*(int *)&pUVar4[3].field_0x10 == 2) {
        pUVar4 = FWeakObjectPtr::Get(&local_170);
        this_00 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&pUVar4[4].field_0x18;
      }
      else {
        if (*(int *)&pUVar4[3].field_0x10 != 4) {
          return;
        }
        pUVar4 = FWeakObjectPtr::Get(&local_170);
        this_00 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&pUVar4[6].field_0x10;
      }
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(this_00);
      return;
    }
    if (*param_1 == ThrowSkillStart) {
      pUVar4 = FWeakObjectPtr::Get(&local_170);
      pUVar5 = FWeakObjectPtr::Get(&local_168);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar4 + 7),&local_160);
      if ((*(int *)&pUVar4[7].field_0x10 != 0) &&
         (plVar1 = *(longlong **)&pUVar4[7].field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,&pUVar5[4].field_0x20);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_160);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NetSyncSkillAbility::ObjectHandlingSkillProcess",0x33,Yes);
    pwVar7 = L"Unknown ObjectHandlingSkillType: %d";
    uVar6 = 0x11f;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NetSyncSkillAbility::ObjectHandlingSkillProcess",0x33,Yes);
    pwVar7 = L"interactionAbilityData is invalid. EntityID: %llu";
    uVar6 = 0x102;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OnAbilityRetryActivate @ 14b837ad0

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

void __thiscall UDS_NetSyncSkillAbility::OnAbilityRetryActivate(UDS_NetSyncSkillAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148;
  undefined1 local_140 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_148);
    TVar3 = UDS_SkillData::GetData
                      ((ulong64)local_140,this->_padding_,SUB41(*(undefined4 *)(pUVar2 + 1),0));
                    /* WARNING: Load size is inaccurate */
    (this->OwnerSkillData).WeakPtr = *TVar3.WeakPtr;
    bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerSkillData).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_148);
      AbilityTagProcess(this,*(int *)(pUVar2 + 1));
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&local_148);
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_NetSyncSkillAbility::OnAbilityRetryActivate",0x2f,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x9e,L"skill data is invalid. SkillID : %d");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// OnCanActivate @ 14b8395a0

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

bool __thiscall UDS_NetSyncSkillAbility::OnCanActivate(UDS_NetSyncSkillAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar4;
  UDS_SkillData *this_00;
  undefined1 auStackY_188 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_148;
  undefined1 local_140 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
    bVar1 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_148);
      TVar4 = UDS_SkillData::GetData
                        ((ulong64)local_140,this->_padding_,SUB41(*(undefined4 *)(pUVar3 + 1),0));
                    /* WARNING: Load size is inaccurate */
      (this->OwnerSkillData).WeakPtr = *TVar4.WeakPtr;
      bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerSkillData).WeakPtr);
      if (bVar1) {
        this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
        pUVar3 = FWeakObjectPtr::Get(&local_148);
        bVar1 = UDS_SkillData::CheckSkillAbleByAbnormalAction
                          (this_00,*(double *)&pUVar3[1].field_0x8);
        if (bVar1) {
          return true;
        }
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar2 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&local_148);
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_NetSyncSkillAbility::OnCanActivate",0x26,Yes);
        pwVar6 = L"CheckSkillAbleByAbnormalAction false %d";
        uVar5 = 0x40;
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar2 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&local_148);
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_NetSyncSkillAbility::OnCanActivate",0x26,Yes);
        pwVar6 = L"skill data is invalid. SkillID : %d";
        uVar5 = 0x36;
      }
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NetSyncSkillAbility::OnCanActivate",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x2f,L"skill context is invalid.");
    }
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83f3e0

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
UDS_NetSyncSkillAbility::OnDeactivateAbility(UDS_NetSyncSkillAbility *this,bool *param_1)

{
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = Skill_Process;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  local_res8[0] = ~(Patrol|FindTarget);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnPostActivateAbility @ 14b843f20

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

void __thiscall UDS_NetSyncSkillAbility::OnPostActivateAbility(UDS_NetSyncSkillAbility *this)

{
  FWeakObjectPtr *pFVar1;
  FDS_EntityBase *this_00;
  code *pcVar2;
  bool bVar3;
  UDS_SkillDataSet *this_01;
  UObject *pUVar4;
  UObject *pUVar5;
  UDS_LogManager *pUVar6;
  UDS_FindTargetAbilityData *pUVar7;
  UDS_MovementCore *this_02;
  int iVar8;
  undefined8 this_03;
  undefined1 auStackY_1d8 [32];
  EDS_AbilityDeactivateType local_198 [8];
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  TVector<double>_u_0 local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_198[0] = 0x18;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_198);
  local_198[0] = 0x19;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_198);
  local_198[0] = 0x84;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_198);
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerSkillData).WeakPtr);
  if (bVar3) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_180);
    bVar3 = FWeakObjectPtr::IsValid(&local_180);
    if (bVar3) {
      this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_180);
      UDS_SkillDataSet::GetCurrentActiveSkillList
                (this_01,(TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                          *)&local_178._s_0);
      iVar8 = SUB84(local_178._s_0.Y,0);
      pFVar1 = (FWeakObjectPtr *)((longlong)local_178._s_0.X + (longlong)iVar8 * 8);
      this_03 = local_178._s_0.X;
      while( true ) {
        if (SUB84(local_178._s_0.Y,0) != iVar8) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_198 + 1);
        }
        if ((FWeakObjectPtr *)this_03 == pFVar1) break;
        bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_03);
        if (bVar3) {
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_03);
          if ((pUVar4[9].field_0x8 != '\x01') && (pUVar4[9].field_0x8 != '\x02')) {
            pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_03);
            pUVar5 = FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
            if (*(int *)&pUVar4[2].field_0x1c != *(int *)&pUVar5[2].field_0x1c) {
              this_00 = (FDS_EntityBase *)this->_padding_;
              pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_03);
              FDS_EntityBase::DeActivateSkillAbility(this_00,*(int *)&pUVar4[2].field_0x1c,Cancel);
            }
          }
        }
        this_03 = this_03 + 8;
      }
      if ((FWeakObjectPtr *)local_178._s_0.X != (FWeakObjectPtr *)0x0) {
        FMemory::Free((void *)local_178._s_0.X);
      }
    }
  }
  local_198[0] = Cancel;
  local_198[1] = 0x30;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_198 + 1,local_198);
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar3 = FWeakObjectPtr::IsValid(&local_190);
  if (bVar3) {
    local_198[1] = 0x1b;
    UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
              ((ulong64 *)&local_188,(EDS_AbilityTagType *)&this->_padding_);
    bVar3 = FWeakObjectPtr::IsValid(&local_188);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_188);
      (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
      if (*(char *)(this->_padding_ + 0x10) == '\x04') {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          FWeakObjectPtr::Get(&local_190);
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_NetSyncSkillAbility::OnPostActivateAbility",0x2e,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Display,local_158.Ptr,0x6a,L"Skill TargetEntityID %llu")
          ;
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      pUVar4 = FWeakObjectPtr::Get(&local_190);
      if (((__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pUVar4[3].field_0x20 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)*(undefined8 *)&pUVar4[3].field_0x20 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(pUVar4 + 4) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)(pUVar4 + 4) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
         (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pUVar4[4].field_0x8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&pUVar4[4].field_0x8 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        pUVar7 = (UDS_FindTargetAbilityData *)FWeakObjectPtr::Get(&local_188);
        pUVar4 = FWeakObjectPtr::Get(&local_190);
        pUVar5 = FWeakObjectPtr::Get(&local_190);
        UDS_FindTargetAbilityData::SetFindTargetDataByTargetLocation
                  (pUVar7,(ulong64 *)&pUVar5[3].field_0x18,(TVector<double> *)&pUVar4[3].field_0x20)
        ;
      }
      else {
        pUVar7 = (UDS_FindTargetAbilityData *)FWeakObjectPtr::Get(&local_188);
        pUVar4 = FWeakObjectPtr::Get(&local_190);
        UDS_FindTargetAbilityData::SetFindTargetDataByTargetEntityID
                  (pUVar7,(ulong64 *)&pUVar4[3].field_0x18);
      }
      FWeakObjectPtr::Get(&local_190);
      this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetActorLocation(this_02,(TVector<double> *)&local_178._s_0);
      UDS_GameInstance::IsFixedSkillLocation();
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pcVar2 = *(code **)(*(longlong *)pUVar4 + 0x380);
      pUVar5 = FWeakObjectPtr::Get(&local_190);
      (*pcVar2)(pUVar4,&pUVar5[2].field_0x10);
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pcVar2 = *(code **)(*(longlong *)pUVar4 + 0x4f0);
      pUVar5 = FWeakObjectPtr::Get(&local_190);
      (*pcVar2)(pUVar4,&pUVar5[1].field_0x18);
      pUVar4 = FWeakObjectPtr::Get(&local_190);
      AbilityTagProcess(this,*(int *)(pUVar4 + 1));
    }
    else {
      local_198[1] = 2;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_198 + 1);
    }
  }
  return;
}

// OnTickComponent @ 14b849240

void __thiscall
UDS_NetSyncSkillAbility::OnTickComponent(UDS_NetSyncSkillAbility *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  FWeakObjectPtr FStackX_8;
  
  lVar6 = (longlong)(int)this->_padding_;
  uVar5 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      if ((int)uVar5 < 0) {
        return;
      }
      if ((int)this->_padding_ <= (int)uVar5) {
        return;
      }
      uVar3 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FStackX_8 = *(FWeakObjectPtr *)(this->_padding_ + lVar7 * 8);
      bVar2 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&FStackX_8,
                         (void *)0x0);
      if (!bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&FStackX_8);
        (**(code **)(*(longlong *)pUVar4 + 0x368))(pUVar4,param_1);
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  return;
}

// ShouldTickComponent @ 14b8506f0

bool __thiscall UDS_NetSyncSkillAbility::ShouldTickComponent(UDS_NetSyncSkillAbility *this)

{
  return true;
}

// TerminateAllSkills @ 14b8519a0

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

void __thiscall UDS_NetSyncSkillAbility::TerminateAllSkills(UDS_NetSyncSkillAbility *this)

{
  FWeakObjectPtr *pFVar1;
  FDS_EntityBase *this_00;
  bool bVar2;
  UDS_SkillDataSet *this_01;
  UObject *pUVar3;
  UObject *pUVar4;
  int iVar5;
  ForAnyElementType this_02;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerSkillData).WeakPtr);
  if (bVar2) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res10);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res10);
      UDS_SkillDataSet::GetCurrentActiveSkillList(this_01,&local_38);
      iVar5 = local_38.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + (longlong)iVar5 * 8);
      this_02.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar5) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((FWeakObjectPtr *)this_02.Data == pFVar1) break;
        bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_02.Data);
        if (bVar2) {
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
          if ((pUVar3[9].field_0x8 != '\x01') && (pUVar3[9].field_0x8 != '\x02')) {
            pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
            pUVar4 = FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
            if (*(int *)&pUVar3[2].field_0x1c != *(int *)&pUVar4[2].field_0x1c) {
              this_00 = (FDS_EntityBase *)this->_padding_;
              pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
              FDS_EntityBase::DeActivateSkillAbility(this_00,*(int *)&pUVar3[2].field_0x1c,Cancel);
            }
          }
        }
        this_02.Data = this_02.Data + 8;
      }
      if ((FWeakObjectPtr *)local_38.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// TryActiveNetSyncAbility @ 14b854850

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
UDS_NetSyncSkillAbility::TryActiveNetSyncAbility
          (ulong64 param_1,TWeakObjectPtr<UDS_SkillAbilityContext,FWeakObjectPtr> param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_198 [32];
  EDS_AbilityTagType local_158 [8];
  ulong64 local_150;
  UObject *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_res10 = param_2.WeakPtr;
  local_150 = param_1;
  if (param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NetSyncSkillAbility::TryActiveNetSyncAbility",0x30,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xa9,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(&local_150);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = FWeakObjectPtr::Get(&local_res10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148[0] != (UObject *)0x0))
      {
        UE::GC::MarkAsReachable(local_148[0]);
      }
      local_158[0] = NetSyncSkill;
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
              (&local_138,"UDS_NetSyncSkillAbility::TryActiveNetSyncAbility",0x30,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xb0,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

