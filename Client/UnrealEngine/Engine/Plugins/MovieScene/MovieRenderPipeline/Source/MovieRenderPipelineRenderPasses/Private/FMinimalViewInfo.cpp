// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~FMinimalViewInfo @ 14ddcafd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall FMinimalViewInfo::~FMinimalViewInfo(FMinimalViewInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

