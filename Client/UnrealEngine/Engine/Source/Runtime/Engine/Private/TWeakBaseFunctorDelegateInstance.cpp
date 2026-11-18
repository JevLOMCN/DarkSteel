// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 120

// CreateCopy @ 14738c5b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14738c640

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14738c690

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14738c740

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEBU__TBox_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`8'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14738c7d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEBU__TBox_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`8'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14738c820

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEBU__TBox_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`8'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14738c8d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14738c960

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14738c9b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 147391530

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
::Execute(void *this,FNavigationElement *param_1,FNavigableGeometryExport *param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(**(code **)(**(longlong **)((longlong)this + 0x20) + 0x60))
                          (*(longlong **)((longlong)this + 0x20),param_2);
  *param_3 = bVar1;
  return;
}

// Execute @ 147391560

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
::Execute(void *this,FNavigationElement *param_1,FNavigableGeometryExport *param_2,
         TBox<double> *param_3)

{
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00014739159e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x30))
            (*(longlong **)((longlong)this + 0x20),param_2,param_3);
  return;
}

// Execute @ 1473915b0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
::Execute(void *this,FNavigationElement *param_1,FNavigationRelevantData *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001473915ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))
            (*(longlong **)((longlong)this + 0x20),param_2);
  return;
}

// ExecuteIfSafe @ 147392830

/* WARNING: Removing unreachable block (ram,0x0001473928a6) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,FNavigationElement *param_1,FNavigableGeometryExport *param_2,
               bool *param_3)

{
  bool bVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UObject *pUVar4;
  UObject *local_res8;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar3 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    bVar2 = (bool)(**(code **)(**(longlong **)((longlong)this + 0x20) + 0x60))
                            (*(longlong **)((longlong)this + 0x20),param_2);
    *param_3 = bVar2;
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return bVar1;
}

// ExecuteIfSafe @ 147392910

/* WARNING: Removing unreachable block (ram,0x000147392986) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
::ExecuteIfSafe(void *this,FNavigationElement *param_1,FNavigableGeometryExport *param_2,
               TBox<double> *param_3)

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
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x40))();
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x30))
              (*(longlong **)((longlong)this + 0x20),param_2,param_3);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 1473929f0

/* WARNING: Removing unreachable block (ram,0x000147392a5e) */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FNavigationElement *param_1,FNavigationRelevantData *param_2)

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
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))
              (*(longlong **)((longlong)this + 0x20),param_2);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 147399960

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 147399970

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 147399980

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14739ebd0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14739ebe0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14739ebf0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 1473a1a70

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 1473a1a80

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 1473a1a90

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 1473a2c10

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 1473a2c40

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 1473a2c70

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 1473a6640

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1473a6660

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1473a6680

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1473a7840

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 1473a7850

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 1473a7860

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 1473ba760

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1473ba770

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1473ba780

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1479bb4f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1479bb580

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 1479bb5d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1479bb680

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1479bb710

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 1479bb760

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1479c05f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
::Execute(void *this,FSoftObjectPath *param_1,UObject *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (param_2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      lVar2 = *(longlong *)((longlong)this + 0x20);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      *(UObject **)(lVar2 + 0x668) = param_2;
      UActorComponent::MarkRenderStateDirty(*(UActorComponent **)((longlong)this + 0x20));
    }
  }
  return;
}

// Execute @ 1479c0670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
::Execute(void *this,FSoftObjectPath *param_1,UObject *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (param_2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      lVar2 = *(longlong *)((longlong)this + 0x20);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      *(UObject **)(lVar2 + 0x670) = param_2;
      UActorComponent::MarkRenderStateDirty(*(UActorComponent **)((longlong)this + 0x20));
    }
  }
  return;
}

// ExecuteIfSafe @ 1479c0970

/* WARNING: Removing unreachable block (ram,0x0001479c09e3) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
::ExecuteIfSafe(void *this,FSoftObjectPath *param_1,UObject *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *local_res8;
  
  pUVar6 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    TVar4 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar6 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar3) {
    if (param_2 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        lVar2 = *(longlong *)((longlong)this + 0x20);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_2);
        }
        *(UObject **)(lVar2 + 0x668) = param_2;
        UActorComponent::MarkRenderStateDirty(*(UActorComponent **)((longlong)this + 0x20));
      }
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (pUVar6 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
  }
  return bVar3;
}

// ExecuteIfSafe @ 1479c0a80

/* WARNING: Removing unreachable block (ram,0x0001479c0af3) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
::ExecuteIfSafe(void *this,FSoftObjectPath *param_1,UObject *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *local_res8;
  
  pUVar6 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    TVar4 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar6 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar3) {
    if (param_2 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        lVar2 = *(longlong *)((longlong)this + 0x20);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_2);
        }
        *(UObject **)(lVar2 + 0x670) = param_2;
        UActorComponent::MarkRenderStateDirty(*(UActorComponent **)((longlong)this + 0x20));
      }
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (pUVar6 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
  }
  return bVar3;
}

// GetBoundProgramCounterForTimerManager @ 1479c45e0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1479c45f0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1479ccb20

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 1479ccb30

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 1479d3c10

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 1479d3c20

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 1479d59d0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 1479d5a00

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 1479da440

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1479da460

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1479da840

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 1479da850

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 1479ef9a0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l8::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1479ef9b0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::__l11::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 147bd0640

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::`18'::<lambda_1>_>
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

// CreateCopy @ 147bd06d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::`18'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 147bd0720

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::`18'::<lambda_1>_>
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

// CreateCopy @ 147bd07d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
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
    TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,_ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 147bd0840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,_ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 147bd0880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
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
    TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,_ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 147bda3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
::Execute(void *this,TSharedRef<SWindow,1> *param_1)

{
  UGameEngine::OnGameWindowMoved_SavePosition
            (*(UGameEngine **)((longlong)this + 0x28),param_1,*(int *)((longlong)this + 0x20));
  return;
}

// Execute @ 147bda3f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
::Execute(void *this,FString *param_1,int param_2,USaveGame *param_3)

{
  `ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 147bdb580

/* WARNING: Removing unreachable block (ram,0x000147bdb5b4) */
/* WARNING: Removing unreachable block (ram,0x000147bdb5f8) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
::ExecuteIfSafe(void *this,TSharedRef<SWindow,1> *param_1)

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
    UGameEngine::OnGameWindowMoved_SavePosition
              (*(UGameEngine **)((longlong)this + 0x28),param_1,*(int *)((longlong)this + 0x20));
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 147bdb650

/* WARNING: Removing unreachable block (ram,0x000147bdb6ce) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FString *param_1,int param_2,USaveGame *param_3)

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
    `ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1,param_2,param_3);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 147bdec50

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 147bdec60

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 147be39b0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 147be39c0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 147bec620

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 147bec630

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 147bee760

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 147bee790

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 147bf0790

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 147bf07b0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 147bf13e0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 147bf13f0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 147c08620

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::__l18::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 147c08630

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14809cca0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14809cd30

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14809cd80

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14809f9f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
::Execute(void *this,FName *param_1,UPackage *param_2,Type param_3)

{
  byte bVar1;
  FNetworkGUID FVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  FName FVar5;
  FNetGUIDCache *this_00;
  code *pcVar6;
  double dVar7;
  TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  UObject *pUVar13;
  longlong lVar14;
  double *pdVar15;
  char *pcVar16;
  FString *pFVar17;
  size_t sVar18;
  ulonglong uVar19;
  FNetworkGUID_u_0 *pFVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  ulonglong _Size;
  FNetworkGUID_u_0 *this_01;
  wchar_t *_Str;
  FNetworkGUID_u_0 *pFVar23;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 auStackY_1198 [32];
  undefined1 auStack_1168 [8];
  int iStack_1160;
  undefined4 uStack_115c;
  FLLMScope aFStack_1158 [2];
  int *piStack_1150;
  FName FStack_1148;
  UPackage *pUStack_1140;
  FNetworkGUID_u_0 *pFStack_1138;
  TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *pTStack_1130;
  FName FStack_1128;
  FName FStack_1120;
  FMemScope FStack_1118;
  FDelinquencyNameTimePair FStack_1110;
  FString FStack_1100;
  FString FStack_10f0;
  FString FStack_10e0;
  FString FStack_10d0;
  FString FStack_10c0;
  FString FStack_10b0;
  FString FStack_10a0;
  FString FStack_1090;
  FString FStack_1080;
  undefined8 uStack_106d;
  undefined1 auStack_1065 [4093];
  ulonglong uStack_68;
  undefined8 uStack_40;
  
  this_00 = *(FNetGUIDCache **)(*(longlong *)((longlong)this + 0x20) + 0x1c8);
  if (this_00 == (FNetGUIDCache *)0x0) {
    return;
  }
  uStack_40 = 0x14809760e;
  uStack_68 = __security_cookie.value ^ (ulonglong)auStackY_1198;
  pUStack_1140 = param_2;
  FLLMScope::FLLMScope(aFStack_1158,LLMTagDeclaration_GuidCache.UniqueName,false,None,Default,true);
  FStack_1148 = LLMTagDeclaration_GuidCache.UniqueName;
  FMemScope::FMemScope(&FStack_1118,&FStack_1148,true);
  if (((param_2 != (UPackage *)0x0) && (bVar9 = UPackage::IsFullyLoaded(param_2), !bVar9)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package == nullptr || Package->IsFullyLoaded()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xe4f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTStack_1130 = TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
                         *)&this_00->PendingAsyncLoadRequests,*param_1);
  pFVar23 = (FNetworkGUID_u_0 *)&pTStack_1130->field_0x8;
  if (pTStack_1130 == (TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *)0x0) {
    pFVar23 = (FNetworkGUID_u_0 *)0x0;
  }
  if (pFVar23 == (FNetworkGUID_u_0 *)0x0) {
    if (1 < (byte)LogNetPackageMap._0_1_) {
      ::FName::ToString(param_1,&FStack_1080);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (FStack_1080.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1080.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_148097ccc;
  }
  piStack_1150 = (int *)&pTStack_1130->field_0x20;
  uStack_40 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if ((FNetworkGUID_u_0 *)pFVar23[2].ObjectId != (FNetworkGUID_u_0 *)0x0) {
    pFVar23 = (FNetworkGUID_u_0 *)pFVar23[2].ObjectId;
  }
  if (pTStack_1130 == (TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *)0x0) {
    piStack_1150 = (int *)&DAT_00000018;
  }
  iStack_1160 = *piStack_1150;
  pFStack_1138 = pFVar23 + iStack_1160;
  while( true ) {
    pFVar20 = pFStack_1138;
    if (*piStack_1150 != iStack_1160) {
      auStack_1168[0] = 0;
      `TCheckedPointerIterator<FNetworkGUID_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_1168);
    }
    pTVar8 = pTStack_1130;
    if (pFVar23 == pFVar20) break;
    FVar2.field0_0x0 = (FNetworkGUID_u_0)pFVar23->ObjectId;
    if (*(int *)&(this_00->ObjectLookup).field_0x8 != *(int *)&(this_00->ObjectLookup).field_0x34) {
      puVar3 = *(undefined1 **)&(this_00->ObjectLookup).field_0x40;
      puVar21 = &(this_00->ObjectLookup).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar21 = puVar3;
      }
      uVar10 = *(uint *)(puVar21 +
                        (ulonglong)
                        (*(int *)&(this_00->ObjectLookup).field_0x48 - 1U &
                        FVar2.field0_0x0._4_4_ * 0x17 + FVar2.field0_0x0.Value) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          pFVar20 = (FNetworkGUID_u_0 *)
                    ((longlong)(int)uVar10 * 0x40 + *(longlong *)&this_00->ObjectLookup);
          if ((FNetworkGUID_u_0)pFVar20->ObjectId == FVar2.field0_0x0) {
            this_01 = pFVar20 + 1;
            if (pFVar20 == (FNetworkGUID_u_0 *)0x0) {
              this_01 = (FNetworkGUID_u_0 *)0x0;
            }
            if (this_01 != (FNetworkGUID_u_0 *)0x0) {
              if (((*(byte *)(this_01 + 5) & 4) == 0) && (1 < (byte)LogNetPackageMap._0_1_)) {
                ::FString::PrintfImpl(&FStack_1100,L"%llu");
                ::FName::ToString(param_1,&FStack_10d0);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
                if (FStack_10d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_10d0.Data.AllocatorInstance.Data);
                }
                if (FStack_1100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_1100.Data.AllocatorInstance.Data);
                }
              }
              bVar1 = *(byte *)(this_01 + 5);
              *(byte *)(this_01 + 5) = bVar1 & 0xfb;
              if ((pUStack_1140 == (UPackage *)0x0) &&
                 (*(byte *)(this_01 + 5) = bVar1 & 0xfb | 8, 1 < (byte)LogNetPackageMap._0_1_)) {
                ::FString::PrintfImpl(&FStack_10f0,L"%llu");
                ::FName::ToString(param_1,&FStack_10c0);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
                if (FStack_10c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_10c0.Data.AllocatorInstance.Data);
                }
                if (FStack_10f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_10f0.Data.AllocatorInstance.Data);
                }
              }
              pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
              if (pUVar13 != (UObject *)0x0) {
                FNetGUIDCache::UpdateQueuedBunchObjectReference(this_00,FVar2,pUVar13);
                lVar14 = (**(code **)(*(longlong *)pUVar13 + 0x180))(pUVar13);
                if ((lVar14 != 0) &&
                   (plVar4 = *(longlong **)(lVar14 + 0x1b0), plVar4 != (longlong *)0x0)) {
                  (**(code **)(*plVar4 + 0x760))(plVar4,pUVar13);
                }
              }
              goto LAB_148097951;
            }
            break;
          }
          uVar10 = pFVar20[7].Value;
        } while (uVar10 != 0xffffffff);
      }
    }
    if (1 < (byte)LogNetPackageMap._0_1_) {
      ::FString::PrintfImpl(&FStack_10e0,L"%llu");
      ::FName::ToString(param_1,&FStack_10b0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (FStack_10b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_10b0.Data.AllocatorInstance.Data);
      }
      if (FStack_10e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_10e0.Data.AllocatorInstance.Data);
      }
    }
LAB_148097951:
    pFVar23 = pFVar23 + 1;
  }
  pdVar15 = (double *)&pTStack_1130->field_0x28;
  if (pTStack_1130 == (TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *)0x0) {
    pdVar15 = (double *)&DAT_00000020;
  }
  dVar7 = this_00->Driver->ElapsedTime - *pdVar15;
  if ((0.0 < GGuidCacheTrackAsyncLoadingGUIDThreshold) &&
     ((double)GGuidCacheTrackAsyncLoadingGUIDThreshold <= dVar7)) {
    FStack_1110.Name = *param_1;
    FStack_1110.TimeSeconds = (float)dVar7;
    FDelinquencyAnalytics::Add(&(this_00->DelinquentAsyncLoads).DelinquentAsyncLoads,&FStack_1110);
  }
  pcVar16 = &pTVar8->field_0x30;
  if (pTVar8 == (TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *)0x0) {
    pcVar16 = &DAT_00000028;
  }
  if (((*pcVar16 != '\0') && (0.0 < GGuidCacheTrackAsyncLoadingGUIDThresholdOwner)) &&
     (((double)GGuidCacheTrackAsyncLoadingGUIDThresholdOwner <= dVar7 &&
      ((this_00->Driver->ServerConnection).field0_0x0.DebugPtr != (UNetConnection *)0x0)))) {
    ::FName::ToString(param_1,&FStack_10a0);
    FCsvProfiler::RecordEventfInternal
              (_GCsvCategory_PackageMap.Index,
               L"Owner Net Stall Async Load (Package=%s|LoadTime=%.2f)");
    if (FStack_10a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_10a0.Data.AllocatorInstance.Data);
    }
    if (-1 < BookmarkChannel->Enabled) {
      if (__BookmarkPoint3720 == false) {
        FMiscTrace::OutputBookmarkSpec
                  (&__BookmarkPoint3720,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                   ,0xe88,L"PackageMap/Owner Net Stall Async Load (Package=%s|LoadTime=%.2f)");
        __BookmarkPoint3720 = true;
      }
      pFVar17 = ::FName::ToString(param_1,&FStack_1090);
      if ((pFVar17->Data).ArrayNum == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
      }
      uVar10 = CallstackTrace_GetCurrentId();
      if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
        uVar22 = 0xd;
        uStack_106d._5_2_ = 0xc202;
        auStack_1065._0_2_ = 0;
        pdVar15 = (double *)(auStack_1065 + 2);
LAB_148097ba3:
        uStack_106d._7_1_ = 0x88;
        *pdVar15 = dVar7;
        if (((longlong)pdVar15 + (8 - ((longlong)&uStack_106d + 5)) != uVar22) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("PayloadBufferPtr - Buffer == FormatArgsSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                               ,0x44,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((ushort)uVar22 != 0) {
          FMiscTrace::OutputBookmarkInternal
                    (&__BookmarkPoint3720,uVar10,(ushort)uVar22,
                     (uchar *)((longlong)&uStack_106d + 5));
        }
      }
      else {
        sVar18 = wcslen(_Str);
        iVar11 = (int)sVar18 * 2 + 2;
        if (0xffff < iVar11) {
          iVar11 = 0xffff;
        }
        uVar22 = (longlong)iVar11 + 0xb;
        if (uVar22 < 0x1001) {
          uStack_106d._5_2_ = 0xc202;
          sVar18 = wcslen(_Str);
          uVar12 = (int)sVar18 * 2 + 2;
          uVar19 = (ulonglong)uVar12;
          if (0xffff < (int)uVar12) {
            uVar19 = 0xffff;
          }
          _Size = uVar19 & 0xffff;
          memcpy(auStack_1065,_Str,_Size);
          if ((short)uVar19 == -1) {
            iStack_1160 = 0x2e002e;
            uStack_115c = 0x2e;
            *(undefined8 *)((longlong)&uStack_106d + (_Size - ((uint)_Size & 1))) = 0x2e002e002e;
          }
          pdVar15 = (double *)(auStack_1065 + _Size);
          goto LAB_148097ba3;
        }
      }
      if (FStack_1090.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1090.Data.AllocatorInstance.Data);
      }
    }
  }
  FVar5 = *param_1;
  FStack_1128 = FVar5;
  if (*(int *)&(this_00->PendingAsyncLoadRequests).field_0x8 !=
      *(int *)&(this_00->PendingAsyncLoadRequests).field_0x34) {
    uVar10 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
                         *)&this_00->PendingAsyncLoadRequests,FVar5.Number + uVar10,&FStack_1128);
  }
  FVar5 = *param_1;
  FStack_1120 = FVar5;
  if (*(int *)&(this_00->PendingAsyncPackages).field_0x8 !=
      *(int *)&(this_00->PendingAsyncPackages).field_0x34) {
    uVar10 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    TSet<TTuple<FName,FNetworkGUID>,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FNetworkGUID>,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>,FDefaultSetAllocator>
                         *)&this_00->PendingAsyncPackages,FVar5.Number + uVar10,&FStack_1120);
  }
LAB_148097ccc:
  FMemScope::~FMemScope(&FStack_1118);
  FLLMScope::~FLLMScope(aFStack_1158);
  return;
}

// ExecuteIfSafe @ 14809fbe0

/* WARNING: Removing unreachable block (ram,0x00014809fc5f) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FName *param_1,UPackage *param_2,Type param_3)

{
  FNetGUIDCache *this_00;
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
    this_00 = *(FNetGUIDCache **)(*(longlong *)((longlong)this + 0x20) + 0x1c8);
    if (this_00 != (FNetGUIDCache *)0x0) {
      FNetGUIDCache::AsyncPackageCallback(this_00,param_1,param_2,param_3);
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

// GetBoundProgramCounterForTimerManager @ 1480a4140

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1480a6d70

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 1480ab320

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 1480ac780

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 1480b36f0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1480b4030

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 1480dd460

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1481dd740

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::`46'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1481dd7d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::`46'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 1481dd820

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::`46'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1481e3550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
::Execute(void *this)

{
  UPendingNetGame::BeginHandshake(*(UPendingNetGame **)((longlong)this + 0x20));
  return;
}

// ExecuteIfSafe @ 1481e3850

/* WARNING: Removing unreachable block (ram,0x0001481e387c) */
/* WARNING: Removing unreachable block (ram,0x0001481e38c0) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
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
    UPendingNetGame::BeginHandshake(*(UPendingNetGame **)((longlong)this + 0x20));
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 1481f48e0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1481fcb20

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 1481ffc10

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 148201390

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 148205770

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 148205d80

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 148222550

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1489d3f00

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::`43'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
    ::FString::FString((FString *)(puVar1 + 5),(FString *)((longlong)this + 0x28));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1489d3fa0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::`43'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
    ::FString::FString((FString *)(puVar1 + 5),(FString *)((longlong)this + 0x28));
    return;
  }
  return;
}

// CreateCopy @ 1489d4010

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::`43'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
    ::FString::FString((FString *)(puVar3 + 5),(FString *)((longlong)this + 0x28));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1489dc9e0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
::Execute(void *this)

{
  `UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>::operator()((void *)((longlong)this + 0x20));
  return;
}

// ExecuteIfSafe @ 1489dcd90

/* WARNING: Removing unreachable block (ram,0x0001489dcdbc) */
/* WARNING: Removing unreachable block (ram,0x0001489dce00) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
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
    `UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>::operator()((void *)((longlong)this + 0x20));
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 1489e67f0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1489eae20

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 1489ef510

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 1489f2470

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 1489f8a10

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1489f9a50

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 148a1beb0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UWorld::HandleDemoPlayCommand'::__l43::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

