// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetCVDContext<ImmediatePhysics_Chaos::FSimulation> @ 148240170

void __cdecl
FChaosVisualDebuggerTrace::GetCVDContext<ImmediatePhysics_Chaos::FSimulation>
          (FSimulation *param_1,FChaosVDContext *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FChaosVDOptionalDataChannel *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  param_2->OwnerID = (param_1->CVDContextData).OwnerID;
  param_2->Id = (param_1->CVDContextData).Id;
  param_2->Type = (param_1->CVDContextData).Type;
  param_2->Attributes = (param_1->CVDContextData).Attributes;
  pTVar1 = (param_1->CVDContextData).CurrentDataChannel.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->CVDContextData).CurrentDataChannel.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_2->CurrentDataChannel).SharedReferenceCount.ReferenceController;
  (param_2->CurrentDataChannel).Object = pFVar2;
  (param_2->CurrentDataChannel).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetDebugName<ImmediatePhysics_Chaos::FSimulation> @ 148241120

FString * __cdecl
FChaosVisualDebuggerTrace::GetDebugName<ImmediatePhysics_Chaos::FSimulation>
          (FString *__return_storage_ptr__,FSimulation *param_1)

{
  ::FName::ToString(&param_1->DebugName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSolverIDFromWorld<UWorld> @ 1483429e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl FChaosVisualDebuggerTrace::GetSolverIDFromWorld<UWorld>(UWorld *param_1)

{
  longlong lVar1;
  
  if (((param_1 != (UWorld *)0x0) && (param_1->PhysicsScene != (FPhysScene_Chaos *)0x0)) &&
     (lVar1 = param_1->PhysicsScene->_padding_, lVar1 != 0)) {
    return *(int *)(lVar1 + 0x304);
  }
  return -1;
}

