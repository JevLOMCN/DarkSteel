// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// ShouldNotifyChangedCharState @ 14b414100

bool __thiscall UDS_SkillAbility::ShouldNotifyChangedCharState(UDS_SkillAbility *this)

{
  return true;
}

// StaticClass @ 14b4141e0

UClass * __cdecl UDS_SkillAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillAbility.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillAbility",
               &Z_Registration_Info_UClass_UDS_SkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillAbility>,aFStackX_8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillAbility.InnerSingleton;
}

// UDS_SkillAbility @ 14b58e000

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

UDS_SkillAbility * __thiscall
UDS_SkillAbility::UDS_SkillAbility(UDS_SkillAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_SkillAbility @ 14b58e560

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

void __thiscall UDS_SkillAbility::~UDS_SkillAbility(UDS_SkillAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b58f1c0

UClass * __cdecl UDS_SkillAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillAbility",
               &Z_Registration_Info_UClass_UDS_SkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_SkillAbility @ 14b58f400

void __cdecl UDS_SkillAbility::StaticRegisterNativesUDS_SkillAbility(void)

{
  return;
}

// UDS_SkillAbility @ 14b823280

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

UDS_SkillAbility * __thiscall
UDS_SkillAbility::UDS_SkillAbility(UDS_SkillAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ClearAbnormalStateByConditions @ 14b8277b0

void __thiscall UDS_SkillAbility::ClearAbnormalStateByConditions(UDS_SkillAbility *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_AbnormalAbilityData *pUVar4;
  FWeakObjectPtr local_res10;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerSkillData).WeakPtr);
  if (bVar2) {
    UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
              ((ulong64 *)&local_res10,(EDS_AbilityTagType *)&this->_padding_);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
      if (pUVar3[8].field_0x25 == '\x01') {
        pUVar4 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res10);
        UDS_AbnormalAbilityData::RemoveAbnormalGroup(pUVar4,StateControl);
      }
      pUVar3 = FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
      if (pUVar3[8].field_0x26 == '\x01') {
        pUVar4 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res10);
        UDS_AbnormalAbilityData::RemoveAbnormalGroup(pUVar4,MoveControl);
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_139802890586816394>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_SkillAbility.cpp"
                         ,0x76,"abnormalAbilityData.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ClearVariables @ 14b827d40

void __thiscall UDS_SkillAbility::ClearVariables(UDS_SkillAbility *this)

{
  (this->OwnerSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// OnCanActivate @ 14b83a2b0

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

bool __thiscall UDS_SkillAbility::OnCanActivate(UDS_SkillAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar4;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148;
  undefined1 local_140 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
    bVar1 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_148);
      TVar4 = UDS_SkillData::GetData
                        ((ulong64)local_140,this->_padding_,SUB41(*(undefined4 *)(pUVar3 + 1),0));
                    /* WARNING: Load size is inaccurate */
      (this->OwnerSkillData).WeakPtr = *TVar4.WeakPtr;
      bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerSkillData).WeakPtr);
      if (bVar1) {
        return true;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_148);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SkillAbility::OnCanActivate",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x23,L"skill data is invalid. SkillID : %d");
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SkillAbility::OnCanActivate",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1c,L"skill context is invalid.");
    }
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// OnChangedCharState @ 14b83c300

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
UDS_SkillAbility::OnChangedCharState
          (UDS_SkillAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_SkillData *this_00;
  UDS_CharStateData *pUVar2;
  UDS_AbnormalAbilityData *this_01;
  FDS_AbnormalInfo *pFVar3;
  UObject *pUVar4;
  UDS_LogManager *pUVar5;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_208 [32];
  EDS_AbilityInputPolicy local_1b8 [8];
  FWeakObjectPtr local_1b0;
  FDS_ChangedCharStateInfo local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if ((bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerSkillData).WeakPtr), bVar1)) {
    this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
    bVar1 = UDS_SkillData::IsImmuneAbnormal(this_00);
    if (!bVar1) {
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      bVar1 = UDS_CharStateData::HasControlAbnormalState(pUVar2);
      if (bVar1) {
        if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
          local_1b8[0] = 0x30;
          UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
                    ((ulong64 *)&local_1b0,(EDS_AbilityTagType *)&this->_padding_);
          bVar1 = TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> *)&local_1b0,
                             (void *)0x0);
          if (!bVar1) {
            this_01 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_1b0);
            pFVar3 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(this_01,None);
            pUVar4 = FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
            if ((pFVar3->AbnormalStartTime < *(double *)&pUVar4[7].field_0x8) &&
               (pUVar5 = UDS_LogManager::GetInst(), pUVar5 != (UDS_LogManager *)0x0)) {
              pUVar5 = UDS_LogManager::GetInst();
              FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
              FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
              local_178._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_178,"UDS_SkillAbility::OnChangedCharState",0x24,Yes);
              UDS_LogManager::PrintLog
                        (pUVar5,1,Warning,local_178.Ptr,0x4d,
                         L"SERIN Ignore Abnormal Cancel %d %f %f");
              if ((void *)local_178._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_178._padding_);
              }
            }
          }
        }
        local_1b8[0] = EndIfInputWithAniCut;
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1b8);
        return;
      }
    }
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_1b0.ObjectIndex = 0x16;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_1b0);
    if (bVar1) {
      local_1b8[0] = bVar1;
      UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_1b8);
    }
    local_1a8.StateTag.TagName = (param_2->StateTag).TagName;
    local_1a8.bIsStateTagOn = param_2->bIsStateTagOn;
    local_1a8._9_7_ = *(undefined7 *)&param_2->field_0x9;
    local_1a8.AddedCharState = param_2->AddedCharState;
    local_1a8.RemovedCharState = param_2->RemovedCharState;
    local_1a8.AddedCharDetailState = param_2->AddedCharDetailState;
    local_1a8.RemovedCharDetailState = param_2->RemovedCharDetailState;
    UDS_GameplayAbility::OnChangedCharState
              ((UDS_GameplayAbility *)this,
               (TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_res10[0],&local_1a8);
  }
  return;
}

// OnDeactivateAbility @ 14b83f8a0

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

void __thiscall UDS_SkillAbility::OnDeactivateAbility(UDS_SkillAbility *this,bool *param_1)

{
  EDS_AbilityInputPolicy local_res18 [16];
  
  local_res18[0] = None;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res18);
  return;
}

// OnPostActivateAbility @ 14b8455f0

void __thiscall UDS_SkillAbility::OnPostActivateAbility(UDS_SkillAbility *this)

{
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbnormalAbilityData *pUVar4;
  UObject *pUVar5;
  undefined4 local_res10 [2];
  FWeakObjectPtr local_res18 [2];
  
  this_00 = &this->OwnerSkillData;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
              ((ulong64 *)local_res18,(EDS_AbilityTagType *)&this->_padding_);
    bVar3 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if (pUVar5[8].field_0x25 == '\x01') {
        pUVar4 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(local_res18);
        UDS_AbnormalAbilityData::RemoveAbnormalGroup(pUVar4,StateControl);
      }
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if (pUVar5[8].field_0x26 == '\x01') {
        pUVar4 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(local_res18);
        UDS_AbnormalAbilityData::RemoveAbnormalGroup(pUVar4,MoveControl);
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_139802890586816394>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_SkillAbility.cpp"
                         ,0x76,"abnormalAbilityData.IsValid()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    plVar1 = (longlong *)this->_padding_;
    pcVar2 = *(code **)(*plVar1 + 0x90);
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_res10[0] = *(undefined4 *)&pUVar5[2].field_0x1c;
    (*pcVar2)(plVar1,local_res10);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_139802890586816464>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_SkillAbility.cpp"
                       ,0x30,"OwnerSkillData.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

