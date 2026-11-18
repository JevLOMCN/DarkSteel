// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// ~TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks> @ 142a55b80

void __thiscall
TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
::
~TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
           *this)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  *pTVar5;
  longlong *plVar6;
  
  bVar1 = this->TypeIndex;
  if (2 < bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    pTVar5 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
              *)this->_padding_;
    if ((TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
         *)this->_padding_ ==
        (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
         *)0x0) {
      pTVar5 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
                *)&this->_padding_;
    }
    break;
  case 2:
    pTVar5 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
              *)this->_padding_;
    if ((TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
         *)this->_padding_ ==
        (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
         *)0x0) {
      pTVar5 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
                *)&this->_padding_;
    }
    DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int>
              (pTVar5,(int)this->_padding_);
    if ((void *)this->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this->_padding_);
    }
    puVar2 = (undefined8 *)this->_padding_;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    return;
  }
  DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int>
            (pTVar5,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  plVar6 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar6 = &this->_padding_;
  }
  DestructItems<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>,int>
            ((TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)plVar6,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  puVar2 = (undefined8 *)this->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

