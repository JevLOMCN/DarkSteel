// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CCSAIServicePlugin
// Functions: 2

// Dequeue @ 14ac86b60

bool __thiscall
TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::Dequeue
          (TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1> *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  TNode *pTVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar2 = this->Tail->NextNode;
  if (pTVar2 == (TNode *)0x0) {
    return false;
  }
  pTVar1 = &pTVar2->Item;
  if (param_1 != pTVar1) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_1->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = (pTVar2->Item).ArrayNum;
    param_1->ArrayMax = (pTVar2->Item).ArrayMax;
    (pTVar2->Item).ArrayNum = 0;
    (pTVar2->Item).ArrayMax = 0;
  }
  pTVar4 = this->Tail;
  this->Tail = pTVar2;
  if (pTVar1 != &local_18) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).ArrayNum = 0;
    (pTVar2->Item).ArrayMax = 0;
  }
  if (pTVar4 != (TNode *)0x0) {
    pFVar3 = (pTVar4->Item).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pTVar4,0x18);
  }
  return true;
}

// Enqueue @ 14ac87030

bool __thiscall
TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::Enqueue
          (TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1> *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TNode *pTVar3;
  TNode *pTVar4;
  
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    _Src = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    (pTVar4->Item).ArrayNum = iVar2;
    piVar1 = &(pTVar4->Item).ArrayMax;
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar2,0,&(pTVar4->Item).AllocatorInstance,iVar2,piVar1);
      memcpy((pTVar4->Item).AllocatorInstance.Data,_Src,(longlong)iVar2);
    }
    pTVar3 = this->Head;
    this->Head = pTVar4;
    pTVar3->NextNode = pTVar4;
    return true;
  }
  return false;
}

