// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b5853d0

UClass * __cdecl UDS_ResurrectAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ResurrectAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ResurrectAbility",
               &Z_Registration_Info_UClass_UDS_ResurrectAbility.InnerSingleton,
               StaticRegisterNativesUDS_ResurrectAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ResurrectAbility>,
               InternalVTableHelperCtorCaller<UDS_ResurrectAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ResurrectAbility.InnerSingleton;
}

// UDS_ResurrectAbility @ 14b586e20

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

UDS_ResurrectAbility * __thiscall
UDS_ResurrectAbility::UDS_ResurrectAbility(UDS_ResurrectAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->ResurrectAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ResurrectAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->SelfDeactivateTimer).Handle = 0;
  return this;
}

// UDS_ResurrectAbility @ 14b586e80

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

UDS_ResurrectAbility * __thiscall
UDS_ResurrectAbility::UDS_ResurrectAbility(UDS_ResurrectAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->ResurrectAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ResurrectAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->SelfDeactivateTimer).Handle = 0;
  return this;
}

// ~UDS_ResurrectAbility @ 14b5878e0

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

void __thiscall UDS_ResurrectAbility::~UDS_ResurrectAbility(UDS_ResurrectAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b588ae0

EDS_AbilityInputPolicy __thiscall
UDS_ResurrectAbility::GetDefaultInputPolicy(UDS_ResurrectAbility *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b588d70

UClass * __cdecl UDS_ResurrectAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ResurrectAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ResurrectAbility",
               &Z_Registration_Info_UClass_UDS_ResurrectAbility.InnerSingleton,
               StaticRegisterNativesUDS_ResurrectAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ResurrectAbility>,
               InternalVTableHelperCtorCaller<UDS_ResurrectAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ResurrectAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_ResurrectAbility @ 14b589b60

void __cdecl UDS_ResurrectAbility::StaticRegisterNativesUDS_ResurrectAbility(void)

{
  return;
}

// OnCanActivate @ 14b839e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_ResurrectAbility::OnCanActivate(UDS_ResurrectAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->ResurrectAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_ResurrectAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->ResurrectAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->ResurrectAbilityData,(void *)0x0);
    if (!bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ResurrectAbility::OnCanActivate",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x27,L"ResurrectAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83f780

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

void __thiscall UDS_ResurrectAbility::OnDeactivateAbility(UDS_ResurrectAbility *this,bool *param_1)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  EDS_StateTagType local_res8 [8];
  
  local_res8[0] = Resurrect;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = Resurrect_Instant;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  if ((this->SelfDeactivateTimer).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = FTimerManager::FindTimer(this_00,&this->SelfDeactivateTimer);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->SelfDeactivateTimer).Handle);
    }
    (this->SelfDeactivateTimer).Handle = 0;
  }
  return;
}

// OnPostActivateAbility @ 14b844fa0

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

void __thiscall UDS_ResurrectAbility::OnPostActivateAbility(UDS_ResurrectAbility *this)

{
  float fVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UDS_DeathData *this_00;
  FDS_WarpBaseTableRow *pFVar7;
  FTimerManager *this_01;
  undefined1 auStackY_1b8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_AbilityDeactivateType local_178 [16];
  FWeakObjectPtr local_168;
  undefined8 uStack_160;
  FWeakObjectPtr local_158 [2];
  undefined1 local_148 [200];
  void *local_80;
  void *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar4 = TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->ResurrectAbilityData,(void *)0x0);
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14b845054;
    pUVar5 = UDS_LogManager::GetInst();
    local_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_148,
               "UDS_ResurrectAbility::OnPostActivateAbility",0x2b,Yes);
    pwVar9 = L"ResurrectAbilityData is nullptr.";
    uVar8 = 0x34;
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&(this->ResurrectAbilityData).WeakPtr);
    UDS_DeathData::FindOrAddData((ulong64)local_158,this->_padding_);
    bVar4 = TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *)local_158,(void *)0x0);
    if (!bVar4) {
      this_00 = (UDS_DeathData *)FWeakObjectPtr::Get(local_158);
      UDS_DeathData::Resurrect(this_00,pUVar6[2].field_0x8);
      local_178[1] = 1;
      local_178[0] = 0x56;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178,local_178 + 1);
      FDS_EntityBase::SetBattleState((FDS_EntityBase *)this->_padding_,false);
      (**(code **)(*(longlong *)this->_padding_ + 0x80))();
      bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_168,
                         (void *)0x0);
      if (!bVar4) {
        FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_148);
        local_148._0_4_ = DS_CommonDataHelper::IdResurrectionEffect();
        local_148._40_8_ = this->_padding_;
        local_148._52_4_ = local_168.ObjectIndex;
        local_148._56_4_ = local_168.ObjectSerialNumber;
        UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_148);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_148 + 0xc0));
        if (local_80 != (void *)0x0) {
          FMemory::Free(local_80);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)(local_148 + 0xc0));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_148._184_8_);
        if ((FScriptContainerElement *)local_148._24_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._24_8_);
        }
      }
      local_178[0] = 0x7c;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_178);
      cVar3 = (char)this->_padding_;
      if (((cVar3 == '\x02') || ((byte)(cVar3 - 3U) < 2)) &&
         ((pUVar6[2].field_0x8 == '\x01' || (pUVar6[2].field_0x8 == '\x03')))) {
        local_178[0] = 0x7d;
        UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_178);
        pFVar7 = FDS_WarpBaseTableRow::Get(3,true);
        if (pFVar7 == (FDS_WarpBaseTableRow *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_48 = (void *)0x0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_148,
                       "UDS_ResurrectAbility::OnPostActivateAbility",0x2b,Yes);
            UDS_LogManager::PrintLog(pUVar5,1,Warning,local_40,0x5f,L"warpBaseTable is nullptr.");
            if (local_48 != (void *)0x0) {
              FMemory::Free(local_48);
            }
          }
          local_178[0] = Cancel;
          UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178);
          return;
        }
        fVar1 = pFVar7->WarpEndAnimTime;
        fVar2 = pFVar7->WarpStartAnimTime;
        this_01 = FDS_TimerManager::Get((UObject *)0x0);
        uStack_160 = (ulonglong)uStack_160._4_4_ << 0x20;
        local_168 = (FWeakObjectPtr)OnSelfDeactivate;
        FTimerManager::SetTimer<UDS_ResurrectAbility>
                  (this_01,&this->SelfDeactivateTimer,this,(pmf_b2840778 *)&local_168,fVar1 + fVar2,
                   false,__real_bf800000);
        return;
      }
      local_178[0] = Success;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14b845054;
    pUVar5 = UDS_LogManager::GetInst();
    local_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_148,
               "UDS_ResurrectAbility::OnPostActivateAbility",0x2b,Yes);
    pwVar9 = L"deathData is nullptr.";
    uVar8 = 0x3e;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_40,uVar8,pwVar9);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
LAB_14b845054:
  local_178[1] = 2;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178 + 1);
  return;
}

// OnSelfDeactivate @ 14b846f30

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

void __thiscall UDS_ResurrectAbility::OnSelfDeactivate(UDS_ResurrectAbility *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// PlayResurrectEffect @ 14b84af50

void __thiscall UDS_ResurrectAbility::PlayResurrectEffect(UDS_ResurrectAbility *this)

{
  bool bVar1;
  FWeakObjectPtr local_res8 [4];
  undefined1 local_e8 [192];
  undefined1 local_28 [32];
  
  (**(code **)(*(longlong *)this->_padding_ + 0x80))();
  bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_res8,(void *)0x0
                    );
  if (!bVar1) {
    FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_e8);
    local_e8._0_4_ = DS_CommonDataHelper::IdResurrectionEffect();
    local_e8._40_8_ = this->_padding_;
    local_e8._52_4_ = local_res8[0].ObjectIndex;
    local_e8._56_4_ = local_res8[0].ObjectSerialNumber;
    UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_e8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    if ((void *)local_28._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_e8._184_8_);
    if ((FScriptContainerElement *)local_e8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._24_8_);
    }
  }
  return;
}

// RequestResurrect @ 14b84d5d0

bool __cdecl UDS_ResurrectAbility::RequestResurrect(EDS_ResurrectType *param_1)

{
  bool bVar1;
  ulong64 local_res8 [4];
  
  if ((*param_1 != Instant) && (*param_1 != Buff)) {
    local_res8[0] = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    bVar1 = UDS_WarpRequestAbility::TryActivate_ResurrectWarp(local_res8,param_1);
    return bVar1;
  }
  bVar1 = FDS_WarpService::RequestResurrectWarp(param_1);
  return bVar1;
}

// TryActivate @ 14b853630

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

bool __cdecl UDS_ResurrectAbility::TryActivate(ulong64 *param_1,EDS_ResurrectType *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
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
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ResurrectAbility::TryActivate",0x21,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x81;
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
                (&local_138,"UDS_ResurrectAbility::TryActivate",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x88,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b8537d5;
    }
    local_158[0] = Resurrect;
    UDS_AbilityDataSet::GetAbilityData<UDS_ResurrectAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = Resurrect;
      pUVar3[2].field_0x8 = *param_2;
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
              (&local_138,"UDS_ResurrectAbility::TryActivate",0x21,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0x8f;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b8537d5:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

