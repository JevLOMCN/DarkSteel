// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b5613e0

UClass * __cdecl UDS_PlayerSkillAbility_Detection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbility_Detection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbility_Detection",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbility_Detection.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillAbility_Detection,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerSkillAbility_Detection>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbility_Detection>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbility_Detection.InnerSingleton;
}

// UDS_PlayerSkillAbility_Detection @ 14b564520

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

UDS_PlayerSkillAbility_Detection * __thiscall
UDS_PlayerSkillAbility_Detection::UDS_PlayerSkillAbility_Detection
          (UDS_PlayerSkillAbility_Detection *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->PlayerSkillAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->PlayerSkillAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_PlayerSkillAbility_Detection @ 14b564570

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

UDS_PlayerSkillAbility_Detection * __thiscall
UDS_PlayerSkillAbility_Detection::UDS_PlayerSkillAbility_Detection
          (UDS_PlayerSkillAbility_Detection *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->PlayerSkillAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->PlayerSkillAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_PlayerSkillAbility_Detection @ 14b565200

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
UDS_PlayerSkillAbility_Detection::~UDS_PlayerSkillAbility_Detection
          (UDS_PlayerSkillAbility_Detection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b567860

UClass * __cdecl UDS_PlayerSkillAbility_Detection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbility_Detection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbility_Detection",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbility_Detection.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillAbility_Detection,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerSkillAbility_Detection>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbility_Detection>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbility_Detection.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerSkillAbility_Detection @ 14b568110

void __cdecl
UDS_PlayerSkillAbility_Detection::StaticRegisterNativesUDS_PlayerSkillAbility_Detection(void)

{
  return;
}

// Deactivate @ 14b82c4c0

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
UDS_PlayerSkillAbility_Detection::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

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
              (&local_138,"UDS_PlayerSkillAbility_Detection::Deactivate",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x82,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = PlayerSkill_Detection;
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
              (&local_138,"UDS_PlayerSkillAbility_Detection::Deactivate",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x89,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// OnAbilityRetryActivate @ 14b837c50

void __thiscall
UDS_PlayerSkillAbility_Detection::OnAbilityRetryActivate(UDS_PlayerSkillAbility_Detection *this)

{
  return;
}

// OnCanActivate @ 14b839a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_PlayerSkillAbility_Detection::OnCanActivate(UDS_PlayerSkillAbility_Detection *this)

{
  bool bVar1;
  EDS_PlayerSkillUnableReason EVar2;
  TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  long64 lVar5;
  undefined1 auStackY_198 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_160;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr>::UEOpEquals
                      (&this->PlayerSkillAbilityData,(void *)0x0);
    if (bVar1) {
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_PlayerSkillAbilityData_Detection>
                        (local_148,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->PlayerSkillAbilityData).WeakPtr = *TVar3.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr>::UEOpEquals
                      (&this->PlayerSkillAbilityData,(void *)0x0);
    if (bVar1) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_PlayerSkillAbility_Detection::OnCanActivate",0x2f,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x1b,L"PlayerSkillAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      EVar2 = DS_AbilityUtil_PlayerSkill::IsAbleDetection((ulong64 *)&this->_padding_);
      if (EVar2 == None) {
        return true;
      }
      if (EVar2 == LackActionPoint) {
        lVar5 = 0x587;
      }
      else if (EVar2 == LackMat) {
        lVar5 = 0x586;
      }
      else {
        if (EVar2 != SourceEntityState) {
          return false;
        }
        lVar5 = 0x2b04;
      }
      local_160._16_4_ = 0;
      local_160._8_8_ = 0;
      local_160._0_8_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(lVar5,Alert_None_01,&local_160);
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83f460

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
UDS_PlayerSkillAbility_Detection::OnDeactivateAbility
          (UDS_PlayerSkillAbility_Detection *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_StateTagType local_res8 [32];
  
  local_res8[0] = PlayerSkill_Detection;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  bVar1 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr>::UEOpEquals
                    (&this->PlayerSkillAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->PlayerSkillAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b83f4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2c8));
    return;
  }
  return;
}

// OnPostActivateAbility @ 14b844760

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
UDS_PlayerSkillAbility_Detection::OnPostActivateAbility(UDS_PlayerSkillAbility_Detection *this)

{
  bool bVar1;
  EDS_AbilityDeactivateType local_res10 [24];
  
  bVar1 = FDS_PlayerSkillService::SendPlayerSkillDetectRequest();
  if (!bVar1) {
    local_res10[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
    return;
  }
  local_res10[0] = 0x5f;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  UDS_TimeCoolDownManager::StartCoolDown(ActionDetection,0,0.0);
  return;
}

// TryActivate @ 14b852f10

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

bool __cdecl UDS_PlayerSkillAbility_Detection::TryActivate(ulong64 *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  undefined1 auStackY_198 [32];
  uint uVar3;
  wchar_t *pwVar4;
  EDS_AbilityTagType local_158 [8];
  TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr> local_150;
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
              (&local_138,"UDS_PlayerSkillAbility_Detection::TryActivate",0x2d,Yes);
    pwVar4 = L"Invalid parameter.";
    uVar3 = 0x69;
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
                (&local_138,"UDS_PlayerSkillAbility_Detection::TryActivate",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x70,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b8530ad;
    }
    local_158[0] = PlayerSkill_Detection;
    UDS_AbilityDataSet::GetAbilityData<UDS_PlayerSkillAbilityData_Detection>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr>::UEOpEquals
                      (&local_150,(void *)0x0);
    if (!bVar1) {
      local_148[0] = 0;
      local_158[0] = PlayerSkill_Detection;
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
              (&local_138,"UDS_PlayerSkillAbility_Detection::TryActivate",0x2d,Yes);
    pwVar4 = L"abilityData is nullptr.";
    uVar3 = 0x77;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
LAB_14b8530ad:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

