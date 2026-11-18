// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// operator++ @ 14322bcc0

TBaseIterator<1> * __thiscall
TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<1>::operator++(TBaseIterator<1> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

// operator++ @ 14322bcf0

TBaseIterator<0> * __thiscall
TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<0>::operator++(TBaseIterator<0> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

