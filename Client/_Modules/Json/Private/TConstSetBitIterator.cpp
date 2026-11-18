// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 1

// TConstSetBitIterator<FDefaultBitArrayAllocator> @ 141dc3c60

TConstSetBitIterator<FDefaultBitArrayAllocator> * __thiscall
TConstSetBitIterator<FDefaultBitArrayAllocator>::TConstSetBitIterator<FDefaultBitArrayAllocator>
          (TConstSetBitIterator<FDefaultBitArrayAllocator> *this,
          TBitArray<FDefaultBitArrayAllocator> *param_1)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0;
  this->CurrentBitIndex = 0;
  this->BaseBitIndex = 0;
  this->Array = param_1;
  this->UnvisitedBitMask = 0xffffffff;
  if (param_1->NumBits != 0) {
    FindFirstSetBit(this);
  }
  return this;
}

