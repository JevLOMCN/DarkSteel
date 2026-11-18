// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// ~TQueue<FMutableTaskGraph::FGameThreadTask,1> @ 14ac0c5c0

void __thiscall
TQueue<FMutableTaskGraph::FGameThreadTask,1>::~TQueue<FMutableTaskGraph::FGameThreadTask,1>
          (TQueue<FMutableTaskGraph::FGameThreadTask,1> *this)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)(pTVar1->Item).Prerequisites.AllocatorInstance.Data,
               (pTVar1->Item).Prerequisites.ArrayNum);
    pFVar2 = (pTVar1->Item).Prerequisites.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (*(longlong *)&(pTVar1->Item).Body != 0) {
      plVar3 = *(longlong **)&(pTVar1->Item).Body.field_0x28;
      plVar4 = (longlong *)&(pTVar1->Item).Body.field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar4 = plVar3;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    pFVar2 = (pTVar1->Item).DebugName.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x70);
    pTVar1 = this->Tail;
  }
  return;
}

