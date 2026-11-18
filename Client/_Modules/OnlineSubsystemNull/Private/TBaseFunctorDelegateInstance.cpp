// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 198

// CreateCopy @ 14ed1e9c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1ea40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14ed1ea90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1eb30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
    ::FString::FString((FString *)(puVar1 + 6),(FString *)((longlong)this + 0x30));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1ebe0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
    ::FString::FString((FString *)(puVar1 + 6),(FString *)((longlong)this + 0x30));
  }
  return;
}

// CreateCopy @ 14ed1ec50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               (puVar3 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
    ::FString::FString((FString *)(puVar3 + 6),(FString *)((longlong)this + 0x30));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ed1ecfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
    return;
  }
  return;
}

// CreateCopy @ 14ed1ed10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
    ::FString::FString((FString *)(puVar1 + 6),(FString *)((longlong)this + 0x30));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1edc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
    ::FString::FString((FString *)(puVar1 + 6),(FString *)((longlong)this + 0x30));
  }
  return;
}

// CreateCopy @ 14ed1ee30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *)(puVar3 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
    ::FString::FString((FString *)(puVar3 + 6),(FString *)((longlong)this + 0x30));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ed1eedd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
    return;
  }
  return;
}

// CreateCopy @ 14ed1eef0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlineExternalUINull::OnIdentityLoginComplete_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1ef60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlineExternalUINull::OnIdentityLoginComplete_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14ed1efa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlineExternalUINull::OnIdentityLoginComplete_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1f030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),
               (TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1f0c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),
               (TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
    return;
  }
  return;
}

// CreateCopy @ 14ed1f120

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               (puVar3 + 3),
               (TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1f1c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar2 + 5),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x28));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1f260

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar2 + 5),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x28));
    return;
  }
  return;
}

// CreateCopy @ 14ed1f2d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar4 + 5),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x28));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1f390

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0xa0,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::RedeemCode_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1f400

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0xa0,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::RedeemCode_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14ed1f440

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0xa0,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::RedeemCode_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1f4d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)(puVar2 + 5),
               (TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x28));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1f570

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)(puVar2 + 5),
               (TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x28));
    return;
  }
  return;
}

// CreateCopy @ 14ed1f5e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)(puVar4 + 5),
               (TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x28));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1f6a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)this + 0x20);
    TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 5),
               (TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x28));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1f740

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)this + 0x20);
    TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 5),
               (TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x28));
    return;
  }
  return;
}

// CreateCopy @ 14ed1f7a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((longlong)this + 0x20);
    TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)(puVar3 + 5),
               (TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x28));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1f850

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::`5'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 3),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1f8e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::`5'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 3),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
    return;
  }
  return;
}

// CreateCopy @ 14ed1f940

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::`5'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar3 + 3),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1f9e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::`5'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 3),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1fa70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::`5'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 3),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
    return;
  }
  return;
}

// CreateCopy @ 14ed1fad0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::`5'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar3 + 3),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1fb70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::`5'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1fc00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::`5'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
    return;
  }
  return;
}

// CreateCopy @ 14ed1fc60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::`5'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               (puVar3 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1fd00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x70,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::Checkout_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1fd70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x70,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::Checkout_::__l2::<lambda_2>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14ed1fdb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x70,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::Checkout_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1fe40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x68,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::Checkout_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed1feb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x68,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::Checkout_::__l2::<lambda_2>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14ed1fef0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x68,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::Checkout_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed1ff80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::`2'::<lambda_2>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed20010

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::`2'::<lambda_2>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
    return;
  }
  return;
}

// CreateCopy @ 14ed20070

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::`2'::<lambda_2>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               (puVar3 + 3),
               (TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed20110

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::`8'::<lambda_2>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 3),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed201a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::`8'::<lambda_2>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 3),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
    return;
  }
  return;
}

// CreateCopy @ 14ed20200

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::`8'::<lambda_2>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar3 + 3),
               (TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x18));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed202a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_FMessageSanitizerNull::SanitizeDisplayName_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed20310

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_FMessageSanitizerNull::SanitizeDisplayName_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14ed20350

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_FMessageSanitizerNull::SanitizeDisplayName_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ed203e0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_FMessageSanitizerNull::SanitizeDisplayNames_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ed20450

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_FMessageSanitizerNull::SanitizeDisplayNames_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14ed20490

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_FMessageSanitizerNull::SanitizeDisplayNames_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ed22770

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
::Execute(void *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014ed2277e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xa8))();
  return;
}

// Execute @ 14ed22790

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::Execute(void *this)

{
  ``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed227a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::Execute(void *this)

{
  ``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed227b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed227c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
::Execute(void *this)

{
  longlong *plVar1;
  FString local_38;
  FReadAccessScope local_28;
  
  ::FString::FString(&local_38,L"FOnlineStoreV2Null::QueryCategories Not Implemented");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
             &local_28);
  if ((*(int *)((longlong)this + 0x28) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 0x20), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// Execute @ 14ed22830

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed22840

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed22850

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed22860

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed22870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
::Execute(void *this)

{
  `FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed22880

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
::Execute(void *this)

{
  `FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed22890

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
::Execute(void *this)

{
  `FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed228a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::Execute(void *this)

{
  `FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed228b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::Execute(void *this)

{
  `FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed228c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
::Execute(void *this)

{
  `FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed228d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
::Execute(void *this)

{
  `FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ed228e0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  bool bVar1;
  
  bVar1 = `FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18),param_1);
  return bVar1;
}

// Execute @ 14ed228f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  bool bVar1;
  
  bVar1 = `FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18),param_1);
  return bVar1;
}

// ExecuteIfSafe @ 14ed22ba0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xa8))();
  return true;
}

// ExecuteIfSafe @ 14ed22bd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  ``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22bf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  ``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22c10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22c30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  longlong *plVar1;
  FString local_38;
  FReadAccessScope local_28;
  
  ::FString::FString(&local_38,L"FOnlineStoreV2Null::QueryCategories Not Implemented");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
             &local_28);
  if ((*(int *)((longlong)this + 0x28) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 0x20), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 14ed22ca0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22cc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22ce0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22d00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22d20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22d40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22d60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22d80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  `FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22da0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  `FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22dc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  `FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22de0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  `FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ed22e00

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14ed22e20

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14ed24ad0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24ae0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24af0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24b00

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24b10

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24b20

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24b30

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24b40

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24b50

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24b60

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24b70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24b80

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24b90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24ba0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24bb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24bc0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24bd0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ed24be0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14ed25af0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25b00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25b10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25b20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25b30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25b40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25b50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25b60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25b70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25b80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25b90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25ba0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25bb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25bc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25bd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25be0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25bf0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ed25c00

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14ed26690

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed266a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed266b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed266c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed266d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed266e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed266f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed26700

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed26710

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed26720

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed26730

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed26740

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed26750

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed26760

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed26770

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed26780

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed26790

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ed267a0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14ed26c60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26c70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26c80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26c90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26ca0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26cb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26cc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26cd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26ce0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26cf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26d00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26d10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26d20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26d30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26d40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26d50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26d60

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ed26d70

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14ed27bd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27be0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27bf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27c00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27c10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27c20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27c30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27c40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27c50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27c60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27c70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27c80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27c90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27ca0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27cb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27cc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27cd0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ed27ce0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14ed31af0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31b00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31b10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31b20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31b30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31b40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31b50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31b60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31b70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31b80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31b90

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31ba0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31bb0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31bc0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31bd0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31be0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31bf0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ed31c00

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

