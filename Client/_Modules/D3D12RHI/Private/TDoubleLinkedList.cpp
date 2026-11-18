// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 7

// ~TDoubleLinkedList<unsigned_int> @ 1459f6190

void __thiscall
TDoubleLinkedList<unsigned_int>::~TDoubleLinkedList<unsigned_int>
          (TDoubleLinkedList<unsigned_int> *this)

{
  TDoubleLinkedListNode *pTVar1;
  code *UNRECOVERED_JUMPTABLE;
  TDoubleLinkedListNode *pTVar2;
  
  this->_padding_ = (longlong)&___7__TDoubleLinkedList_I__6B_;
  pTVar2 = this->HeadNode;
  while (pTVar2 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001459f6200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0);
  return;
}

// ~TDoubleLinkedList<FD3D12OfflineHeapFreeRange> @ 1459f6210

void __thiscall
TDoubleLinkedList<FD3D12OfflineHeapFreeRange>::~TDoubleLinkedList<FD3D12OfflineHeapFreeRange>
          (TDoubleLinkedList<FD3D12OfflineHeapFreeRange> *this)

{
  TDoubleLinkedListNode *pTVar1;
  code *UNRECOVERED_JUMPTABLE;
  TDoubleLinkedListNode *pTVar2;
  
  this->_padding_ = (longlong)&___7__TDoubleLinkedList_UFD3D12OfflineHeapFreeRange____6B_;
  pTVar2 = this->HeadNode;
  while (pTVar2 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x20);
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
                    /* WARNING: Could not recover jumptable at 0x0001459f6280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0);
  return;
}

// AddTail @ 1459ffa50

bool __thiscall
TDoubleLinkedList<unsigned_int>::AddTail(TDoubleLinkedList<unsigned_int> *this,uint *param_1)

{
  TDoubleLinkedListNode *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TDoubleLinkedListNode *)0x0) {
    pTVar1->Value = *param_1;
    pTVar1->NextNode = (TDoubleLinkedListNode *)0x0;
    pTVar1->PrevNode = (TDoubleLinkedListNode *)0x0;
    if (this->TailNode == (TDoubleLinkedListNode *)0x0) {
      this->HeadNode = pTVar1;
    }
    else {
      this->TailNode->NextNode = pTVar1;
      pTVar1->PrevNode = this->TailNode;
    }
    this->TailNode = pTVar1;
    (**(code **)(this->_padding_ + 8))(this,this->ListSize + 1);
    return true;
  }
  return false;
}

// Empty @ 145a13ec0

void __thiscall TDoubleLinkedList<unsigned_int>::Empty(TDoubleLinkedList<unsigned_int> *this)

{
  TDoubleLinkedListNode *pTVar1;
  TDoubleLinkedListNode *pTVar2;
  
  pTVar2 = this->HeadNode;
  while (pTVar2 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x18);
    this->HeadNode = pTVar1;
    pTVar2 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145a13f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this,0);
  return;
}

// Empty @ 145a13f20

void __thiscall
TDoubleLinkedList<FD3D12OfflineHeapFreeRange>::Empty
          (TDoubleLinkedList<FD3D12OfflineHeapFreeRange> *this)

{
  TDoubleLinkedListNode *pTVar1;
  TDoubleLinkedListNode *pTVar2;
  
  pTVar2 = this->HeadNode;
  while (pTVar2 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x20);
    this->HeadNode = pTVar1;
    pTVar2 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145a13f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this,0);
  return;
}

// SetListSize @ 145a2fde0

void __thiscall
TDoubleLinkedList<unsigned_int>::SetListSize(TDoubleLinkedList<unsigned_int> *this,int param_1)

{
  this->ListSize = param_1;
  return;
}

// SetListSize @ 145a2fdf0

void __thiscall
TDoubleLinkedList<FD3D12OfflineHeapFreeRange>::SetListSize
          (TDoubleLinkedList<FD3D12OfflineHeapFreeRange> *this,int param_1)

{
  this->ListSize = param_1;
  return;
}

