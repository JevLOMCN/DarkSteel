// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 2

// FPatch @ 14f0b7470

FPatch * __thiscall Audio::FPatch::FPatch(FPatch *this)

{
  (this->Source).Id = 0xffffffff;
  (this->Source).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Source).Name.Data.ArrayNum = 0;
  (this->Source).Name.Data.ArrayMax = 0;
  (this->Destinations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Destinations).ArrayNum = 0;
  (this->Destinations).ArrayMax = 0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  this->bEnabled = true;
  return this;
}

// ~FPatch @ 14f0befa0

void __thiscall Audio::FPatch::~FPatch(FPatch *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)(this->Destinations).AllocatorInstance.Data,
             (this->Destinations).ArrayNum);
  pFVar1 = (this->Destinations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Source).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

