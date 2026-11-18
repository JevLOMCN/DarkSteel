// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 99

// CreateCopy @ 14dc795a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dc79620

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14dc79670

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::`2'::<lambda_1>_>
               ::_vftable_;
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

// CreateCopy @ 14dc79710

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x40);
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar2[8] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dc797a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x40);
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar2[8] = uVar1;
  }
  return;
}

// CreateCopy @ 14dc79800

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar5 = *(undefined8 *)((longlong)this + 0x20);
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar7[4] = uVar5;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
    uVar2 = *(undefined4 *)((longlong)this + 0x3c);
    uVar3 = *(undefined4 *)((longlong)this + 0x40);
    uVar4 = *(undefined4 *)((longlong)this + 0x44);
    *(undefined4 *)(puVar7 + 7) = *(undefined4 *)((longlong)this + 0x38);
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar2;
    *(undefined4 *)(puVar7 + 8) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x44) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dc798b0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dc79930

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14dc79980

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::`2'::<lambda_1>_>
               ::_vftable_;
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

// Execute @ 14dc7e4d0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
::Execute(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  bool bVar1;
  
  bVar1 = `UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18),param_1,param_2);
  return bVar1;
}

// Execute @ 14dc7e4e0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
::Execute(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  bool bVar1;
  
  bVar1 = `UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18),param_1,param_2);
  return bVar1;
}

// Execute @ 14dc7e4f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
::Execute(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  bool bVar1;
  
  bVar1 = `UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18),param_1,param_2);
  return bVar1;
}

// ExecuteIfSafe @ 14dc7e500

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  `UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dc7e520

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  `UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dc7e540

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  `UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14dc7f1c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dc7f1d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dc7f1e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14dc811f0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dc81200

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dc81210

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14dc834b0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc834c0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dc834d0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14dc83f10

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc83f20

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dc83f30

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14dc84470

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc84480

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dc84490

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14dc8bf80

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc8bf90

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dc8bfa0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14dcbf030

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dcbf0b0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dcbf100

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dcbf1a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dcbf220

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dcbf270

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dcbf310

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::`18'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dcbf390

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::`18'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dcbf3e0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::`18'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dcbf480

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dcbf500

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dcbf550

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dcbf5f0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::`21'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dcbf670

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::`21'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dcbf6c0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::`21'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dcbf760

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dcbf7e0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14dcbf830

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14dcc6900

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
::Execute(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UMovieGraphNode *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieGraphRerouteNode_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      **(undefined1 **)((longlong)this + 0x18) = 1;
      return false;
    }
  }
  return true;
}

// Execute @ 14dcc6960

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
::Execute(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  if ((param_2 != (UMovieGraphPin *)0x0) && ((param_2->Properties).bIsWildcard == false)) {
    **(undefined8 **)((longlong)this + 0x18) = param_2;
    return false;
  }
  return true;
}

// Execute @ 14dcc6980

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
::Execute(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  bool bVar1;
  
  bVar1 = `UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18),param_1,param_2);
  return bVar1;
}

// Execute @ 14dcc6990

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
::Execute(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UMovieGraphNode *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieGraphRerouteNode_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      **(undefined1 **)((longlong)this + 0x18) = 1;
      return false;
    }
  }
  return true;
}

// Execute @ 14dcc69f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
::Execute(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  bool bVar1;
  
  bVar1 = `UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>::operator()
                    ((void *)((longlong)this + 0x18),param_1,param_2);
  return bVar1;
}

// Execute @ 14dcc6a00

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
::Execute(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  if ((param_2 != (UMovieGraphPin *)0x0) && ((param_2->Properties).bIsWildcard == false)) {
    **(undefined8 **)((longlong)this + 0x18) = param_2;
    return false;
  }
  return true;
}

// ExecuteIfSafe @ 14dcc6ad0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UMovieGraphNode *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieGraphRerouteNode_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      **(undefined1 **)((longlong)this + 0x18) = 1;
    }
  }
  return true;
}

// ExecuteIfSafe @ 14dcc6b30

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
::ExecuteIfSafe(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  if ((param_2 != (UMovieGraphPin *)0x0) && ((param_2->Properties).bIsWildcard == false)) {
    **(undefined8 **)((longlong)this + 0x18) = param_2;
  }
  return true;
}

// ExecuteIfSafe @ 14dcc6b50

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
::ExecuteIfSafe(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  `UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dcc6b70

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UMovieGraphNode *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieGraphRerouteNode_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      **(undefined1 **)((longlong)this + 0x18) = 1;
    }
  }
  return true;
}

// ExecuteIfSafe @ 14dcc6bd0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
::ExecuteIfSafe(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  `UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dcc6bf0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
::ExecuteIfSafe(void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  if ((param_2 != (UMovieGraphPin *)0x0) && ((param_2->Properties).bIsWildcard == false)) {
    **(undefined8 **)((longlong)this + 0x18) = param_2;
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14dccaae0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dccaaf0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dccab00

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dccab10

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dccab20

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14dccab30

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14dccf1a0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dccf1b0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dccf1c0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dccf1d0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dccf1e0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14dccf1f0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14dcd4070

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dcd4080

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dcd4090

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dcd40a0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dcd40b0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dcd40c0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14dcd53d0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dcd53e0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dcd53f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dcd5400

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dcd5410

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14dcd5420

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14dcd7650

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dcd7660

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dcd7670

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dcd7680

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dcd7690

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14dcd76a0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14dce8e30

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dce8e40

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dce8e50

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dce8e60

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dce8e70

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dce8e80

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

