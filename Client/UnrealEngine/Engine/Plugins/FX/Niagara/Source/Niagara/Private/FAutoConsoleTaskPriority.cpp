// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~FAutoConsoleTaskPriority @ 1493d0e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutoConsoleTaskPriority::~FAutoConsoleTaskPriority(FAutoConsoleTaskPriority *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)&(this->Variable).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->Variable);
  pFVar1 = (this->FullHelpText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RawSetting).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

