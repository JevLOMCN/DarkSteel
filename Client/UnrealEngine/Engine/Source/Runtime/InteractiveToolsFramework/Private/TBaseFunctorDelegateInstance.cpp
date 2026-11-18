// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 33

// CreateCopy @ 14969a930

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::`2'::<lambda_5>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14969a9c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::`2'::<lambda_5>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  return;
}

// CreateCopy @ 14969aa10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::`2'::<lambda_5>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
    *(undefined4 *)(puVar7 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14969e730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
::Execute(void *this,USceneComponent *param_1,EUpdateTransformFlags param_2,ETeleportType param_3)

{
  `UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 14969e830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
::ExecuteIfSafe(void *this,USceneComponent *param_1,EUpdateTransformFlags param_2,
               ETeleportType param_3)

{
  `UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1496a0480

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1496a3910

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1496a92b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1496ab930

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1496ae3f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1496c3350

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1496d9890

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1496d9910

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1496d9960

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1496d9a00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1496d9a80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1496d9ad0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1496dbd30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::__l2::<lambda_1>_>
::Execute(void *this,UObject *param_1,FProperty *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496dbd37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x310))();
  return;
}

// Execute @ 1496dbd50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::__l2::<lambda_1>_>
::Execute(void *this,UObject *param_1,FProperty *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496dbd57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x310))();
  return;
}

// ExecuteIfSafe @ 1496dbe20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UObject *param_1,FProperty *param_2)

{
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x310))();
  return true;
}

// ExecuteIfSafe @ 1496dbe40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UObject *param_1,FProperty *param_2)

{
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x310))();
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1496dcba0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1496dcbb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1496dd140

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1496dd150

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1496de520

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1496de530

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1496deb80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1496deb90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1496e2630

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1496e2640

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1496e6f60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::AddToolPropertySource'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1496e6f70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UInteractiveTool::ReplaceToolPropertySource'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

