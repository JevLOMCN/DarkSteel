// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// FGridData @ 14d8b5e20

FGridData * __thiscall
SampledSequenceDrawingUtils::FGridData::FGridData(FGridData *this,FGridData *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->DrawCoordinates).ArrayMax;
  (this->DrawCoordinates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->DrawCoordinates).ArrayNum;
  pFVar4 = (param_1->DrawCoordinates).AllocatorInstance.Data;
  (this->DrawCoordinates).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->DrawCoordinates).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 5);
  }
  pTVar2 = &this->PositionRatios;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PositionRatios).ArrayMax;
  iVar3 = (param_1->PositionRatios).ArrayNum;
  pFVar4 = (param_1->PositionRatios).AllocatorInstance.Data;
  (this->PositionRatios).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  return this;
}

