// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// AddTail @ 145c4e9a0

bool __thiscall
TDoubleLinkedList<FGPUDefragAllocator::FMemoryChunk_*>::AddTail
          (TDoubleLinkedList<FGPUDefragAllocator::FMemoryChunk_*> *this,FMemoryChunk **param_1)

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

