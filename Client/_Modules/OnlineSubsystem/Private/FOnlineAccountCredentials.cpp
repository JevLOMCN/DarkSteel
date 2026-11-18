// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// operator= @ 14eb35cf0

FOnlineAccountCredentials * __thiscall
FOnlineAccountCredentials::operator=
          (FOnlineAccountCredentials *this,FOnlineAccountCredentials *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (this != param_1) {
    pFVar2 = (this->Type).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->Type).Data.AllocatorInstance.Data = (param_1->Type).Data.AllocatorInstance.Data;
    (param_1->Type).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Type).Data.ArrayNum = (param_1->Type).Data.ArrayNum;
    (this->Type).Data.ArrayMax = (param_1->Type).Data.ArrayMax;
    (param_1->Type).Data.ArrayNum = 0;
    (param_1->Type).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->Id;
  pFVar3 = &this->Id;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Id).Data.ArrayNum = (param_1->Id).Data.ArrayNum;
    (this->Id).Data.ArrayMax = (param_1->Id).Data.ArrayMax;
    (param_1->Id).Data.ArrayNum = 0;
    (param_1->Id).Data.ArrayMax = 0;
  }
  pFVar3 = &param_1->Token;
  pFVar1 = &this->Token;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Token).Data.ArrayNum = (param_1->Token).Data.ArrayNum;
    (this->Token).Data.ArrayMax = (param_1->Token).Data.ArrayMax;
    (param_1->Token).Data.ArrayNum = 0;
    (param_1->Token).Data.ArrayMax = 0;
  }
  return this;
}

