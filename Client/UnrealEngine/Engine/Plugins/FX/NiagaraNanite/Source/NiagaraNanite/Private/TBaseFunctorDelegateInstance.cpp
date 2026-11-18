// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 11

// CreateCopy @ 14da42580

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRDGBuilder__AEBUFGPUSceneWriteDelegateParams___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::`18'::<lambda_1>_>
               ::_vftable_;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da42630

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRDGBuilder__AEBUFGPUSceneWriteDelegateParams___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::`18'::<lambda_1>_>
               ::_vftable_;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x48);
      }
                    /* WARNING: Could not recover jumptable at 0x00014da42694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)();
      return;
    }
  }
  return;
}

// CreateCopy @ 14da426b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRDGBuilder__AEBUFGPUSceneWriteDelegateParams___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::`18'::<lambda_1>_>
               ::_vftable_;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar4)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14da42d30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::Execute(void *this,FRDGBuilder *param_1,FGPUSceneWriteDelegateParams *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)this + 0x20);
  plVar2 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)this + 0x48);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014da42d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 14da43250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::ExecuteIfSafe(void *this,FRDGBuilder *param_1,FGPUSceneWriteDelegateParams *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  pcVar1 = *(code **)((longlong)this + 0x20);
  plVar3 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x48);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14da432f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14da43660

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14da44290

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14da44460

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14da44a00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14da46ad0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

