// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 2

// ~TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> @ 14ec558b0

void __thiscall
TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
~TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>
          (TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *this)

{
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar2;
  uchar *puVar3;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar4;
  bool bVar5;
  
  aVar1 = this->Tail;
  aVar4 = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)this->First;
  do {
    aVar2 = *(atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *)aVar4;
    FMemory::Free((void *)aVar4);
    bVar5 = aVar4 != aVar1;
    aVar4 = aVar2;
  } while (bVar5);
  while (aVar2 != (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
    aVar1 = *(atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *)aVar2;
    if (*(longlong *)
         ((TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *)((longlong)aVar2 + 0x10))->
         Pad != 0) {
      puVar3 = (uchar *)((longlong)aVar2 + 0x20);
      if (*(uchar **)((longlong)aVar2 + 0x38) != (uchar *)0x0) {
        puVar3 = *(uchar **)((longlong)aVar2 + 0x38);
      }
      (**(code **)(*(longlong *)puVar3 + 0x10))();
    }
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  return;
}

// AllocNode @ 14ec60380

FNode * __thiscall
TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::AllocNode
          (TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *this)

{
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  FNode *pFVar2;
  
  pFVar2 = this->First;
  if (pFVar2 != this->TailCopy) {
    this->First = (FNode *)pFVar2->Next;
    pFVar2->Next = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
    return pFVar2;
  }
  aVar1 = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)this->First;
  this->TailCopy = (FNode *)this->Tail;
  if (aVar1 != this->Tail) {
    this->First = *(FNode **)aVar1;
    *(undefined8 *)aVar1 = 0;
    return (FNode *)aVar1;
  }
  pFVar2 = FMemory::Malloc(0x40,0x10);
  pFVar2->_padding_ = 0;
  (pFVar2->Value).Pad[0] = '\0';
  (pFVar2->Value).Pad[1] = '\0';
  (pFVar2->Value).Pad[2] = '\0';
  (pFVar2->Value).Pad[3] = '\0';
  (pFVar2->Value).Pad[4] = '\0';
  (pFVar2->Value).Pad[5] = '\0';
  (pFVar2->Value).Pad[6] = '\0';
  (pFVar2->Value).Pad[7] = '\0';
  (pFVar2->Value).Pad[8] = '\0';
  (pFVar2->Value).Pad[9] = '\0';
  (pFVar2->Value).Pad[10] = '\0';
  (pFVar2->Value).Pad[0xb] = '\0';
  (pFVar2->Value).Pad[0xc] = '\0';
  (pFVar2->Value).Pad[0xd] = '\0';
  (pFVar2->Value).Pad[0xe] = '\0';
  (pFVar2->Value).Pad[0xf] = '\0';
  (pFVar2->Value).Pad[0x10] = '\0';
  (pFVar2->Value).Pad[0x11] = '\0';
  (pFVar2->Value).Pad[0x12] = '\0';
  (pFVar2->Value).Pad[0x13] = '\0';
  (pFVar2->Value).Pad[0x14] = '\0';
  (pFVar2->Value).Pad[0x15] = '\0';
  (pFVar2->Value).Pad[0x16] = '\0';
  (pFVar2->Value).Pad[0x17] = '\0';
  (pFVar2->Value).Pad[0x18] = '\0';
  (pFVar2->Value).Pad[0x19] = '\0';
  (pFVar2->Value).Pad[0x1a] = '\0';
  (pFVar2->Value).Pad[0x1b] = '\0';
  (pFVar2->Value).Pad[0x1c] = '\0';
  (pFVar2->Value).Pad[0x1d] = '\0';
  (pFVar2->Value).Pad[0x1e] = '\0';
  (pFVar2->Value).Pad[0x1f] = '\0';
  (pFVar2->Value).Pad[0x20] = '\0';
  (pFVar2->Value).Pad[0x21] = '\0';
  (pFVar2->Value).Pad[0x22] = '\0';
  (pFVar2->Value).Pad[0x23] = '\0';
  (pFVar2->Value).Pad[0x24] = '\0';
  (pFVar2->Value).Pad[0x25] = '\0';
  (pFVar2->Value).Pad[0x26] = '\0';
  (pFVar2->Value).Pad[0x27] = '\0';
  (pFVar2->Value).Pad[0x28] = '\0';
  (pFVar2->Value).Pad[0x29] = '\0';
  (pFVar2->Value).Pad[0x2a] = '\0';
  (pFVar2->Value).Pad[0x2b] = '\0';
  (pFVar2->Value).Pad[0x2c] = '\0';
  (pFVar2->Value).Pad[0x2d] = '\0';
  (pFVar2->Value).Pad[0x2e] = '\0';
  (pFVar2->Value).Pad[0x2f] = '\0';
  pFVar2->Next = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
  return pFVar2;
}

