// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ~TRangeSet<float> @ 14ea96b40

void __thiscall TRangeSet<float>::~TRangeSet<float>(TRangeSet<float> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Ranges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

