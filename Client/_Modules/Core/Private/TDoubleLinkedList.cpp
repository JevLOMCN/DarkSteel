// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~TDoubleLinkedList<FConfigCommandStream_*> @ 141856010

void __thiscall
TDoubleLinkedList<FConfigCommandStream_*>::~TDoubleLinkedList<FConfigCommandStream_*>
          (TDoubleLinkedList<FConfigCommandStream_*> *this)

{
  TDoubleLinkedListNode *pTVar1;
  code *UNRECOVERED_JUMPTABLE;
  TDoubleLinkedListNode *pTVar2;
  
  this->_padding_ = (longlong)&___7__TDoubleLinkedList_PEAVFConfigCommandStream____6B_;
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
                    /* WARNING: Could not recover jumptable at 0x000141856080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0);
  return;
}

// Empty @ 14186bde0

void __thiscall
TDoubleLinkedList<FConfigCommandStream_*>::Empty(TDoubleLinkedList<FConfigCommandStream_*> *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014186be36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this,0);
  return;
}

// SetListSize @ 141890620

void __thiscall
TDoubleLinkedList<FConfigCommandStream_*>::SetListSize
          (TDoubleLinkedList<FConfigCommandStream_*> *this,int param_1)

{
  this->ListSize = param_1;
  return;
}

