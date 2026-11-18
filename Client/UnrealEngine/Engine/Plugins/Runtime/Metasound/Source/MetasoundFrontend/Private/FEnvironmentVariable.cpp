// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// ~FEnvironmentVariable @ 14ad9e030

void __thiscall
Audio::FParameterInterface::FEnvironmentVariable::~FEnvironmentVariable(FEnvironmentVariable *this)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->Description).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->DisplayName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad9e058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

