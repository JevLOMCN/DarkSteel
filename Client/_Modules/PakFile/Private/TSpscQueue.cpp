// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// ~TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory> @ 142a55a70

void __thiscall
TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::
~TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>
          (TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory> *this)

{
  int *piVar1;
  int iVar2;
  atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> aVar3;
  atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> aVar4;
  undefined8 *puVar5;
  atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> aVar6;
  bool bVar7;
  
  aVar3 = this->Tail;
  aVar6 = (atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>)this->First;
  do {
    aVar4 = *(atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> *)aVar6;
    FMemory::Free((void *)aVar6);
    bVar7 = aVar6 != aVar3;
    aVar6 = aVar4;
  } while (bVar7);
  while (aVar4 != (atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>)0x0) {
    aVar3 = *(atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> *)aVar4;
    puVar5 = *(undefined8 **)
              ((TTypeCompatibleBytes<UE::Tasks::Private::FTaskHandle> *)((longlong)aVar4 + 8))->Pad;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    FMemory::Free((void *)aVar4);
    aVar4 = aVar3;
  }
  return;
}

