// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// FFileConstructorConfig @ 1431bca90

FFileConstructorConfig * __thiscall
BuildPatchServices::FFileConstructorConfig::FFileConstructorConfig
          (FFileConstructorConfig *this,FFileConstructorConfig *param_1)

{
  bool bVar1;
  EInstallMode EVar2;
  IBuildManifestSet *pIVar3;
  
  pIVar3 = param_1->ManifestSet;
  (this->InstallDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ManifestSet = pIVar3;
  (this->InstallDirectory).Data.AllocatorInstance.Data =
       (param_1->InstallDirectory).Data.AllocatorInstance.Data;
  (param_1->InstallDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallDirectory).Data.ArrayNum = (param_1->InstallDirectory).Data.ArrayNum;
  (this->InstallDirectory).Data.ArrayMax = (param_1->InstallDirectory).Data.ArrayMax;
  (param_1->InstallDirectory).Data.ArrayNum = 0;
  (param_1->InstallDirectory).Data.ArrayMax = 0;
  (this->StagingDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingDirectory).Data.AllocatorInstance.Data =
       (param_1->StagingDirectory).Data.AllocatorInstance.Data;
  (param_1->StagingDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingDirectory).Data.ArrayNum = (param_1->StagingDirectory).Data.ArrayNum;
  (this->StagingDirectory).Data.ArrayMax = (param_1->StagingDirectory).Data.ArrayMax;
  (param_1->StagingDirectory).Data.ArrayNum = 0;
  (param_1->StagingDirectory).Data.ArrayMax = 0;
  (this->MetaDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetaDirectory).Data.AllocatorInstance.Data =
       (param_1->MetaDirectory).Data.AllocatorInstance.Data;
  (param_1->MetaDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetaDirectory).Data.ArrayNum = (param_1->MetaDirectory).Data.ArrayNum;
  (this->MetaDirectory).Data.ArrayMax = (param_1->MetaDirectory).Data.ArrayMax;
  (param_1->MetaDirectory).Data.ArrayNum = 0;
  (param_1->MetaDirectory).Data.ArrayMax = 0;
  (this->ConstructList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructList).AllocatorInstance.Data = (param_1->ConstructList).AllocatorInstance.Data;
  (param_1->ConstructList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructList).ArrayNum = (param_1->ConstructList).ArrayNum;
  (this->ConstructList).ArrayMax = (param_1->ConstructList).ArrayMax;
  (param_1->ConstructList).ArrayNum = 0;
  (param_1->ConstructList).ArrayMax = 0;
  EVar2 = param_1->InstallMode;
  (this->BackingStoreDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->InstallMode = EVar2;
  (this->BackingStoreDirectory).Data.AllocatorInstance.Data =
       (param_1->BackingStoreDirectory).Data.AllocatorInstance.Data;
  (param_1->BackingStoreDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackingStoreDirectory).Data.ArrayNum = (param_1->BackingStoreDirectory).Data.ArrayNum;
  (this->BackingStoreDirectory).Data.ArrayMax = (param_1->BackingStoreDirectory).Data.ArrayMax;
  (param_1->BackingStoreDirectory).Data.ArrayNum = 0;
  (param_1->BackingStoreDirectory).Data.ArrayMax = 0;
  this->SharedContext = param_1->SharedContext;
  this->bInstallToMemory = param_1->bInstallToMemory;
  this->bConstructInMemory = param_1->bConstructInMemory;
  this->bSkipInitialDiskSizeCheck = param_1->bSkipInitialDiskSizeCheck;
  bVar1 = param_1->bDeleteChunkDBFilesAfterUse;
  (this->SpawnAdditionalIOThreads).bIsSet = false;
  this->bDeleteChunkDBFilesAfterUse = bVar1;
  bVar1 = (param_1->SpawnAdditionalIOThreads).bIsSet;
  (this->SpawnAdditionalIOThreads).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->SpawnAdditionalIOThreads).TypedValue = (param_1->SpawnAdditionalIOThreads).TypedValue;
  }
  (this->IOBatchSizeMB).bIsSet = false;
  bVar1 = (param_1->IOBatchSizeMB).bIsSet;
  (this->IOBatchSizeMB).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->IOBatchSizeMB).TypedValue = (param_1->IOBatchSizeMB).TypedValue;
  }
  (this->IOBufferSizeMB).bIsSet = false;
  bVar1 = (param_1->IOBufferSizeMB).bIsSet;
  (this->IOBufferSizeMB).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->IOBufferSizeMB).TypedValue = (param_1->IOBufferSizeMB).TypedValue;
  }
  (this->StallWhenFileSystemThrottled).bIsSet = false;
  bVar1 = (param_1->StallWhenFileSystemThrottled).bIsSet;
  (this->StallWhenFileSystemThrottled).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->StallWhenFileSystemThrottled).TypedValue =
         (param_1->StallWhenFileSystemThrottled).TypedValue;
  }
  (this->DisableResumeBelowMB).bIsSet = false;
  bVar1 = (param_1->DisableResumeBelowMB).bIsSet;
  (this->DisableResumeBelowMB).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->DisableResumeBelowMB).TypedValue = (param_1->DisableResumeBelowMB).TypedValue;
  }
  return this;
}

// FFileConstructorConfig @ 1431bcc00

FFileConstructorConfig * __thiscall
BuildPatchServices::FFileConstructorConfig::FFileConstructorConfig
          (FFileConstructorConfig *this,FFileConstructorConfig *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  this->ManifestSet = param_1->ManifestSet;
  ::FString::FString(&this->InstallDirectory,&param_1->InstallDirectory);
  ::FString::FString(&this->StagingDirectory,&param_1->StagingDirectory);
  ::FString::FString(&this->MetaDirectory,&param_1->MetaDirectory);
  pTVar1 = &this->ConstructList;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ConstructList).ArrayMax;
  iVar4 = (param_1->ConstructList).ArrayNum;
  pFVar5 = (param_1->ConstructList).AllocatorInstance.Data;
  (this->ConstructList).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar5,iVar4);
  }
  this->InstallMode = param_1->InstallMode;
  ::FString::FString(&this->BackingStoreDirectory,&param_1->BackingStoreDirectory);
  this->SharedContext = param_1->SharedContext;
  this->bInstallToMemory = param_1->bInstallToMemory;
  this->bConstructInMemory = param_1->bConstructInMemory;
  this->bSkipInitialDiskSizeCheck = param_1->bSkipInitialDiskSizeCheck;
  bVar3 = param_1->bDeleteChunkDBFilesAfterUse;
  (this->SpawnAdditionalIOThreads).bIsSet = false;
  this->bDeleteChunkDBFilesAfterUse = bVar3;
  bVar3 = (param_1->SpawnAdditionalIOThreads).bIsSet;
  (this->SpawnAdditionalIOThreads).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->SpawnAdditionalIOThreads).TypedValue = (param_1->SpawnAdditionalIOThreads).TypedValue;
  }
  (this->IOBatchSizeMB).bIsSet = false;
  bVar3 = (param_1->IOBatchSizeMB).bIsSet;
  (this->IOBatchSizeMB).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->IOBatchSizeMB).TypedValue = (param_1->IOBatchSizeMB).TypedValue;
  }
  (this->IOBufferSizeMB).bIsSet = false;
  bVar3 = (param_1->IOBufferSizeMB).bIsSet;
  (this->IOBufferSizeMB).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->IOBufferSizeMB).TypedValue = (param_1->IOBufferSizeMB).TypedValue;
  }
  (this->StallWhenFileSystemThrottled).bIsSet = false;
  bVar3 = (param_1->StallWhenFileSystemThrottled).bIsSet;
  (this->StallWhenFileSystemThrottled).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->StallWhenFileSystemThrottled).TypedValue =
         (param_1->StallWhenFileSystemThrottled).TypedValue;
  }
  (this->DisableResumeBelowMB).bIsSet = false;
  bVar3 = (param_1->DisableResumeBelowMB).bIsSet;
  (this->DisableResumeBelowMB).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->DisableResumeBelowMB).TypedValue = (param_1->DisableResumeBelowMB).TypedValue;
  }
  return this;
}

// ~FFileConstructorConfig @ 1431bf3b0

void __thiscall
BuildPatchServices::FFileConstructorConfig::~FFileConstructorConfig(FFileConstructorConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BackingStoreDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ConstructList).AllocatorInstance.Data,(this->ConstructList).ArrayNum)
  ;
  pFVar1 = (this->ConstructList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MetaDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StagingDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstallDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

