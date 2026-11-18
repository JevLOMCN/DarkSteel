// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator= @ 1421b7010

FGraph * __thiscall UE::Graph::FGraph::operator=(FGraph *this,FGraph *param_1)

{
  TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->Buffer).AllocatorInstance.Data = (param_1->Buffer).AllocatorInstance.Data;
    (param_1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Buffer).ArrayNum = (param_1->Buffer).ArrayNum;
    (this->Buffer).ArrayMax = (param_1->Buffer).ArrayMax;
    (param_1->Buffer).ArrayNum = 0;
    (param_1->Buffer).ArrayMax = 0;
  }
  pTVar3 = &param_1->EdgeLists;
  pTVar1 = &this->EdgeLists;
  if (pTVar1 != pTVar3) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->EdgeLists).ArrayNum = (param_1->EdgeLists).ArrayNum;
    (this->EdgeLists).ArrayMax = (param_1->EdgeLists).ArrayMax;
    (param_1->EdgeLists).ArrayNum = 0;
    (param_1->EdgeLists).ArrayMax = 0;
  }
  return this;
}

