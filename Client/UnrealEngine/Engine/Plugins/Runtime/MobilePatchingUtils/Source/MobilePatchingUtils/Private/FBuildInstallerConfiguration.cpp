// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MobilePatchingUtils
// Functions: 1

// FBuildInstallerConfiguration @ 14f03cce0

FBuildInstallerConfiguration * __thiscall
BuildPatchServices::FBuildInstallerConfiguration::FBuildInstallerConfiguration
          (FBuildInstallerConfiguration *this,FBuildInstallerConfiguration *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int iVar4;
  FInstallerAction *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  piVar1 = &(this->InstallerActions).ArrayMax;
  (this->InstallerActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->InstallerActions).ArrayNum;
  pFVar5 = (FInstallerAction *)(param_1->InstallerActions).AllocatorInstance.Data;
  (this->InstallerActions).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    ConstructItems<BuildPatchServices::FInstallerAction,BuildPatchServices::FInstallerAction,int>
              ((this->InstallerActions).AllocatorInstance.Data,pFVar5,iVar4);
  }
  (this->SharedContext).Object = (param_1->SharedContext).Object;
  pTVar6 = (param_1->SharedContext).SharedReferenceCount.ReferenceController;
  (this->SharedContext).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&this->InstallDirectory,&param_1->InstallDirectory);
  ::FString::FString(&this->StagingDirectory,&param_1->StagingDirectory);
  ::FString::FString(&this->BackupDirectory,&param_1->BackupDirectory);
  pTVar2 = &this->ChunkDatabaseFiles;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ChunkDatabaseFiles).ArrayMax;
  iVar4 = (param_1->ChunkDatabaseFiles).ArrayNum;
  pFVar7 = (param_1->ChunkDatabaseFiles).AllocatorInstance.Data;
  (this->ChunkDatabaseFiles).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar7,iVar4);
  }
  pTVar2 = &this->CloudDirectories;
  this->bDeleteChunkDbFilesAfterUse = param_1->bDeleteChunkDbFilesAfterUse;
  this->bCalculateDeleteChunkDbMaxDiskSpaceAndExit =
       param_1->bCalculateDeleteChunkDbMaxDiskSpaceAndExit;
  piVar1 = &(this->CloudDirectories).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->CloudDirectories).ArrayNum;
  pFVar7 = (param_1->CloudDirectories).AllocatorInstance.Data;
  (this->CloudDirectories).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar7,iVar4);
  }
  this->InstallMode = param_1->InstallMode;
  this->VerifyMode = param_1->VerifyMode;
  this->DeltaPolicy = param_1->DeltaPolicy;
  this->bRunRequiredPrereqs = param_1->bRunRequiredPrereqs;
  this->bAllowConcurrentExecution = param_1->bAllowConcurrentExecution;
  bVar3 = param_1->bTrackFileOperations;
  (this->ConstructorSpawnAdditionalIOThreads).bIsSet = false;
  this->bTrackFileOperations = bVar3;
  bVar3 = (param_1->ConstructorSpawnAdditionalIOThreads).bIsSet;
  (this->ConstructorSpawnAdditionalIOThreads).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->ConstructorSpawnAdditionalIOThreads).TypedValue =
         (param_1->ConstructorSpawnAdditionalIOThreads).TypedValue;
  }
  (this->ConstructorIOBatchSizeMB).bIsSet = false;
  bVar3 = (param_1->ConstructorIOBatchSizeMB).bIsSet;
  (this->ConstructorIOBatchSizeMB).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->ConstructorIOBatchSizeMB).TypedValue = (param_1->ConstructorIOBatchSizeMB).TypedValue;
  }
  (this->ConstructorIOBufferSizeMB).bIsSet = false;
  bVar3 = (param_1->ConstructorIOBufferSizeMB).bIsSet;
  (this->ConstructorIOBufferSizeMB).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->ConstructorIOBufferSizeMB).TypedValue = (param_1->ConstructorIOBufferSizeMB).TypedValue;
  }
  (this->ConstructorStallWhenFileSystemThrottled).bIsSet = false;
  bVar3 = (param_1->ConstructorStallWhenFileSystemThrottled).bIsSet;
  (this->ConstructorStallWhenFileSystemThrottled).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->ConstructorStallWhenFileSystemThrottled).TypedValue =
         (param_1->ConstructorStallWhenFileSystemThrottled).TypedValue;
  }
  (this->ConstructorDisableResumeBelowMB).bIsSet = false;
  bVar3 = (param_1->ConstructorDisableResumeBelowMB).bIsSet;
  (this->ConstructorDisableResumeBelowMB).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->ConstructorDisableResumeBelowMB).TypedValue =
         (param_1->ConstructorDisableResumeBelowMB).TypedValue;
  }
  this->bConstructFilesInMemory = param_1->bConstructFilesInMemory;
  this->bInstallToMemory = param_1->bInstallToMemory;
  this->bSkipInitialDiskSizeCheck = param_1->bSkipInitialDiskSizeCheck;
  return this;
}

