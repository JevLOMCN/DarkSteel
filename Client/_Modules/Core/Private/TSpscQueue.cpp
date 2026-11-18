// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// AllocNode @ 141b38780

FNode * __thiscall
TSpscQueue<unsigned_int,FMemory>::AllocNode(TSpscQueue<unsigned_int,FMemory> *this)

{
  atomic<TSpscQueue<unsigned_int,FMemory>::FNode_*> aVar1;
  FNode *pFVar2;
  
  pFVar2 = this->First;
  if (pFVar2 != this->TailCopy) {
    this->First = (FNode *)pFVar2->Next;
    pFVar2->Next = (atomic<TSpscQueue<unsigned_int,FMemory>::FNode_*>)0x0;
    return pFVar2;
  }
  aVar1 = (atomic<TSpscQueue<unsigned_int,FMemory>::FNode_*>)this->First;
  this->TailCopy = (FNode *)this->Tail;
  if (aVar1 != this->Tail) {
    this->First = *(FNode **)aVar1;
    *(undefined8 *)aVar1 = 0;
    return (FNode *)aVar1;
  }
  pFVar2 = FMemory::Malloc(0x10,8);
  *(undefined8 *)&pFVar2->Value = 0;
  pFVar2->Next = (atomic<TSpscQueue<unsigned_int,FMemory>::FNode_*>)0x0;
  return pFVar2;
}

