// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b5353e0

UClass * __cdecl UDS_NPCClientControlAbility_Hide::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Hide.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbility_Hide",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Hide.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbility_Hide,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbility_Hide>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbility_Hide>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Hide.InnerSingleton;
}

// UDS_NPCClientControlAbility_Hide @ 14b538810

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

UDS_NPCClientControlAbility_Hide * __thiscall
UDS_NPCClientControlAbility_Hide::UDS_NPCClientControlAbility_Hide
          (UDS_NPCClientControlAbility_Hide *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NPCClientControlAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCClientControlAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->StartDelayTimer).Handle = 0;
  (this->StartDisappearProcessTimer).Handle = 0;
  this->ElapsedTime = 0.0;
  this->bStartedDisappearProcess = false;
  return this;
}

// UDS_NPCClientControlAbility_Hide @ 14b538890

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

UDS_NPCClientControlAbility_Hide * __thiscall
UDS_NPCClientControlAbility_Hide::UDS_NPCClientControlAbility_Hide
          (UDS_NPCClientControlAbility_Hide *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NPCClientControlAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCClientControlAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->StartDelayTimer).Handle = 0;
  (this->StartDisappearProcessTimer).Handle = 0;
  this->ElapsedTime = 0.0;
  this->bStartedDisappearProcess = false;
  return this;
}

// ~UDS_NPCClientControlAbility_Hide @ 14b538fc0

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
UDS_NPCClientControlAbility_Hide::~UDS_NPCClientControlAbility_Hide
          (UDS_NPCClientControlAbility_Hide *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b53a5d0

UClass * __cdecl UDS_NPCClientControlAbility_Hide::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Hide.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbility_Hide",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Hide.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbility_Hide,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbility_Hide>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbility_Hide>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Hide.InnerSingleton;
}

// ShouldTickComponent @ 14b53a8e0

bool __thiscall
UDS_NPCClientControlAbility_Hide::ShouldTickComponent(UDS_NPCClientControlAbility_Hide *this)

{
  return true;
}

// StaticRegisterNativesUDS_NPCClientControlAbility_Hide @ 14b53a9b0

void __cdecl
UDS_NPCClientControlAbility_Hide::StaticRegisterNativesUDS_NPCClientControlAbility_Hide(void)

{
  return;
}

// ClearMemberVariables @ 14b8279c0

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
UDS_NPCClientControlAbility_Hide::ClearMemberVariables(UDS_NPCClientControlAbility_Hide *this)

{
  FTimerManager *pFVar1;
  FTimerData *pFVar2;
  
  if ((this->StartDelayTimer).Handle != 0) {
    pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(pFVar1,&this->StartDelayTimer);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar1,(FTimerHandle)(this->StartDelayTimer).Handle);
    }
    (this->StartDelayTimer).Handle = 0;
  }
  if ((this->StartDisappearProcessTimer).Handle != 0) {
    pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(pFVar1,&this->StartDisappearProcessTimer);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar1,(FTimerHandle)(this->StartDisappearProcessTimer).Handle);
    }
    (this->StartDisappearProcessTimer).Handle = 0;
  }
  this->bStartedDisappearProcess = false;
  this->ElapsedTime = 0.0;
  return;
}

// ClearStartDelayTimer @ 14b827b40

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
UDS_NPCClientControlAbility_Hide::ClearStartDelayTimer(UDS_NPCClientControlAbility_Hide *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->StartDelayTimer;
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

// ClearStartDisappearProcessTimer @ 14b827c00

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
UDS_NPCClientControlAbility_Hide::ClearStartDisappearProcessTimer
          (UDS_NPCClientControlAbility_Hide *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->StartDisappearProcessTimer;
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

// DoStart @ 14b82cf40

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

void __thiscall UDS_NPCClientControlAbility_Hide::DoStart(UDS_NPCClientControlAbility_Hide *this)

{
  float fVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  FTimerManager *this_00;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_168 [16];
  code *local_158;
  undefined8 uStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar2 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NPCClientControlAbility_Hide::DoStart",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x10e,L"NPCClientControlAbilityData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_168[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_168);
  }
  else {
    local_158 = (code *)CONCAT44(local_158._4_4_,0x3f800000);
    FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,(float *)&local_158);
    pUVar4 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
    bVar2 = DS_AbilityUtil_NPCClientControl::NPCClientControlPreparationAction
                      ((ulong64 *)&this->_padding_,(TVector<double> *)&pUVar4[2].field_0x8);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
      local_158 = (code *)0x0;
      pUVar5 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
      bVar2 = UDS_MoveToPointAbility::TryActivate_Entity
                        ((ulong64 *)&this->_padding_,(double *)&local_158,
                         (TVector<double> *)&pUVar5[2].field_0x20,(float *)&pUVar4[3].field_0x14);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
        fVar1 = *(float *)&pUVar4[3].field_0x1c;
        if ((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
          this->bStartedDisappearProcess = true;
          return;
        }
        this_00 = FDS_TimerManager::Get((UObject *)0x0);
        uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
        local_158 = StartDisappearProcess;
        FTimerManager::SetTimer<UDS_NPCClientControlAbility_Hide>
                  (this_00,&this->StartDisappearProcessTimer,this,(pmf_d3523019 *)&local_158,fVar1,
                   false,__real_bf800000);
        return;
      }
    }
    local_168[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_168);
  }
  return;
}

// InitNPCClientControlAbilityData_Hide @ 14b8340d0

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
UDS_NPCClientControlAbility_Hide::InitNPCClientControlAbilityData_Hide
          (ulong64 *param_1,
          TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  double dVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  FDS_EntityBase *pFVar8;
  UObject *pUVar9;
  TVector<double> *pTVar10;
  FDS_NpcBaseTableRow *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  double dVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStackY_2a8 [32];
  uint uVar31;
  wchar_t *pwVar32;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  TVector<double> local_208;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1e8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  bVar6 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>::UEOpEquals
                    (param_2,(void *)0x0);
  if (bVar6) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_1e8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1e8,"UDS_NPCClientControlAbility_Hide::InitNPCClientControlAbilityData_Hide",
               0x46,Yes);
    pwVar32 = L"OutNPCClientControlAbilityData is nullptr.";
    uVar31 = 0xac;
LAB_14b834555:
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_1e8.Ptr,uVar31,pwVar32);
  }
  else {
    pFVar8 = FDS_EntityBase::GetEntityBase(param_1);
    if (pFVar8 == (FDS_EntityBase *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_1e8._padding_ = (longlong)pFVar8;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1e8,"UDS_NPCClientControlAbility_Hide::InitNPCClientControlAbilityData_Hide"
                 ,0x46,Yes);
      pwVar32 = L"sourceEntity is nullptr. (%llu)";
      uVar31 = 0xb3;
    }
    else {
      pUVar9 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      uVar15 = *(undefined4 *)&pUVar9[2].field_0x8;
      uVar20 = *(undefined4 *)&pUVar9[2].field_0xc;
      uVar27 = *(undefined4 *)&pUVar9[2].field_0x10;
      uVar28 = *(undefined4 *)&pUVar9[2].field_0x14;
      dVar21 = *(double *)&pUVar9[2].field_0x18;
      uVar24 = (uint)((ulonglong)dVar21 >> 0x20);
      pUVar9 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      dVar5 = __real_3f1a36e2e0000000;
      uVar19 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar1 = *(double *)&pUVar9[3].field_0x8;
      uVar29 = SUB84(dVar1,0);
      uVar30 = (uint)((ulonglong)dVar1 >> 0x20);
      uVar31 = *(uint *)&pUVar9[2].field_0x20;
      uVar23 = *(uint *)&pUVar9[2].field_0x24;
      uVar25 = *(uint *)(pUVar9 + 3);
      uVar26 = *(uint *)&pUVar9[3].field_0x4;
      if ((((double)CONCAT44(uVar20 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             uVar15 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
            __real_3f1a36e2e0000000 ||
            (double)CONCAT44(uVar20 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             uVar15 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
            __real_3f1a36e2e0000000) &&
          ((double)CONCAT44(uVar28 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            uVar27 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
           __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar28 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            uVar27 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
           __real_3f1a36e2e0000000)) &&
         (uVar12 = SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar17 = uVar24 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar17,uVar12) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar17,uVar12) == __real_3f1a36e2e0000000)) {
        return false;
      }
      if ((((double)CONCAT44(uVar23 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             uVar31 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
            __real_3f1a36e2e0000000 ||
            (double)CONCAT44(uVar23 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             uVar31 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
            __real_3f1a36e2e0000000) &&
          ((double)CONCAT44(uVar26 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            uVar25 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
           __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar26 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            uVar25 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
           __real_3f1a36e2e0000000)) &&
         ((double)CONCAT44(uVar30 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar29 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
          __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar30 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar29 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
          __real_3f1a36e2e0000000)) {
        return false;
      }
      local_248._0_4_ = uVar15;
      local_248._4_4_ = uVar20;
      local_248._8_4_ = uVar27;
      local_248._12_4_ = uVar28;
      local_248._16_8_ = dVar21;
      local_228 = uVar15;
      uStack_224 = uVar20;
      uStack_220 = uVar27;
      uStack_21c = uVar28;
      local_218 = uVar31;
      uStack_214 = uVar23;
      uStack_210 = uVar25;
      uStack_20c = uVar26;
      local_208.field0_0x0._16_8_ = dVar21;
      DS_Util::GetNPCFloorLocationByLocation
                ((TVector<double> *)&local_268._s_0,(TVector<double> *)&local_248._s_0,
                 __real_43160000,false);
      uVar12 = (uint)((ulonglong)local_268._16_8_ >> 0x20);
      if (((dVar5 <= (double)CONCAT44(local_268._4_4_ & uVar19,local_268._0_4_ & uVar14) &&
            (double)CONCAT44(local_268._4_4_ & uVar19,local_268._0_4_ & uVar14) != dVar5) ||
          (dVar5 <= (double)CONCAT44(local_268._12_4_ & uVar19,local_268._8_4_ & uVar14) &&
           (double)CONCAT44(local_268._12_4_ & uVar19,local_268._8_4_ & uVar14) != dVar5)) ||
         (uVar13 = SUB84(local_268._s_0.Z,0) & uVar14, uVar18 = uVar12 & uVar19,
         uVar17 = SUB84(dVar21,0),
         dVar5 <= (double)CONCAT44(uVar18,uVar13) && (double)CONCAT44(uVar18,uVar13) != dVar5)) {
        local_208.field0_0x0._16_8_ = local_268._s_0.Z;
        local_228 = local_268._0_4_;
        uStack_224 = local_268._4_4_;
        uStack_220 = local_268._8_4_;
        uStack_21c = local_268._12_4_;
        uVar15 = local_268._0_4_;
        uVar20 = local_268._4_4_;
        uVar17 = SUB84(local_268._s_0.Z,0);
        uVar24 = uVar12;
        uVar27 = local_268._8_4_;
        uVar28 = local_268._12_4_;
      }
      local_248._0_4_ = uVar31;
      local_248._4_4_ = uVar23;
      local_248._8_4_ = uVar25;
      local_248._12_4_ = uVar26;
      local_248._16_8_ = dVar1;
      pTVar10 = DS_Util::GetNPCFloorLocationByLocation
                          (&local_208,(TVector<double> *)&local_248._s_0,__real_43160000,false);
      local_268._0_4_ = *(undefined4 *)&pTVar10->field0_0x0;
      local_268._4_4_ = *(uint *)((longlong)&pTVar10->field0_0x0 + 4);
      local_268._8_4_ = *(uint *)((longlong)&pTVar10->field0_0x0 + 8);
      local_268._12_4_ = *(uint *)((longlong)&pTVar10->field0_0x0 + 0xc);
      local_268._s_0.Z = *(double *)((longlong)&pTVar10->field0_0x0 + 0x10);
      if (((dVar5 <= (double)CONCAT44(local_268._4_4_ & uVar19,local_268._0_4_ & uVar14) &&
            (double)CONCAT44(local_268._4_4_ & uVar19,local_268._0_4_ & uVar14) != dVar5) ||
          (dVar5 <= (double)CONCAT44(local_268._12_4_ & uVar19,local_268._8_4_ & uVar14) &&
           (double)CONCAT44(local_268._12_4_ & uVar19,local_268._8_4_ & uVar14) != dVar5)) ||
         (uVar14 = SUB84(local_268._s_0.Z,0) & uVar14,
         uVar19 = (uint)((ulonglong)local_268._s_0.Z >> 0x20) & uVar19,
         dVar5 <= (double)CONCAT44(uVar19,uVar14) && (double)CONCAT44(uVar19,uVar14) != dVar5)) {
        auVar3 = *(undefined1 (*) [16])&pTVar10->field0_0x0;
        dVar21 = auVar3._0_8_;
        uVar31 = auVar3._0_4_;
        uVar23 = auVar3._4_4_;
        uVar25 = auVar3._8_4_;
        uVar26 = auVar3._12_4_;
        uVar2 = *(undefined8 *)((longlong)&pTVar10->field0_0x0 + 0x10);
        uVar29 = (uint)uVar2;
        uVar30 = (uint)((ulonglong)uVar2 >> 0x20);
      }
      else {
        dVar21 = (double)CONCAT44(uStack_214,local_218);
      }
      pUVar9 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      *(undefined4 *)&pUVar9[2].field_0x8 = uVar15;
      *(undefined4 *)&pUVar9[2].field_0xc = uVar20;
      *(undefined4 *)&pUVar9[2].field_0x10 = uVar27;
      *(undefined4 *)&pUVar9[2].field_0x14 = uVar28;
      *(ulonglong *)&pUVar9[2].field_0x18 = CONCAT44(uVar24,uVar17);
      pUVar9 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      *(uint *)&pUVar9[2].field_0x20 = uVar31;
      *(uint *)&pUVar9[2].field_0x24 = uVar23;
      *(uint *)(pUVar9 + 3) = uVar25;
      *(uint *)&pUVar9[3].field_0x4 = uVar26;
      *(ulonglong *)&pUVar9[3].field_0x8 = CONCAT44(uVar30,uVar29);
      pUVar9 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      cVar4 = pUVar9[3].field_0x10;
      pFVar11 = FDS_NpcBaseTableRow::Get(pFVar8->TableID,true);
      if (pFVar11 != (FDS_NpcBaseTableRow *)0x0) {
        if (cVar4 == '\x01') {
          uVar15 = SUB84(pFVar11->WalkSpeed,0);
          uVar20 = (undefined4)((ulonglong)pFVar11->WalkSpeed >> 0x20);
        }
        else {
          if (cVar4 != '\x02') {
            pUVar7 = UDS_LogManager::GetInst();
            if (pUVar7 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar7 = UDS_LogManager::GetInst();
            local_1e8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_1e8,
                       "UDS_NPCClientControlAbility_Hide::InitNPCClientControlAbilityData_Hide",0x46
                       ,Yes);
            pwVar32 = L"moveAnimType is invalid.";
            uVar31 = 0xe8;
            goto LAB_14b834555;
          }
          uVar15 = SUB84(pFVar11->RunSpeed,0);
          uVar20 = (undefined4)((ulonglong)pFVar11->RunSpeed >> 0x20);
        }
        fVar22 = (float)(double)CONCAT44(uVar20,uVar15);
        if (__real_322bcc77 < (float)((uint)fVar22 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          pUVar9 = FWeakObjectPtr::Get(&param_2->WeakPtr);
          dVar1 = (double)CONCAT44(uVar28,uVar27) - (double)CONCAT44(uVar26,uVar25);
          dVar21 = (double)CONCAT44(uStack_224,local_228) - dVar21;
          dVar5 = (double)CONCAT44(uVar24,uVar17) - (double)CONCAT44(uVar30,uVar29);
          *(float *)&pUVar9[3].field_0x14 = fVar22;
          fVar16 = DS_CommonDataHelper::MovingDirectionDeleteTime();
          fVar16 = (float)SQRT(dVar1 * dVar1 + dVar21 * dVar21 + dVar5 * dVar5) / fVar22 - fVar16;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          pUVar9 = FWeakObjectPtr::Get(&param_2->WeakPtr);
          *(float *)&pUVar9[3].field_0x1c = fVar16;
          return true;
        }
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar7 = UDS_LogManager::GetInst();
        local_1e8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_1e8,
                   "UDS_NPCClientControlAbility_Hide::InitNPCClientControlAbilityData_Hide",0x46,Yes
                  );
        pwVar32 = L"moveSpeed is 0.";
        uVar31 = 0xf0;
        goto LAB_14b834555;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_1e8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1e8,"UDS_NPCClientControlAbility_Hide::InitNPCClientControlAbilityData_Hide"
                 ,0x46,Yes);
      pwVar32 = L"npcBaseTable is nullptr. (%d)";
      uVar31 = 0xd4;
    }
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_1e8.Ptr,uVar31,pwVar32);
  }
  if ((FDS_EntityBase *)local_1e8._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_1e8._padding_);
  }
  return false;
}

// IsActivated @ 14b835830

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

bool __cdecl UDS_NPCClientControlAbility_Hide::IsActivated(ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *this;
  FGameplayTag *pFVar4;
  undefined1 auStackY_188 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_AbilityTagType local_148 [8];
  FWeakObjectPtr local_140;
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
              (&local_138,"UDS_NPCClientControlAbility_Hide::IsActivated",0x2d,Yes);
    pwVar6 = L"sourceEntity is nullptr. (%llu)";
    uVar5 = 0x99;
  }
  else {
    (**(code **)(pFVar2->_padding_ + 0x178))(pFVar2);
    bVar1 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_140,
                       (void *)0x0);
    if (!bVar1) {
      this = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_140);
      local_148[0] = NPCClientControl_Hide;
      pFVar4 = FDS_GameplayTags::GetAbilityTag(local_148);
      bVar1 = UDS_AbilitySystemComponent::IsActiveAbility(this,pFVar4);
      return bVar1;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCClientControlAbility_Hide::IsActivated",0x2d,Yes);
    pwVar6 = L"sourceAsc is nullptr. (%llu)";
    uVar5 = 0xa0;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// OnCanActivate @ 14b838ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_NPCClientControlAbility_Hide::OnCanActivate(UDS_NPCClientControlAbility_Hide *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>::UEOpEquals
                      (&this->NPCClientControlAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Hide>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->NPCClientControlAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>::UEOpEquals
                      (&this->NPCClientControlAbilityData,(void *)0x0);
    if (!bVar1) {
      bVar1 = InitNPCClientControlAbilityData_Hide
                        ((ulong64 *)&this->_padding_,&this->NPCClientControlAbilityData);
      return bVar1;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCClientControlAbility_Hide::OnCanActivate",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x21,L"NPCClientControlAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83ef80

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
UDS_NPCClientControlAbility_Hide::OnDeactivateAbility
          (UDS_NPCClientControlAbility_Hide *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_StateTagType local_res8 [32];
  
  ClearMemberVariables(this);
  local_res8[0] = NPCClientControl_Hide;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b83efd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2c8));
    return;
  }
  return;
}

// OnPostActivateAbility @ 14b843860

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
UDS_NPCClientControlAbility_Hide::OnPostActivateAbility(UDS_NPCClientControlAbility_Hide *this)

{
  float fVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FTimerManager *this_00;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_168 [16];
  code *local_158;
  undefined8 uStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  ClearMemberVariables(this);
  bVar2 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NPCClientControlAbility_Hide::OnPostActivateAbility",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x37,L"NPCClientControlAbilityData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_168[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_168);
  }
  else {
    bVar2 = FDS_EntityBase::GetIsQuestActor((FDS_EntityBase *)this->_padding_);
    if (bVar2) {
      local_158 = (code *)0x4;
      (**(code **)(*(longlong *)this->_padding_ + 0x60))((longlong *)this->_padding_,&local_158,0);
    }
    local_168[0] = 0x88;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_168);
    pUVar4 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
    fVar1 = *(float *)&pUVar4[3].field_0x18;
    if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
      local_158 = DoStart;
      FTimerManager::SetTimer<UDS_NPCClientControlAbility_Hide>
                (this_00,&this->StartDelayTimer,this,(pmf_d3523019 *)&local_158,fVar1,false,
                 __real_bf800000);
    }
    else {
      DoStart(this);
    }
  }
  return;
}

// OnTickComponent @ 14b848cf0

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
UDS_NPCClientControlAbility_Hide::OnTickComponent
          (UDS_NPCClientControlAbility_Hide *this,float param_1)

{
  bool bVar1;
  float fVar2;
  float local_res8 [4];
  float local_res18 [4];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  if (this->bStartedDisappearProcess == true) {
    this->ElapsedTime = param_1 + this->ElapsedTime;
    if ((float)((uint)((FDS_EntityBase *)this->_padding_)->MaterialOpacity &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      bVar1 = FDS_EntityBase::GetIsQuestActor((FDS_EntityBase *)this->_padding_);
      if (bVar1) {
        local_res8[0] = 5.60519e-45;
        local_res8[1] = 0.0;
        (**(code **)(*(longlong *)this->_padding_ + 0x58))((longlong *)this->_padding_,local_res8,0)
        ;
        local_res8[0] = 1.0;
        FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,local_res8);
      }
      local_res8[0]._0_1_ = 1;
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)local_res8);
      return;
    }
    fVar2 = DS_CommonDataHelper::MovingDirectionDeleteTime();
    local_res18[0] = __real_3f800000 - this->ElapsedTime / fVar2;
    if (__real_3f800000 <= local_res18[0]) {
      local_res18[0] = __real_3f800000;
    }
    if (local_res18[0] <= 0.0) {
      local_res18[0] = 0.0;
    }
    FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,local_res18);
  }
  return;
}

// SetStartDelayTimer @ 14b850240

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
UDS_NPCClientControlAbility_Hide::SetStartDelayTimer
          (UDS_NPCClientControlAbility_Hide *this,float *param_1)

{
  FTimerManager *this_00;
  code *local_18;
  undefined8 uStack_10;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = DoStart;
  FTimerManager::SetTimer<UDS_NPCClientControlAbility_Hide>
            (this_00,&this->StartDelayTimer,this,(pmf_d3523019 *)&local_18,*param_1,false,
             __real_bf800000);
  return;
}

// SetStartDisappearProcessTimer @ 14b850340

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
UDS_NPCClientControlAbility_Hide::SetStartDisappearProcessTimer
          (UDS_NPCClientControlAbility_Hide *this,float *param_1)

{
  FTimerManager *this_00;
  code *local_18;
  undefined8 uStack_10;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = StartDisappearProcess;
  FTimerManager::SetTimer<UDS_NPCClientControlAbility_Hide>
            (this_00,&this->StartDisappearProcessTimer,this,(pmf_d3523019 *)&local_18,*param_1,false
             ,__real_bf800000);
  return;
}

// StartDisappearProcess @ 14b851530

void __thiscall
UDS_NPCClientControlAbility_Hide::StartDisappearProcess(UDS_NPCClientControlAbility_Hide *this)

{
  this->bStartedDisappearProcess = true;
  return;
}

// TryActivate @ 14b852770

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
UDS_NPCClientControlAbility_Hide::TryActivate
          (ulong64 *param_1,TVector<double> *param_2,TVector<double> *param_3,
          EDS_MoveAnimType *param_4,float *param_5)

{
  double dVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_EntityBase *this;
  UObject *pUVar4;
  undefined1 auStackY_1a8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_AbilityTagType local_168 [8];
  FWeakObjectPtr local_160;
  undefined8 local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*param_1 == 0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NPCClientControlAbility_Hide::TryActivate",0x2d,Yes);
    pwVar6 = L"Invalid parameter.";
    uVar5 = 0x78;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NPCClientControlAbility_Hide::TryActivate",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x7f,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b852913;
    }
    local_168[0] = NPCClientControl_Hide;
    UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Hide>
              ((ulong64 *)&local_160,(EDS_AbilityTagType *)param_1);
    bVar2 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr> *)
                       &local_160,(void *)0x0);
    if (!bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_160);
      dVar1 = (param_2->field0_0x0)._s_0.Y;
      *(double *)&pUVar4[2].field_0x8 = (param_2->field0_0x0)._s_0.X;
      *(double *)&pUVar4[2].field_0x10 = dVar1;
      *(double *)&pUVar4[2].field_0x18 = (param_2->field0_0x0)._s_0.Z;
      pUVar4 = FWeakObjectPtr::Get(&local_160);
      dVar1 = (param_3->field0_0x0)._s_0.Y;
      *(double *)&pUVar4[2].field_0x20 = (param_3->field0_0x0)._s_0.X;
      *(double *)(pUVar4 + 3) = dVar1;
      *(double *)&pUVar4[3].field_0x8 = (param_3->field0_0x0)._s_0.Z;
      pUVar4 = FWeakObjectPtr::Get(&local_160);
      pUVar4[3].field_0x10 = *param_4;
      pUVar4 = FWeakObjectPtr::Get(&local_160);
      local_158[0] = 0;
      local_168[0] = NPCClientControl_Hide;
      *(float *)&pUVar4[3].field_0x18 = *param_5;
      bVar2 = FDS_EntityBase::TryActivateAbility
                        (this,local_168,(TObjectPtr<UWN_AbilityContext>)local_158);
      return bVar2;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NPCClientControlAbility_Hide::TryActivate",0x2d,Yes);
    pwVar6 = L"abilityData is nullptr.";
    uVar5 = 0x86;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar5,pwVar6);
LAB_14b852913:
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// UpdateDisappearProcess @ 14b856c70

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
UDS_NPCClientControlAbility_Hide::UpdateDisappearProcess(UDS_NPCClientControlAbility_Hide *this)

{
  bool bVar1;
  float fVar2;
  float local_res8 [8];
  
  if ((float)((uint)((FDS_EntityBase *)this->_padding_)->MaterialOpacity &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    bVar1 = FDS_EntityBase::GetIsQuestActor((FDS_EntityBase *)this->_padding_);
    if (bVar1) {
      local_res8[0] = 5.60519e-45;
      local_res8[1] = 0.0;
      (**(code **)(*(longlong *)this->_padding_ + 0x58))((longlong *)this->_padding_,local_res8,0);
      local_res8[0] = 1.0;
      FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,local_res8);
    }
    local_res8[0]._0_1_ = 1;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)local_res8);
    return;
  }
  fVar2 = DS_CommonDataHelper::MovingDirectionDeleteTime();
  local_res8[2] = __real_3f800000 - this->ElapsedTime / fVar2;
  if (__real_3f800000 <= local_res8[2]) {
    local_res8[2] = __real_3f800000;
  }
  if (local_res8[2] <= 0.0) {
    local_res8[2] = 0.0;
  }
  FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,local_res8 + 2);
  return;
}

