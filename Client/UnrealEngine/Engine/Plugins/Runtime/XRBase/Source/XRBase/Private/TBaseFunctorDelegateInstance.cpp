// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 22

// CreateCopy @ 14cf85b70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cf85bf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cf85c40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cf85ce0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cf85d60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14cf85db0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUPrimitiveComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cf89c30

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
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::Execute(void *this,UPrimitiveComponent *param_1)

{
  longlong *plVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  longlong local_res8 [4];
  
  *(char *)(*(longlong *)((longlong)this + 0x18) + 0x60) =
       (param_1 == (UPrimitiveComponent *)0x0) + '\x01';
  plVar1 = *(longlong **)((longlong)this + 0x18);
  local_res8[0] = plVar1[0xd];
  if (local_res8[0] != 0) {
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(plVar1 + 6);
    if (param_1 == (UPrimitiveComponent *)0x0) {
      this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(plVar1 + 9);
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (this_00,local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014cf89c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c8))(plVar1);
    return;
  }
  return;
}

// Execute @ 14cf89c90

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
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::Execute(void *this,UPrimitiveComponent *param_1)

{
  longlong *plVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  longlong local_res8 [4];
  
  *(char *)(*(longlong *)((longlong)this + 0x18) + 0x60) =
       (param_1 == (UPrimitiveComponent *)0x0) + '\x01';
  plVar1 = *(longlong **)((longlong)this + 0x18);
  local_res8[0] = plVar1[0xd];
  if (local_res8[0] != 0) {
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(plVar1 + 6);
    if (param_1 == (UPrimitiveComponent *)0x0) {
      this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(plVar1 + 9);
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (this_00,local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014cf89cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c8))(plVar1);
    return;
  }
  return;
}

// ExecuteIfSafe @ 14cf8b260

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
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UPrimitiveComponent *param_1)

{
  longlong *plVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  longlong local_res8 [4];
  
  *(char *)(*(longlong *)((longlong)this + 0x18) + 0x60) =
       (param_1 == (UPrimitiveComponent *)0x0) + '\x01';
  plVar1 = *(longlong **)((longlong)this + 0x18);
  local_res8[0] = plVar1[0xd];
  if (local_res8[0] != 0) {
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(plVar1 + 6);
    if (param_1 == (UPrimitiveComponent *)0x0) {
      this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(plVar1 + 9);
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (this_00,local_res8);
    (**(code **)(*plVar1 + 0x2c8))(plVar1);
  }
  return true;
}

// ExecuteIfSafe @ 14cf8b2c0

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
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UPrimitiveComponent *param_1)

{
  longlong *plVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  longlong local_res8 [4];
  
  *(char *)(*(longlong *)((longlong)this + 0x18) + 0x60) =
       (param_1 == (UPrimitiveComponent *)0x0) + '\x01';
  plVar1 = *(longlong **)((longlong)this + 0x18);
  local_res8[0] = plVar1[0xd];
  if (local_res8[0] != 0) {
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(plVar1 + 6);
    if (param_1 == (UPrimitiveComponent *)0x0) {
      this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(plVar1 + 9);
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (this_00,local_res8);
    (**(code **)(*plVar1 + 0x2c8))(plVar1);
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14cf8de70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14cf8de80

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14cf901b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14cf901c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14cf919d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cf919e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14cf923a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14cf923b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cf93210

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14cf93220

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14cf9d9e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cf9d9f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

