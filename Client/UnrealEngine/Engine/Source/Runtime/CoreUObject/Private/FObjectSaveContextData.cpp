// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FObjectSaveContextData @ 1421fed40

FObjectSaveContextData * __thiscall
FObjectSaveContextData::FObjectSaveContextData
          (FObjectSaveContextData *this,FObjectSaveContextData *param_1)

{
  (this->TargetFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetFilename).Data.AllocatorInstance.Data =
       (param_1->TargetFilename).Data.AllocatorInstance.Data;
  (param_1->TargetFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetFilename).Data.ArrayNum = (param_1->TargetFilename).Data.ArrayNum;
  (this->TargetFilename).Data.ArrayMax = (param_1->TargetFilename).Data.ArrayMax;
  (param_1->TargetFilename).Data.ArrayNum = 0;
  (param_1->TargetFilename).Data.ArrayMax = 0;
  this->TargetPlatform = param_1->TargetPlatform;
  this->CookInfo = param_1->CookInfo;
  this->PackageWriter = param_1->PackageWriter;
  this->Object = param_1->Object;
  this->SaveFlags = param_1->SaveFlags;
  this->OriginalPackageFlags = param_1->OriginalPackageFlags;
  this->CookType = param_1->CookType;
  this->CookingDLC = param_1->CookingDLC;
  this->ObjectSaveContextPhase = param_1->ObjectSaveContextPhase;
  this->bProceduralSave = param_1->bProceduralSave;
  this->bUpdatingLoadedPath = param_1->bUpdatingLoadedPath;
  this->bOuterConcurrentSave = param_1->bOuterConcurrentSave;
  this->bSaveSucceeded = param_1->bSaveSucceeded;
  this->bDeterminismDebug = param_1->bDeterminismDebug;
  *(undefined8 *)&(this->SaveOverrides).field_0x0 = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->SaveOverrides).field_0x34 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SaveOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x48 = 0;
  TSet<TTuple<UObject_*,FObjectSaveOverride>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<UObject_*,FObjectSaveOverride>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<UObject_*,FObjectSaveOverride>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>,FDefaultSetAllocator>
              *)&this->SaveOverrides,
             (TSet<TTuple<UObject_*,FObjectSaveOverride>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>,FDefaultSetAllocator>
              *)&param_1->SaveOverrides);
  this->bCleanupRequired = param_1->bCleanupRequired;
  this->NumRefPasses = param_1->NumRefPasses;
  this->bBaseClassCalled = param_1->bBaseClassCalled;
  this->bRequestPostSaveSerialization = param_1->bRequestPostSaveSerialization;
  return this;
}

// FObjectSaveContextData @ 1421fee50

FObjectSaveContextData * __thiscall
FObjectSaveContextData::FObjectSaveContextData
          (FObjectSaveContextData *this,FObjectSaveContextData *param_1)

{
  ::FString::FString(&this->TargetFilename,&param_1->TargetFilename);
  this->TargetPlatform = param_1->TargetPlatform;
  this->CookInfo = param_1->CookInfo;
  this->PackageWriter = param_1->PackageWriter;
  this->Object = param_1->Object;
  this->SaveFlags = param_1->SaveFlags;
  this->OriginalPackageFlags = param_1->OriginalPackageFlags;
  this->CookType = param_1->CookType;
  this->CookingDLC = param_1->CookingDLC;
  this->ObjectSaveContextPhase = param_1->ObjectSaveContextPhase;
  this->bProceduralSave = param_1->bProceduralSave;
  this->bUpdatingLoadedPath = param_1->bUpdatingLoadedPath;
  this->bOuterConcurrentSave = param_1->bOuterConcurrentSave;
  this->bSaveSucceeded = param_1->bSaveSucceeded;
  this->bDeterminismDebug = param_1->bDeterminismDebug;
  *(undefined8 *)&(this->SaveOverrides).field_0x0 = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->SaveOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SaveOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x48 = 0;
  TSet<TTuple<UObject_*,FObjectSaveOverride>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<UObject_*,FObjectSaveOverride>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>,FDefaultSetAllocator>
               *)&this->SaveOverrides,
              (TSet<TTuple<UObject_*,FObjectSaveOverride>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>,FDefaultSetAllocator>
               *)&param_1->SaveOverrides);
  this->bCleanupRequired = param_1->bCleanupRequired;
  this->NumRefPasses = param_1->NumRefPasses;
  this->bBaseClassCalled = param_1->bBaseClassCalled;
  this->bRequestPostSaveSerialization = param_1->bRequestPostSaveSerialization;
  return this;
}

// FObjectSaveContextData @ 1421fef50

FObjectSaveContextData * __thiscall
FObjectSaveContextData::FObjectSaveContextData
          (FObjectSaveContextData *this,UPackage *param_1,ITargetPlatform *param_2,
          FPackagePath *param_3,uint param_4)

{
  FScriptContainerElement *pFVar1;
  FObjectSaveContextData *pFVar2;
  atomic<unsigned_int> aVar3;
  FString local_18;
  
  this->ObjectSaveContextPhase = Invalid;
  this->bProceduralSave = false;
  this->bUpdatingLoadedPath = false;
  this->bOuterConcurrentSave = true;
  (this->TargetFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetFilename).Data.ArrayNum = 0;
  (this->TargetFilename).Data.ArrayMax = 0;
  this->TargetPlatform = (ITargetPlatform *)0x0;
  this->SaveFlags = 0;
  this->OriginalPackageFlags = 0;
  *(undefined8 *)&this->SaveOverrides = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x20 = 0;
  this->CookInfo = (ICookInfo *)0x0;
  this->PackageWriter = (IPackageWriter *)0x0;
  this->Object = (UObject *)0x0;
  this->CookType = Unknown;
  this->CookingDLC = Unknown;
  this->bSaveSucceeded = true;
  this->bDeterminismDebug = false;
  aVar3 = (atomic<unsigned_int>)0x0;
  *(undefined4 *)&(this->SaveOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->SaveOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SaveOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x48 = 0;
  this->bCleanupRequired = false;
  this->NumRefPasses = 0;
  this->bBaseClassCalled = false;
  this->bRequestPostSaveSerialization = false;
  pFVar2 = (FObjectSaveContextData *)FPackagePath::GetLocalFullPath(param_3,&local_18);
  if (this != pFVar2) {
    pFVar1 = (this->TargetFilename).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->TargetFilename).Data.AllocatorInstance.Data =
         (pFVar2->TargetFilename).Data.AllocatorInstance.Data;
    (pFVar2->TargetFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TargetFilename).Data.ArrayNum = (pFVar2->TargetFilename).Data.ArrayNum;
    (this->TargetFilename).Data.ArrayMax = (pFVar2->TargetFilename).Data.ArrayMax;
    (pFVar2->TargetFilename).Data.ArrayNum = 0;
    (pFVar2->TargetFilename).Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->SaveFlags = param_4;
  this->TargetPlatform = param_2;
  if (param_1 != (UPackage *)0x0) {
    aVar3 = param_1->PackageFlagsPrivate;
  }
  this->OriginalPackageFlags = (uint)aVar3;
  this->bProceduralSave = false;
  this->bUpdatingLoadedPath = false;
  return this;
}

// FObjectSaveContextData @ 1421ff070

FObjectSaveContextData * __thiscall
FObjectSaveContextData::FObjectSaveContextData
          (FObjectSaveContextData *this,UPackage *param_1,ITargetPlatform *param_2,wchar_t *param_3,
          uint param_4)

{
  FScriptContainerElement *pFVar1;
  EPackageExtension EVar2;
  size_t sVar3;
  FObjectSaveContextData *pFVar4;
  atomic<unsigned_int> aVar5;
  FPackagePath local_28;
  TStringView<wchar_t> local_18;
  
  this->ObjectSaveContextPhase = Invalid;
  this->bProceduralSave = false;
  this->bUpdatingLoadedPath = false;
  this->bOuterConcurrentSave = true;
  (this->TargetFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetFilename).Data.ArrayNum = 0;
  (this->TargetFilename).Data.ArrayMax = 0;
  this->TargetPlatform = (ITargetPlatform *)0x0;
  this->SaveFlags = 0;
  this->OriginalPackageFlags = 0;
  aVar5 = (atomic<unsigned_int>)0x0;
  *(undefined8 *)&this->SaveOverrides = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x20 = 0;
  this->CookInfo = (ICookInfo *)0x0;
  this->PackageWriter = (IPackageWriter *)0x0;
  this->Object = (UObject *)0x0;
  this->CookType = Unknown;
  this->CookingDLC = Unknown;
  this->bSaveSucceeded = true;
  this->bDeterminismDebug = false;
  *(undefined4 *)&(this->SaveOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->SaveOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SaveOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x48 = 0;
  this->bCleanupRequired = false;
  this->NumRefPasses = 0;
  this->bBaseClassCalled = false;
  this->bRequestPostSaveSerialization = false;
  local_18.Size = (int)aVar5;
  local_18.DataPtr = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_3);
    local_18.Size = (int)sVar3;
  }
  FPackagePath::FromLocalPath(&local_28,&local_18);
  EVar2 = FPackagePath::GetHeaderExtension(&local_28);
  if (EVar2 == Unspecified) {
    local_18.DataPtr = (wchar_t *)0x0;
    local_18.Size = 0;
    local_18._12_4_ = 0;
    FPackagePath::SetHeaderExtension(&local_28,EmptyString,&local_18);
  }
  pFVar4 = (FObjectSaveContextData *)FPackagePath::GetLocalFullPath(&local_28,(FString *)&local_18);
  if (this != pFVar4) {
    pFVar1 = (this->TargetFilename).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->TargetFilename).Data.AllocatorInstance.Data =
         (pFVar4->TargetFilename).Data.AllocatorInstance.Data;
    (pFVar4->TargetFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TargetFilename).Data.ArrayNum = (pFVar4->TargetFilename).Data.ArrayNum;
    (this->TargetFilename).Data.ArrayMax = (pFVar4->TargetFilename).Data.ArrayMax;
    (pFVar4->TargetFilename).Data.ArrayNum = 0;
    (pFVar4->TargetFilename).Data.ArrayMax = 0;
  }
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  this->SaveFlags = param_4;
  this->TargetPlatform = param_2;
  if (param_1 != (UPackage *)0x0) {
    aVar5 = param_1->PackageFlagsPrivate;
  }
  this->OriginalPackageFlags = (uint)aVar5;
  this->bProceduralSave = false;
  this->bUpdatingLoadedPath = false;
  return this;
}

// FObjectSaveContextData @ 1421ff200

FObjectSaveContextData * __thiscall
FObjectSaveContextData::FObjectSaveContextData(FObjectSaveContextData *this)

{
  this->ObjectSaveContextPhase = Invalid;
  this->bProceduralSave = false;
  this->bUpdatingLoadedPath = false;
  this->bOuterConcurrentSave = true;
  (this->TargetFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetFilename).Data.ArrayNum = 0;
  (this->TargetFilename).Data.ArrayMax = 0;
  *(undefined8 *)&this->SaveOverrides = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->SaveOverrides).field_0x20 = 0;
  this->TargetPlatform = (ITargetPlatform *)0x0;
  this->CookInfo = (ICookInfo *)0x0;
  this->PackageWriter = (IPackageWriter *)0x0;
  this->Object = (UObject *)0x0;
  this->SaveFlags = 0;
  this->OriginalPackageFlags = 0;
  this->CookType = Unknown;
  this->CookingDLC = Unknown;
  this->bSaveSucceeded = true;
  this->bDeterminismDebug = false;
  *(undefined4 *)&(this->SaveOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->SaveOverrides).field_0x34 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SaveOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->SaveOverrides).field_0x48 = 0;
  this->bCleanupRequired = false;
  this->NumRefPasses = 0;
  this->bBaseClassCalled = false;
  this->bRequestPostSaveSerialization = false;
  return this;
}

// ~FObjectSaveContextData @ 142201030

void __thiscall FObjectSaveContextData::~FObjectSaveContextData(FObjectSaveContextData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->SaveOverrides).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SaveOverrides).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,FObjectSaveOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,FObjectSaveOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,FObjectSaveOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SaveOverrides);
  pFVar2 = (this->TargetFilename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Set @ 14222a8d0

void __thiscall
FObjectSaveContextData::Set
          (FObjectSaveContextData *this,UPackage *param_1,ITargetPlatform *param_2,
          FPackagePath *param_3,uint param_4)

{
  FScriptContainerElement *pFVar1;
  FObjectSaveContextData *pFVar2;
  atomic<unsigned_int> aVar3;
  FString local_18;
  
  pFVar2 = (FObjectSaveContextData *)FPackagePath::GetLocalFullPath(param_3,&local_18);
  aVar3 = (atomic<unsigned_int>)0x0;
  if (this != pFVar2) {
    pFVar1 = (this->TargetFilename).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->TargetFilename).Data.AllocatorInstance.Data =
         (pFVar2->TargetFilename).Data.AllocatorInstance.Data;
    (pFVar2->TargetFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TargetFilename).Data.ArrayNum = (pFVar2->TargetFilename).Data.ArrayNum;
    (this->TargetFilename).Data.ArrayMax = (pFVar2->TargetFilename).Data.ArrayMax;
    (pFVar2->TargetFilename).Data.ArrayNum = 0;
    (pFVar2->TargetFilename).Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->SaveFlags = param_4;
  this->TargetPlatform = param_2;
  if (param_1 != (UPackage *)0x0) {
    aVar3 = param_1->PackageFlagsPrivate;
  }
  this->OriginalPackageFlags = (uint)aVar3;
  this->bProceduralSave = false;
  this->bUpdatingLoadedPath = false;
  return;
}

// Set @ 14222a980

void __thiscall
FObjectSaveContextData::Set
          (FObjectSaveContextData *this,UPackage *param_1,ITargetPlatform *param_2,wchar_t *param_3,
          uint param_4)

{
  FScriptContainerElement *pFVar1;
  EPackageExtension EVar2;
  size_t sVar3;
  FObjectSaveContextData *pFVar4;
  atomic<unsigned_int> aVar5;
  FPackagePath local_28;
  TStringView<wchar_t> local_18;
  
  aVar5 = (atomic<unsigned_int>)0x0;
  local_18.Size = (int)aVar5;
  local_18.DataPtr = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_3);
    local_18.Size = (int)sVar3;
  }
  FPackagePath::FromLocalPath(&local_28,&local_18);
  EVar2 = FPackagePath::GetHeaderExtension(&local_28);
  if (EVar2 == Unspecified) {
    local_18.DataPtr = (wchar_t *)0x0;
    local_18.Size = 0;
    local_18._12_4_ = 0;
    FPackagePath::SetHeaderExtension(&local_28,EmptyString,&local_18);
  }
  pFVar4 = (FObjectSaveContextData *)FPackagePath::GetLocalFullPath(&local_28,(FString *)&local_18);
  if (this != pFVar4) {
    pFVar1 = (this->TargetFilename).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->TargetFilename).Data.AllocatorInstance.Data =
         (pFVar4->TargetFilename).Data.AllocatorInstance.Data;
    (pFVar4->TargetFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TargetFilename).Data.ArrayNum = (pFVar4->TargetFilename).Data.ArrayNum;
    (this->TargetFilename).Data.ArrayMax = (pFVar4->TargetFilename).Data.ArrayMax;
    (pFVar4->TargetFilename).Data.ArrayNum = 0;
    (pFVar4->TargetFilename).Data.ArrayMax = 0;
  }
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  this->SaveFlags = param_4;
  this->TargetPlatform = param_2;
  if (param_1 != (UPackage *)0x0) {
    aVar5 = param_1->PackageFlagsPrivate;
  }
  this->OriginalPackageFlags = (uint)aVar5;
  this->bProceduralSave = false;
  this->bUpdatingLoadedPath = false;
  return;
}

