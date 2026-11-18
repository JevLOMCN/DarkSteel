// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b440b10

UClass * __cdecl UDS_CharacterSwitchAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterSwitchAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterSwitchAbility",
               &Z_Registration_Info_UClass_UDS_CharacterSwitchAbility.InnerSingleton,
               StaticRegisterNativesUDS_CharacterSwitchAbility,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CharacterSwitchAbility>,
               InternalVTableHelperCtorCaller<UDS_CharacterSwitchAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterSwitchAbility.InnerSingleton;
}

// UDS_CharacterSwitchAbility @ 14b443930

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

UDS_CharacterSwitchAbility * __thiscall
UDS_CharacterSwitchAbility::UDS_CharacterSwitchAbility
          (UDS_CharacterSwitchAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->CharacterSwitchAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharacterSwitchAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->RemoveEntityTimer).Handle = 0;
  return this;
}

// UDS_CharacterSwitchAbility @ 14b443990

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

UDS_CharacterSwitchAbility * __thiscall
UDS_CharacterSwitchAbility::UDS_CharacterSwitchAbility
          (UDS_CharacterSwitchAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->CharacterSwitchAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharacterSwitchAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->RemoveEntityTimer).Handle = 0;
  return this;
}

// ~UDS_CharacterSwitchAbility @ 14b444290

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
UDS_CharacterSwitchAbility::~UDS_CharacterSwitchAbility(UDS_CharacterSwitchAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b444ee0

EDS_AbilityInputPolicy __thiscall
UDS_CharacterSwitchAbility::GetDefaultInputPolicy(UDS_CharacterSwitchAbility *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b444ef0

UClass * __cdecl UDS_CharacterSwitchAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterSwitchAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterSwitchAbility",
               &Z_Registration_Info_UClass_UDS_CharacterSwitchAbility.InnerSingleton,
               StaticRegisterNativesUDS_CharacterSwitchAbility,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CharacterSwitchAbility>,
               InternalVTableHelperCtorCaller<UDS_CharacterSwitchAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterSwitchAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_CharacterSwitchAbility @ 14b445620

void __cdecl UDS_CharacterSwitchAbility::StaticRegisterNativesUDS_CharacterSwitchAbility(void)

{
  return;
}

// ClearRemoveEntityTimer @ 14b79fba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_CharacterSwitchAbility::ClearRemoveEntityTimer(UDS_CharacterSwitchAbility *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->RemoveEntityTimer;
  if (pFVar1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,pFVar1);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  return;
}

// Deactivate @ 14b7a39b0

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
UDS_CharacterSwitchAbility::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

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
              (&local_138,"UDS_CharacterSwitchAbility::Deactivate",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x6d,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = CharacterSwitch;
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
              (&local_138,"UDS_CharacterSwitchAbility::Deactivate",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x74,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// ExecuteRemoveEntity @ 14b7a8880

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

void __thiscall UDS_CharacterSwitchAbility::ExecuteRemoveEntity(UDS_CharacterSwitchAbility *this)

{
  longlong *plVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_DataManager *pUVar4;
  UDS_EntityManager *this_00;
  FDS_EntityBase *this_01;
  undefined1 auStackY_198 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_AbilityDeactivateType local_158;
  EDS_AbilityTagType local_157 [15];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->CharacterSwitchAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7a8927;
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_CharacterSwitchAbility::ExecuteRemoveEntity",0x2f,Yes);
    pwVar6 = L"CharacterSwitchAbilityData is nullptr.";
    uVar5 = 0x93;
  }
  else {
    pUVar4 = UDS_DataManager::GetInst();
    if (pUVar4 != (UDS_DataManager *)0x0) {
      this_00 = UDS_EntityManager::GetInst();
      if (this_00 == (UDS_EntityManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = (longlong)this_00;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_CharacterSwitchAbility::ExecuteRemoveEntity",0x2f,Yes);
          UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0xa3,L"entityMng is nullptr.");
          if ((UDS_EntityManager *)local_148._padding_ != (UDS_EntityManager *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        local_158 = Cancel;
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&local_158);
        return;
      }
      FWeakObjectPtr::Get(&(this->CharacterSwitchAbilityData).WeakPtr);
      plVar1 = &this->_padding_;
      local_158 = Cancel;
      if (*plVar1 == 0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7a8b6a;
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_CharacterSwitchAbility::Deactivate",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x6d,L"Invalid parameter.");
      }
      else {
        this_01 = FDS_EntityBase::GetEntityBase((ulong64 *)plVar1);
        if (this_01 != (FDS_EntityBase *)0x0) {
          local_157[0] = CharacterSwitch;
          FDS_EntityBase::DeactivateAbility(this_01,local_157,&local_158);
          goto LAB_14b7a8b6a;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7a8b6a;
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_CharacterSwitchAbility::Deactivate",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_148.Ptr,0x74,L"sourceEntity is nullptr. (%llu)");
      }
      if ((UDS_EntityManager *)local_148._padding_ != (UDS_EntityManager *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
LAB_14b7a8b6a:
      UDS_EntityManager::RemoveEntity(this_00,*plVar1,false);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7a8927;
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_CharacterSwitchAbility::ExecuteRemoveEntity",0x2f,Yes);
    pwVar6 = L"dataMng is nullptr.";
    uVar5 = 0x9b;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar5,pwVar6);
  if ((UDS_EntityManager *)local_148._padding_ != (UDS_EntityManager *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14b7a8927:
  local_158 = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&local_158);
  return;
}

// OnCanActivate @ 14b7b5fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_CharacterSwitchAbility::OnCanActivate(UDS_CharacterSwitchAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->CharacterSwitchAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_CharacterSwitchAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->CharacterSwitchAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->CharacterSwitchAbilityData,(void *)0x0);
    if (!bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CharacterSwitchAbility::OnCanActivate",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x1e,L"CharacterSwitchAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnCharacterSwitchComplete @ 14b7b7260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_CharacterSwitchAbility::OnCharacterSwitchComplete(UDS_CharacterSwitchAbility *this)

{
  FTimerManager *pFVar1;
  FTimerData *pFVar2;
  code *local_18;
  undefined8 uStack_10;
  
  pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar2 = FTimerManager::FindTimer(pFVar1,&this->RemoveEntityTimer);
  if (pFVar2 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(pFVar1,(FTimerHandle)(this->RemoveEntityTimer).Handle);
  }
  (this->RemoveEntityTimer).Handle = 0;
  pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = ExecuteRemoveEntity;
  FTimerManager::SetTimer<UDS_CharacterSwitchAbility>
            (pFVar1,&this->RemoveEntityTimer,this,(pmf_207c2ed4 *)&local_18,__real_3f800000,false,
             __real_bf800000);
  return;
}

// OnDeactivateAbility @ 14b7b84c0

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
UDS_CharacterSwitchAbility::OnDeactivateAbility(UDS_CharacterSwitchAbility *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FTimerManager *this_00;
  FTimerData *pFVar3;
  EDS_StateTagType local_res8 [8];
  
  local_res8[0] = CharSwitch;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  bVar1 = TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->CharacterSwitchAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CharacterSwitchAbilityData).WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar2[2].field_0x10);
    pUVar2 = FWeakObjectPtr::Get(&(this->CharacterSwitchAbilityData).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))();
  }
  if ((this->RemoveEntityTimer).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(this_00,&this->RemoveEntityTimer);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->RemoveEntityTimer).Handle);
    }
    (this->RemoveEntityTimer).Handle = 0;
  }
  return;
}

// OnPostActivateAbility @ 14b7bbb30

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

void __thiscall UDS_CharacterSwitchAbility::OnPostActivateAbility(UDS_CharacterSwitchAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 auStackY_1b8 [32];
  EDS_AbilityDeactivateType local_188;
  EDS_AbilityTagType local_187 [15];
  code *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  UDS_CharacterSwitchAbility *local_168;
  FDestructionSentinel local_160;
  undefined1 *local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar1 = TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->CharacterSwitchAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CharacterSwitchAbility::OnPostActivateAbility",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x2b,L"CharacterSwitchAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_188 = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&local_188);
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->CharacterSwitchAbilityData).WeakPtr);
    uStack_170 = 0;
    local_178 = OnCharacterSwitchComplete;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x10,
               (FWriteAccessScope *)&local_160);
    local_148 = &pUVar3[2].field_0x18;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_148);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CharacterSwitchAbility____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_CharacterSwitchAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_168 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_CharacterSwitchAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_168);
      puVar4[4] = local_178;
      puVar4[5] = CONCAT44(uStack_16c,uStack_170);
    }
    if (local_160.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
    }
    local_188 = 0x18;
    bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,&local_188);
    if (bVar1) {
      local_187[0] = Skill_ActiveSkill;
      local_188 = bVar1;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_187,&local_188);
    }
    local_187[0] = ~(Patrol|SkillMove);
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_187);
  }
  return;
}

// SetRemoveEntityTimer @ 14b7c3fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_CharacterSwitchAbility::SetRemoveEntityTimer(UDS_CharacterSwitchAbility *this)

{
  FTimerManager *pFVar1;
  FTimerData *pFVar2;
  code *local_18;
  undefined8 uStack_10;
  
  pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar2 = FTimerManager::FindTimer(pFVar1,&this->RemoveEntityTimer);
  if (pFVar2 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(pFVar1,(FTimerHandle)(this->RemoveEntityTimer).Handle);
  }
  (this->RemoveEntityTimer).Handle = 0;
  pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = ExecuteRemoveEntity;
  FTimerManager::SetTimer<UDS_CharacterSwitchAbility>
            (pFVar1,&this->RemoveEntityTimer,this,(pmf_207c2ed4 *)&local_18,__real_3f800000,false,
             __real_bf800000);
  return;
}

// TryActivate @ 14b7c6530

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

bool __cdecl UDS_CharacterSwitchAbility::TryActivate(ulong64 *param_1,bool *param_2)

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
              (&local_138,"UDS_CharacterSwitchAbility::TryActivate",0x27,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x52;
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
                (&local_138,"UDS_CharacterSwitchAbility::TryActivate",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x59,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b7c66d5;
    }
    local_158[0] = CharacterSwitch;
    UDS_AbilityDataSet::GetAbilityData<UDS_CharacterSwitchAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = CharacterSwitch;
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
              (&local_138,"UDS_CharacterSwitchAbility::TryActivate",0x27,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0x60;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b7c66d5:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

