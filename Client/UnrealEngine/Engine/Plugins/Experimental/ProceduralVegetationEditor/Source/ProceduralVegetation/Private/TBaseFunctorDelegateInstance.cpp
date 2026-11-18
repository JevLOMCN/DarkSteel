// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 11

// CreateCopy @ 14da79310

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da79390

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14da793e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14da80530

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
TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::__l2::<lambda_1>_>
::Execute(void *this,UMeshComponent *param_1)

{
  UWorld *pUVar1;
  
  pUVar1 = AActor::GetWorld((AActor *)**(undefined8 **)((longlong)this + 0x18));
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)param_1,pUVar1,(FRegisterComponentContext *)0x0);
  (**(code **)(param_1->_padding_ + 0x508))
            (param_1,*(undefined8 *)(**(longlong **)((longlong)this + 0x18) + 0x1b8),
             &FAttachmentTransformRules::KeepRelativeTransform,0);
  AActor::AddInstanceComponent
            ((AActor *)**(undefined8 **)((longlong)this + 0x18),(UActorComponent *)param_1);
  return;
}

// ExecuteIfSafe @ 14da80610

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
TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UMeshComponent *param_1)

{
  UWorld *pUVar1;
  
  pUVar1 = AActor::GetWorld((AActor *)**(undefined8 **)((longlong)this + 0x18));
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)param_1,pUVar1,(FRegisterComponentContext *)0x0);
  (**(code **)(param_1->_padding_ + 0x508))
            (param_1,*(undefined8 *)(**(longlong **)((longlong)this + 0x18) + 0x1b8),
             &FAttachmentTransformRules::KeepRelativeTransform,0);
  AActor::AddInstanceComponent
            ((AActor *)**(undefined8 **)((longlong)this + 0x18),(UActorComponent *)param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14da93180

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14da96f40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14da9a8b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14da9acb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14da9af50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14daaa380

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshComponent_*),FDefaultDelegateUserPolicy,`PV::Utilities::AddFoliageInstancesToActor'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

