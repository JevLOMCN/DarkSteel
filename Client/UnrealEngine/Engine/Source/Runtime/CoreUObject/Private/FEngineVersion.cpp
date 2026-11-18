// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator= @ 1421b6fa0

FEngineVersion * __thiscall FEngineVersion::operator=(FEngineVersion *this,FEngineVersion *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = &param_1->Branch;
  this->_padding_ = param_1->_padding_;
  pFVar2 = &this->Branch;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Branch).Data.ArrayNum = (param_1->Branch).Data.ArrayNum;
    (this->Branch).Data.ArrayMax = (param_1->Branch).Data.ArrayMax;
    (param_1->Branch).Data.ArrayNum = 0;
    (param_1->Branch).Data.ArrayMax = 0;
  }
  return this;
}

