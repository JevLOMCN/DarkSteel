// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// ~FOnDemandMountArgs @ 1445a9690

void __thiscall UE::IoStore::FOnDemandMountArgs::~FOnDemandMountArgs(FOnDemandMountArgs *this)

{
  FScriptContainerElement *pFVar1;
  FOnDemandToc *this_00;
  
  FOnDemandHostGroup::~FOnDemandHostGroup(&this->HostGroup);
  pFVar1 = (this->FilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TocRelativeUrl).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->Toc).Ptr;
  if (this_00 != (FOnDemandToc *)0x0) {
    FOnDemandToc::~FOnDemandToc(this_00);
    ::operator_delete(this_00,0xa0);
    return;
  }
  return;
}

