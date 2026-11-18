// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b4a3b20

UClass * __cdecl UDS_GroggyAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GroggyAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GroggyAbility",
               &Z_Registration_Info_UClass_UDS_GroggyAbility.InnerSingleton,
               StaticRegisterNativesUDS_GroggyAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GroggyAbility>,
               InternalVTableHelperCtorCaller<UDS_GroggyAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GroggyAbility.InnerSingleton;
}

// UDS_GroggyAbility @ 14b4a7090

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

UDS_GroggyAbility * __thiscall
UDS_GroggyAbility::UDS_GroggyAbility(UDS_GroggyAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  (this->GroggyData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->GroggyData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_GroggyAbility @ 14b4a70f0

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

UDS_GroggyAbility * __thiscall
UDS_GroggyAbility::UDS_GroggyAbility(UDS_GroggyAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  (this->GroggyData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->GroggyData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_GroggyAbility @ 14b4a78b0

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

void __thiscall UDS_GroggyAbility::~UDS_GroggyAbility(UDS_GroggyAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a8cb0

UClass * __cdecl UDS_GroggyAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GroggyAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GroggyAbility",
               &Z_Registration_Info_UClass_UDS_GroggyAbility.InnerSingleton,
               StaticRegisterNativesUDS_GroggyAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GroggyAbility>,
               InternalVTableHelperCtorCaller<UDS_GroggyAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GroggyAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b4a9560

bool __thiscall UDS_GroggyAbility::ShouldTickComponent(UDS_GroggyAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_GroggyAbility @ 14b4a95a0

void __cdecl UDS_GroggyAbility::StaticRegisterNativesUDS_GroggyAbility(void)

{
  return;
}

// ClearVariables @ 14b7dc800

void __thiscall UDS_GroggyAbility::ClearVariables(UDS_GroggyAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->ElapsedTime = 0.0;
  bVar1 = TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->GroggyData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->GroggyData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b7dc83f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2c8));
    return;
  }
  return;
}

// EndGroggy @ 14b7e57a0

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
UDS_GroggyAbility::EndGroggy
          (TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> param_1,FDS_EntityBase *param_2)

{
  bool bVar1;
  UWN_AbilitySystemComponent *pUVar2;
  FGameplayTag *pFVar3;
  FWeakObjectPtr local_res8 [2];
  EDS_StateTagType local_res18 [8];
  FWeakObjectPtr local_res20;
  
  local_res8[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> *)local_res8,(void *)0x0)
  ;
  if ((!bVar1) && (param_2 != (FDS_EntityBase *)0x0)) {
    (**(code **)(param_2->_padding_ + 0x178))(param_2);
    bVar1 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_res20,
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res20);
      local_res18[0] = Groggy_StartAndLoop;
      pFVar3 = FDS_GameplayTags::GetStateTag(local_res18);
      UWN_AbilitySystemComponent::RemoveTag(pUVar2,pFVar3,-1);
      pUVar2 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res20);
      local_res18[0] = Groggy_GetUp;
      pFVar3 = FDS_GameplayTags::GetStateTag(local_res18);
      UWN_AbilitySystemComponent::RemoveTag(pUVar2,pFVar3,-1);
      return true;
    }
  }
  return false;
}

// GroggyProcess @ 14b7ecb00

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
UDS_GroggyAbility::GroggyProcess
          (TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> param_1,FDS_EntityBase *param_2,
          float *param_3)

{
  double dVar1;
  bool bVar2;
  UObject *pUVar3;
  UWN_AbilitySystemComponent *pUVar4;
  FGameplayTag *pFVar5;
  FWeakObjectPtr local_res8;
  EDS_StateTagType local_res20 [8];
  FWeakObjectPtr local_28 [4];
  
  local_res8 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> *)&local_res8,(void *)0x0
                    );
  if ((!bVar2) && (param_2 != (FDS_EntityBase *)0x0)) {
    (**(code **)(param_2->_padding_ + 0x178))(param_2);
    bVar2 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)local_28,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res8);
      dVar1 = (double)*param_3 + *(double *)&pUVar3[2].field_0x10;
      pUVar3 = FWeakObjectPtr::Get(&local_res8);
      if (*(int *)&pUVar3[2].field_0x8 == 1) {
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        if (*(double *)&pUVar3[2].field_0x18 <= dVar1) {
          pUVar3 = FWeakObjectPtr::Get(&local_res8);
          *(undefined4 *)&pUVar3[2].field_0x8 = 2;
          pUVar4 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(local_28);
          local_res20[0] = Groggy_StartAndLoop;
          pFVar5 = FDS_GameplayTags::GetStateTag(local_res20);
          UWN_AbilitySystemComponent::RemoveTag(pUVar4,pFVar5,-1);
          pUVar4 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(local_28);
          local_res20[0] = Groggy_GetUp;
          pFVar5 = FDS_GameplayTags::GetStateTag(local_res20);
          UWN_AbilitySystemComponent::AddTag(pUVar4,pFVar5,1);
        }
      }
      else {
        if (*(int *)&pUVar3[2].field_0x8 != 2) {
          return false;
        }
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        if (*(double *)&pUVar3[2].field_0x20 <= dVar1) {
          pUVar3 = FWeakObjectPtr::Get(&local_res8);
          *(undefined4 *)&pUVar3[2].field_0x8 = 3;
          return true;
        }
      }
      return true;
    }
  }
  return false;
}

// OnCanActivate @ 14b7f5cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_GroggyAbility::OnCanActivate(UDS_GroggyAbility *this)

{
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_GroggyAbilityData *this_00;
  undefined1 auStackY_198 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_160;
  UObject *local_158;
  FWeakObjectPtr local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (!bVar2) {
    return false;
  }
  bVar2 = TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->GroggyData,(void *)0x0);
  if (bVar2) {
    TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_GroggyAbilityData>
                      ((ulong64 *)&local_158,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
    (this->GroggyData).WeakPtr = *TVar3.WeakPtr;
  }
  bVar2 = TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->GroggyData,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_GroggyAbility::OnCanActivate",0x20,Yes);
    pwVar8 = L"GroggyData is nullptr.";
    uVar7 = 0x16;
    goto LAB_14b7f5ee6;
  }
  pUVar5 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  local_150.ObjectIndex = 0;
  local_150.ObjectSerialNumber = 0;
  local_158 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_158);
  pUVar5 = FWeakObjectPtr::Get(&local_150);
  if (pUVar5 == (UObject *)0x0) {
LAB_14b7f5e3f:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_GroggyAbilityContext_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14b7f5e3f;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  local_158 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_158);
  bVar2 = TWeakObjectPtr<UDS_GroggyAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GroggyAbilityContext,FWeakObjectPtr> *)&local_160,
                     (void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_GroggyAbility::OnCanActivate",0x20,Yes);
    pwVar8 = L"context is nullptr.";
    uVar7 = 0x1e;
  }
  else {
    this_00 = (UDS_GroggyAbilityData *)FWeakObjectPtr::Get(&(this->GroggyData).WeakPtr);
    pUVar5 = FWeakObjectPtr::Get(&local_160);
    bVar2 = UDS_GroggyAbilityData::InitData
                      (this_00,(ulong64 *)&this->_padding_,(double *)(pUVar5 + 1));
    if (bVar2) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_GroggyAbility::OnCanActivate",0x20,Yes);
    pwVar8 = L"Failed to InitData().";
    uVar7 = 0x24;
  }
LAB_14b7f5ee6:
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar7,pwVar8);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// OnDeactivateAbility @ 14b7fb3c0

void __thiscall UDS_GroggyAbility::OnDeactivateAbility(UDS_GroggyAbility *this,bool *param_1)

{
  longlong *plVar1;
  bool bVar2;
  UWN_AbilitySystemComponent *pUVar3;
  FGameplayTag *pFVar4;
  EDS_StateTagType local_res8 [16];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  local_res20 = (this->GroggyData).WeakPtr;
  plVar1 = (longlong *)this->_padding_;
  bVar2 = TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> *)&local_res20,
                     (void *)0x0);
  if ((!bVar2) && (plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x178))(plVar1);
    bVar2 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_res18,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res18);
      local_res8[0] = Groggy_StartAndLoop;
      pFVar4 = FDS_GameplayTags::GetStateTag(local_res8);
      UWN_AbilitySystemComponent::RemoveTag(pUVar3,pFVar4,-1);
      pUVar3 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res18);
      local_res8[0] = Groggy_GetUp;
      pFVar4 = FDS_GameplayTags::GetStateTag(local_res8);
      UWN_AbilitySystemComponent::RemoveTag(pUVar3,pFVar4,-1);
    }
  }
  return;
}

// OnPostActivateAbility @ 14b801600

void __thiscall UDS_GroggyAbility::OnPostActivateAbility(UDS_GroggyAbility *this)

{
  longlong *this_00;
  longlong *plVar1;
  bool bVar2;
  UDS_AbilitySystemComponent *pUVar3;
  FGameplayTag *pFVar4;
  UWN_AbilitySystemComponent *this_01;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  
  this_00 = &this->_padding_;
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = Success;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = 0x11;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = 0x29;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = 0xd;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = 0xc;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = 0x13;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = 0xe;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = 0x10;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = 0x17;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = 0x16;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = 0x15;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res10.ObjectIndex._0_1_ = 2;
  local_res8[0] = DeathCancel;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,pFVar4,(EDS_AbilityDeactivateType *)&local_res10);
  local_res18 = (this->GroggyData).WeakPtr;
  plVar1 = (longlong *)this->_padding_;
  bVar2 = TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if ((!bVar2) && (plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x178))(plVar1);
    bVar2 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_res10,
                       (void *)0x0);
    if (!bVar2) {
      this_01 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res10);
      local_res8[0] = 0x1a;
      pFVar4 = FDS_GameplayTags::GetStateTag(local_res8);
      UWN_AbilitySystemComponent::AddTag(this_01,pFVar4,1);
      return;
    }
  }
  local_res8[0] = Cancel;
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,(FGameplayTag *)&this->_padding_,local_res8);
  return;
}

// OnTickComponent @ 14b80a3e0

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

void __thiscall UDS_GroggyAbility::OnTickComponent(UDS_GroggyAbility *this,float param_1)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  UWN_AbilitySystemComponent *pUVar5;
  FGameplayTag *pFVar6;
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res8 [16];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  local_res18 = (this->GroggyData).WeakPtr;
  plVar1 = (longlong *)this->_padding_;
  bVar3 = TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if ((!bVar3) && (plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x178))(plVar1);
    bVar3 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_res20,
                       (void *)0x0);
    if (!bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_res18);
      dVar2 = (double)this->ElapsedTime + *(double *)&pUVar4[2].field_0x10;
      pUVar4 = FWeakObjectPtr::Get(&local_res18);
      if (*(int *)&pUVar4[2].field_0x8 == 1) {
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        if (*(double *)&pUVar4[2].field_0x18 <= dVar2) {
          pUVar4 = FWeakObjectPtr::Get(&local_res18);
          *(undefined4 *)&pUVar4[2].field_0x8 = 2;
          pUVar5 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res20);
          local_res8[0] = 0x1a;
          pFVar6 = FDS_GameplayTags::GetStateTag(local_res8);
          UWN_AbilitySystemComponent::RemoveTag(pUVar5,pFVar6,-1);
          pUVar5 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res20);
          local_res8[0] = 0x1b;
          pFVar6 = FDS_GameplayTags::GetStateTag(local_res8);
          UWN_AbilitySystemComponent::AddTag(pUVar5,pFVar6,1);
        }
      }
      else {
        if (*(int *)&pUVar4[2].field_0x8 != 2) goto LAB_14b80a556;
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        if (*(double *)&pUVar4[2].field_0x20 <= dVar2) {
          pUVar4 = FWeakObjectPtr::Get(&local_res18);
          *(undefined4 *)&pUVar4[2].field_0x8 = 3;
        }
      }
      pUVar4 = FWeakObjectPtr::Get(&(this->GroggyData).WeakPtr);
      if (*(int *)&pUVar4[2].field_0x8 != 3) {
        this->ElapsedTime = param_1 + this->ElapsedTime;
        return;
      }
      local_res8[0] = Success;
      goto LAB_14b80a55b;
    }
  }
LAB_14b80a556:
  local_res8[0] = Cancel;
LAB_14b80a55b:
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res8);
  return;
}

// StartGroggy @ 14b8128e0

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
UDS_GroggyAbility::StartGroggy
          (TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> param_1,FDS_EntityBase *param_2)

{
  bool bVar1;
  UWN_AbilitySystemComponent *this;
  FGameplayTag *pFVar2;
  FWeakObjectPtr local_res8 [2];
  EDS_StateTagType local_res18 [8];
  FWeakObjectPtr local_res20;
  
  local_res8[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> *)local_res8,(void *)0x0)
  ;
  if ((!bVar1) && (param_2 != (FDS_EntityBase *)0x0)) {
    (**(code **)(param_2->_padding_ + 0x178))(param_2);
    bVar1 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_res20,
                       (void *)0x0);
    if (!bVar1) {
      this = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res20);
      local_res18[0] = Groggy_StartAndLoop;
      pFVar2 = FDS_GameplayTags::GetStateTag(local_res18);
      UWN_AbilitySystemComponent::AddTag(this,pFVar2,1);
      return true;
    }
  }
  return false;
}

