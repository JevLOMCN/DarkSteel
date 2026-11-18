// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// CategoryStat @ 141677620

CategoryStat * __thiscall
FPersistentStorageCategory::CategoryStat::CategoryStat(CategoryStat *this,CategoryStat *param_1)

{
  (this->CategoryName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).Data.AllocatorInstance.Data =
       (param_1->CategoryName).Data.AllocatorInstance.Data;
  (param_1->CategoryName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).Data.ArrayNum = (param_1->CategoryName).Data.ArrayNum;
  (this->CategoryName).Data.ArrayMax = (param_1->CategoryName).Data.ArrayMax;
  (param_1->CategoryName).Data.ArrayNum = 0;
  (param_1->CategoryName).Data.ArrayMax = 0;
  this->UsedSize = param_1->UsedSize;
  this->TotalSize = param_1->TotalSize;
  this->TotalOptionalSize = param_1->TotalOptionalSize;
  TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
              *)&this->FileSizes,
             (TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
              *)&param_1->FileSizes);
  (this->Directories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Directories).AllocatorInstance.Data = (param_1->Directories).AllocatorInstance.Data;
  (param_1->Directories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Directories).ArrayNum = (param_1->Directories).ArrayNum;
  (this->Directories).ArrayMax = (param_1->Directories).ArrayMax;
  (param_1->Directories).ArrayNum = 0;
  (param_1->Directories).ArrayMax = 0;
  return this;
}

// FPersistentStorageCategory @ 14167a5c0

FPersistentStorageCategory * __thiscall
FPersistentStorageCategory::FPersistentStorageCategory
          (FPersistentStorageCategory *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,long64 param_3,long64 param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPersistentStorageCategory *pFVar4;
  
  (this->CategoryName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->CategoryName).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->Directories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Directories).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Directories).ArrayNum = param_2->ArrayNum;
  (this->Directories).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  this->OptionalStorageQuota = param_4;
  this->StorageQuota = param_3;
  this->UsedQuota = (atomic<__int64>)0x0;
  *(undefined8 *)&this->FileSizes = 0;
  *(undefined8 *)&(this->FileSizes).field_0x8 = 0;
  *(undefined8 *)&(this->FileSizes).field_0x20 = 0;
  *(undefined4 *)&(this->FileSizes).field_0x28 = 0;
  *(undefined4 *)&(this->FileSizes).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileSizes).field_0x34 = 0;
  *(undefined4 *)&(this->FileSizes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileSizes).field_0x40 = 0;
  *(undefined4 *)&(this->FileSizes).field_0x48 = 0;
  (this->FileSizesLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&(this->FileLockRegistry).FileLockMap = 0;
  *(undefined8 *)&(this->FileLockRegistry).FileLockMap.field_0x8 = 0;
  *(undefined8 *)&(this->FileLockRegistry).FileLockMap.field_0x20 = 0;
  *(undefined4 *)&(this->FileLockRegistry).FileLockMap.field_0x28 = 0;
  *(undefined4 *)&(this->FileLockRegistry).FileLockMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->FileLockRegistry).FileLockMap.field_0x34 = 0;
  *(undefined4 *)&(this->FileLockRegistry).FileLockMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileLockRegistry).FileLockMap.field_0x40 = 0;
  *(undefined4 *)&(this->FileLockRegistry).FileLockMap.field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->FileLockRegistry).FileLockMapCS,4000);
  if ((this->StorageQuota <= this->OptionalStorageQuota) && (0 < this->StorageQuota)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OptionalStorageQuota < StorageQuota || StorageQuota <= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileManagedStorageWrapper.h"
                       ,0xa0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPersistentStorageCategory *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~CategoryStat @ 14167b6a0

void __thiscall FPersistentStorageCategory::CategoryStat::~CategoryStat(CategoryStat *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->Directories).AllocatorInstance.Data,(this->Directories).ArrayNum);
  pFVar1 = (this->Directories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FileSizes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FileSizes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileSizes);
  pFVar1 = (this->CategoryName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetStat @ 14169ad60

CategoryStat * __thiscall
FPersistentStorageCategory::GetStat
          (FPersistentStorageCategory *this,CategoryStat *__return_storage_ptr__)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&this->FileSizesLock);
  ::FString::FString(&__return_storage_ptr__->CategoryName,&this->CategoryName);
  __return_storage_ptr__->UsedSize = (long64)this->UsedQuota;
  __return_storage_ptr__->TotalSize = this->StorageQuota;
  __return_storage_ptr__->TotalOptionalSize = this->OptionalStorageQuota;
  *(undefined8 *)&(__return_storage_ptr__->FileSizes).field_0x0 = 0;
  *(undefined8 *)&(__return_storage_ptr__->FileSizes).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->FileSizes).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FileSizes).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FileSizes).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->FileSizes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->FileSizes).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->FileSizes).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FileSizes).field_0x48 = 0;
  TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
               *)&__return_storage_ptr__->FileSizes,
              (TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
               *)&this->FileSizes);
  pTVar1 = &__return_storage_ptr__->Directories;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Directories).ArrayMax;
  iVar3 = (this->Directories).ArrayNum;
  pFVar4 = (this->Directories).AllocatorInstance.Data;
  (__return_storage_ptr__->Directories).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->FileSizesLock);
  return __return_storage_ptr__;
}

// Print @ 1416b69c0

FString * __thiscall
FPersistentStorageCategory::CategoryStat::Print(CategoryStat *this,FString *__return_storage_ptr__)

{
  if (this->TotalSize < 0) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"Category %s: %.3f MiB (%lld) / unlimited used");
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Category %s: %.3f MiB (%lld) / %.3f MiB used");
  return __return_storage_ptr__;
}

