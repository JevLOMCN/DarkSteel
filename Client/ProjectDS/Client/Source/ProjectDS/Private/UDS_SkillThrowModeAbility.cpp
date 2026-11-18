// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b59b6f0

UClass * __cdecl UDS_SkillThrowModeAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillThrowModeAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillThrowModeAbility",
               &Z_Registration_Info_UClass_UDS_SkillThrowModeAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillThrowModeAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_SkillThrowModeAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillThrowModeAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillThrowModeAbility.InnerSingleton;
}

// UDS_SkillThrowModeAbility @ 14b59c990

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

UDS_SkillThrowModeAbility * __thiscall
UDS_SkillThrowModeAbility::UDS_SkillThrowModeAbility
          (UDS_SkillThrowModeAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SkillModeAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkillModeAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_SkillThrowModeAbility @ 14b59c9e0

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

UDS_SkillThrowModeAbility * __thiscall
UDS_SkillThrowModeAbility::UDS_SkillThrowModeAbility
          (UDS_SkillThrowModeAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SkillModeAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkillModeAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_SkillThrowModeAbility @ 14b59d2e0

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
UDS_SkillThrowModeAbility::~UDS_SkillThrowModeAbility(UDS_SkillThrowModeAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b59ddc0

UClass * __cdecl UDS_SkillThrowModeAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillThrowModeAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillThrowModeAbility",
               &Z_Registration_Info_UClass_UDS_SkillThrowModeAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillThrowModeAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_SkillThrowModeAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillThrowModeAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillThrowModeAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_SkillThrowModeAbility @ 14b59e500

void __cdecl UDS_SkillThrowModeAbility::StaticRegisterNativesUDS_SkillThrowModeAbility(void)

{
  return;
}

// Deactivate @ 14b82ca10

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
UDS_SkillThrowModeAbility::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

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
              (&local_138,"UDS_SkillThrowModeAbility::Deactivate",0x25,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x4a,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = SkillMode_Throw;
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
              (&local_138,"UDS_SkillThrowModeAbility::Deactivate",0x25,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x51,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// OnCanActivate @ 14b83aa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_SkillThrowModeAbility::OnCanActivate(UDS_SkillThrowModeAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->SkillModeAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_SkillModeAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->SkillModeAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->SkillModeAbilityData,(void *)0x0);
    if (!bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SkillThrowModeAbility::OnCanActivate",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x18,L"SkillModeAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83f9c0

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
UDS_SkillThrowModeAbility::OnDeactivateAbility(UDS_SkillThrowModeAbility *this,bool *param_1)

{
  EDS_StateTagType local_res18 [16];
  
  local_res18[0] = Locomotion_Throw;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  return;
}

// OnPostActivateAbility @ 14b845fe0

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

void __thiscall UDS_SkillThrowModeAbility::OnPostActivateAbility(UDS_SkillThrowModeAbility *this)

{
  EDS_StateTagType local_res10 [24];
  
  local_res10[0] = Locomotion_Throw;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  return;
}

// TryActivate @ 14b853cd0

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

bool __cdecl UDS_SkillThrowModeAbility::TryActivate(ulong64 *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  undefined1 auStackY_198 [32];
  uint uVar3;
  wchar_t *pwVar4;
  EDS_AbilityTagType local_158 [8];
  TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr> local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SkillThrowModeAbility::TryActivate",0x26,Yes);
    pwVar4 = L"Invalid parameter.";
    uVar3 = 0x31;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SkillThrowModeAbility::TryActivate",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x38,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b853e6d;
    }
    local_158[0] = SkillMode_Process;
    UDS_AbilityDataSet::GetAbilityData<UDS_SkillModeAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&local_150,(void *)0x0);
    if (!bVar1) {
      local_148[0] = 0;
      local_158[0] = SkillMode_Throw;
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
              (&local_138,"UDS_SkillThrowModeAbility::TryActivate",0x26,Yes);
    pwVar4 = L"abilityData is nullptr.";
    uVar3 = 0x3f;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
LAB_14b853e6d:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

