// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FARFilter @ 142ad3f40

FARFilter * __thiscall FARFilter::FARFilter(FARFilter *this,FARFilter *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FSoftObjectPath *pFVar7;
  
  piVar1 = &(this->PackageNames).ArrayMax;
  (this->PackageNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->PackageNames).ArrayNum;
  pFVar6 = (param_1->PackageNames).AllocatorInstance.Data;
  (this->PackageNames).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->PackageNames).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar2 = &this->PackagePaths;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PackagePaths).ArrayMax;
  iVar5 = (param_1->PackagePaths).ArrayNum;
  pFVar6 = (param_1->PackagePaths).AllocatorInstance.Data;
  (this->PackagePaths).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar3 = &this->SoftObjectPaths;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SoftObjectPaths).ArrayMax;
  iVar5 = (param_1->SoftObjectPaths).ArrayNum;
  pFVar7 = (FSoftObjectPath *)(param_1->SoftObjectPaths).AllocatorInstance.Data;
  (this->SoftObjectPaths).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
              ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
  }
  pTVar2 = &this->ClassNames;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ClassNames).ArrayMax;
  iVar5 = (param_1->ClassNames).ArrayNum;
  pFVar6 = (param_1->ClassNames).AllocatorInstance.Data;
  (this->ClassNames).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar4 = &this->ClassPaths;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ClassPaths).ArrayMax;
  iVar5 = (param_1->ClassPaths).ArrayNum;
  pFVar6 = (param_1->ClassPaths).AllocatorInstance.Data;
  (this->ClassPaths).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
  }
  *(undefined8 *)&(this->TagsAndValues).field_0x0 = 0;
  *(undefined8 *)&(this->TagsAndValues).field_0x8 = 0;
  *(undefined8 *)&(this->TagsAndValues).field_0x20 = 0;
  *(undefined4 *)&(this->TagsAndValues).field_0x28 = 0;
  *(undefined4 *)&(this->TagsAndValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagsAndValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagsAndValues).field_0x34 = 0;
  *(undefined8 *)&(this->TagsAndValues).field_0x40 = 0;
  *(undefined4 *)&(this->TagsAndValues).field_0x48 = 0;
  TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
               *)&this->TagsAndValues,
              (TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
               *)&param_1->TagsAndValues);
  *(undefined8 *)&(this->RecursiveClassesExclusionSet).Elements = 0;
  *(undefined8 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x34 = 0;
  (this->RecursiveClassesExclusionSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RecursiveClassesExclusionSet).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->RecursiveClassesExclusionSet,&param_1->RecursiveClassesExclusionSet);
  *(undefined8 *)&(this->RecursiveClassPathsExclusionSet).Elements = 0;
  *(undefined8 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x34 = 0;
  (this->RecursiveClassPathsExclusionSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RecursiveClassPathsExclusionSet).HashSize = 0;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::operator=
            (&this->RecursiveClassPathsExclusionSet,&param_1->RecursiveClassPathsExclusionSet);
  this->bRecursivePaths = param_1->bRecursivePaths;
  this->bRecursiveClasses = param_1->bRecursiveClasses;
  this->bIncludeOnlyOnDiskAssets = param_1->bIncludeOnlyOnDiskAssets;
  this->WithoutPackageFlags = param_1->WithoutPackageFlags;
  this->WithPackageFlags = param_1->WithPackageFlags;
  return this;
}

// operator= @ 142adb700

FARFilter * __thiscall FARFilter::operator=(FARFilter *this,FARFilter *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  if (this != param_1) {
    pFVar7 = (this->PackageNames).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (this->PackageNames).AllocatorInstance.Data = (param_1->PackageNames).AllocatorInstance.Data;
    (param_1->PackageNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PackageNames).ArrayNum = (param_1->PackageNames).ArrayNum;
    (this->PackageNames).ArrayMax = (param_1->PackageNames).ArrayMax;
    (param_1->PackageNames).ArrayNum = 0;
    (param_1->PackageNames).ArrayMax = 0;
  }
  pTVar1 = &param_1->PackagePaths;
  pTVar2 = &this->PackagePaths;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PackagePaths).ArrayNum = (param_1->PackagePaths).ArrayNum;
    (this->PackagePaths).ArrayMax = (param_1->PackagePaths).ArrayMax;
    (param_1->PackagePaths).ArrayNum = 0;
    (param_1->PackagePaths).ArrayMax = 0;
  }
  pTVar3 = &param_1->SoftObjectPaths;
  pTVar4 = &this->SoftObjectPaths;
  if (pTVar4 != pTVar3) {
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)(pTVar4->AllocatorInstance).Data,(this->SoftObjectPaths).ArrayNum)
    ;
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SoftObjectPaths).ArrayNum = (param_1->SoftObjectPaths).ArrayNum;
    (this->SoftObjectPaths).ArrayMax = (param_1->SoftObjectPaths).ArrayMax;
    (param_1->SoftObjectPaths).ArrayNum = 0;
    (param_1->SoftObjectPaths).ArrayMax = 0;
  }
  pTVar1 = &param_1->ClassNames;
  pTVar2 = &this->ClassNames;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ClassNames).ArrayNum = (param_1->ClassNames).ArrayNum;
    (this->ClassNames).ArrayMax = (param_1->ClassNames).ArrayMax;
    (param_1->ClassNames).ArrayNum = 0;
    (param_1->ClassNames).ArrayMax = 0;
  }
  pTVar5 = &param_1->ClassPaths;
  pTVar6 = &this->ClassPaths;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ClassPaths).ArrayNum = (param_1->ClassPaths).ArrayNum;
    (this->ClassPaths).ArrayMax = (param_1->ClassPaths).ArrayMax;
    (param_1->ClassPaths).ArrayNum = 0;
    (param_1->ClassPaths).ArrayMax = 0;
  }
  if (&this->TagsAndValues != &param_1->TagsAndValues) {
    TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
                *)&this->TagsAndValues,
               (TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
                *)&param_1->TagsAndValues);
  }
  if (&this->RecursiveClassesExclusionSet != &param_1->RecursiveClassesExclusionSet) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
              (&this->RecursiveClassesExclusionSet,&param_1->RecursiveClassesExclusionSet);
  }
  if (&this->RecursiveClassPathsExclusionSet != &param_1->RecursiveClassPathsExclusionSet) {
    TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
    Move<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
              (&this->RecursiveClassPathsExclusionSet,&param_1->RecursiveClassPathsExclusionSet);
  }
  this->bRecursivePaths = param_1->bRecursivePaths;
  this->bRecursiveClasses = param_1->bRecursiveClasses;
  this->bIncludeOnlyOnDiskAssets = param_1->bIncludeOnlyOnDiskAssets;
  this->WithoutPackageFlags = param_1->WithoutPackageFlags;
  this->WithPackageFlags = param_1->WithPackageFlags;
  return this;
}

