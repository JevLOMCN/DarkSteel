// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 1

// operator++ @ 141dc7120

TBaseIterator<0> * __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<0>::operator++(TBaseIterator<0> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

