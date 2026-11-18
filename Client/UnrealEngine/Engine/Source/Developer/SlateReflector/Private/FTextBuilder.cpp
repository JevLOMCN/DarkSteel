// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 2

// FTextBuilder @ 142e0b5e0

FTextBuilder * __thiscall FTextBuilder::FTextBuilder(FTextBuilder *this)

{
  (this->Lines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lines).ArrayNum = 0;
  (this->Lines).ArrayMax = 0;
  this->IndentCount = 0;
  return this;
}

// ~FTextBuilder @ 142e143f0

void __thiscall FTextBuilder::~FTextBuilder(FTextBuilder *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FText,int>((FText *)(this->Lines).AllocatorInstance.Data,(this->Lines).ArrayNum);
  pFVar1 = (this->Lines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

