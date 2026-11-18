// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FString> @ 141589620

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FString>::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FString>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FString> *this)

{
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData> @ 1416d8340

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>
           *this)

{
  void *pvVar1;
  ulong64 uVar2;
  
  pvVar1 = *(void **)&this->field_0x18;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FMemory::GetAllocSize(pvVar1);
    FICUOverrides::BytesInUseCount = FICUOverrides::BytesInUseCount - uVar2;
    if ((FThreadStats::TlsSlot != 0xffffffff) &&
       (FICUOverrides::CachedBytesInUseCount != FICUOverrides::BytesInUseCount)) {
      FICUOverrides::CachedBytesInUseCount = FICUOverrides::BytesInUseCount;
    }
    FMemory::Free(pvVar1);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FConfigCommandStreamSection> @ 141856fc0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FConfigCommandStreamSection>::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FConfigCommandStreamSection>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FConfigCommandStreamSection> *this)

{
  *(undefined4 *)&this->field_0xa8 = 0;
  if (*(void **)&this->field_0xa0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x60);
  *(undefined4 *)&this->field_0x58 = 0;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x10);
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

