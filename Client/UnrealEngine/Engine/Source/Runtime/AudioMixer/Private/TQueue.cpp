// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// ~TQueue<TFunction<void___cdecl(void)>,1> @ 1464db440

void __thiscall
TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>
          (TQueue<TFunction<void___cdecl(void)>,1> *this)

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

// Enqueue @ 146553730

bool __thiscall
TQueue<TFunction<void___cdecl(void)>,1>::Enqueue
          (TQueue<TFunction<void___cdecl(void)>,1> *this,TFunction<void___cdecl(void)> *param_1)

{
  TNode *pTVar1;
  undefined8 uVar2;
  TNode *pTVar3;
  
  pTVar3 = ::operator_new(0x40);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar3->Item = *(undefined8 *)param_1;
    *(undefined8 *)&(pTVar3->Item).field_0x28 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    uVar2 = *(undefined8 *)&param_1->field_0x18;
    *(undefined8 *)&(pTVar3->Item).field_0x10 = *(undefined8 *)&param_1->field_0x10;
    *(undefined8 *)&(pTVar3->Item).field_0x18 = uVar2;
    *(undefined8 *)&(pTVar3->Item).field_0x20 = *(undefined8 *)&param_1->field_0x20;
    if (*(longlong *)&pTVar3->Item != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pTVar1 = this->Head;
    this->Head = pTVar3;
    pTVar1->NextNode = pTVar3;
    return true;
  }
  return false;
}

