// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b458080

UClass * __cdecl UDS_ComeBackAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ComeBackAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ComeBackAbility",
               &Z_Registration_Info_UClass_UDS_ComeBackAbility.InnerSingleton,
               StaticRegisterNativesUDS_ComeBackAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ComeBackAbility>,
               InternalVTableHelperCtorCaller<UDS_ComeBackAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ComeBackAbility.InnerSingleton;
}

// UDS_ComeBackAbility @ 14b45c8b0

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

UDS_ComeBackAbility * __thiscall
UDS_ComeBackAbility::UDS_ComeBackAbility(UDS_ComeBackAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->ComeBackAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->ComeBackAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_ComeBackAbility @ 14b45c900

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

UDS_ComeBackAbility * __thiscall
UDS_ComeBackAbility::UDS_ComeBackAbility(UDS_ComeBackAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->ComeBackAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->ComeBackAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_ComeBackAbility @ 14b45d0f0

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

void __thiscall UDS_ComeBackAbility::~UDS_ComeBackAbility(UDS_ComeBackAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b45eb00

UClass * __cdecl UDS_ComeBackAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ComeBackAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ComeBackAbility",
               &Z_Registration_Info_UClass_UDS_ComeBackAbility.InnerSingleton,
               StaticRegisterNativesUDS_ComeBackAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ComeBackAbility>,
               InternalVTableHelperCtorCaller<UDS_ComeBackAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ComeBackAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b45f120

bool __thiscall UDS_ComeBackAbility::ShouldNotifyChangedCharState(UDS_ComeBackAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b45f140

bool __thiscall UDS_ComeBackAbility::ShouldTickComponent(UDS_ComeBackAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_ComeBackAbility @ 14b45f260

void __cdecl UDS_ComeBackAbility::StaticRegisterNativesUDS_ComeBackAbility(void)

{
  return;
}

// IsComeBackEnd @ 14b7b1d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_ComeBackAbility::IsComeBackEnd(ulong64 *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_198 [32];
  uint uVar5;
  wchar_t *pwVar6;
  float local_168 [2];
  FWeakObjectPtr local_160;
  TVector<double> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_MovementCore::GetMovementCore((ulong64)&local_160);
  bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_160,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ComeBackAbility::IsComeBackEnd",0x22,Yes);
    pwVar6 = L"sourceMovementCore is nullptr.";
    uVar5 = 0x8c;
  }
  else {
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_2->field0_0x0 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
        (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
        __real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      pUVar4 = FWeakObjectPtr::Get(&local_160);
      (**(code **)(*(longlong *)pUVar4 + 0x338))(pUVar4,&local_158);
      local_168[0] = 25.0;
      bVar2 = DS_Util::IsCloseDist(&local_158,param_2,local_168);
      return bVar2;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ComeBackAbility::IsComeBackEnd",0x22,Yes);
    pwVar6 = L"InDestination is 0.";
    uVar5 = 0x92;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return true;
}

// OnCanActivate @ 14b7b6150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_ComeBackAbility::OnCanActivate(UDS_ComeBackAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  uint uVar5;
  wchar_t *pwVar6;
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->ComeBackAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_ComeBackAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->ComeBackAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->ComeBackAbilityData,(void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ComeBackAbility::OnCanActivate",0x22,Yes);
      pwVar6 = L"ComeBackAbilityData is nullptr.";
      uVar5 = 0x21;
    }
    else {
      pUVar4 = FWeakObjectPtr::Get(&(this->ComeBackAbilityData).WeakPtr);
      if (((__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pUVar4[2].field_0x8 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)*(undefined8 *)&pUVar4[2].field_0x8 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pUVar4[2].field_0x10 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&pUVar4[2].field_0x10 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
         (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pUVar4[2].field_0x18 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&pUVar4[2].field_0x18 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        return true;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ComeBackAbility::OnCanActivate",0x22,Yes);
      pwVar6 = L"destination is 0.";
      uVar5 = 0x29;
    }
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// OnChangedCharState @ 14b7b6a30

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
UDS_ComeBackAbility::OnChangedCharState
          (UDS_ComeBackAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FWeakObjectPtr local_res10 [2];
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
  local_res10[0] = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_168);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ComeBackAbility::OnChangedCharState",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x4c,L"InCharStateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_178[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178);
  }
  return;
}

// OnDeactivateAbility @ 14b7b8680

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

void __thiscall UDS_ComeBackAbility::OnDeactivateAbility(UDS_ComeBackAbility *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_StateTagType local_res8 [32];
  
  local_res8[0] = ComeBack;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  bVar1 = TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->ComeBackAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ComeBackAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b7b86c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2c8));
    return;
  }
  return;
}

// OnPostActivateAbility @ 14b7bbfe0

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

void __thiscall UDS_ComeBackAbility::OnPostActivateAbility(UDS_ComeBackAbility *this)

{
  EDS_StateTagType local_res10 [24];
  
  local_res10[0] = ComeBack;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnTickComponent @ 14b7be710

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

void __thiscall UDS_ComeBackAbility::OnTickComponent(UDS_ComeBackAbility *this,float param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_198 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_AbilityDeactivateType local_168 [4];
  float local_164;
  FWeakObjectPtr local_160;
  TVector<double> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar1 = TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->ComeBackAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ComeBackAbility::OnTickComponent",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x60,L"ComeBackAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_168[0] = Cancel;
    goto LAB_14b7be965;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->ComeBackAbilityData).WeakPtr);
  UDS_MovementCore::GetMovementCore((ulong64)&local_160);
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_160,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ComeBackAbility::IsComeBackEnd",0x22,Yes);
      pwVar6 = L"sourceMovementCore is nullptr.";
      uVar5 = 0x8c;
LAB_14b7be85a:
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if (((__real_3f1a36e2e0000000 <
             (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pUVar3[2].field_0x8 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              (uint)*(undefined8 *)&pUVar3[2].field_0x8 &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
           (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pUVar3[2].field_0x10 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)*(undefined8 *)&pUVar3[2].field_0x10 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pUVar3[2].field_0x18 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&pUVar3[2].field_0x18 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    pUVar4 = FWeakObjectPtr::Get(&local_160);
    (**(code **)(*(longlong *)pUVar4 + 0x338))(pUVar4,&local_158);
    local_164 = 25.0;
    bVar1 = DS_Util::IsCloseDist(&local_158,(TVector<double> *)&pUVar3[2].field_0x8,&local_164);
    if (!bVar1) {
      return;
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ComeBackAbility::IsComeBackEnd",0x22,Yes);
      pwVar6 = L"InDestination is 0.";
      uVar5 = 0x92;
      goto LAB_14b7be85a;
    }
  }
  local_168[0] = Success;
LAB_14b7be965:
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_168);
  return;
}

// TryActivate @ 14b7c6750

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

bool __cdecl UDS_ComeBackAbility::TryActivate(ulong64 *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  bool bVar3;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_198 [32];
  wchar_t *pwVar8;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*param_1 == 0) ||
     (((uVar6 = (uint)*(undefined8 *)&param_2->field0_0x0 &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar7 = (uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000 &&
       (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
       uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000)) &&
      (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
      uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000)))) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ComeBackAbility::TryActivate",0x20,Yes);
    pwVar8 = L"Invalid parameter.";
    uVar6 = 0x70;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ComeBackAbility::TryActivate",0x20,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x77,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b7c696f;
    }
    local_158[0] = ComeBack;
    UDS_AbilityDataSet::GetAbilityData<UDS_ComeBackAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar3 = TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_150);
      dVar2 = (param_2->field0_0x0)._s_0.Y;
      local_148[0] = 0;
      local_158[0] = ComeBack;
      *(double *)&pUVar5[2].field_0x8 = (param_2->field0_0x0)._s_0.X;
      *(double *)&pUVar5[2].field_0x10 = dVar2;
      *(double *)&pUVar5[2].field_0x18 = (param_2->field0_0x0)._s_0.Z;
      bVar3 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar3;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ComeBackAbility::TryActivate",0x20,Yes);
    pwVar8 = L"abilityData is nullptr.";
    uVar6 = 0x7e;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar6,pwVar8);
LAB_14b7c696f:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

