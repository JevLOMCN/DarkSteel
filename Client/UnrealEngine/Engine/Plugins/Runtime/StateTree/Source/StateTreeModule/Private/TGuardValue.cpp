// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// TGuardValue<TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1>,TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1>_> @ 14d4e9a70

TGuardValue<TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1>,TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1>_>
* __thiscall
TGuardValue<TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1>,TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1>_>
::
TGuardValue<TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1>,TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1>_>
          (TGuardValue<TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1>,TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1>_>
           *this,TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1> *param_1,
          TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1> *pTVar2;
  FSelectStateResult *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->RefValue = param_1;
  (this->OriginalValue).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->OriginalValue).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pTVar2 = this->RefValue;
  pFVar3 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pTVar2->SharedReferenceCount).ReferenceController;
  pTVar2->Object = pFVar3;
  (pTVar2->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this;
}

