// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// operator= @ 14e07d1c0

FFollicleQuery * __thiscall FFollicleQuery::operator=(FFollicleQuery *this,FFollicleQuery *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->Infos).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Infos).AllocatorInstance.Data = (param_1->Infos).AllocatorInstance.Data;
    (param_1->Infos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Infos).ArrayNum = (param_1->Infos).ArrayNum;
    (this->Infos).ArrayMax = (param_1->Infos).ArrayMax;
    (param_1->Infos).ArrayNum = 0;
    (param_1->Infos).ArrayMax = 0;
  }
  (this->Resolution).field0_0x0 = (param_1->Resolution).field0_0x0;
  this->MipCount = param_1->MipCount;
  this->Format = param_1->Format;
  this->OutTexture = param_1->OutTexture;
  return this;
}

