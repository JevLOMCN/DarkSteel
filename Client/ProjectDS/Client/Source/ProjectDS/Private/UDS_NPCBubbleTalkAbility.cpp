// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b5366d0

UClass * __cdecl UDS_NPCBubbleTalkAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCBubbleTalkAbility",
               &Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbility.InnerSingleton,
               StaticRegisterNativesUDS_NPCBubbleTalkAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCBubbleTalkAbility>,
               InternalVTableHelperCtorCaller<UDS_NPCBubbleTalkAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbility.InnerSingleton;
}

// UDS_NPCBubbleTalkAbility @ 14b538100

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

UDS_NPCBubbleTalkAbility * __thiscall
UDS_NPCBubbleTalkAbility::UDS_NPCBubbleTalkAbility
          (UDS_NPCBubbleTalkAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NPCBubbleTalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_NPCBubbleTalkAbility @ 14b538140

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

UDS_NPCBubbleTalkAbility * __thiscall
UDS_NPCBubbleTalkAbility::UDS_NPCBubbleTalkAbility
          (UDS_NPCBubbleTalkAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NPCBubbleTalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_NPCBubbleTalkAbility @ 14b538de0

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

void __thiscall UDS_NPCBubbleTalkAbility::~UDS_NPCBubbleTalkAbility(UDS_NPCBubbleTalkAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b539fd0

UClass * __cdecl UDS_NPCBubbleTalkAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCBubbleTalkAbility",
               &Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbility.InnerSingleton,
               StaticRegisterNativesUDS_NPCBubbleTalkAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCBubbleTalkAbility>,
               InternalVTableHelperCtorCaller<UDS_NPCBubbleTalkAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCBubbleTalkAbility @ 14b53a930

void __cdecl UDS_NPCBubbleTalkAbility::StaticRegisterNativesUDS_NPCBubbleTalkAbility(void)

{
  return;
}

// OnAbilityAdded @ 14b8371f0

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

void __thiscall UDS_NPCBubbleTalkAbility::OnAbilityAdded(UDS_NPCBubbleTalkAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 auStackY_1b8 [32];
  UDS_NPCBubbleTalkAbility *local_170;
  code *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FDestructionSentinel local_158;
  UObject *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UDS_GameplayAbility::OnAbilityAdded((UDS_GameplayAbility *)this);
  TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_NPCBubbleTalkAbilityData>
                    ((ulong64 *)&local_170,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
  (this->NPCBubbleTalkAbilityData).WeakPtr = *TVar2.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCBubbleTalkAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCBubbleTalkAbility::OnAbilityAdded",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x14,L"NPCBubbleTalkAbilityData is nullptr. (%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->NPCBubbleTalkAbilityData).WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar4[2].field_0x20);
    pUVar4 = FWeakObjectPtr::Get(&(this->NPCBubbleTalkAbilityData).WeakPtr);
    uStack_160 = 0;
    local_168 = RequestBubbleTalk;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar4[2].field_0x20,
               (FWriteAccessScope *)&local_158);
    local_140 = pUVar4 + 3;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_140);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NPCBubbleTalkAbility____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_NPCBubbleTalkAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_170 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_NPCBubbleTalkAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_170);
      puVar5[4] = local_168;
      puVar5[5] = CONCAT44(uStack_15c,uStack_160);
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
  }
  return;
}

// OnCanActivate @ 14b838d70

bool __thiscall UDS_NPCBubbleTalkAbility::OnCanActivate(UDS_NPCBubbleTalkAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b83ed90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NPCBubbleTalkAbility::OnDeactivateAbility(UDS_NPCBubbleTalkAbility *this,bool *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_BubbleTalkManager *this_00;
  UDS_NPCBubbleTalkAbilityData *this_01;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_BubbleTalkManager *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_140 = UDS_BubbleTalkManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_BubbleTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_BubbleTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    this_00 = (UDS_BubbleTalkManager *)FWeakObjectPtr::Get(&local_148);
    UDS_BubbleTalkManager::UnRegisterBubbleTalk(this_00,this->_padding_);
    this_01 = (UDS_NPCBubbleTalkAbilityData *)
              FWeakObjectPtr::Get(&(this->NPCBubbleTalkAbilityData).WeakPtr);
    UDS_NPCBubbleTalkAbilityData::DeactivateBubbleTalk(this_01);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCBubbleTalkAbility::OnDeactivateAbility",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x46,L"BubbleTalkManager is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnPostActivateAbility @ 14b843500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCBubbleTalkAbility::OnPostActivateAbility(UDS_NPCBubbleTalkAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_BubbleTalkManager *this_00;
  UDS_NPCBubbleTalkAbilityData *this_01;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  FWeakObjectPtr local_148;
  UDS_BubbleTalkManager *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCBubbleTalkAbilityData).WeakPtr);
  if (bVar1) {
    local_140 = UDS_BubbleTalkManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UDS_BubbleTalkManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UDS_BubbleTalkManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
    bVar1 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar1) {
      this_00 = (UDS_BubbleTalkManager *)FWeakObjectPtr::Get(&local_148);
      UDS_BubbleTalkManager::RegisterBubbleTalk(this_00,this->_padding_);
      this_01 = (UDS_NPCBubbleTalkAbilityData *)
                FWeakObjectPtr::Get(&(this->NPCBubbleTalkAbilityData).WeakPtr);
      UDS_NPCBubbleTalkAbilityData::ActivateBubbleTalk(this_01);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCBubbleTalkAbility::OnPostActivateAbility",0x2f,Yes);
    pwVar4 = L"BubbleTalkManager is not valid.";
    uVar3 = 0x34;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCBubbleTalkAbility::OnPostActivateAbility",0x2f,Yes);
    pwVar4 = L"NPCBubbleTalkAbilityData is nullptr.";
    uVar3 = 0x2c;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// RequestBubbleTalk @ 14b84d3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCBubbleTalkAbility::RequestBubbleTalk(UDS_NPCBubbleTalkAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NPCBubbleTalkAbilityData *this_00;
  UDS_BubbleTalkManager *this_01;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_BubbleTalkManager *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_140 = UDS_BubbleTalkManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_BubbleTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_BubbleTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    this_00 = (UDS_NPCBubbleTalkAbilityData *)
              FWeakObjectPtr::Get(&(this->NPCBubbleTalkAbilityData).WeakPtr);
    bVar1 = UDS_NPCBubbleTalkAbilityData::CanRequestBubbleTalk(this_00);
    if (bVar1) {
      this_01 = (UDS_BubbleTalkManager *)FWeakObjectPtr::Get(&local_148);
      UDS_BubbleTalkManager::TryRequestBubbleTalk(this_01,this->_padding_);
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCBubbleTalkAbility::RequestBubbleTalk",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x55,L"BubbleTalkManager is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

