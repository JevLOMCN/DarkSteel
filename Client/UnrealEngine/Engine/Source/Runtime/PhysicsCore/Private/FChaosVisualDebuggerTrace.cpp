// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 1

// GetCVDContext<Chaos::FPBDRigidsSolver> @ 14413af60

void __cdecl
FChaosVisualDebuggerTrace::GetCVDContext<Chaos::FPBDRigidsSolver>
          (FPBDRigidsSolver *param_1,FChaosVDContext *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FChaosVDOptionalDataChannel *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  param_2->OwnerID = (int)param_1->_padding_;
  param_2->Id = *(int *)((longlong)&param_1->_padding_ + 4);
  param_2->Type = (int)param_1->_padding_;
  param_2->Attributes = *(int *)((longlong)&param_1->_padding_ + 4);
  pTVar1 = (TReferenceControllerBase<1> *)param_1->_padding_;
  pFVar2 = (FChaosVDOptionalDataChannel *)param_1->_padding_;
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

