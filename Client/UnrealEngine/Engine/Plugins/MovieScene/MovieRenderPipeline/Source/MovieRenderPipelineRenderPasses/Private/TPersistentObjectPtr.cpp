// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~TPersistentObjectPtr<FSoftObjectPath> @ 14ddc9af0

void __thiscall
TPersistentObjectPtr<FSoftObjectPath>::~TPersistentObjectPtr<FSoftObjectPath>
          (TPersistentObjectPtr<FSoftObjectPath> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ObjectID).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

