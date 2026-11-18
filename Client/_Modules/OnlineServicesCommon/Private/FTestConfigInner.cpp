// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// operator= @ 14ee25c40

FTestConfigInner * __thiscall
FTestConfigInner::operator=(FTestConfigInner *this,FTestConfigInner *param_1)

{
  TArray<FTestConfigInnerInner,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FTestConfigInnerInner,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<EConfigTestEnum,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<EConfigTestEnum,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &param_1->ObjectArray;
  this->Float = param_1->Float;
  pTVar2 = &this->ObjectArray;
  (this->Object).Float = (param_1->Object).Float;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ObjectArray).ArrayNum = (param_1->ObjectArray).ArrayNum;
    (this->ObjectArray).ArrayMax = (param_1->ObjectArray).ArrayMax;
    (param_1->ObjectArray).ArrayNum = 0;
    (param_1->ObjectArray).ArrayMax = 0;
  }
  pTVar3 = &param_1->EnumArray;
  pTVar4 = &this->EnumArray;
  this->Enum = param_1->Enum;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->EnumArray).ArrayNum = (param_1->EnumArray).ArrayNum;
    (this->EnumArray).ArrayMax = (param_1->EnumArray).ArrayMax;
    (param_1->EnumArray).ArrayNum = 0;
    (param_1->EnumArray).ArrayMax = 0;
  }
  pTVar5 = &param_1->StringArray;
  pTVar6 = &this->StringArray;
  if (pTVar6 != pTVar5) {
    DestructItems<FString,int>
              ((FString *)(pTVar6->AllocatorInstance).Data,(this->StringArray).ArrayNum);
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->StringArray).ArrayNum = (param_1->StringArray).ArrayNum;
    (this->StringArray).ArrayMax = (param_1->StringArray).ArrayMax;
    (param_1->StringArray).ArrayNum = 0;
    (param_1->StringArray).ArrayMax = 0;
  }
  return this;
}

