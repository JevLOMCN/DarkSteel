// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 2

// TQueue<FWN_Task_*,1> @ 14a6abfc0

/* WARNING: Enum "Type": Some values do not have unique names */

TQueue<FWN_Task_*,1> * __thiscall
TQueue<FWN_Task_*,1>::TQueue<FWN_Task_*,1>(TQueue<FWN_Task_*,1> *this)

{
  TNode *pTVar1;
  
  pTVar1 = ::operator_new(0x10);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    pTVar1->Item = (FWN_Task *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    this->Tail = pTVar1;
    this->Head = pTVar1;
    return this;
  }
  this->Tail = (TNode *)0x0;
  this->Head = (TNode *)0x0;
  return this;
}

// ~TQueue<FWN_Task_*,1> @ 14a6ac610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TQueue<FWN_Task_*,1>::~TQueue<FWN_Task_*,1>(TQueue<FWN_Task_*,1> *this)

{
  TNode *pTVar1;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x10);
    pTVar1 = this->Tail;
  }
  return;
}

