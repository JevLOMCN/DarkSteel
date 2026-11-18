// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b4f4440

UClass * __cdecl UDS_MountAbility_DisMount::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_DisMount.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_DisMount",
               &Z_Registration_Info_UClass_UDS_MountAbility_DisMount.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_DisMount,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_MountAbility_DisMount>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_DisMount>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_DisMount.InnerSingleton;
}

// UDS_MountAbility_DisMount @ 14b4f7c00

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

UDS_MountAbility_DisMount * __thiscall
UDS_MountAbility_DisMount::UDS_MountAbility_DisMount
          (UDS_MountAbility_DisMount *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DisMountActionTimerHandle).Handle = 0;
  this->DisMountActionTime = 0.0;
  this->DisMountEndTime = 0.0;
  this->DisMountingBackDistance = 0.0;
  this->DisMountingUpDistance = 0.0;
  this->IsDespawn = false;
  return this;
}

// UDS_MountAbility_DisMount @ 14b4f7c70

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

UDS_MountAbility_DisMount * __thiscall
UDS_MountAbility_DisMount::UDS_MountAbility_DisMount
          (UDS_MountAbility_DisMount *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DisMountActionTimerHandle).Handle = 0;
  this->DisMountActionTime = 0.0;
  this->DisMountEndTime = 0.0;
  this->DisMountingBackDistance = 0.0;
  this->DisMountingUpDistance = 0.0;
  this->IsDespawn = false;
  return this;
}

// ~UDS_MountAbility_DisMount @ 14b4f8630

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
UDS_MountAbility_DisMount::~UDS_MountAbility_DisMount(UDS_MountAbility_DisMount *this)

{
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f9fb0

UClass * __cdecl UDS_MountAbility_DisMount::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_DisMount.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_DisMount",
               &Z_Registration_Info_UClass_UDS_MountAbility_DisMount.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_DisMount,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_MountAbility_DisMount>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_DisMount>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_DisMount.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4fa6a0

bool __thiscall
UDS_MountAbility_DisMount::ShouldNotifyChangedCharState(UDS_MountAbility_DisMount *this)

{
  return true;
}

// ShouldTickComponent @ 14b4fa710

bool __thiscall UDS_MountAbility_DisMount::ShouldTickComponent(UDS_MountAbility_DisMount *this)

{
  return true;
}

// StaticRegisterNativesUDS_MountAbility_DisMount @ 14b4fa880

void __cdecl UDS_MountAbility_DisMount::StaticRegisterNativesUDS_MountAbility_DisMount(void)

{
  return;
}

// EndCoolDown @ 14b82d370

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

void __thiscall UDS_MountAbility_DisMount::EndCoolDown(UDS_MountAbility_DisMount *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnAbilityRetryActivate @ 14b837950

void __thiscall UDS_MountAbility_DisMount::OnAbilityRetryActivate(UDS_MountAbility_DisMount *this)

{
  return;
}

// OnCanActivate @ 14b838470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_MountAbility_DisMount::OnCanActivate(UDS_MountAbility_DisMount *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> TVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_150;
  UObject *local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar2 = UDS_MountBaseAbility::OnCanActivate((UDS_MountBaseAbility *)this);
  if (!bVar2) {
    return false;
  }
  pUVar3 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  local_140.ObjectIndex = 0;
  local_140.ObjectSerialNumber = 0;
  local_148 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_148);
  pUVar3 = FWeakObjectPtr::Get(&local_140);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_MountAbilityContext_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b838543;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b838543:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_150.ObjectIndex = 0;
  local_150.ObjectSerialNumber = 0;
  local_148 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_148);
  bVar2 = TWeakObjectPtr<UDS_MountAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityContext,FWeakObjectPtr> *)&local_150,
                     (void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_150);
    this->IsDespawn = *(bool *)(pUVar3 + 1);
    TVar5 = UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
                      ((ulong64 *)&local_148,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
    (this->AirWalkAbilityData).WeakPtr = *TVar5.WeakPtr;
    bVar2 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->AirWalkAbilityData,(void *)0x0);
    if (!bVar2) {
      return true;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MountAbility_DisMount::OnCanActivate",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_138.Ptr,0x46,L"AirWalkAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b83bd20

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
UDS_MountAbility_DisMount::OnChangedCharState
          (UDS_MountAbility_DisMount *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  FTimerManager *this_00;
  FWeakObjectPtr local_res10;
  EDS_CharState local_res18 [2];
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
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = AniCut;
    bVar1 = UDS_CharStateData::HasCharState(pUVar2,local_res18);
    if (!bVar1) {
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_res18[0] = Dead|PlayerSkill|Abnormal_NonControl|Abnormal|Skill;
      bVar1 = UDS_CharStateData::HasCharState(pUVar2,local_res18);
      if (bVar1) {
        if ((this->DisMountActionTimerHandle).Handle != 0) {
          this_00 = FDS_TimerManager::Get((UObject *)0x0);
          FTimerManager::ClearTimer(this_00,&this->DisMountActionTimerHandle);
          (this->DisMountActionTimerHandle).Handle = 0;
        }
        local_res18[0] = CONCAT71(local_res18[0]._1_7_,1);
        UDS_GameplayAbility::DeactivateAbility
                  ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)local_res18);
      }
    }
  }
  return;
}

// OnDeactivateAbility @ 14b83e560

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
UDS_MountAbility_DisMount::OnDeactivateAbility(UDS_MountAbility_DisMount *this,bool *param_1)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  FGameplayTag *pFVar2;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  if ((this->DisMountActionTimerHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = FTimerManager::FindTimer(this_00,&this->DisMountActionTimerHandle);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->DisMountActionTimerHandle).Handle);
    }
    (this->DisMountActionTimerHandle).Handle = 0;
  }
  local_res8[0] = Success;
  local_res18.ObjectIndex._0_1_ = 0x4a;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res18,local_res8);
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  local_res8[0] = 0x7a;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  return;
}

// OnPostActivateAbility @ 14b8421b0

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

void __thiscall UDS_MountAbility_DisMount::OnPostActivateAbility(UDS_MountAbility_DisMount *this)

{
  longlong *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UDS_CharStateData *this_01;
  UDS_NPCMountAbilityContext *pUVar7;
  FName *pFVar8;
  FGameplayTag *pFVar9;
  UDS_MountAbilityData *pUVar10;
  longlong lVar11;
  UDS_MountDataSet *this_02;
  FDS_MountBaseTableRow *pFVar12;
  UDS_GameInstance *pUVar13;
  FTimerManager *pFVar14;
  FTimerData *pFVar15;
  float fVar16;
  undefined1 auStackY_218 [32];
  EDS_AbilityDeactivateType local_1d8;
  EDS_AbilityTagType local_1d7;
  EDS_StateTagType local_1d6 [3];
  EDS_AbilityDeactivateType local_1d3;
  EDS_StateTagType local_1d2 [3];
  EDS_AbilityInputPolicy local_1cf [7];
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr local_1c0;
  FWeakObjectPtr local_1b8;
  FWeakObjectPtr local_1b0;
  FWeakObjectPtr local_1a8 [2];
  UDS_NPCMountAbilityContext *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  EDS_CharState local_188;
  UDS_NPCMountAbilityContext *local_180;
  code *local_178;
  longlong lStack_170;
  undefined8 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_00 = &this->_padding_;
  bVar3 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_MountAbility_DisMount::OnPostActivateAbility",0x30,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x53,L"MountAbilityData is nullptr.");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if (*(char *)(pUVar6 + 3) == '\0') {
    local_1d8 = Success;
    local_1d7 = Mount_DisMount;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&local_1d7,&local_1d8);
    return;
  }
  bVar3 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->AirWalkAbilityData,(void *)0x0);
  if (bVar3) {
    return;
  }
  if ((char)this->_padding_ == '\x02') {
    pUVar6 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
    bVar3 = pUVar6[4].field_0x20 == '\x02';
  }
  else {
    UDS_CharStateData::GetData((ulong64)&local_1c0);
    bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_1c0,(void *)0x0);
    if (bVar3) goto LAB_14b84245c;
    this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_1c0);
    local_188 = AirWalk;
    bVar3 = UDS_CharStateData::HasCharState(this_01,&local_188);
  }
  if (bVar3 == true) {
    pUVar6 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UDS_NPCMountAbilityContext>(pUVar6);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_NPCMountAbilityContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_1d6[0] = Mount_DisMount;
    pFVar8 = &FDS_GameplayTags::GetStateTag(local_1d6)->TagName;
    (pUVar7->AbilityTag).TagName = *pFVar8;
    pUVar7->IsAdd = true;
    pUVar7->OwnerEntityID = this->_padding_;
    pUVar7->IsDespawn = this->IsDespawn;
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    local_1d6[1] = 0x7a;
    pUVar6[3].field_0x4 = this->IsDespawn;
    pFVar9 = FDS_GameplayTags::GetStateTag(local_1d6 + 1);
    bVar3 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,pFVar9);
    if (!bVar3) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)pUVar7),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      local_1b8.ObjectIndex = 0;
      local_1b8.ObjectSerialNumber = 0;
      local_180 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FWeakObjectPtr::operator=(&local_1b8,(FObjectPtr)&local_180);
      local_1d6[2] = 0x7a;
      pFVar9 = FDS_GameplayTags::GetStateTag(local_1d6 + 2);
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar9);
    }
    pUVar10 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    UDS_MountAbilityData::Unmount(pUVar10);
    SetActorLocationByJump2(this);
    local_1d3 = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&local_1d3);
    return;
  }
LAB_14b84245c:
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6);
  (**(code **)(*(longlong *)this->_padding_ + 0x80))();
  bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_1c8,(void *)0x0
                    );
  if (!bVar3) {
    lVar11 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
    pUVar6 = FWeakObjectPtr::Get(&local_1c8);
    dVar2 = *(double *)&pUVar6[8].field_0x10;
    (this->StartLocation).field0_0x0._s_0.X = *(double *)&pUVar6[8].field_0x8;
    (this->StartLocation).field0_0x0._s_0.Y = dVar2;
    (this->StartLocation).field0_0x0._s_0.Z = *(double *)&pUVar6[8].field_0x18;
    pUVar6 = FWeakObjectPtr::Get(&local_1c8);
    local_168 = *(undefined8 *)&pUVar6[9].field_0x8;
    dVar2 = *(double *)(pUVar6 + 9);
    (this->StartRotation).Pitch = 0.0;
    (this->StartRotation).Yaw = dVar2;
    (this->StartRotation).Roll = 0.0;
    fVar16 = (float)(*(uint *)(lVar11 + 0x50) ^ __xmm_80000000800000008000000080000000);
    (this->TargetLocation).field0_0x0._s_0.X = 0.0;
    (this->TargetLocation).field0_0x0._s_0.Y = 0.0;
    (this->TargetLocation).field0_0x0._s_0.Z = (double)fVar16;
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_1b0);
    bVar3 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_1b0,(void *)0x0);
    if (bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<895889672109031584>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility_DisMount.cpp"
                         ,0xa0,"false");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      this_02 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_1b0);
      iVar4 = UDS_MountDataSet::GetMountID(this_02);
      if (iVar4 != 0) {
        pFVar12 = FDS_MountBaseTableRow::GetRef((longlong)iVar4,true);
        pUVar13 = UDS_GameInstance::GetInst();
        if (pUVar13 != (UDS_GameInstance *)0x0) {
          if ((pFVar12->CharacterDismountCourseValue).ArrayNum < 1) {
            fVar16 = 0.0;
          }
          else {
            fVar16 = *(float *)(pFVar12->CharacterDismountCourseValue).AllocatorInstance.Data;
          }
          this->DisMountingUpDistance = fVar16;
          if ((pFVar12->CharacterDismountCourseValue).ArrayNum < 2) {
            fVar16 = 0.0;
          }
          else {
            fVar16 = *(float *)((pFVar12->CharacterDismountCourseValue).AllocatorInstance.Data + 4);
          }
          this->DisMountingBackDistance = fVar16;
          this->DisMountEndTime = pFVar12->DismountingTime;
          this->DisMountActionTime = 0.0;
          pUVar6 = GetTransientPackageAsObject();
          pUVar7 = NewObject<UDS_NPCMountAbilityContext>(pUVar6);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar7 != (UDS_NPCMountAbilityContext *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          local_1d2[0] = Mount_DisMount;
          pFVar8 = &FDS_GameplayTags::GetStateTag(local_1d2)->TagName;
          (pUVar7->AbilityTag).TagName = *pFVar8;
          pUVar7->IsAdd = true;
          pUVar7->OwnerEntityID = this->_padding_;
          pUVar7->IsDespawn = this->IsDespawn;
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
          local_1d2[1] = 0x7a;
          pUVar6[3].field_0x4 = this->IsDespawn;
          pFVar9 = FDS_GameplayTags::GetStateTag(local_1d2 + 1);
          bVar3 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,pFVar9);
          if (!bVar3) {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (UE::GC::MarkAsReachable((UObject *)pUVar7),
               UE::GC::GIsIncrementalReachabilityPending != false)) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            local_1a8[0].ObjectIndex = 0;
            local_1a8[0].ObjectSerialNumber = 0;
            local_198 = pUVar7;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            FWeakObjectPtr::operator=(local_1a8,(FObjectPtr)&local_198);
            local_1d2[2] = 0x7a;
            pFVar9 = FDS_GameplayTags::GetStateTag(local_1d2 + 2);
            UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar9);
          }
          pUVar10 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
          UDS_MountAbilityData::Unmount(pUVar10);
          if ((this->DisMountActionTimerHandle).Handle != 0) {
            pFVar14 = FDS_TimerManager::Get((UObject *)0x0);
            pFVar15 = FTimerManager::FindTimer(pFVar14,&this->DisMountActionTimerHandle);
            if (pFVar15 != (FTimerData *)0x0) {
              FTimerManager::InternalClearTimer
                        (pFVar14,(FTimerHandle)(this->DisMountActionTimerHandle).Handle);
            }
            (this->DisMountActionTimerHandle).Handle = 0;
          }
          bVar3 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)this_00,
                             (void *)0x0);
          if ((!bVar3) && (this->DisMountEndTime != 0.0)) {
            pFVar14 = FDS_TimerManager::Get((UObject *)0x0);
            local_198 = (UDS_NPCMountAbilityContext *)EndCoolDown;
            uStack_190 = 0;
            lStack_170 = (ulonglong)uStack_18c << 0x20;
            local_178 = EndCoolDown;
            FTimerManager::SetTimer<UDS_MountAbility_DisMount>
                      (pFVar14,&this->DisMountActionTimerHandle,this,(pmf_aa4dae4a *)&local_178,
                       this->DisMountEndTime,false,__real_bf800000);
            local_1cf[0] = BlockInput;
            UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_1cf);
          }
        }
      }
    }
  }
  return;
}

// OnTickComponent @ 14b847ae0

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
UDS_MountAbility_DisMount::OnTickComponent(UDS_MountAbility_DisMount *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  UObject *pUVar6;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar7;
  USceneComponent *pUVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  float fVar34;
  uint uVar35;
  uint uVar36;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res18 [2];
  TVector<double>_u_0 local_b8;
  TVector<double> local_98 [6];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar5 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (bVar5) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  if ((this->DisMountActionTimerHandle).Handle == 0) {
    return;
  }
  if (this->DisMountEndTime == 0.0) {
    return;
  }
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  uVar35 = (uint)__xmm_80000000000000008000000000000000;
  uVar36 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (pUVar6[3].field_0x3 != '\0') {
    local_res8[0] = 0x75;
    bVar5 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res8);
    if (!bVar5) goto LAB_14b847c48;
  }
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar7 = UDS_MovementCore::GetActorForwardVector(this_00,local_98);
  dVar14 = (pTVar7->field0_0x0)._s_0.X;
  dVar1 = (pTVar7->field0_0x0)._s_0.Y;
  dVar25 = (pTVar7->field0_0x0)._s_0.Z;
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  dVar24 = (double)this->DisMountingBackDistance;
  dVar25 = dVar24 * dVar25;
  dVar14 = dVar24 * dVar14;
  dVar24 = dVar24 * dVar1;
  local_b8._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) ^ uVar36,SUB84(dVar25,0) ^ uVar35);
  local_b8._s_0.X =
       (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar36,SUB84(dVar14,0) ^ uVar35);
  local_b8._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) ^ uVar36,SUB84(dVar24,0) ^ uVar35);
  (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6,&local_b8);
LAB_14b847c48:
  (**(code **)(*(longlong *)this->_padding_ + 0x80))();
  bVar5 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_res18,
                     (void *)0x0);
  if (!bVar5) {
    fVar34 = param_1 + this->DisMountActionTime;
    this->DisMountActionTime = fVar34;
    fVar34 = fVar34 / this->DisMountEndTime;
    dVar14 = (this->StartLocation).field0_0x0._s_0.X;
    if (__real_3f800000 <= fVar34) {
      fVar34 = __real_3f800000;
    }
    dVar1 = (this->StartLocation).field0_0x0._s_0.Y;
    dVar25 = (this->TargetLocation).field0_0x0._s_0.Y;
    dVar24 = (this->StartLocation).field0_0x0._s_0.Z;
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
    dVar2 = (this->TargetLocation).field0_0x0._s_0.X;
    dVar4 = (double)fVar34;
    fVar13 = sinf(fVar34 * __real_40490fdb);
    dVar3 = (this->TargetLocation).field0_0x0._s_0.Z;
    fVar34 = this->DisMountingUpDistance;
    pUVar8 = (USceneComponent *)FWeakObjectPtr::Get(local_res18);
    local_b8._s_0.X = (dVar2 - dVar14) * dVar4 + dVar14;
    local_b8._s_0.Y = (dVar25 - dVar1) * dVar4 + dVar1;
    local_b8._s_0.Z = (double)(fVar13 * fVar34) + (dVar3 - dVar24) * dVar4 + dVar24;
    USceneComponent::SetRelativeLocation
              (pUVar8,(TVector<double> *)&local_b8._s_0,true,(FHitResult *)0x0,None);
    pUVar8 = (USceneComponent *)FWeakObjectPtr::Get(local_res18);
    dVar14 = (this->StartRotation).Yaw;
    dVar1 = (this->StartRotation).Pitch;
    auVar21._0_8_ = __real_c056800000000000 - dVar14;
    auVar21._8_8_ = 0;
    dVar25 = (this->StartRotation).Roll;
    dVar28 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar36,SUB84(dVar1,0) ^ uVar35);
    auVar16._0_4_ = SUB84(dVar25,0) ^ uVar35;
    auVar16._4_4_ = (uint)((ulonglong)dVar25 >> 0x20) ^ uVar36;
    dVar31 = (double)CONCAT44(auVar16._4_4_,auVar16._0_4_);
    auVar15._8_4_ = SUB84(auVar21._0_8_,0);
    auVar15._0_8_ = dVar28;
    auVar15._12_4_ = (int)((ulonglong)auVar21._0_8_ >> 0x20);
    auVar15 = divpd(auVar15,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar15 = roundpd(auVar21,auVar15,3);
    dVar24 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar22._0_8_ = auVar15._0_8_ * dVar24;
    dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar22._8_8_ = auVar15._8_8_ * dVar2;
    auVar16._8_8_ = 0;
    auVar15 = divpd(auVar16,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar28 = dVar28 - auVar22._0_8_;
    dVar30 = auVar21._0_8_ - auVar22._8_8_;
    auVar15 = roundpd(auVar22,auVar15,3);
    dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar17._8_4_ = SUB84(dVar30,0);
    auVar17._0_8_ = dVar28;
    auVar17._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    dVar31 = dVar31 - auVar15._0_8_ * dVar3;
    dVar33 = 0.0 - auVar15._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    dVar20 = auVar17._8_8_ + dVar2;
    uVar9 = -(ulonglong)(0.0 <= dVar28);
    uVar11 = -(ulonglong)(0.0 <= dVar30);
    auVar23._0_8_ = uVar9 & (ulonglong)dVar28;
    auVar23._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar30);
    auVar23._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar30) >> 0x20);
    auVar27._0_4_ = ~(uint)uVar9 & SUB84(dVar28 + dVar24,0);
    auVar27._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar28 + dVar24) >> 0x20);
    auVar27._8_4_ = ~(uint)uVar11 & SUB84(dVar20,0);
    auVar27._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar20 >> 0x20);
    auVar18._8_4_ = SUB84(dVar33,0);
    auVar18._0_8_ = dVar31;
    auVar18._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    dVar20 = auVar18._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar9 = -(ulonglong)(0.0 <= dVar31);
    uVar11 = -(ulonglong)(0.0 <= dVar33);
    auVar27 = auVar27 | auVar23;
    auVar29._0_4_ = ~(uint)uVar9 & SUB84(dVar31 + dVar3,0);
    auVar29._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar31 + dVar3) >> 0x20);
    auVar29._8_4_ = ~(uint)uVar11 & SUB84(dVar20,0);
    auVar29._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar20 >> 0x20);
    auVar26._0_8_ = uVar9 & (ulonglong)dVar31;
    auVar26._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar33);
    auVar26._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar33) >> 0x20);
    auVar29 = auVar29 | auVar26;
    uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar27._0_8_);
    uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar27._8_8_);
    uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar29._0_8_);
    auVar32._0_8_ = uVar11 & (ulonglong)(auVar27._0_8_ - dVar24);
    uVar9 = uVar12 & (ulonglong)(auVar27._8_8_ - dVar2);
    auVar32._8_4_ = (undefined4)uVar9;
    auVar32._12_4_ = (undefined4)(uVar9 >> 0x20);
    auVar19._0_4_ = ~(uint)uVar11 & auVar27._0_4_;
    auVar19._4_4_ = ~(uint)(uVar11 >> 0x20) & auVar27._4_4_;
    auVar19._8_4_ = ~(uint)uVar12 & auVar27._8_4_;
    auVar19._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar27._12_4_;
    local_b8._s_0.Y = SUB168(auVar32 | auVar19,8) * dVar4 + dVar14;
    local_b8._s_0.Z =
         (double)(uVar10 & (ulonglong)(auVar29._0_8_ - dVar3) |
                 CONCAT44(~(uint)(uVar10 >> 0x20) & auVar29._4_4_,~(uint)uVar10 & auVar29._0_4_)) *
         dVar4 + dVar25;
    local_b8._s_0.X = SUB168(auVar32 | auVar19,0) * dVar4 + dVar1;
    USceneComponent::SetRelativeRotation
              (pUVar8,(TRotator<double> *)&local_b8._s_0,true,(FHitResult *)0x0,None);
  }
  return;
}

// SetActorLocationByJump2 @ 14b84f100

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

void __thiscall UDS_MountAbility_DisMount::SetActorLocationByJump2(UDS_MountAbility_DisMount *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FName *pFVar6;
  undefined1 auStackY_218 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_1d8;
  ulong64 local_1d0;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> local_1c8;
  FName local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  undefined1 local_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1d0 = UDS_MountManager::GetMountEntityByCharEntityID(this->_padding_);
  if (local_1d0 == 0) {
    return;
  }
  pFVar3 = FDS_EntityBase::GetEntityBase(&local_1d0);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_198._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_198,"UDS_MountAbility_DisMount::SetActorLocationByJump2",0x32,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_198.Ptr,0x154,L"entity is nullptr. (%llu)");
  }
  else {
    (**(code **)(*(longlong *)this->_padding_ + 0x80))();
    bVar2 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      (&local_1c8,(void *)0x0);
    if (bVar2) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_198._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_198,"UDS_MountAbility_DisMount::SetActorLocationByJump2",0x32,Yes);
      pwVar8 = L"soulSkm is nullptr.";
      uVar7 = 0x15c;
    }
    else {
      (**(code **)(pFVar3->_padding_ + 0x80))(pFVar3);
      bVar2 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_1d8,
                         (void *)0x0);
      if (!bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&local_1d8);
        pcVar1 = *(code **)(*(longlong *)pUVar5 + 0x520);
        pFVar6 = ::FName::FName(&local_1c0,"Saddle");
        (*pcVar1)(pUVar5,local_78,*pFVar6,0);
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_1b8 = local_58;
        uStack_1b4 = uStack_54;
        uStack_1b0 = uStack_50;
        uStack_1ac = uStack_4c;
        local_1a8 = local_48;
        uStack_1a4 = uStack_44;
        (**(code **)(*(longlong *)pUVar5 + 0x358))(pUVar5,&local_1b8);
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_198._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_198,"UDS_MountAbility_DisMount::SetActorLocationByJump2",0x32,Yes);
      pwVar8 = L"mountSkm is nullptr.";
      uVar7 = 0x163;
    }
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_198.Ptr,uVar7,pwVar8);
  }
  if ((void *)local_198._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_198._padding_);
  }
  return;
}

// StartCoolDown @ 14b8512e0

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

void __thiscall UDS_MountAbility_DisMount::StartCoolDown(UDS_MountAbility_DisMount *this)

{
  bool bVar1;
  FTimerManager *pFVar2;
  FTimerData *pFVar3;
  EDS_AbilityInputPolicy local_res8 [8];
  code *local_18;
  undefined8 uStack_10;
  
  if ((this->DisMountActionTimerHandle).Handle != 0) {
    pFVar2 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(pFVar2,&this->DisMountActionTimerHandle);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar2,(FTimerHandle)(this->DisMountActionTimerHandle).Handle);
    }
    (this->DisMountActionTimerHandle).Handle = 0;
  }
  bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if ((!bVar1) && (this->DisMountEndTime != 0.0)) {
    pFVar2 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = EndCoolDown;
    FTimerManager::SetTimer<UDS_MountAbility_DisMount>
              (pFVar2,&this->DisMountActionTimerHandle,this,(pmf_aa4dae4a *)&local_18,
               this->DisMountEndTime,false,__real_bf800000);
    local_res8[0] = BlockInput;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}

// TryActivate @ 14b8522a0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl UDS_MountAbility_DisMount::TryActivate(ulong64 param_1,bool param_2)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined1 auStackY_218 [32];
  EDS_AbilityTagType local_1d8 [8];
  ulong64 local_1d0;
  TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> local_1c8;
  UObject *local_1c0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1d0 = param_1;
  this = FDS_EntityBase::GetEntityBase(&local_1d0);
  if (this == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_MountAbility_DisMount::TryActivate",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1d,L"entities is nullptr. (%llu)");
  }
  else {
    local_1d8[0] = Mount;
    bVar1 = FDS_EntityBase::IsActiveAbility(this,local_1d8);
    if (!bVar1) {
      return false;
    }
    local_1d8[0] = Mount;
    UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
              ((ulong64 *)&local_1c8,(EDS_AbilityTagType *)&local_1d0);
    bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals(&local_1c8,(void *)0x0);
    if (!bVar1) {
      pUVar3 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UDS_MountAbilityContext_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1b8,pUVar4);
      local_1b8._8_8_ = pUVar3;
      pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
      if (local_1b8._64_8_ != 0) {
        plVar5 = (longlong *)(local_1b8 + 0x50);
        if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
          plVar5 = (longlong *)local_1b8._104_8_;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      *(bool *)(pUVar3 + 1) = param_2;
      local_1c0 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_1d8[0] = Mount_DisMount;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_1d8,(TObjectPtr<UWN_AbilityContext>)&local_1c0);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_MountAbility_DisMount::TryActivate",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x2a,L"abilityData is nullptr.");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

