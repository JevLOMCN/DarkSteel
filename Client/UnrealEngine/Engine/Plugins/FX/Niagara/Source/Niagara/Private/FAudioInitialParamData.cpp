// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator= @ 1490b9640

FAudioInitialParamData * __thiscall
FAudioInitialParamData::operator=(FAudioInitialParamData *this,FAudioInitialParamData *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &(param_1->Value).VarData;
  this->ParticleID = param_1->ParticleID;
  pTVar2 = &(this->Value).VarData;
  (this->Value)._padding_ = (param_1->Value)._padding_;
  *(int *)&(this->Value)._padding_ = (int)(param_1->Value)._padding_;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Value).VarData.ArrayNum = (param_1->Value).VarData.ArrayNum;
    (this->Value).VarData.ArrayMax = (param_1->Value).VarData.ArrayMax;
    (param_1->Value).VarData.ArrayNum = 0;
    (param_1->Value).VarData.ArrayMax = 0;
  }
  return this;
}

