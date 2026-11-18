// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 1

// operator++ @ 143133ec0

TBaseIterator<1> * __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<1>::operator++(TBaseIterator<1> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

