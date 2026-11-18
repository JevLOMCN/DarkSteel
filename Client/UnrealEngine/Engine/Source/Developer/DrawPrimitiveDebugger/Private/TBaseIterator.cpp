// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 3

// operator++ @ 146d06840

TBaseIterator<1> * __thiscall
TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<1>::operator++(TBaseIterator<1> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

// operator++ @ 146d06870

TBaseIterator<0> * __thiscall
TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<0>::operator++(TBaseIterator<0> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

// operator++ @ 146d068a0

TBaseIterator<0> * __thiscall
TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<0>::operator++(TBaseIterator<0> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

