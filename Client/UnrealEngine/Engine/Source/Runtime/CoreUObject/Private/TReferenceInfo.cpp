// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator= @ 1421b6ee0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TReferenceInfo<FGCObjectInfo> * __thiscall
FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>::operator=
          (TReferenceInfo<FGCObjectInfo> *this,TReferenceInfo<FGCObjectInfo> *param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FString *pFVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = &param_1->StackFrames;
  pTVar2 = &this->StackFrames;
  this->Object = param_1->Object;
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->StackFrames).ArrayNum = (param_1->StackFrames).ArrayNum;
    (this->StackFrames).ArrayMax = (param_1->StackFrames).ArrayMax;
    (param_1->StackFrames).ArrayNum = 0;
    (param_1->StackFrames).ArrayMax = 0;
  }
  pFVar3 = &param_1->ReferencerName;
  pFVar4 = &this->ReferencerName;
  this->Type = param_1->Type;
  if (pFVar4 != pFVar3) {
    pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ReferencerName).Data.ArrayNum = (param_1->ReferencerName).Data.ArrayNum;
    (this->ReferencerName).Data.ArrayMax = (param_1->ReferencerName).Data.ArrayMax;
    (param_1->ReferencerName).Data.ArrayNum = 0;
    (param_1->ReferencerName).Data.ArrayMax = 0;
  }
  return this;
}

