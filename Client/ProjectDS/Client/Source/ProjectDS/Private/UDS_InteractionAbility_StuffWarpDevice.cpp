// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b4bc130

UClass * __cdecl UDS_InteractionAbility_StuffWarpDevice::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDevice.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffWarpDevice",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDevice.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffWarpDevice,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_StuffWarpDevice>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffWarpDevice>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDevice.InnerSingleton;
}

// UDS_InteractionAbility_StuffWarpDevice @ 14b4c1cb0

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

UDS_InteractionAbility_StuffWarpDevice * __thiscall
UDS_InteractionAbility_StuffWarpDevice::UDS_InteractionAbility_StuffWarpDevice
          (UDS_InteractionAbility_StuffWarpDevice *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->EndCastingTimer).Handle = 0;
  return this;
}

// UDS_InteractionAbility_StuffWarpDevice @ 14b4c1d10

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

UDS_InteractionAbility_StuffWarpDevice * __thiscall
UDS_InteractionAbility_StuffWarpDevice::UDS_InteractionAbility_StuffWarpDevice
          (UDS_InteractionAbility_StuffWarpDevice *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->EndCastingTimer).Handle = 0;
  return this;
}

// ~UDS_InteractionAbility_StuffWarpDevice @ 14b4c2570

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
UDS_InteractionAbility_StuffWarpDevice::~UDS_InteractionAbility_StuffWarpDevice
          (UDS_InteractionAbility_StuffWarpDevice *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4c3b00

EDS_AbilityInputPolicy __thiscall
UDS_InteractionAbility_StuffWarpDevice::GetDefaultInputPolicy
          (UDS_InteractionAbility_StuffWarpDevice *this)

{
  return EndIfInput;
}

// GetPrivateStaticClass @ 14b4c51a0

UClass * __cdecl UDS_InteractionAbility_StuffWarpDevice::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDevice.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffWarpDevice",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDevice.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffWarpDevice,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_StuffWarpDevice>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffWarpDevice>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffWarpDevice.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c54a0

bool __thiscall
UDS_InteractionAbility_StuffWarpDevice::ShouldNotifyChangedCharState
          (UDS_InteractionAbility_StuffWarpDevice *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_StuffWarpDevice @ 14b4c5720

void __cdecl
UDS_InteractionAbility_StuffWarpDevice::StaticRegisterNativesUDS_InteractionAbility_StuffWarpDevice
          (void)

{
  return;
}

// BindStuffDataInteractionEvent @ 14b7db590

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
UDS_InteractionAbility_StuffWarpDevice::BindStuffDataInteractionEvent
          (UDS_InteractionAbility_StuffWarpDevice *this,ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_1a8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  code *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  FWeakObjectPtr local_158 [2];
  code *local_148;
  longlong lStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::BindStuffDataInteractionEvent",
               0x45,Yes);
    pwVar6 = L"targetEntity is nullptr. (%llu)";
    uVar5 = 0x137;
  }
  else {
    UDS_StuffData::GetData((ulong64)local_158,pFVar2->EntityID,false);
    bVar1 = TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> *)local_158,(void *)0x0);
    if (!bVar1) {
      local_168 = OnInteractionStart;
      uStack_160 = 0;
      lStack_140 = (ulonglong)uStack_15c << 0x20;
      local_148 = OnInteractionStart;
      pUVar4 = FWeakObjectPtr::Get(local_158);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_StuffWarpDevice>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                  *)&pUVar4[8].field_0x8,(UDS_InteractionAbility_StuffWarpDevice *)&local_168,
                 (pmf_a770e95a *)this);
      uStack_160 = 0;
      local_168 = OnInteractionCancel;
      lStack_140 = (ulonglong)uStack_15c << 0x20;
      local_148 = OnInteractionCancel;
      pUVar4 = FWeakObjectPtr::Get(local_158);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_StuffWarpDevice>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                  *)(pUVar4 + 9),(UDS_InteractionAbility_StuffWarpDevice *)&local_168,
                 (pmf_a770e95a *)this);
      uStack_160 = 0;
      local_168 = OnInteractionComplete;
      lStack_140 = (ulonglong)uStack_15c << 0x20;
      local_148 = OnInteractionComplete;
      pUVar4 = FWeakObjectPtr::Get(local_158);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_StuffWarpDevice>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                  *)&pUVar4[9].field_0x20,(UDS_InteractionAbility_StuffWarpDevice *)&local_168,
                 (pmf_debbcebc *)this);
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::BindStuffDataInteractionEvent",
               0x45,Yes);
    pwVar6 = L"stuffData is nullptr. (%llu)";
    uVar5 = 0x13e;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// ClearEndCastingTimer @ 14b7dc600

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
UDS_InteractionAbility_StuffWarpDevice::ClearEndCastingTimer
          (UDS_InteractionAbility_StuffWarpDevice *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->EndCastingTimer;
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

// EndCasting @ 14b7e5670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffWarpDevice::EndCasting(UDS_InteractionAbility_StuffWarpDevice *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *this_00;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffWarpDevice::EndCasting",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x122,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_148);
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    iVar1 = *(int *)&pUVar4[2].field_0x10;
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    FDS_WarpService::RequestWarpDeviceActivate((ulong64 *)&pUVar4[2].field_0x8,iVar1);
  }
  return;
}

// IsContentsLock @ 14b7f28f0

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

bool __cdecl UDS_InteractionAbility_StuffWarpDevice::IsContentsLock(ulong64 *param_1)

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
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::IsContentsLock",0x36,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xdd,L"targetEntity is nullptr. (%llu)")
    ;
  }
  else {
    this = UDS_ContentManager::GetInst();
    if (this != (UDS_ContentManager *)0x0) {
      local_144[0] = (int)pFVar2->TableID;
      local_148 = WarpDeviceActivate;
      bVar1 = UDS_ContentManager::HasContentsFunction(this,&local_148,local_144);
      if (!bVar1) {
        return false;
      }
      local_148 = WarpDeviceActivate;
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
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::IsContentsLock",0x36,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xe4,L"contentMng is nullptr.");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return true;
}

// OnAbilityRetryActivate @ 14b7f4930

void __thiscall
UDS_InteractionAbility_StuffWarpDevice::OnAbilityRetryActivate
          (UDS_InteractionAbility_StuffWarpDevice *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2729046499328524447>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_StuffWarpDevice.cpp"
                     ,0x9f,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCanActivate @ 14b7f73d0

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
UDS_InteractionAbility_StuffWarpDevice::OnCanActivate(UDS_InteractionAbility_StuffWarpDevice *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_EntityBase *pFVar6;
  UDS_ContentManager *this_01;
  undefined1 auStackY_188 [32];
  uint uVar7;
  wchar_t *pwVar8;
  EDS_ContentsFunctionType local_144 [2];
  int local_13c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (!bVar2) {
    return false;
  }
  this_00 = &this->InteractionAbilityData;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffWarpDevice>
                      ((ulong64 *)local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
    this_00->WeakPtr = *TVar3.WeakPtr;
  }
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::OnCanActivate",0x35,Yes);
    pwVar8 = L"InteractionAbilityData is nullptr.";
    uVar7 = 0x2e;
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
      local_138._padding_ = (longlong)pFVar6;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffWarpDevice::IsContentsLock",0x36,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0xdd,L"targetEntity is nullptr. (%llu)");
      goto LAB_14b7f74bb;
    }
    this_01 = UDS_ContentManager::GetInst();
    if (this_01 != (UDS_ContentManager *)0x0) {
      local_13c = (int)pFVar6->TableID;
      local_144[0] = WarpDeviceActivate;
      bVar2 = UDS_ContentManager::HasContentsFunction(this_01,local_144,&local_13c);
      if (bVar2) {
        local_144[0] = WarpDeviceActivate;
        UDS_ContentManager::OnAlertMessage_ContentsFunction(this_01,local_144);
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
      return bVar2;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::IsContentsLock",0x36,Yes);
    pwVar8 = L"contentMng is nullptr.";
    uVar7 = 0xe4;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar7,pwVar8);
LAB_14b7f74bb:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// OnChangedCharState @ 14b7f9b30

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
UDS_InteractionAbility_StuffWarpDevice::OnChangedCharState
          (UDS_InteractionAbility_StuffWarpDevice *this,
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
                (&local_138,"UDS_InteractionAbility_StuffWarpDevice::OnChangedCharState",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xa8,L"InCharStateData is nullptr.");
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
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_StuffWarpDevice::OnChangedCharState",0x3a,Yes)
        ;
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0xaf,L"InteractionAbilityData is nullptr.");
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

// OnDeactivateAbility @ 14b7fcc90

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
UDS_InteractionAbility_StuffWarpDevice::OnDeactivateAbility
          (UDS_InteractionAbility_StuffWarpDevice *this,bool *param_1)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr> *this_00;
  FName FVar1;
  bool bVar2;
  FTimerManager *this_01;
  FTimerData *pFVar3;
  UObject *pUVar4;
  FDS_EntityBase *pFVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_188 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((this->EndCastingTimer).Handle != 0) {
    this_01 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(this_01,&this->EndCastingTimer);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_01,(FTimerHandle)(this->EndCastingTimer).Handle);
    }
    (this->EndCastingTimer).Handle = 0;
  }
  this_00 = &this->InteractionAbilityData;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  FVar1.ComparisonIndex.Value = *(uint *)&pUVar4[2].field_0x18;
  FVar1.Number = *(uint *)&pUVar4[2].field_0x1c;
  if (FVar1 != FGameplayTag::EmptyTag.TagName) {
    UDS_GameplayAbility::RemoveStateTagToASC
              ((UDS_GameplayAbility *)this,(FGameplayTag *)&pUVar4[2].field_0x18);
  }
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pFVar5 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar4[2].field_0x8);
  if (pFVar5 == (FDS_EntityBase *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b7fcebb;
    pUVar6 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::UnbindStuffDataInteractionEvent",
               0x47,Yes);
    pwVar8 = L"targetEntity is nullptr. (%llu)";
    uVar7 = 0x14e;
  }
  else {
    UDS_StuffData::GetData((ulong64)local_148,pFVar5->EntityID,false);
    bVar2 = TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar2) {
      pUVar4 = FWeakObjectPtr::Get(local_148);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[8].field_0x8,this);
      pUVar4 = FWeakObjectPtr::Get(local_148);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 9),this);
      pUVar4 = FWeakObjectPtr::Get(local_148);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[9].field_0x20,this);
      goto LAB_14b7fcebb;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b7fcebb;
    pUVar6 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::UnbindStuffDataInteractionEvent",
               0x47,Yes);
    pwVar8 = L"stuffData is nullptr. (%llu)";
    uVar7 = 0x155;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14b7fcebb:
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
  return;
}

// OnInteractionCancel @ 14b7fe2d0

void __thiscall
UDS_InteractionAbility_StuffWarpDevice::OnInteractionCancel
          (UDS_InteractionAbility_StuffWarpDevice *this,ulong64 *param_1)

{
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res8 [32];
  
  local_res8[0] = Success;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res8);
  return;
}

// OnInteractionComplete @ 14b7fe910

void __thiscall
UDS_InteractionAbility_StuffWarpDevice::OnInteractionComplete
          (UDS_InteractionAbility_StuffWarpDevice *this,ulong64 *param_1,bool *param_2,bool *param_3
          )

{
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res8 [32];
  
  local_res8[0] = Success;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res8);
  return;
}

// OnInteractionStart @ 14b7fee90

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
UDS_InteractionAbility_StuffWarpDevice::OnInteractionStart
          (UDS_InteractionAbility_StuffWarpDevice *this,ulong64 *param_1)

{
  uint uVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *this_00;
  UObject *pUVar4;
  FName *pFVar5;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [8];
  FName local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffWarpDevice::OnInteractionStart",0x3a,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x164,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_148);
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    local_140.ComparisonIndex.Value = *(uint *)&pUVar4[2].field_0x18;
    local_140.Number = *(uint *)&pUVar4[2].field_0x1c;
    if (local_140 != FGameplayTag::EmptyTag.TagName) {
      UDS_GameplayAbility::RemoveStateTagToASC
                ((UDS_GameplayAbility *)this,(FGameplayTag *)&local_140);
      local_140 = FGameplayTag::EmptyTag.TagName;
      pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      uVar1 = FGameplayTag::EmptyTag.TagName.Number;
      *(uint *)&pUVar4[2].field_0x18 = FGameplayTag::EmptyTag.TagName.ComparisonIndex.Value;
      *(uint *)&pUVar4[2].field_0x1c = uVar1;
    }
    local_148[0] = 0x4a;
    pFVar5 = &FDS_GameplayTags::GetStateTag(local_148)->TagName;
    local_140 = *pFVar5;
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    *(uint *)&pUVar4[2].field_0x18 = local_140.ComparisonIndex.Value;
    *(uint *)&pUVar4[2].field_0x1c = local_140.Number;
    UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,(FGameplayTag *)&local_140);
  }
  return;
}

// OnPostActivateAbility @ 14b805fb0

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

void __thiscall
UDS_InteractionAbility_StuffWarpDevice::OnPostActivateAbility
          (UDS_InteractionAbility_StuffWarpDevice *this)

{
  bool bVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_StuffWarpDeviceTableRow *pFVar5;
  UDS_QuestManager *this_01;
  FDS_QuestBaseTableRow *pFVar6;
  FString *pFVar7;
  UDS_AbilitySystemComponent *this_02;
  undefined1 auStackY_1e8 [32];
  EDS_AbilityDeactivateType local_1a8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a0;
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_180;
  FStringFormatArg local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((this->EndCastingTimer).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,&this->EndCastingTimer);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->EndCastingTimer).Handle);
    }
    (this->EndCastingTimer).Handle = 0;
  }
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_StuffWarpDevice::OnPostActivateAbility",0x3d,Yes
                );
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x4f,L"InteractionAbilityData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_StuffWarpDeviceData::GetData((ulong64)&local_190);
    bVar1 = FWeakObjectPtr::IsValid(&local_190);
    if (bVar1) {
      pUVar4 = FWeakObjectPtr::Get(&local_190);
      pFVar5 = FDS_StuffWarpDeviceTableRow::GetRef((longlong)*(int *)&pUVar4[7].field_0x14,true);
      UDS_PlayerData::GetMainPlayerCurrentEntityID();
      UDS_CharInfoData::GetData((ulong64)&local_188);
      bVar1 = FWeakObjectPtr::IsValid(&local_188);
      if ((bVar1) &&
         (pUVar4 = FWeakObjectPtr::Get(&local_188),
         *(int *)&pUVar4[8].field_0xc < pFVar5->RequiredLevel)) {
        local_180._0_8_ = 0;
        local_180._8_8_ = 0;
        local_180._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x1adb2,Alert_System_01,&local_180);
      }
      else {
        this_01 = UDS_QuestManager::GetInst();
        if ((this_01 == (UDS_QuestManager *)0x0) ||
           (bVar1 = UDS_QuestManager::IsQuestCompleted(this_01,pFVar5->ID_RequiredQuest), bVar1)) {
          pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
          bVar1 = BindStuffDataInteractionEvent(this,(ulong64 *)&pUVar4[2].field_0x8);
          if ((bVar1) && (bVar1 = StartCasting(this), bVar1)) {
            return;
          }
        }
        else {
          pFVar6 = FDS_QuestBaseTableRow::GetRef((longlong)pFVar5->ID_RequiredQuest,true);
          pFVar7 = (FString *)
                   (**(code **)((pFVar6->ID_QuestTitleId)._padding_ + 8))(&pFVar6->ID_QuestTitleId);
          pFVar7 = ::FString::FString((FString *)&local_180,pFVar7);
          FStringFormatArg::FStringFormatArg(&local_168,pFVar7);
          local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a0.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_1a0.AllocatorInstance,1,&local_1a0.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_1a0.AllocatorInstance.Data,&local_168,1);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x1adb3,Alert_System_01,&local_1a0,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
          if ((FStringFormatArg *)local_1a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_1a0.AllocatorInstance.Data);
          }
          if (local_168.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.StringValue.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  local_1a8[0] = Cancel;
  this_02 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_02,(FGameplayTag *)&this->_padding_,local_1a8);
  return;
}

// StartCasting @ 14b8125f0

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
UDS_InteractionAbility_StuffWarpDevice::StartCasting(UDS_InteractionAbility_StuffWarpDevice *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr> *this_00;
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_EntityBase *pFVar6;
  FTimerManager *this_01;
  undefined1 auStackY_1a8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  code *local_158;
  undefined8 uStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = &this->InteractionAbilityData;
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_StuffWarpDevice::StartCasting",0x34,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_148.Ptr,0xf5,L"InteractionAbilityData is nullptr.");
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
      FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_StuffWarpDevice::StartCasting",0x34,Yes);
      pwVar8 = L"targetEntity is nullptr. (%llu)";
      uVar7 = 0xfc;
    }
    else {
      UDS_StuffData::GetData((ulong64)&local_168,pFVar6->EntityID,false);
      bVar3 = TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> *)&local_168,(void *)0x0);
      if (!bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&local_168);
        TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::
        Broadcast((TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                   *)&pUVar5[8].field_0x8,(ulong64 *)&this->_padding_);
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        uVar2 = *(undefined4 *)&pUVar5[2].field_0x10;
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_InteractionData::GetData
                  ((ulong64)&local_160,*(ulong64 *)&pUVar5[2].field_0x8,SUB41(uVar2,0));
        bVar3 = FWeakObjectPtr::IsValid(&local_160);
        if (bVar3) {
          pUVar5 = FWeakObjectPtr::Get(&local_160);
          fVar1 = *(float *)&pUVar5[2].field_0x18;
          if (0.0 < fVar1) {
            this_01 = FDS_TimerManager::Get((UObject *)0x0);
            uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
            local_158 = EndCasting;
            FTimerManager::SetTimer<UDS_InteractionAbility_StuffWarpDevice>
                      (this_01,&this->EndCastingTimer,this,(pmf_2856a716 *)&local_158,fVar1,false,
                       __real_bf800000);
            return true;
          }
        }
        EndCasting(this);
        return true;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_StuffWarpDevice::StartCasting",0x34,Yes);
      pwVar8 = L"stuffData is nullptr. (%llu)";
      uVar7 = 0x103;
    }
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar7,pwVar8);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// TryActivate @ 14b815760

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
UDS_InteractionAbility_StuffWarpDevice::TryActivate(ulong64 *param_1,ulong64 *param_2,int param_3)

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
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::TryActivate",0x33,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0xc0;
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
                (&local_138,"UDS_InteractionAbility_StuffWarpDevice::TryActivate",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,199,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b815953;
    }
    local_158[0] = Interaction_StuffWarpDevice;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffWarpDevice>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr> *)
                       &local_150,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = Interaction_StuffWarpDevice;
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
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::TryActivate",0x33,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0xce;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b815953:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// UnbindStuffDataInteractionEvent @ 14b817750

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
UDS_InteractionAbility_StuffWarpDevice::UnbindStuffDataInteractionEvent
          (UDS_InteractionAbility_StuffWarpDevice *this,ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_188 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::UnbindStuffDataInteractionEvent",
               0x47,Yes);
    pwVar6 = L"targetEntity is nullptr. (%llu)";
    uVar5 = 0x14e;
  }
  else {
    UDS_StuffData::GetData((ulong64)local_148,pFVar2->EntityID,false);
    bVar1 = TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar1) {
      pUVar4 = FWeakObjectPtr::Get(local_148);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[8].field_0x8,this);
      pUVar4 = FWeakObjectPtr::Get(local_148);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 9),this);
      pUVar4 = FWeakObjectPtr::Get(local_148);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[9].field_0x20,this);
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffWarpDevice::UnbindStuffDataInteractionEvent",
               0x47,Yes);
    pwVar6 = L"stuffData is nullptr. (%llu)";
    uVar5 = 0x155;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

