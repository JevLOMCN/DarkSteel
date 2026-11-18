// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_> @ 14321fd70

TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
           *this,TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
                 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  puVar1 = &this->field_0x50;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  puVar2 = &param_1->field_0x50;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined4 *)&this->field_0x78 = 0;
  *(undefined4 *)&this->field_0x7c = 0x80;
  *(undefined4 *)&this->field_0x80 = 0xffffffff;
  *(undefined4 *)&this->field_0x84 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined4 *)&this->field_0x98 = 0;
  if (puVar1 != puVar2) {
    *(undefined8 *)puVar1 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar2 = 0;
    *(undefined4 *)&this->field_0x58 = *(undefined4 *)&param_1->field_0x58;
    *(undefined4 *)&this->field_0x5c = *(undefined4 *)&param_1->field_0x5c;
    *(undefined8 *)&param_1->field_0x58 = 0;
    if (&this->field_0x60 != &param_1->field_0x60) {
      if (*(longlong *)&param_1->field_0x70 == 0) {
        memmove(&this->field_0x60,&param_1->field_0x60,0x10);
      }
      if (*(void **)&this->field_0x70 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x70);
      }
      *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_1->field_0x70;
      *(undefined8 *)&param_1->field_0x70 = 0;
      *(undefined4 *)&this->field_0x78 = *(undefined4 *)&param_1->field_0x78;
      *(undefined4 *)&this->field_0x7c = *(undefined4 *)&param_1->field_0x7c;
      *(undefined8 *)&param_1->field_0x78 = 0;
    }
    *(undefined4 *)&this->field_0x80 = *(undefined4 *)&param_1->field_0x80;
    *(undefined4 *)&this->field_0x84 = *(undefined4 *)&param_1->field_0x84;
    *(undefined4 *)&param_1->field_0x80 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x84 = 0;
  }
  if (*(longlong *)&param_1->field_0x90 == 0) {
    *(undefined4 *)&this->field_0x88 = *(undefined4 *)&param_1->field_0x88;
  }
  if (*(void **)&this->field_0x90 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x90);
  }
  *(undefined8 *)&this->field_0x90 = *(undefined8 *)&param_1->field_0x90;
  *(undefined8 *)&param_1->field_0x90 = 0;
  *(undefined4 *)&this->field_0x98 = *(undefined4 *)&param_1->field_0x98;
  *(undefined4 *)&param_1->field_0x98 = 0;
  return this;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,BuildPatchServices::FBlockStructure> @ 1432279a0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,BuildPatchServices::FBlockStructure>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,BuildPatchServices::FBlockStructure>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,BuildPatchServices::FBlockStructure>
           *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&this->field_0x10;
  while (pvVar1 != (void *)0x0) {
    *(undefined8 *)&this->field_0x18 = *(undefined8 *)((longlong)pvVar1 + 0x18);
    *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
    ::operator_delete(pvVar1,0x20);
    pvVar1 = *(void **)&this->field_0x18;
    *(void **)&this->field_0x10 = pvVar1;
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,BuildPatchServices::FFileManifest> @ 1432874a0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,BuildPatchServices::FFileManifest>::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,BuildPatchServices::FFileManifest>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,BuildPatchServices::FFileManifest>
           *this)

{
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  DestructItems<FString,int>(*(FString **)&this->field_0x48,*(int *)&this->field_0x50);
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
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

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,double,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_> @ 1432fd220

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,double,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,double,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,double,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0xf8 = 0;
  if (*(void **)&this->field_0xf0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xf0);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0xb0);
  *(undefined4 *)&this->field_0xa8 = 0;
  if (*(void **)&this->field_0xa0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa0);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x60);
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  return;
}

