// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// ~TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> @ 145e83ca0

void __thiscall
TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::
~TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>
          (TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> *this)

{
  TDoubleLinkedListNode *pTVar1;
  code *UNRECOVERED_JUMPTABLE;
  TDoubleLinkedListNode *pTVar2;
  
  this->_padding_ = (longlong)&___7__TDoubleLinkedList_PEAUFPipelineCacheFileFormatPSORead____6B_;
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
                    /* WARNING: Could not recover jumptable at 0x000145e83d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0);
  return;
}

// AddTail @ 145e8c500

bool __thiscall
TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::AddTail
          (TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> *this,
          FPipelineCacheFileFormatPSORead **param_1)

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

// Empty @ 145e95d70

void __thiscall
TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::Empty
          (TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> *this)

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
                    /* WARNING: Could not recover jumptable at 0x000145e95dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this,0);
  return;
}

// SetListSize @ 145eb4c30

void __thiscall
TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::SetListSize
          (TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> *this,int param_1)

{
  this->ListSize = param_1;
  return;
}

