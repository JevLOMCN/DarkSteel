// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FVisualizationDataLegendEntry @ 1457c43a0

void __thiscall
FVisualizationDataLegendEntry::~FVisualizationDataLegendEntry(FVisualizationDataLegendEntry *this)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->Label).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001457c43ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

