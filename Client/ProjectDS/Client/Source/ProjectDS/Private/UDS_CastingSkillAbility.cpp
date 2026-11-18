// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b4396e0

UClass * __cdecl UDS_CastingSkillAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CastingSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CastingSkillAbility",
               &Z_Registration_Info_UClass_UDS_CastingSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_CastingSkillAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CastingSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_CastingSkillAbility>,local_res8,
               UDS_SkillAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CastingSkillAbility.InnerSingleton;
}

// UDS_CastingSkillAbility @ 14b43c0f0

UDS_CastingSkillAbility * __thiscall
UDS_CastingSkillAbility::UDS_CastingSkillAbility
          (UDS_CastingSkillAbility *this,FVTableHelper *param_1)

{
  UDS_SkillAbility::UDS_SkillAbility((UDS_SkillAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->UsedSkillStep = 0;
  (this->CastingAbilityData).WeakPtr.ObjectIndex = 0;
  (this->CastingAbilityData).WeakPtr.ObjectSerialNumber = 0;
  return this;
}

// ~UDS_CastingSkillAbility @ 14b43ce20

void __thiscall UDS_CastingSkillAbility::~UDS_CastingSkillAbility(UDS_CastingSkillAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_SkillAbility::~UDS_SkillAbility((UDS_SkillAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b43e380

UClass * __cdecl UDS_CastingSkillAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CastingSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CastingSkillAbility",
               &Z_Registration_Info_UClass_UDS_CastingSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_CastingSkillAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CastingSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_CastingSkillAbility>,local_res8,
               UDS_SkillAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CastingSkillAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b43e7a0

bool __thiscall UDS_CastingSkillAbility::ShouldTickComponent(UDS_CastingSkillAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_CastingSkillAbility @ 14b43e8c0

void __cdecl UDS_CastingSkillAbility::StaticRegisterNativesUDS_CastingSkillAbility(void)

{
  return;
}

// UDS_CastingSkillAbility @ 14b79b6e0

UDS_CastingSkillAbility * __thiscall
UDS_CastingSkillAbility::UDS_CastingSkillAbility
          (UDS_CastingSkillAbility *this,FObjectInitializer *param_1)

{
  UDS_SkillAbility::UDS_SkillAbility((UDS_SkillAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->UsedSkillStep = 0;
  (this->CastingAbilityData).WeakPtr.ObjectIndex = 0;
  (this->CastingAbilityData).WeakPtr.ObjectSerialNumber = 0;
  return this;
}

// ClearVariables @ 14b7a00c0

void __thiscall UDS_CastingSkillAbility::ClearVariables(UDS_CastingSkillAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  UDS_SkillAbility::ClearVariables((UDS_SkillAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->CastingAbilityData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CastingAbilityData).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2);
  }
  this->UsedSkillStep = 0;
  return;
}

// DoCastingSkill @ 14b7a4280

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
UDS_CastingSkillAbility::DoCastingSkill(UDS_CastingSkillAbility *this,FDS_CastingSkillInfo *param_1)

{
  bool bVar1;
  UDS_CastingSkillAbilityData *pUVar2;
  UDS_LogManager *pUVar3;
  UDS_SkillAbilityContext *pUVar4;
  undefined1 auStackY_198 [32];
  EDS_AbilityDeactivateType local_158 [8];
  UDS_SkillAbilityContext *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = FWeakObjectPtr::IsValid(&(this->CastingAbilityData).WeakPtr);
  if (bVar1) {
    pUVar2 = (UDS_CastingSkillAbilityData *)FWeakObjectPtr::Get(&(this->CastingAbilityData).WeakPtr)
    ;
    UDS_CastingSkillAbilityData::UpdateCastingStep(pUVar2);
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_CastingSkillAbility::DoCastingSkill",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0xa0,L"DoCastingSkill CastingStep : %d");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    pUVar2 = (UDS_CastingSkillAbilityData *)FWeakObjectPtr::Get(&(this->CastingAbilityData).WeakPtr)
    ;
    bVar1 = UDS_CastingSkillAbilityData::DoNextStep(pUVar2,param_1);
    if (bVar1) {
      pUVar4 = NewObject<UDS_SkillAbilityContext>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UDS_SkillAbilityContext *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      pUVar4->SkillID = param_1->SkillID;
      local_158[1] = 1;
      local_158[0] = 0x11;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_158,local_158 + 1);
      this->UsedSkillStep = param_1->CastingStep;
      local_150 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      local_158[0] = 0x11;
      bVar1 = UDS_GameplayAbility::TryActivateAbility
                        ((UDS_GameplayAbility *)this,local_158,
                         (TObjectPtr<UWN_AbilityContext>)&local_150);
      if (!bVar1) {
        local_158[0] = Cancel;
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_158);
      }
    }
  }
  return;
}

// InitOtherAbilityEventSubscriptions @ 14b7aef20

void __thiscall
UDS_CastingSkillAbility::InitOtherAbilityEventSubscriptions(UDS_CastingSkillAbility *this)

{
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = Skill_ActiveSkill;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)&this->_padding_,pFVar1);
  return;
}

// OnAbilityRetryActivate @ 14b7b40d0

void __thiscall UDS_CastingSkillAbility::OnAbilityRetryActivate(UDS_CastingSkillAbility *this)

{
  bool bVar1;
  UDS_CastingSkillAbilityData *this_00;
  FDS_CastingSkillInfo *pFVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CastingAbilityData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_CastingSkillAbilityData *)
              FWeakObjectPtr::Get(&(this->CastingAbilityData).WeakPtr);
    pFVar2 = UDS_CastingSkillAbilityData::GetCastingSkillInfo(this_00);
    DoCastingSkill(this,pFVar2);
  }
  return;
}

// OnCanActivate @ 14b7b5e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_CastingSkillAbility::OnCanActivate(UDS_CastingSkillAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UDS_SkillAbility::OnCanActivate((UDS_SkillAbility *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->CastingAbilityData).WeakPtr);
    if (!bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_CastingSkillAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->CastingAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = FWeakObjectPtr::IsValid(&(this->CastingAbilityData).WeakPtr);
    if (bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CastingSkillAbility::OnCanActivate",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x1e,L"CastingAbilityData is invalid")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b7b8470

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
UDS_CastingSkillAbility::OnDeactivateAbility(UDS_CastingSkillAbility *this,bool *param_1)

{
  EDS_AbilityTagType local_res8 [32];
  
  UDS_SkillAbility::OnDeactivateAbility((UDS_SkillAbility *)this,param_1);
  local_res8[0] = Skill_ActiveSkill;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  return;
}

// OnDeactivatedOtherAbility @ 14b7b8ab0

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
UDS_CastingSkillAbility::OnDeactivatedOtherAbility
          (UDS_CastingSkillAbility *this,FGameplayTag *param_1,bool *param_2)

{
  bool bVar1;
  FName *pFVar2;
  EDS_AbilityDeactivateType local_res8 [8];
  
  bVar1 = TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->CastingAbilityData,(void *)0x0);
  if (bVar1) {
    local_res8[0] = Cancel;
  }
  else {
    if (this->UsedSkillStep == 0) {
      return;
    }
    local_res8[0] = 0x11;
    pFVar2 = &FDS_GameplayTags::GetAbilityTag(local_res8)->TagName;
    if (*pFVar2 == (FName)0x0) {
      return;
    }
    if (param_1->TagName != *pFVar2) {
      return;
    }
    local_res8[0] = Success;
  }
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnPostActivateAbility @ 14b7bb9e0

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

void __thiscall UDS_CastingSkillAbility::OnPostActivateAbility(UDS_CastingSkillAbility *this)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_CastingSkillAbilityData *this_00;
  TWeakObjectPtr<UDS_SkillAbilityContext,FWeakObjectPtr> this_01;
  EDS_AbilityDeactivateType local_res10 [8];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  UDS_SkillAbility::OnPostActivateAbility((UDS_SkillAbility *)this);
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res18);
    dVar1 = *(double *)&pUVar4[1].field_0x8;
    pUVar4 = FWeakObjectPtr::Get(&local_res18);
    iVar2 = *(int *)(pUVar4 + 1);
    bVar3 = FWeakObjectPtr::IsValid(&(this->CastingAbilityData).WeakPtr);
    if (bVar3) {
      this_00 = (UDS_CastingSkillAbilityData *)
                FWeakObjectPtr::Get(&(this->CastingAbilityData).WeakPtr);
      UDS_CastingSkillAbilityData::InitCastingSkillInfo(this_00,iVar2,dVar1);
      this_01 = UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>
                          ((UDS_GameplayAbility *)this);
      local_res20 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res20);
      }
      local_res10[0] = 0x11;
      bVar3 = UDS_GameplayAbility::TryActivateAbility
                        ((UDS_GameplayAbility *)this,local_res10,
                         (TObjectPtr<UWN_AbilityContext>)&local_res20);
      if (bVar3) {
        return;
      }
    }
    local_res10[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  }
  return;
}

// OnTickComponent @ 14b7be2a0

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
UDS_CastingSkillAbility::OnTickComponent(UDS_CastingSkillAbility *this,float param_1)

{
  bool bVar1;
  UDS_CastingSkillAbilityData *pUVar2;
  FDS_CastingSkillInfo *pFVar3;
  UObject *pUVar4;
  EDS_AbilityDeactivateType local_res8 [8];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid(&(this->CastingAbilityData).WeakPtr);
  if (bVar1) {
    if (this->UsedSkillStep != 0) {
      return;
    }
    pUVar2 = (UDS_CastingSkillAbilityData *)FWeakObjectPtr::Get(&(this->CastingAbilityData).WeakPtr)
    ;
    UDS_CastingSkillAbilityData::UpdateCastingStep(pUVar2);
    pUVar2 = (UDS_CastingSkillAbilityData *)FWeakObjectPtr::Get(&(this->CastingAbilityData).WeakPtr)
    ;
    pFVar3 = UDS_CastingSkillAbilityData::GetCastingSkillInfo(pUVar2);
    bVar1 = FDS_CastingSkillInfo::IsValid(pFVar3);
    if (bVar1) {
      return;
    }
    pUVar4 = FWeakObjectPtr::Get(&(this->CastingAbilityData).WeakPtr);
    if (pUVar4[4].field_0x18 == '\x01') {
      pUVar2 = (UDS_CastingSkillAbilityData *)
               FWeakObjectPtr::Get(&(this->CastingAbilityData).WeakPtr);
      pFVar3 = UDS_CastingSkillAbilityData::GetLastCastingSkillInfo(pUVar2);
      DoCastingSkill(this,pFVar3);
      return;
    }
    local_res8[0] = Success;
  }
  else {
    local_res8[0] = Cancel;
  }
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// StartCastingSkill @ 14b7c4b60

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
UDS_CastingSkillAbility::StartCastingSkill(UDS_CastingSkillAbility *this,int param_1,double param_2)

{
  bool bVar1;
  UDS_CastingSkillAbilityData *this_00;
  TWeakObjectPtr<UDS_SkillAbilityContext,FWeakObjectPtr> this_01;
  EDS_AbilityDeactivateType local_res8 [8];
  UObject *local_res20;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CastingAbilityData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_CastingSkillAbilityData *)
              FWeakObjectPtr::Get(&(this->CastingAbilityData).WeakPtr);
    UDS_CastingSkillAbilityData::InitCastingSkillInfo(this_00,param_1,param_2);
    this_01 = UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>
                        ((UDS_GameplayAbility *)this);
    local_res20 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_res8[0] = 0x11;
    bVar1 = UDS_GameplayAbility::TryActivateAbility
                      ((UDS_GameplayAbility *)this,local_res8,
                       (TObjectPtr<UWN_AbilityContext>)&local_res20);
    if (bVar1) {
      return;
    }
  }
  local_res8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

