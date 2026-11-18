// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 36

// CreateCopy @ 14a7d0940

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::`37'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7d09d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::`37'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14a7d0a20

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::`37'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7d0ad0

void __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7d0b60

void __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14a7d0bb0

void __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7d0c60

void __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::`85'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7d0cf0

void __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::`85'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14a7d0d40

void __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::`85'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a7d6da0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
::Execute(void *this)

{
  UWidget::InvalidateLayoutAndVolatility(*(UWidget **)((longlong)this + 0x20));
  return;
}

// Execute @ 14a7d6db0

bool __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
::Execute(void *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UCommonBoundActionBar::DoAnyActionButtonsHaveMouseCapture
                    (*(UCommonBoundActionBar **)((longlong)this + 0x20));
  if (!bVar1) {
    UCommonBoundActionBar::HandleDeferredDisplayUpdate
              (*(UCommonBoundActionBar **)((longlong)this + 0x20));
    return false;
  }
  return true;
}

// Execute @ 14a7d6df0

bool __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
::Execute(void *this,float param_1)

{
  bool bVar1;
  
  bVar1 = `UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x20),param_1);
  return bVar1;
}

// ExecuteIfSafe @ 14a7dad90

/* WARNING: Removing unreachable block (ram,0x00014a7dadbc) */
/* WARNING: Removing unreachable block (ram,0x00014a7dae00) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
::ExecuteIfSafe(void *this)

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
    UWidget::InvalidateLayoutAndVolatility(*(UWidget **)((longlong)this + 0x20));
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14a7dae50

/* WARNING: Removing unreachable block (ram,0x00014a7dae7c) */
/* WARNING: Removing unreachable block (ram,0x00014a7daec0) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  undefined8 local_res8;
  
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
    bVar1 = UCommonBoundActionBar::DoAnyActionButtonsHaveMouseCapture
                      (*(UCommonBoundActionBar **)((longlong)this + 0x20));
    if (!bVar1) {
      UCommonBoundActionBar::HandleDeferredDisplayUpdate
                (*(UCommonBoundActionBar **)((longlong)this + 0x20));
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14a7daf20

/* WARNING: Removing unreachable block (ram,0x00014a7daf8e) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

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
    `UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0c60

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0c70

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0c80

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14a7e40a0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e40b0

void * __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e40c0

void * __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e9760

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e9770

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e9780

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14a7f1fc0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1ff0

bool __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f2020

bool __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14a7f5230

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5250

bool __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5270

bool __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7230

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14a7f7240

bool __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14a7f7250

bool __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14a824810

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::HandleActiveIndexChanged'::__l37::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824820

FName __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824830

FName __thiscall
TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonActivatableWidgetContainerBase::ReleaseWidget'::__l85::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

