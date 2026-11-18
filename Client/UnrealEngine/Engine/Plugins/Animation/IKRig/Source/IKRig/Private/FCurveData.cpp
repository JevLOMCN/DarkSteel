// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 1

// operator= @ 14df1d450

FCurveData * __thiscall
FIKRetargetOpBase::FCurveData::operator=(FCurveData *this,FCurveData *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this != param_1) {
    pFVar4 = (this->Names).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->Names).AllocatorInstance.Data = (param_1->Names).AllocatorInstance.Data;
    (param_1->Names).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Names).ArrayNum = (param_1->Names).ArrayNum;
    (this->Names).ArrayMax = (param_1->Names).ArrayMax;
    (param_1->Names).ArrayNum = 0;
    (param_1->Names).ArrayMax = 0;
  }
  pTVar1 = &param_1->Flags;
  pTVar2 = &this->Flags;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Flags).ArrayNum = (param_1->Flags).ArrayNum;
    (this->Flags).ArrayMax = (param_1->Flags).ArrayMax;
    (param_1->Flags).ArrayNum = 0;
    (param_1->Flags).ArrayMax = 0;
  }
  pTVar5 = &param_1->Colors;
  pTVar3 = &this->Colors;
  if (pTVar3 != pTVar5) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Colors).ArrayNum = (param_1->Colors).ArrayNum;
    (this->Colors).ArrayMax = (param_1->Colors).ArrayMax;
    (param_1->Colors).ArrayNum = 0;
    (param_1->Colors).ArrayMax = 0;
  }
  return this;
}

