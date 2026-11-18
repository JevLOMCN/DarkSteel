// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b4f4340

UClass * __cdecl UDS_MountAbility_Descent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_Descent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_Descent",
               &Z_Registration_Info_UClass_UDS_MountAbility_Descent.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_Descent,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_Descent>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_Descent>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_Descent.InnerSingleton;
}

// UDS_MountAbility_Descent @ 14b4f7b60

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

UDS_MountAbility_Descent * __thiscall
UDS_MountAbility_Descent::UDS_MountAbility_Descent
          (UDS_MountAbility_Descent *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_MountAbility_Descent @ 14b4f7bb0

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

UDS_MountAbility_Descent * __thiscall
UDS_MountAbility_Descent::UDS_MountAbility_Descent
          (UDS_MountAbility_Descent *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_MountAbility_Descent @ 14b4f8610

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

void __thiscall UDS_MountAbility_Descent::~UDS_MountAbility_Descent(UDS_MountAbility_Descent *this)

{
  *(undefined ***)this = &UDS_MountBaseAbility::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &UDS_MountBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f9ef0

UClass * __cdecl UDS_MountAbility_Descent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_Descent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_Descent",
               &Z_Registration_Info_UClass_UDS_MountAbility_Descent.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_Descent,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_Descent>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_Descent>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_Descent.InnerSingleton;
}

// StaticRegisterNativesUDS_MountAbility_Descent @ 14b4fa870

void __cdecl UDS_MountAbility_Descent::StaticRegisterNativesUDS_MountAbility_Descent(void)

{
  return;
}

// OnAbilityRetryActivate @ 14b837940

void __thiscall UDS_MountAbility_Descent::OnAbilityRetryActivate(UDS_MountAbility_Descent *this)

{
  return;
}

// OnCanActivate @ 14b838280

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

bool __thiscall UDS_MountAbility_Descent::OnCanActivate(UDS_MountAbility_Descent *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_MountManager *this_00;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar6;
  UDS_MountAbilityData *this_01;
  FDS_MountStepInfo *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_198 [32];
  EDS_StateTagType local_168 [8];
  FWeakObjectPtr local_160;
  UDS_MountManager *local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar4 = UDS_MountBaseAbility::OnCanActivate((UDS_MountBaseAbility *)this);
  if (bVar4) {
    local_168[0] = Mount;
    bVar4 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_168);
    if (bVar4) {
      local_168[0] = Mount_Fly;
      bVar4 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_168);
      if (bVar4) {
        local_158[0] = UDS_MountManager::GetInst();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_158[0] != (UDS_MountManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_158[0]);
        }
        local_160.ObjectIndex = 0;
        local_160.ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_158[0] != (UDS_MountManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_158[0]);
        }
        FWeakObjectPtr::operator=(&local_160,(FObjectPtr)local_158);
        bVar4 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_160,(void *)0x0
                          );
        if (bVar4) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_MountAbility_Descent::OnCanActivate",0x27,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Warning,local_148.Ptr,0x1c,L"mountmanager is nullptr.");
            if ((void *)local_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_148._padding_);
            }
          }
        }
        else {
          this_00 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_160);
          pTVar6 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_00,Mount_Descent);
          pFVar8 = (pTVar6->AllocatorInstance).Data;
          iVar3 = pTVar6->ArrayNum;
          pFVar1 = pFVar8 + iVar3;
          while( true ) {
            if (pTVar6->ArrayNum != iVar3) {
              `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_168);
            }
            if (pFVar8 == pFVar1) {
              return true;
            }
            FVar2 = *pFVar8;
            this_01 = (UDS_MountAbilityData *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
            pFVar7 = UDS_MountAbilityData::GetMountStepInfo(this_01,(EDS_MountStep)FVar2);
            if (((FScriptContainerElement)pFVar7->MountStep == FVar2) && (pFVar7->IsEnable == false)
               ) break;
            pFVar8 = pFVar8 + 1;
          }
        }
      }
    }
  }
  return false;
}

// OnChangedMountStepInfo @ 14b83ccd0

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
UDS_MountAbility_Descent::OnChangedMountStepInfo
          (UDS_MountAbility_Descent *this,FDS_MountStepInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_MountManager *this_00;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_198 [32];
  EDS_AbilityDeactivateType local_168 [8];
  FWeakObjectPtr local_160;
  UDS_MountManager *local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158[0] = UDS_MountManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_158[0] != (UDS_MountManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_158[0]);
  }
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_158[0] != (UDS_MountManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_158[0]);
  }
  FWeakObjectPtr::operator=(&local_160,(FObjectPtr)local_158);
  bVar3 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_160,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_MountAbility_Descent::OnChangedMountStepInfo",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x77,L"mountmanager is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_160);
    pTVar5 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_00,Mount_Descent);
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    iVar2 = pTVar5->ArrayNum;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if (pTVar5->ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_168);
      }
      if (pFVar6 == pFVar1) {
        return;
      }
      if (((FScriptContainerElement)param_1->MountStep == *pFVar6) && (param_1->IsEnable == false))
      break;
      pFVar6 = pFVar6 + 1;
    }
    local_168[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_168);
  }
  return;
}

// OnDeactivateAbility @ 14b83e370

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
UDS_MountAbility_Descent::OnDeactivateAbility(UDS_MountAbility_Descent *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  bool bVar4;
  FGameplayTag *pFVar5;
  UDS_MountManager *pUVar6;
  UDS_LogManager *pUVar7;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar8;
  UDS_MountAbilityData *this_00;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_198 [32];
  EDS_StateTagType local_168 [8];
  FWeakObjectPtr local_160;
  UDS_MountManager *local_158;
  FWeakObjectPtr local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_150.ObjectIndex = 0;
  local_150.ObjectSerialNumber = 0;
  local_158 = (UDS_MountManager *)0x0;
  FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_158);
  local_168[0] = Mount_Descent;
  pFVar5 = FDS_GameplayTags::GetStateTag(local_168);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar5);
  pUVar6 = UDS_MountManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_MountManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  local_158 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_MountManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_158);
  bVar4 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_160,(void *)0x0);
  if (bVar4) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_MountAbility_Descent::OnDeactivateAbility",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0x65,L"mountmanager is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pUVar6 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_160);
    pTVar8 = UDS_MountManager::GetMountStepArrayByAbilityTag(pUVar6,Mount_Descent);
    pFVar9 = (pTVar8->AllocatorInstance).Data;
    iVar3 = pTVar8->ArrayNum;
    pFVar1 = pFVar9 + iVar3;
    while( true ) {
      if (pTVar8->ArrayNum != iVar3) {
        `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_168);
      }
      if (pFVar9 == pFVar1) break;
      FVar2 = *pFVar9;
      this_00 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
      UDS_MountAbilityData::DeActivateStep(this_00,(EDS_MountStep)FVar2);
      pFVar9 = pFVar9 + 1;
    }
  }
  return;
}

// OnPostActivateAbility @ 14b841e90

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

void __thiscall UDS_MountAbility_Descent::OnPostActivateAbility(UDS_MountAbility_Descent *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_MountManager *this_00;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar6;
  UDS_MountAbilityData *this_01;
  FWeakObjectPtr FVar7;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_02;
  FGameplayTag *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_1c8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FScriptContainerElement local_198 [8];
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  undefined8 local_180;
  code *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  code *local_168;
  undefined8 uStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar4 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                     (void *)0x0);
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_MountAbility_Descent::OnPostActivateAbility",0x2f,Yes);
    pwVar11 = L"MountAbilityData is nullptr.";
    uVar10 = 0x39;
  }
  else {
    local_190 = (FWeakObjectPtr)UDS_MountManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (FWeakObjectPtr)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_190);
    }
    local_188.ObjectIndex = 0;
    local_188.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (FWeakObjectPtr)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_190);
    }
    FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_190);
    bVar4 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_188,(void *)0x0);
    if (!bVar4) {
      this_00 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_188);
      pTVar6 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_00,Mount_Descent);
      pFVar9 = (pTVar6->AllocatorInstance).Data;
      iVar3 = pTVar6->ArrayNum;
      pFVar1 = pFVar9 + iVar3;
      while( true ) {
        if (pTVar6->ArrayNum != iVar3) {
          `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_198);
        }
        if (pFVar9 == pFVar1) break;
        FVar2 = *pFVar9;
        this_01 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
        UDS_MountAbilityData::ActivateStep(this_01,(EDS_MountStep)FVar2);
        pFVar9 = pFVar9 + 1;
      }
      if ((this->field_0xe9 == '\x01') &&
         (FVar7 = (FWeakObjectPtr)UDS_MountEvent::GetEvent(), FVar7 != (FWeakObjectPtr)0x0)) {
        local_190 = FVar7;
        FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
        Remove<UDS_MountAbility_Descent>
                  ((FDS_FilteredEventDelegate<EDS_MountStep_const_,FDS_MountStepInfo_const_&> *)
                   ((longlong)FVar7 + 0x80),this);
        pFVar9 = (pTVar6->AllocatorInstance).Data;
        iVar3 = pTVar6->ArrayNum;
        pFVar1 = pFVar9 + iVar3;
        while( true ) {
          if (pTVar6->ArrayNum != iVar3) {
            `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_198);
          }
          if (pFVar9 == pFVar1) break;
          local_198[0] = *pFVar9;
          local_178 = OnChangedMountStepInfo;
          uStack_170 = 0;
          this_02 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                    TMapBase<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                    ::FindOrAddImpl<enum_EDS_MountStep_const_&>
                              ((TMap<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                                *)((longlong)FVar7 + 0x88),(uint)(byte)local_198[0],
                               (EDS_MountStep *)local_198);
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_02,this);
          uStack_160._4_4_ = uStack_16c;
          uStack_160._0_4_ = uStack_170;
          local_168 = local_178;
          TMulticastDelegateRegistration<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>
          ::AddUObject<UDS_MountAbility_Descent>
                    ((TMulticastDelegateRegistration<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>
                      *)this_02,(UDS_MountAbility_Descent *)&local_180,(pmf_b7e9259f *)this);
          pFVar9 = pFVar9 + 1;
          FVar7 = local_190;
        }
      }
      local_190.ObjectIndex = 0;
      local_190.ObjectSerialNumber = 0;
      local_180 = 0;
      FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_180);
      local_198[0] = (FScriptContainerElement)0x78;
      pFVar8 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_198);
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar8);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_MountAbility_Descent::OnPostActivateAbility",0x2f,Yes);
    pwVar11 = L"mountmanager is nullptr.";
    uVar10 = 0x40;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,uVar10,pwVar11);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

