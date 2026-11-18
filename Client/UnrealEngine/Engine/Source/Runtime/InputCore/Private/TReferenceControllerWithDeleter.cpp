// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 2

// DestroyObject @ 14238f6b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FInputKeyManager,SharedPointerInternals::DefaultDeleter<FInputKeyManager>,1>
::DestroyObject(TReferenceControllerWithDeleter<FInputKeyManager,SharedPointerInternals::DefaultDeleter<FInputKeyManager>,1>
                *this)

{
  FInputKeyManager *this_00;
  void *pvVar1;
  
  this_00 = this->Object;
  if (this_00 != (FInputKeyManager *)0x0) {
    *(undefined4 *)&(this_00->KeyMapCharToEnum).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->KeyMapCharToEnum).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this_00->KeyMapCharToEnum);
    *(undefined4 *)&(this_00->KeyMapVirtualToEnum).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->KeyMapVirtualToEnum).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0xa0);
    return;
  }
  return;
}

// DestroyObject @ 14238f730

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FKeyDetails,SharedPointerInternals::DefaultDeleter<FKeyDetails>,1>::
DestroyObject(TReferenceControllerWithDeleter<FKeyDetails,SharedPointerInternals::DefaultDeleter<FKeyDetails>,1>
              *this)

{
  FKeyDetails *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FKeyDetails *)0x0) {
    FKeyDetails::~FKeyDetails(this_00);
    ::operator_delete(this_00,0xc0);
    return;
  }
  return;
}

