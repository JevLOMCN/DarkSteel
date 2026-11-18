// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~FEngineShowFlags @ 14ddcad90

void __thiscall FEngineShowFlags::~FEngineShowFlags(FEngineShowFlags *this)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (this->CustomShowFlags).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

