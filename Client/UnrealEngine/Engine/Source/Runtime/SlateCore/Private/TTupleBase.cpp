// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_> @ 142478800

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>
           *this)

{
  TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  
  this_00 = *(TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              **)&this->field_0x88;
  if (this_00 !=
      (TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this_00[2].field_0x18);
    *(undefined4 *)&this_00[1].field_0x10 = 0;
    if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0xe8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x38);
  return;
}

