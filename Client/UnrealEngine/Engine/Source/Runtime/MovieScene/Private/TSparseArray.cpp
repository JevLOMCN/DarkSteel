// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 192

// ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> @ 146096530

void __thiscall
TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
          (TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator> @ 1460965d0

void __thiscall
TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator>::
~TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator>
          (TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator> *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<FMovieSceneChannel_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096670

void __thiscall
TSparseArray<TSparseSetElement<FMovieSceneChannel_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FMovieSceneChannel_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FMovieSceneChannel_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<UMovieSceneCompiledDataManager_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096710

void __thiscall
TSparseArray<TSparseSetElement<UMovieSceneCompiledDataManager_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<UMovieSceneCompiledDataManager_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<UMovieSceneCompiledDataManager_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1460967b0

void __thiscall
TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TObjectPtr<UMovieSceneSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096850

void __thiscall
TSparseArray<TSparseSetElement<TObjectPtr<UMovieSceneSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TObjectPtr<UMovieSceneSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TObjectPtr<UMovieSceneSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1460968f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096990

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096a30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x170,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096ad0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096b70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x150,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096c10

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096cb0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096d50

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096df0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096e90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlenderSystemID,TSubclassOf<UMovieSceneBlenderSystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096f30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlenderSystemID,TSubclassOf<UMovieSceneBlenderSystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlenderSystemID,TSubclassOf<UMovieSceneBlenderSystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlenderSystemID,TSubclassOf<UMovieSceneBlenderSystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146096fd0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146097070

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x120,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146097110

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1460971b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneCompiledDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146097250

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneCompiledDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneCompiledDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneCompiledDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1460972f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146097390

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146097430

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1460974d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,enum_ENavigationToolItemFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146097570

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,enum_ENavigationToolItemFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,enum_ENavigationToolItemFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator= @ 1460991b0

TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  int *piVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  ForAnyElementType *pFVar13;
  longlong local_res10;
  
  if (this == param_1) {
    return this;
  }
  iVar5 = *(int *)&param_1->field_0x8;
  local_res10 = (longlong)iVar5;
  Empty(this,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,iVar5,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar5) {
    puVar10 = (undefined4 *)(*(longlong *)param_1 + 8);
    lVar9 = *(longlong *)this - *(longlong *)param_1;
    uVar11 = 1;
    do {
      if (((iVar12 < 0) || (*(int *)&param_1->field_0x28 <= iVar12)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(*pcVar3)();
        return pTVar6;
      }
      puVar8 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar5 = iVar12;
      if (iVar12 < 0) {
        iVar5 = iVar12 + 0x1f;
      }
      uVar2 = *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4);
      *(undefined4 *)(lVar9 + -8 + (longlong)puVar10) = puVar10[-2];
      if ((uVar2 & uVar11) == 0) {
        *(undefined4 *)(lVar9 + -4 + (longlong)puVar10) = puVar10[-1];
      }
      else {
        *(undefined4 *)(lVar9 + (longlong)puVar10) = *puVar10;
        pFVar13 = (ForAnyElementType *)((longlong)puVar10 + lVar9 + 8);
        piVar7 = (int *)((longlong)puVar10 + lVar9 + 0x14);
        pFVar13->Data = (FScriptContainerElement *)0x0;
        iVar5 = puVar10[4];
        _Src = *(void **)(puVar10 + 2);
        *(int *)(lVar9 + 0x10 + (longlong)puVar10) = iVar5;
        if (iVar5 == 0) {
          *piVar7 = 0;
          *(undefined4 *)(lVar9 + 0x18 + (longlong)puVar10) = puVar10[6];
          *(undefined4 *)(lVar9 + 0x1c + (longlong)puVar10) = puVar10[7];
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar5,0,pFVar13,iVar5,piVar7);
          memcpy(pFVar13->Data,_Src,(longlong)iVar5 << 2);
          *(undefined4 *)(lVar9 + 0x18 + (longlong)puVar10) = puVar10[6];
          *(undefined4 *)(lVar9 + 0x1c + (longlong)puVar10) = puVar10[7];
        }
      }
      iVar12 = iVar12 + 1;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      puVar10 = puVar10 + 10;
      local_res10 = local_res10 + -1;
    } while (local_res10 != 0);
  }
  return this;
}

// operator= @ 1460993c0

TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  FMovieSceneEvalTemplatePtr *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar8;
  int *piVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ForAnyElementType *pFVar16;
  longlong local_res18;
  
  if (this == param_1) {
    return this;
  }
  iVar7 = *(int *)&param_1->field_0x8;
  local_res18 = (longlong)iVar7;
  Empty(this,iVar7);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x88,8,iVar7,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar14 = 0;
  if (0 < iVar7) {
    lVar15 = *(longlong *)this - *(longlong *)param_1;
    puVar12 = (undefined8 *)(*(longlong *)param_1 + 8);
    uVar13 = 1;
    do {
      if (((iVar14 < 0) || (*(int *)&param_1->field_0x28 <= iVar14)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      puVar11 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar11 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar7 = iVar14;
      if (iVar14 < 0) {
        iVar7 = iVar14 + 0x1f;
      }
      uVar10 = *(uint *)(puVar11 + (longlong)(iVar7 >> 5) * 4);
      *(undefined4 *)(lVar15 + -8 + (longlong)puVar12) = *(undefined4 *)(puVar12 + -1);
      if ((uVar10 & uVar13) == 0) {
        *(undefined4 *)(lVar15 + -4 + (longlong)puVar12) = *(undefined4 *)((longlong)puVar12 + -4);
      }
      else {
        uVar5 = puVar12[1];
        pFVar16 = (ForAnyElementType *)((longlong)puVar12 + lVar15 + 0x20);
        *(undefined8 *)(lVar15 + (longlong)puVar12) = *puVar12;
        ((undefined8 *)(lVar15 + (longlong)puVar12))[1] = uVar5;
        *(undefined2 *)(lVar15 + 0x10 + (longlong)puVar12) = *(undefined2 *)(puVar12 + 2);
        *(undefined1 *)(lVar15 + 0x12 + (longlong)puVar12) =
             *(undefined1 *)((longlong)puVar12 + 0x12);
        *(undefined8 *)(lVar15 + 0x14 + (longlong)puVar12) =
             *(undefined8 *)((longlong)puVar12 + 0x14);
        pFVar16->Data = (FScriptContainerElement *)0x0;
        piVar9 = (int *)((longlong)puVar12 + lVar15 + 0x2c);
        iVar7 = *(int *)(puVar12 + 5);
        pFVar3 = (FMovieSceneEvalTemplatePtr *)puVar12[4];
        *(int *)(lVar15 + 0x28 + (longlong)puVar12) = iVar7;
        if (iVar7 == 0) {
          *piVar9 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x88,8,iVar7,0,pFVar16,iVar7,piVar9);
          ConstructItems<FMovieSceneEvalTemplatePtr,FMovieSceneEvalTemplatePtr,int>
                    (pFVar16->Data,pFVar3,iVar7);
        }
        pbVar2 = (byte *)((longlong)puVar12 + lVar15 + 0x60);
        *pbVar2 = *pbVar2 & 0xfe;
        pbVar2 = (byte *)((longlong)puVar12 + lVar15 + 0x60);
        *pbVar2 = *pbVar2 | 2;
        FMovieSceneTrackImplementationPtr::operator=
                  ((FMovieSceneTrackImplementationPtr *)(lVar15 + 0x30 + (longlong)puVar12),
                   (FMovieSceneTrackImplementationPtr *)(puVar12 + 6));
        *(undefined8 *)(lVar15 + 0x68 + (longlong)puVar12) = puVar12[0xd];
        uVar10 = (*(uint *)(lVar15 + 0x70 + (longlong)puVar12) ^ *(uint *)(puVar12 + 0xe)) & 1 ^
                 *(uint *)(lVar15 + 0x70 + (longlong)puVar12);
        *(uint *)(lVar15 + 0x70 + (longlong)puVar12) = uVar10;
        uVar10 = (uVar10 ^ *(uint *)(puVar12 + 0xe)) & 2 ^ uVar10;
        *(uint *)(lVar15 + 0x70 + (longlong)puVar12) = uVar10;
        *(uint *)(lVar15 + 0x70 + (longlong)puVar12) =
             (uVar10 ^ *(uint *)(puVar12 + 0xe)) & 4 ^ uVar10;
        *(undefined4 *)(lVar15 + 0x78 + (longlong)puVar12) = *(undefined4 *)(puVar12 + 0xf);
        *(undefined4 *)(lVar15 + 0x7c + (longlong)puVar12) =
             *(undefined4 *)((longlong)puVar12 + 0x7c);
      }
      iVar14 = iVar14 + 1;
      uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      puVar12 = puVar12 + 0x11;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  return this;
}

// operator= @ 146099650

TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar5;
  int *piVar6;
  FString *this_00;
  undefined4 *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ForAnyElementType *pFVar13;
  
  if (this == param_1) {
    return this;
  }
  iVar4 = *(int *)&param_1->field_0x8;
  lVar9 = (longlong)iVar4;
  Empty(this,iVar4);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,iVar4,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar10 = 0;
  if (0 < iVar4) {
    lVar12 = *(longlong *)this - *(longlong *)param_1;
    puVar7 = (undefined4 *)(*(longlong *)param_1 + 0x10);
    uVar8 = 1;
    do {
      if (((iVar10 < 0) || (*(int *)&param_1->field_0x28 <= iVar10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(*pcVar2)();
        return pTVar5;
      }
      puVar11 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar11 = *(undefined1 **)&param_1->field_0x20;
      }
      this_00 = (FString *)(lVar12 + -0x10 + (longlong)puVar7);
      iVar4 = iVar10;
      if (iVar10 < 0) {
        iVar4 = iVar10 + 0x1f;
      }
      if ((*(uint *)(puVar11 + (longlong)(iVar4 >> 5) * 4) & uVar8) == 0) {
        *(undefined4 *)&(this_00->Data).AllocatorInstance.Data =
             *(undefined4 *)&(((FString *)(puVar7 + -4))->Data).AllocatorInstance.Data;
        *(undefined4 *)(lVar12 + -0xc + (longlong)puVar7) = puVar7[-3];
      }
      else {
        ::FString::FString(this_00,(FString *)(puVar7 + -4));
        *(undefined4 *)(lVar12 + (longlong)puVar7) = *puVar7;
        pFVar13 = (ForAnyElementType *)(lVar12 + 0x10 + (longlong)puVar7);
        *(undefined4 *)(lVar12 + 4 + (longlong)puVar7) = puVar7[1];
        *(undefined4 *)(lVar12 + 8 + (longlong)puVar7) = puVar7[2];
        pFVar13->Data = (FScriptContainerElement *)0x0;
        _Src = *(void **)(puVar7 + 4);
        iVar4 = puVar7[6];
        piVar6 = (int *)(lVar12 + 0x1c + (longlong)puVar7);
        *(int *)(lVar12 + 0x18 + (longlong)puVar7) = iVar4;
        if (iVar4 == 0) {
          *piVar6 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,0,pFVar13,iVar4,piVar6);
          memcpy(pFVar13->Data,_Src,(longlong)iVar4 << 2);
        }
        *(undefined8 *)(lVar12 + 0x20 + (longlong)puVar7) = *(undefined8 *)(puVar7 + 8);
        *(undefined4 *)(lVar12 + 0x28 + (longlong)puVar7) = puVar7[10];
        *(undefined4 *)(lVar12 + 0x2c + (longlong)puVar7) = puVar7[0xb];
      }
      iVar10 = iVar10 + 1;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar7 = puVar7 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return this;
}

// DestroyElements @ 1460bcde0

void __thiscall
TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator>::DestroyElements
          (TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator> *this,int param_1
          ,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x30 + 0x10 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 1460bced0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FMovieSceneEntityComponentField *this_00;
  undefined1 *puVar7;
  uint uVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FMovieSceneEntityComponentField *)(uVar6 * 0x100 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar7 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar7 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          FMovieSceneEntityComponentField::~FMovieSceneEntityComponentField(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      this_00 = (FMovieSceneEntityComponentField *)
                &this_00[1].PersistentEntityTree.SerializedData._padding_;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 1460bcfb0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar9 = (undefined8 *)(uVar6 * 0x40 + 0x28 + *(longlong *)this);
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          DestructItems<FMovieSceneEvaluationMetaData,int>
                    ((FMovieSceneEvaluationMetaData *)*puVar9,*(int *)(puVar9 + 1));
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          DestructItems<FMovieSceneEvaluationGroup,int>
                    ((FMovieSceneEvaluationGroup *)puVar9[-2],*(int *)(puVar9 + -1));
          if ((void *)puVar9[-2] != (void *)0x0) {
            FMemory::Free((void *)puVar9[-2]);
          }
          if ((void *)puVar9[-4] != (void *)0x0) {
            FMemory::Free((void *)puVar9[-4]);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar9 = puVar9 + 8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 1460bd0e0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FMovieSceneEvaluationTemplate *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FMovieSceneEvaluationTemplate *)(uVar6 * 0x170 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          FMovieSceneEvaluationTemplate::~FMovieSceneEvaluationTemplate(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FMovieSceneEvaluationTemplate *)&this_00[1].Tracks.field_0x10;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 1460bd1c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FMovieSceneSequenceHierarchy *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FMovieSceneSequenceHierarchy *)(uVar6 * 0x150 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          FMovieSceneSequenceHierarchy::~FMovieSceneSequenceHierarchy(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FMovieSceneSequenceHierarchy *)&this_00[1].RootNode.Children.ArrayNum;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 1460bd2a0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar9 = (undefined8 *)(uVar6 * 0x68 + 0x40 + *(longlong *)this);
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          if ((void *)puVar9[2] != (void *)0x0) {
            FMemory::Free((void *)puVar9[2]);
          }
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          puVar9[-6] = &___7FChildEntityFactory_MovieScene_UE__6B_;
          if ((void *)puVar9[-3] != (void *)0x0) {
            FMemory::Free((void *)puVar9[-3]);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar9 = puVar9 + 0xd;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 1460bd3c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar8 = (undefined8 *)(uVar6 * 0x68 + 0x50 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          *(undefined4 *)(puVar8 + 1) = 0;
          if ((void *)*puVar8 != (void *)0x0) {
            FMemory::Free((void *)*puVar8);
          }
          TSparseArray<TSparseSetElement<TObjectPtr<UMovieSceneSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TObjectPtr<UMovieSceneSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TObjectPtr<UMovieSceneSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(puVar8 + -8));
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar8 = puVar8 + 0xd;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 1460bd4c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    puVar10 = (undefined8 *)(*(longlong *)this + (uVar6 * 5 + 2) * 8);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 1460bd5b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FMovieSceneSubSequenceData *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FMovieSceneSubSequenceData *)(uVar6 * 0x120 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          FMovieSceneSubSequenceData::~FMovieSceneSubSequenceData(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FMovieSceneSubSequenceData *)&this_00[1].Sequence.SubPathString;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 1460bd690

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FMovieSceneEvaluationTrack *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FMovieSceneEvaluationTrack *)(uVar6 * 0x88 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          FMovieSceneEvaluationTrack::~FMovieSceneEvaluationTrack(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FMovieSceneEvaluationTrack *)&this_00[1].EvaluationPriority;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 1460bd770

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x40 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          if ((void *)puVar10[4] != (void *)0x0) {
            FMemory::Free((void *)puVar10[4]);
          }
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 1460bd860

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 1460bd940

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,enum_ENavigationToolItemFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(void *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)((longlong)this + 0x28))) {
        if ((*(int *)((longlong)this + 0x28) <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar9 = (longlong)this + 0x10;
        if (*(longlong *)((longlong)this + 0x20) != 0) {
          lVar9 = *(longlong *)((longlong)this + 0x20);
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(lVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// Empty @ 1460c18b0

void __thiscall
TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1950

void __thiscall
TSparseArray<TSparseSetElement<TObjectPtr<UMovieSceneSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TObjectPtr<UMovieSceneSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c19f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1a90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1b30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1bd0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1c80

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x120,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1d30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1de0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1e90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1f30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1fe0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,enum_ENavigationToolItemFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  if (-1 < param_1) {
    *(undefined4 *)((longlong)this + 8) = 0;
    if (*(int *)((longlong)this + 0xc) != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,this,0,(int *)((longlong)this + 0xc));
    }
    *(undefined4 *)((longlong)this + 0x34) = 0;
    *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)((longlong)this + 0x28) = 0;
    if ((*(int *)((longlong)this + 0x2c) < (int)uVar2) || (0x80 < *(int *)((longlong)this + 0x2c)))
    {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)((longlong)this + 0x2c) = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 1460e7f40

void __thiscall
TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator>::RemoveAt
          (TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator> *this,int param_1
          ,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x30 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x30) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0xc;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Move<TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>_> @ 146114c20

void __cdecl
TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
Move<TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>_>
          (TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *param_1,
          TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *param_2)

{
  DestroyElements(param_1,0,*(int *)&param_1->field_0x8);
  if (param_1 != param_2) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = 0;
    *(undefined4 *)&param_1->field_0x8 = *(undefined4 *)&param_2->field_0x8;
    *(undefined4 *)&param_1->field_0xc = *(undefined4 *)&param_2->field_0xc;
    *(undefined8 *)&param_2->field_0x8 = 0;
  }
  if (&param_1->field_0x10 != &param_2->field_0x10) {
    if (*(longlong *)&param_2->field_0x20 == 0) {
      memmove(&param_1->field_0x10,&param_2->field_0x10,0x10);
    }
    if (*(void **)&param_1->field_0x20 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x20);
    }
    *(undefined8 *)&param_1->field_0x20 = *(undefined8 *)&param_2->field_0x20;
    *(undefined8 *)&param_2->field_0x20 = 0;
    *(undefined4 *)&param_1->field_0x28 = *(undefined4 *)&param_2->field_0x28;
    *(undefined4 *)&param_1->field_0x2c = *(undefined4 *)&param_2->field_0x2c;
    *(undefined8 *)&param_2->field_0x28 = 0;
  }
  *(undefined4 *)&param_1->field_0x30 = *(undefined4 *)&param_2->field_0x30;
  *(undefined4 *)&param_1->field_0x34 = *(undefined4 *)&param_2->field_0x34;
  *(undefined4 *)&param_2->field_0x34 = 0;
  *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
  return;
}

// ~TSparseArray<UE::MovieScene::FEntityAllocation_*,FDefaultSparseArrayAllocator> @ 14611bdb0

void __thiscall
TSparseArray<UE::MovieScene::FEntityAllocation_*,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FEntityAllocation_*,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FEntityAllocation_*,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UMovieSceneEntitySystem_*,FDefaultSparseArrayAllocator> @ 14611be40

void __thiscall
TSparseArray<UMovieSceneEntitySystem_*,FDefaultSparseArrayAllocator>::
~TSparseArray<UMovieSceneEntitySystem_*,FDefaultSparseArrayAllocator>
          (TSparseArray<UMovieSceneEntitySystem_*,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator> @ 14611bed0

void __thiscall
TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator>::
~TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator>
          (TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<void_*,FDefaultSparseArrayAllocator> @ 14611bf60

void __thiscall
TSparseArray<void_*,FDefaultSparseArrayAllocator>::
~TSparseArray<void_*,FDefaultSparseArrayAllocator>
          (TSparseArray<void_*,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator> @ 14611bff0

void __thiscall
TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator> @ 14611c090

void __thiscall
TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator> *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FEntityGroupID,FDefaultSparseArrayAllocator> @ 14611c130

void __thiscall
TSparseArray<UE::MovieScene::FEntityGroupID,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FEntityGroupID,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FEntityGroupID,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator> @ 14611c1d0

void __thiscall
TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
::
~TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
          (TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x188,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FEntityGroupingPolicyKey,FDefaultSparseArrayAllocator> @ 14611c270

void __thiscall
TSparseArray<UE::MovieScene::FEntityGroupingPolicyKey,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FEntityGroupingPolicyKey,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FEntityGroupingPolicyKey,FDefaultSparseArrayAllocator> *this
          )

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator> @ 14611c310

void __thiscall
TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> @ 14611c3b0

void __thiscall
TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
~TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>
          (TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> @ 14611c450

void __thiscall
TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x140,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator> @ 14611c4f0

void __thiscall
TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
::
~TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
          (TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611c590

void __thiscall
TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611c630

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,enum_UE::MovieScene::ESystemPhase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611c6d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_short,enum_UE::MovieScene::ESystemPhase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<unsigned_short,enum_UE::MovieScene::ESystemPhase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611c770

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611c8b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611c950

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611c9f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611ca90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611cb30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611cbd0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611cc70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FGuid,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611cd10

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FGuid,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FGuid,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611cdb0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611ce50

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611cef0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611cf90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611d030

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611d0d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,TStatId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611d170

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TStatId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,TStatId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,TStatId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<UE::MovieScene::FEntityGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611d210

void __thiscall
TSparseArray<TSparseSetElement<UE::MovieScene::FEntityGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<UE::MovieScene::FEntityGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<UE::MovieScene::FEntityGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611d2b0

void __thiscall
TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator= @ 14611ea20

TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> * __thiscall
TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::operator=
          (TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *this,
          TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *pTVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  iVar6 = *(int *)&param_1->field_0x8;
  lVar11 = (longlong)iVar6;
  Empty(this,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,iVar6,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    plVar9 = (longlong *)(*(longlong *)this + 8);
    lVar13 = *(longlong *)param_1 - *(longlong *)this;
    do {
      if ((iVar12 < 0) || (*(int *)&param_1->field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *)
                   (*pcVar4)();
          return pTVar7;
        }
      }
      puVar8 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        *(undefined4 *)(plVar9 + -1) = *(undefined4 *)((longlong)plVar9 + lVar13 + -8);
        *(undefined4 *)((longlong)plVar9 + -4) = *(undefined4 *)(lVar13 + -4 + (longlong)plVar9);
      }
      else {
        plVar9[-1] = *(longlong *)((longlong)plVar9 + lVar13 + -8);
        lVar2 = *(longlong *)(lVar13 + (longlong)plVar9);
        *plVar9 = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        plVar9[1] = *(longlong *)(lVar13 + 8 + (longlong)plVar9);
        lVar2 = *(longlong *)(lVar13 + 0x10 + (longlong)plVar9);
        plVar9[2] = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        pUVar3 = *(UObject **)(lVar13 + 0x18 + (longlong)plVar9);
        plVar9[3] = (longlong)pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      plVar9 = plVar9 + 5;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// Add @ 1461225a0

int __thiscall
TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>::Add
          (TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
           *this,FEntityLocation *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)&this->field_0x34 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,1,(ForAnyElementType *)this,(int *)&this->field_0x8,
                       (int *)&this->field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,false);
  }
  else {
    iVar3 = *(int *)&this->field_0x30;
    iVar1 = *(int *)&this->field_0x34 + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar3 * 8);
    *(int *)&this->field_0x30 = iVar2;
    *(int *)&this->field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 8) = 0xffffffff;
    }
  }
  TSparseArrayBase<6,2,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<6,2,FDefaultSparseArrayAllocator> *)this,&local_18,iVar3);
  if (local_18.Pointer != (undefined4 *)0x0) {
    *(undefined4 *)local_18.Pointer = *(undefined4 *)param_1;
    *(ushort *)((longlong)local_18.Pointer + 4) = (param_1->ParentID).Value;
  }
  return local_18.Index;
}

// CreateConstIterator @ 146129cf0

TConstIterator * __thiscall
TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
::CreateConstIterator
          (TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
           *this,TConstIterator *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  int local_28;
  uint uStack_24;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  iVar2 = *(int *)&this->field_0x28;
  uStack_24 = 1;
  local_28 = 0;
  iStack_14 = 0;
  iStack_10 = 0;
  if (iVar2 != 0) {
    puVar5 = *(uint **)&this->field_0x20;
    if (*(uint **)&this->field_0x20 == (uint *)0x0) {
      puVar5 = (uint *)&this->field_0x10;
    }
    uVar3 = *puVar5;
    iStack_10 = 0;
    local_28 = 0;
    while (uVar3 == 0) {
      iStack_10 = iStack_10 + 0x20;
      lVar4 = (longlong)local_28;
      local_28 = local_28 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_28) goto LAB_146129d9e;
      uVar3 = puVar5[lVar4 + 1];
    }
    uStack_24 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_24 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_14 = iStack_10 + -1 + (int)lVar4;
    if (iVar2 < iStack_14) {
LAB_146129d9e:
      iStack_14 = iVar2;
    }
  }
  *(TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
    **)__return_storage_ptr__ = this;
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uStack_24,local_28);
  *(undefined1 **)&__return_storage_ptr__->field_0x10 = &this->field_0x10;
  *(ulonglong *)&__return_storage_ptr__->field_0x18 = CONCAT44(iStack_14,0xffffffff);
  *(ulonglong *)&__return_storage_ptr__->field_0x20 = CONCAT44(uStack_c,iStack_10);
  return __return_storage_ptr__;
}

// DestroyElements @ 14612b450

void __thiscall
TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator>::DestroyElements
          (TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator> *this,
          int param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    plVar11 = (longlong *)(*(longlong *)this + uVar7 * 0x18);
    lVar8 = (longlong)(param_1 + param_2) - uVar7;
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar10 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&this->field_0x20;
        }
        iVar5 = iVar6;
        if (iVar6 < 0) {
          iVar5 = iVar6 + 0x1f;
        }
        if ((*(uint *)(puVar10 + (longlong)(iVar5 >> 5) * 4) & uVar9) != 0) {
          puVar1 = (undefined8 *)plVar11[1];
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          puVar1 = (undefined8 *)*plVar11;
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      plVar11 = plVar11 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// DestroyElements @ 14612b550

void __thiscall
TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  longlong lVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    pbVar10 = (byte *)(uVar7 * 0x188 + 0x100 + *(longlong *)this);
    lVar11 = (longlong)(param_1 + param_2) - uVar7;
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          if (*(void **)(pbVar10 + 0x78) != (void *)0x0) {
            FMemory::Free(*(void **)(pbVar10 + 0x78));
          }
          bVar2 = *pbVar10;
          if ((bVar2 & 1) != 0) {
            pbVar5 = pbVar10 + -0x100;
            if ((bVar2 & 2) == 0) {
              pbVar5 = *(byte **)(pbVar10 + -0x100);
            }
            *pbVar10 = bVar2 & 0xfe;
            (*(code *)**(undefined8 **)pbVar5)(pbVar5,0);
            if ((*pbVar10 & 2) == 0) {
              FMemory::Free(*(void **)(pbVar10 + -0x100));
            }
          }
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      pbVar10 = pbVar10 + 0x188;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// DestroyElements @ 14612b680

void __thiscall
TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::DestroyElements
          (TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *this,
          int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    puVar10 = (undefined8 *)(*(longlong *)this + (uVar6 * 5 + 1) * 8);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar9) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)puVar10[2]);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      puVar10 = puVar10 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14612b770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>::DestroyElements
          (TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *this,
          int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FSequenceInstance *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FSequenceInstance *)(uVar6 * 0x140 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          UE::MovieScene::FSequenceInstance::~FSequenceInstance(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = this_00 + 1;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 14612b840

void __thiscall
TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    pbVar11 = (byte *)(*(longlong *)this + uVar7 * 0x48 + 0x40);
    lVar8 = (longlong)(param_1 + param_2) - uVar7;
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar10 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x1f;
        }
        if (((*(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) & uVar9) != 0) &&
           (bVar2 = *pbVar11, (bVar2 & 1) != 0)) {
          pbVar5 = pbVar11 + -0x40;
          if ((bVar2 & 2) == 0) {
            pbVar5 = *(byte **)(pbVar11 + -0x40);
          }
          *pbVar11 = bVar2 & 0xfe;
          (*(code *)**(undefined8 **)pbVar5)(pbVar5,0);
          if ((*pbVar11 & 2) == 0) {
            FMemory::Free(*(void **)(pbVar11 + -0x40));
          }
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      pbVar11 = pbVar11 + 0x48;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// DestroyElements @ 14612b950

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x38 + 0x18 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 7;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14612ba40

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,`UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(void *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x88 + 0x50 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)((longlong)this + 0x28))) {
        if ((*(int *)((longlong)this + 0x28) <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar9 = (longlong)this + 0x10;
        if (*(longlong *)((longlong)this + 0x20) != 0) {
          lVar9 = *(longlong *)((longlong)this + 0x20);
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(lVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          if ((void *)puVar10[4] != (void *)0x0) {
            FMemory::Free((void *)puVar10[4]);
          }
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 0x11;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14612bb40

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (int *)(uVar6 * 0x98 + 0x40 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          UE::Core::Private::Tuple::
          TTupleBaseElement<UE::MovieScene::FMutualInclusivityGraph::FIncludePair,1,2>::
          ~TTupleBaseElement<UE::MovieScene::FMutualInclusivityGraph::FIncludePair,1,2>
                    ((TTupleBaseElement<UE::MovieScene::FMutualInclusivityGraph::FIncludePair,1,2> *
                     )this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = this_00 + 0x26;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 14612bc20

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (int *)(uVar6 * 0x60 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          UE::Core::Private::Tuple::
          TTupleBaseElement<UE::MovieScene::FMutualInclusivityGraph::FIncludePair,1,2>::
          ~TTupleBaseElement<UE::MovieScene::FMutualInclusivityGraph::FIncludePair,1,2>
                    ((TTupleBaseElement<UE::MovieScene::FMutualInclusivityGraph::FIncludePair,1,2> *
                     )this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = this_00 + 0x18;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 14612bd00

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = (longlong)(param_1 + param_2) - uVar7;
    plVar11 = (longlong *)(*(longlong *)this + (uVar7 * 3 + 1) * 8);
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar10 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&this->field_0x20;
        }
        iVar5 = iVar6;
        if (iVar6 < 0) {
          iVar5 = iVar6 + 0x1f;
        }
        if (((*(uint *)(puVar10 + (longlong)(iVar5 >> 5) * 4) & uVar9) != 0) &&
           (puVar1 = (undefined8 *)*plVar11, puVar1 != (undefined8 *)0x0)) {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      plVar11 = plVar11 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// DestroyElements @ 14612bdf0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14612bee0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar8 = (undefined8 *)(uVar6 * 0x60 + 0x48 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          *(undefined4 *)(puVar8 + 1) = 0;
          if ((void *)*puVar8 != (void *)0x0) {
            FMemory::Free((void *)*puVar8);
          }
          TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(puVar8 + -8));
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar8 = puVar8 + 0xc;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 14612bfe0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar6 * 0x78 + 8 + *(longlong *)this;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x58);
          if ((1 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x78;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// Empty @ 14612f580

void __thiscall
TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::Empty
          (TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *this,
          int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 14614e360

void __thiscall
TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator>::RemoveAt
          (TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator> *this,
          int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)this;
    uVar10 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x38 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x38 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0xe;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 14614e4e0

void __thiscall
TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x188 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x188 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0x62;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 14614e670

void __thiscall
TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>::RemoveAt
          (TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)this;
    uVar10 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(lVar1 + uVar10 * 8);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 8) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 2;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 14614e7f0

void __thiscall
TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::RemoveAt
          (TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *this,
          int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(lVar1 + uVar10 * 0x28);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x28) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 10;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 14614e980

void __thiscall
TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>::RemoveAt
          (TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *this,
          int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x140 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x140 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0x50;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 146183db0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 146183e50

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator> @ 146183ef0

void __thiscall
TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator>::
~TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator>
          (TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator> @ 146183f90

void __thiscall
TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184030

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461840d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184170

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184210

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461842b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184350

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461843f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184490

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184530

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461845d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184670

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184710

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461847b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184850

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461848f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184990

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184a30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184ad0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184b70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184c10

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184cb0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,FMovieSceneExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184d50

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FMovieSceneExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,FMovieSceneExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FString,FMovieSceneExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<FFrameNumber>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146184df0

void __thiscall
TSparseArray<TSparseSetElement<FFrameNumber>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FFrameNumber>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FFrameNumber>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator= @ 146186550

TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  if (this == param_1) {
    return this;
  }
  iVar5 = *(int *)&param_1->field_0x8;
  lVar10 = (longlong)iVar5;
  Empty(this,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar5,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar11 = 0;
  if (0 < iVar5) {
    uVar9 = 1;
    puVar8 = (undefined8 *)(*(longlong *)this + 8);
    lVar12 = *(longlong *)param_1 - *(longlong *)this;
    do {
      if ((iVar11 < 0) || (*(int *)&param_1->field_0x28 <= iVar11)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      puVar7 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar5 = iVar11;
      if (iVar11 < 0) {
        iVar5 = iVar11 + 0x1f;
      }
      if ((*(uint *)(puVar7 + (longlong)(iVar5 >> 5) * 4) & uVar9) == 0) {
        *(undefined4 *)(puVar8 + -1) = *(undefined4 *)((longlong)puVar8 + lVar12 + -8);
        *(undefined4 *)((longlong)puVar8 + -4) = *(undefined4 *)(lVar12 + -4 + (longlong)puVar8);
      }
      else {
        puVar8[-1] = *(undefined8 *)((longlong)puVar8 + lVar12 + -8);
        *puVar8 = *(undefined8 *)(lVar12 + (longlong)puVar8);
        lVar2 = *(longlong *)(lVar12 + 8 + (longlong)puVar8);
        puVar8[1] = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(lVar12 + 0x10 + (longlong)puVar8);
        *(undefined4 *)((longlong)puVar8 + 0x14) = *(undefined4 *)(lVar12 + 0x14 + (longlong)puVar8)
        ;
      }
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      puVar8 = puVar8 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return this;
}

// DestroyElements @ 14619d0e0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    pbVar11 = (byte *)(uVar7 * 0x40 + 0x30 + *(longlong *)this);
    lVar8 = (longlong)(param_1 + param_2) - uVar7;
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar10 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x1f;
        }
        if (((*(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) & uVar9) != 0) &&
           (bVar2 = *pbVar11, (bVar2 & 1) != 0)) {
          pbVar5 = pbVar11 + -0x20;
          if ((bVar2 & 2) == 0) {
            pbVar5 = *(byte **)(pbVar11 + -0x20);
          }
          *pbVar11 = bVar2 & 0xfe;
          (*(code *)**(undefined8 **)pbVar5)(pbVar5,0);
          if ((*pbVar11 & 2) == 0) {
            FMemory::Free(*(void **)(pbVar11 + -0x20));
          }
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      pbVar11 = pbVar11 + 0x40;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// DestroyElements @ 14619d1f0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    pbVar11 = (byte *)(uVar7 * 0x38 + 0x28 + *(longlong *)this);
    lVar8 = (longlong)(param_1 + param_2) - uVar7;
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar10 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x1f;
        }
        if (((*(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) & uVar9) != 0) &&
           (bVar2 = *pbVar11, (bVar2 & 1) != 0)) {
          pbVar5 = pbVar11 + -0x20;
          if ((bVar2 & 2) == 0) {
            pbVar5 = *(byte **)(pbVar11 + -0x20);
          }
          *pbVar11 = bVar2 & 0xfe;
          (*(code *)**(undefined8 **)pbVar5)(pbVar5,0);
          if ((*pbVar11 & 2) == 0) {
            FMemory::Free(*(void **)(pbVar11 + -0x20));
          }
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      pbVar11 = pbVar11 + 0x38;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// DestroyElements @ 14619d300

void __thiscall
TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x70 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          if ((void *)puVar10[0xb] != (void *)0x0) {
            FMemory::Free((void *)puVar10[0xb]);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 0xe;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619d3f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar9 = (undefined8 *)(uVar6 * 0x30 + 0x18 + *(longlong *)this);
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
                    ((FEntry *)*puVar9,*(int *)(puVar9 + 1));
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
                    ((FEntry *)puVar9[-2],*(int *)(puVar9 + -1));
          if ((void *)puVar9[-2] != (void *)0x0) {
            FMemory::Free((void *)puVar9[-2]);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar9 = puVar9 + 6;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 14619d510

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    puVar10 = (undefined8 *)(*(longlong *)this + (uVar6 * 5 + 1) * 8);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
                    ((FEntry *)*puVar10,*(int *)(puVar10 + 1));
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619d600

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x38 + 0x20 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 7;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619d6f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x68 + 0x50 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 0xd;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619d7e0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 0x10 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619d8c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    pbVar11 = (byte *)(uVar7 * 0x60 + 0x50 + *(longlong *)this);
    lVar8 = (longlong)(param_1 + param_2) - uVar7;
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar10 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x1f;
        }
        if (((*(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) & uVar9) != 0) &&
           (bVar2 = *pbVar11, (bVar2 & 1) != 0)) {
          pbVar5 = pbVar11 + -0x40;
          if ((bVar2 & 2) == 0) {
            pbVar5 = *(byte **)(pbVar11 + -0x40);
          }
          *pbVar11 = bVar2 & 0xfe;
          (*(code *)**(undefined8 **)pbVar5)(pbVar5,0);
          if ((*pbVar11 & 2) == 0) {
            FMemory::Free(*(void **)(pbVar11 + -0x40));
          }
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      pbVar11 = pbVar11 + 0x60;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// DestroyElements @ 14619d9d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x38 + 0x20 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 7;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619dac0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    plVar11 = (longlong *)(uVar7 * 0x20 + 0x10 + *(longlong *)this);
    lVar8 = (longlong)(param_1 + param_2) - uVar7;
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar10 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&this->field_0x20;
        }
        iVar5 = iVar6;
        if (iVar6 < 0) {
          iVar5 = iVar6 + 0x1f;
        }
        if (((*(uint *)(puVar10 + (longlong)(iVar5 >> 5) * 4) & uVar9) != 0) &&
           (puVar1 = (undefined8 *)*plVar11, puVar1 != (undefined8 *)0x0)) {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      plVar11 = plVar11 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// DestroyElements @ 14619dbb0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x30 + 0x18 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int>
                    ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)*puVar10,
                     *(int *)(puVar10 + 1));
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619dca0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x70 + 0x58 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 0xe;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619dd90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    pbVar11 = (byte *)(uVar7 * 0x38 + 0x28 + *(longlong *)this);
    lVar8 = (longlong)(param_1 + param_2) - uVar7;
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar10 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x1f;
        }
        if (((*(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) & uVar9) != 0) &&
           (bVar2 = *pbVar11, (bVar2 & 1) != 0)) {
          pbVar5 = pbVar11 + -0x20;
          if ((bVar2 & 2) == 0) {
            pbVar5 = *(byte **)(pbVar11 + -0x20);
          }
          *pbVar11 = bVar2 & 0xfe;
          (*(code *)**(undefined8 **)pbVar5)(pbVar5,0);
          if ((*pbVar11 & 2) == 0) {
            FMemory::Free(*(void **)(pbVar11 + -0x20));
          }
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      pbVar11 = pbVar11 + 0x38;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// DestroyElements @ 14619dea0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x40 + 0x28 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619df90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x38 + 0x20 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 7;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619e080

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x40 + 0x28 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619e170

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x40 + 0x28 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619e260

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = (longlong)(param_1 + param_2) - uVar7;
    plVar11 = (longlong *)(*(longlong *)this + (uVar7 * 5 + 3) * 8);
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar10 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&this->field_0x20;
        }
        iVar5 = iVar6;
        if (iVar6 < 0) {
          iVar5 = iVar6 + 0x1f;
        }
        if (((*(uint *)(puVar10 + (longlong)(iVar5 >> 5) * 4) & uVar9) != 0) &&
           (puVar1 = (undefined8 *)*plVar11, puVar1 != (undefined8 *)0x0)) {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      plVar11 = plVar11 + 5;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// DestroyElements @ 14619e350

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14619e440

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FMovieSceneExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FString,FMovieSceneExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// Empty @ 1461a0fa0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1461a1050

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FMovieSceneExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FString,FMovieSceneExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1461a1100

void __thiscall
TSparseArray<TSparseSetElement<FFrameNumber>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<FFrameNumber>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 1461c9610

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x40 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x40 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0x10;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 1461c97a0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x38 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x38 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0xe;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 1461c9930

void __thiscall
TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedGroupMetaData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x70 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x70 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0x1c;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 1461c9ac0

void __thiscall
TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(lVar1 + uVar10 * 0x48);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x48) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0x12;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ~TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator> @ 1461feb80

void __thiscall
TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>::
~TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>
          (TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<UMovieSceneTrack_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461fec20

void __thiscall
TSparseArray<TSparseSetElement<UMovieSceneTrack_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<UMovieSceneTrack_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<UMovieSceneTrack_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461fecc0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461fed60

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FIsSpawnable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461fee00

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FIsSpawnable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FIsSpawnable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FIsSpawnable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461feea0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461fef40

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461fefe0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461ff080

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461ff120

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x198,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461ff1c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461ff260

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneEvaluationGroupParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461ff300

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneEvaluationGroupParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneEvaluationGroupParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneEvaluationGroupParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1461ff3a0

void __thiscall
TSparseArray<TSparseSetElement<TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator= @ 146200280

TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  iVar6 = *(int *)&param_1->field_0x8;
  lVar11 = (longlong)iVar6;
  Empty(this,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar6,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    puVar9 = (undefined8 *)(*(longlong *)this + 8);
    lVar13 = *(longlong *)param_1 - *(longlong *)this;
    do {
      if ((iVar12 < 0) || (*(int *)&param_1->field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      puVar8 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      uVar2 = *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4);
      *(undefined4 *)(puVar9 + -1) = *(undefined4 *)((longlong)puVar9 + lVar13 + -8);
      if ((uVar2 & uVar10) == 0) {
        *(undefined4 *)((longlong)puVar9 + -4) = *(undefined4 *)(lVar13 + -4 + (longlong)puVar9);
      }
      else {
        pUVar3 = *(UObject **)(lVar13 + (longlong)puVar9);
        *puVar9 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar13 + 8 + (longlong)puVar9);
        *(undefined4 *)((longlong)puVar9 + 0xc) = *(undefined4 *)(lVar13 + 0xc + (longlong)puVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar9 = puVar9 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// DestroyElements @ 14620e430

void __thiscall
TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>::
DestroyElements(TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>
                *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x30 + 0x10 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14620e510

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14620e600

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FMovieSceneObjectCache *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FMovieSceneObjectCache *)(uVar6 * 0x198 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          FMovieSceneObjectCache::~FMovieSceneObjectCache(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FMovieSceneObjectCache *)&this_00[1].WeakSequence;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 14620e6e0

void __thiscall
TSparseArray<TSparseSetElement<TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  
  uVar8 = (ulonglong)param_1;
  if ((longlong)uVar8 < (longlong)(param_1 + param_2)) {
    bVar4 = (byte)param_1 & 0x1f;
    uVar10 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    lVar9 = (longlong)(param_1 + param_2) - uVar8;
    plVar12 = (longlong *)(*(longlong *)this + (uVar8 * 3 + 1) * 8);
    do {
      iVar7 = (int)uVar8;
      if ((-1 < iVar7) && (iVar7 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar11 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&this->field_0x20;
        }
        iVar6 = iVar7;
        if (iVar7 < 0) {
          iVar6 = iVar7 + 0x1f;
        }
        if (((*(uint *)(puVar11 + (longlong)(iVar6 >> 5) * 4) & uVar10) != 0) &&
           (plVar2 = (longlong *)*plVar12, plVar2 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      plVar12 = plVar12 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

// Empty @ 14620f350

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14620f3f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3c,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 14622ee80

void __thiscall
TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>::RemoveAt
          (TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x30 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x30) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0xc;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14629b680

void __thiscall
TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

