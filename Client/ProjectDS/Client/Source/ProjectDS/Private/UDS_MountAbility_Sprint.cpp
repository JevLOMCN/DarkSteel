// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b4f5170

UClass * __cdecl UDS_MountAbility_Sprint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_Sprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_Sprint",
               &Z_Registration_Info_UClass_UDS_MountAbility_Sprint.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_Sprint,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_Sprint>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_Sprint>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_Sprint.InnerSingleton;
}

// UDS_MountAbility_Sprint @ 14b4f7f60

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

UDS_MountAbility_Sprint * __thiscall
UDS_MountAbility_Sprint::UDS_MountAbility_Sprint
          (UDS_MountAbility_Sprint *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->TickEnable = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_MountAbility_Sprint @ 14b4f7fb0

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

UDS_MountAbility_Sprint * __thiscall
UDS_MountAbility_Sprint::UDS_MountAbility_Sprint
          (UDS_MountAbility_Sprint *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->TickEnable = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_MountAbility_Sprint @ 14b4f86d0

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

void __thiscall UDS_MountAbility_Sprint::~UDS_MountAbility_Sprint(UDS_MountAbility_Sprint *this)

{
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4fa370

UClass * __cdecl UDS_MountAbility_Sprint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_Sprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_Sprint",
               &Z_Registration_Info_UClass_UDS_MountAbility_Sprint.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_Sprint,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_Sprint>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_Sprint>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_Sprint.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4fa6e0

bool __thiscall UDS_MountAbility_Sprint::ShouldNotifyChangedCharState(UDS_MountAbility_Sprint *this)

{
  return true;
}

// ShouldTickComponent @ 14b4fa740

bool __thiscall UDS_MountAbility_Sprint::ShouldTickComponent(UDS_MountAbility_Sprint *this)

{
  return this->TickEnable;
}

// StaticRegisterNativesUDS_MountAbility_Sprint @ 14b4fa8d0

void __cdecl UDS_MountAbility_Sprint::StaticRegisterNativesUDS_MountAbility_Sprint(void)

{
  return;
}

// CheckRequiredStaminaWithMessage @ 14b826790

bool __thiscall
UDS_MountAbility_Sprint::CheckRequiredStaminaWithMessage(UDS_MountAbility_Sprint *this)

{
  return true;
}

// OnAbilityRetryActivate @ 14b8379b0

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

void __thiscall UDS_MountAbility_Sprint::OnAbilityRetryActivate(UDS_MountAbility_Sprint *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MountAbility_Sprint::OnAbilityRetryActivate",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x83,L"MountAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  }
  return;
}

// OnCanActivate @ 14b8388b0

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

bool __thiscall UDS_MountAbility_Sprint::OnCanActivate(UDS_MountAbility_Sprint *this)

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
                        ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_160,(void *)0x0);
      if (bVar4) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_MountAbility_Sprint::OnCanActivate",0x26,Yes);
          UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x2c,L"mountManager is nullptr.");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        this_00 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_160);
        pTVar6 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_00,Mount_Sprint);
        pFVar8 = (pTVar6->AllocatorInstance).Data;
        iVar3 = pTVar6->ArrayNum;
        pFVar1 = pFVar8 + iVar3;
        while( true ) {
          if (pTVar6->ArrayNum != iVar3) {
            `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_168);
          }
          if (pFVar8 == pFVar1) {
            return true;
          }
          FVar2 = *pFVar8;
          this_01 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pFVar7 = UDS_MountAbilityData::GetMountStepInfo(this_01,(EDS_MountStep)FVar2);
          if (((FScriptContainerElement)pFVar7->MountStep == FVar2) && (pFVar7->IsEnable == false))
          break;
          pFVar8 = pFVar8 + 1;
        }
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b83bed0

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
UDS_MountAbility_Sprint::OnChangedCharState
          (UDS_MountAbility_Sprint *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_38);
  return;
}

// OnChangedMountStepInfo @ 14b83ce90

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
UDS_MountAbility_Sprint::OnChangedMountStepInfo
          (UDS_MountAbility_Sprint *this,FDS_MountStepInfo *param_1)

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
                (&local_148,"UDS_MountAbility_Sprint::OnChangedMountStepInfo",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0xdc,L"mountManager is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_160);
    pTVar5 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_00,Mount_Sprint);
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

// OnChangedStatus_MountStamina @ 14b83d260

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
UDS_MountAbility_Sprint::OnChangedStatus_MountStamina
          (UDS_MountAbility_Sprint *this,float param_1,float param_2)

{
  EDS_AbilityDeactivateType local_res18 [16];
  
  if ((param_2 <= 0.0) || (param_1 <= 0.0)) {
    local_res18[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res18);
  }
  return;
}

// OnDeactivateAbility @ 14b83e910

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
UDS_MountAbility_Sprint::OnDeactivateAbility(UDS_MountAbility_Sprint *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_MountManager *this_00;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar7;
  UDS_MountAbilityData *this_01;
  FGameplayTag *pFVar8;
  UDS_MountEvent *pUVar9;
  UDS_CharStatusData *this_02;
  FDS_StatusInfo *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_408 [32];
  undefined1 local_3c8;
  EDS_StateTagType local_3c7 [7];
  FWeakObjectPtr local_3c0;
  FWeakObjectPtr local_3b8;
  FWeakObjectPtr local_3b0;
  UDS_MountManager *local_3a8;
  undefined8 local_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_408;
  this->TickEnable = false;
  local_3a8 = UDS_MountManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3a8 != (UDS_MountManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_3a8);
  }
  local_3c0.ObjectIndex = 0;
  local_3c0.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3a8 != (UDS_MountManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_3a8);
  }
  FWeakObjectPtr::operator=(&local_3c0,(FObjectPtr)&local_3a8);
  bVar5 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_3c0,(void *)0x0);
  if (bVar5) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_MountAbility_Sprint::OnDeactivateAbility",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_398.Ptr,0x99,L"mountManager is nullptr.");
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_3c0);
    pTVar7 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_00,Mount_Sprint);
    pFVar11 = (pTVar7->AllocatorInstance).Data;
    iVar3 = pTVar7->ArrayNum;
    pFVar1 = pFVar11 + iVar3;
    while( true ) {
      if (pTVar7->ArrayNum != iVar3) {
        local_3c8 = 0;
        `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_3c8);
      }
      if (pFVar11 == pFVar1) break;
      FVar2 = *pFVar11;
      this_01 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MountAbilityData::DeActivateStep(this_01,(EDS_MountStep)FVar2);
      pFVar11 = pFVar11 + 1;
    }
    local_3b8.ObjectIndex = 0;
    local_3b8.ObjectSerialNumber = 0;
    local_3a0 = 0;
    FWeakObjectPtr::operator=(&local_3b8,(FObjectPtr)&local_3a0);
    local_3c7[0] = Mount_Sprint;
    pFVar8 = FDS_GameplayTags::GetStateTag(local_3c7);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar8);
    if ((*(char *)((longlong)&this->_padding_ + 1) == '\x01') &&
       (pUVar9 = UDS_MountEvent::GetEvent(), pUVar9 != (UDS_MountEvent *)0x0)) {
      FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
      Remove<UDS_MountAbility_Sprint>(&pUVar9->OnChangedMountStep_Filtered,this);
    }
    FDS_EntityBase::GetCharStatusData((FDS_EntityBase *)this->_padding_);
    bVar5 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_3b0,(void *)0x0);
    if (bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5869035658516889776>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility_Sprint.cpp"
                         ,0xb0,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_MountAbility_Sprint::OnDeactivateAbility",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_278.Ptr,0xb1,L"charStatusData is nullptr. (%llu)");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
    else {
      this_02 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_3b0);
      pFVar10 = UDS_CharStatusData::GetStatusInfo(this_02,Stamina);
      if (pFVar10 == (FDS_StatusInfo *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_MountAbility_Sprint::OnDeactivateAbility",0x2c,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0xb8,L"statusInfo is nullptr.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5869035658516889785>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility_Sprint.cpp"
                           ,0xb9,"false");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar10->ChangeStatusDelegate,this);
      }
    }
  }
  return;
}

// OnPostActivateAbility @ 14b842d90

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

void __thiscall UDS_MountAbility_Sprint::OnPostActivateAbility(UDS_MountAbility_Sprint *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  code *pcVar4;
  FWeakObjectPtr this_00;
  undefined8 uVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UDS_MountManager *this_01;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar8;
  UDS_MountAbilityData *this_02;
  FGameplayTag *pFVar9;
  UDS_MountEvent *pUVar10;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_03;
  UDS_CharStatusData *this_04;
  FDS_StatusInfo *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_558 [32];
  undefined1 local_518;
  EDS_StateTagType local_517 [2];
  FScriptContainerElement local_515 [5];
  FWeakObjectPtr local_510;
  FWeakObjectPtr local_508;
  undefined1 local_500 [56];
  code *local_4c8;
  ulonglong uStack_4c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_558;
  local_508 = (FWeakObjectPtr)&this->_padding_;
  local_500._0_8_ = this;
  bVar6 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)local_508,(void *)0x0);
  if (bVar6) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"UDS_MountAbility_Sprint::OnPostActivateAbility",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_4b8.Ptr,0x48,L"MountAbilityData is nullptr.");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
    }
  }
  else {
    this->TickEnable = true;
    local_500._32_8_ = UDS_MountManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_MountManager *)local_500._32_8_ != (UDS_MountManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_500._32_8_);
    }
    local_510.ObjectIndex = 0;
    local_510.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_MountManager *)local_500._32_8_ != (UDS_MountManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_500._32_8_);
    }
    FWeakObjectPtr::operator=(&local_510,(FObjectPtr)((longlong)local_500 + 0x20));
    bVar6 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_510,(void *)0x0);
    if (bVar6) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_MountAbility_Sprint::OnPostActivateAbility",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_398.Ptr,0x51,L"mountManager is nullptr.");
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
    }
    else {
      this_01 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_510);
      pTVar8 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_01,Mount_Sprint);
      this_00 = local_508;
      pFVar12 = (pTVar8->AllocatorInstance).Data;
      iVar3 = pTVar8->ArrayNum;
      pFVar1 = pFVar12 + iVar3;
      while( true ) {
        if (pTVar8->ArrayNum != iVar3) {
          local_518 = 0;
          `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_518);
        }
        if (pFVar12 == pFVar1) break;
        FVar2 = *pFVar12;
        this_02 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        UDS_MountAbilityData::ActivateStep(this_02,(EDS_MountStep)FVar2);
        pFVar12 = pFVar12 + 1;
      }
      local_508.ObjectIndex = 0;
      local_508.ObjectSerialNumber = 0;
      local_500._40_8_ = 0;
      FWeakObjectPtr::operator=(&local_508,(FObjectPtr)((longlong)local_500 + 0x28));
      local_517[0] = Mount_Sprint;
      pFVar9 = FDS_GameplayTags::GetStateTag(local_517);
      uVar5 = local_500._0_8_;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)local_500._0_8_,pFVar9);
      if (((((FDS_FilteredEventDelegate<EDS_StatusType_const_> *)(uVar5 + 0xd8))->Subscriptions).
           field_0x9 == '\x01') &&
         (pUVar10 = UDS_MountEvent::GetEvent(), local_500._0_8_ = pUVar10,
         pUVar10 != (UDS_MountEvent *)0x0)) {
        FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
        Remove<UDS_MountAbility_Sprint>
                  (&pUVar10->OnChangedMountStep_Filtered,(UDS_MountAbility_Sprint *)uVar5);
        pFVar12 = (pTVar8->AllocatorInstance).Data;
        iVar3 = pTVar8->ArrayNum;
        pFVar1 = pFVar12 + iVar3;
        while( true ) {
          if (pTVar8->ArrayNum != iVar3) {
            local_517[1] = 0;
            `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_517 + 1);
          }
          if (pFVar12 == pFVar1) break;
          local_515[0] = *pFVar12;
          local_500._8_8_ = OnChangedMountStepInfo;
          local_500._16_8_ = local_500._16_8_ & 0xffffffff00000000;
          this_03 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                    TMapBase<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                    ::FindOrAddImpl<enum_EDS_MountStep_const_&>
                              (&(pUVar10->OnChangedMountStep_Filtered).Subscriptions,
                               (uint)(byte)local_515[0],(EDS_MountStep *)local_515);
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_03,(void *)uVar5);
          local_4c8 = (code *)local_500._8_8_;
          uStack_4c0 = local_500._16_8_;
          TMulticastDelegateRegistration<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>
          ::AddUObject<UDS_MountAbility_Sprint>
                    ((TMulticastDelegateRegistration<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>
                      *)this_03,(UDS_MountAbility_Sprint *)(local_500 + 0x30),(pmf_598a2b29 *)uVar5)
          ;
          pFVar12 = pFVar12 + 1;
          pUVar10 = (UDS_MountEvent *)local_500._0_8_;
        }
      }
      FDS_EntityBase::GetCharStatusData
                (*(FDS_EntityBase **)
                  &(((FDS_FilteredEventDelegate<EDS_MountStep_const_,FDS_MountStepInfo_const_&> *)
                    (uVar5 + 0x80))->Subscriptions).field_0x40);
      bVar6 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)(local_500 + 0x18),
                         (void *)0x0);
      if (bVar6) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5869035658516889708>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility_Sprint.cpp"
                           ,0x6c,"false");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_MountAbility_Sprint::OnPostActivateAbility",0x2e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_278.Ptr,0x6d,L"charStatusData is nullptr. (%llu)");
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
        }
      }
      else {
        this_04 = (UDS_CharStatusData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_500 + 0x18));
        pFVar11 = UDS_CharStatusData::GetStatusInfo(this_04,Stamina);
        if (pFVar11 == (FDS_StatusInfo *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 != (UDS_LogManager *)0x0) {
            pUVar7 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_MountAbility_Sprint::OnPostActivateAbility",0x2e,Yes);
            UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x74,L"statusInfo is nullptr.");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5869035658516889717>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility_Sprint.cpp"
                             ,0x75,"false");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pFVar11->ChangeStatusDelegate,(void *)uVar5);
          local_500._16_8_ = local_500._16_8_ & 0xffffffff00000000;
          local_500._8_8_ = OnChangedStatus_MountStamina;
          TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
          AddUObject<UDS_MountAbility_Sprint>
                    ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                      *)&pFVar11->ChangeStatusDelegate,(UDS_MountAbility_Sprint *)local_500,
                     (pmf_8e069e5f *)uVar5);
        }
      }
    }
  }
  return;
}

// OnTickComponent @ 14b8484d0

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
UDS_MountAbility_Sprint::OnTickComponent(UDS_MountAbility_Sprint *this,float param_1)

{
  UObject *pUVar1;
  EDS_AbilityDeactivateType local_res8 [32];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (((double)CONCAT44((uint)((ulonglong)*(undefined8 *)(pUVar1 + 6) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)*(undefined8 *)(pUVar1 + 6) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000) &&
     ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pUVar1[6].field_0x8 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)*(undefined8 *)&pUVar1[6].field_0x8 &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)) {
    local_res8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}

