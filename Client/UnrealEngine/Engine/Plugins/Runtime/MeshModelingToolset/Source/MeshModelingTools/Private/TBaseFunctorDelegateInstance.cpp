// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 286

// CreateCopy @ 14cbe8e50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cbe8ed0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cbe8f20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cbeb300

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
::Execute(void *this,FDynamicMeshOperator *param_1)

{
  `UConvertToPolygonsTool::Setup'::__l11::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 14cbec080

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
::ExecuteIfSafe(void *this,FDynamicMeshOperator *param_1)

{
  `UConvertToPolygonsTool::Setup'::__l11::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14cbee1a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14cbee660

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14cbf2060

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14cbf22c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cbf23d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14cbf6fb0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14cc4fdf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc4fe70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cc4fec0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cc4ff60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc4ffe0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cc50030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cc500d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc50150

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cc501a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cc50240

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc502c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cc50310

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cc503b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc50430

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cc50480

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cc50520

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_2>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc505a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cc505f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_2>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cc50690

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_3>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc50710

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cc50760

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_3>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cc50800

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::__l2::<lambda_4>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc50880

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cc508d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::__l2::<lambda_4>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cc50970

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_5>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::`2'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc509f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::`2'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cc50a40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_5>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::`2'::<lambda_5>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cc55fe0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::__l2::<lambda_1>_>
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
        goto LAB_14cc56037;
      }
    }
  }
  uVar3 = 0;
LAB_14cc56037:
                    /* WARNING: Could not recover jumptable at 0x00014cc5604c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar3);
  return;
}

// Execute @ 14cc56060

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::Execute(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 0x18) + 0x2d8))();
  (**(code **)(*plVar1 + 0x368))(plVar1);
  UCSGMeshesTool::UpdateVisualization(*(UCSGMeshesTool **)((longlong)this + 0x18));
  return;
}

// Execute @ 14cc560a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::Execute(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 0x18) + 0x2d8))();
  (**(code **)(*plVar1 + 0x368))(plVar1);
  UCutMeshWithMeshTool::UpdateVisualization(*(UCutMeshWithMeshTool **)((longlong)this + 0x18));
  return;
}

// Execute @ 14cc560e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::Execute(void *this,FDynamicMeshOperator *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)this + 0x18) + 0x170),
             (TArray<int,TSizedDefaultAllocator<32>_> *)
             ((longlong)&param_1[1].ResultTransform.Translation.field0_0x0 + 0x10));
  return;
}

// Execute @ 14cc56100

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::Execute(void *this,FDynamicMeshOperator *param_1)

{
  `UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14cc56110

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_2>_>
::Execute(void *this)

{
  UMeshOpPreviewWithBackgroundCompute *this_00;
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  
  this_00 = *(UMeshOpPreviewWithBackgroundCompute **)(*(longlong *)((longlong)this + 0x18) + 0x1c8);
  if (this_00 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult(this_00);
  }
  lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x1b8);
  bVar3 = *(int *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x1a0) + 0xd0) == 0;
  if ((bool)*(char *)(lVar1 + 0x159) != bVar3) {
    *(bool *)(lVar1 + 0x159) = bVar3;
    plVar2 = *(longlong **)((longlong)this + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014cc5616b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x340))(plVar2,plVar2[0x37]);
    return;
  }
  return;
}

// Execute @ 14cc56180

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_3>_>
::Execute(void *this)

{
  `UDrawAndRevolveTool::Setup'::__l2::<lambda_3>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14cc56190

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::__l2::<lambda_4>_>
::Execute(void *this)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = *(longlong *)((longlong)this + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x5a8);
  uVar4 = *(undefined8 *)(lVar3 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x78);
  uVar6 = *(undefined8 *)(lVar3 + 0x80);
  uVar7 = *(undefined8 *)(lVar3 + 0x88);
  uVar8 = *(undefined8 *)(lVar3 + 0x90);
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar2 + 0x3f8) = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar2 + 0x400) = uVar4;
  *(undefined8 *)(lVar2 + 0x408) = uVar5;
  *(undefined8 *)(lVar2 + 0x410) = uVar6;
  *(undefined8 *)(lVar2 + 0x418) = uVar7;
  *(undefined8 *)(lVar2 + 0x420) = uVar8;
  *(undefined8 *)(lVar2 + 0x428) = uVar1;
  return;
}

// Execute @ 14cc561e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_5>_>
::Execute(void *this)

{
  `UDrawAndRevolveTool::Setup'::__l2::<lambda_5>::operator()((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 14cc56530

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::__l2::<lambda_1>_>
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
        goto LAB_14cc56587;
      }
    }
  }
  uVar4 = 0;
LAB_14cc56587:
  (*pcVar2)(plVar1,uVar4);
  return true;
}

// ExecuteIfSafe @ 14cc565b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 0x18) + 0x2d8))();
  (**(code **)(*plVar1 + 0x368))(plVar1);
  UCSGMeshesTool::UpdateVisualization(*(UCSGMeshesTool **)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14cc565f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 0x18) + 0x2d8))();
  (**(code **)(*plVar1 + 0x368))(plVar1);
  UCutMeshWithMeshTool::UpdateVisualization(*(UCutMeshWithMeshTool **)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14cc56630

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDynamicMeshOperator *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)this + 0x18) + 0x170),
             (TArray<int,TSizedDefaultAllocator<32>_> *)
             ((longlong)&param_1[1].ResultTransform.Translation.field0_0x0 + 0x10));
  return true;
}

// ExecuteIfSafe @ 14cc56660

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDynamicMeshOperator *param_1)

{
  `UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14cc56680

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  UMeshOpPreviewWithBackgroundCompute *this_00;
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  
  this_00 = *(UMeshOpPreviewWithBackgroundCompute **)(*(longlong *)((longlong)this + 0x18) + 0x1c8);
  if (this_00 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult(this_00);
  }
  lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x1b8);
  bVar3 = *(int *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x1a0) + 0xd0) == 0;
  if ((bool)*(char *)(lVar1 + 0x159) != bVar3) {
    *(bool *)(lVar1 + 0x159) = bVar3;
    plVar2 = *(longlong **)((longlong)this + 0x18);
    (**(code **)(*plVar2 + 0x340))(plVar2,plVar2[0x37]);
  }
  return true;
}

// ExecuteIfSafe @ 14cc566f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  `UDrawAndRevolveTool::Setup'::__l2::<lambda_3>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14cc56710

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = *(longlong *)((longlong)this + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x5a8);
  uVar4 = *(undefined8 *)(lVar3 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x78);
  uVar6 = *(undefined8 *)(lVar3 + 0x80);
  uVar7 = *(undefined8 *)(lVar3 + 0x88);
  uVar8 = *(undefined8 *)(lVar3 + 0x90);
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar2 + 0x3f8) = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar2 + 0x400) = uVar4;
  *(undefined8 *)(lVar2 + 0x408) = uVar5;
  *(undefined8 *)(lVar2 + 0x410) = uVar6;
  *(undefined8 *)(lVar2 + 0x418) = uVar7;
  *(undefined8 *)(lVar2 + 0x420) = uVar8;
  *(undefined8 *)(lVar2 + 0x428) = uVar1;
  return true;
}

// ExecuteIfSafe @ 14cc56760

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_5>_>
::ExecuteIfSafe(void *this)

{
  `UDrawAndRevolveTool::Setup'::__l2::<lambda_5>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b150

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b160

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b170

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b180

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b190

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b1a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b1b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b1c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b1d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14cc5b390

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cc5b3a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cc5b3b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cc5b3c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cc5b3d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cc5b3e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cc5b3f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cc5b400

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cc5b410

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14cc5e2d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cc5e2e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cc5e2f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cc5e300

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cc5e310

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cc5e320

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cc5e330

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cc5e340

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cc5e350

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14cc5ebe0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cc5ebf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cc5ec00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cc5ec10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cc5ec20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cc5ec30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cc5ec40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cc5ec50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cc5ec60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cc624a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cc624b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cc624c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cc624d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cc624e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cc624f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cc62500

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cc62510

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cc62520

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14cc82cd0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::StartPreview'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cc82ce0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cc82cf0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cc82d00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCSGMeshesTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cc82d10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UCutMeshWithMeshTool::SetPreviewCallbacks'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cc82d20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cc82d30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cc82d40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawPolygonTool::Setup'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cc82d50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDrawAndRevolveTool::Setup'::__l2::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14ccf34a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ccf3520

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14ccf3570

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ccf3610

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ccf3690

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14ccf36e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ccf3780

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ccf3800

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14ccf3850

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ccf38f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::__l2::<lambda_3>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ccf3970

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14ccf39c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::__l2::<lambda_3>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ccf3a60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::__l2::<lambda_4>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ccf3ae0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14ccf3b30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::__l2::<lambda_4>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ccf3bd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::`9'::<lambda_4>_>
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

// CreateCopy @ 14ccf3c50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::`9'::<lambda_4>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14ccf3ca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::`9'::<lambda_4>_>
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

// CreateCopy @ 14ccf3d40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ccf3dc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14ccf3e10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ccf3eb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::`7'::<lambda_3>_>
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

// CreateCopy @ 14ccf3f30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::`7'::<lambda_3>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14ccf3f80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::`7'::<lambda_3>_>
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

// CreateCopy @ 14ccf4020

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_11>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::`2'::<lambda_11>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ccf40a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_11>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::`2'::<lambda_11>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14ccf40f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_11>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::`2'::<lambda_11>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ccf4190

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_12>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::`2'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ccf4210

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::`2'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14ccf4260

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_12>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::`2'::<lambda_12>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ccf4300

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_13>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::`2'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ccf4380

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::`2'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14ccf43d0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_13>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::`2'::<lambda_13>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ccf91e0

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
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_2>_>
::Execute(void *this,IGizmoFloatParameterSource *param_1,FGizmoFloatParameterChange param_2)

{
  undefined4 uStackX_14;
  
  uStackX_14 = param_2.CurrentValue;
  *(float *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0xe0) + 0xb4) = uStackX_14;
  UMeshSpaceDeformerTool::UpdatePreview(*(UMeshSpaceDeformerTool **)((longlong)this + 0x18));
  return;
}

// Execute @ 14ccf9220

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
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_3>_>
::Execute(void *this,IGizmoFloatParameterSource *param_1,FGizmoFloatParameterChange param_2)

{
  undefined4 uStackX_14;
  
  uStackX_14 = param_2.CurrentValue;
  *(float *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0xe0) + 0xb8) = uStackX_14;
  UMeshSpaceDeformerTool::UpdatePreview(*(UMeshSpaceDeformerTool **)((longlong)this + 0x18));
  return;
}

// Execute @ 14ccf9260

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>_>
::Execute(void *this,IGizmoFloatParameterSource *param_1,FGizmoFloatParameterChange param_2)

{
  `UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14ccf9270

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::__l2::<lambda_3>_>
::Execute(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  undefined8 local_res8 [4];
  code *local_18;
  undefined8 *local_10;
  
  local_res8[0] = *(undefined8 *)((longlong)this + 0x18);
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``URemeshMeshTool::Setup'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UMeshOpPreviewWithBackgroundCompute::ProcessCurrentMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18,
             false);
  return;
}

// Execute @ 14ccf92c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::__l2::<lambda_4>_>
::Execute(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  `URecomputeUVsTool::Setup'::__l2::<lambda_4>::operator()((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14ccf92d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>_>
::Execute(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  `URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14ccf92e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::__l2::<lambda_1>_>
::Execute(void *this,FDynamicMeshOperator *param_1)

{
  `UHoleFillTool::SetupPreview'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14ccf92f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>_>
::Execute(void *this,FDynamicMeshOperator *param_1)

{
  `URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14ccf9300

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_11>_>
::Execute(void *this)

{
  `ULatticeDeformerTool::Setup'::__l2::<lambda_11>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14ccf9310

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
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_12>_>
::Execute(void *this)

{
  TDynamicVector<int,512> *pTVar1;
  TDynamicVector<unsigned_short,512> *this_00;
  TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> *this_01;
  TDynamicVector<double,512> *this_02;
  longlong *plVar2;
  IConstrainedMeshSolver *pIVar3;
  FScriptContainerElement *pFVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  FDynamicGraph3<double> *pFVar8;
  FScriptContainerElement *pFVar9;
  IConstrainedMeshSolver IVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  code *pcVar19;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar20;
  TUniquePtr<UE::Solvers::IConstrainedMeshSolver,TDefaultDelete<UE::Solvers::IConstrainedMeshSolver>_>
  TVar21;
  TVector<double> *pTVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  undefined8 *puVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined8 *puStackX_10;
  longlong alStack_98 [4];
  undefined8 uStack_78;
  
  lVar7 = *(longlong *)((longlong)this + 0x18);
  if (*(char *)(*(longlong *)(lVar7 + 0x1b8) + 0xcd) == '\0') {
    return;
  }
  puVar18 = ::operator_new(0x140);
  puVar28 = (undefined8 *)0x0;
  puVar23 = puVar28;
  if (puVar18 != (undefined8 *)0x0) {
    puVar18[1] = 0;
    *puVar18 = UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FDynamicGraph3<double>_>;
    memset(puVar18 + 6,0,0x108);
    puVar18[3] = 0;
    puVar18[2] = &___7FDynamicGraph_Geometry_UE__6B_;
    puVar18[4] = 0;
    puVar18[5] = 0;
    UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock
              ((TDynamicVector<unsigned_short,512> *)(puVar18 + 3));
    pTVar1 = (TDynamicVector<int,512> *)(puVar18 + 6);
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    puVar18[7] = 0;
    puVar18[8] = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
    *(undefined4 *)(puVar18 + 9) = 0;
    UE::Geometry::FSmallListSet::FSmallListSet((FSmallListSet *)(puVar18 + 10));
    this_00 = (TDynamicVector<unsigned_short,512> *)(puVar18 + 0x18);
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    puVar18[0x19] = 0;
    puVar18[0x1a] = 0;
    UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock(this_00);
    pTVar1 = (TDynamicVector<int,512> *)(puVar18 + 0x1b);
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    puVar18[0x1c] = 0;
    puVar18[0x1d] = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
    this_01 = (TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> *)(puVar18 + 0x1f);
    *(undefined4 *)(puVar18 + 0x1e) = 0;
    this_01->CurBlock = 0;
    this_01->CurBlockUsed = 0;
    puVar18[0x20] = 0;
    puVar18[0x21] = 0;
    UE::Geometry::TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::AddAllocatedBlock(this_01)
    ;
    this_02 = (TDynamicVector<double,512> *)(puVar18 + 0x24);
    puVar18[0x22] = 0;
    this_02->CurBlock = 0;
    this_02->CurBlockUsed = 0;
    puVar18[2] = &___7__FDynamicGraph3_N_Geometry_UE__6B_;
    puVar18[0x25] = 0;
    puVar18[0x26] = 0;
    *(undefined4 *)(puVar18 + 0x23) = 0;
    UE::Geometry::TDynamicVector<double,512>::AddAllocatedBlock(this_02);
    puVar23 = puVar18;
  }
  plVar2 = (longlong *)(lVar7 + 0x1f0);
  if (alStack_98 == plVar2) {
    if (puVar23 + 2 == (undefined8 *)0x0) goto LAB_14cd1748b;
    pcVar19 = (code *)*puVar23;
  }
  else {
    lVar25 = *plVar2;
    *plVar2 = (longlong)(puVar23 + 2);
    if (lVar25 == 0) goto LAB_14cd1748b;
    pcVar19 = *(code **)(lVar25 + -0x10);
    puVar23 = (undefined8 *)(lVar25 + -0x10);
  }
  (*pcVar19)(puVar23);
LAB_14cd1748b:
  pFVar8 = (FDynamicGraph3<double> *)*plVar2;
  if ((*(longlong *)(lVar7 + 0x1a0) == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar14)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  ::`anonymous_namespace'::MakeLatticeGraph(*(FFFDLattice **)(lVar7 + 0x1a0),pFVar8);
  pTVar20 = ULatticeControlPointsMechanic::GetControlPoints
                      (*(ULatticeControlPointsMechanic **)(lVar7 + 0x1b0));
  if ((*(int *)(*plVar2 + 0x38) != pTVar20->ArrayNum) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("LatticeGraph->VertexCount() == CurrentLatticePoints.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\LatticeDeformerTool.cpp"
                          ,0x1a1,L""), bVar14)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  lVar25 = *plVar2;
  uVar29 = *(int *)(lVar25 + 0xc) + *(int *)(lVar25 + 8) * 0x200;
  puVar23 = puVar28;
  if (((uVar29 != 0) &&
      (puVar23 = (undefined8 *)0x0,
      0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar25 + 0x10) - 1U))) &&
     (puVar23 = (undefined8 *)&DAT_00000001, 1 < (int)uVar29)) {
    do {
      uVar24 = (ulonglong)((uint)puVar23 & 0x1ff);
      lVar26 = (*(undefined8 **)(lVar25 + 0x10))[(ulonglong)puVar23 >> 9];
      if ((*(short *)(lVar26 + uVar24 * 2) != 0) && (*(short *)(lVar26 + uVar24 * 2) != -1)) break;
      uVar27 = (uint)puVar23 + 1;
      puVar23 = (undefined8 *)(ulonglong)uVar27;
    } while ((int)uVar27 < (int)uVar29);
  }
  uVar27 = (uint)puVar23;
joined_r0x00014cd17580:
  do {
    if (uVar27 == uVar29) {
      TVar21 = UE::MeshDeformation::ConstructUniformConstrainedMeshDeformer
                         ((FDynamicGraph3<double> *)&puStackX_10);
      pIVar3 = (IConstrainedMeshSolver *)(lVar7 + 0x1e8);
      if (pIVar3 != TVar21.Ptr) {
        IVar10 = *pIVar3;
        *pIVar3 = *TVar21.Ptr;
        *TVar21.Ptr = (IConstrainedMeshSolver)0x0;
        if (IVar10 != (IConstrainedMeshSolver)0x0) {
          (*(code *)**(undefined8 **)IVar10)(IVar10,1);
        }
      }
      if (puStackX_10 != (undefined8 *)0x0) {
        (**(code **)*puStackX_10)(puStackX_10,1);
      }
      if (0 < pTVar20->ArrayNum) {
        uVar30 = (undefined4)__real_3ff0000000000000;
        do {
          uVar29 = (uint)puVar28;
          if (*(int *)(lVar7 + 0x200) != *(int *)(lVar7 + 0x22c)) {
            lVar25 = lVar7 + 0x230;
            if (*(longlong *)(lVar7 + 0x238) != 0) {
              lVar25 = *(longlong *)(lVar7 + 0x238);
            }
            iVar17 = *(int *)(lVar25 + ((ulonglong)(*(int *)(lVar7 + 0x240) - 1) &
                                       (ulonglong)puVar28) * 4);
            if (iVar17 != -1) {
              lVar25 = *(longlong *)
                        &(((TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                            *)(lVar7 + 0x1f8))->Pairs).Elements;
              do {
                if (*(uint *)(lVar25 + (longlong)iVar17 * 0x28) == uVar29) {
                  IVar10 = *pIVar3;
                  pcVar19 = *(code **)(*(longlong *)IVar10 + 8);
                  pTVar22 = TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                            ::FindChecked((TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                                           *)(lVar7 + 0x1f8),uVar29);
                  (*pcVar19)(IVar10,puVar28,uVar30,pTVar22,1);
                  goto LAB_14cd1790f;
                }
                iVar17 = *(int *)(lVar25 + 0x20 + (longlong)iVar17 * 0x28);
              } while (iVar17 != -1);
            }
          }
          lVar25 = *(longlong *)(lVar7 + 0x1b0);
          if (*(int *)(lVar25 + 0x350) != *(int *)(lVar25 + 0x37c)) {
            lVar26 = lVar25 + 0x380;
            if (*(longlong *)(lVar25 + 0x388) != 0) {
              lVar26 = *(longlong *)(lVar25 + 0x388);
            }
            iVar17 = *(int *)(lVar26 + ((ulonglong)(*(int *)(lVar25 + 0x390) - 1) &
                                       (ulonglong)puVar28) * 4);
            if (iVar17 != -1) {
              do {
                if (*(uint *)(*(longlong *)(lVar25 + 0x348) + (longlong)iVar17 * 0xc) == uVar29) {
                  uVar27 = 0;
                  if ((int)uVar29 < pTVar20->ArrayNum) {
                    uVar27 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar19 = (code *)swi(3);
                    (*pcVar19)();
                    return;
                  }
                  (**(code **)(*(longlong *)*pIVar3 + 8))
                            (*pIVar3,puVar28,uVar30,
                             (pTVar20->AllocatorInstance).Data + (longlong)(int)uVar29 * 0x18,1);
                  break;
                }
                iVar17 = *(int *)(*(longlong *)(lVar25 + 0x348) + 4 + (longlong)iVar17 * 0xc);
              } while (iVar17 != -1);
            }
          }
LAB_14cd1790f:
          puVar28 = (undefined8 *)(ulonglong)(uVar29 + 1);
        } while ((int)(uVar29 + 1) < pTVar20->ArrayNum);
      }
      return;
    }
    while( true ) {
      uVar27 = (uint)puVar23;
      lVar26 = *plVar2;
      uVar16 = 0;
      if ((int)uVar27 < pTVar20->ArrayNum) {
        uVar16 = ~uVar27 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      pFVar9 = (pTVar20->AllocatorInstance).Data;
      pFVar4 = pFVar9 + (longlong)(int)uVar27 * 0x18;
      uVar30 = *(undefined4 *)pFVar4;
      uVar11 = *(undefined4 *)(pFVar4 + 4);
      uVar12 = *(undefined4 *)(pFVar4 + 8);
      uVar13 = *(undefined4 *)(pFVar4 + 0xc);
      uVar6 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar27 * 0x18 + 0x10);
      sVar15 = _dclass(uVar30);
      uStack_78 = uVar6;
      if ((((0 < sVar15) || (sVar15 = _dclass(uVar12), 0 < sVar15)) ||
          (sVar15 = _dclass((int)uVar6), 0 < sVar15)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("VectorUtil::IsFinite(VNewPos)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph3.h"
                              ,0x2b,L""), bVar14)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      if (((-1 < (int)uVar27) &&
          ((int)uVar27 < *(int *)(lVar26 + 8) * 0x200 + *(int *)(lVar26 + 0xc))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar26 + 0x10) + ((ulonglong)puVar23 >> 9) * 8) +
                             (ulonglong)(uVar27 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        uVar16 = uVar27 * 3;
        puVar5 = (undefined4 *)
                 (*(longlong *)(*(longlong *)(lVar26 + 0x118) + (ulonglong)(uVar16 >> 9) * 8) +
                 (ulonglong)(uVar16 & 0x1ff) * 8);
        *puVar5 = uVar30;
        puVar5[1] = uVar11;
        puVar5 = (undefined4 *)
                 (*(longlong *)(*(longlong *)(lVar26 + 0x118) + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                 (ulonglong)(uVar16 + 1 & 0x1ff) * 8);
        *puVar5 = uVar12;
        puVar5[1] = uVar13;
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(lVar26 + 0x118) + (ulonglong)(uVar16 + 2 >> 9) * 8) +
         (ulonglong)(uVar16 + 2 & 0x1ff) * 8) = uVar6;
        *(int *)(lVar26 + 0x100) = *(int *)(lVar26 + 0x100) + 1;
        *(int *)(lVar26 + 0x104) = *(int *)(lVar26 + 0x104) + 1;
      }
      uVar27 = uVar27 + 1;
      puVar23 = (undefined8 *)(ulonglong)uVar27;
      if ((int)uVar29 <= (int)uVar27) break;
      while( true ) {
        uVar24 = (ulonglong)((uint)puVar23 & 0x1ff);
        lVar26 = *(longlong *)(*(longlong *)(lVar25 + 0x10) + ((ulonglong)puVar23 >> 9) * 8);
        if ((*(short *)(lVar26 + uVar24 * 2) != 0) && (*(short *)(lVar26 + uVar24 * 2) != -1))
        break;
        uVar27 = (uint)puVar23 + 1;
        puVar23 = (undefined8 *)(ulonglong)uVar27;
        if ((int)uVar29 <= (int)uVar27) goto joined_r0x00014cd17580;
      }
    }
  } while( true );
}

// Execute @ 14ccf9330

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_13>_>
::Execute(void *this)

{
  bool bVar1;
  
  bVar1 = `ULatticeDeformerTool::Setup'::__l2::<lambda_13>::operator()
                    ((void *)((longlong)this + 0x18));
  return bVar1;
}

// ExecuteIfSafe @ 14ccf96d0

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
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,IGizmoFloatParameterSource *param_1,FGizmoFloatParameterChange param_2)

{
  undefined4 uStackX_14;
  
  uStackX_14 = param_2.CurrentValue;
  *(float *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0xe0) + 0xb4) = uStackX_14;
  UMeshSpaceDeformerTool::UpdatePreview(*(UMeshSpaceDeformerTool **)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ccf9710

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
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,IGizmoFloatParameterSource *param_1,FGizmoFloatParameterChange param_2)

{
  undefined4 uStackX_14;
  
  uStackX_14 = param_2.CurrentValue;
  *(float *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0xe0) + 0xb8) = uStackX_14;
  UMeshSpaceDeformerTool::UpdatePreview(*(UMeshSpaceDeformerTool **)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ccf9750

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this,IGizmoFloatParameterSource *param_1,FGizmoFloatParameterChange param_2)

{
  `UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14ccf9770

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  undefined8 local_res8 [4];
  code *local_18;
  undefined8 *local_10;
  
  local_res8[0] = *(undefined8 *)((longlong)this + 0x18);
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``URemeshMeshTool::Setup'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UMeshOpPreviewWithBackgroundCompute::ProcessCurrentMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18,
             false);
  return true;
}

// ExecuteIfSafe @ 14ccf97c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  `URecomputeUVsTool::Setup'::__l2::<lambda_4>::operator()((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14ccf97e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>_>
::ExecuteIfSafe(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  `URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14ccf9800

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDynamicMeshOperator *param_1)

{
  `UHoleFillTool::SetupPreview'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14ccf9820

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>_>
::ExecuteIfSafe(void *this,FDynamicMeshOperator *param_1)

{
  `URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14ccf9840

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_11>_>
::ExecuteIfSafe(void *this)

{
  `ULatticeDeformerTool::Setup'::__l2::<lambda_11>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14ccf9860

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
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_12>_>
::ExecuteIfSafe(void *this)

{
  if ((((*(ULatticeDeformerTool **)((longlong)this + 0x18))->Settings).field0_0x0.DebugPtr)->
      bSoftDeformation != false) {
    ULatticeDeformerTool::RebuildDeformer(*(ULatticeDeformerTool **)((longlong)this + 0x18));
  }
  return true;
}

// ExecuteIfSafe @ 14ccf9890

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_13>_>
::ExecuteIfSafe(void *this)

{
  `ULatticeDeformerTool::Setup'::__l2::<lambda_13>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14ccfdf20

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ccfdf30

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ccfdf40

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ccfdf50

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ccfdf60

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ccfdf70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ccfdf80

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ccfdf90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ccfdfa0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_11>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ccfdfb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_12>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14ccfdfc0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_13>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14ccfec90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ccfeca0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ccfecb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ccfecc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ccfecd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ccfece0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ccfecf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ccfed00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ccfed10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_11>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ccfed20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_12>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14ccfed30

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_13>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14cd02cc0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd02cd0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd02ce0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd02cf0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd02d00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd02d10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd02d20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd02d30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd02d40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_11>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd02d50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_12>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd02d60

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_13>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14cd035d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd035e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd035f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd03600

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd03610

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd03620

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd03630

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd03640

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd03650

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_11>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd03660

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_12>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd03670

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_13>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cd08740

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd08750

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd08760

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd08770

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd08780

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd08790

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd087a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd087b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd087c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_11>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd087d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_12>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd087e0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_13>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14cd30af0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd30b00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd30b10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd30b20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemeshMeshTool::Setup'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd30b30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URecomputeUVsTool::Setup'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd30b40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd30b50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UHoleFillTool::SetupPreview'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd30b60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd30b70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_11>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd30b80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_12>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd30b90

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::__l2::<lambda_13>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14cd65c80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::`2'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd65d00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::`2'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cd65d50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::`2'::<lambda_12>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd65df0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd65e70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cd65ec0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd65f60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd65fe0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cd66030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd660d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd66150

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cd661a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd66240

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::`2'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd662c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::`2'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cd66310

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::`2'::<lambda_13>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cd69120

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
::Execute(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  undefined8 local_res8 [4];
  code *local_18;
  undefined8 *local_10;
  
  local_res8[0] = *(undefined8 *)((longlong)this + 0x18);
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UMeshOpPreviewWithBackgroundCompute::ProcessCurrentMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18,
             false);
  return;
}

// Execute @ 14cd69170

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
::Execute(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  `UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14cd69180

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
::Execute(void *this,UObject *param_1,FProperty *param_2)

{
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult
            (*(UMeshOpPreviewWithBackgroundCompute **)(*(longlong *)((longlong)this + 0x18) + 0x168)
            );
  return;
}

// Execute @ 14cd691a0

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
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
::Execute(void *this,UObject *param_1,FProperty *param_2)

{
  UUVProjectionTool::OnMaterialSettingsChanged(*(UUVProjectionTool **)((longlong)this + 0x18));
  return;
}

// Execute @ 14cd691b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
::Execute(void *this,FDynamicMeshOperator *param_1)

{
  *(int *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x148) + 0xb8) =
       param_1[1].ResultInfo.Warnings.ArrayNum;
  *(int *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x148) + 0xbc) =
       param_1[1].ResultInfo.Warnings.ArrayMax;
  return;
}

// ExecuteIfSafe @ 14cd69670

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
::ExecuteIfSafe(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  undefined8 local_res8 [4];
  code *local_18;
  undefined8 *local_10;
  
  local_res8[0] = *(undefined8 *)((longlong)this + 0x18);
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UMeshOpPreviewWithBackgroundCompute::ProcessCurrentMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18,
             false);
  return true;
}

// ExecuteIfSafe @ 14cd696c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
::ExecuteIfSafe(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  `UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14cd696e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UObject *param_1,FProperty *param_2)

{
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult
            (*(UMeshOpPreviewWithBackgroundCompute **)(*(longlong *)((longlong)this + 0x18) + 0x168)
            );
  return true;
}

// ExecuteIfSafe @ 14cd69710

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
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,UObject *param_1,FProperty *param_2)

{
  UUVProjectionTool::OnMaterialSettingsChanged(*(UUVProjectionTool **)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14cd69730

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
::ExecuteIfSafe(void *this,FDynamicMeshOperator *param_1)

{
  *(int *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x148) + 0xb8) =
       param_1[1].ResultInfo.Warnings.ArrayNum;
  *(int *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x148) + 0xbc) =
       param_1[1].ResultInfo.Warnings.ArrayMax;
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b780

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b790

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b7a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b7b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b7c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14cd6d410

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cd6d420

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cd6d430

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cd6d440

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cd6d450

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14cd6f8d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd6f8e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd6f8f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd6f900

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cd6f910

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14cd6fbb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd6fbc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd6fbd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd6fbe0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cd6fbf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cd71bd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd71be0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd71bf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd71c00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cd71c10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14cd82550

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82560

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82570

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82580

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82590

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

