// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Load @ 141a08c30

void __thiscall FNameMap::Load(FNameMap *this,FArchive *param_1,EType param_2)

{
  FScriptContainerElement *pFVar1;
  FNameMap *pFVar2;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar2 = (FNameMap *)LoadNameBatch(&local_18,param_1,None);
  if (this != pFVar2) {
    pFVar1 = (this->NameEntries).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->NameEntries).AllocatorInstance.Data = (pFVar2->NameEntries).AllocatorInstance.Data;
    (pFVar2->NameEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NameEntries).ArrayNum = (pFVar2->NameEntries).ArrayNum;
    (this->NameEntries).ArrayMax = (pFVar2->NameEntries).ArrayMax;
    (pFVar2->NameEntries).ArrayNum = 0;
    (pFVar2->NameEntries).ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  this->NameMapType = param_2;
  return;
}

