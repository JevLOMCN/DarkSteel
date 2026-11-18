// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData> @ 14dc720c0

TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
           *this,TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
                 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FString *pFVar3;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  ::FString::FString((FString *)&this->field_0x8,(FString *)&param_1->field_0x8);
  ::FString::FString((FString *)&this->field_0x18,(FString *)&param_1->field_0x18);
  ::FString::FString((FString *)&this->field_0x28,(FString *)&param_1->field_0x28);
  ::FString::FString((FString *)&this->field_0x38,(FString *)&param_1->field_0x38);
  puVar1 = &this->field_0x48;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x50;
  pFVar3 = *(FString **)&param_1->field_0x48;
  *(int *)&this->field_0x50 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x54 = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x54);
    ConstructItems<FString,FString,int>(*(void **)puVar1,pFVar3,iVar2);
  }
  puVar1 = &this->field_0x58;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x60;
  pFVar3 = *(FString **)&param_1->field_0x58;
  *(int *)&this->field_0x60 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x64 = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x64);
    ConstructItems<FString,FString,int>(*(void **)puVar1,pFVar3,iVar2);
  }
  puVar1 = &this->field_0x68;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x90 = 0;
  *(undefined4 *)&this->field_0x94 = 0x80;
  *(undefined4 *)&this->field_0x98 = 0xffffffff;
  *(undefined4 *)&this->field_0x9c = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined4 *)&this->field_0xb0 = 0;
  if (puVar1 != &param_1->field_0x68) {
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0xa0,(int *)&this->field_0xb0,
               (ForElementType<FSetElementId> *)&param_1->field_0xa0,*(int *)&param_1->field_0xb0);
    TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)puVar1,
                (TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->field_0x68);
  }
  *(undefined4 *)&this->field_0xb8 = *(undefined4 *)&param_1->field_0xb8;
  return this;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams> @ 14dd0d130

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>
           *this)

{
  *(undefined4 *)&this->field_0xb8 = 0;
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x70);
  *(undefined4 *)&this->field_0x68 = 0;
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x20);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

