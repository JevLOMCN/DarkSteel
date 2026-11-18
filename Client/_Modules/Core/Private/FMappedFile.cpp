// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FMappedFile @ 1417a3570

FMappedFile * __thiscall
FIoStoreTocResourceStorage::FMappedFile::FMappedFile(FMappedFile *this,FMappedFile *param_1)

{
  ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_> FVar1;
  ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
  FVar2;
  
  (this->MappedFile).Ptr = (param_1->MappedFile).Ptr;
  (param_1->MappedFile).Ptr = (IMappedFileHandle *)0x0;
  (this->MappedRegions).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)0x0;
  if ((param_1->MappedRegions).AllocatorInstance.SecondaryData ==
      (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)0x0) {
    memmove(&this->MappedRegions,&param_1->MappedRegions,0x50);
  }
  FVar1 = (this->MappedRegions).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)
               0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->MappedRegions).AllocatorInstance.SecondaryData =
       (param_1->MappedRegions).AllocatorInstance.SecondaryData;
  (param_1->MappedRegions).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)0x0;
  (this->MappedRegions).ArrayNum = (param_1->MappedRegions).ArrayNum;
  (this->MappedRegions).ArrayMax = (param_1->MappedRegions).ArrayMax;
  (param_1->MappedRegions).ArrayNum = 0;
  (param_1->MappedRegions).ArrayMax = 10;
  (this->OwnedRegions).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
        )0x0;
  if ((param_1->OwnedRegions).AllocatorInstance.SecondaryData ==
      (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
       )0x0) {
    memmove(&this->OwnedRegions,&param_1->OwnedRegions,0xa0);
  }
  FVar2 = (this->OwnedRegions).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->OwnedRegions).AllocatorInstance.SecondaryData =
       (param_1->OwnedRegions).AllocatorInstance.SecondaryData;
  (param_1->OwnedRegions).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
        )0x0;
  (this->OwnedRegions).ArrayNum = (param_1->OwnedRegions).ArrayNum;
  (this->OwnedRegions).ArrayMax = (param_1->OwnedRegions).ArrayMax;
  (param_1->OwnedRegions).ArrayNum = 0;
  (param_1->OwnedRegions).ArrayMax = 10;
  this->Cursor = param_1->Cursor;
  this->bLastReadBlockWasOwned = param_1->bLastReadBlockWasOwned;
  return this;
}

// ~FMappedFile @ 1417a7780

void __thiscall FIoStoreTocResourceStorage::FMappedFile::~FMappedFile(FMappedFile *this)

{
  IMappedFileHandle *pIVar1;
  ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
  FVar2;
  ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_> FVar3;
  
  FVar2 = (this->OwnedRegions).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                )0x0) {
    FVar2 = (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
             )&this->OwnedRegions;
  }
  DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int>
            ((TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
              *)FVar2,(this->OwnedRegions).ArrayNum);
  FVar2 = (this->OwnedRegions).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->MappedRegions).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)
               0x0) {
    FVar3 = (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)
            &this->MappedRegions;
  }
  DestructItems<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>,int>
            ((TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)FVar3,
             (this->MappedRegions).ArrayNum);
  FVar3 = (this->MappedRegions).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)
               0x0) {
    FMemory::Free((void *)FVar3);
  }
  pIVar1 = (this->MappedFile).Ptr;
  if (pIVar1 != (IMappedFileHandle *)0x0) {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
  }
  return;
}

