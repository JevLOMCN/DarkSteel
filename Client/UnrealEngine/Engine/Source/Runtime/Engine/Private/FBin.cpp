// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FBin @ 1488ae040

FBin * __thiscall FBinnedTextureLayout::FBin::FBin(FBin *this,FBin *param_1)

{
  ForElementType<FBinnedTextureLayout::FBinAllocation> FVar1;
  
  (this->ElementSize).field0_0x0 = (param_1->ElementSize).field0_0x0;
  this->bOutOfSpace = param_1->bOutOfSpace;
  (this->BinAllocations).AllocatorInstance.SecondaryData =
       (ForElementType<FBinnedTextureLayout::FBinAllocation>)0x0;
  if ((param_1->BinAllocations).AllocatorInstance.SecondaryData ==
      (ForElementType<FBinnedTextureLayout::FBinAllocation>)0x0) {
    memmove(&this->BinAllocations,&param_1->BinAllocations,0x20);
  }
  FVar1 = (this->BinAllocations).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FBinnedTextureLayout::FBinAllocation>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->BinAllocations).AllocatorInstance.SecondaryData =
       (param_1->BinAllocations).AllocatorInstance.SecondaryData;
  (param_1->BinAllocations).AllocatorInstance.SecondaryData =
       (ForElementType<FBinnedTextureLayout::FBinAllocation>)0x0;
  (this->BinAllocations).ArrayNum = (param_1->BinAllocations).ArrayNum;
  (this->BinAllocations).ArrayMax = (param_1->BinAllocations).ArrayMax;
  (param_1->BinAllocations).ArrayNum = 0;
  (param_1->BinAllocations).ArrayMax = 1;
  return this;
}

