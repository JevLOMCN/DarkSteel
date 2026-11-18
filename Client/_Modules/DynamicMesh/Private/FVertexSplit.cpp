// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// operator= @ 14c6e2000

FVertexSplit * __thiscall UELocal::FVertexSplit::operator=(FVertexSplit *this,FVertexSplit *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = param_1->TriSets;
  this->VertexID = param_1->VertexID;
  pTVar2 = this->TriSets;
  this->bOK = param_1->bOK;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->TriSets[0].ArrayNum = param_1->TriSets[0].ArrayNum;
    this->TriSets[0].ArrayMax = param_1->TriSets[0].ArrayMax;
    param_1->TriSets[0].ArrayNum = 0;
    param_1->TriSets[0].ArrayMax = 0;
  }
  pTVar1 = param_1->TriSets + 1;
  pTVar2 = this->TriSets + 1;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->TriSets[1].ArrayNum = param_1->TriSets[1].ArrayNum;
    this->TriSets[1].ArrayMax = param_1->TriSets[1].ArrayMax;
    param_1->TriSets[1].ArrayNum = 0;
    param_1->TriSets[1].ArrayMax = 0;
  }
  return this;
}

