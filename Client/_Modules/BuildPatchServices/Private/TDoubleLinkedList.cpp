// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// ~TDoubleLinkedList<TTuple<BuildPatchServices::FBlockRange,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_> @ 143226350

void __thiscall
TDoubleLinkedList<TTuple<BuildPatchServices::FBlockRange,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
::
~TDoubleLinkedList<TTuple<BuildPatchServices::FBlockRange,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
          (TDoubleLinkedList<TTuple<BuildPatchServices::FBlockRange,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
           *this)

{
  TDoubleLinkedListNode *pTVar1;
  void *pvVar2;
  code *UNRECOVERED_JUMPTABLE;
  TDoubleLinkedListNode *pTVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDoubleLinkedList_U__TTuple_UFBlockRange_BuildPatchServices__VFSetElementId__V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____K____6B_
  ;
  pTVar3 = this->HeadNode;
  while (pTVar3 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar3->NextNode;
    *(undefined4 *)&(pTVar3->Value).field_0x60 = 0;
    pvVar2 = *(void **)&(pTVar3->Value).field_0x58;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(pTVar3->Value).field_0x18);
    ::operator_delete(pTVar3,0x80);
    this->HeadNode = pTVar1;
    pTVar3 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 8);
  if (UNRECOVERED_JUMPTABLE == SetListSize) {
    this->ListSize = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143226412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0);
  return;
}

// ~TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode> @ 143226420

void __thiscall
TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::
~TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>
          (TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode> *this)

{
  TDoubleLinkedListNode *pTVar1;
  code *UNRECOVERED_JUMPTABLE;
  TDoubleLinkedListNode *pTVar2;
  
  this->_padding_ =
       (longlong)&___7__TDoubleLinkedList_UFChunkNode_FChunkSearcher_BuildPatchServices____6B_;
  pTVar2 = this->HeadNode;
  while (pTVar2 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x38);
    this->HeadNode = pTVar1;
    pTVar2 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 8);
  if (UNRECOVERED_JUMPTABLE == SetListSize) {
    this->ListSize = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143226490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0);
  return;
}

// ~TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode> @ 1432264a0

void __thiscall
TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::
~TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>
          (TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode> *this)

{
  TDoubleLinkedListNode *pTVar1;
  code *UNRECOVERED_JUMPTABLE;
  TDoubleLinkedListNode *pTVar2;
  
  this->_padding_ =
       (longlong)&___7__TDoubleLinkedList_UFFileNode_FChunkSearcher_BuildPatchServices____6B_;
  pTVar2 = this->HeadNode;
  while (pTVar2 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar2->NextNode;
    TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::
    ~TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>(&(pTVar2->Value).ChunkParts);
    ::operator_delete(pTVar2,0x48);
    this->HeadNode = pTVar1;
    pTVar2 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 8);
  if (UNRECOVERED_JUMPTABLE == SetListSize) {
    this->ListSize = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143226530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0);
  return;
}

// Empty @ 14324ab10

void __thiscall
TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::Empty
          (TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode> *this)

{
  TDoubleLinkedListNode *pTVar1;
  TDoubleLinkedListNode *pTVar2;
  
  pTVar2 = this->HeadNode;
  while (pTVar2 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x38);
    this->HeadNode = pTVar1;
    pTVar2 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014324ab66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this,0);
  return;
}

// SetListSize @ 143268c90

void __thiscall
TDoubleLinkedList<TTuple<BuildPatchServices::FBlockRange,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
::SetListSize(TDoubleLinkedList<TTuple<BuildPatchServices::FBlockRange,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
              *this,int param_1)

{
  this->ListSize = param_1;
  return;
}

// SetListSize @ 143268ca0

void __thiscall
TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::SetListSize
          (TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode> *this,int param_1)

{
  this->ListSize = param_1;
  return;
}

// SetListSize @ 143268cb0

void __thiscall
TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::SetListSize
          (TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode> *this,int param_1)

{
  this->ListSize = param_1;
  return;
}

