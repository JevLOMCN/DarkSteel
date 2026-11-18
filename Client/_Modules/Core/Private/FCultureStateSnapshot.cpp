// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FCultureStateSnapshot @ 141becbe0

void __thiscall
FInternationalization::FCultureStateSnapshot::~FCultureStateSnapshot(FCultureStateSnapshot *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)(this->AssetGroups).AllocatorInstance.Data,
             (this->AssetGroups).ArrayNum);
  pFVar1 = (this->AssetGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Locale).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Language).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

