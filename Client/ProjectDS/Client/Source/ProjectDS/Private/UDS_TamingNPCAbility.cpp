// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b5ba1a0

UClass * __cdecl UDS_TamingNPCAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TamingNPCAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TamingNPCAbility",
               &Z_Registration_Info_UClass_UDS_TamingNPCAbility.InnerSingleton,
               StaticRegisterNativesUDS_TamingNPCAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TamingNPCAbility>,
               InternalVTableHelperCtorCaller<UDS_TamingNPCAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TamingNPCAbility.InnerSingleton;
}

// UDS_TamingNPCAbility @ 14b5bcf00

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

UDS_TamingNPCAbility * __thiscall
UDS_TamingNPCAbility::UDS_TamingNPCAbility(UDS_TamingNPCAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->TamingNPCAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_TamingNPCAbility @ 14b5bcf40

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

UDS_TamingNPCAbility * __thiscall
UDS_TamingNPCAbility::UDS_TamingNPCAbility(UDS_TamingNPCAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->TamingNPCAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_TamingNPCAbility @ 14b5bde70

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

void __thiscall UDS_TamingNPCAbility::~UDS_TamingNPCAbility(UDS_TamingNPCAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bf720

UClass * __cdecl UDS_TamingNPCAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TamingNPCAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TamingNPCAbility",
               &Z_Registration_Info_UClass_UDS_TamingNPCAbility.InnerSingleton,
               StaticRegisterNativesUDS_TamingNPCAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TamingNPCAbility>,
               InternalVTableHelperCtorCaller<UDS_TamingNPCAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TamingNPCAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_TamingNPCAbility @ 14b5c0070

void __cdecl UDS_TamingNPCAbility::StaticRegisterNativesUDS_TamingNPCAbility(void)

{
  return;
}

// OnAbilityRetryActivate @ 14b837cd0

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

void __thiscall UDS_TamingNPCAbility::OnAbilityRetryActivate(UDS_TamingNPCAbility *this)

{
  UObject *pUVar1;
  EDS_AbilityDeactivateType aEStackX_8 [32];
  
  ResetTamingState(this);
  pUVar1 = FWeakObjectPtr::Get(&(this->TamingNPCAbilityData).WeakPtr);
  switch(pUVar1[2].field_0x10) {
  case 0:
    aEStackX_8[0] = 0x92;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 1:
  case 8:
  case 9:
    aEStackX_8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,aEStackX_8);
    break;
  case 2:
    aEStackX_8[0] = 0x94;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 3:
    aEStackX_8[0] = 0x95;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 4:
    aEStackX_8[0] = 0x96;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 5:
    aEStackX_8[0] = 0x97;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 6:
    aEStackX_8[0] = 0x98;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 7:
    aEStackX_8[0] = 0x99;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  }
  return;
}

// OnCanActivate @ 14b83b490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_TamingNPCAbility::OnCanActivate(UDS_TamingNPCAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->TamingNPCAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_TamingNPCAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->TamingNPCAbilityData).WeakPtr = *TVar2.WeakPtr;
      bVar1 = TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr>::UEOpEquals
                        (&this->TamingNPCAbilityData,(void *)0x0);
      if (bVar1) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_TamingNPCAbility::OnCanActivate",0x23,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x33,L"TamingNPCAbilityData is nullptr.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
        goto LAB_14b83b58c;
      }
    }
    pUVar4 = FWeakObjectPtr::Get(&(this->TamingNPCAbilityData).WeakPtr);
    bVar1 = pUVar4[2].field_0x10 != '\n';
  }
  else {
LAB_14b83b58c:
    bVar1 = false;
  }
  return bVar1;
}

// OnDeactivateAbility @ 14b83fe60

void __thiscall UDS_TamingNPCAbility::OnDeactivateAbility(UDS_TamingNPCAbility *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr> *this_00;
  
  ResetTamingState(this);
  this_00 = &this->TamingNPCAbilityData;
  bVar1 = TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    *(undefined8 *)&pUVar2[2].field_0x8 = 0;
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b83fead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2c8));
    return;
  }
  return;
}

// OnPostActivateAbility @ 14b846740

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

void __thiscall UDS_TamingNPCAbility::OnPostActivateAbility(UDS_TamingNPCAbility *this)

{
  UObject *pUVar1;
  EDS_AbilityDeactivateType aEStackX_8 [32];
  
  ResetTamingState(this);
  pUVar1 = FWeakObjectPtr::Get(&(this->TamingNPCAbilityData).WeakPtr);
  switch(pUVar1[2].field_0x10) {
  case 0:
    aEStackX_8[0] = 0x92;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 1:
  case 8:
  case 9:
    aEStackX_8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,aEStackX_8);
    break;
  case 2:
    aEStackX_8[0] = 0x94;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 3:
    aEStackX_8[0] = 0x95;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 4:
    aEStackX_8[0] = 0x96;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 5:
    aEStackX_8[0] = 0x97;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 6:
    aEStackX_8[0] = 0x98;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  case 7:
    aEStackX_8[0] = 0x99;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
    return;
  }
  return;
}

// ResetTamingState @ 14b84d6f0

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

void __thiscall UDS_TamingNPCAbility::ResetTamingState(UDS_TamingNPCAbility *this)

{
  EDS_StateTagType local_res10 [24];
  
  local_res10[0] = Taming_MoveToFood;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  local_res10[0] = Taming_ReturnToStart;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  local_res10[0] = Taming_Think;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  local_res10[0] = Taming_Eat;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  local_res10[0] = Taming_Mounting;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  local_res10[0] = Taming_MiniGame;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  local_res10[0] = Taming_FailDismounting;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  local_res10[0] = Taming_SuccessDismounting;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  return;
}

// TryActivate @ 14b854060

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
UDS_TamingNPCAbility::TryActivate(ulong64 *param_1,ulong64 *param_2,EDS_TamingState *param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  UDS_TamingNPCAbilityData *this_00;
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
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_TamingNPCAbility::TryActivate",0x21,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0xf;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_TamingNPCAbility::TryActivate",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x16,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b854205;
    }
    local_168[0] = Taming;
    UDS_AbilityDataSet::GetAbilityData<UDS_TamingNPCAbilityData>
              ((ulong64 *)&local_160,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr> *)&local_160,
                       (void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_TamingNPCAbilityData *)FWeakObjectPtr::Get(&local_160);
      UDS_TamingNPCAbilityData::SetTamingState(this_00,param_3);
      pUVar3 = FWeakObjectPtr::Get(&local_160);
      local_158[0] = 0;
      local_168[0] = Taming;
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
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
              (&local_148,"UDS_TamingNPCAbility::TryActivate",0x21,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0x1d;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar4,pwVar5);
LAB_14b854205:
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// UpdateTamingState @ 14b85b000

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

void __thiscall UDS_TamingNPCAbility::UpdateTamingState(UDS_TamingNPCAbility *this)

{
  UObject *pUVar1;
  EDS_AbilityDeactivateType local_res8 [32];
  
  ResetTamingState(this);
  pUVar1 = FWeakObjectPtr::Get(&(this->TamingNPCAbilityData).WeakPtr);
  switch(pUVar1[2].field_0x10) {
  case 0:
    local_res8[0] = 0x92;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    return;
  case 1:
  case 8:
  case 9:
    local_res8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    break;
  case 2:
    local_res8[0] = 0x94;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    return;
  case 3:
    local_res8[0] = 0x95;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    return;
  case 4:
    local_res8[0] = 0x96;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    return;
  case 5:
    local_res8[0] = 0x97;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    return;
  case 6:
    local_res8[0] = 0x98;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    return;
  case 7:
    local_res8[0] = 0x99;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  return;
}

