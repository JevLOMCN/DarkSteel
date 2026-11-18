// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// ~FManifestBuildStreamerConfig @ 1432287b0

void __thiscall
BuildPatchServices::FManifestBuildStreamerConfig::~FManifestBuildStreamerConfig
          (FManifestBuildStreamerConfig *this)

{
  FBlockEntry *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->DesiredBytes).Head;
  while (pFVar1 != (FBlockEntry *)0x0) {
    (this->DesiredBytes).Tail = pFVar1->Next;
    pFVar1->Prev = (FBlockEntry *)0x0;
    pFVar1->Next = (FBlockEntry *)0x0;
    ::operator_delete(pFVar1,0x20);
    pFVar1 = (this->DesiredBytes).Tail;
    (this->DesiredBytes).Head = pFVar1;
  }
  pFVar2 = (this->CloudDirectory).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

