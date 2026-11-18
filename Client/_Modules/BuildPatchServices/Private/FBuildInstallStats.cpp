// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// FBuildInstallStats @ 1431b7bc0

FBuildInstallStats * __thiscall
FBuildInstallStats::FBuildInstallStats(FBuildInstallStats *this,FBuildInstallStats *param_1)

{
  int *piVar1;
  TArray<EBuildPatchInstallError,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ITextData *pIVar6;
  undefined1 local_res8 [8];
  
  this->NumFilesInBuild = param_1->NumFilesInBuild;
  this->NumFilesOutdated = param_1->NumFilesOutdated;
  this->NumFilesToRemove = param_1->NumFilesToRemove;
  this->NumChunksRequired = param_1->NumChunksRequired;
  this->ChunksQueuedForDownload = param_1->ChunksQueuedForDownload;
  this->ChunksLocallyAvailable = param_1->ChunksLocallyAvailable;
  this->ChunksInChunkDbs = param_1->ChunksInChunkDbs;
  this->NumChunksDownloaded = param_1->NumChunksDownloaded;
  this->NumChunksRecycled = param_1->NumChunksRecycled;
  this->NumChunksReadFromChunkDbs = param_1->NumChunksReadFromChunkDbs;
  this->NumFailedDownloads = param_1->NumFailedDownloads;
  this->NumBadDownloads = param_1->NumBadDownloads;
  this->NumAbortedDownloads = param_1->NumAbortedDownloads;
  this->NumRecycleFailures = param_1->NumRecycleFailures;
  this->NumDriveStoreChunkLoads = param_1->NumDriveStoreChunkLoads;
  this->NumDriveStoreLoadFailures = param_1->NumDriveStoreLoadFailures;
  this->DriveStorePeakBytes = param_1->DriveStorePeakBytes;
  this->NumDriveStoreLostChunks = param_1->NumDriveStoreLostChunks;
  this->NumChunkDbChunksFailed = param_1->NumChunkDbChunksFailed;
  this->TotalDownloadedData = param_1->TotalDownloadedData;
  this->ActiveRequestCountPeak = param_1->ActiveRequestCountPeak;
  this->AverageDownloadSpeed = param_1->AverageDownloadSpeed;
  this->PeakDownloadSpeed = param_1->PeakDownloadSpeed;
  this->FinalDownloadSpeed = param_1->FinalDownloadSpeed;
  this->TheoreticalDownloadTime = param_1->TheoreticalDownloadTime;
  this->TotalReadData = param_1->TotalReadData;
  this->AverageDiskReadSpeed = param_1->AverageDiskReadSpeed;
  this->PeakDiskReadSpeed = param_1->PeakDiskReadSpeed;
  this->TotalWrittenData = param_1->TotalWrittenData;
  this->AverageDiskWriteSpeed = param_1->AverageDiskWriteSpeed;
  this->PeakDiskWriteSpeed = param_1->PeakDiskWriteSpeed;
  this->NumFilesConstructed = param_1->NumFilesConstructed;
  this->MaxDiskSpaceNeededWhenDeletingChunkDbsIfRequested =
       param_1->MaxDiskSpaceNeededWhenDeletingChunkDbsIfRequested;
  this->InitializeTime = param_1->InitializeTime;
  this->ConstructTime = param_1->ConstructTime;
  this->MoveFromStageTime = param_1->MoveFromStageTime;
  this->FileAttributesTime = param_1->FileAttributesTime;
  this->VerifyTime = param_1->VerifyTime;
  this->CleanUpTime = param_1->CleanUpTime;
  this->PrereqTime = param_1->PrereqTime;
  pTVar2 = &this->RetryFailureTypes;
  this->ProcessPausedTime = param_1->ProcessPausedTime;
  this->ProcessActiveTime = param_1->ProcessActiveTime;
  this->ProcessExecuteTime = param_1->ProcessExecuteTime;
  this->ProcessSuccess = param_1->ProcessSuccess;
  this->NumInstallRetries = param_1->NumInstallRetries;
  this->FailureType = param_1->FailureType;
  piVar1 = &(this->RetryFailureTypes).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->RetryFailureTypes).ArrayNum;
  pFVar5 = (param_1->RetryFailureTypes).AllocatorInstance.Data;
  (this->RetryFailureTypes).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  ::FString::FString(&this->ErrorCode,&param_1->ErrorCode);
  pTVar3 = &this->RetryErrorCodes;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RetryErrorCodes).ArrayMax;
  iVar4 = (param_1->RetryErrorCodes).ArrayNum;
  pFVar5 = (param_1->RetryErrorCodes).AllocatorInstance.Data;
  (this->RetryErrorCodes).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FString,FString,int>((pTVar3->AllocatorInstance).Data,(FString *)pFVar5,iVar4);
  }
  (this->FailureReasonText).TextData.Reference = (ITextData *)0x0;
  pIVar6 = (param_1->FailureReasonText).TextData.Reference;
  (this->FailureReasonText).TextData.Reference = pIVar6;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_res8);
  }
  (this->FailureReasonText).Flags = (param_1->FailureReasonText).Flags;
  this->FinalProgress = param_1->FinalProgress;
  this->OverallRequestSuccessRate = param_1->OverallRequestSuccessRate;
  this->ExcellentDownloadHealthTime = param_1->ExcellentDownloadHealthTime;
  this->GoodDownloadHealthTime = param_1->GoodDownloadHealthTime;
  this->OkDownloadHealthTime = param_1->OkDownloadHealthTime;
  this->PoorDownloadHealthTime = param_1->PoorDownloadHealthTime;
  this->DisconnectedDownloadHealthTime = param_1->DisconnectedDownloadHealthTime;
  this->MemoryStoreSizePeakBytes = param_1->MemoryStoreSizePeakBytes;
  this->MemoryStoreSizeLimitBytes = param_1->MemoryStoreSizeLimitBytes;
  this->ProcessRequiredDiskSpace = param_1->ProcessRequiredDiskSpace;
  this->ProcessAvailableDiskSpace = param_1->ProcessAvailableDiskSpace;
  return this;
}

// ~FBuildInstallStats @ 1431be7e0

void __thiscall FBuildInstallStats::~FBuildInstallStats(FBuildInstallStats *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  pIVar1 = (this->FailureReasonText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  DestructItems<FString,int>
            ((FString *)(this->RetryErrorCodes).AllocatorInstance.Data,
             (this->RetryErrorCodes).ArrayNum);
  pFVar2 = (this->RetryErrorCodes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ErrorCode).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RetryFailureTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

