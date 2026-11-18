// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 3

// ~TDoubleLinkedList<FMessageLogListingModel::FPage> @ 142bca870

void __thiscall
TDoubleLinkedList<FMessageLogListingModel::FPage>::
~TDoubleLinkedList<FMessageLogListingModel::FPage>
          (TDoubleLinkedList<FMessageLogListingModel::FPage> *this)

{
  this->_padding_ = (longlong)&___7__TDoubleLinkedList_UFPage_FMessageLogListingModel____6B_;
  Empty(this);
  return;
}

// Empty @ 142bef700

void __thiscall
TDoubleLinkedList<FMessageLogListingModel::FPage>::Empty
          (TDoubleLinkedList<FMessageLogListingModel::FPage> *this)

{
  TDoubleLinkedListNode *pTVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  ITextData *pIVar4;
  TDoubleLinkedListNode *pTVar5;
  
  pTVar5 = this->HeadNode;
  while (pTVar5 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar5->NextNode;
    (pTVar5->Value).MessagesHashes.HashSize = 0;
    FVar2 = (pTVar5->Value).MessagesHashes.Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(pTVar5->Value).MessagesHashes.Elements);
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>
              ((TSharedRef<FTokenizedMessage,1> *)(pTVar5->Value).Messages.AllocatorInstance.Data,
               (pTVar5->Value).Messages.ArrayNum);
    pFVar3 = (pTVar5->Value).Messages.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pIVar4 = (pTVar5->Value).Title.TextData.Reference;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    ::operator_delete(pTVar5,0x80);
    this->HeadNode = pTVar1;
    pTVar5 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142bef7b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this,0);
  return;
}

// SetListSize @ 142c276d0

void __thiscall
TDoubleLinkedList<FMessageLogListingModel::FPage>::SetListSize
          (TDoubleLinkedList<FMessageLogListingModel::FPage> *this,int param_1)

{
  this->ListSize = param_1;
  return;
}

