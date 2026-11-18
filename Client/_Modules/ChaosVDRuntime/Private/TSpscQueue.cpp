// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 1

// ~TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory> @ 1436d56f0

void __thiscall
TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::
~TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>
          (TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory> *this)

{
  atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
  aVar1;
  atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
  aVar2;
  undefined8 *puVar3;
  atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
  aVar4;
  bool bVar5;
  
  aVar1 = this->Tail;
  aVar4 = (atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
           )this->First;
  do {
    aVar2 = *(atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
              *)aVar4;
    FMemory::Free((void *)aVar4);
    bVar5 = aVar4 != aVar1;
    aVar4 = aVar2;
  } while (bVar5);
  while (aVar2 != (atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
                   )0x0) {
    aVar1 = *(atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
              *)aVar2;
    puVar3 = *(undefined8 **)
              ((TTypeCompatibleBytes<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>_> *)
              ((longlong)aVar2 + 8))->Pad;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  return;
}

