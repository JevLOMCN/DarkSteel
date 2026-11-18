// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 204

// CreateCopy @ 14cbe8fc0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
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
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cbe9050

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cbe90a0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
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
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cbeb310

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
::Execute(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  TTransform<double> local_68;
  
  local_68.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  UPreviewMesh::SetTransform
            (*(UPreviewMesh **)(*(longlong *)((longlong)this + 0x20) + 0xf8),&local_68);
  return;
}

// ExecuteIfSafe @ 14cbec0a0

/* WARNING: Removing unreachable block (ram,0x00014cbec122) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  TTransform<double> local_78;
  
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
    local_78.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    local_78.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
    local_78.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    local_78.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
    local_78.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    local_78.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
    local_78.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    local_78.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
    local_78.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    local_78.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
    local_78.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    local_78.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
    UPreviewMesh::SetTransform
              (*(UPreviewMesh **)(*(longlong *)((longlong)this + 0x20) + 0xf8),&local_78);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 14cbee1b0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14cbee670

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cbf2070

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14cbf22d0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14cbf2300

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14cbf23e0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14cbf6fc0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14cc515d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
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
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::`62'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc51660

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::`62'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cc516b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
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
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::`62'::<lambda_13>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cc51760

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
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
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::`19'::<lambda_30>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc517f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::`19'::<lambda_30>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cc51840

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
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
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::`19'::<lambda_30>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cc518f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
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
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::`2'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cc51980

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::`2'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cc519d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
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
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::`2'::<lambda_8>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cc564a0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
::Execute(void *this,UTransformProxy *param_1)

{
  `UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>::operator()
            ((void *)((longlong)this + 0x20),param_1);
  return;
}

// Execute @ 14cc564b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
::Execute(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  
  lVar1 = *(longlong *)((longlong)this + 0x20);
  fVar3 = FBrushToolRadius::GetWorldRadius
                    ((FBrushToolRadius *)(*(longlong *)(lVar1 + 0x128) + 0xb0));
  *(double *)(lVar1 + 0x820) = (double)fVar3;
  plVar2 = *(longlong **)((longlong)this + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014cc564fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x340))(plVar2,plVar2[0x25]);
  return;
}

// Execute @ 14cc56510

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
::Execute(void *this)

{
  UPreviewMesh::FastNotifySecondaryTrianglesChanged
            (*(UPreviewMesh **)(*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x168) + 0x68))
  ;
  return;
}

// ExecuteIfSafe @ 14cc56e60

/* WARNING: Removing unreachable block (ram,0x00014cc56ece) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
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
    `UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>::operator()
              ((void *)((longlong)this + 0x20),param_1);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cc56f30

/* WARNING: Removing unreachable block (ram,0x00014cc56f96) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
::ExecuteIfSafe(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UObject *pUVar5;
  float fVar6;
  UObject *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    TVar4 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar3) {
    lVar1 = *(longlong *)((longlong)this + 0x20);
    fVar6 = FBrushToolRadius::GetWorldRadius
                      ((FBrushToolRadius *)(*(longlong *)(lVar1 + 0x128) + 0xb0));
    *(double *)(lVar1 + 0x820) = (double)fVar6;
    plVar2 = *(longlong **)((longlong)this + 0x20);
    (**(code **)(*plVar2 + 0x340))(plVar2,plVar2[0x25]);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return bVar3;
}

// ExecuteIfSafe @ 14cc57020

/* WARNING: Removing unreachable block (ram,0x00014cc57086) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
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
    UPreviewMesh::FastNotifySecondaryTrianglesChanged
              (*(UPreviewMesh **)
                (*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x168) + 0x68));
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b250

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b260

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cc5b270

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14cc5b490

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cc5b4a0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cc5b4b0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cc5e3d0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cc5e3e0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cc5e3f0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14cc5edc0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cc5edf0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cc5ee20

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14cc622b0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cc622d0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cc622f0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14cc62610

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cc62620

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cc62630

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14cc82dd0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cc82de0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDynamicMeshSculptTool::Setup'::__l19::<lambda_30>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cc82df0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UEditMeshPolygonsTool::Setup'::__l2::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14ccf50f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
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
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::`6'::<lambda_14>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ccf5180

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::`6'::<lambda_14>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14ccf51d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
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
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::`6'::<lambda_14>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ccf9690

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
::Execute(void *this)

{
  longlong *plVar1;
  
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x490))();
  plVar1 = *(longlong **)((longlong)this + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014ccf96b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x340))(plVar1,plVar1[0x25]);
  return;
}

// ExecuteIfSafe @ 14ccfa0c0

/* WARNING: Removing unreachable block (ram,0x00014ccfa126) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
::ExecuteIfSafe(void *this)

{
  longlong *plVar1;
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
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x490))();
    plVar1 = *(longlong **)((longlong)this + 0x20);
    (**(code **)(*plVar1 + 0x340))(plVar1,plVar1[0x25]);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return bVar2;
}

// GetBoundProgramCounterForTimerManager @ 14ccfe050

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14ccfedc0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd02df0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14cd03800

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14cd084b0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14cd088f0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14cd30c20

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMeshSculptToolBase::Setup'::__l6::<lambda_14>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14cd669f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd66a80

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd66ad0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd66b80

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd66c10

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd66c60

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd66d10

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd66da0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd66df0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd66ea0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
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
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd66f30

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd66f80

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
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
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd67030

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
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
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd670c0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd67110

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
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
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd671c0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd67250

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd672a0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd67350

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd673e0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd67430

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd674e0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd67570

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd675c0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd67670

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd67700

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd67750

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd67800

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd67890

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd678e0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd67990

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd67a20

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd67a70

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cd67b20

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cd67bb0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14cd67c00

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cd693b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
::Execute(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong lVar1;
  
  if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x455) == '\0') {
    lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x50);
    UPreviewMesh::UpdatePreview
              (*(UPreviewMesh **)(*(longlong *)(lVar1 + 0x40) + 0x68),
               *(FDynamicMesh3 **)(lVar1 + 0x30),FullUpdate,AllVertexAttribs);
    return;
  }
  return;
}

// Execute @ 14cd693f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
::Execute(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong lVar1;
  
  if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x401) == '\0') {
    lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x50);
    UPreviewMesh::UpdatePreview
              (*(UPreviewMesh **)(*(longlong *)(lVar1 + 0x40) + 0x68),
               *(FDynamicMesh3 **)(lVar1 + 0x30),FullUpdate,AllVertexAttribs);
    return;
  }
  return;
}

// Execute @ 14cd69430

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
::Execute(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_res10 [3];
  code *local_18;
  longlong *local_10;
  
  local_res10[0] = *(longlong *)((longlong)this + 0x20);
  if ((((*(char *)(local_res10[0] + 0x70) != '\0') && (*(longlong *)(local_res10[0] + 0x40) != 0))
      && (lVar1 = *(longlong *)(*(longlong *)(local_res10[0] + 0x40) + 0x40), lVar1 != 0)) &&
     ((plVar2 = *(longlong **)(lVar1 + 0x68), plVar2 != (longlong *)0x0 &&
      (*(longlong *)(local_res10[0] + 0x68) != 0)))) {
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPolyEditExtrudeEdgeActivity::UpdateDrawnPreviewEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    (**(code **)(*plVar2 + 0x2b0))(plVar2,&local_18);
  }
  return;
}

// Execute @ 14cd694a0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
::Execute(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  TTransform<double> local_68;
  
  local_68.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  `UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1,&local_68);
  return;
}

// Execute @ 14cd69500

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
::Execute(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_2->Translation).XY.m128d_f64[1];
  lVar1 = *(longlong *)((longlong)this + 0x20);
  dVar3 = (param_2->Translation).ZW.m128d_f64[0];
  if (((*(char *)(lVar1 + 0x70) != '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x40) + 0x40) != 0)) {
    *(double *)(lVar1 + 0x110) = (param_2->Translation).XY.m128d_f64[0] - *(double *)(lVar1 + 0xd8);
    *(double *)(lVar1 + 0x118) = dVar2 - *(double *)(lVar1 + 0xe0);
    *(double *)(lVar1 + 0x120) = dVar3 - *(double *)(lVar1 + 0xe8);
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult
              (*(UMeshOpPreviewWithBackgroundCompute **)
                (*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x40) + 0x40));
  }
  return;
}

// Execute @ 14cd69590

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
::Execute(void *this,FDynamicMeshOperator *param_1)

{
  `UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1);
  return;
}

// Execute @ 14cd695a0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
::Execute(void *this,FDynamicMeshOperator *param_1)

{
  `UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1);
  return;
}

// Execute @ 14cd695b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
::Execute(void *this,FDynamicMeshOperator *param_1)

{
  `UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1);
  return;
}

// Execute @ 14cd695c0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
::Execute(void *this,FDynamicMeshOperator *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)this + 0x20) + 0x88),
             (TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[1].ResultInfo);
  return;
}

// Execute @ 14cd695e0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
::Execute(void *this,FDynamicMeshOperator *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)this + 0x20) + 0x268),
             (TArray<int,TSizedDefaultAllocator<32>_> *)
             ((longlong)&param_1[2].ResultTransform.Scale3D.field0_0x0 + 0x10));
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)((longlong)this + 0x20) + 600)
             ,(TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[2].ResultInfo.Errors);
  return;
}

// Execute @ 14cd69630

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
::Execute(void *this,bool param_1)

{
  `UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1);
  return;
}

// Execute @ 14cd69640

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
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
::Execute(void *this,bool param_1)

{
  UPolyEditInsertEdgeLoopActivity::UpdateComputeInputs
            (*(UPolyEditInsertEdgeLoopActivity **)((longlong)this + 0x20));
  UPolyEditInsertEdgeLoopActivity::ClearPreview
            (*(UPolyEditInsertEdgeLoopActivity **)((longlong)this + 0x20));
  return;
}

// ExecuteIfSafe @ 14cd69b90

/* WARNING: Removing unreachable block (ram,0x00014cd69bf6) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong lVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UObject *pUVar4;
  undefined8 local_res8;
  
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
    if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x455) == '\0') {
      lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x50);
      UPreviewMesh::UpdatePreview
                (*(UPreviewMesh **)(*(longlong *)(lVar1 + 0x40) + 0x68),
                 *(FDynamicMesh3 **)(lVar1 + 0x30),FullUpdate,AllVertexAttribs);
    }
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

// ExecuteIfSafe @ 14cd69c70

/* WARNING: Removing unreachable block (ram,0x00014cd69cd6) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong lVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UObject *pUVar4;
  undefined8 local_res8;
  
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
    if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x401) == '\0') {
      lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x50);
      UPreviewMesh::UpdatePreview
                (*(UPreviewMesh **)(*(longlong *)(lVar1 + 0x40) + 0x68),
                 *(FDynamicMesh3 **)(lVar1 + 0x30),FullUpdate,AllVertexAttribs);
    }
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

// ExecuteIfSafe @ 14cd69d50

/* WARNING: Removing unreachable block (ram,0x00014cd69db6) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  UObject *pUVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar5;
  UObject *pUVar6;
  UObject *local_res8;
  code *local_28;
  UObject **local_20;
  
  pUVar6 = (UObject *)0x0;
  bVar4 = IsInGameThread();
  if (bVar4) {
    local_res8 = (UObject *)0x0;
  }
  else {
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
    pUVar1 = *(UObject **)((longlong)this + 0x20);
    if ((((pUVar1[2].field_0x20 != '\0') && (*(longlong *)&pUVar1[1].field_0x18 != 0)) &&
        (lVar2 = *(longlong *)(*(longlong *)&pUVar1[1].field_0x18 + 0x40), lVar2 != 0)) &&
       ((plVar3 = *(longlong **)(lVar2 + 0x68), plVar3 != (longlong *)0x0 &&
        (*(longlong *)&pUVar1[2].field_0x18 != 0)))) {
      local_20 = &local_res8;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeEdgeActivity::UpdateDrawnPreviewEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_res8 = pUVar1;
      (**(code **)(*plVar3 + 0x2b0))(plVar3,&local_28);
    }
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

// ExecuteIfSafe @ 14cd69e50

/* WARNING: Removing unreachable block (ram,0x00014cd69ed9) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  TTransform<double> local_88;
  
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
    local_88.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    local_88.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
    local_88.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    local_88.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
    local_88.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    local_88.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
    local_88.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    local_88.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
    local_88.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    local_88.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
    local_88.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    local_88.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
    `UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1,&local_88);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cd69f80

/* WARNING: Removing unreachable block (ram,0x00014cd69fbd) */
/* WARNING: Removing unreachable block (ram,0x00014cd6a010) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  longlong lVar1;
  double dVar2;
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
    lVar1 = *(longlong *)((longlong)this + 0x20);
    dVar2 = (param_2->Translation).XY.m128d_f64[1];
    dVar3 = (param_2->Translation).ZW.m128d_f64[0];
    if (((*(char *)(lVar1 + 0x70) != '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x40) + 0x40) != 0)) {
      *(double *)(lVar1 + 0x110) =
           (param_2->Translation).XY.m128d_f64[0] - *(double *)(lVar1 + 0xd8);
      *(double *)(lVar1 + 0x118) = dVar2 - *(double *)(lVar1 + 0xe0);
      *(double *)(lVar1 + 0x120) = dVar3 - *(double *)(lVar1 + 0xe8);
      UMeshOpPreviewWithBackgroundCompute::InvalidateResult
                (*(UMeshOpPreviewWithBackgroundCompute **)
                  (*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x40) + 0x40));
    }
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

// ExecuteIfSafe @ 14cd6a0d0

/* WARNING: Removing unreachable block (ram,0x00014cd6a13e) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDynamicMeshOperator *param_1)

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
    `UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cd6a1a0

/* WARNING: Removing unreachable block (ram,0x00014cd6a20e) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDynamicMeshOperator *param_1)

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
    `UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cd6a270

/* WARNING: Removing unreachable block (ram,0x00014cd6a2de) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDynamicMeshOperator *param_1)

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
    `UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cd6a340

/* WARNING: Removing unreachable block (ram,0x00014cd6a3ae) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDynamicMeshOperator *param_1)

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
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)((longlong)this + 0x20) + 0x88),
               (TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[1].ResultInfo);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cd6a410

/* WARNING: Removing unreachable block (ram,0x00014cd6a47e) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDynamicMeshOperator *param_1)

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
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)((longlong)this + 0x20) + 0x268),
               (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((longlong)&param_1[2].ResultTransform.Scale3D.field0_0x0 + 0x10));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)((longlong)this + 0x20) + 600),
               (TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[2].ResultInfo.Errors);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cd6a500

/* WARNING: Removing unreachable block (ram,0x00014cd6a56f) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,bool param_1)

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
    `UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14cd6a5d0

/* WARNING: Removing unreachable block (ram,0x00014cd6a5fc) */
/* WARNING: Removing unreachable block (ram,0x00014cd6a640) */
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
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,bool param_1)

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
    UPolyEditInsertEdgeLoopActivity::UpdateComputeInputs
              (*(UPolyEditInsertEdgeLoopActivity **)((longlong)this + 0x20));
    UPolyEditInsertEdgeLoopActivity::ClearPreview
              (*(UPolyEditInsertEdgeLoopActivity **)((longlong)this + 0x20));
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b810

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b820

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b830

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b840

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b850

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b860

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b870

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b880

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b890

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b8a0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b8b0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cd6b8c0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14cd6d4a0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cd6d4b0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cd6d4c0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cd6d4d0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cd6d4e0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cd6d4f0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cd6d500

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cd6d510

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cd6d520

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cd6d530

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cd6d540

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14cd6d550

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6f960

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6f970

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6f980

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6f990

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6f9a0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6f9b0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6f9c0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6f9d0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6f9e0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6f9f0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6fa00

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14cd6fa10

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14cd6fcc0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cd6fcf0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cd6fd20

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cd6fd50

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cd6fd80

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cd6fdb0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cd6fde0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cd6fe10

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cd6fe40

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cd6fe70

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cd6fea0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14cd6fed0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14cd71640

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cd71660

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cd71680

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cd716a0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cd716c0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cd716e0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cd71700

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cd71720

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cd71740

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cd71760

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cd71780

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cd717a0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14cd71ca0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cd71cb0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cd71cc0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cd71cd0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cd71ce0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cd71cf0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cd71d00

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cd71d10

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cd71d20

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cd71d30

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cd71d40

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 14cd71d50

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14cd825e0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd825f0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82600

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82610

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82620

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82630

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82640

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82650

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82660

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82670

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82680

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cd82690

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

