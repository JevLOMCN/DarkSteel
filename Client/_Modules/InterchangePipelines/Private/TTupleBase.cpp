// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 2

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FInterchangeMeshGeometry> @ 14e76af50

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FInterchangeMeshGeometry>::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FInterchangeMeshGeometry>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FInterchangeMeshGeometry> *this)

{
  DestructItems<FString,int>(*(FString **)&this->field_0x38,*(int *)&this->field_0x40);
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  DestructItems<FString,int>(*(FString **)&this->field_0x28,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FInterchangeMeshInstance> @ 14e76afc0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FInterchangeMeshInstance>::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FInterchangeMeshInstance>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FInterchangeMeshInstance> *this)

{
  DestructItems<FString,int>(*(FString **)&this->field_0x80,*(int *)&this->field_0x88);
  if (*(void **)&this->field_0x80 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x80);
  }
  *(undefined4 *)&this->field_0x78 = 0;
  if (*(void **)&this->field_0x70 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x70);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x30);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

