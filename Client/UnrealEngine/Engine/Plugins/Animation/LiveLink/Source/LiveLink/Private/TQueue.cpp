// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// Empty @ 14d03aa70

void __thiscall TQueue<int,1>::Empty(TQueue<int,1> *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  while (pTVar1 = this->Tail->NextNode, pTVar1 != (TNode *)0x0) {
    pTVar2 = this->Tail;
    this->Tail = pTVar1;
    pTVar1->Item = 0;
    ::operator_delete(pTVar2,0x10);
  }
  return;
}

