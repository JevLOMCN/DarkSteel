// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ~FInsideOutsideFilterData @ 149ff1130

void __thiscall
PCGFilterByIndexTest::FInsideOutsideFilterData::~FInsideOutsideFilterData
          (FInsideOutsideFilterData *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->OutsideData).Tags.HashSize = 0;
  FVar1 = (this->OutsideData).Tags.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OutsideData).Tags.Elements);
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&(this->OutsideData).Data);
  (this->InsideData).Tags.HashSize = 0;
  FVar1 = (this->InsideData).Tags.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InsideData).Tags.Elements);
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)this);
  return;
}

