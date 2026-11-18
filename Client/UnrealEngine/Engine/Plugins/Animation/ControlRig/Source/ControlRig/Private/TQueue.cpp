// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// Empty @ 14a300d70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TQueue<URigHierarchy::FQueuedNotification,2>::Empty
          (TQueue<URigHierarchy::FQueuedNotification,2> *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  while( true ) {
    pTVar1 = this->Tail;
    pTVar2 = pTVar1->NextNode;
    if (pTVar2 == (TNode *)0x0) break;
    this->Tail = pTVar2;
    (pTVar2->Item).Type = ElementAdded;
    *(undefined3 *)&(pTVar2->Item).field_0x1 = 0;
    (pTVar2->Item).Key.Type = None;
    *(undefined3 *)&(pTVar2->Item).Key.field_0x1 = 0;
    (pTVar2->Item).Key.Name.ComparisonIndex = 0;
    (pTVar2->Item).Key.Name.Number = 0;
    (pTVar2->Item).ComponentName.ComparisonIndex = 0;
    (pTVar2->Item).ComponentName.Number = 0;
    ::operator_delete(pTVar1,0x20);
  }
  return;
}

