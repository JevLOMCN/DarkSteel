// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// ~TSpscQueue<TTuple<FString,FString>,FMemory> @ 14314fe10

void __thiscall
TSpscQueue<TTuple<FString,FString>,FMemory>::~TSpscQueue<TTuple<FString,FString>,FMemory>
          (TSpscQueue<TTuple<FString,FString>,FMemory> *this)

{
  atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> aVar1;
  atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> aVar2;
  void *pvVar3;
  atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> aVar4;
  bool bVar5;
  
  aVar1 = this->Tail;
  aVar4 = (atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>)this->First;
  do {
    aVar2 = *(atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> *)aVar4;
    FMemory::Free((void *)aVar4);
    bVar5 = aVar4 != aVar1;
    aVar4 = aVar2;
  } while (bVar5);
  while (aVar2 != (atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>)0x0) {
    aVar1 = *(atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> *)aVar2;
    if (*(void **)((longlong)aVar2 + 0x18) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)aVar2 + 0x18));
    }
    pvVar3 = *(void **)((TTypeCompatibleBytes<TTuple<FString,FString>_> *)((longlong)aVar2 + 8))->
                       Pad;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  return;
}

