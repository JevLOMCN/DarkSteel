// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b5354e0

UClass * __cdecl UDS_NPCClientControlAbility_Show::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Show.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbility_Show",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Show.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbility_Show,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbility_Show>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbility_Show>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Show.InnerSingleton;
}

// UDS_NPCClientControlAbility_Show @ 14b538910

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

UDS_NPCClientControlAbility_Show * __thiscall
UDS_NPCClientControlAbility_Show::UDS_NPCClientControlAbility_Show
          (UDS_NPCClientControlAbility_Show *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NPCClientControlAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCClientControlAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->StartDelayTimer).Handle = 0;
  return this;
}

// UDS_NPCClientControlAbility_Show @ 14b538970

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

UDS_NPCClientControlAbility_Show * __thiscall
UDS_NPCClientControlAbility_Show::UDS_NPCClientControlAbility_Show
          (UDS_NPCClientControlAbility_Show *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NPCClientControlAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCClientControlAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->StartDelayTimer).Handle = 0;
  return this;
}

// ~UDS_NPCClientControlAbility_Show @ 14b538fe0

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
UDS_NPCClientControlAbility_Show::~UDS_NPCClientControlAbility_Show
          (UDS_NPCClientControlAbility_Show *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b53a690

UClass * __cdecl UDS_NPCClientControlAbility_Show::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Show.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbility_Show",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Show.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbility_Show,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbility_Show>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbility_Show>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Show.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCClientControlAbility_Show @ 14b53a9c0

void __cdecl
UDS_NPCClientControlAbility_Show::StaticRegisterNativesUDS_NPCClientControlAbility_Show(void)

{
  return;
}

// ClearMemberVariables @ 14b827a80

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
UDS_NPCClientControlAbility_Show::ClearMemberVariables(UDS_NPCClientControlAbility_Show *this)

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

// ClearStartDelayTimer @ 14b827ba0

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
UDS_NPCClientControlAbility_Show::ClearStartDelayTimer(UDS_NPCClientControlAbility_Show *this)

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

// DoStart @ 14b82d180

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

void __thiscall UDS_NPCClientControlAbility_Show::DoStart(UDS_NPCClientControlAbility_Show *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [8];
  double local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCClientControlAbility_Show::DoStart",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x11c,L"NPCClientControlAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  }
  else {
    local_140 = (double)CONCAT44(local_140._4_4_,0x3f800000);
    FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,(float *)&local_140);
    bVar1 = FDS_EntityBase::GetIsQuestActor((FDS_EntityBase *)this->_padding_);
    if (bVar1) {
      local_140 = 1.97626258336499e-323;
      (**(code **)(*(longlong *)this->_padding_ + 0x60))((longlong *)this->_padding_,&local_140,0);
    }
    pUVar3 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
    bVar1 = DS_AbilityUtil_NPCClientControl::NPCClientControlPreparationAction
                      ((ulong64 *)&this->_padding_,(TVector<double> *)&pUVar3[2].field_0x8);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
      local_140 = 0.0;
      pUVar4 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
      bVar1 = UDS_MoveToPointAbility::TryActivate_Entity
                        ((ulong64 *)&this->_padding_,&local_140,
                         (TVector<double> *)&pUVar4[2].field_0x20,(float *)&pUVar3[3].field_0x14);
      if (bVar1) {
        return;
      }
    }
    local_148[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  }
  return;
}

// InitNPCClientControlAbilityData_Show @ 14b834650

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
UDS_NPCClientControlAbility_Show::InitNPCClientControlAbilityData_Show
          (ulong64 *param_1,
          TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  bool bVar7;
  UDS_LogManager *pUVar8;
  FDS_EntityBase *pFVar9;
  UObject *pUVar10;
  TVector<double> *pTVar11;
  FDS_NpcBaseTableRow *pFVar12;
  uint uVar14;
  double dVar13;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStackY_248 [32];
  uint uVar26;
  wchar_t *pwVar27;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double> local_1c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar7 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>::UEOpEquals
                    (param_2,(void *)0x0);
  if (bVar7) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_1a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1a8,"UDS_NPCClientControlAbility_Show::InitNPCClientControlAbilityData_Show",
               0x46,Yes);
    pwVar27 = L"OutNPCClientControlAbilityData is nullptr.";
    uVar26 = 0xcc;
LAB_14b834a01:
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_1a8.Ptr,uVar26,pwVar27);
  }
  else {
    pFVar9 = FDS_EntityBase::GetEntityBase(param_1);
    if (pFVar9 == (FDS_EntityBase *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar8 = UDS_LogManager::GetInst();
      local_1a8._padding_ = (longlong)pFVar9;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_NPCClientControlAbility_Show::InitNPCClientControlAbilityData_Show"
                 ,0x46,Yes);
      pwVar27 = L"sourceEntity is nullptr. (%llu)";
      uVar26 = 0xd3;
    }
    else {
      pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      dVar13 = *(double *)&pUVar10[2].field_0x18;
      uVar18 = *(undefined4 *)&pUVar10[2].field_0x8;
      uVar19 = *(undefined4 *)&pUVar10[2].field_0xc;
      uVar20 = *(undefined4 *)&pUVar10[2].field_0x10;
      uVar21 = *(undefined4 *)&pUVar10[2].field_0x14;
      local_1e8._16_8_ = dVar13;
      pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      dVar6 = __real_3f1a36e2e0000000;
      uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar1 = *(double *)&pUVar10[3].field_0x8;
      uVar24 = SUB84(dVar1,0);
      uVar25 = (uint)((ulonglong)dVar1 >> 0x20);
      uVar26 = *(uint *)&pUVar10[2].field_0x20;
      uVar15 = *(uint *)&pUVar10[2].field_0x24;
      uVar16 = *(uint *)(pUVar10 + 3);
      uVar17 = *(uint *)&pUVar10[3].field_0x4;
      if ((((double)CONCAT44(uVar19 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             uVar18 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000) &&
          ((double)CONCAT44(uVar21 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            uVar20 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000)) &&
         ((double)CONCAT44((uint)((ulonglong)local_1e8._16_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_1e8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
          <= __real_3f1a36e2e0000000)) {
        return false;
      }
      if ((((double)CONCAT44(uVar15 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             uVar26 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000) &&
          ((double)CONCAT44(uVar17 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            uVar16 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000)) &&
         ((double)CONCAT44(uVar25 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar24 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000)) {
        return false;
      }
      local_1e8._0_4_ = uVar18;
      local_1e8._4_4_ = uVar19;
      local_1e8._8_4_ = uVar20;
      local_1e8._12_4_ = uVar21;
      local_1e8._16_8_ = dVar13;
      local_1c8.field0_0x0._16_8_ = dVar1;
      DS_Util::GetNPCFloorLocationByLocation
                ((TVector<double> *)&local_208._s_0,(TVector<double> *)&local_1e8._s_0,
                 __real_43160000,false);
      uVar14 = (uint)((ulonglong)local_208._16_8_ >> 0x20);
      if (((dVar6 < (double)CONCAT44(local_208._4_4_ & uVar5,local_208._0_4_ & uVar4)) ||
          (dVar6 < (double)CONCAT44(local_208._12_4_ & uVar5,local_208._8_4_ & uVar4))) ||
         (uVar22 = SUB84(dVar13,0), uVar23 = (uint)((ulonglong)dVar13 >> 0x20),
         dVar6 < (double)CONCAT44(uVar14 & uVar5,SUB84(local_208._s_0.Z,0) & uVar4))) {
        uVar18 = local_208._0_4_;
        uVar19 = local_208._4_4_;
        uVar20 = local_208._8_4_;
        uVar21 = local_208._12_4_;
        uVar22 = SUB84(local_208._s_0.Z,0);
        uVar23 = uVar14;
      }
      local_1e8._0_4_ = uVar26;
      local_1e8._4_4_ = uVar15;
      local_1e8._8_4_ = uVar16;
      local_1e8._12_4_ = uVar17;
      local_1e8._16_8_ = dVar1;
      pTVar11 = DS_Util::GetNPCFloorLocationByLocation
                          (&local_1c8,(TVector<double> *)&local_1e8._s_0,__real_43160000,false);
      local_208._0_4_ = *(undefined4 *)&pTVar11->field0_0x0;
      local_208._4_4_ = *(uint *)((longlong)&pTVar11->field0_0x0 + 4);
      local_208._8_4_ = *(uint *)((longlong)&pTVar11->field0_0x0 + 8);
      local_208._12_4_ = *(uint *)((longlong)&pTVar11->field0_0x0 + 0xc);
      local_208._s_0.Z = *(double *)((longlong)&pTVar11->field0_0x0 + 0x10);
      if (((dVar6 < (double)CONCAT44(local_208._4_4_ & uVar5,local_208._0_4_ & uVar4)) ||
          (dVar6 <= (double)CONCAT44(local_208._12_4_ & uVar5,local_208._8_4_ & uVar4) &&
           (double)CONCAT44(local_208._12_4_ & uVar5,local_208._8_4_ & uVar4) != dVar6)) ||
         (dVar6 < (double)CONCAT44((uint)((ulonglong)local_208._s_0.Z >> 0x20) & uVar5,
                                   SUB84(local_208._s_0.Z,0) & uVar4))) {
        uVar26 = *(uint *)&pTVar11->field0_0x0;
        uVar15 = *(uint *)((longlong)&pTVar11->field0_0x0 + 4);
        uVar16 = *(uint *)((longlong)&pTVar11->field0_0x0 + 8);
        uVar17 = *(uint *)((longlong)&pTVar11->field0_0x0 + 0xc);
        uVar2 = *(undefined8 *)((longlong)&pTVar11->field0_0x0 + 0x10);
        uVar24 = (uint)uVar2;
        uVar25 = (uint)((ulonglong)uVar2 >> 0x20);
      }
      pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      *(undefined4 *)&pUVar10[2].field_0x8 = uVar18;
      *(undefined4 *)&pUVar10[2].field_0xc = uVar19;
      *(undefined4 *)&pUVar10[2].field_0x10 = uVar20;
      *(undefined4 *)&pUVar10[2].field_0x14 = uVar21;
      *(ulonglong *)&pUVar10[2].field_0x18 = CONCAT44(uVar23,uVar22);
      pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      *(uint *)&pUVar10[2].field_0x20 = uVar26;
      *(uint *)&pUVar10[2].field_0x24 = uVar15;
      *(uint *)(pUVar10 + 3) = uVar16;
      *(uint *)&pUVar10[3].field_0x4 = uVar17;
      *(ulonglong *)&pUVar10[3].field_0x8 = CONCAT44(uVar25,uVar24);
      pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      cVar3 = pUVar10[3].field_0x10;
      pFVar12 = FDS_NpcBaseTableRow::Get(pFVar9->TableID,true);
      if (pFVar12 != (FDS_NpcBaseTableRow *)0x0) {
        if (cVar3 == '\x01') {
          dVar13 = pFVar12->WalkSpeed;
LAB_14b834a3c:
          pUVar10 = FWeakObjectPtr::Get(&param_2->WeakPtr);
          *(float *)&pUVar10[3].field_0x14 = (float)dVar13;
          return true;
        }
        if (cVar3 == '\x02') {
          dVar13 = pFVar12->RunSpeed;
          goto LAB_14b834a3c;
        }
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar8 = UDS_LogManager::GetInst();
        local_1a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_1a8,
                   "UDS_NPCClientControlAbility_Show::InitNPCClientControlAbilityData_Show",0x46,Yes
                  );
        pwVar27 = L"moveAnimType is invalid.";
        uVar26 = 0x108;
        goto LAB_14b834a01;
      }
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar8 = UDS_LogManager::GetInst();
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_NPCClientControlAbility_Show::InitNPCClientControlAbilityData_Show"
                 ,0x46,Yes);
      pwVar27 = L"npcBaseTable is nullptr. (%d)";
      uVar26 = 0xf4;
    }
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_1a8.Ptr,uVar26,pwVar27);
  }
  if ((FDS_EntityBase *)local_1a8._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
  return false;
}

// InitOtherAbilityEventSubscriptions @ 14b834ae0

void __thiscall
UDS_NPCClientControlAbility_Show::InitOtherAbilityEventSubscriptions
          (UDS_NPCClientControlAbility_Show *this)

{
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = MoveToPoint;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)&this->_padding_,pFVar1);
  return;
}

// IsActivated @ 14b8359c0

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

bool __cdecl UDS_NPCClientControlAbility_Show::IsActivated(ulong64 *param_1)

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
              (&local_138,"UDS_NPCClientControlAbility_Show::IsActivated",0x2d,Yes);
    pwVar6 = L"sourceEntity is nullptr. (%llu)";
    uVar5 = 0xb9;
  }
  else {
    (**(code **)(pFVar2->_padding_ + 0x178))(pFVar2);
    bVar1 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_140,
                       (void *)0x0);
    if (!bVar1) {
      this = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_140);
      local_148[0] = NPCClientControl_Show;
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
              (&local_138,"UDS_NPCClientControlAbility_Show::IsActivated",0x2d,Yes);
    pwVar6 = L"sourceAsc is nullptr. (%llu)";
    uVar5 = 0xc0;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// OnCanActivate @ 14b839000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_NPCClientControlAbility_Show::OnCanActivate(UDS_NPCClientControlAbility_Show *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>::UEOpEquals
                      (&this->NPCClientControlAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Show>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->NPCClientControlAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>::UEOpEquals
                      (&this->NPCClientControlAbilityData,(void *)0x0);
    if (!bVar1) {
      bVar1 = InitNPCClientControlAbilityData_Show
                        ((ulong64 *)&this->_padding_,&this->NPCClientControlAbilityData);
      return bVar1;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCClientControlAbility_Show::OnCanActivate",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x20,L"NPCClientControlAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83efe0

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
UDS_NPCClientControlAbility_Show::OnDeactivateAbility
          (UDS_NPCClientControlAbility_Show *this,bool *param_1)

{
  bool bVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  UObject *pUVar3;
  EDS_StateTagType local_res8 [8];
  
  if ((this->StartDelayTimer).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,&this->StartDelayTimer);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->StartDelayTimer).Handle);
    }
    (this->StartDelayTimer).Handle = 0;
  }
  local_res8[0] = NPCClientControl_Show;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b83f081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3,*(code **)(*(longlong *)pUVar3 + 0x2c8));
    return;
  }
  return;
}

// OnDeactivatedOtherAbility @ 14b8402d0

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
UDS_NPCClientControlAbility_Show::OnDeactivatedOtherAbility
          (UDS_NPCClientControlAbility_Show *this,FGameplayTag *param_1,bool *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FName *pFVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCClientControlAbility_Show::OnDeactivatedOtherAbility",0x3b,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x6e,L"NPCClientControlAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148[0] = Success;
    pFVar3 = &FDS_GameplayTags::GetAbilityTag(local_148)->TagName;
    if (*pFVar3 == (FName)0x0) {
      return;
    }
    if (param_1->TagName != *pFVar3) {
      return;
    }
    if (*param_2 == true) {
      pUVar4 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
      pUVar5 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
      bVar1 = DS_AbilityUtil_NPCClientControl::NPCClientControlFinalizationAction
                        ((ulong64 *)&this->_padding_,(TVector<double> *)&pUVar5[2].field_0x20,
                         (float *)&pUVar4[3].field_0x18);
      if (bVar1) {
        local_148[0] = Success;
        goto LAB_14b8403a1;
      }
    }
  }
  local_148[0] = Cancel;
LAB_14b8403a1:
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  return;
}

// OnPostActivateAbility @ 14b843a30

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
UDS_NPCClientControlAbility_Show::OnPostActivateAbility(UDS_NPCClientControlAbility_Show *this)

{
  float fVar1;
  bool bVar2;
  FTimerManager *pFVar3;
  FTimerData *pFVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_168 [16];
  code *local_158;
  undefined8 uStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((this->StartDelayTimer).Handle != 0) {
    pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar4 = FTimerManager::FindTimer(pFVar3,&this->StartDelayTimer);
    if (pFVar4 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar3,(FTimerHandle)(this->StartDelayTimer).Handle);
    }
    (this->StartDelayTimer).Handle = 0;
  }
  bVar2 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NPCClientControlAbility_Show::OnPostActivateAbility",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x36,L"NPCClientControlAbilityData is nullptr.");
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
      (**(code **)(*(longlong *)this->_padding_ + 0x58))((longlong *)this->_padding_,&local_158,0);
    }
    local_168[0] = 0x87;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_168);
    pUVar6 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
    fVar1 = *(float *)&pUVar6[3].field_0x1c;
    if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
      uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
      local_158 = DoStart;
      FTimerManager::SetTimer<UDS_NPCClientControlAbility_Show>
                (pFVar3,&this->StartDelayTimer,this,(pmf_5448f9de *)&local_158,fVar1,false,
                 __real_bf800000);
    }
    else {
      DoStart(this);
    }
  }
  return;
}

// SetStartDelayTimer @ 14b8502c0

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
UDS_NPCClientControlAbility_Show::SetStartDelayTimer
          (UDS_NPCClientControlAbility_Show *this,float *param_1)

{
  FTimerManager *this_00;
  code *local_18;
  undefined8 uStack_10;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = DoStart;
  FTimerManager::SetTimer<UDS_NPCClientControlAbility_Show>
            (this_00,&this->StartDelayTimer,this,(pmf_5448f9de *)&local_18,*param_1,false,
             __real_bf800000);
  return;
}

// TryActivate @ 14b8529f0

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
UDS_NPCClientControlAbility_Show::TryActivate
          (ulong64 *param_1,TVector<double> *param_2,TVector<double> *param_3,
          EDS_MoveAnimType *param_4,float *param_5,float *param_6)

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
              (&local_148,"UDS_NPCClientControlAbility_Show::TryActivate",0x2d,Yes);
    pwVar6 = L"Invalid parameter.";
    uVar5 = 0x97;
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
                (&local_148,"UDS_NPCClientControlAbility_Show::TryActivate",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x9e,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b852b93;
    }
    local_168[0] = NPCClientControl_Show;
    UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Show>
              ((ulong64 *)&local_160,(EDS_AbilityTagType *)param_1);
    bVar2 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr> *)
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
      *(float *)&pUVar4[3].field_0x18 = *param_5;
      pUVar4 = FWeakObjectPtr::Get(&local_160);
      local_158[0] = 0;
      local_168[0] = NPCClientControl_Show;
      *(float *)&pUVar4[3].field_0x1c = *param_6;
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
              (&local_148,"UDS_NPCClientControlAbility_Show::TryActivate",0x2d,Yes);
    pwVar6 = L"abilityData is nullptr.";
    uVar5 = 0xa5;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar5,pwVar6);
LAB_14b852b93:
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

