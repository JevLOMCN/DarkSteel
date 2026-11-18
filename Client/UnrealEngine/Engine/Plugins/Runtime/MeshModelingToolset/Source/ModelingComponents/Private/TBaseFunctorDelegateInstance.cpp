// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 33

// CreateCopy @ 14ca84c90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ca84d10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14ca84d60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ca84e00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::`2'::<lambda_1>_>
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

// CreateCopy @ 14ca84e80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14ca84ed0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::`2'::<lambda_1>_>
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

// Execute @ 14ca892e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_2>_>
::Execute(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  UPreviewMesh *this_00;
  FDynamicMesh3 *pFVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)((longlong)this + 0x18);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x348);
  if ((param_1->bResultValid != false) &&
     (this_00 = (param_1->PreviewMesh).field0_0x0.DebugPtr, this_00 != (UPreviewMesh *)0x0)) {
    pFVar2 = UPreviewMesh::GetMesh(this_00);
    if (pFVar2 != (FDynamicMesh3 *)0x0) {
      pFVar2 = UPreviewMesh::GetMesh((param_1->PreviewMesh).field0_0x0.DebugPtr);
      if ((pFVar2->TriangleRefCounts).UsedCount == 0) {
        uVar3 = 1;
        goto LAB_14ca89337;
      }
    }
  }
  uVar3 = 0;
LAB_14ca89337:
                    /* WARNING: Could not recover jumptable at 0x00014ca8934c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar3);
  return;
}

// Execute @ 14ca89360

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::__l2::<lambda_1>_>
::Execute(void *this,UObject *param_1,FProperty *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014ca8936a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x418))
            (*(longlong **)((longlong)this + 0x20),*(undefined4 *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 14ca89550

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  UPreviewMesh *this_00;
  FDynamicMesh3 *pFVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)((longlong)this + 0x18);
  pcVar2 = *(code **)(*plVar1 + 0x348);
  if ((param_1->bResultValid != false) &&
     (this_00 = (param_1->PreviewMesh).field0_0x0.DebugPtr, this_00 != (UPreviewMesh *)0x0)) {
    pFVar3 = UPreviewMesh::GetMesh(this_00);
    if (pFVar3 != (FDynamicMesh3 *)0x0) {
      pFVar3 = UPreviewMesh::GetMesh((param_1->PreviewMesh).field0_0x0.DebugPtr);
      if ((pFVar3->TriangleRefCounts).UsedCount == 0) {
        uVar4 = 1;
        goto LAB_14ca895a7;
      }
    }
  }
  uVar4 = 0;
LAB_14ca895a7:
  (*pcVar2)(plVar1,uVar4);
  return true;
}

// ExecuteIfSafe @ 14ca895d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UObject *param_1,FProperty *param_2)

{
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x418))
            (*(longlong **)((longlong)this + 0x20),*(undefined4 *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14ca8e280

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ca8e290

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14ca908a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ca908b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14ca94000

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ca94010

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14ca94ec0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14ca94ed0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14ca978b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ca978c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14caa79a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14caa79b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UBaseMeshProcessingTool::AddOptionalPropertySet'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14cb7f870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDynamicMesh__UFDynamicMeshChangeInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cb7f8f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDynamicMesh__UFDynamicMeshChangeInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cb7f940

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDynamicMesh__UFDynamicMeshChangeInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cb898d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
::Execute(void *this,UDynamicMesh *param_1,FDynamicMeshChangeInfo *param_2)

{
  FDynamicMeshChangeInfo local_28;
  
  local_28.Type = param_2->Type;
  local_28.Flags = param_2->Flags;
  local_28.bIsRevertChange = param_2->bIsRevertChange;
  local_28._3_5_ = *(undefined5 *)&param_2->field_0x3;
  local_28.MeshChange = param_2->MeshChange;
  local_28.ReplaceChange = param_2->ReplaceChange;
  local_28.VertexChange = param_2->VertexChange;
  FBaseDynamicMeshSelector::InvalidateOnMeshChange
            (*(FBaseDynamicMeshSelector **)((longlong)this + 0x18),&local_28);
  return;
}

// ExecuteIfSafe @ 14cb89d40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UDynamicMesh *param_1,FDynamicMeshChangeInfo *param_2)

{
  FDynamicMeshChangeInfo local_28;
  
  local_28.Type = param_2->Type;
  local_28.Flags = param_2->Flags;
  local_28.bIsRevertChange = param_2->bIsRevertChange;
  local_28._3_5_ = *(undefined5 *)&param_2->field_0x3;
  local_28.MeshChange = param_2->MeshChange;
  local_28.ReplaceChange = param_2->ReplaceChange;
  local_28.VertexChange = param_2->VertexChange;
  FBaseDynamicMeshSelector::InvalidateOnMeshChange
            (*(FBaseDynamicMeshSelector **)((longlong)this + 0x18),&local_28);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14cb94810

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14cb98c10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14cba0450

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14cba1040

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cba4550

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14cbb6260

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

