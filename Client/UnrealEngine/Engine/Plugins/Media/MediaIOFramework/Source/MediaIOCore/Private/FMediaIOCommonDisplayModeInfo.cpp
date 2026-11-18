// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 1

// ~FMediaIOCommonDisplayModeInfo @ 14d78c860

void __thiscall
FMediaIOCommonDisplayModeInfo::~FMediaIOCommonDisplayModeInfo(FMediaIOCommonDisplayModeInfo *this)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->Name).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d78c86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

