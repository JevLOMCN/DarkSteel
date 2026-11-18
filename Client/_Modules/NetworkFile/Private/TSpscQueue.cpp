// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkFile
// Functions: 1

// ~TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory> @ 148be01d0

void __thiscall
TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::
~TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>
          (TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory> *this)

{
  atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*> aVar1;
  atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*> aVar2;
  void *pvVar3;
  atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*> aVar4;
  bool bVar5;
  
  aVar1 = this->Tail;
  aVar4 = (atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>)
          this->First;
  do {
    aVar2 = *(atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>
              *)aVar4;
    FMemory::Free((void *)aVar4);
    bVar5 = aVar4 != aVar1;
    aVar4 = aVar2;
  } while (bVar5);
  while (aVar2 != (atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>
                   )0x0) {
    aVar1 = *(atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>
              *)aVar2;
    pvVar3 = *(void **)((TTypeCompatibleBytes<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *)
                       ((longlong)aVar2 + 8))->Pad;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  return;
}

