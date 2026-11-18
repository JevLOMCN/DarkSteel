// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// operator= @ 1445a9d70

FOnDemandHostGroup * __thiscall
UE::IoStore::FOnDemandHostGroup::operator=(FOnDemandHostGroup *this,FOnDemandHostGroup *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FImpl *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->Impl).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Impl).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Impl).SharedReferenceCount.ReferenceController;
  (this->Impl).Object = pFVar2;
  (this->Impl).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

