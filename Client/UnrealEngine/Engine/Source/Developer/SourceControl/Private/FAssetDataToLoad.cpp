// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 1

// operator= @ 146b01460

FAssetDataToLoad * __thiscall
FAssetDataToLoad::operator=(FAssetDataToLoad *this,FAssetDataToLoad *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (this != param_1) {
    pFVar2 = (this->TempFilename).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->TempFilename).Data.AllocatorInstance.Data =
         (param_1->TempFilename).Data.AllocatorInstance.Data;
    (param_1->TempFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TempFilename).Data.ArrayNum = (param_1->TempFilename).Data.ArrayNum;
    (this->TempFilename).Data.ArrayMax = (param_1->TempFilename).Data.ArrayMax;
    (param_1->TempFilename).Data.ArrayNum = 0;
    (param_1->TempFilename).Data.ArrayMax = 0;
  }
  pFVar3 = &param_1->Filename;
  pFVar1 = &this->Filename;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Filename).Data.ArrayNum = (param_1->Filename).Data.ArrayNum;
    (this->Filename).Data.ArrayMax = (param_1->Filename).Data.ArrayMax;
    (param_1->Filename).Data.ArrayNum = 0;
    (param_1->Filename).Data.ArrayMax = 0;
  }
  return this;
}

