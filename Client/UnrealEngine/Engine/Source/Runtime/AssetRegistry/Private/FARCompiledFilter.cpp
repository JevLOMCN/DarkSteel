// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// FARCompiledFilter @ 142b4de60

FARCompiledFilter * __thiscall FARCompiledFilter::FARCompiledFilter(FARCompiledFilter *this)

{
  *(undefined8 *)&(this->PackageNames).Elements = 0;
  *(undefined8 *)&(this->PackageNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PackageNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PackageNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PackageNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PackageNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PackageNames).Elements.field_0x30 = 0xffffffff;
  (this->PackageNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PackageNames).HashSize = 0;
  *(undefined8 *)&(this->PackagePaths).Elements = 0;
  *(undefined8 *)&(this->PackagePaths).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PackagePaths).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PackagePaths).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PackagePaths).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PackagePaths).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PackagePaths).Elements.field_0x30 = 0xffffffff;
  (this->PackagePaths).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PackagePaths).HashSize = 0;
  *(undefined8 *)&(this->ObjectPaths).Elements = 0;
  *(undefined8 *)&(this->ObjectPaths).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ObjectPaths).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ObjectPaths).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ObjectPaths).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectPaths).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ObjectPaths).Elements.field_0x30 = 0xffffffff;
  (this->ObjectPaths).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ObjectPaths).HashSize = 0;
  *(undefined8 *)&(this->SoftObjectPaths).Elements = 0;
  *(undefined8 *)&(this->SoftObjectPaths).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SoftObjectPaths).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SoftObjectPaths).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SoftObjectPaths).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SoftObjectPaths).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SoftObjectPaths).Elements.field_0x30 = 0xffffffff;
  (this->SoftObjectPaths).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SoftObjectPaths).HashSize = 0;
  *(undefined8 *)&(this->ClassNames).Elements = 0;
  *(undefined8 *)&(this->ClassNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ClassNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ClassNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ClassNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ClassNames).Elements.field_0x30 = 0xffffffff;
  (this->ClassNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ClassNames).HashSize = 0;
  *(undefined8 *)&(this->ClassPaths).Elements = 0;
  *(undefined8 *)&(this->ClassPaths).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ClassPaths).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ClassPaths).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ClassPaths).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassPaths).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ClassPaths).Elements.field_0x30 = 0xffffffff;
  (this->ClassPaths).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ClassPaths).HashSize = 0;
  *(undefined8 *)&this->TagsAndValues = 0;
  *(undefined8 *)&(this->TagsAndValues).field_0x8 = 0;
  *(undefined8 *)&(this->TagsAndValues).field_0x20 = 0;
  *(undefined4 *)&(this->TagsAndValues).field_0x28 = 0;
  *(undefined4 *)&(this->TagsAndValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagsAndValues).field_0x34 = 0;
  *(undefined4 *)&(this->TagsAndValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TagsAndValues).field_0x40 = 0;
  *(undefined4 *)&(this->TagsAndValues).field_0x48 = 0;
  this->WithoutPackageFlags = 0;
  this->WithPackageFlags = 0;
  this->bIncludeOnlyOnDiskAssets = false;
  return this;
}

// ~FARCompiledFilter @ 142b7d260

void __thiscall FARCompiledFilter::~FARCompiledFilter(FARCompiledFilter *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined4 *)&(this->TagsAndValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TagsAndValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TagsAndValues);
  (this->ClassPaths).HashSize = 0;
  FVar2 = (this->ClassPaths).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ClassPaths).Elements);
  (this->ClassNames).HashSize = 0;
  FVar2 = (this->ClassNames).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ClassNames).Elements);
  (this->SoftObjectPaths).HashSize = 0;
  FVar2 = (this->SoftObjectPaths).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SoftObjectPaths).Elements);
  (this->ObjectPaths).HashSize = 0;
  FVar2 = (this->ObjectPaths).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ObjectPaths).Elements);
  (this->PackagePaths).HashSize = 0;
  FVar2 = (this->PackagePaths).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PackagePaths).Elements);
  (this->PackageNames).HashSize = 0;
  FVar2 = (this->PackageNames).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Clear @ 142b881f0

void __thiscall FARCompiledFilter::Clear(FARCompiledFilter *this)

{
  undefined1 *puVar1;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *this_00;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *this_01;
  TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
  *this_02;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar4 = 1 < (this->PackageNames).HashSize;
  if (!bVar4) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(&this->PackageNames);
  }
  puVar1 = &(this->PackageNames).Elements.field_0xc;
  *(undefined4 *)&(this->PackageNames).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PackageNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackageNames).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->PackageNames).Elements.field_0x2c;
  *(undefined4 *)&(this->PackageNames).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->PackageNames).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PackageNames).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->PackageNames).HashSize = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(&this->PackageNames);
  }
  bVar4 = 1 < (this->PackagePaths).HashSize;
  if (!bVar4) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(&this->PackagePaths);
  }
  puVar1 = &(this->PackagePaths).Elements.field_0xc;
  *(undefined4 *)&(this->PackagePaths).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->PackagePaths,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PackagePaths).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackagePaths).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->PackagePaths).Elements.field_0x2c;
  *(undefined4 *)&(this->PackagePaths).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->PackagePaths).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PackagePaths).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->PackagePaths).HashSize = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(&this->PackagePaths);
  }
  this_00 = &this->SoftObjectPaths;
  bVar4 = 1 < (this->SoftObjectPaths).HashSize;
  if (!bVar4) {
    TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::UnhashElements
              (this_00);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,*(int *)&(this->SoftObjectPaths).Elements.field_0x8);
  puVar1 = &(this->SoftObjectPaths).Elements.field_0xc;
  *(undefined4 *)&(this->SoftObjectPaths).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SoftObjectPaths).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoftObjectPaths).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->SoftObjectPaths).Elements.field_0x2c;
  *(undefined4 *)&(this->SoftObjectPaths).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SoftObjectPaths).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SoftObjectPaths).Elements.field_0x10,
               0);
  }
  if (bVar4) {
    (this->SoftObjectPaths).HashSize = 1;
    TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  this_01 = &this->ClassPaths;
  bVar4 = 1 < (this->ClassPaths).HashSize;
  if (!bVar4) {
    TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
    UnhashElements(this_01);
  }
  puVar1 = &(this->ClassPaths).Elements.field_0xc;
  *(undefined4 *)&(this->ClassPaths).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClassPaths).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassPaths).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->ClassPaths).Elements.field_0x2c;
  *(undefined4 *)&(this->ClassPaths).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ClassPaths).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ClassPaths).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->ClassPaths).HashSize = 1;
    TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::Rehash
              (this_01);
  }
  this_02 = &this->TagsAndValues;
  bVar4 = 1 < *(int *)&(this->TagsAndValues).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
                      *)this_02);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,0,*(int *)&(this->TagsAndValues).field_0x8);
  puVar1 = &(this->TagsAndValues).field_0xc;
  *(undefined4 *)&(this->TagsAndValues).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TagsAndValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagsAndValues).field_0x34 = 0;
  iVar2 = *(int *)&(this->TagsAndValues).field_0x2c;
  *(undefined4 *)&(this->TagsAndValues).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TagsAndValues).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TagsAndValues).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->TagsAndValues).field_0x48 = 1;
    TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
              *)this_02);
  }
  this->bIncludeOnlyOnDiskAssets = false;
  this->WithoutPackageFlags = 0;
  this->WithPackageFlags = 0;
  if (((((*(int *)&(this->TagsAndValues).field_0x8 != *(int *)&(this->TagsAndValues).field_0x34 ||
         *(int *)&(this->ClassPaths).Elements.field_0x8 !=
         *(int *)&(this->ClassPaths).Elements.field_0x34) ||
        *(int *)&(this->SoftObjectPaths).Elements.field_0x8 !=
        *(int *)&(this->SoftObjectPaths).Elements.field_0x34) ||
       *(int *)&(this->PackagePaths).Elements.field_0x8 !=
       *(int *)&(this->PackagePaths).Elements.field_0x34) ||
       *(int *)&(this->PackageNames).Elements.field_0x8 !=
       *(int *)&(this->PackageNames).Elements.field_0x34) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4710120136206450435>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\ARFilter.h"
                         ,0xfd,"IsEmpty()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

