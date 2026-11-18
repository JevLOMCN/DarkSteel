// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ~FLabelAndTooltip @ 149eef6e0

void __thiscall PCGInputOutputPrivate::FLabelAndTooltip::~FLabelAndTooltip(FLabelAndTooltip *this)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->Tooltip).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149eef6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

