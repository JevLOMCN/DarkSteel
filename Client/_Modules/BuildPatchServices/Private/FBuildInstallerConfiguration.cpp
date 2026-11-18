// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// FBuildInstallerConfiguration @ 1431b7f30

FBuildInstallerConfiguration * __thiscall
BuildPatchServices::FBuildInstallerConfiguration::FBuildInstallerConfiguration
          (FBuildInstallerConfiguration *this,FBuildInstallerConfiguration *param_1)

{
  bool bVar1;
  
  (this->InstallerActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallerActions).AllocatorInstance.Data =
       (param_1->InstallerActions).AllocatorInstance.Data;
  (param_1->InstallerActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallerActions).ArrayNum = (param_1->InstallerActions).ArrayNum;
  (this->InstallerActions).ArrayMax = (param_1->InstallerActions).ArrayMax;
  (param_1->InstallerActions).ArrayNum = 0;
  (param_1->InstallerActions).ArrayMax = 0;
  (this->SharedContext).Object = (param_1->SharedContext).Object;
  (this->SharedContext).SharedReferenceCount.ReferenceController =
       (param_1->SharedContext).SharedReferenceCount.ReferenceController;
  (param_1->SharedContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->SharedContext).Object = (IBuildInstallerSharedContext *)0x0;
  (this->InstallDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
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
  (this->BackupDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackupDirectory).Data.AllocatorInstance.Data =
       (param_1->BackupDirectory).Data.AllocatorInstance.Data;
  (param_1->BackupDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackupDirectory).Data.ArrayNum = (param_1->BackupDirectory).Data.ArrayNum;
  (this->BackupDirectory).Data.ArrayMax = (param_1->BackupDirectory).Data.ArrayMax;
  (param_1->BackupDirectory).Data.ArrayNum = 0;
  (param_1->BackupDirectory).Data.ArrayMax = 0;
  (this->ChunkDatabaseFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkDatabaseFiles).AllocatorInstance.Data =
       (param_1->ChunkDatabaseFiles).AllocatorInstance.Data;
  (param_1->ChunkDatabaseFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkDatabaseFiles).ArrayNum = (param_1->ChunkDatabaseFiles).ArrayNum;
  (this->ChunkDatabaseFiles).ArrayMax = (param_1->ChunkDatabaseFiles).ArrayMax;
  (param_1->ChunkDatabaseFiles).ArrayNum = 0;
  (param_1->ChunkDatabaseFiles).ArrayMax = 0;
  this->bDeleteChunkDbFilesAfterUse = param_1->bDeleteChunkDbFilesAfterUse;
  bVar1 = param_1->bCalculateDeleteChunkDbMaxDiskSpaceAndExit;
  (this->CloudDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bCalculateDeleteChunkDbMaxDiskSpaceAndExit = bVar1;
  (this->CloudDirectories).AllocatorInstance.Data =
       (param_1->CloudDirectories).AllocatorInstance.Data;
  (param_1->CloudDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDirectories).ArrayNum = (param_1->CloudDirectories).ArrayNum;
  (this->CloudDirectories).ArrayMax = (param_1->CloudDirectories).ArrayMax;
  (param_1->CloudDirectories).ArrayNum = 0;
  (param_1->CloudDirectories).ArrayMax = 0;
  this->InstallMode = param_1->InstallMode;
  this->VerifyMode = param_1->VerifyMode;
  this->DeltaPolicy = param_1->DeltaPolicy;
  this->bRunRequiredPrereqs = param_1->bRunRequiredPrereqs;
  this->bAllowConcurrentExecution = param_1->bAllowConcurrentExecution;
  bVar1 = param_1->bTrackFileOperations;
  (this->ConstructorSpawnAdditionalIOThreads).bIsSet = false;
  this->bTrackFileOperations = bVar1;
  bVar1 = (param_1->ConstructorSpawnAdditionalIOThreads).bIsSet;
  (this->ConstructorSpawnAdditionalIOThreads).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->ConstructorSpawnAdditionalIOThreads).TypedValue =
         (param_1->ConstructorSpawnAdditionalIOThreads).TypedValue;
  }
  (this->ConstructorIOBatchSizeMB).bIsSet = false;
  bVar1 = (param_1->ConstructorIOBatchSizeMB).bIsSet;
  (this->ConstructorIOBatchSizeMB).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->ConstructorIOBatchSizeMB).TypedValue = (param_1->ConstructorIOBatchSizeMB).TypedValue;
  }
  (this->ConstructorIOBufferSizeMB).bIsSet = false;
  bVar1 = (param_1->ConstructorIOBufferSizeMB).bIsSet;
  (this->ConstructorIOBufferSizeMB).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->ConstructorIOBufferSizeMB).TypedValue = (param_1->ConstructorIOBufferSizeMB).TypedValue;
  }
  (this->ConstructorStallWhenFileSystemThrottled).bIsSet = false;
  bVar1 = (param_1->ConstructorStallWhenFileSystemThrottled).bIsSet;
  (this->ConstructorStallWhenFileSystemThrottled).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->ConstructorStallWhenFileSystemThrottled).TypedValue =
         (param_1->ConstructorStallWhenFileSystemThrottled).TypedValue;
  }
  (this->ConstructorDisableResumeBelowMB).bIsSet = false;
  bVar1 = (param_1->ConstructorDisableResumeBelowMB).bIsSet;
  (this->ConstructorDisableResumeBelowMB).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->ConstructorDisableResumeBelowMB).TypedValue =
         (param_1->ConstructorDisableResumeBelowMB).TypedValue;
  }
  this->bConstructFilesInMemory = param_1->bConstructFilesInMemory;
  this->bInstallToMemory = param_1->bInstallToMemory;
  this->bSkipInitialDiskSizeCheck = param_1->bSkipInitialDiskSizeCheck;
  return this;
}

// ~FBuildInstallerConfiguration @ 1431be860

void __thiscall
BuildPatchServices::FBuildInstallerConfiguration::~FBuildInstallerConfiguration
          (FBuildInstallerConfiguration *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->CloudDirectories).AllocatorInstance.Data,
             (this->CloudDirectories).ArrayNum);
  pFVar1 = (this->CloudDirectories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ChunkDatabaseFiles).AllocatorInstance.Data,
             (this->ChunkDatabaseFiles).ArrayNum);
  pFVar1 = (this->ChunkDatabaseFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BackupDirectory).Data.AllocatorInstance.Data;
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
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedContext).SharedReferenceCount.ReferenceController);
  DestructItems<BuildPatchServices::FInstallerAction,int>
            ((FInstallerAction *)(this->InstallerActions).AllocatorInstance.Data,
             (this->InstallerActions).ArrayNum);
  pFVar1 = (this->InstallerActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FBuildInstallerConfiguration @ 143220230

FBuildInstallerConfiguration * __thiscall
BuildPatchServices::FBuildInstallerConfiguration::FBuildInstallerConfiguration
          (FBuildInstallerConfiguration *this,
          TArray<BuildPatchServices::FInstallerAction,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (this->InstallerActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallerActions).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InstallerActions).ArrayNum = param_1->ArrayNum;
  (this->InstallerActions).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->SharedContext).Object = (IBuildInstallerSharedContext *)0x0;
  (this->SharedContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->InstallDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallDirectory).Data.ArrayNum = 0;
  (this->InstallDirectory).Data.ArrayMax = 0;
  (this->StagingDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingDirectory).Data.ArrayNum = 0;
  (this->StagingDirectory).Data.ArrayMax = 0;
  (this->BackupDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackupDirectory).Data.ArrayNum = 0;
  (this->BackupDirectory).Data.ArrayMax = 0;
  (this->ChunkDatabaseFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkDatabaseFiles).ArrayNum = 0;
  (this->ChunkDatabaseFiles).ArrayMax = 0;
  this->bDeleteChunkDbFilesAfterUse = false;
  this->bCalculateDeleteChunkDbMaxDiskSpaceAndExit = false;
  (this->CloudDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDirectories).ArrayNum = 0;
  (this->CloudDirectories).ArrayMax = 0;
  this->InstallMode = NonDestructiveInstall;
  this->VerifyMode = ShaVerifyAllFiles;
  this->DeltaPolicy = Skip;
  this->bRunRequiredPrereqs = true;
  this->bAllowConcurrentExecution = false;
  this->bTrackFileOperations = true;
  (this->ConstructorSpawnAdditionalIOThreads).bIsSet = false;
  (this->ConstructorIOBatchSizeMB).bIsSet = false;
  (this->ConstructorIOBufferSizeMB).bIsSet = false;
  (this->ConstructorStallWhenFileSystemThrottled).bIsSet = false;
  (this->ConstructorDisableResumeBelowMB).bIsSet = false;
  this->bConstructFilesInMemory = false;
  this->bInstallToMemory = false;
  this->bSkipInitialDiskSizeCheck = false;
  DestructItems<BuildPatchServices::FInstallerAction,int>
            ((FInstallerAction *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

