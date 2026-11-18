// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Enqueue<void_*> @ 141ae54d0

bool __thiscall
TClosableMpscQueue<void_*>::Enqueue<void_*>(TClosableMpscQueue<void_*> *this,void **param_1)

{
  atomic<TClosableMpscQueue<void_*>::FNode_*> aVar1;
  atomic<TClosableMpscQueue<void_*>::FNode_*> aVar2;
  atomic<TClosableMpscQueue<void_*>::FNode_*> aVar3;
  bool bVar4;
  
  aVar3 = this->Head;
  if (aVar3 != (atomic<TClosableMpscQueue<void_*>::FNode_*>)0x0) {
    aVar1 = (atomic<TClosableMpscQueue<void_*>::FNode_*>)::operator_new(0x10);
    if (aVar1 == (atomic<TClosableMpscQueue<void_*>::FNode_*>)0x0) {
      aVar1 = (atomic<TClosableMpscQueue<void_*>::FNode_*>)0x0;
    }
    else {
      *(undefined8 *)aVar1 = 0;
    }
    *(void **)((longlong)aVar1 + 8) = *param_1;
    do {
      LOCK();
      aVar2 = this->Head;
      bVar4 = aVar3 == aVar2;
      if (bVar4) {
        this->Head = aVar1;
        aVar2 = aVar3;
      }
      UNLOCK();
      if (bVar4) {
        *(atomic<TClosableMpscQueue<void_*>::FNode_*> *)aVar3 = aVar1;
        return true;
      }
      aVar3 = aVar2;
    } while (aVar2 != (atomic<TClosableMpscQueue<void_*>::FNode_*>)0x0);
    ::operator_delete((void *)aVar1,0x10);
  }
  return false;
}

