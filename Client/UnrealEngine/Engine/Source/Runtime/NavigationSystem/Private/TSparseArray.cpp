// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 39

// ~TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d776d0

void __thiscall
TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d77770

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<UObject_*,FNavigationInvoker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d77810

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UObject_*,FNavigationInvoker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UObject_*,FNavigationInvoker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UObject_*,FNavigationInvoker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
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

// ~TSparseArray<TSparseSetElement<TTuple<UObject_*,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d778b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UObject_*,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UObject_*,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UObject_*,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d77950

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d779f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d77a90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d77b30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,FOctreeElementId2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d77bd0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,FOctreeElementId2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,FOctreeElementId2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,FOctreeElementId2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FNavigationElementHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d77c70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,FNavigationElementHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FNavigationElementHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,FNavigationElementHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<FNavAgentProperties>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d77d10

void __thiscall
TSparseArray<TSparseSetElement<FNavAgentProperties>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FNavAgentProperties>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FNavAgentProperties>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<FNavigationBounds>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d77db0

void __thiscall
TSparseArray<TSparseSetElement<FNavigationBounds>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FNavigationBounds>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FNavigationBounds>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// ~TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146d77e50

void __thiscall
TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// DestroyElements @ 146d90330

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// DestroyElements @ 146d90410

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    puVar10 = (undefined8 *)(*(longlong *)this + (uVar6 * 9 + 5) * 8);
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
      puVar10 = puVar10 + 9;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 146d90500

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// DestroyElements @ 146d905e0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// DestroyElements @ 146d906c0

void __thiscall
TSparseArray<TSparseSetElement<FNavAgentProperties>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<FNavAgentProperties>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// DestroyElements @ 146d907b0

void __thiscall
TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    puVar10 = (undefined8 *)(uVar6 * 0x68 + *(longlong *)this);
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
                    ((TReferenceControllerBase<1> *)puVar10[3]);
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
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

// Empty @ 146d92900

void __thiscall
TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146dd8cf0

void __thiscall
TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146dd8d90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
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

// ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146dd8e30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
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

// ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146dd8ed0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146dd8f70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<FNavTileRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146dd9010

void __thiscall
TSparseArray<TSparseSetElement<FNavTileRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FNavTileRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FNavTileRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146dd90b0

void __thiscall
TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<FNavMeshRenderingHelpers::FUniqueColor>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146dd9150

void __thiscall
TSparseArray<TSparseSetElement<FNavMeshRenderingHelpers::FUniqueColor>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FNavMeshRenderingHelpers::FUniqueColor>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FNavMeshRenderingHelpers::FUniqueColor>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// CompactStable @ 146de4730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::CompactStable(TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *this)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStackY_e8 [32];
  FSparseArrayAllocationInfo local_b8;
  undefined4 local_a8;
  int iStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar8 = false;
  if (*(int *)&this->field_0x34 != 0) {
    uVar13 = 0;
    uVar15 = *(int *)&this->field_0x8 - *(int *)&this->field_0x34;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayMax = 0;
    local_68.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.AllocationFlags._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_68._48_8_ = _UNK_150631d98;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    if (uVar15 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar15,(ForAnyElementType *)&local_68,0,&local_68.Data.ArrayMax);
    }
    iVar2 = local_68.AllocationFlags.MaxBits;
    uVar15 = uVar15 + 0x1f & 0xffffffe0;
    local_68.FirstFreeIndex = -1;
    local_68.NumFreeIndices = 0;
    local_68.AllocationFlags._24_8_ = (ulonglong)(uint)local_68.AllocationFlags.MaxBits << 0x20;
    if ((iVar2 < (int)uVar15) || (uVar18 = uVar13, 0x80 < iVar2)) {
      uVar9 = 0x80;
      if (0x80 < (int)uVar15) {
        uVar9 = uVar15;
      }
      local_68.AllocationFlags._24_8_ = (ulonglong)uVar9 << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68.AllocationFlags,0);
      uVar18 = (ulonglong)local_68._48_8_ >> 0x20;
    }
    iVar2 = *(int *)&this->field_0x28;
    local_b8.Pointer = &this->field_0x10;
    local_b8.Index = 0;
    local_b8._4_4_ = 1;
    iStack_a4 = 0;
    uStack_a0 = 0;
    if (iVar2 != 0) {
      puVar16 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar16 = local_b8.Pointer;
      }
      uVar15 = *puVar16;
      uVar19 = uVar13;
      while (uVar15 == 0) {
        uStack_a0 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_a0;
        iVar10 = (int)uVar13;
        local_b8.Index = iVar10 + 1;
        uVar13 = (ulonglong)(uint)local_b8.Index;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_b8.Index)
        goto LAB_146de48b7;
        uVar15 = puVar16[(longlong)iVar10 + 1];
      }
      local_b8._4_4_ = -uVar15 & uVar15;
      uVar13 = (ulonglong)(uint)local_b8._4_4_ * 2 + 1;
      lVar17 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iStack_a4 = (int)lVar17 + -1 + uStack_a0;
      if (iVar2 < iStack_a4) {
LAB_146de48b7:
        iStack_a4 = iVar2;
      }
    }
    local_a8 = 0xffffffff;
    local_90._padding_ = CONCAT44(local_b8._4_4_,local_b8.Index);
    local_90.UnvisitedBitMask = 0xffffffff;
    local_90.CurrentBitIndex = iStack_a4;
    local_90._28_4_ = uStack_9c;
    local_90.BaseBitIndex = uStack_a0;
    local_98 = this;
    local_90.Array = local_b8.Pointer;
    if (iStack_a4 < iVar2) {
      while( true ) {
        iVar2 = local_90.CurrentBitIndex;
        pTVar7 = local_98;
        if ((int)uVar18 == 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,1,(ForAnyElementType *)&local_68,&local_68.Data.ArrayNum,
                              &local_68.Data.ArrayMax);
          iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             (&local_68.AllocationFlags,1);
          FVar14 = (ForElementType<unsigned_int>)&local_68.AllocationFlags;
          if (local_68.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_68.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          bVar12 = (byte)iVar11 & 0x1f;
          if (iVar11 < 0) {
            iVar11 = iVar11 + 0x1f;
            bVar12 = bVar12 - 0x20;
          }
          puVar16 = (uint *)((longlong)FVar14 + (longlong)(iVar11 >> 5) * 4);
          *puVar16 = *puVar16 & ~(1 << (bVar12 & 0x1f));
        }
        else {
          iVar10 = local_68.FirstFreeIndex;
          lVar17 = (longlong)local_68.FirstFreeIndex;
          local_68.NumFreeIndices = (int)uVar18 + -1;
          local_68.FirstFreeIndex =
               *(int *)(local_68.Data.AllocatorInstance.Data + lVar17 * 0xc + 4);
          if (local_68.NumFreeIndices != 0) {
            *(undefined4 *)
             (local_68.Data.AllocatorInstance.Data +
             (longlong)*(int *)(local_68.Data.AllocatorInstance.Data + lVar17 * 0xc + 4) * 0xc) =
                 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_68,&local_b8,iVar10);
        if (local_b8.Pointer != (undefined8 *)0x0) {
          lVar17 = *(longlong *)pTVar7;
          *(undefined8 *)local_b8.Pointer = *(undefined8 *)(lVar17 + (longlong)iVar2 * 0xc);
          *(undefined4 *)((longlong)local_b8.Pointer + 8) =
               *(undefined4 *)(lVar17 + 8 + (longlong)iVar2 * 0xc);
        }
        local_90.UnvisitedBitMask = local_90.UnvisitedBitMask & ~local_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
        if ((local_90.Array)->NumBits <= local_90.CurrentBitIndex) break;
        uVar18 = (ulonglong)local_68._48_8_ >> 0x20;
      }
    }
    pFVar3 = *(FScriptContainerElement **)this;
    uVar13 = *(ulonglong *)&this->field_0x8;
    uVar4._0_1_ = this->field_0x10;
    uVar4._1_1_ = this->field_0x11;
    uVar4._2_1_ = this->field_0x12;
    uVar4._3_1_ = this->field_0x13;
    uVar4._4_1_ = this->field_0x14;
    uVar4._5_1_ = this->field_0x15;
    uVar4._6_1_ = this->field_0x16;
    uVar4._7_1_ = this->field_0x17;
    uVar5._0_1_ = this->field_0x18;
    uVar5._1_1_ = this->field_0x19;
    uVar5._2_1_ = this->field_0x1a;
    uVar5._3_1_ = this->field_0x1b;
    uVar5._4_1_ = this->field_0x1c;
    uVar5._5_1_ = this->field_0x1d;
    uVar5._6_1_ = this->field_0x1e;
    uVar5._7_1_ = this->field_0x1f;
    FVar14 = *(ForElementType<unsigned_int> *)&this->field_0x20;
    uVar6._0_4_ = *(int *)&this->field_0x28;
    uVar6._4_4_ = *(int *)&this->field_0x2c;
    uVar1._0_4_ = *(int *)&this->field_0x30;
    uVar1._4_4_ = *(int *)&this->field_0x34;
    *(FScriptContainerElement **)this = local_68.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x8 = local_68.Data.ArrayNum;
    *(int *)&this->field_0xc = local_68.Data.ArrayMax;
    this->field_0x10 = local_68.AllocationFlags.AllocatorInstance.InlineData[0];
    this->field_0x11 = local_68.AllocationFlags.AllocatorInstance.InlineData[1];
    this->field_0x12 = local_68.AllocationFlags.AllocatorInstance.InlineData[2];
    this->field_0x13 = local_68.AllocationFlags.AllocatorInstance.InlineData[3];
    this->field_0x14 = local_68.AllocationFlags.AllocatorInstance.InlineData[4];
    this->field_0x15 = local_68.AllocationFlags.AllocatorInstance.InlineData[5];
    this->field_0x16 = local_68.AllocationFlags.AllocatorInstance.InlineData[6];
    this->field_0x17 = local_68.AllocationFlags.AllocatorInstance.InlineData[7];
    this->field_0x18 = local_68.AllocationFlags.AllocatorInstance.InlineData[8];
    this->field_0x19 = local_68.AllocationFlags.AllocatorInstance.InlineData[9];
    this->field_0x1a = local_68.AllocationFlags.AllocatorInstance.InlineData[10];
    this->field_0x1b = local_68.AllocationFlags.AllocatorInstance.InlineData[0xb];
    this->field_0x1c = local_68.AllocationFlags.AllocatorInstance.InlineData[0xc];
    this->field_0x1d = local_68.AllocationFlags.AllocatorInstance.InlineData[0xd];
    this->field_0x1e = local_68.AllocationFlags.AllocatorInstance.InlineData[0xe];
    this->field_0x1f = local_68.AllocationFlags.AllocatorInstance.InlineData[0xf];
    local_68.Data._8_8_ = uVar13 & 0xffffffff00000000;
    *(ForElementType<unsigned_int> *)&this->field_0x20 =
         local_68.AllocationFlags.AllocatorInstance.SecondaryData;
    *(int *)&this->field_0x28 = local_68.AllocationFlags.NumBits;
    *(int *)&this->field_0x2c = local_68.AllocationFlags.MaxBits;
    *(int *)&this->field_0x30 = local_68.FirstFreeIndex;
    *(int *)&this->field_0x34 = local_68.NumFreeIndices;
    local_68.Data.AllocatorInstance.Data = pFVar3;
    local_68.AllocationFlags.AllocatorInstance.InlineData._0_8_ = uVar4;
    local_68.AllocationFlags.AllocatorInstance.InlineData._8_8_ = uVar5;
    local_68.AllocationFlags.AllocatorInstance.SecondaryData = FVar14;
    local_68.AllocationFlags._24_8_ = uVar6;
    if ((int)(uVar13 >> 0x20) != 0) {
      local_68._48_8_ = uVar1;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&local_68,0,&local_68.Data.ArrayMax);
    }
    iVar2 = local_68.AllocationFlags.MaxBits;
    local_68.FirstFreeIndex = -1;
    local_68.NumFreeIndices = 0;
    local_68.AllocationFlags._24_8_ = (ulonglong)(uint)local_68.AllocationFlags.MaxBits << 0x20;
    if (0x80 < (uint)iVar2) {
      local_68.AllocationFlags.NumBits = 0;
      local_68.AllocationFlags.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68.AllocationFlags,0);
    }
    if (local_68.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68.AllocationFlags.AllocatorInstance.SecondaryData);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar8 = true;
  }
  return bVar8;
}

// DestroyElements @ 146de9ae0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FRecastInternalDebugData *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FRecastInternalDebugData *)(uVar6 * 0xd8 + 8 + *(longlong *)this);
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
          FRecastInternalDebugData::~FRecastInternalDebugData(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FRecastInternalDebugData *)&this_00[1].TriangleIndices;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 146de9bc0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
          DestructItems<FNavMeshTileData,int>((FNavMeshTileData *)*puVar10,*(int *)(puVar10 + 1));
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

// DestroyElements @ 146de9cb0

void __thiscall
TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    puVar10 = (undefined8 *)(uVar6 * 0x40 + 0x20 + *(longlong *)this);
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

// Empty @ 146df25f0

void __thiscall
TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Empty @ 146df2690

void __thiscall
TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// ~TSparseArray<TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146e371d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// ~TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146e37270

void __thiscall
TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// DestroyElements @ 146e46c80

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    puVar9 = (undefined8 *)(uVar6 * 0x50 + 0x38 + *(longlong *)this);
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
          DestructItems<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,int>
                    ((FNavigationDirtyAreaPerTileDebugInformation *)*puVar9,*(int *)(puVar9 + 1));
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          if ((void *)puVar9[-2] != (void *)0x0) {
            FMemory::Free((void *)puVar9[-2]);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar9 = puVar9 + 10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146e46d80

void __thiscall
TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Empty @ 146e48120

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

