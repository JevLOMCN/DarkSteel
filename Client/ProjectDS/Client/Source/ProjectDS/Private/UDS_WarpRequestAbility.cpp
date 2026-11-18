// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b760e00

UClass * __cdecl UDS_WarpRequestAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WarpRequestAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WarpRequestAbility",
               &Z_Registration_Info_UClass_UDS_WarpRequestAbility.InnerSingleton,
               StaticRegisterNativesUDS_WarpRequestAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WarpRequestAbility>,
               InternalVTableHelperCtorCaller<UDS_WarpRequestAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WarpRequestAbility.InnerSingleton;
}

// UDS_WarpRequestAbility @ 14b764380

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

UDS_WarpRequestAbility * __thiscall
UDS_WarpRequestAbility::UDS_WarpRequestAbility(UDS_WarpRequestAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->WarpRequestAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->WarpRequestAbilityData).WeakPtr,(FObjectPtr)local_res8);
  this->bAbleWarpCancel = false;
  return this;
}

// UDS_WarpRequestAbility @ 14b7643e0

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

UDS_WarpRequestAbility * __thiscall
UDS_WarpRequestAbility::UDS_WarpRequestAbility
          (UDS_WarpRequestAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->WarpRequestAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->WarpRequestAbilityData).WeakPtr,(FObjectPtr)local_res8);
  this->bAbleWarpCancel = false;
  return this;
}

// ~UDS_WarpRequestAbility @ 14b765180

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

void __thiscall UDS_WarpRequestAbility::~UDS_WarpRequestAbility(UDS_WarpRequestAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b766250

EDS_AbilityInputPolicy __thiscall
UDS_WarpRequestAbility::GetDefaultInputPolicy(UDS_WarpRequestAbility *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b766550

UClass * __cdecl UDS_WarpRequestAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WarpRequestAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WarpRequestAbility",
               &Z_Registration_Info_UClass_UDS_WarpRequestAbility.InnerSingleton,
               StaticRegisterNativesUDS_WarpRequestAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WarpRequestAbility>,
               InternalVTableHelperCtorCaller<UDS_WarpRequestAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WarpRequestAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_WarpRequestAbility @ 14b766cf0

void __cdecl UDS_WarpRequestAbility::StaticRegisterNativesUDS_WarpRequestAbility(void)

{
  return;
}

// ClearMemberVariables @ 14b86a4c0

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

void __thiscall UDS_WarpRequestAbility::ClearMemberVariables(UDS_WarpRequestAbility *this)

{
  EDS_AbilityInputPolicy local_res8 [32];
  
  this->bAbleWarpCancel = false;
  local_res8[0] = BlockInput;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
  return;
}

// Deactivate @ 14b86e6f0

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

bool __cdecl UDS_WarpRequestAbility::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpRequestAbility::Deactivate",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xce,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = WarpRequest;
      bVar1 = FDS_EntityBase::DeactivateAbility(this,local_148,param_2);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpRequestAbility::Deactivate",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xd5,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// OnCanActivate @ 14b884ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WarpRequestAbility::OnCanActivate(UDS_WarpRequestAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  bool local_148 [4];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->WarpRequestAbilityData,(void *)0x0);
    if (bVar1) {
      local_148[0] = true;
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_WarpRequestAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->WarpRequestAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->WarpRequestAbilityData,(void *)0x0);
    if (!bVar1) {
      local_148[0] = true;
      pUVar4 = FWeakObjectPtr::Get(&(this->WarpRequestAbilityData).WeakPtr);
      bVar1 = DS_AbilityUtil_Warp::IsAbleWarp_SourceEntity
                        ((ulong64 *)&this->_padding_,&pUVar4[2].field_0x8,local_148);
      return bVar1;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpRequestAbility::OnCanActivate",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x19,L"WarpRequestAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b889010

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
UDS_WarpRequestAbility::OnDeactivateAbility(UDS_WarpRequestAbility *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> *this_00;
  EDS_StateTagType local_res8 [8];
  
  local_res8[0] = Warp_Request;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = Warp_CastingAni_ReturnHomeWarp;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = Warp_CastingAni_ResurrectWarp;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = Warp_CastingAni_WarpDeviceWarp;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = Warp_CastingAni_PortalWarp;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  this_00 = &this->WarpRequestAbilityData;
  bVar1 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0)
  ;
  if (!bVar1) {
    if (*param_1 == false) {
      pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if (pUVar2[2].field_0x20 == '\x01') {
        FDS_WarpService::SendWarpCancel();
      }
    }
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pUVar2 + 3));
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2);
  }
  return;
}

// OnPostActivateAbility @ 14b88d3e0

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

void __thiscall UDS_WarpRequestAbility::OnPostActivateAbility(UDS_WarpRequestAbility *this)

{
  TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> *this_00;
  char cVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 auStackY_1c8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_AbilityInputPolicy local_198 [16];
  code *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  UDS_WarpRequestAbility *local_178;
  FDestructionSentinel local_170;
  undefined1 *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this->bAbleWarpCancel = false;
  local_198[0] = BlockInput;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_198);
  this_00 = &this->WarpRequestAbilityData;
  bVar3 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0)
  ;
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b88d4b7;
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WarpRequestAbility::OnPostActivateAbility",0x2d,Yes);
    pwVar9 = L"WarpRequestAbilityData is nullptr.";
    uVar8 = 0x2f;
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    uStack_180 = 0;
    local_188 = OnStartWarpCasting;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar5 + 3),
               (FWriteAccessScope *)&local_170);
    local_158 = &pUVar5[3].field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_158);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WarpRequestAbility____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_178 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_178);
      puVar6[4] = local_188;
      puVar6[5] = CONCAT44(uStack_17c,uStack_180);
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    bVar3 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_WarpRequestAbility::RequestWarp",0x23,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_148.Ptr,0xe5,L"WarpRequestAbilityData is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      cVar1 = pUVar5[2].field_0x8;
      if (cVar1 == '\x01') {
        bVar3 = FDS_WarpService::RequestReturnHomeWarp();
      }
      else if (cVar1 == '\x02') {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        bVar3 = FDS_WarpService::RequestResurrectWarp(&pUVar5[2].field_0x9);
      }
      else if (cVar1 == '\x03') {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar2 = *(int *)&pUVar5[2].field_0x10;
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        bVar3 = FDS_WarpService::RequestWarpDeviceWarp((int *)&pUVar5[2].field_0xc,iVar2);
      }
      else {
        if (cVar1 != '\x04') goto LAB_14b88d6f2;
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        bVar3 = FDS_WarpService::RequestPortalWarp((ulong64 *)&pUVar5[2].field_0x18);
      }
      if (bVar3 == true) {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        pUVar5[2].field_0x20 = 1;
LAB_14b88d6b5:
        local_198[0] = 0x69;
        UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_198);
        return;
      }
      if (bVar3 != false) goto LAB_14b88d6b5;
    }
LAB_14b88d6f2:
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b88d4b7;
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_WarpRequestAbility::OnPostActivateAbility",0x2d,Yes);
    pwVar9 = L"Failed to RequestWarp().";
    uVar8 = 0x38;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar8,pwVar9);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14b88d4b7:
  local_198[0] = EndIfInputWithAniCut;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_198);
  return;
}

// OnStartWarpCasting @ 14b892320

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

void __thiscall UDS_WarpRequestAbility::OnStartWarpCasting(UDS_WarpRequestAbility *this)

{
  char cVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  EDS_AbilityInputPolicy local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->WarpRequestAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpRequestAbility::OnStartWarpCasting",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x111,L"WarpRequestAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = EndIfInputWithAniCut;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->WarpRequestAbilityData).WeakPtr);
    local_148[0] = DS_AbilityUtil_Warp::HasWarpCasting(&pUVar4[2].field_0x8);
    if ((bool)local_148[0]) {
      this->bAbleWarpCancel = true;
      UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_148);
      pUVar4 = FWeakObjectPtr::Get(&(this->WarpRequestAbilityData).WeakPtr);
      cVar1 = pUVar4[2].field_0x8;
      if (cVar1 == '\x01') {
        local_148[0] = 99;
      }
      else if (cVar1 == '\x02') {
        local_148[0] = 100;
      }
      else if (cVar1 == '\x03') {
        local_148[0] = 0x65;
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        local_148[0] = 0x66;
      }
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_148);
    }
  }
  return;
}

// RequestWarp @ 14b8983a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WarpRequestAbility::RequestWarp(UDS_WarpRequestAbility *this)

{
  TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> *this_00;
  char cVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = &this->WarpRequestAbilityData;
  bVar3 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0)
  ;
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpRequestAbility::RequestWarp",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0xe5,L"WarpRequestAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = false;
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    cVar1 = pUVar5[2].field_0x8;
    if (cVar1 == '\x01') {
      bVar3 = FDS_WarpService::RequestReturnHomeWarp();
    }
    else if (cVar1 == '\x02') {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar3 = FDS_WarpService::RequestResurrectWarp(&pUVar5[2].field_0x9);
    }
    else if (cVar1 == '\x03') {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar2 = *(int *)&pUVar5[2].field_0x10;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar3 = FDS_WarpService::RequestWarpDeviceWarp((int *)&pUVar5[2].field_0xc,iVar2);
    }
    else {
      if (cVar1 != '\x04') {
        return false;
      }
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar3 = FDS_WarpService::RequestPortalWarp((ulong64 *)&pUVar5[2].field_0x18);
    }
    if (bVar3 == true) {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pUVar5[2].field_0x20 = 1;
    }
  }
  return bVar3;
}

// SetAbleWarpCancel @ 14b8987a0

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
UDS_WarpRequestAbility::SetAbleWarpCancel(UDS_WarpRequestAbility *this,bool *param_1)

{
  bool bVar1;
  EDS_AbilityInputPolicy local_res8 [32];
  
  bVar1 = *param_1;
  this->bAbleWarpCancel = bVar1;
  local_res8[0] = BlockInput;
  if (bVar1 != false) {
    local_res8[0] = EndIfInput;
  }
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
  return;
}

// TryActivate_PortalWarp @ 14b89b6f0

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

bool __cdecl UDS_WarpRequestAbility::TryActivate_PortalWarp(ulong64 *param_1,ulong64 *param_2)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpRequestAbility::TryActivate_PortalWarp",0x2e,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0xb2;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpRequestAbility::TryActivate_PortalWarp",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xb9,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b89b8dc;
    }
    local_158[0] = WarpRequest;
    UDS_AbilityDataSet::GetAbilityData<UDS_WarpRequestAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      pUVar3[2].field_0x8 = 4;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = WarpRequest;
      *(ulong64 *)&pUVar3[2].field_0x18 = *param_2;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpRequestAbility::TryActivate_PortalWarp",0x2e,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0xc0;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b89b8dc:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// TryActivate_ResurrectWarp @ 14b89bd30

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
UDS_WarpRequestAbility::TryActivate_ResurrectWarp(ulong64 *param_1,EDS_ResurrectType *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpRequestAbility::TryActivate_ResurrectWarp",0x31,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x79;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpRequestAbility::TryActivate_ResurrectWarp",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x80,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b89bed5;
    }
    local_158[0] = WarpRequest;
    UDS_AbilityDataSet::GetAbilityData<UDS_WarpRequestAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      pUVar3[2].field_0x8 = 2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = WarpRequest;
      pUVar3[2].field_0x9 = *param_2;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpRequestAbility::TryActivate_ResurrectWarp",0x31,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0x87;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b89bed5:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// TryActivate_ReturnHomeWarp @ 14b89bf60

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

bool __cdecl UDS_WarpRequestAbility::TryActivate_ReturnHomeWarp(ulong64 *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpRequestAbility::TryActivate_ReturnHomeWarp",0x32,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x5e;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpRequestAbility::TryActivate_ReturnHomeWarp",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x65,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b89c0fd;
    }
    local_158[0] = WarpRequest;
    UDS_AbilityDataSet::GetAbilityData<UDS_WarpRequestAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = WarpRequest;
      pUVar3[2].field_0x8 = 1;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpRequestAbility::TryActivate_ReturnHomeWarp",0x32,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0x6c;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b89c0fd:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// TryActivate_WarpDeviceWarp @ 14b89c3a0

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
UDS_WarpRequestAbility::TryActivate_WarpDeviceWarp(ulong64 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpRequestAbility::TryActivate_WarpDeviceWarp",0x32,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x95;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WarpRequestAbility::TryActivate_WarpDeviceWarp",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x9c,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b89c5a2;
    }
    local_158[0] = WarpRequest;
    UDS_AbilityDataSet::GetAbilityData<UDS_WarpRequestAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      pUVar3[2].field_0x8 = 3;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(int *)&pUVar3[2].field_0xc = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = WarpRequest;
      *(int *)&pUVar3[2].field_0x10 = *param_3;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WarpRequestAbility::TryActivate_WarpDeviceWarp",0x32,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0xa3;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b89c5a2:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

