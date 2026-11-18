// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 108

// CreateCopy @ 14cafdd00

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUIntervalGizmo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cafdd90

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUIntervalGizmo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cafdde0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUIntervalGizmo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cafde90

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUIntervalGizmo__AEBU__TVector_N_Math_UE__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cafdf20

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUIntervalGizmo__AEBU__TVector_N_Math_UE__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cafdf70

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUIntervalGizmo__AEBU__TVector_N_Math_UE__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cafe020

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cafe0b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cafe100

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_8>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cafe1b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cafe240

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cafe290

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_9>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cafe340

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cafe3d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cafe420

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_6>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cafe4d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cafe560

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cafe5b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::`2'::<lambda_7>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cb050f0

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
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
::Execute(void *this,UIntervalGizmo *param_1)

{
  *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x104) = 0;
  *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x105) = 0;
  return;
}

// Execute @ 14cb05110

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
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
::Execute(void *this,UIntervalGizmo *param_1,TVector<double> *param_2,float param_3)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  `FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x20),param_1,(TVector<double> *)&local_28._s_0,param_3);
  return;
}

// Execute @ 14cb05150

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
::Execute(void *this,UTransformProxy *param_1)

{
  *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x104) = 0;
  *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x105) = 0;
  return;
}

// Execute @ 14cb05170

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
::Execute(void *this,UTransformProxy *param_1)

{
  *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x104) = 0;
  *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x105) = 0;
  return;
}

// Execute @ 14cb05190

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
::Execute(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  
  lVar2 = *(longlong *)((longlong)this + 0x20);
  dVar3 = (param_2->Translation).XY.m128d_f64[1];
  if (*(char *)(lVar2 + 0x105) != '\0') {
    dVar1 = (param_2->Translation).ZW.m128d_f64[0];
    *(double *)(lVar2 + 0x208) = (param_2->Translation).XY.m128d_f64[0];
    *(double *)(lVar2 + 0x210) = dVar3;
    *(undefined2 *)(lVar2 + 0x104) = 1;
    *(double *)(lVar2 + 0x218) = dVar1;
    return;
  }
  *(undefined1 *)(lVar2 + 0x105) = 0;
  return;
}

// Execute @ 14cb051e0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
::Execute(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  
  lVar2 = *(longlong *)((longlong)this + 0x20);
  dVar3 = (param_2->Translation).XY.m128d_f64[1];
  if (*(char *)(lVar2 + 0x105) != '\0') {
    dVar1 = (param_2->Translation).ZW.m128d_f64[0];
    *(double *)(lVar2 + 0x208) = (param_2->Translation).XY.m128d_f64[0];
    *(double *)(lVar2 + 0x210) = dVar3;
    *(undefined2 *)(lVar2 + 0x104) = 1;
    *(double *)(lVar2 + 0x218) = dVar1;
    return;
  }
  *(undefined1 *)(lVar2 + 0x105) = 0;
  return;
}

// ExecuteIfSafe @ 14cb06310

/* WARNING: Removing unreachable block (ram,0x00014cb0633c) */
/* WARNING: Removing unreachable block (ram,0x00014cb06380) */
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
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this,UIntervalGizmo *param_1)

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
    *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x104) = 0;
    *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x105) = 0;
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cb063e0

/* WARNING: Removing unreachable block (ram,0x00014cb06467) */
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
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,UIntervalGizmo *param_1,TVector<double> *param_2,float param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  TVector<double>_u_0 local_48 [2];
  
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
    local_48[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
    local_48[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
    local_48[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
    `FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>::operator()
              ((void *)((longlong)this + 0x20),param_1,(TVector<double> *)&local_48[0]._s_0,param_3)
    ;
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cb064f0

/* WARNING: Removing unreachable block (ram,0x00014cb0651c) */
/* WARNING: Removing unreachable block (ram,0x00014cb06560) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
::ExecuteIfSafe(void *this,UTransformProxy *param_1)

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
    *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x104) = 0;
    *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x105) = 0;
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cb065c0

/* WARNING: Removing unreachable block (ram,0x00014cb065ec) */
/* WARNING: Removing unreachable block (ram,0x00014cb06630) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
::ExecuteIfSafe(void *this,UTransformProxy *param_1)

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
    *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x104) = 0;
    *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x105) = 0;
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cb06690

/* WARNING: Removing unreachable block (ram,0x00014cb06712) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
::ExecuteIfSafe(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar5;
  UObject *pUVar6;
  UObject *local_res8;
  
  pUVar6 = (UObject *)0x0;
  bVar4 = IsInGameThread();
  if (!bVar4) {
    TVar5 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar6 = *TVar5.Object;
    *(undefined8 *)TVar5.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar4) {
    lVar2 = *(longlong *)((longlong)this + 0x20);
    dVar3 = (param_2->Translation).XY.m128d_f64[1];
    if (*(char *)(lVar2 + 0x105) != '\0') {
      dVar1 = (param_2->Translation).ZW.m128d_f64[0];
      *(double *)(lVar2 + 0x208) = (param_2->Translation).XY.m128d_f64[0];
      *(double *)(lVar2 + 0x210) = dVar3;
      *(undefined1 *)(lVar2 + 0x104) = 1;
      *(double *)(lVar2 + 0x218) = dVar1;
    }
    *(undefined1 *)(lVar2 + 0x105) = 0;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (pUVar6 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
  }
  return bVar4;
}

// ExecuteIfSafe @ 14cb067a0

/* WARNING: Removing unreachable block (ram,0x00014cb06822) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
::ExecuteIfSafe(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar5;
  UObject *pUVar6;
  UObject *local_res8;
  
  pUVar6 = (UObject *)0x0;
  bVar4 = IsInGameThread();
  if (!bVar4) {
    TVar5 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar6 = *TVar5.Object;
    *(undefined8 *)TVar5.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar4) {
    lVar2 = *(longlong *)((longlong)this + 0x20);
    dVar3 = (param_2->Translation).XY.m128d_f64[1];
    if (*(char *)(lVar2 + 0x105) != '\0') {
      dVar1 = (param_2->Translation).ZW.m128d_f64[0];
      *(double *)(lVar2 + 0x208) = (param_2->Translation).XY.m128d_f64[0];
      *(double *)(lVar2 + 0x210) = dVar3;
      *(undefined1 *)(lVar2 + 0x104) = 1;
      *(double *)(lVar2 + 0x218) = dVar1;
    }
    *(undefined1 *)(lVar2 + 0x105) = 0;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (pUVar6 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
  }
  return bVar4;
}

// GetBoundProgramCounterForTimerManager @ 14cb0dce0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cb0dcf0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cb0dd00

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cb0dd10

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cb0dd20

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cb0dd30

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14cb11910

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cb11920

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cb11930

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cb11940

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cb11950

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cb11960

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cb15210

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cb15220

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cb15230

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cb15240

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cb15250

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cb15260

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14cb1ade0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cb1ae10

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cb1ae40

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cb1ae70

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cb1aea0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cb1aed0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14cb21ed0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cb21ef0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cb21f10

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cb21f30

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cb21f50

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cb21f70

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14cb22ef0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cb22f00

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cb22f10

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cb22f20

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cb22f30

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cb22f40

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14cb43950

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cb43960

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cb43970

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cb43980

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_9>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cb43990

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cb439a0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14cb801c0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
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
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cb80250

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cb802a0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
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
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cb89a80

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
::Execute(void *this)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)((longlong)this + 0x20) + 0x4a8);
  *pbVar1 = *pbVar1 | 2;
  UGeometrySelectionManager::RebuildSelectableRenderCache
            (*(UGeometrySelectionManager **)((longlong)this + 0x20));
  return;
}

// ExecuteIfSafe @ 14cb8a1d0

/* WARNING: Removing unreachable block (ram,0x00014cb8a1fc) */
/* WARNING: Removing unreachable block (ram,0x00014cb8a240) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  byte *pbVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UObject *pUVar4;
  UObject *local_res8;
  
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
    pbVar1 = (byte *)(*(longlong *)((longlong)this + 0x20) + 0x4a8);
    *pbVar1 = *pbVar1 | 2;
    UGeometrySelectionManager::RebuildSelectableRenderCache
              (*(UGeometrySelectionManager **)((longlong)this + 0x20));
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return bVar2;
}

// GetBoundProgramCounterForTimerManager @ 14cb94870

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14cb98c70

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cba04b0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14cba1140

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14cba3f50

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14cba4600

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14cbb62c0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14cbc3fe0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cbc4070

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cbc40c0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cbc4170

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cbc4200

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cbc4250

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cbc4910

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
::Execute(void *this,UTransformProxy *param_1)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (*(longlong *)((longlong)this + 0x20) + 0x88));
  return;
}

// Execute @ 14cbc4930

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
::Execute(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  auVar2 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  uVar5 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
  uVar6 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
  uVar7 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
  dVar1 = (param_2->Translation).ZW.m128d_f64[0];
  dVar9 = (param_2->Translation).XY.m128d_f64[1];
  lVar3 = *(longlong *)((longlong)this + 0x20);
  local_40 = SUB84(dVar1,0);
  uStack_3c = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar10 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar11 = (param_2->Scale3D).XY.m128d_f64[1];
  *(double *)(lVar3 + 200) = (param_2->Translation).XY.m128d_f64[0];
  *(double *)(lVar3 + 0xd0) = dVar9;
  *(undefined4 *)(lVar3 + 0xd8) = local_40;
  *(undefined4 *)(lVar3 + 0xdc) = uStack_3c;
  *(int *)(lVar3 + 0xe0) = auVar2._0_4_;
  *(int *)(lVar3 + 0xe4) = auVar2._4_4_;
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[0];
  auVar4._8_4_ = uVar5;
  auVar4._0_8_ = auVar2._8_8_;
  auVar4._12_4_ = uVar6;
  *(undefined1 (*) [16])(lVar3 + 0xe8) = auVar4;
  *(undefined4 *)(lVar3 + 0xf8) = uVar7;
  *(undefined4 *)(lVar3 + 0xfc) = uVar8;
  lVar3 = *(longlong *)((longlong)this + 0x20);
  *(double *)(lVar3 + 0x100) = dVar10;
  *(double *)(lVar3 + 0x108) = dVar11;
  *(double *)(lVar3 + 0x110) = dVar1;
  return;
}

// ExecuteIfSafe @ 14cbc50a0

/* WARNING: Removing unreachable block (ram,0x00014cbc5106) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UTransformProxy *param_1)

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
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               (*(longlong *)((longlong)this + 0x20) + 0x88));
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cbc5160

/* WARNING: Removing unreachable block (ram,0x00014cbc51e2) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar13;
  UObject *pUVar14;
  UObject *local_res8;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  pUVar14 = (UObject *)0x0;
  bVar12 = IsInGameThread();
  if (!bVar12) {
    TVar13 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar14 = *TVar13.Object;
    *(undefined8 *)TVar13.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar12) {
    auVar2 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    uVar5 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
    uVar6 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
    uVar7 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
    uVar8 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
    dVar1 = (param_2->Translation).ZW.m128d_f64[0];
    dVar9 = (param_2->Translation).XY.m128d_f64[1];
    lVar3 = *(longlong *)((longlong)this + 0x20);
    local_50 = SUB84(dVar1,0);
    uStack_4c = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar10 = (param_2->Scale3D).XY.m128d_f64[0];
    dVar11 = (param_2->Scale3D).XY.m128d_f64[1];
    *(double *)(lVar3 + 200) = (param_2->Translation).XY.m128d_f64[0];
    *(double *)(lVar3 + 0xd0) = dVar9;
    *(undefined4 *)(lVar3 + 0xd8) = local_50;
    *(undefined4 *)(lVar3 + 0xdc) = uStack_4c;
    *(int *)(lVar3 + 0xe0) = auVar2._0_4_;
    *(int *)(lVar3 + 0xe4) = auVar2._4_4_;
    dVar1 = (param_2->Scale3D).ZW.m128d_f64[0];
    auVar4._8_4_ = uVar5;
    auVar4._0_8_ = auVar2._8_8_;
    auVar4._12_4_ = uVar6;
    *(undefined1 (*) [16])(lVar3 + 0xe8) = auVar4;
    *(undefined4 *)(lVar3 + 0xf8) = uVar7;
    *(undefined4 *)(lVar3 + 0xfc) = uVar8;
    lVar3 = *(longlong *)((longlong)this + 0x20);
    *(double *)(lVar3 + 0x100) = dVar10;
    *(double *)(lVar3 + 0x108) = dVar11;
    *(double *)(lVar3 + 0x110) = dVar1;
  }
  if (pUVar14 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar14);
  }
  return bVar12;
}

// GetBoundProgramCounterForTimerManager @ 14cbc5460

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cbc5470

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14cbc7070

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cbc7080

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cbc77f0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cbc7800

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14cbc8000

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cbc8030

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14cbc8800

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cbc8820

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14cbc89b0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cbc89c0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14cbcb650

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cbcb660

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

