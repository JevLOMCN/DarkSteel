// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 2

// FTransferData @ 14e92e450

FTransferData * __thiscall
UE::Private::FTransferData::FTransferData
          (FTransferData *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  (this->SourceIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SourceIndices).ArrayMax;
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  (this->SourceIndices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->SourceIndices).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar2 = &this->SourceWeights;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SourceWeights).ArrayMax;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  (this->SourceWeights).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  this->FalloffScale = param_3;
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return this;
}

// operator= @ 14e934500

FTransferData * __thiscall
UE::Private::FTransferData::operator=(FTransferData *this,FTransferData *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    pFVar3 = (this->SourceIndices).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->SourceIndices).AllocatorInstance.Data = (param_1->SourceIndices).AllocatorInstance.Data;
    (param_1->SourceIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SourceIndices).ArrayNum = (param_1->SourceIndices).ArrayNum;
    (this->SourceIndices).ArrayMax = (param_1->SourceIndices).ArrayMax;
    (param_1->SourceIndices).ArrayNum = 0;
    (param_1->SourceIndices).ArrayMax = 0;
  }
  pTVar1 = &param_1->SourceWeights;
  pTVar2 = &this->SourceWeights;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SourceWeights).ArrayNum = (param_1->SourceWeights).ArrayNum;
    (this->SourceWeights).ArrayMax = (param_1->SourceWeights).ArrayMax;
    (param_1->SourceWeights).ArrayNum = 0;
    (param_1->SourceWeights).ArrayMax = 0;
  }
  this->FalloffScale = param_1->FalloffScale;
  return this;
}

