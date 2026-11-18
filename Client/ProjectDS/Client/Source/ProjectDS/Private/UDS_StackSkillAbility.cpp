// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b5a13b0

UClass * __cdecl UDS_StackSkillAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StackSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StackSkillAbility",
               &Z_Registration_Info_UClass_UDS_StackSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_StackSkillAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StackSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_StackSkillAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StackSkillAbility.InnerSingleton;
}

// UDS_StackSkillAbility @ 14b5a2a30

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

UDS_StackSkillAbility * __thiscall
UDS_StackSkillAbility::UDS_StackSkillAbility(UDS_StackSkillAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_StackSkillAbility @ 14b5a2c70

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

void __thiscall UDS_StackSkillAbility::~UDS_StackSkillAbility(UDS_StackSkillAbility *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5a35e0

UClass * __cdecl UDS_StackSkillAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StackSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StackSkillAbility",
               &Z_Registration_Info_UClass_UDS_StackSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_StackSkillAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StackSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_StackSkillAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StackSkillAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_StackSkillAbility @ 14b5a3820

void __cdecl UDS_StackSkillAbility::StaticRegisterNativesUDS_StackSkillAbility(void)

{
  return;
}

// UDS_StackSkillAbility @ 14b823530

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

UDS_StackSkillAbility * __thiscall
UDS_StackSkillAbility::UDS_StackSkillAbility
          (UDS_StackSkillAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// InitOtherAbilityEventSubscriptions @ 14b834b70

void __thiscall
UDS_StackSkillAbility::InitOtherAbilityEventSubscriptions(UDS_StackSkillAbility *this)

{
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = AttackTarget;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)&this->field_0x118,pFVar1);
  return;
}

// OnCanActivate @ 14b83ac00

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

bool __thiscall UDS_StackSkillAbility::OnCanActivate(UDS_StackSkillAbility *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  UObject *pUVar4;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> this_00;
  UClass *pUVar5;
  UDS_LogManager *pUVar6;
  UDS_SkillData *this_01;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  UObject *local_148;
  undefined1 local_140 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar2 = FWeakObjectPtr::IsValid(&local_150);
  if (!bVar2) {
    return false;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_150);
  this_00 = UDS_SkillData::GetData
                      ((ulong64)local_140,*(ulong64 *)&this->field_0xe0,
                       SUB41(*(undefined4 *)(pUVar4 + 1),0));
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_StackSkillData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b83ac91;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b83ac91:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_158.ObjectIndex = 0;
  local_158.ObjectSerialNumber = 0;
  local_148 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_148);
  bVar2 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar2) {
    this_01 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_158);
    bVar2 = UDS_SkillData::IsSkillActive(this_01);
    if (!bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_158);
      cVar3 = (**(code **)(*(longlong *)pUVar4 + 0x2f8))(pUVar4);
      return cVar3 != '\0';
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_150);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StackSkillAbility::OnCanActivate",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_138.Ptr,0x1f,L"skillData is Invalid. SkillID : %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83fa50

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
UDS_StackSkillAbility::OnDeactivateAbility(UDS_StackSkillAbility *this,bool *param_1)

{
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = AttackTarget;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8,&this->field_0x138);
  return;
}

// OnDeactivatedOtherAbility @ 14b8404e0

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
UDS_StackSkillAbility::OnDeactivatedOtherAbility
          (UDS_StackSkillAbility *this,FGameplayTag *param_1,bool *param_2)

{
  FName *pFVar1;
  EDS_AbilityDeactivateType local_res20 [8];
  
  local_res20[0] = 0x20;
  pFVar1 = &FDS_GameplayTags::GetAbilityTag(local_res20)->TagName;
  if ((*pFVar1 != (FName)0x0) && (param_1->TagName == *pFVar1)) {
    local_res20[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res20);
  }
  return;
}

// OnPostActivateAbility @ 14b846190

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

void __thiscall UDS_StackSkillAbility::OnPostActivateAbility(UDS_StackSkillAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    UseSkillProcess(this,*(int *)(pUVar2 + 1));
  }
  return;
}

// UseSkillProcess @ 14b85b130

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

void __thiscall UDS_StackSkillAbility::UseSkillProcess(UDS_StackSkillAbility *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> this_00;
  UDS_SkillAbilityContext *pUVar4;
  UClass *pUVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_SkillActLevelTableRow *pFVar8;
  UObject *pUVar9;
  UDS_StackSkillData *this_01;
  undefined1 auStackY_1b8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  EDS_AbilityDeactivateType local_178 [8];
  FWeakObjectPtr local_170;
  UDS_SkillAbilityContext *local_168;
  FWeakObjectPtr local_160;
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = UDS_SkillData::GetData
                      ((ulong64)local_158,*(ulong64 *)&this->field_0xe0,SUB41(param_1,0));
  pUVar4 = (UDS_SkillAbilityContext *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar4 == (UDS_SkillAbilityContext *)0x0) {
LAB_14b85b1b1:
    pUVar4 = (UDS_SkillAbilityContext *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_StackSkillData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14b85b1b1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_SkillAbilityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_170.ObjectIndex = 0;
  local_170.ObjectSerialNumber = 0;
  local_168 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_SkillAbilityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=(&local_170,(FObjectPtr)&local_168);
  bVar3 = FWeakObjectPtr::IsValid(&local_170);
  if (bVar3) {
    pUVar7 = FWeakObjectPtr::Get(&local_170);
    pFVar8 = FDS_SkillActLevelTableRow::Get((longlong)*(int *)&pUVar7[2].field_0x24,true);
    if (pFVar8 == (FDS_SkillActLevelTableRow *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b85b27f;
      pUVar6 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_170);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_StackSkillAbility::UseSkillProcess",0x26,Yes);
      pwVar11 = L"skillActLevelTableRow is nullptr. skillActLevelID : %d";
      uVar10 = 0x62;
    }
    else {
      UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
      bVar3 = FWeakObjectPtr::IsValid(&local_160);
      if (bVar3) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xc0);
        pUVar4 = NewObject<UDS_SkillAbilityContext>(pUVar7);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UDS_SkillAbilityContext *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        pUVar4->SkillID = param_1;
        local_168 = pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        local_178[0] = 0x11;
        bVar3 = UDS_GameplayAbility::TryActivateAbility
                          ((UDS_GameplayAbility *)this,local_178,
                           (TObjectPtr<UWN_AbilityContext>)&local_168);
        if (bVar3) {
          pUVar7 = FWeakObjectPtr::Get(&local_170);
          pUVar9 = FWeakObjectPtr::Get(&local_170);
          if (*(int *)&pUVar7[0x10].field_0x8 == *(int *)&pUVar9[0x10].field_0xc) {
            pUVar7 = FWeakObjectPtr::Get(&local_170);
            pcVar2 = *(code **)(*(longlong *)pUVar7 + 0x2e8);
            pUVar9 = FWeakObjectPtr::Get(&local_170);
            (*pcVar2)(pUVar7,*(undefined4 *)&pUVar9[8].field_0xc);
          }
          this_01 = (UDS_StackSkillData *)FWeakObjectPtr::Get(&local_170);
          UDS_StackSkillData::ReduceStackCount(this_01,1);
          return;
        }
        goto LAB_14b85b27f;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b85b27f;
      pUVar6 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_170);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_StackSkillAbility::UseSkillProcess",0x26,Yes);
      pwVar11 = L"UDS_SkillAbilityContext is nullptr. skillActLevelID : %d";
      uVar10 = 0x6a;
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b85b27f;
    pUVar6 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_StackSkillAbility::UseSkillProcess",0x26,Yes);
    pwVar11 = L"skillData is Invalid. SkillID : %d";
    uVar10 = 0x5a;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,uVar10,pwVar11);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14b85b27f:
  local_178[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178);
  return;
}

