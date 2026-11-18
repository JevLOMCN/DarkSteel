// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// operator= @ 1444a6b70

FPatchDestination * __thiscall
Audio::FPatchDestination::operator=(FPatchDestination *this,FPatchDestination *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = &param_1->Name;
  this->Id = param_1->Id;
  pFVar2 = &this->Name;
  this->Stage = param_1->Stage;
  this->Depth = param_1->Depth;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
    (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
    (param_1->Name).Data.ArrayNum = 0;
    (param_1->Name).Data.ArrayMax = 0;
  }
  return this;
}

