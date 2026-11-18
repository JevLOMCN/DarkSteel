// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b4bc570

UClass * __cdecl UDS_InteractionAbility_StuffWarpDeviceUse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDeviceUse.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffWarpDeviceUse",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDeviceUse.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffWarpDeviceUse,0x160,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbility_StuffWarpDeviceUse>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffWarpDeviceUse>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDeviceUse.InnerSingleton;
}

// UDS_InteractionAbility_StuffWarpDeviceUse @ 14b4c1d70

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

UDS_InteractionAbility_StuffWarpDeviceUse * __thiscall
UDS_InteractionAbility_StuffWarpDeviceUse::UDS_InteractionAbility_StuffWarpDeviceUse
          (UDS_InteractionAbility_StuffWarpDeviceUse *this,FVTableHelper *param_1)

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

// UDS_InteractionAbility_StuffWarpDeviceUse @ 14b4c1dc0

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

UDS_InteractionAbility_StuffWarpDeviceUse * __thiscall
UDS_InteractionAbility_StuffWarpDeviceUse::UDS_InteractionAbility_StuffWarpDeviceUse
          (UDS_InteractionAbility_StuffWarpDeviceUse *this,FObjectInitializer *param_1)

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

// ~UDS_InteractionAbility_StuffWarpDeviceUse @ 14b4c2590

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
UDS_InteractionAbility_StuffWarpDeviceUse::~UDS_InteractionAbility_StuffWarpDeviceUse
          (UDS_InteractionAbility_StuffWarpDeviceUse *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4c3b10

EDS_AbilityInputPolicy __thiscall
UDS_InteractionAbility_StuffWarpDeviceUse::GetDefaultInputPolicy
          (UDS_InteractionAbility_StuffWarpDeviceUse *this)

{
  return EndIfInput;
}

// GetPrivateStaticClass @ 14b4c5260

UClass * __cdecl UDS_InteractionAbility_StuffWarpDeviceUse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDeviceUse.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffWarpDeviceUse",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDeviceUse.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffWarpDeviceUse,0x160,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbility_StuffWarpDeviceUse>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffWarpDeviceUse>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDeviceUse.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbility_StuffWarpDeviceUse @ 14b4c5730

void __cdecl
UDS_InteractionAbility_StuffWarpDeviceUse::
StaticRegisterNativesUDS_InteractionAbility_StuffWarpDeviceUse(void)

{
  return;
}

// IsContentsLock @ 14b7f2a90

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

bool __cdecl UDS_InteractionAbility_StuffWarpDeviceUse::IsContentsLock(ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_ContentManager *this;
  undefined1 auStackY_188 [32];
  EDS_ContentsFunctionType local_148;
  int local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffWarpDeviceUse::IsContentsLock",0x39,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x82,L"targetEntity is nullptr. (%llu)")
    ;
  }
  else {
    this = UDS_ContentManager::GetInst();
    if (this != (UDS_ContentManager *)0x0) {
      local_144[0] = (int)pFVar2->TableID;
      local_148 = WarpDeviceTeleport;
      bVar1 = UDS_ContentManager::HasContentsFunction(this,&local_148,local_144);
      if (!bVar1) {
        return false;
      }
      local_148 = WarpDeviceTeleport;
      UDS_ContentManager::OnAlertMessage_ContentsFunction(this,&local_148);
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffWarpDeviceUse::IsContentsLock",0x39,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x89,L"contentMng is nullptr.");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return true;
}

// OnAbilityRetryActivate @ 14b7f4970

void __thiscall
UDS_InteractionAbility_StuffWarpDeviceUse::OnAbilityRetryActivate
          (UDS_InteractionAbility_StuffWarpDeviceUse *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8440944315395473502>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_StuffWarpDeviceUse.cpp"
                     ,0x5e,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCanActivate @ 14b7f7690

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
UDS_InteractionAbility_StuffWarpDeviceUse::OnCanActivate
          (UDS_InteractionAbility_StuffWarpDeviceUse *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_EntityBase *pFVar6;
  UDS_ContentManager *this_01;
  undefined1 auStackY_1a8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  EDS_ContentsFunctionType local_164 [2];
  int local_15c;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (!bVar2) {
    return false;
  }
  this_00 = &this->InteractionAbilityData;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffWarpDeviceUse>
                      ((ulong64 *)local_164,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
    this_00->WeakPtr = *TVar3.WeakPtr;
  }
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_StuffWarpDeviceUse::OnCanActivate",0x38,Yes);
    pwVar8 = L"InteractionAbilityData is nullptr.";
    uVar7 = 0x26;
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar6 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar5[2].field_0x8);
    if (pFVar6 == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)pFVar6;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_StuffWarpDeviceUse::IsContentsLock",0x39,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x82,L"targetEntity is nullptr. (%llu)");
      goto LAB_14b7f7778;
    }
    this_01 = UDS_ContentManager::GetInst();
    if (this_01 != (UDS_ContentManager *)0x0) {
      local_15c = (int)pFVar6->TableID;
      local_164[0] = WarpDeviceTeleport;
      bVar2 = UDS_ContentManager::HasContentsFunction(this_01,local_164,&local_15c);
      if (bVar2) {
        local_164[0] = WarpDeviceTeleport;
        UDS_ContentManager::OnAlertMessage_ContentsFunction(this_01,local_164);
        return false;
      }
      FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_StuffWarpDeviceData::GetData((ulong64)local_158);
      bVar2 = FWeakObjectPtr::IsValid(local_158);
      if (!bVar2) {
        return false;
      }
      pUVar5 = FWeakObjectPtr::Get(local_158);
      if (pUVar5[0xb].field_0x10 != '\x01') {
        return false;
      }
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
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_StuffWarpDeviceUse::IsContentsLock",0x39,Yes);
    pwVar8 = L"contentMng is nullptr.";
    uVar7 = 0x89;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar7,pwVar8);
LAB_14b7f7778:
  if ((FDS_EntityBase *)local_148._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// OnDeactivateAbility @ 14b7fcf10

void __thiscall
UDS_InteractionAbility_StuffWarpDeviceUse::OnDeactivateAbility
          (UDS_InteractionAbility_StuffWarpDeviceUse *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b8062c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffWarpDeviceUse::OnPostActivateAbility
          (UDS_InteractionAbility_StuffWarpDeviceUse *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *this_00;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffWarpDeviceUse::OnPostActivateAbility",0x40,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x4c,L"InteractionAbilityData is nullptr.");
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

// TryActivate @ 14b8159a0

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
UDS_InteractionAbility_StuffWarpDeviceUse::TryActivate
          (ulong64 *param_1,ulong64 *param_2,int param_3)

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
              (&local_138,"UDS_InteractionAbility_StuffWarpDeviceUse::TryActivate",0x36,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x65;
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
                (&local_138,"UDS_InteractionAbility_StuffWarpDeviceUse::TryActivate",0x36,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x6c,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b815b93;
    }
    local_158[0] = Interaction_StuffWarpDeviceUse;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffWarpDeviceUse>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr>
                        *)&local_150,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = Interaction_StuffWarpDeviceUse;
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
              (&local_138,"UDS_InteractionAbility_StuffWarpDeviceUse::TryActivate",0x36,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0x73;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b815b93:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

