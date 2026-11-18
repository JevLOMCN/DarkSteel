// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 24

// CreateCopy @ 14969ac50

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x38);
    puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
    puVar2[7] = uVar1;
    puVar2[8] = *(undefined8 *)((longlong)this + 0x40);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14969acf0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x38);
    puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
    puVar2[7] = uVar1;
    puVar2[8] = *(undefined8 *)((longlong)this + 0x40);
  }
  return;
}

// CreateCopy @ 14969ad60

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined8 *)((longlong)this + 0x28);
    puVar4[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar4[5] = uVar2;
    uVar2 = *(undefined8 *)((longlong)this + 0x38);
    puVar4[6] = *(undefined8 *)((longlong)this + 0x30);
    puVar4[7] = uVar2;
    puVar4[8] = *(undefined8 *)((longlong)this + 0x40);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14969ae20

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
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
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::`5'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14969aeb0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::`5'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14969af00

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
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
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::`5'::<lambda_6>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14969e790

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::Execute(void *this,IGizmoFloatParameterSource *param_1,FGizmoFloatParameterChange param_2)

{
  ``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1,param_2);
  return;
}

// Execute @ 14969e7a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
::Execute(void *this)

{
  longlong *plVar1;
  
  UBaseBrushTool::RecalculateBrushRadius(*(UBaseBrushTool **)((longlong)this + 0x20));
  plVar1 = *(longlong **)((longlong)this + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014969e7c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x340))(plVar1,plVar1[0x25]);
  return;
}

// ExecuteIfSafe @ 14969e930

/* WARNING: Removing unreachable block (ram,0x00014969e9a8) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,IGizmoFloatParameterSource *param_1,FGizmoFloatParameterChange param_2)

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
    ``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1,param_2);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14969ea10

/* WARNING: Removing unreachable block (ram,0x00014969ea76) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
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
    UBaseBrushTool::RecalculateBrushRadius(*(UBaseBrushTool **)((longlong)this + 0x20));
    plVar1 = *(longlong **)((longlong)this + 0x20);
    (**(code **)(*plVar1 + 0x340))(plVar1,plVar1[0x25]);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return bVar2;
}

// GetBoundProgramCounterForTimerManager @ 1496a04a0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1496a04b0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1496a3930

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 1496a3940

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 1496a92d0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 1496a92e0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 1496ab970

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 1496ab9a0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 1496ad330

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1496ad350

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1496ae420

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 1496ae430

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 1496c3370

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1496c3380

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

