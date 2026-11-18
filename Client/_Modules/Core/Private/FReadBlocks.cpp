// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FReadBlocks @ 1417a3b30

FReadBlocks * __thiscall
FIoStoreTocResourceStorage::FReadBlocks::FReadBlocks(FReadBlocks *this,FReadBlocks *param_1)

{
  ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
  FVar1;
  
  (this->File).Ptr = (param_1->File).Ptr;
  (param_1->File).Ptr = (IFileHandle *)0x0;
  (this->Blocks).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
        )0x0;
  if ((param_1->Blocks).AllocatorInstance.SecondaryData ==
      (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
       )0x0) {
    memmove(&this->Blocks,&param_1->Blocks,0xa0);
  }
  FVar1 = (this->Blocks).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Blocks).AllocatorInstance.SecondaryData = (param_1->Blocks).AllocatorInstance.SecondaryData
  ;
  (param_1->Blocks).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
        )0x0;
  (this->Blocks).ArrayNum = (param_1->Blocks).ArrayNum;
  (this->Blocks).ArrayMax = (param_1->Blocks).ArrayMax;
  (param_1->Blocks).ArrayNum = 0;
  (param_1->Blocks).ArrayMax = 10;
  return this;
}

