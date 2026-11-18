// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b40e820

UClass * __cdecl UDS_AirWalkAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalkAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalkAbility",
               &Z_Registration_Info_UClass_UDS_AirWalkAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalkAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalkAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalkAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalkAbility.InnerSingleton;
}

// UDS_AirWalkAbility @ 14b411580

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

UDS_AirWalkAbility * __thiscall
UDS_AirWalkAbility::UDS_AirWalkAbility(UDS_AirWalkAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_AirWalkAbility @ 14b411fa0

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

void __thiscall UDS_AirWalkAbility::~UDS_AirWalkAbility(UDS_AirWalkAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4138a0

UClass * __cdecl UDS_AirWalkAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalkAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalkAbility",
               &Z_Registration_Info_UClass_UDS_AirWalkAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalkAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalkAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalkAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalkAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4140e0

bool __thiscall UDS_AirWalkAbility::ShouldNotifyChangedCharState(UDS_AirWalkAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_AirWalkAbility @ 14b4142b0

void __cdecl UDS_AirWalkAbility::StaticRegisterNativesUDS_AirWalkAbility(void)

{
  return;
}

// UDS_AirWalkAbility @ 14b79b400

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

UDS_AirWalkAbility * __thiscall
UDS_AirWalkAbility::UDS_AirWalkAbility(UDS_AirWalkAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// CheckAirWalkAbilityData @ 14b79ef50

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
UDS_AirWalkAbility::CheckAirWalkAbilityData(UDS_AirWalkAbility *this,EDS_AbilityTagType param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AirWalkAbilityData *this_00;
  undefined1 auStackY_178 [32];
  uint uVar3;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = FWeakObjectPtr::IsValid(&(this->AirWalkAbilityData).WeakPtr);
  if (bVar1) {
    UDS_GameplayAbility::GetContextData<UDS_AirWalkAbilityContext>((UDS_GameplayAbility *)this);
    bVar1 = FWeakObjectPtr::IsValid(local_148);
    if (!bVar1) {
      return false;
    }
    this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
    bVar1 = UDS_AirWalkAbilityData::InitAirWalkData(this_00);
    if (bVar1) {
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_AirWalkAbility::CheckAirWalkAbilityData",0x2b,Yes);
    uVar3 = 0xa5;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_AirWalkAbility::CheckAirWalkAbilityData",0x2b,Yes);
    uVar3 = 0x98;
  }
  UDS_LogManager::PrintLog
            (pUVar2,1,Warning,local_138.Ptr,uVar3,
             L"Ability terminated abnormally due to data issues.");
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// ClearVariables @ 14b79fee0

void __thiscall UDS_AirWalkAbility::ClearVariables(UDS_AirWalkAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->AirWalkAbilityData).WeakPtr);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b79ff13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2c8));
    return;
  }
  return;
}

// Deactivate @ 14b7a3820

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

void __cdecl UDS_AirWalkAbility::Deactivate(long64 param_1)

{
  UDS_LogManager *pUVar1;
  FDS_EntityBase *this;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148;
  EDS_AbilityTagType local_147 [7];
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1 == 0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = param_1;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_AirWalkAbility::Deactivate",0x1e,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xd3,L"Invalid parameter.");
  }
  else {
    local_140 = param_1;
    this = FDS_EntityBase::GetEntityBase(&local_140);
    if (this != (FDS_EntityBase *)0x0) {
      if (this->EntityType != MainCharacter) {
        return;
      }
      local_148 = Cancel;
      local_147[0] = AirWalk_Process;
      FDS_EntityBase::DeactivateAbility(this,local_147,&local_148);
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_AirWalkAbility::Deactivate",0x1e,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xda,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// InitOtherAbilityEventSubscriptions @ 14b7aee40

void __thiscall UDS_AirWalkAbility::InitOtherAbilityEventSubscriptions(UDS_AirWalkAbility *this)

{
  longlong *this_00;
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res8 [32];
  
  this_00 = &this->_padding_;
  local_res8[0] = AirWalk_Dash;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)this_00,pFVar1);
  local_res8[0] = AirWalk_Hovering;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)this_00,pFVar1);
  local_res8[0] = AirWalk_Jump;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)this_00,pFVar1);
  local_res8[0] = AirWalk_PowerJump;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)this_00,pFVar1);
  local_res8[0] = AirWalk_Stop;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)this_00,pFVar1);
  return;
}

// OnAbilityRetryActivate @ 14b7b3ed0

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

void __thiscall UDS_AirWalkAbility::OnAbilityRetryActivate(UDS_AirWalkAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_AirWalkStep EVar3;
  UObject *local_res8;
  EDS_AbilityTagType local_res10 [8];
  FWeakObjectPtr local_res18;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->AirWalkAbilityData).WeakPtr);
  if (!bVar1) {
    return;
  }
  UDS_GameplayAbility::GetContextData<UDS_AirWalkAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar1) {
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(&local_res18);
  if (*(char *)(pUVar2 + 1) == '*') {
    pUVar2 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
    if (pUVar2[4].field_0x20 == '\x03') {
      EVar3 = Hovering;
    }
    else {
      pUVar2 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
      if (pUVar2[4].field_0x20 != '\x04') goto LAB_14b7b3f70;
      EVar3 = AirDash;
    }
    local_res8 = (UObject *)CONCAT71(local_res8._1_7_,1);
    local_res10[0] = UDS_AirWalkAbilityData::GetAirWalkAbilityTagType(EVar3);
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,local_res10,(EDS_AbilityDeactivateType *)&local_res8);
  }
LAB_14b7b3f70:
  local_res8 = FWeakObjectPtr::Get(&local_res18);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pUVar2 = FWeakObjectPtr::Get(&local_res18);
  UDS_GameplayAbility::TryActivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)(pUVar2 + 1),
             (TObjectPtr<UWN_AbilityContext>)&local_res8);
  return;
}

// OnCanActivate @ 14b7b51c0

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

bool __thiscall UDS_AirWalkAbility::OnCanActivate(UDS_AirWalkAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  UDS_CharStateData *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_198 [32];
  EDS_CharState local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->AirWalkAbilityData).WeakPtr);
    if (!bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
                        (&local_150,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->AirWalkAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = FWeakObjectPtr::IsValid(&(this->AirWalkAbilityData).WeakPtr);
    if ((bVar1) && (bVar1 = FDS_EntityBase::IsDead((FDS_EntityBase *)this->_padding_), !bVar1)) {
      UDS_CharStateData::GetData((ulong64)local_148);
      bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_148,(void *)0x0);
      if (bVar1) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_AirWalkAbility::OnCanActivate",0x21,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x32,L"charStateData is nullptr. (%llu)");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_148);
        local_150 = CharSwitch;
        bVar1 = UDS_CharStateData::HasCharState(pUVar4,&local_150);
        if (!bVar1) {
          pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_148);
          local_150 = Abnormal;
          bVar1 = UDS_CharStateData::HasCharState(pUVar4,&local_150);
          if (!bVar1) {
            pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_148);
            local_150._0_4_ = Skill|Shield|Swim;
            bVar1 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_150);
            if (!bVar1) {
              pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_148);
              local_150._0_4_ = AniCut|AutoMove|Shield;
              bVar1 = UDS_CharStateData::HasCharDetailState
                                (pUVar4,(EDS_CharDetailState *)&local_150);
              if (!bVar1) {
                pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_148);
                local_150 = CONCAT44(local_150._4_4_,0x47);
                bVar1 = UDS_CharStateData::HasCharDetailState
                                  (pUVar4,(EDS_CharDetailState *)&local_150);
                if ((!bVar1) &&
                   (pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
                   pUVar5[6].field_0x10 != '\x01')) {
                  return true;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b7b6800

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
UDS_AirWalkAbility::OnChangedCharState
          (UDS_AirWalkAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  FWeakObjectPtr local_res10;
  EDS_AbilityDeactivateType local_res18 [16];
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10 = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_38);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    bVar1 = UDS_CharStateData::HasControlAbnormalState(this_00);
    if (bVar1) {
      local_res18[0] = Cancel;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res18);
    }
  }
  return;
}

// OnDeactivateAbility @ 14b7b7a70

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

void __thiscall UDS_AirWalkAbility::OnDeactivateAbility(UDS_AirWalkAbility *this,bool *param_1)

{
  EDS_AbilityTagType local_res8 [8];
  
  local_res8[0] = AirWalk_Dash;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  local_res8[0] = AirWalk_Hovering;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  local_res8[0] = AirWalk_Jump;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  local_res8[0] = AirWalk_PowerJump;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  local_res8[0] = AirWalk_Stop;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  return;
}

// OnDeactivatedOtherAbility @ 14b7b89e0

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
UDS_AirWalkAbility::OnDeactivatedOtherAbility
          (UDS_AirWalkAbility *this,FGameplayTag *param_1,bool *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_AbilityDeactivateType local_res8 [8];
  
  bVar1 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->AirWalkAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
    if (pUVar2[4].field_0x20 != '\0') {
      return;
    }
    pUVar2 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
    if (pUVar2[5].field_0x10 != '\0') {
      return;
    }
    if (pUVar2[5].field_0x11 != '\0') {
      return;
    }
  }
  local_res8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnLandEnter @ 14b7b9270

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

void __thiscall UDS_AirWalkAbility::OnLandEnter(UDS_AirWalkAbility *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnPostActivateAbility @ 14b7ba9d0

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

void __thiscall UDS_AirWalkAbility::OnPostActivateAbility(UDS_AirWalkAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_LogManager *pUVar3;
  UDS_AirWalkAbilityData *this_00;
  undefined1 auStackY_198 [32];
  uint uVar4;
  EDS_AbilityDeactivateType local_168 [8];
  FWeakObjectPtr local_160;
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_GameplayAbility::GetContextData<UDS_AirWalkAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(&local_160);
  if (!bVar1) {
    local_168[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_168);
    return;
  }
  local_158._8_4_ = 0;
  local_158._0_8_ = OnLandEnter;
  local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
  local_158._16_8_ = OnLandEnter;
  pUVar2 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_AirWalkAbility>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (pUVar2 + 6),(UDS_AirWalkAbility *)local_158,(pmf_ad18cf8a *)this);
  FWeakObjectPtr::Get(&local_160);
  bVar1 = FWeakObjectPtr::IsValid(&(this->AirWalkAbilityData).WeakPtr);
  if (bVar1) {
    UDS_GameplayAbility::GetContextData<UDS_AirWalkAbilityContext>((UDS_GameplayAbility *)this);
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_158);
    if (!bVar1) goto LAB_14b7bab02;
    this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
    bVar1 = UDS_AirWalkAbilityData::InitAirWalkData(this_00);
    if (bVar1) {
      local_158._0_8_ = FWeakObjectPtr::Get(&local_160);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((FWeakObjectPtr)local_158._0_8_ != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_158._0_8_);
      }
      pUVar2 = FWeakObjectPtr::Get(&local_160);
      UDS_GameplayAbility::TryActivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)(pUVar2 + 1),
                 (TObjectPtr<UWN_AbilityContext>)local_158);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7bab02;
    pUVar3 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
               "UDS_AirWalkAbility::CheckAirWalkAbilityData",0x2b,Yes);
    uVar4 = 0xa5;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7bab02;
    pUVar3 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
               "UDS_AirWalkAbility::CheckAirWalkAbilityData",0x2b,Yes);
    uVar4 = 0x98;
  }
  UDS_LogManager::PrintLog
            (pUVar3,1,Warning,local_30,uVar4,L"Ability terminated abnormally due to data issues.");
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
LAB_14b7bab02:
  local_168[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_168);
  return;
}

