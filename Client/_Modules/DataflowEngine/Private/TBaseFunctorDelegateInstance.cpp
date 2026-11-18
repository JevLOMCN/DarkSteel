// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 33

// CreateCopy @ 1462d5dc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__EvaluateSubGraph_FContextSubGraph_Private_SubGraphNodes_Dataflow_UE__QEAA_NAEBUFDataflowSubGraphOutputNode__AEBU1_AEBU2__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1462d5e40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__EvaluateSubGraph_FContextSubGraph_Private_SubGraphNodes_Dataflow_UE__QEAA_NAEBUFDataflowSubGraphOutputNode__AEBU1_AEBU2__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1462d5e90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__EvaluateSubGraph_FContextSubGraph_Private_SubGraphNodes_Dataflow_UE__QEAA_NAEBUFDataflowSubGraphOutputNode__AEBU1_AEBU2__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1462d5f30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_2>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1__EvaluateSubGraph_FContextSubGraph_Private_SubGraphNodes_Dataflow_UE__QEAA_NAEBUFDataflowSubGraphOutputNode__AEBU1_AEBU2__Z___V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1462d5fb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1__EvaluateSubGraph_FContextSubGraph_Private_SubGraphNodes_Dataflow_UE__QEAA_NAEBUFDataflowSubGraphOutputNode__AEBU1_AEBU2__Z___V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 1462d6000

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_2>_>
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1__EvaluateSubGraph_FContextSubGraph_Private_SubGraphNodes_Dataflow_UE__QEAA_NAEBUFDataflowSubGraphOutputNode__AEBU1_AEBU2__Z___V__6B_
    ;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1462d60a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_3>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1__EvaluateSubGraph_FContextSubGraph_Private_SubGraphNodes_Dataflow_UE__QEAA_NAEBUFDataflowSubGraphOutputNode__AEBU1_AEBU2__Z___V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1462d6120

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1__EvaluateSubGraph_FContextSubGraph_Private_SubGraphNodes_Dataflow_UE__QEAA_NAEBUFDataflowSubGraphOutputNode__AEBU1_AEBU2__Z___V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 1462d6170

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_3>_>
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEBUFDataflowNode__PEBUFDataflowOutput__AEBVFString___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1__EvaluateSubGraph_FContextSubGraph_Private_SubGraphNodes_Dataflow_UE__QEAA_NAEBUFDataflowSubGraphOutputNode__AEBU1_AEBU2__Z___V__6B_
    ;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1462db570

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_1>_>
::Execute(void *this,FDataflowNode *param_1,FDataflowOutput *param_2,FString *param_3)

{
  UE::Dataflow::FContext::Info
            (*(FContext **)(*(longlong *)((longlong)this + 0x18) + 0x370),param_3,param_1,param_2);
  return;
}

// Execute @ 1462db5a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_2>_>
::Execute(void *this,FDataflowNode *param_1,FDataflowOutput *param_2,FString *param_3)

{
  UE::Dataflow::FContext::Warning
            (*(FContext **)(*(longlong *)((longlong)this + 0x18) + 0x370),param_3,param_1,param_2);
  **(undefined1 **)((longlong)this + 0x20) = 1;
  return;
}

// Execute @ 1462db5e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_3>_>
::Execute(void *this,FDataflowNode *param_1,FDataflowOutput *param_2,FString *param_3)

{
  UE::Dataflow::FContext::Error
            (*(FContext **)(*(longlong *)((longlong)this + 0x18) + 0x370),param_3,param_1,param_2);
  **(undefined1 **)((longlong)this + 0x20) = 1;
  return;
}

// ExecuteIfSafe @ 1462db770

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDataflowNode *param_1,FDataflowOutput *param_2,FString *param_3)

{
  UE::Dataflow::FContext::Info
            (*(FContext **)(*(longlong *)((longlong)this + 0x18) + 0x370),param_3,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 1462db7a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,FDataflowNode *param_1,FDataflowOutput *param_2,FString *param_3)

{
  UE::Dataflow::FContext::Warning
            (*(FContext **)(*(longlong *)((longlong)this + 0x18) + 0x370),param_3,param_1,param_2);
  **(undefined1 **)((longlong)this + 0x20) = 1;
  return true;
}

// ExecuteIfSafe @ 1462db7e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,FDataflowNode *param_1,FDataflowOutput *param_2,FString *param_3)

{
  UE::Dataflow::FContext::Error
            (*(FContext **)(*(longlong *)((longlong)this + 0x18) + 0x370),param_3,param_1,param_2);
  **(undefined1 **)((longlong)this + 0x20) = 1;
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1462dc0a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1462dc0b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1462dc0c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1462dd670

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1462dd680

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1462dd690

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1462df070

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1462df080

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1462df090

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1462df820

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1462df830

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1462df840

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1462dfda0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1462dfdb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1462dfdc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1462e69d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1462e69e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1462e69f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy,`UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

