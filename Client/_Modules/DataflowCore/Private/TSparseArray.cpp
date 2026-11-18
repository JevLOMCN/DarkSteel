// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 24

// ~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144432e70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144432f10

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FGuid,FDataflowConnection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144432fb0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,FDataflowConnection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FGuid,FDataflowConnection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FGuid,FDataflowConnection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144433050

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1444330f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144433190

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144433230

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FFactoryParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1444332d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FFactoryParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FFactoryParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FFactoryParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144433370

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144433410

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1444334b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144433550

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1444335f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// CompactStable @ 14443c050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::CompactStable(TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *this)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong64 uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStackY_f8 [32];
  FSparseArrayAllocationInfo local_c8;
  undefined4 local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a0;
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_78;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar25 = false;
  if (*(int *)&this->field_0x34 != 0) {
    uVar16 = 0;
    uVar19 = *(int *)&this->field_0x8 - *(int *)&this->field_0x34;
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayMax = 0;
    local_70.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_70.AllocationFlags._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_70._48_8_ = _UNK_150631d98;
    local_78 = this;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    if (uVar19 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar19,(ForAnyElementType *)&local_70,0,&local_70.Data.ArrayMax);
    }
    iVar2 = local_70.AllocationFlags.MaxBits;
    uVar19 = uVar19 + 0x1f & 0xffffffe0;
    local_70.FirstFreeIndex = -1;
    local_70.NumFreeIndices = 0;
    local_70.AllocationFlags._24_8_ = (ulonglong)(uint)local_70.AllocationFlags.MaxBits << 0x20;
    if ((iVar2 < (int)uVar19) || (uVar17 = uVar16, 0x80 < iVar2)) {
      uVar12 = 0x80;
      if (0x80 < (int)uVar19) {
        uVar12 = uVar19;
      }
      local_70.AllocationFlags._24_8_ = (ulonglong)uVar12 << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70.AllocationFlags,0);
      uVar17 = (ulonglong)local_70._48_8_ >> 0x20;
    }
    iVar2 = *(int *)&this->field_0x28;
    local_c8.Pointer = &this->field_0x10;
    local_c8.Index = 0;
    local_c8._4_4_ = 1;
    iStack_b4 = 0;
    uStack_b0 = 0;
    if (iVar2 != 0) {
      puVar21 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar21 = local_c8.Pointer;
      }
      uVar19 = *puVar21;
      uVar24 = uVar16;
      while (uVar19 == 0) {
        uStack_b0 = (int)uVar24 + 0x20;
        uVar24 = (ulonglong)uStack_b0;
        iVar10 = (int)uVar16;
        local_c8.Index = iVar10 + 1;
        uVar16 = (ulonglong)(uint)local_c8.Index;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_c8.Index)
        goto LAB_14443c1e6;
        uVar19 = puVar21[(longlong)iVar10 + 1];
      }
      local_c8._4_4_ = -uVar19 & uVar19;
      uVar16 = (ulonglong)(uint)local_c8._4_4_ * 2 + 1;
      lVar23 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iStack_b4 = (int)lVar23 + -1 + uStack_b0;
      if (iVar2 < iStack_b4) {
LAB_14443c1e6:
        iStack_b4 = iVar2;
      }
    }
    local_b8 = 0xffffffff;
    local_a0._padding_ = CONCAT44(local_c8._4_4_,local_c8.Index);
    local_a0.UnvisitedBitMask = 0xffffffff;
    local_a0.CurrentBitIndex = iStack_b4;
    local_a0._28_4_ = uStack_ac;
    local_a0.BaseBitIndex = uStack_b0;
    local_a8 = this;
    local_a0.Array = local_c8.Pointer;
    if (iStack_b4 < iVar2) {
      while( true ) {
        iVar2 = local_a0.CurrentBitIndex;
        pTVar9 = local_a8;
        if ((int)uVar17 == 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x20,8,1,(ForAnyElementType *)&local_70,&local_70.Data.ArrayNum,
                              &local_70.Data.ArrayMax);
          if (local_70.AllocationFlags.NumBits == 0) {
            iVar13 = -1;
          }
          else {
            iVar13 = (int)((local_70.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU) +
                          local_70.AllocationFlags.NumBits + -1) >> 5;
          }
          uVar19 = local_70.AllocationFlags.NumBits >> 0x1f & 0x1f;
          iVar11 = local_70.AllocationFlags.NumBits + uVar19;
          iVar22 = iVar11 >> 5;
          if (iVar22 == iVar13) {
            local_70.AllocationFlags.NumBits = local_70.AllocationFlags.NumBits + 1;
          }
          else {
            if (local_70.AllocationFlags.MaxBits < local_70.AllocationFlags.NumBits + 1) {
              uVar12 = local_70.AllocationFlags.MaxBits + 0x1fU >> 5;
              uVar20 = local_70.AllocationFlags.NumBits + 0x20U >> 5;
              if (uVar20 < 5) {
                iVar13 = 4;
                iVar15 = local_70.AllocationFlags.NumBits;
              }
              else {
                uVar16 = (ulonglong)uVar20;
                if (uVar12 < 5) {
                  uVar12 = 0;
                }
                if (uVar12 == 0) {
                  uVar17 = 4;
                  if (4 < uVar16) {
                    uVar17 = uVar16;
                  }
                }
                else {
                  uVar17 = ((ulonglong)uVar20 * 3 >> 3) + 0x10 + uVar16;
                }
                uVar14 = FMemory::QuantizeSize(uVar17 * 4,0);
                iVar13 = (int)(uVar14 >> 2);
                if (iVar13 < (int)uVar20) {
                  iVar13 = 0x7fffffff;
                }
                iVar15 = local_70.AllocationFlags.NumBits;
              }
              local_70.AllocationFlags.MaxBits = iVar13 << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70.AllocationFlags,iVar15);
            }
            iVar13 = local_70.AllocationFlags.NumBits + 1;
            local_70.AllocationFlags.NumBits = iVar13;
            uVar20 = iVar13 >> 0x1f & 0x1f;
            uVar12 = iVar13 + uVar20;
            iVar13 = (uVar12 & 0x1f) - uVar20;
            if (iVar13 != 0) {
              FVar18 = (ForElementType<unsigned_int>)&local_70.AllocationFlags;
              if (local_70.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar18 = local_70.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              puVar21 = (uint *)((longlong)FVar18 + (longlong)((int)uVar12 >> 5) * 4);
              *puVar21 = *puVar21 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
            }
          }
          FVar18 = (ForElementType<unsigned_int>)&local_70.AllocationFlags;
          if (local_70.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_70.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          puVar21 = (uint *)((longlong)FVar18 + (longlong)iVar22 * 4);
          *puVar21 = *puVar21 & ~(1 << (((byte)iVar11 & 0x1f) - (char)uVar19 & 0x1f));
        }
        else {
          iVar10 = local_70.FirstFreeIndex;
          lVar23 = (longlong)local_70.FirstFreeIndex;
          local_70.NumFreeIndices = (int)uVar17 + -1;
          local_70.FirstFreeIndex =
               *(int *)(local_70.Data.AllocatorInstance.Data + lVar23 * 0x20 + 4);
          if (local_70.NumFreeIndices != 0) {
            *(undefined4 *)
             (local_70.Data.AllocatorInstance.Data +
             (longlong)*(int *)(local_70.Data.AllocatorInstance.Data + lVar23 * 0x20 + 4) * 0x20) =
                 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_70,&local_c8,iVar10);
        if (local_c8.Pointer != (undefined8 *)0x0) {
          lVar23 = *(longlong *)pTVar9;
          puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + lVar23);
          uVar3 = puVar1[1];
          *(undefined8 *)local_c8.Pointer = *puVar1;
          *(undefined8 *)((longlong)local_c8.Pointer + 8) = uVar3;
          puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + 0x10 + lVar23);
          uVar3 = puVar1[1];
          *(undefined8 *)((longlong)local_c8.Pointer + 0x10) = *puVar1;
          *(undefined8 *)((longlong)local_c8.Pointer + 0x18) = uVar3;
        }
        local_a0.UnvisitedBitMask = local_a0.UnvisitedBitMask & ~local_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a0);
        this = local_78;
        if ((local_a0.Array)->NumBits <= local_a0.CurrentBitIndex) break;
        uVar17 = (ulonglong)local_70._48_8_ >> 0x20;
      }
    }
    pFVar4 = *(FScriptContainerElement **)this;
    uVar5 = *(undefined8 *)&this->field_0x8;
    uVar6._0_1_ = this->field_0x10;
    uVar6._1_1_ = this->field_0x11;
    uVar6._2_1_ = this->field_0x12;
    uVar6._3_1_ = this->field_0x13;
    uVar6._4_1_ = this->field_0x14;
    uVar6._5_1_ = this->field_0x15;
    uVar6._6_1_ = this->field_0x16;
    uVar6._7_1_ = this->field_0x17;
    uVar7._0_1_ = this->field_0x18;
    uVar7._1_1_ = this->field_0x19;
    uVar7._2_1_ = this->field_0x1a;
    uVar7._3_1_ = this->field_0x1b;
    uVar7._4_1_ = this->field_0x1c;
    uVar7._5_1_ = this->field_0x1d;
    uVar7._6_1_ = this->field_0x1e;
    uVar7._7_1_ = this->field_0x1f;
    FVar18 = *(ForElementType<unsigned_int> *)&this->field_0x20;
    uVar8._0_4_ = *(int *)&this->field_0x28;
    uVar8._4_4_ = *(int *)&this->field_0x2c;
    uVar3._0_4_ = *(int *)&this->field_0x30;
    uVar3._4_4_ = *(int *)&this->field_0x34;
    *(FScriptContainerElement **)this = local_70.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x8 = local_70.Data.ArrayNum;
    *(int *)&this->field_0xc = local_70.Data.ArrayMax;
    this->field_0x10 = local_70.AllocationFlags.AllocatorInstance.InlineData[0];
    this->field_0x11 = local_70.AllocationFlags.AllocatorInstance.InlineData[1];
    this->field_0x12 = local_70.AllocationFlags.AllocatorInstance.InlineData[2];
    this->field_0x13 = local_70.AllocationFlags.AllocatorInstance.InlineData[3];
    this->field_0x14 = local_70.AllocationFlags.AllocatorInstance.InlineData[4];
    this->field_0x15 = local_70.AllocationFlags.AllocatorInstance.InlineData[5];
    this->field_0x16 = local_70.AllocationFlags.AllocatorInstance.InlineData[6];
    this->field_0x17 = local_70.AllocationFlags.AllocatorInstance.InlineData[7];
    this->field_0x18 = local_70.AllocationFlags.AllocatorInstance.InlineData[8];
    this->field_0x19 = local_70.AllocationFlags.AllocatorInstance.InlineData[9];
    this->field_0x1a = local_70.AllocationFlags.AllocatorInstance.InlineData[10];
    this->field_0x1b = local_70.AllocationFlags.AllocatorInstance.InlineData[0xb];
    this->field_0x1c = local_70.AllocationFlags.AllocatorInstance.InlineData[0xc];
    this->field_0x1d = local_70.AllocationFlags.AllocatorInstance.InlineData[0xd];
    this->field_0x1e = local_70.AllocationFlags.AllocatorInstance.InlineData[0xe];
    this->field_0x1f = local_70.AllocationFlags.AllocatorInstance.InlineData[0xf];
    local_70.Data.ArrayMax = (int)((ulonglong)uVar5 >> 0x20);
    bVar25 = local_70.Data.ArrayMax != 0;
    *(ForElementType<unsigned_int> *)&this->field_0x20 =
         local_70.AllocationFlags.AllocatorInstance.SecondaryData;
    *(int *)&this->field_0x28 = local_70.AllocationFlags.NumBits;
    *(int *)&this->field_0x2c = local_70.AllocationFlags.MaxBits;
    local_70.Data._8_8_ = (ulonglong)(uint)local_70.Data.ArrayMax << 0x20;
    *(int *)&this->field_0x30 = local_70.FirstFreeIndex;
    *(int *)&this->field_0x34 = local_70.NumFreeIndices;
    local_70.Data.AllocatorInstance.Data = pFVar4;
    local_70.AllocationFlags.AllocatorInstance.InlineData._0_8_ = uVar6;
    local_70.AllocationFlags.AllocatorInstance.InlineData._8_8_ = uVar7;
    local_70.AllocationFlags.AllocatorInstance.SecondaryData = FVar18;
    local_70.AllocationFlags._24_8_ = uVar8;
    if (bVar25) {
      local_70._48_8_ = uVar3;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&local_70,0,&local_70.Data.ArrayMax);
    }
    iVar2 = local_70.AllocationFlags.MaxBits;
    local_70.FirstFreeIndex = -1;
    local_70.NumFreeIndices = 0;
    local_70.AllocationFlags._24_8_ = (ulonglong)(uint)local_70.AllocationFlags.MaxBits << 0x20;
    if (0x80 < (uint)iVar2) {
      local_70.AllocationFlags.NumBits = 0;
      local_70.AllocationFlags.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70.AllocationFlags,0);
    }
    if (local_70.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocationFlags.AllocatorInstance.SecondaryData);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    bVar25 = true;
  }
  return bVar25;
}

// CompactStable @ 14443c530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::CompactStable(TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *this)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong64 uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStackY_f8 [32];
  FSparseArrayAllocationInfo local_c8;
  undefined4 local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a0;
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_78;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar25 = false;
  if (*(int *)&this->field_0x34 != 0) {
    uVar16 = 0;
    uVar19 = *(int *)&this->field_0x8 - *(int *)&this->field_0x34;
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayMax = 0;
    local_70.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_70.AllocationFlags._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_70._48_8_ = _UNK_150631d98;
    local_78 = this;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    if (uVar19 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar19,(ForAnyElementType *)&local_70,0,&local_70.Data.ArrayMax);
    }
    iVar2 = local_70.AllocationFlags.MaxBits;
    uVar19 = uVar19 + 0x1f & 0xffffffe0;
    local_70.FirstFreeIndex = -1;
    local_70.NumFreeIndices = 0;
    local_70.AllocationFlags._24_8_ = (ulonglong)(uint)local_70.AllocationFlags.MaxBits << 0x20;
    if ((iVar2 < (int)uVar19) || (uVar17 = uVar16, 0x80 < iVar2)) {
      uVar12 = 0x80;
      if (0x80 < (int)uVar19) {
        uVar12 = uVar19;
      }
      local_70.AllocationFlags._24_8_ = (ulonglong)uVar12 << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70.AllocationFlags,0);
      uVar17 = (ulonglong)local_70._48_8_ >> 0x20;
    }
    iVar2 = *(int *)&this->field_0x28;
    local_c8.Pointer = &this->field_0x10;
    local_c8.Index = 0;
    local_c8._4_4_ = 1;
    iStack_b4 = 0;
    uStack_b0 = 0;
    if (iVar2 != 0) {
      puVar21 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar21 = local_c8.Pointer;
      }
      uVar19 = *puVar21;
      uVar24 = uVar16;
      while (uVar19 == 0) {
        uStack_b0 = (int)uVar24 + 0x20;
        uVar24 = (ulonglong)uStack_b0;
        iVar10 = (int)uVar16;
        local_c8.Index = iVar10 + 1;
        uVar16 = (ulonglong)(uint)local_c8.Index;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_c8.Index)
        goto LAB_14443c6c6;
        uVar19 = puVar21[(longlong)iVar10 + 1];
      }
      local_c8._4_4_ = -uVar19 & uVar19;
      uVar16 = (ulonglong)(uint)local_c8._4_4_ * 2 + 1;
      lVar23 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iStack_b4 = (int)lVar23 + -1 + uStack_b0;
      if (iVar2 < iStack_b4) {
LAB_14443c6c6:
        iStack_b4 = iVar2;
      }
    }
    local_b8 = 0xffffffff;
    local_a0._padding_ = CONCAT44(local_c8._4_4_,local_c8.Index);
    local_a0.UnvisitedBitMask = 0xffffffff;
    local_a0.CurrentBitIndex = iStack_b4;
    local_a0._28_4_ = uStack_ac;
    local_a0.BaseBitIndex = uStack_b0;
    local_a8 = this;
    local_a0.Array = local_c8.Pointer;
    if (iStack_b4 < iVar2) {
      while( true ) {
        iVar2 = local_a0.CurrentBitIndex;
        pTVar9 = local_a8;
        if ((int)uVar17 == 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x20,8,1,(ForAnyElementType *)&local_70,&local_70.Data.ArrayNum,
                              &local_70.Data.ArrayMax);
          if (local_70.AllocationFlags.NumBits == 0) {
            iVar13 = -1;
          }
          else {
            iVar13 = (int)((local_70.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU) +
                          local_70.AllocationFlags.NumBits + -1) >> 5;
          }
          uVar19 = local_70.AllocationFlags.NumBits >> 0x1f & 0x1f;
          iVar11 = local_70.AllocationFlags.NumBits + uVar19;
          iVar22 = iVar11 >> 5;
          if (iVar22 == iVar13) {
            local_70.AllocationFlags.NumBits = local_70.AllocationFlags.NumBits + 1;
          }
          else {
            if (local_70.AllocationFlags.MaxBits < local_70.AllocationFlags.NumBits + 1) {
              uVar12 = local_70.AllocationFlags.MaxBits + 0x1fU >> 5;
              uVar20 = local_70.AllocationFlags.NumBits + 0x20U >> 5;
              if (uVar20 < 5) {
                iVar13 = 4;
                iVar15 = local_70.AllocationFlags.NumBits;
              }
              else {
                uVar16 = (ulonglong)uVar20;
                if (uVar12 < 5) {
                  uVar12 = 0;
                }
                if (uVar12 == 0) {
                  uVar17 = 4;
                  if (4 < uVar16) {
                    uVar17 = uVar16;
                  }
                }
                else {
                  uVar17 = ((ulonglong)uVar20 * 3 >> 3) + 0x10 + uVar16;
                }
                uVar14 = FMemory::QuantizeSize(uVar17 * 4,0);
                iVar13 = (int)(uVar14 >> 2);
                if (iVar13 < (int)uVar20) {
                  iVar13 = 0x7fffffff;
                }
                iVar15 = local_70.AllocationFlags.NumBits;
              }
              local_70.AllocationFlags.MaxBits = iVar13 << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70.AllocationFlags,iVar15);
            }
            iVar13 = local_70.AllocationFlags.NumBits + 1;
            local_70.AllocationFlags.NumBits = iVar13;
            uVar20 = iVar13 >> 0x1f & 0x1f;
            uVar12 = iVar13 + uVar20;
            iVar13 = (uVar12 & 0x1f) - uVar20;
            if (iVar13 != 0) {
              FVar18 = (ForElementType<unsigned_int>)&local_70.AllocationFlags;
              if (local_70.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar18 = local_70.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              puVar21 = (uint *)((longlong)FVar18 + (longlong)((int)uVar12 >> 5) * 4);
              *puVar21 = *puVar21 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
            }
          }
          FVar18 = (ForElementType<unsigned_int>)&local_70.AllocationFlags;
          if (local_70.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_70.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          puVar21 = (uint *)((longlong)FVar18 + (longlong)iVar22 * 4);
          *puVar21 = *puVar21 & ~(1 << (((byte)iVar11 & 0x1f) - (char)uVar19 & 0x1f));
        }
        else {
          iVar10 = local_70.FirstFreeIndex;
          lVar23 = (longlong)local_70.FirstFreeIndex;
          local_70.NumFreeIndices = (int)uVar17 + -1;
          local_70.FirstFreeIndex =
               *(int *)(local_70.Data.AllocatorInstance.Data + lVar23 * 0x20 + 4);
          if (local_70.NumFreeIndices != 0) {
            *(undefined4 *)
             (local_70.Data.AllocatorInstance.Data +
             (longlong)*(int *)(local_70.Data.AllocatorInstance.Data + lVar23 * 0x20 + 4) * 0x20) =
                 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_70,&local_c8,iVar10);
        if (local_c8.Pointer != (undefined8 *)0x0) {
          lVar23 = *(longlong *)pTVar9;
          puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + lVar23);
          uVar3 = puVar1[1];
          *(undefined8 *)local_c8.Pointer = *puVar1;
          *(undefined8 *)((longlong)local_c8.Pointer + 8) = uVar3;
          puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + 0x10 + lVar23);
          uVar3 = puVar1[1];
          *(undefined8 *)((longlong)local_c8.Pointer + 0x10) = *puVar1;
          *(undefined8 *)((longlong)local_c8.Pointer + 0x18) = uVar3;
        }
        local_a0.UnvisitedBitMask = local_a0.UnvisitedBitMask & ~local_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a0);
        this = local_78;
        if ((local_a0.Array)->NumBits <= local_a0.CurrentBitIndex) break;
        uVar17 = (ulonglong)local_70._48_8_ >> 0x20;
      }
    }
    pFVar4 = *(FScriptContainerElement **)this;
    uVar5 = *(undefined8 *)&this->field_0x8;
    uVar6._0_1_ = this->field_0x10;
    uVar6._1_1_ = this->field_0x11;
    uVar6._2_1_ = this->field_0x12;
    uVar6._3_1_ = this->field_0x13;
    uVar6._4_1_ = this->field_0x14;
    uVar6._5_1_ = this->field_0x15;
    uVar6._6_1_ = this->field_0x16;
    uVar6._7_1_ = this->field_0x17;
    uVar7._0_1_ = this->field_0x18;
    uVar7._1_1_ = this->field_0x19;
    uVar7._2_1_ = this->field_0x1a;
    uVar7._3_1_ = this->field_0x1b;
    uVar7._4_1_ = this->field_0x1c;
    uVar7._5_1_ = this->field_0x1d;
    uVar7._6_1_ = this->field_0x1e;
    uVar7._7_1_ = this->field_0x1f;
    FVar18 = *(ForElementType<unsigned_int> *)&this->field_0x20;
    uVar8._0_4_ = *(int *)&this->field_0x28;
    uVar8._4_4_ = *(int *)&this->field_0x2c;
    uVar3._0_4_ = *(int *)&this->field_0x30;
    uVar3._4_4_ = *(int *)&this->field_0x34;
    *(FScriptContainerElement **)this = local_70.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x8 = local_70.Data.ArrayNum;
    *(int *)&this->field_0xc = local_70.Data.ArrayMax;
    this->field_0x10 = local_70.AllocationFlags.AllocatorInstance.InlineData[0];
    this->field_0x11 = local_70.AllocationFlags.AllocatorInstance.InlineData[1];
    this->field_0x12 = local_70.AllocationFlags.AllocatorInstance.InlineData[2];
    this->field_0x13 = local_70.AllocationFlags.AllocatorInstance.InlineData[3];
    this->field_0x14 = local_70.AllocationFlags.AllocatorInstance.InlineData[4];
    this->field_0x15 = local_70.AllocationFlags.AllocatorInstance.InlineData[5];
    this->field_0x16 = local_70.AllocationFlags.AllocatorInstance.InlineData[6];
    this->field_0x17 = local_70.AllocationFlags.AllocatorInstance.InlineData[7];
    this->field_0x18 = local_70.AllocationFlags.AllocatorInstance.InlineData[8];
    this->field_0x19 = local_70.AllocationFlags.AllocatorInstance.InlineData[9];
    this->field_0x1a = local_70.AllocationFlags.AllocatorInstance.InlineData[10];
    this->field_0x1b = local_70.AllocationFlags.AllocatorInstance.InlineData[0xb];
    this->field_0x1c = local_70.AllocationFlags.AllocatorInstance.InlineData[0xc];
    this->field_0x1d = local_70.AllocationFlags.AllocatorInstance.InlineData[0xd];
    this->field_0x1e = local_70.AllocationFlags.AllocatorInstance.InlineData[0xe];
    this->field_0x1f = local_70.AllocationFlags.AllocatorInstance.InlineData[0xf];
    local_70.Data.ArrayMax = (int)((ulonglong)uVar5 >> 0x20);
    bVar25 = local_70.Data.ArrayMax != 0;
    *(ForElementType<unsigned_int> *)&this->field_0x20 =
         local_70.AllocationFlags.AllocatorInstance.SecondaryData;
    *(int *)&this->field_0x28 = local_70.AllocationFlags.NumBits;
    *(int *)&this->field_0x2c = local_70.AllocationFlags.MaxBits;
    local_70.Data._8_8_ = (ulonglong)(uint)local_70.Data.ArrayMax << 0x20;
    *(int *)&this->field_0x30 = local_70.FirstFreeIndex;
    *(int *)&this->field_0x34 = local_70.NumFreeIndices;
    local_70.Data.AllocatorInstance.Data = pFVar4;
    local_70.AllocationFlags.AllocatorInstance.InlineData._0_8_ = uVar6;
    local_70.AllocationFlags.AllocatorInstance.InlineData._8_8_ = uVar7;
    local_70.AllocationFlags.AllocatorInstance.SecondaryData = FVar18;
    local_70.AllocationFlags._24_8_ = uVar8;
    if (bVar25) {
      local_70._48_8_ = uVar3;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&local_70,0,&local_70.Data.ArrayMax);
    }
    iVar2 = local_70.AllocationFlags.MaxBits;
    local_70.FirstFreeIndex = -1;
    local_70.NumFreeIndices = 0;
    local_70.AllocationFlags._24_8_ = (ulonglong)(uint)local_70.AllocationFlags.MaxBits << 0x20;
    if (0x80 < (uint)iVar2) {
      local_70.AllocationFlags.NumBits = 0;
      local_70.AllocationFlags.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70.AllocationFlags,0);
    }
    if (local_70.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocationFlags.AllocatorInstance.SecondaryData);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    bVar25 = true;
  }
  return bVar25;
}

// DestroyElements @ 1444448b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// DestroyElements @ 1444449a0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong lVar12;
  
  uVar8 = (ulonglong)param_1;
  if ((longlong)uVar8 < (longlong)(param_1 + param_2)) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    plVar10 = (longlong *)(uVar8 * 0x70 + 0x58 + *(longlong *)this);
    lVar12 = (longlong)(param_1 + param_2) - uVar8;
    do {
      iVar7 = (int)uVar8;
      if ((-1 < iVar7) && (iVar7 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar7) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar11 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&this->field_0x20;
        }
        iVar5 = iVar7;
        if (iVar7 < 0) {
          iVar5 = iVar7 + 0x1f;
        }
        if ((*(uint *)(puVar11 + (longlong)(iVar5 >> 5) * 4) & uVar9) != 0) {
          if (plVar10[-5] != 0) {
            plVar6 = plVar10 + -3;
            if ((longlong *)*plVar10 != (longlong *)0x0) {
              plVar6 = (longlong *)*plVar10;
            }
            (**(code **)(*plVar6 + 0x10))();
          }
          plVar6 = (longlong *)plVar10[-6];
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      plVar10 = plVar10 + 0xe;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

// DestroyElements @ 144444ac0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
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
    plVar12 = (longlong *)(uVar8 * 0x20 + 0x10 + *(longlong *)this);
    lVar9 = (longlong)(param_1 + param_2) - uVar8;
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
           (puVar2 = (undefined8 *)*plVar12, puVar2 != (undefined8 *)0x0)) {
          LOCK();
          piVar1 = (int *)(puVar2 + 6);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

// DestroyElements @ 144444bc0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    puVar10 = (undefined8 *)(*(longlong *)this + (uVar6 * 5 + 3) * 8);
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
      puVar10 = puVar10 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 144444ca0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FFactoryParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FFactoryParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    puVar10 = (undefined8 *)(uVar6 * 0x68 + 0x30 + *(longlong *)this);
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
                    ((TReferenceControllerBase<1> *)puVar10[5]);
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
          if ((void *)puVar10[-2] != (void *)0x0) {
            FMemory::Free((void *)puVar10[-2]);
          }
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

// DestroyElements @ 144444da0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          DestructItems<TSharedPtr<FDataflowNode,1>,int>
                    ((TSharedPtr<FDataflowNode,1> *)*puVar10,*(int *)(puVar10 + 1));
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
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

// DestroyElements @ 144444e90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    plVar11 = (longlong *)(uVar7 * 0x50 + 0x38 + *(longlong *)this);
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
        if (((*(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) & uVar9) != 0) && (plVar11[-5] != 0))
        {
          plVar5 = plVar11 + -3;
          if ((longlong *)*plVar11 != (longlong *)0x0) {
            plVar5 = (longlong *)*plVar11;
          }
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      plVar11 = plVar11 + 10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// Empty @ 144445220

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// Empty @ 1444452c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

