// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 36

// CreateCopy @ 14ec69470

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::`80'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec69500

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::`80'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14ec69550

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::`80'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec69600

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFAuthLogin_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)this + 0x20);
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 5),
               (TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x28));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec696a0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFAuthLogin_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)this + 0x20);
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 5),
               (TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x28));
    return;
  }
  return;
}

// CreateCopy @ 14ec69700

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFAuthLogin_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((longlong)this + 0x20);
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               (puVar3 + 5),
               (TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x28));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec697b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec69850

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
    return;
  }
  return;
}

// CreateCopy @ 14ec698c0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)(puVar3 + 4),
               (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ec6f560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::Execute(void *this,FOnlineError *param_1)

{
  AOnlineBeaconHost *this_00;
  UNetConnection *pUVar1;
  
  this_00 = *(AOnlineBeaconHost **)((longlong)this + 0x20);
  pUVar1 = (UNetConnection *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  AOnlineBeaconHost::OnAuthenticationVerificationComplete(this_00,pUVar1,param_1);
  return;
}

// Execute @ 14ec6f5a0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::Execute(void *this,TOnlineResult<UE::Online::FAuthLogin> *param_1)

{
  `UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1);
  return;
}

// Execute @ 14ec6f5b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::Execute(void *this,bool param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20),
             &local_28);
  if ((*(int *)((longlong)this + 0x30) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 0x28), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ExecuteIfSafe @ 14ec71ab0

/* WARNING: Removing unreachable block (ram,0x00014ec71b1e) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::ExecuteIfSafe(void *this,FOnlineError *param_1)

{
  AOnlineBeaconHost *this_00;
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNetConnection *pUVar3;
  UObject *pUVar4;
  UObject *local_res8;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    this_00 = *(AOnlineBeaconHost **)((longlong)this + 0x20);
    pUVar3 = (UNetConnection *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
    AOnlineBeaconHost::OnAuthenticationVerificationComplete(this_00,pUVar3,param_1);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14ec71b80

/* WARNING: Removing unreachable block (ram,0x00014ec71bee) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::ExecuteIfSafe(void *this,TOnlineResult<UE::Online::FAuthLogin> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  pUVar3 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar3 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    `UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14ec71c50

/* WARNING: Removing unreachable block (ram,0x00014ec71cbf) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this,bool param_1)

{
  longlong *plVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UObject *pUVar4;
  UObject *local_res8;
  FReadAccessScope local_38;
  
  pUVar4 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    TVar3 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20),
               &local_38);
    if ((*(int *)((longlong)this + 0x30) != 0) &&
       (plVar1 = *(longlong **)((longlong)this + 0x28), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return bVar2;
}

// GetBoundProgramCounterForTimerManager @ 14ec73ce0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ec73cf0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ec73d00

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14ec76310

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76320

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76330

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14ec79550

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14ec79560

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14ec79570

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14ec7e4b0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e4e0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e510

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14ec81400

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81420

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81440

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81f80

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14ec81f90

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14ec81fa0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14ec9f190

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f1a0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f1b0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

