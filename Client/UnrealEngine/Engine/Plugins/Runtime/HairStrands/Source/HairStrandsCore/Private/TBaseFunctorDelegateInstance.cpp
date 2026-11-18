// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1045

// CreateCopy @ 14e0dbe70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dbef0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dbf40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dbfe0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dc060

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dc0b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dc150

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dc1d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dc220

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dc2c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dc340

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dc390

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dc430

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dc4b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dc500

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dc5a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dc620

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dc670

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dc710

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dc790

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dc7e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dc880

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dc900

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dc950

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dc9f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dca70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dcac0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dcb60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dcbe0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dcc30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dccd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dcd50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dcda0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dce40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dcec0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dcf10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dcfb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dd030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dd080

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dd120

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dd1a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dd1f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dd290

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dd310

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dd360

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dd400

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dd480

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dd4d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dd570

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dd5f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dd640

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dd6e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dd760

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dd7b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dd850

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetAirDragBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dd8d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetAirDragBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dd920

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetAirDragBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dd9c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dda40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dda90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0ddb30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0ddbb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0ddc00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0ddca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0ddd20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0ddd70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dde10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dde90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0ddee0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0ddf80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0de000

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0de050

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0de0f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0de170

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0de1c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0de260

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0de2e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0de330

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0de3d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0de450

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0de4a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0de540

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0de5c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0de610

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0de6b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0de730

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0de780

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0de820

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0de8a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0de8f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0de990

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dea10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dea60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0deb00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0deb80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0debd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dec70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0decf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0ded40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dede0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dee60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0deeb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0def50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0defd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0df020

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0df0c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0df140

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0df190

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0df230

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0df2b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0df300

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0df3a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0df420

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0df470

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0df510

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0df590

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0df5e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0df680

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0df700

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0df750

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0df7f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0df870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0df8c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0df960

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0df9e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dfa30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dfad0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dfb50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dfba0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dfc40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dfcc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dfd10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dfdb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dfe30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dfe80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0dff20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0dffa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0dfff0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e0090

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e0110

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e0160

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e0200

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e0280

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e02d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e0370

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e03f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e0440

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e04e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e0560

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e05b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e0650

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e06d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e0720

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e07c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e0840

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e0890

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e0930

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e09b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e0a00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e0aa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e0b20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e0b70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e0c10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e0c90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e0ce0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e0d80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e0e00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e0e50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e0ef0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e0f70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e0fc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e1060

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e10e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e1130

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e11d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e1250

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e12a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e1340

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e13c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e1410

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e14b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e1530

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e1580

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e1620

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e16a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e16f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e1790

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e1810

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e1860

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e1900

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e1980

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e19d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e1a70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e1af0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e1b40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e1be0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e1c60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e1cb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e1d50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e1dd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e1e20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e1ec0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e1f40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e1f90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e2030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e20b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e2100

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e21a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e2220

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e2270

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e2310

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e2390

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e23e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e2480

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e2500

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e2550

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e25f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e2670

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e26c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e2760

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e27e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e2830

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e28d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e2950

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e29a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e2a40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e2ac0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e2b10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e2bb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e2c30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e2c80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e2d20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e2da0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e2df0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e2e90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e2f10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e2f60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e3000

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e3080

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e30d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e3170

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e31f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e3240

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e32e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e3360

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e33b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e3450

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e34d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e3520

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e35c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e3640

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e3690

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e3730

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e37b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e3800

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e38a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e3920

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e3970

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e3a10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e3a90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e3ae0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e3b80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e3c00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e3c50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e3cf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e3d70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e3dc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e3e60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e3ee0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e3f30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e3fd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e4050

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e40a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e4140

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e41c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e4210

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e42b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e4330

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e4380

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e4420

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e44a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e44f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e0e4590

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e0e4610

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14e0e4660

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14e0e5310

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5320

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5330

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5340

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5350

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5360

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5370

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5380

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5390

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e53a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e53b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e53c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e53d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e53e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e53f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5400

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5410

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5420

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5430

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5440

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5450

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5460

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5470

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5480

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5490

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e54a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e54b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e54c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e54d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e54e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e54f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5500

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5510

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5520

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5530

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5540

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5550

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5560

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5570

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5580

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5590

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e55a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e55b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e55c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e55d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e55e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e55f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5600

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5610

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5620

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5630

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5640

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5650

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  FUserPtrHandler<FNDIHairStrandsData> local_98;
  TMatrix<double> local_88;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_98,param_1);
  UE::Math::TTransform<double>::ToMatrixWithScale(&(local_98.Ptr)->WorldTransform,&local_88);
  WriteTransform(&local_88,param_1);
  return;
}

// Execute @ 14e0e56a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e56b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e56c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e56d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e56e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e56f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5700

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5710

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5720

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5730

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5740

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5750

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5760

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5770

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5780

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5790

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e57a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e57b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e57c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e57d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e57e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e57f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5800

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5810

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5820

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5830

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5840

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5850

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5860

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5880

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5890

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e58a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e58b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e58c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e58d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e58e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e58f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5900

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5910

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// Execute @ 14e0e5920

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e0e5930

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceVelocityGrid::UpdateGridTransform
            (*(UNiagaraDataInterfaceVelocityGrid **)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 14e0e6d80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6d90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6da0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6db0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6dc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6dd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6de0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6df0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6e00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6e10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6e20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6e30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6e40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6e50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6e60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6e70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6e80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6e90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6ea0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e6ec0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e6ee0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e6f00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6f10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e6f30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e6f40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e6f60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e6f80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e6fa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e6fc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e6fe0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7000

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7020

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7030

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7050

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7070

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7090

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e70a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e70b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e70d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e70f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7110

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7130

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7150

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7170

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7190

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e71b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e71d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e71f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7200

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7220

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7240

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7250

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7270

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  FUserPtrHandler<FNDIHairStrandsData> local_98;
  TMatrix<double> local_88;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_98,param_1);
  UE::Math::TTransform<double>::ToMatrixWithScale(&(local_98.Ptr)->WorldTransform,&local_88);
  WriteTransform(&local_88,param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e72c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e72e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e72f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7300

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7310

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7320

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7330

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7340

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7350

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7360

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7370

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7380

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7390

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e73a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e73b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e73c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e73d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e73e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e73f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7400

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7410

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7420

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7430

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7440

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7450

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7460

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7470

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7480

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7490

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e74a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e74b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e74c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e74d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e74e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e74f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7500

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7510

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7520

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7530

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7540

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  return true;
}

// ExecuteIfSafe @ 14e0e7550

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e0e7570

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceVelocityGrid::UpdateGridTransform
            (*(UNiagaraDataInterfaceVelocityGrid **)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9160

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9170

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9180

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9190

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e91a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e91b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e91c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e91d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e91e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e91f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9200

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9210

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9220

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9230

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9240

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9250

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9260

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9270

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9280

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9290

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e92a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e92b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e92c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e92d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e92e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e92f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9300

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9310

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9320

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9330

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9340

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9350

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9360

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9370

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9380

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9390

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e93a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e93b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e93c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e93d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e93e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e93f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9400

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9410

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9420

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9430

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9440

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9450

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9460

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9470

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9480

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9490

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e94a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e94b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e94c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e94d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e94e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e94f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9500

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9510

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9520

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9530

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9540

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9550

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9560

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9570

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9580

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9590

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e95a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e95b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e95c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e95d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e95e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e95f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9600

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9610

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9620

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9630

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9640

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9650

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9660

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9670

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9680

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9690

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e96a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e96b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e96c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e96d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e96e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e96f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9700

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9710

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9720

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9730

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e0e9740

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14e0ea100

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea110

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea120

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea130

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea140

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea150

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea160

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea170

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea180

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea190

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea1a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea1b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea1c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea1d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea1e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea1f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea200

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea210

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea220

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea230

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea240

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea250

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea260

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea270

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea280

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea290

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea2a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea2b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea2c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea2d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea2e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea2f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea300

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea310

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea320

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea330

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea340

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea350

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea360

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea370

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea380

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea390

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea3a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea3b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea3c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea3d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea3e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea3f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea400

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea410

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea420

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea430

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea440

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea450

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea460

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea470

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea480

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea490

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea4a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea4b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea4c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea4d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea4e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea4f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea500

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea510

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea520

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea530

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea540

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea550

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea560

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea570

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea580

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea590

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea5a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea5b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea5c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea5d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea5e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea5f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea600

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea610

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea620

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea630

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea640

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea650

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea660

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea670

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea680

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea690

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea6a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea6b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea6c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea6d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e0ea6e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14e0ecaa0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecab0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecac0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecad0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecae0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecaf0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecb00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecb10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecb20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecb30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecb40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecb50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecb60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecb70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecb80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecb90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecba0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecbb0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecbc0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecbd0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecbe0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecbf0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecc00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecc10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecc20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecc30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecc40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecc50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecc60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecc70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecc80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecc90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecca0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0eccb0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0eccc0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0eccd0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecce0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0eccf0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecd00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecd10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecd20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecd30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecd40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecd50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecd60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecd70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecd80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecd90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecda0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecdb0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecdc0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecdd0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecde0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecdf0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ece00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ece10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ece20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ece30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ece40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ece50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ece60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ece70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ece80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ece90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecea0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0eceb0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecec0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0eced0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecee0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecef0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecf00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecf10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecf20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecf30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecf40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecf50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecf60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecf70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecf80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecf90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecfa0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecfb0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecfc0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecfd0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecfe0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ecff0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ed000

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ed010

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ed020

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ed030

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ed040

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ed050

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ed060

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ed070

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e0ed080

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14e0f1730

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1740

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1750

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1760

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1770

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1780

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1790

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f17a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f17b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f17c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f17d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f17e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f17f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1800

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1810

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1820

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1830

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1840

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1850

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1860

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1870

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1880

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1890

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f18a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f18b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f18c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f18d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f18e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f18f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1900

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1910

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1920

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1930

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1940

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1950

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1960

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1970

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1980

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1990

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f19a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f19b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f19c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f19d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f19e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f19f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1a00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1a10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1a20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1a30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1a40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1a50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1a60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1a70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1a80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1a90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1aa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1ab0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1ac0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1ad0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1ae0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1af0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1b00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1b10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1b20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1b30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1b40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1b50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1b60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1b70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1b80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1b90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1ba0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1bb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1bc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1bd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1be0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1bf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1c00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1c10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1c20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1c30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1c40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1c50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1c60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1c70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1c80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1c90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1ca0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1cb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1cc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1cd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1ce0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1cf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1d00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e0f1d10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14e0f3390

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f33a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f33b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f33c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f33d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f33e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f33f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3400

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3410

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3420

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3430

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3440

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3450

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3460

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3470

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3480

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3490

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f34a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f34b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f34c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f34d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f34e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f34f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3500

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3510

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3520

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3530

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3540

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3550

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3560

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3570

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3580

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3590

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f35a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f35b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f35c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f35d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f35e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f35f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3600

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3610

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3620

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3630

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3640

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3650

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3660

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3670

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3680

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3690

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f36a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f36b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f36c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f36d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f36e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f36f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3700

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3710

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3720

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3730

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3740

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3750

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3760

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3770

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3780

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3790

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f37a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f37b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f37c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f37d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f37e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f37f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3800

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3810

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3820

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3830

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3840

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3850

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3860

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3870

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3880

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3890

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f38a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f38b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f38c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f38d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f38e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f38f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3900

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3910

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3920

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3930

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3940

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3950

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3960

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e0f3970

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14e0f8730

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8740

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8750

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8760

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8770

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8780

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8790

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f87a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f87b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f87c0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f87d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f87e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f87f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8800

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8810

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8820

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8830

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8840

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8850

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8860

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8870

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8880

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8890

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f88a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f88b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f88c0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f88d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f88e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f88f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8900

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8910

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8920

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8930

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8940

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8950

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8960

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8970

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8980

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8990

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f89a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f89b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f89c0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f89d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f89e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f89f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8a00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8a10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8a20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8a30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8a40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8a50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8a60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8a70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8a80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8a90

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8aa0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8ab0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8ac0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8ad0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8ae0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8af0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8b00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8b10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8b20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8b30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8b40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8b50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8b60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8b70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8b80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8b90

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8ba0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8bb0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8bc0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8bd0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8be0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8bf0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8c00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8c10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8c20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8c30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8c40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8c50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8c60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8c70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8c80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8c90

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8ca0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8cb0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8cc0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8cd0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8ce0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8cf0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8d00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e0f8d10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

