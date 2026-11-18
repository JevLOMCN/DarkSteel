// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 1

// ~TQueue<TFunction<void___cdecl(void)>,0> @ 142d3e1e0

void __thiscall
TQueue<TFunction<void___cdecl(void)>,0>::~TQueue<TFunction<void___cdecl(void)>,0>
          (TQueue<TFunction<void___cdecl(void)>,0> *this)

{
  TNode *pTVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    if (*(longlong *)&pTVar1->Item != 0) {
      plVar2 = *(longlong **)&(pTVar1->Item).field_0x28;
      plVar3 = (longlong *)&(pTVar1->Item).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar3 = plVar2;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    ::operator_delete(pTVar1,0x40);
    pTVar1 = this->Tail;
  }
  return;
}

