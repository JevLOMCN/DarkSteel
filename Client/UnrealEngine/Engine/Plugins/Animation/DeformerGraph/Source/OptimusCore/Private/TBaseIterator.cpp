// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// operator++ @ 14e166460

TBaseIterator<1> * __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<1>::operator++(TBaseIterator<1> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

// operator++ @ 14e166490

TBaseIterator<1> * __thiscall
TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<1>::operator++(TBaseIterator<1> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

// operator++ @ 14e1664c0

TBaseIterator<0> * __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<0>::operator++(TBaseIterator<0> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

// operator++ @ 14e1664f0

TBaseIterator<0> * __thiscall
TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<0>::operator++(TBaseIterator<0> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

// operator++ @ 14e166520

TBaseIterator<0> * __thiscall
TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TBaseIterator<0>::operator++(TBaseIterator<0> *this)

{
  uint *puVar1;
  
  puVar1 = &(this->BitArrayIt).UnvisitedBitMask;
  *puVar1 = *puVar1 & ~*(uint *)((longlong)&(this->BitArrayIt)._padding_ + 4);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&this->BitArrayIt);
  return this;
}

