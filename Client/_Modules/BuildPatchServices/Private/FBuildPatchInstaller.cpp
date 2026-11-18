// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 60

// FBuildPatchInstaller @ 1431b9b60

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBuildPatchInstaller * __thiscall
BuildPatchServices::FBuildPatchInstaller::FBuildPatchInstaller
          (FBuildPatchInstaller *this,FBuildInstallerConfiguration *param_1,
          TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
          *param_2,FString *param_3,TSharedPtr<IAnalyticsProvider,1> *param_4,
          TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
          *param_5,TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
                   *param_6)

{
  TSharedPtr<IBuildInstallerSharedContext,1> *pTVar1;
  TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_> *pTVar2;
  FBuildPatchProgress *this_00;
  TArray<BuildPatchServices::IControllable_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FBuildPatchAppManifest *pFVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  ForAnyElementType _Src;
  int iVar8;
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
  *this_01;
  FInstallerAction *pFVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  IHttpManager *pIVar15;
  IFileSystem *pIVar16;
  IPlatform *pIVar17;
  IPlatform *pIVar18;
  IInstallerError *pIVar19;
  IInstallerAnalytics *pIVar20;
  FTSTicker *pFVar21;
  IFileOperationTracker *pIVar22;
  ISpeedRecorder *pIVar23;
  IChunkDataSizeProvider *pIVar24;
  IDownloadServiceStatistics *pIVar25;
  IChunkDbChunkSourceStatistics *pIVar26;
  IInstallChunkSourceStatistics *pIVar27;
  ICloudChunkSourceStatistics *pIVar28;
  IFileConstructorStatistics *pIVar29;
  IVerifierStatistics *pIVar30;
  IDownloadService *pIVar31;
  IMessagePump *pIVar32;
  FBuildPatchInstaller *pFVar33;
  FBuildPatchInstallerAction *this_02;
  TSharedRef<IBuildInstallerSharedContext,1> *pTVar34;
  ulonglong uVar35;
  longlong lVar36;
  TReferenceControllerBase<1> *pTVar37;
  int *piVar38;
  FInstallerAction *pFVar39;
  undefined1 local_148;
  undefined1 local_147 [7];
  ForAnyElementType local_140;
  int local_138;
  int iStack_134;
  FString local_130;
  FString local_120;
  FBuildPatchProgress *local_110;
  uint local_108;
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
  *local_100;
  IBuildInstallerSharedContext *local_f8;
  FSharedReferencer<1> local_f0;
  TSharedRef<FBuildPatchAppManifest,1> local_e8;
  FString *local_d8;
  FInstallerAction *local_d0;
  FBuildInstallerConfiguration *local_c8;
  TSharedPtr<IAnalyticsProvider,1> *local_c0;
  TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
  *local_b8;
  TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
  *local_b0;
  undefined8 local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TSharedRef<IBuildInstallerSharedContext,1> local_88;
  code *local_78 [2];
  undefined **local_68;
  FBuildPatchInstaller *local_60;
  undefined8 local_50;
  
  this->_padding_ = (longlong)&_vftable__for__IBuildInstaller__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = 0;
  local_c0 = param_4;
  local_b8 = param_5;
  local_b0 = param_6;
  local_100 = (TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
               *)param_2;
  local_c8 = param_1;
  FGuid::NewGuid(&this->SessionId);
  this->Thread = (IBuildInstallerThread *)0x0;
  TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
            (&this->StartDelegate,param_5);
  TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
            (&this->CompleteDelegate,param_6);
  FBuildInstallerConfiguration::FBuildInstallerConfiguration(&this->Configuration,param_1);
  pTVar2 = &this->InstallerActions;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InstallerActions).ArrayMax = 0;
  (this->InstallerActions).ArrayNum = 0;
  ::operator/(&this->DataStagingDir,&(this->Configuration).StagingDirectory,L"PatchData");
  ::operator/(&this->InstallStagingDir,&(this->Configuration).StagingDirectory,L"Install");
  ::operator/(&this->MetaStagingDir,&(this->Configuration).StagingDirectory,L"Meta");
  ::operator/(&this->PreviousMoveMarker,&(this->Configuration).InstallDirectory,L"$movedMarker");
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ThreadLock,4000);
  pIVar18 = (IPlatform *)0x0;
  this->bSuccess = (FThreadSafeBool)0x0;
  this->bIsRunning = (FThreadSafeBool)0x0;
  this->bIsInited = (FThreadSafeBool)0x0;
  this->bFirstInstallIteration = (FThreadSafeBool)0x1;
  (this->BuildStats).FinalDownloadSpeed = -1.0;
  (this->PreviousTotalDownloadRequired).Counter = 0;
  (this->BuildStats).NumFilesInBuild = 0;
  (this->BuildStats).NumFilesOutdated = 0;
  (this->BuildStats).NumFilesToRemove = 0;
  (this->BuildStats).NumChunksRequired = 0;
  (this->BuildStats).ChunksQueuedForDownload = 0;
  (this->BuildStats).ChunksLocallyAvailable = 0;
  (this->BuildStats).ChunksInChunkDbs = 0;
  (this->BuildStats).NumChunksDownloaded = 0;
  (this->BuildStats).NumChunksRecycled = 0;
  (this->BuildStats).NumChunksReadFromChunkDbs = 0;
  (this->BuildStats).NumFailedDownloads = 0;
  (this->BuildStats).NumBadDownloads = 0;
  (this->BuildStats).NumAbortedDownloads = 0;
  (this->BuildStats).NumRecycleFailures = 0;
  (this->BuildStats).NumDriveStoreChunkLoads = 0;
  (this->BuildStats).NumDriveStoreLoadFailures = 0;
  (this->BuildStats).DriveStorePeakBytes = 0;
  (this->BuildStats).NumDriveStoreLostChunks = 0;
  (this->BuildStats).NumChunkDbChunksFailed = 0;
  (this->BuildStats).TotalDownloadedData = 0;
  (this->BuildStats).ActiveRequestCountPeak = 0;
  (this->BuildStats).AverageDownloadSpeed = 0.0;
  (this->BuildStats).PeakDownloadSpeed = 0.0;
  (this->BuildStats).TheoreticalDownloadTime = 0.0;
  (this->BuildStats).TotalReadData = 0;
  (this->BuildStats).AverageDiskReadSpeed = 0.0;
  (this->BuildStats).PeakDiskReadSpeed = 0.0;
  (this->BuildStats).TotalWrittenData = 0;
  (this->BuildStats).AverageDiskWriteSpeed = 0.0;
  (this->BuildStats).PeakDiskWriteSpeed = 0.0;
  (this->BuildStats).NumFilesConstructed = 0;
  (this->BuildStats).MaxDiskSpaceNeededWhenDeletingChunkDbsIfRequested = 0;
  (this->BuildStats).InitializeTime = 0.0;
  (this->BuildStats).ConstructTime = 0.0;
  (this->BuildStats).MoveFromStageTime = 0.0;
  (this->BuildStats).FileAttributesTime = 0.0;
  (this->BuildStats).VerifyTime = 0.0;
  (this->BuildStats).CleanUpTime = 0.0;
  (this->BuildStats).PrereqTime = 0.0;
  (this->BuildStats).ProcessPausedTime = 0.0;
  (this->BuildStats).ProcessActiveTime = 0.0;
  (this->BuildStats).ProcessExecuteTime = 0.0;
  (this->BuildStats).ProcessSuccess = false;
  (this->BuildStats).NumInstallRetries = 0;
  (this->BuildStats).FailureType = InitializationError;
  (this->BuildStats).RetryFailureTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildStats).RetryFailureTypes.ArrayNum = 0;
  (this->BuildStats).RetryFailureTypes.ArrayMax = 0;
  (this->BuildStats).ErrorCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildStats).ErrorCode.Data.ArrayNum = 0;
  (this->BuildStats).ErrorCode.Data.ArrayMax = 0;
  (this->BuildStats).RetryErrorCodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildStats).RetryErrorCodes.ArrayNum = 0;
  (this->BuildStats).RetryErrorCodes.ArrayMax = 0;
  FText::FText(&(this->BuildStats).FailureReasonText);
  this_00 = &this->BuildProgress;
  (this->BuildStats).FinalProgress = 0.0;
  (this->BuildStats).OverallRequestSuccessRate = 0.0;
  (this->BuildStats).ExcellentDownloadHealthTime = 0.0;
  (this->BuildStats).GoodDownloadHealthTime = 0.0;
  (this->BuildStats).OkDownloadHealthTime = 0.0;
  (this->BuildStats).PoorDownloadHealthTime = 0.0;
  (this->BuildStats).DisconnectedDownloadHealthTime = 0.0;
  (this->BuildStats).MemoryStoreSizePeakBytes = 0;
  (this->BuildStats).MemoryStoreSizeLimitBytes = 0;
  (this->BuildStats).ProcessRequiredDiskSpace = 0;
  (this->BuildStats).ProcessAvailableDiskSpace = 0;
  this_00->_padding_ = (longlong)&___7FBuildPatchProgress_BuildPatchServices__6B_;
  (this->BuildProgress).bShouldAbort = (FThreadSafeBool)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->BuildProgress).ThreadLock,4000);
  (this->BuildProgress).TotalWeight = 0.0;
  (this->BuildProgress).CurrentState = Queued;
  (this->BuildProgress).CurrentProgress = 0.0;
  (this->BuildProgress).bIsDownloading = false;
  LOCK();
  (this->BuildProgress).bShouldAbort = (FThreadSafeBool)0x0;
  UNLOCK();
  (this->BuildProgress).StateProgressValues[0] = 0.0;
  (this->BuildProgress).StateProgressValues[1] = 0.0;
  (this->BuildProgress).StateProgressWeights[0] = 1.0;
  (this->BuildProgress).StateProgressWeights[1] = 1.0;
  (this->BuildProgress).StateProgressValues[2] = 0.0;
  (this->BuildProgress).StateProgressValues[3] = 0.0;
  (this->BuildProgress).StateProgressWeights[2] = 1.0;
  (this->BuildProgress).StateProgressWeights[3] = 1.0;
  (this->BuildProgress).StateProgressValues[4] = 0.0;
  (this->BuildProgress).StateProgressValues[5] = 0.0;
  (this->BuildProgress).StateProgressWeights[4] = 1.0;
  (this->BuildProgress).StateProgressWeights[5] = 1.0;
  (this->BuildProgress).StateProgressValues[6] = 0.0;
  (this->BuildProgress).StateProgressValues[7] = 0.0;
  (this->BuildProgress).StateProgressWeights[6] = 1.0;
  (this->BuildProgress).StateProgressWeights[7] = 1.0;
  (this->BuildProgress).StateProgressValues[8] = 0.0;
  (this->BuildProgress).StateProgressValues[9] = 0.0;
  (this->BuildProgress).StateProgressWeights[8] = 1.0;
  (this->BuildProgress).StateProgressWeights[9] = 1.0;
  (this->BuildProgress).StateProgressValues[10] = 0.0;
  (this->BuildProgress).StateProgressValues[0xb] = 0.0;
  (this->BuildProgress).StateProgressWeights[10] = 1.0;
  (this->BuildProgress).StateProgressWeights[0xb] = 1.0;
  (this->BuildProgress).TotalWeight = 5.0;
  FBuildPatchProgress::UpdateProgressInfo(this_00);
  this->bIsPaused = false;
  this->bShouldAbort = false;
  (this->FilesInstalled).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilesInstalled).ArrayNum = 0;
  (this->FilesInstalled).ArrayMax = 0;
  *(undefined8 *)&(this->TaggedFiles).Elements.field_0x10 = 0;
  *(undefined8 *)&(this->TaggedFiles).Elements.field_0x18 = 0;
  (this->TaggedFiles).Hash.InlineData[0] = '\0';
  (this->TaggedFiles).Hash.InlineData[1] = '\0';
  (this->TaggedFiles).Hash.InlineData[2] = '\0';
  (this->TaggedFiles).Hash.InlineData[3] = '\0';
  (this->TaggedFiles).Hash._padding_ = 0;
  *(undefined8 *)&(this->TaggedFiles).HashSize = 0;
  *(undefined8 *)&(this->TaggedFiles).Elements = 0;
  *(undefined8 *)&(this->TaggedFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TaggedFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TaggedFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TaggedFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TaggedFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaggedFiles).Elements.field_0x34 = 0;
  (this->TaggedFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined8 *)&(this->OutdatedFiles).Elements = 0;
  *(undefined8 *)&(this->OutdatedFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OutdatedFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x34 = 0;
  (this->OutdatedFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OutdatedFiles).HashSize = 0;
  *(undefined8 *)&(this->FilesToConstruct).Elements.field_0x10 = 0;
  *(undefined8 *)&(this->FilesToConstruct).Elements.field_0x18 = 0;
  (this->FilesToConstruct).Hash.InlineData[0] = '\0';
  (this->FilesToConstruct).Hash.InlineData[1] = '\0';
  (this->FilesToConstruct).Hash.InlineData[2] = '\0';
  (this->FilesToConstruct).Hash.InlineData[3] = '\0';
  (this->FilesToConstruct).Hash._padding_ = 0;
  *(undefined8 *)&(this->FilesToConstruct).HashSize = 0;
  *(undefined8 *)&(this->FilesToConstruct).Elements = 0;
  *(undefined8 *)&(this->FilesToConstruct).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FilesToConstruct).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FilesToConstruct).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FilesToConstruct).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FilesToConstruct).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilesToConstruct).Elements.field_0x34 = 0;
  (this->FilesToConstruct).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined8 *)&(this->OldFilesRemovedBySystem).Elements = 0;
  *(undefined8 *)&(this->OldFilesRemovedBySystem).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OldFilesRemovedBySystem).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OldFilesRemovedBySystem).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OldFilesRemovedBySystem).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OldFilesRemovedBySystem).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OldFilesRemovedBySystem).Elements.field_0x34 = 0;
  (this->OldFilesRemovedBySystem).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OldFilesRemovedBySystem).HashSize = 0;
  *(undefined8 *)&this->FilesInstalledToMemory = 0;
  *(undefined8 *)&(this->FilesInstalledToMemory).field_0x8 = 0;
  *(undefined8 *)&(this->FilesInstalledToMemory).field_0x20 = 0;
  *(undefined4 *)&(this->FilesInstalledToMemory).field_0x28 = 0;
  *(undefined4 *)&(this->FilesInstalledToMemory).field_0x2c = 0x80;
  *(undefined4 *)&(this->FilesInstalledToMemory).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilesInstalledToMemory).field_0x34 = 0;
  *(undefined8 *)&(this->FilesInstalledToMemory).field_0x40 = 0;
  *(undefined4 *)&(this->FilesInstalledToMemory).field_0x48 = 0;
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
              *)&this->InstallationInfo,local_100);
  ::FString::FString(&this->LocalMachineConfigFile,param_3);
  pIVar15 = FHttpManagerFactory::Create();
  (this->HttpManager).Ptr = pIVar15;
  pIVar16 = FFileSystemFactory::Create();
  (this->FileSystem).Ptr = pIVar16;
  pIVar17 = ::operator_new(8);
  if (pIVar17 != (IPlatform *)0x0) {
    *pIVar17 = (IPlatform)
               &
               ___7__TPlatform_UFWindowsPlatformProcess__UFWindowsPlatformMisc___BuildPatchServices__6B_
    ;
    pIVar18 = pIVar17;
  }
  (this->Platform).Ptr = pIVar18;
  pIVar19 = FInstallerErrorFactory::Create();
  (this->InstallerError).Ptr = pIVar19;
  (this->Analytics).Object = param_4->Object;
  (this->Analytics).SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  (param_4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_4->Object = (IAnalyticsProvider *)0x0;
  pIVar20 = FInstallerAnalyticsFactory::Create((this->Analytics).Object);
  (this->InstallerAnalytics).Ptr = pIVar20;
  if ((this->Configuration).bTrackFileOperations == false) {
    pIVar22 = FFileOperationTrackerFactory::CreateNull();
  }
  else {
    pFVar21 = FTSTicker::GetCoreTicker();
    pIVar22 = FFileOperationTrackerFactory::Create(pFVar21);
  }
  (this->FileOperationTracker).Ptr = pIVar22;
  pIVar23 = FSpeedRecorderFactory::Create();
  (this->DownloadSpeedRecorder).Ptr = pIVar23;
  pIVar23 = FSpeedRecorderFactory::Create();
  (this->DiskReadSpeedRecorder).Ptr = pIVar23;
  pIVar23 = FSpeedRecorderFactory::Create();
  (this->DiskWriteSpeedRecorder).Ptr = pIVar23;
  pIVar24 = FChunkDataSizeProviderFactory::Create();
  (this->ChunkDataSizeProvider).Ptr = pIVar24;
  pIVar25 = FDownloadServiceStatisticsFactory::Create
                      ((this->DownloadSpeedRecorder).Ptr,(IDataSizeProvider *)pIVar24,
                       (this->InstallerAnalytics).Ptr);
  (this->DownloadServiceStatistics).Ptr = pIVar25;
  pIVar26 = FChunkDbChunkSourceStatisticsFactory::Create
                      ((this->DiskReadSpeedRecorder).Ptr,(this->FileOperationTracker).Ptr);
  (this->ChunkDbChunkSourceStatistics).Ptr = pIVar26;
  pIVar27 = FInstallChunkSourceStatisticsFactory::Create
                      ((this->DiskReadSpeedRecorder).Ptr,(this->InstallerAnalytics).Ptr,
                       (this->FileOperationTracker).Ptr);
  (this->InstallChunkSourceStatistics).Ptr = pIVar27;
  pIVar28 = FCloudChunkSourceStatisticsFactory::Create
                      ((this->InstallerAnalytics).Ptr,this_00,(this->FileOperationTracker).Ptr);
  (this->CloudChunkSourceStatistics).Ptr = pIVar28;
  pIVar29 = FFileConstructorStatisticsFactory::Create
                      ((this->DiskReadSpeedRecorder).Ptr,(this->DiskWriteSpeedRecorder).Ptr,this_00,
                       (this->FileOperationTracker).Ptr);
  (this->FileConstructorStatistics).Ptr = pIVar29;
  pIVar30 = FVerifierStatisticsFactory::Create
                      ((this->DiskReadSpeedRecorder).Ptr,this_00,(this->FileOperationTracker).Ptr);
  (this->VerifierStatistics).Ptr = pIVar30;
  pIVar31 = FDownloadServiceFactory::Create
                      ((this->HttpManager).Ptr,(this->FileSystem).Ptr,
                       (IDownloadServiceStat *)(this->DownloadServiceStatistics).Ptr,
                       (this->InstallerAnalytics).Ptr);
  (this->DownloadService).Ptr = pIVar31;
  pIVar32 = FMessagePumpFactory::Create();
  (this->MessagePump).Ptr = pIVar32;
  pTVar3 = &this->Controllables;
  (this->ManifestSet).Ptr = (IBuildManifestSet *)0x0;
  (this->Verifier).Ptr = (IVerifier *)0x0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Controllables).ArrayNum = 0;
  (this->Controllables).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->InitializeTimer,4000);
  (this->InitializeTimer).StartCycles = 0;
  (this->InitializeTimer).Cycles = 0;
  (this->InitializeTimer).bIsRunning = false;
  (this->InitializeTimer).bIsPaused = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ConstructTimer,4000);
  (this->ConstructTimer).StartCycles = 0;
  (this->ConstructTimer).Cycles = 0;
  (this->ConstructTimer).bIsRunning = false;
  (this->ConstructTimer).bIsPaused = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->MoveFromStageTimer,4000);
  (this->MoveFromStageTimer).StartCycles = 0;
  (this->MoveFromStageTimer).Cycles = 0;
  (this->MoveFromStageTimer).bIsRunning = false;
  (this->MoveFromStageTimer).bIsPaused = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FileAttributesTimer,4000);
  (this->FileAttributesTimer).StartCycles = 0;
  (this->FileAttributesTimer).Cycles = 0;
  (this->FileAttributesTimer).bIsRunning = false;
  (this->FileAttributesTimer).bIsPaused = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->VerifyTimer,4000);
  (this->VerifyTimer).StartCycles = 0;
  (this->VerifyTimer).Cycles = 0;
  (this->VerifyTimer).bIsRunning = false;
  (this->VerifyTimer).bIsPaused = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CleanUpTimer,4000);
  (this->CleanUpTimer).StartCycles = 0;
  (this->CleanUpTimer).Cycles = 0;
  (this->CleanUpTimer).bIsRunning = false;
  (this->CleanUpTimer).bIsPaused = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PrereqTimer,4000);
  (this->PrereqTimer).StartCycles = 0;
  (this->PrereqTimer).Cycles = 0;
  (this->PrereqTimer).bIsRunning = false;
  (this->PrereqTimer).bIsPaused = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ProcessPausedTimer,4000);
  (this->ProcessPausedTimer).StartCycles = 0;
  (this->ProcessPausedTimer).Cycles = 0;
  (this->ProcessPausedTimer).bIsRunning = false;
  (this->ProcessPausedTimer).bIsPaused = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ProcessActiveTimer,4000);
  (this->ProcessActiveTimer).StartCycles = 0;
  (this->ProcessActiveTimer).Cycles = 0;
  (this->ProcessActiveTimer).bIsRunning = false;
  (this->ProcessActiveTimer).bIsPaused = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ProcessExecuteTimer,4000);
  (this->ProcessExecuteTimer).StartCycles = 0;
  (this->ProcessExecuteTimer).Cycles = 0;
  (this->ProcessExecuteTimer).bIsRunning = false;
  (this->ProcessExecuteTimer).bIsPaused = false;
  *(undefined8 *)&this->CachedVerifyErrorCounts = 0;
  *(undefined8 *)&(this->CachedVerifyErrorCounts).field_0x8 = 0;
  *(undefined8 *)&(this->CachedVerifyErrorCounts).field_0x20 = 0;
  *(undefined4 *)&(this->CachedVerifyErrorCounts).field_0x28 = 0;
  *(undefined4 *)&(this->CachedVerifyErrorCounts).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedVerifyErrorCounts).field_0x34 = 0;
  *(undefined4 *)&(this->CachedVerifyErrorCounts).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedVerifyErrorCounts).field_0x40 = 0;
  *(undefined4 *)&(this->CachedVerifyErrorCounts).field_0x48 = 0;
  pIVar19 = (this->InstallerError).Ptr;
  local_50 = 0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::FBuildPatchInstaller'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`BuildPatchServices::FBuildPatchInstaller::FBuildPatchInstaller'::__l2::<lambda_1>,void>
                ::Call;
  local_60 = this;
  (**(code **)((longlong)*pIVar19 + 0x40))(pIVar19,local_78);
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  local_110 = this_00;
  if (((pFVar4 <= (FScriptContainerElement *)&local_110) &&
      ((FScriptContainerElement *)&local_110 < pFVar4 + (longlong)(this->Controllables).ArrayMax * 8
      )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
    pcVar7 = (code *)swi(3);
    pFVar33 = (FBuildPatchInstaller *)(*pcVar7)();
    return pFVar33;
  }
  iVar11 = (this->Controllables).ArrayNum;
  if (iVar11 == (this->Controllables).ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,&(this->Controllables).ArrayMax);
  }
  (this->Controllables).ArrayNum = iVar11 + 1;
  *(FBuildPatchProgress **)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_110;
  local_130.Data.ArrayNum = (this->Configuration).InstallDirectory.Data.ArrayNum;
  lVar36 = (longlong)local_130.Data.ArrayNum;
  pFVar4 = (this->Configuration).InstallDirectory.Data.AllocatorInstance.Data;
  local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_130.Data.ArrayNum == 0) {
    local_130.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_130.Data.ArrayNum,0,(ForAnyElementType *)&local_130,local_130.Data.ArrayNum
               ,&local_130.Data.ArrayMax);
    memcpy(local_130.Data.AllocatorInstance.Data,pFVar4,lVar36 * 2);
  }
  FPaths::NormalizeDirectoryName(&local_130);
  FPaths::CollapseRelativeDirectories(&local_130,false);
  uVar13 = (this->Configuration).InstallerActions.ArrayNum * 2;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  iStack_134 = 0;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&local_140,0,&iStack_134);
  }
  local_108 = (this->Configuration).InstallerActions.ArrayNum;
  uVar35 = (ulonglong)(int)local_108;
  pFVar39 = (FInstallerAction *)(this->Configuration).InstallerActions.AllocatorInstance.Data;
  local_148 = 0;
  local_d0 = pFVar39 + uVar35;
  do {
    pFVar9 = local_d0;
    piVar38 = &(this->InstallerActions).ArrayMax;
    if ((this->Configuration).InstallerActions.ArrayNum != (int)uVar35) {
      local_147[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FInstallerAction,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_147);
    }
    iVar11 = local_138;
    if (pFVar39 == pFVar9) {
      pIVar24 = (this->ChunkDataSizeProvider).Ptr;
      pcVar7 = *(code **)((longlong)*pIVar24 + 0x18);
      local_a8 = (TSharedPtr<FBuildPatchAppManifest,1> *)local_140.Data;
      if ((local_138 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar33 = (FBuildPatchInstaller *)(*pcVar7)();
        return pFVar33;
      }
      iStack_a0 = iVar11;
      local_98 = (undefined4)local_a8;
      uStack_94 = local_a8._4_4_;
      iStack_90 = iVar11;
      uStack_8c = uStack_9c;
      (*pcVar7)(pIVar24,&local_98);
      pTVar1 = &(this->Configuration).SharedContext;
      if ((this->Configuration).SharedContext.Object == (IBuildInstallerSharedContext *)0x0) {
        pTVar34 = FBuildInstallerSharedContextFactory::Create(&local_88,L"BuildPatchInstaller");
        local_f0.ReferenceController = (pTVar34->SharedReferenceCount).ReferenceController;
        local_f8 = pTVar34->Object;
        if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_f0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_f0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar1 != (TSharedPtr<IBuildInstallerSharedContext,1> *)&local_f8) {
          pTVar1->Object = local_f8;
          local_f8 = (IBuildInstallerSharedContext *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->Configuration).SharedContext.SharedReferenceCount,&local_f0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f0.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        iVar11 = (this->Configuration).ChunkDatabaseFiles.ArrayNum;
        if ((pTVar1->Object == (IBuildInstallerSharedContext *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar33 = (FBuildPatchInstaller *)(*pcVar7)();
          return pFVar33;
        }
        uVar14 = (**(code **)((longlong)*pTVar1->Object + 0x20))
                           (pTVar1->Object,iVar11 != 0,local_148);
        if ((pTVar1->Object == (IBuildInstallerSharedContext *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar33 = (FBuildPatchInstaller *)(*pcVar7)();
          return pFVar33;
        }
        (**(code **)((longlong)*pTVar1->Object + 0x18))(pTVar1->Object,uVar14);
      }
      DestructItems<TSharedPtr<FBuildPatchAppManifest,1>,int>
                ((TSharedPtr<FBuildPatchAppManifest,1> *)local_140.Data,local_138);
      if ((TSharedPtr<FBuildPatchAppManifest,1> *)local_140.Data !=
          (TSharedPtr<FBuildPatchAppManifest,1> *)0x0) {
        FMemory::Free(local_140.Data);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      FBuildInstallerConfiguration::~FBuildInstallerConfiguration(local_c8);
      this_01 = local_100;
      local_100->HashSize = 0;
      FVar6 = (local_100->Hash).SecondaryData;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar6);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&this_01->Elements);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((local_c0->SharedReferenceCount).ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b8);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
      return this;
    }
    iVar11 = (this->InstallerActions).ArrayNum;
    if (iVar11 == *piVar38) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x158,8,&pTVar2->AllocatorInstance,piVar38);
    }
    (this->InstallerActions).ArrayNum = iVar11 + 1;
    this_02 = FBuildPatchInstallerAction::FBuildPatchInstallerAction
                        ((FBuildPatchInstallerAction *)
                         ((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x158),pFVar39);
    pFVar5 = (this_02->CurrentManifest).Object;
    if (pFVar5 != (FBuildPatchAppManifest *)0x0) {
      local_e8.SharedReferenceCount.ReferenceController =
           (this_02->CurrentManifest).SharedReferenceCount.ReferenceController;
      local_148 = 1;
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.Object = pFVar5;
      if ((pFVar5 == (FBuildPatchAppManifest *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar33 = (FBuildPatchInstaller *)(*pcVar7)();
        return pFVar33;
      }
      local_d8 = FInstallerAction::GetInstallSubdirectory(&this_02->InstallerAction);
      iVar8 = local_130.Data.ArrayNum;
      _Src.Data = local_130.Data.AllocatorInstance.Data;
      lVar36 = (longlong)local_130.Data.ArrayNum;
      iVar12 = (local_d8->Data).ArrayNum;
      iVar11 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar11 = 0;
      }
      if ((local_130.Data.ArrayNum == 0) && (iVar11 != -1)) {
        iVar12 = iVar11 + 2;
LAB_1431ba6de:
        local_120.Data.ArrayNum = local_130.Data.ArrayNum;
        local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar12 != 0) goto LAB_1431ba6e7;
        local_120.Data.ArrayMax = 0;
      }
      else {
        iVar12 = iVar11 + 1;
        if (local_130.Data.ArrayNum == 0) goto LAB_1431ba6de;
LAB_1431ba6e7:
        local_120.Data.ArrayNum = local_130.Data.ArrayNum;
        local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar13 = local_130.Data.ArrayNum + iVar12;
        if ((int)uVar13 < local_130.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar13,0,(ForAnyElementType *)&local_120,local_130.Data.ArrayNum,
                   &local_120.Data.ArrayMax);
        if (iVar8 != 0) {
          memcpy(local_120.Data.AllocatorInstance.Data,_Src.Data,lVar36 * 2);
        }
      }
      ::FString::PathAppend(&local_120,(wchar_t *)(local_d8->Data).AllocatorInstance.Data,iVar11);
      TMapBase<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
      ::Emplace<FString,TSharedRef<FBuildPatchAppManifest,1>_const_&>
                ((TMapBase<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
                  *)&this->InstallationInfo,&local_120,&local_e8);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
    }
    pTVar37 = (this_02->CurrentManifest).SharedReferenceCount.ReferenceController;
    pFVar5 = (this_02->CurrentManifest).Object;
    if (pTVar37 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar5 != (FBuildPatchAppManifest *)0x0) {
      if (local_138 == iStack_134) {
        local_138 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_140,&iStack_134);
      }
      *(FBuildPatchAppManifest **)&local_140.Data[(longlong)local_138 * 0x10].field_0x0 = pFVar5;
      *(TReferenceControllerBase<1> **)(local_140.Data + (longlong)local_138 * 0x10 + 8) = pTVar37;
      pTVar37 = (TReferenceControllerBase<1> *)0x0;
      local_138 = local_138 + 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37);
    pTVar37 = (this_02->InstallManifest).SharedReferenceCount.ReferenceController;
    pFVar5 = (this_02->InstallManifest).Object;
    if (pTVar37 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar5 != (FBuildPatchAppManifest *)0x0) {
      if (local_138 == iStack_134) {
        local_138 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_140,&iStack_134);
      }
      *(FBuildPatchAppManifest **)&local_140.Data[(longlong)local_138 * 0x10].field_0x0 = pFVar5;
      *(TReferenceControllerBase<1> **)(local_140.Data + (longlong)local_138 * 0x10 + 8) = pTVar37;
      pTVar37 = (TReferenceControllerBase<1> *)0x0;
      local_138 = local_138 + 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37);
    uVar35 = (ulonglong)local_108;
    pFVar39 = pFVar39 + 1;
  } while( true );
}

// ~FBuildPatchInstaller @ 1431beea0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchInstaller::~FBuildPatchInstaller(FBuildPatchInstaller *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  IVerifier *pIVar5;
  IBuildManifestSet *pIVar6;
  IMessagePump *pIVar7;
  IDownloadService *pIVar8;
  IVerifierStatistics *pIVar9;
  IFileConstructorStatistics *pIVar10;
  ICloudChunkSourceStatistics *pIVar11;
  IInstallChunkSourceStatistics *pIVar12;
  IChunkDbChunkSourceStatistics *pIVar13;
  IDownloadServiceStatistics *pIVar14;
  IChunkDataSizeProvider *pIVar15;
  ISpeedRecorder *pIVar16;
  IFileOperationTracker *pIVar17;
  IInstallerAnalytics *pIVar18;
  IInstallerError *pIVar19;
  IPlatform *pIVar20;
  IFileSystem *pIVar21;
  IHttpManager *pIVar22;
  ForElementType<FSetElementId> FVar23;
  longlong *plVar24;
  
  this->_padding_ = (longlong)&_vftable__for__IBuildInstaller__;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  PreExit(this);
  *(undefined4 *)&(this->CachedVerifyErrorCounts).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CachedVerifyErrorCounts).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_BuildPatchServices::EVerifyError,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_BuildPatchServices::EVerifyError,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CachedVerifyErrorCounts);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ProcessExecuteTimer);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ProcessActiveTimer);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ProcessPausedTimer);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PrereqTimer);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CleanUpTimer);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->VerifyTimer);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FileAttributesTimer);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MoveFromStageTimer);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ConstructTimer);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InitializeTimer);
  pFVar4 = (this->Controllables).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pIVar5 = (this->Verifier).Ptr;
  if (pIVar5 != (IVerifier *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  pIVar6 = (this->ManifestSet).Ptr;
  if (pIVar6 != (IBuildManifestSet *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  pIVar7 = (this->MessagePump).Ptr;
  if (pIVar7 != (IMessagePump *)0x0) {
    (**(code **)*pIVar7)(pIVar7,1);
  }
  pIVar8 = (this->DownloadService).Ptr;
  if (pIVar8 != (IDownloadService *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  pIVar9 = (this->VerifierStatistics).Ptr;
  if (pIVar9 != (IVerifierStatistics *)0x0) {
    (**(code **)*pIVar9)(pIVar9,1);
  }
  pIVar10 = (this->FileConstructorStatistics).Ptr;
  if (pIVar10 != (IFileConstructorStatistics *)0x0) {
    (**(code **)*pIVar10)(pIVar10,1);
  }
  pIVar11 = (this->CloudChunkSourceStatistics).Ptr;
  if (pIVar11 != (ICloudChunkSourceStatistics *)0x0) {
    (**(code **)*pIVar11)(pIVar11,1);
  }
  pIVar12 = (this->InstallChunkSourceStatistics).Ptr;
  if (pIVar12 != (IInstallChunkSourceStatistics *)0x0) {
    (**(code **)*pIVar12)(pIVar12,1);
  }
  pIVar13 = (this->ChunkDbChunkSourceStatistics).Ptr;
  if (pIVar13 != (IChunkDbChunkSourceStatistics *)0x0) {
    (**(code **)*pIVar13)(pIVar13,1);
  }
  pIVar14 = (this->DownloadServiceStatistics).Ptr;
  if (pIVar14 != (IDownloadServiceStatistics *)0x0) {
    (**(code **)*pIVar14)(pIVar14,1);
  }
  pIVar15 = (this->ChunkDataSizeProvider).Ptr;
  if (pIVar15 != (IChunkDataSizeProvider *)0x0) {
    (**(code **)*pIVar15)(pIVar15,1);
  }
  pIVar16 = (this->DiskWriteSpeedRecorder).Ptr;
  if (pIVar16 != (ISpeedRecorder *)0x0) {
    (**(code **)*pIVar16)(pIVar16,1);
  }
  pIVar16 = (this->DiskReadSpeedRecorder).Ptr;
  if (pIVar16 != (ISpeedRecorder *)0x0) {
    (**(code **)*pIVar16)(pIVar16,1);
  }
  pIVar16 = (this->DownloadSpeedRecorder).Ptr;
  if (pIVar16 != (ISpeedRecorder *)0x0) {
    (**(code **)*pIVar16)(pIVar16,1);
  }
  pIVar17 = (this->FileOperationTracker).Ptr;
  if (pIVar17 != (IFileOperationTracker *)0x0) {
    (**(code **)*pIVar17)(pIVar17,1);
  }
  pIVar18 = (this->InstallerAnalytics).Ptr;
  if (pIVar18 != (IInstallerAnalytics *)0x0) {
    (**(code **)*pIVar18)(pIVar18,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Analytics).SharedReferenceCount.ReferenceController);
  pIVar19 = (this->InstallerError).Ptr;
  if (pIVar19 != (IInstallerError *)0x0) {
    (**(code **)*pIVar19)(pIVar19,1);
  }
  pIVar20 = (this->Platform).Ptr;
  if (pIVar20 != (IPlatform *)0x0) {
    (**(code **)*pIVar20)(pIVar20,1);
  }
  pIVar21 = (this->FileSystem).Ptr;
  if (pIVar21 != (IFileSystem *)0x0) {
    (**(code **)*pIVar21)(pIVar21,1);
  }
  pIVar22 = (this->HttpManager).Ptr;
  if (pIVar22 != (IHttpManager *)0x0) {
    (**(code **)*pIVar22)(pIVar22,1);
  }
  pFVar4 = (this->LocalMachineConfigFile).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->InstallationInfo).field_0x48 = 0;
  pvVar3 = *(void **)&(this->InstallationInfo).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstallationInfo);
  *(undefined4 *)&(this->FilesInstalledToMemory).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FilesInstalledToMemory).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FilesInstalledToMemory);
  (this->OldFilesRemovedBySystem).HashSize = 0;
  FVar23 = (this->OldFilesRemovedBySystem).Hash.SecondaryData;
  if (FVar23 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar23);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OldFilesRemovedBySystem).Elements);
  (this->FilesToConstruct).HashSize = 0;
  FVar23 = (this->FilesToConstruct).Hash.SecondaryData;
  if (FVar23 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar23);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FilesToConstruct).Elements);
  (this->OutdatedFiles).HashSize = 0;
  FVar23 = (this->OutdatedFiles).Hash.SecondaryData;
  if (FVar23 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar23);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OutdatedFiles).Elements);
  (this->TaggedFiles).HashSize = 0;
  FVar23 = (this->TaggedFiles).Hash.SecondaryData;
  if (FVar23 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar23);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TaggedFiles).Elements);
  DestructItems<FString,int>
            ((FString *)(this->FilesInstalled).AllocatorInstance.Data,
             (this->FilesInstalled).ArrayNum);
  pFVar4 = (this->FilesInstalled).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->BuildProgress).ThreadLock);
  (this->BuildProgress)._padding_ = (longlong)&___7IControllable_BuildPatchServices__6B_;
  FBuildInstallStats::~FBuildInstallStats(&this->BuildStats);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  pFVar4 = (this->PreviousMoveMarker).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->MetaStagingDir).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->InstallStagingDir).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->DataStagingDir).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<BuildPatchServices::FBuildPatchInstallerAction,int>
            ((FBuildPatchInstallerAction *)(this->InstallerActions).AllocatorInstance.Data,
             (this->InstallerActions).ArrayNum);
  pFVar4 = (this->InstallerActions).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FBuildInstallerConfiguration::~FBuildInstallerConfiguration(&this->Configuration);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartDelegate);
  plVar24 = (longlong *)this->_padding_;
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar24 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar24 + 8))(plVar24,1);
    }
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  this->_padding_ = (longlong)&___7IBuildInstaller__6B_;
  return;
}

// operator() @ 1431c0ad0

void __thiscall
`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>::operator()
          (void *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  wchar_t *pwVar2;
  longlong lVar3;
  int iVar4;
  FString local_28;
  
  local_28.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar3 = (longlong)local_28.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  iVar1 = *(int *)(*(longlong *)this + 0x90);
  if (iVar1 == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = *(wchar_t **)(*(longlong *)this + 0x88);
    iVar4 = iVar1 + -1;
  }
  ::FString::RemoveFromStart(&local_28,pwVar2,iVar4,IgnoreCase);
  ::FString::RemoveFromStart(&local_28,L"/",1,IgnoreCase);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             (*(longlong *)this + 0x4d0),(FString *)&stack0x00000008,(bool *)&local_28);
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x20))
            ((longlong *)**(undefined8 **)((longlong)this + 8),param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// BackupFileIfNecessary @ 1431c3570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::BackupFileIfNecessary
          (FBuildPatchInstaller *this,FString *param_1,bool param_2)

{
  int iVar1;
  IBuildManifestSet *pIVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uchar uVar6;
  uint uVar7;
  int iVar8;
  FPlatformFileManager *pFVar9;
  IPlatformFile *pIVar10;
  IFileManager *pIVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  FSHAHash *pFVar20;
  FSHAHash *pFVar21;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  FString local_58;
  FString local_48;
  FSHAHash local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  ::operator/(&local_58,&(this->Configuration).InstallDirectory,param_1);
  ::operator/(&local_48,&(this->Configuration).BackupDirectory,param_1);
  if (1 < (this->Configuration).BackupDirectory.Data.ArrayNum) {
    pFVar9 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar17.Data = local_58.Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar10 + 0x78))(pIVar10,FVar17.Data);
    if (cVar3 != '\0') {
      pFVar9 = FPlatformFileManager::Get();
      pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar17.Data = local_48.Data.AllocatorInstance.Data;
      }
      cVar3 = (**(code **)((longlong)*pIVar10 + 0x78))(pIVar10,FVar17.Data);
      if ((cVar3 == '\0') &&
         (bVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                            (&this->FilesInstalled,param_1), !bVar4)) {
        if (param_2) {
          iVar1 = (param_1->Data).ArrayNum;
          iVar8 = iVar1 + -1;
          if (iVar1 == 0) {
            pwVar16 = L"";
            iVar8 = 0;
          }
          else {
            pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          }
          uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar16);
          iVar8 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                  FindIndexByHash<FString>(&this->OutdatedFiles,uVar7,param_1);
          if (iVar8 == -1) {
            pIVar11 = IFileManager::Get();
            local_68 = 0;
            FVar17.Data = (FScriptContainerElement *)L"";
            if (local_58.Data.ArrayNum != 0) {
              FVar17.Data = local_58.Data.AllocatorInstance.Data;
            }
            local_70 = 1;
            FVar19.Data = (FScriptContainerElement *)L"";
            if (local_48.Data.ArrayNum != 0) {
              FVar19.Data = local_48.Data.AllocatorInstance.Data;
            }
            local_78 = 1;
            uVar5 = (**(code **)((longlong)*pIVar11 + 0x48))(pIVar11,FVar19.Data,FVar17.Data,1);
            goto LAB_1431c381c;
          }
          if (!param_2) goto LAB_1431c36e2;
        }
        else {
LAB_1431c36e2:
          pIVar2 = (this->ManifestSet).Ptr;
          lVar12 = (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2,param_1);
          pIVar2 = (this->ManifestSet).Ptr;
          lVar13 = (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2,param_1);
          pIVar11 = IFileManager::Get();
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_58.Data.ArrayNum != 0) {
            FVar17.Data = local_58.Data.AllocatorInstance.Data;
          }
          lVar14 = (**(code **)((longlong)*pIVar11 + 0x110))(pIVar11,FVar17.Data);
          lVar15 = -1;
          if (lVar12 == 0) {
            lVar18 = -1;
          }
          else {
            lVar18 = *(longlong *)(lVar12 + 0x58);
          }
          if (lVar13 != 0) {
            lVar15 = *(longlong *)(lVar13 + 0x58);
          }
          local_38.Hash[0x10] = '\0';
          local_38.Hash[0x11] = '\0';
          local_38.Hash[0x12] = '\0';
          local_38.Hash[0x13] = '\0';
          pFVar20 = (FSHAHash *)(lVar12 + 0x20);
          local_38.Hash[0] = '\0';
          local_38.Hash[1] = '\0';
          local_38.Hash[2] = '\0';
          local_38.Hash[3] = '\0';
          local_38.Hash[4] = '\0';
          local_38.Hash[5] = '\0';
          local_38.Hash[6] = '\0';
          local_38.Hash[7] = '\0';
          local_38.Hash[8] = '\0';
          local_38.Hash[9] = '\0';
          local_38.Hash[10] = '\0';
          local_38.Hash[0xb] = '\0';
          local_38.Hash[0xc] = '\0';
          local_38.Hash[0xd] = '\0';
          local_38.Hash[0xe] = '\0';
          local_38.Hash[0xf] = '\0';
          if (lVar12 == 0) {
            pFVar20 = &local_38;
          }
          pFVar21 = (FSHAHash *)(lVar13 + 0x20);
          if (lVar13 == 0) {
            pFVar21 = &local_38;
          }
          if (((lVar18 == lVar14) || (lVar15 == lVar14)) &&
             (uVar6 = FBuildPatchUtils::VerifyFile((this->FileSystem).Ptr,&local_58,pFVar20,pFVar21)
             , uVar6 != '\0')) goto LAB_1431c381a;
        }
        if (4 < (byte)LogBuildPatchServices._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        }
        pIVar11 = IFileManager::Get();
        local_68 = 0;
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar17.Data = local_58.Data.AllocatorInstance.Data;
        }
        local_70 = 1;
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar19.Data = local_48.Data.AllocatorInstance.Data;
        }
        local_78 = 1;
        uVar5 = (**(code **)((longlong)*pIVar11 + 0x48))(pIVar11,FVar19.Data,FVar17.Data,1);
        goto LAB_1431c381c;
      }
    }
  }
LAB_1431c381a:
  uVar5 = 1;
LAB_1431c381c:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return (bool)uVar5;
}

// BuildConnectionCountConfig @ 1431c3dc0

/* WARNING: Enum "Type": Some values do not have unique names */

FDownloadConnectionCountConfig * __thiscall
BuildPatchServices::FBuildPatchInstaller::BuildConnectionCountConfig
          (FBuildPatchInstaller *this,FDownloadConnectionCountConfig *__return_storage_ptr__)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FStaticBasicLogRecord *pFVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  bool local_res10 [8];
  uint local_res18 [4];
  
  __return_storage_ptr__->MinLimit = 8;
  __return_storage_ptr__->NegativeHysteresis = 8;
  __return_storage_ptr__->AverageSpeedMinCount = 8;
  __return_storage_ptr__->PositiveHysteresis = 4;
  __return_storage_ptr__->HighBandwidthFactor = 0.85;
  __return_storage_ptr__->LowBandwidthFactor = 0.65;
  __return_storage_ptr__->bDisableConnectionScaling = false;
  __return_storage_ptr__->MaxLimit = 100;
  __return_storage_ptr__->FallbackCount = 0x10;
  __return_storage_ptr__->HealthHysteresis = 8;
  FConfigCacheIni::GetInt
            (GConfig,L"Portal.BuildPatch",L"ChunkDownloads",
             (int *)&__return_storage_ptr__->FallbackCount,&GEngineIni);
  local_res10[0] = false;
  uVar6 = 100;
  if (__return_storage_ptr__->FallbackCount < 100) {
    uVar6 = __return_storage_ptr__->FallbackCount;
  }
  uVar4 = 1;
  if (1 < uVar6) {
    uVar4 = uVar6;
  }
  __return_storage_ptr__->FallbackCount = uVar4;
  bVar2 = FConfigCacheIni::GetBool
                    (GConfig,L"Portal.BuildPatch",L"ChunkDownloadsDisableConnectionScaling",
                     local_res10,&GEngineIni);
  if ((bVar2) && (local_res10[0] != false)) {
    __return_storage_ptr__->bDisableConnectionScaling = true;
  }
  uVar6 = __return_storage_ptr__->MaxLimit;
  local_res18[0] = 0;
  bVar2 = FConfigCacheIni::GetInt
                    (GConfig,L"HTTP",L"HttpMaxConnectionsPerServer",(int *)local_res18,&GEngineIni);
  if (bVar2) {
    if ((local_res18[0] == 0) || (uVar6 = local_res18[0], (byte)LogBuildPatchServices._0_1_ < 3))
    goto LAB_1431c3f27;
    pFVar5 = &::LOG_Static;
  }
  else {
    uVar6 = 0x10;
    if ((byte)LogBuildPatchServices._0_1_ < 3) goto LAB_1431c3f27;
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogBuildPatchServices);
LAB_1431c3f27:
  uVar1 = __return_storage_ptr__->MinLimit;
  FConfigCacheIni::GetInt
            (GConfig,L"Portal.BuildPatch",L"ChunkDownloadsLowerLimit",
             (int *)&__return_storage_ptr__->MinLimit,&GEngineIni);
  uVar4 = uVar6 - 2;
  uVar3 = uVar4;
  if (0x20 < uVar4) {
    uVar3 = 0x20;
  }
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  if (__return_storage_ptr__->MinLimit < uVar3) {
    uVar3 = __return_storage_ptr__->MinLimit;
  }
  if (uVar4 < uVar3) {
    uVar4 = uVar3;
  }
  __return_storage_ptr__->MinLimit = uVar4;
  FConfigCacheIni::GetInt
            (GConfig,L"Portal.BuildPatch",L"ChunkDownloadsUpperLimit",(int *)__return_storage_ptr__,
             &GEngineIni);
  uVar4 = __return_storage_ptr__->MinLimit + 2;
  if (__return_storage_ptr__->MaxLimit < uVar6) {
    uVar6 = __return_storage_ptr__->MaxLimit;
  }
  if (uVar4 < uVar6) {
    uVar4 = uVar6;
  }
  __return_storage_ptr__->MaxLimit = uVar4;
  FConfigCacheIni::GetInt
            (GConfig,L"Portal.BuildPatch",L"ChunkDownloadsSlowdownHysteresis",
             (int *)&__return_storage_ptr__->NegativeHysteresis,&GEngineIni);
  uVar6 = 0x100;
  if (__return_storage_ptr__->NegativeHysteresis < 0x100) {
    uVar6 = __return_storage_ptr__->NegativeHysteresis;
  }
  uVar4 = 1;
  if (1 < uVar6) {
    uVar4 = uVar6;
  }
  __return_storage_ptr__->NegativeHysteresis = uVar4;
  FConfigCacheIni::GetInt
            (GConfig,L"Portal.BuildPatch",L"ChunkDownloadsSpeedupHysteresis",
             (int *)&__return_storage_ptr__->PositiveHysteresis,&GEngineIni);
  uVar6 = 0x100;
  if (__return_storage_ptr__->PositiveHysteresis < 0x100) {
    uVar6 = __return_storage_ptr__->PositiveHysteresis;
  }
  uVar4 = 1;
  if (1 < uVar6) {
    uVar4 = uVar6;
  }
  __return_storage_ptr__->PositiveHysteresis = uVar4;
  FConfigCacheIni::GetDouble
            (GConfig,L"Portal.BuildPatch",L"ChunkDownloadsLowBandwidthFactor",
             &__return_storage_ptr__->LowBandwidthFactor,&GEngineIni);
  dVar7 = __return_storage_ptr__->LowBandwidthFactor;
  if (__real_3fe999999999999a <= __return_storage_ptr__->LowBandwidthFactor) {
    dVar7 = __real_3fe999999999999a;
  }
  if (dVar7 <= __real_3fc999999999999a) {
    dVar7 = __real_3fc999999999999a;
  }
  __return_storage_ptr__->LowBandwidthFactor = dVar7;
  FConfigCacheIni::GetDouble
            (GConfig,L"Portal.BuildPatch",L"ChunkDownloadsHighBandwidthFactor",
             &__return_storage_ptr__->HighBandwidthFactor,&GEngineIni);
  dVar8 = __return_storage_ptr__->LowBandwidthFactor + __real_3fb999999999999a;
  dVar7 = __return_storage_ptr__->HighBandwidthFactor;
  if (__real_3ff0000000000000 <= __return_storage_ptr__->HighBandwidthFactor) {
    dVar7 = __real_3ff0000000000000;
  }
  if (dVar8 <= dVar7) {
    dVar8 = dVar7;
  }
  __return_storage_ptr__->HighBandwidthFactor = dVar8;
  FConfigCacheIni::GetInt
            (GConfig,L"Portal.BuildPatch",L"ChunkDownloadsAverageMinCount",
             (int *)&__return_storage_ptr__->AverageSpeedMinCount,&GEngineIni);
  uVar6 = 0x20;
  if (__return_storage_ptr__->AverageSpeedMinCount < 0x20) {
    uVar6 = __return_storage_ptr__->AverageSpeedMinCount;
  }
  uVar4 = 1;
  if (1 < uVar6) {
    uVar4 = uVar6;
  }
  __return_storage_ptr__->AverageSpeedMinCount = uVar4;
  FConfigCacheIni::GetInt
            (GConfig,L"Portal.BuildPatch",L"ChunkDownloadsHealthHysteresis",
             (int *)&__return_storage_ptr__->HealthHysteresis,&GEngineIni);
  uVar6 = 0x100;
  if (__return_storage_ptr__->HealthHysteresis < 0x100) {
    uVar6 = __return_storage_ptr__->HealthHysteresis;
  }
  uVar4 = 1;
  if (1 < uVar6) {
    uVar4 = uVar6;
  }
  __return_storage_ptr__->HealthHysteresis = uVar4;
  return __return_storage_ptr__;
}

// CancelInstall @ 1431c5460

void __thiscall BuildPatchServices::FBuildPatchInstaller::CancelInstall(FBuildPatchInstaller *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IInstallerError *pIVar3;
  code *pcVar4;
  char cVar5;
  FText *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  ITextData *local_28;
  uint local_20;
  
  pIVar3 = (this->InstallerError).Ptr;
  pcVar4 = *(code **)((longlong)*pIVar3 + 0x38);
  pFVar6 = FText::GetEmpty();
  local_28 = (pFVar6->TextData).Reference;
  if (local_28 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28 + 8))(local_28,local_res8);
  }
  local_20 = pFVar6->Flags;
  (*pcVar4)(pIVar3,7,UserCancelErrorCodes::UserRequested,0,&local_28);
  cVar5 = (**(code **)(this->_padding_ + 0x20))(this);
  if (cVar5 != '\0') {
    (**(code **)(this->_padding_ + 0xc0))(this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  this->bShouldAbort = true;
  pFVar7 = (this->Controllables).AllocatorInstance.Data;
  iVar2 = (this->Controllables).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Controllables).ArrayNum != iVar2) {
      `TCheckedPointerIterator<BuildPatchServices::IControllable_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar7 + 0x10))();
    pFVar7 = pFVar7 + 8;
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c554f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  return;
}

// CheckForExternallyInstalledFiles @ 1431c57c0

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::CheckForExternallyInstalledFiles
          (FBuildPatchInstaller *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  IFileSystem *pIVar4;
  code *pcVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *_Src;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  code *local_res8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_res10;
  int local_res18;
  TBitArray<FDefaultBitArrayAllocator> *local_res20;
  FString local_b8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pIVar4 = (this->FileSystem).Ptr;
  if ((this->PreviousMoveMarker).Data.ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(this->PreviousMoveMarker).Data.AllocatorInstance.Data;
  }
  local_res10 = param_1;
  cVar7 = (**(code **)((longlong)*pIVar4 + 0x80))(pIVar4,pwVar12);
  if (cVar7 == '\0') {
    cVar7 = (**(code **)((longlong)*(this->ManifestSet).Ptr + 0xa0))();
    if (cVar7 == '\0') {
      iVar17 = *(int *)&(param_1->Elements).field_0x28;
      pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
      iStack_a0 = 0;
      local_88 = 0;
      uStack_9c = 1;
      iStack_8c = 0;
      if (iVar17 != 0) {
        puVar19 = *(uint **)&(param_1->Elements).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)pTVar20;
        }
        uVar16 = *puVar19;
        while (uVar16 == 0) {
          lVar11 = (longlong)iStack_a0;
          local_88 = local_88 + 0x20;
          iStack_a0 = iStack_a0 + 1;
          iStack_8c = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0)
          goto LAB_1431c58cd;
          uVar16 = puVar19[lVar11 + 1];
        }
        uStack_9c = -uVar16 & uVar16;
        uVar2 = (ulonglong)uStack_9c * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res18 = (int)lVar11;
        iStack_8c = local_88 + -1 + local_res18;
        if (iVar17 < iStack_8c) {
          iStack_8c = iVar17;
        }
      }
LAB_1431c58cd:
      uVar16 = *(uint *)&(param_1->Elements).field_0x28;
      uVar15 = uVar16 & 0xffffffe0;
      iStack_80 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
      uStack_90 = 0xffffffff;
      TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
      TStack_70.CurrentBitIndex = iStack_8c;
      TStack_70.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar16 >> 5;
      TStack_70._28_4_ = iStack_8c;
      TStack_70.BaseBitIndex = local_88;
      uStack_50 = CONCAT44(uStack_7c,iStack_80);
      local_res20 = pTVar20;
      local_a8 = param_1;
      local_98 = (undefined1 *)pTVar20;
      iStack_84 = iStack_8c;
      local_78 = param_1;
      TStack_70.Array = pTVar20;
      if ((((int)uVar16 < 0) || (iVar17 < (int)uVar16)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      uVar3 = *(uint *)&(param_1->Elements).field_0x28;
      if (uVar16 != uVar3) {
        puVar18 = *(undefined1 **)&(param_1->Elements).field_0x20;
        if (puVar18 == (undefined1 *)0x0) {
          puVar18 = (undefined1 *)pTVar20;
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
        while (uVar16 == 0) {
          lVar11 = (longlong)iVar14;
          uVar15 = uVar15 + 0x20;
          iVar14 = iVar14 + 1;
          uVar16 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_1431c59d0;
          uVar16 = *(uint *)(puVar18 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar16 = (int)lVar11 + -1 + uVar15;
        if ((int)uVar3 < (int)uVar16) {
          uVar16 = uVar3;
        }
      }
LAB_1431c59d0:
      do {
        pTVar6 = local_78;
        if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
            (int)uStack_50) {
          `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
        }
        if (((TStack_70.CurrentBitIndex == uVar16) && (TStack_70.Array == pTVar20)) &&
           (pTVar6 == param_1)) break;
        pIVar4 = (this->FileSystem).Ptr;
        iVar14 = (this->Configuration).InstallDirectory.Data.ArrayNum;
        puVar1 = (undefined8 *)
                 (*(longlong *)&pTVar6->Elements + (longlong)TStack_70.CurrentBitIndex * 0x18);
        local_res8 = *(code **)((longlong)*pIVar4 + 0x80);
        iVar10 = *(int *)(puVar1 + 1);
        iVar17 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar17 = 0;
        }
        local_b8.Data.ArrayNum = iVar14;
        if ((iVar14 == 0) && (iVar17 != -1)) {
          _Src = (this->Configuration).InstallDirectory.Data.AllocatorInstance.Data;
          iVar10 = iVar17 + 2;
LAB_1431c5a6d:
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (iVar10 != 0) goto LAB_1431c5a76;
          local_b8.Data.ArrayMax = 0;
        }
        else {
          _Src = (this->Configuration).InstallDirectory.Data.AllocatorInstance.Data;
          iVar10 = iVar17 + 1;
          if (iVar14 == 0) goto LAB_1431c5a6d;
LAB_1431c5a76:
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar15 = iVar14 + iVar10;
          if ((int)uVar15 < iVar14) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar15,0,(ForAnyElementType *)&local_b8,iVar14,&local_b8.Data.ArrayMax);
          if (iVar14 != 0) {
            memcpy(local_b8.Data.AllocatorInstance.Data,_Src,(longlong)iVar14 * 2);
          }
        }
        ::FString::PathAppend(&local_b8,(wchar_t *)*puVar1,iVar17);
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_b8.Data.ArrayNum != 0) {
          FVar13.Data = local_b8.Data.AllocatorInstance.Data;
        }
        cVar7 = (*local_res8)(pIVar4,FVar13.Data);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (cVar7 != '\0') goto LAB_1431c5b1c;
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        param_1 = local_res10;
        pTVar20 = local_res20;
      } while( true );
    }
    bVar8 = false;
  }
  else {
LAB_1431c5b1c:
    bVar8 = true;
  }
  return bVar8;
}

// CleanupEmptyDirectories @ 1431ccdd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchInstaller::CleanupEmptyDirectories
          (FBuildPatchInstaller *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  FString *pFVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res18 [8];
  uint local_res20;
  uint in_stack_ffffffffffffff50;
  uint uVar15;
  FString local_90;
  FString *local_80;
  ulonglong local_78;
  ForAnyElementType local_70;
  uint local_68;
  int local_64;
  FString *local_60;
  undefined8 local_58;
  FString local_50;
  
  local_80 = (FString *)0x0;
  local_78 = 0;
  pIVar3 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x80);
  pFVar4 = ::operator/(&local_50,param_1,L"*");
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar3,&local_80,pwVar9,0,1);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  uVar5 = (ulonglong)(int)(uint)local_78;
  pFVar10 = local_80 + uVar5;
  local_res20 = (uint)local_78;
  uVar7 = uVar5;
  pFVar4 = local_80;
  do {
    if ((int)uVar5 != (int)uVar7) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    piVar13 = &(param_1->Data).ArrayNum;
    if (pFVar4 == pFVar10) {
      local_60 = (FString *)0x0;
      local_58 = 0;
      pIVar3 = IFileManager::Get();
      if (*piVar13 == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar3 + 0x88))
                (pIVar3,&local_60,pwVar9,L"*.*",1,in_stack_ffffffffffffff50 & 0xffffff00,1);
      if ((int)local_58 == 0) {
        pIVar3 = IFileManager::Get();
        if (*piVar13 == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,pwVar9,0,1);
        FWindowsPlatformMisc::GetLastError();
        if (4 < (byte)LogBuildPatchServices._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        }
      }
      DestructItems<FString,int>(local_60,(int)local_58);
      if (local_60 != (FString *)0x0) {
        FMemory::Free(local_60);
      }
      DestructItems<FString,int>(local_80,(uint)local_78);
      if (local_80 != (FString *)0x0) {
        FMemory::Free(local_80);
      }
      return;
    }
    uVar15 = (pFVar4->Data).ArrayNum;
    lVar11 = (longlong)(int)uVar15;
    pFVar14 = (pFVar4->Data).AllocatorInstance.Data;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = uVar15;
    if (uVar15 == 0) {
      local_64 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar15,0,&local_70,uVar15,&local_64);
      memcpy(local_70.Data,pFVar14,lVar11 * 2);
      in_stack_ffffffffffffff50 = uVar15;
    }
    uVar15 = (param_1->Data).ArrayNum;
    iVar12 = local_68 - 1;
    if (local_68 == 0) {
      iVar12 = 0;
    }
    local_90.Data.ArrayNum = uVar15;
    if ((uVar15 == 0) && (iVar12 != -1)) {
      pFVar14 = (param_1->Data).AllocatorInstance.Data;
      iVar2 = iVar12 + 2;
LAB_1431ccf2c:
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar2 != 0) goto LAB_1431ccf35;
      local_90.Data.ArrayMax = 0;
    }
    else {
      pFVar14 = (param_1->Data).AllocatorInstance.Data;
      iVar2 = iVar12 + 1;
      if (uVar15 == 0) goto LAB_1431ccf2c;
LAB_1431ccf35:
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar6 = uVar15 + iVar2;
      if ((int)uVar6 < (int)uVar15) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      in_stack_ffffffffffffff50 = uVar15;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar6,0,(ForAnyElementType *)&local_90,uVar15,&local_90.Data.ArrayMax);
      if (uVar15 != 0) {
        memcpy(local_90.Data.AllocatorInstance.Data,pFVar14,(longlong)(int)uVar15 * 2);
      }
    }
    ::FString::PathAppend(&local_90,(wchar_t *)local_70.Data,iVar12);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_90.Data.ArrayNum != 0) {
      FVar8.Data = local_90.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_50,(wchar_t *)FVar8.Data);
    CleanupEmptyDirectories(this,&local_50);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    uVar5 = local_78 & 0xffffffff;
    pFVar4 = pFVar4 + 1;
    uVar7 = (ulonglong)local_res20;
  } while( true );
}

// CleanupThread @ 1431cd110

void __thiscall BuildPatchServices::FBuildPatchInstaller::CleanupThread(FBuildPatchInstaller *this)

{
  IBuildInstallerSharedContext *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Configuration).SharedContext.Object == (IBuildInstallerSharedContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Configuration).SharedContext.Object;
  (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,this->Thread);
  this->Thread = (IBuildInstallerThread *)0x0;
  return;
}

// CompletedSuccessfully @ 1431cf0d0

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::CompletedSuccessfully(FBuildPatchInstaller *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x10))();
  if ((cVar1 != '\0') && (this->bSuccess != (FThreadSafeBool)0x0)) {
    return true;
  }
  return false;
}

// ExecuteCompleteDelegate @ 1431dacb0

void __thiscall
BuildPatchServices::FBuildPatchInstaller::ExecuteCompleteDelegate(FBuildPatchInstaller *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulong64 *puVar1;
  ISpeedRecorder *pIVar2;
  IDownloadServiceStatistics *pIVar3;
  IInstallChunkSourceStatistics *pIVar4;
  IVerifierStatistics *pIVar5;
  IFileConstructorStatistics *pIVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined4 uVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  ulong64 uVar13;
  longlong lVar14;
  TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *pTVar15;
  double dVar16;
  double dVar17;
  FBuildPatchInstaller *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> local_38;
  FReadAccessScope local_28;
  
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchInstaller.cpp"
                          ,0x8ca,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  cVar11 = (**(code **)(this->_padding_ + 0x10))(this);
  if ((cVar11 == '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsComplete()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchInstaller.cpp"
                          ,0x8cb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    dVar16 = (double)(**(code **)(this->_padding_ + 0x60))(this);
    uVar9 = __real_7f7fffff;
    pIVar2 = (this->DownloadSpeedRecorder).Ptr;
    (this->BuildStats).FinalDownloadSpeed = dVar16;
    dVar16 = (double)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,uVar9);
    pIVar2 = (this->DownloadSpeedRecorder).Ptr;
    (this->BuildStats).AverageDownloadSpeed = dVar16;
    dVar16 = (double)(**(code **)((longlong)*pIVar2 + 0x18))();
    uVar9 = __real_7f7fffff;
    pIVar2 = (this->DiskReadSpeedRecorder).Ptr;
    (this->BuildStats).PeakDownloadSpeed = dVar16;
    dVar16 = (double)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,uVar9);
    pIVar2 = (this->DiskReadSpeedRecorder).Ptr;
    (this->BuildStats).AverageDiskReadSpeed = dVar16;
    dVar16 = (double)(**(code **)((longlong)*pIVar2 + 0x18))();
    uVar9 = __real_7f7fffff;
    pIVar2 = (this->DiskWriteSpeedRecorder).Ptr;
    (this->BuildStats).PeakDiskReadSpeed = dVar16;
    dVar16 = (double)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,uVar9);
    pIVar2 = (this->DiskWriteSpeedRecorder).Ptr;
    (this->BuildStats).AverageDiskWriteSpeed = dVar16;
    dVar16 = (double)(**(code **)((longlong)*pIVar2 + 0x18))();
    pIVar3 = (this->DownloadServiceStatistics).Ptr;
    (this->BuildStats).PeakDiskWriteSpeed = dVar16;
    uVar13 = (**(code **)((longlong)*pIVar3 + 0x20))();
    pIVar4 = (this->InstallChunkSourceStatistics).Ptr;
    (this->BuildStats).TotalDownloadedData = uVar13;
    uVar13 = (**(code **)((longlong)*pIVar4 + 0x28))();
    pIVar5 = (this->VerifierStatistics).Ptr;
    (this->BuildStats).TotalReadData = uVar13;
    lVar14 = (**(code **)((longlong)*pIVar5 + 0x38))();
    pIVar6 = (this->FileConstructorStatistics).Ptr;
    puVar1 = &(this->BuildStats).TotalReadData;
    *puVar1 = *puVar1 + lVar14;
    uVar13 = (**(code **)((longlong)*pIVar6 + 0x88))();
    pIVar6 = (this->FileConstructorStatistics).Ptr;
    (this->BuildStats).TotalWrittenData = uVar13;
    uVar12 = (**(code **)((longlong)*pIVar6 + 0x90))();
    dVar16 = (this->BuildStats).AverageDownloadSpeed;
    dVar17 = 0.0;
    (this->BuildStats).NumFilesConstructed = uVar12;
    if (0.0 < dVar16) {
      dVar17 = (double)(this->BuildStats).TotalDownloadedData / dVar16;
    }
    (this->BuildStats).TheoreticalDownloadTime = (float)dVar17;
    InstallerHelpers::LogBuildStatInfo(&this->BuildStats,&this->SessionId);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar15 = TSharedFromThis<BuildPatchServices::FBuildPatchInstaller,1>::AsShared
                        ((TSharedFromThis<BuildPatchServices::FBuildPatchInstaller,1> *)
                         &this->_padding_,&local_38);
    local_48 = pTVar15->Object;
    local_40 = (pTVar15->SharedReferenceCount).ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CompleteDelegate,
               &local_28);
    if ((*(int *)&(this->CompleteDelegate).field_0x10 != 0) &&
       (plVar7 = *(longlong **)&(this->CompleteDelegate).field_0x8, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x68))(plVar7,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FilterToExistingFiles @ 1431dba80

void __thiscall
BuildPatchServices::FBuildPatchInstaller::FilterToExistingFiles
          (FBuildPatchInstaller *this,FString *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  int iVar1;
  IFileSystem *pIVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *_Src;
  int iVar11;
  FString local_68;
  undefined1 local_58 [12];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_30;
  
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::TIterator::TIterator
            ((TIterator *)local_58,param_2);
  if (local_3c < *(int *)(local_48 + 0x18)) {
    do {
      iVar5 = local_3c;
      pIVar2 = (this->FileSystem).Ptr;
      iVar1 = (param_1->Data).ArrayNum;
      pcVar3 = *(code **)((longlong)*pIVar2 + 0x80);
      lVar8 = (longlong)local_3c;
      lVar4 = *(longlong *)local_58._0_8_;
      iVar7 = *(int *)(lVar4 + 8 + lVar8 * 0x18);
      iVar11 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar11 = 0;
      }
      local_68.Data.ArrayNum = iVar1;
      if ((iVar1 == 0) && (iVar11 != -1)) {
        _Src = (param_1->Data).AllocatorInstance.Data;
        iVar7 = iVar11 + 2;
LAB_1431dbb44:
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar7 != 0) goto LAB_1431dbb4f;
        local_68.Data.ArrayMax = 0;
      }
      else {
        _Src = (param_1->Data).AllocatorInstance.Data;
        iVar7 = iVar11 + 1;
        if (iVar1 == 0) goto LAB_1431dbb44;
LAB_1431dbb4f:
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar9 = iVar1 + iVar7;
        if ((int)uVar9 < iVar1) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar9,0,(ForAnyElementType *)&local_68,iVar1,&local_68.Data.ArrayMax);
        if (iVar1 != 0) {
          memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
        }
      }
      ::FString::PathAppend(&local_68,*(wchar_t **)(lVar4 + lVar8 * 0x18),iVar11);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar10.Data = local_68.Data.AllocatorInstance.Data;
      }
      cVar6 = (*pcVar3)(pIVar2,FVar10.Data);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (cVar6 == '\0') {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveByIndex(local_30,iVar5)
        ;
      }
      local_40 = local_40 & ~local_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_58 + 8));
    } while (local_3c < *(int *)(local_48 + 0x18));
  }
  return;
}

// GetBuildStatistics @ 1431dd950

FBuildInstallStats * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetBuildStatistics
          (FBuildPatchInstaller *this,FBuildInstallStats *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FBuildInstallStats::FBuildInstallStats(__return_storage_ptr__,&this->BuildStats);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetChunkDbChunkSourceStatistics @ 1431dd9c0

IChunkDbChunkSourceStatistics * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetChunkDbChunkSourceStatistics
          (FBuildPatchInstaller *this)

{
  return (this->ChunkDbChunkSourceStatistics).Ptr;
}

// GetCloudChunkSourceStatistics @ 1431ddfc0

ICloudChunkSourceStatistics * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetCloudChunkSourceStatistics(FBuildPatchInstaller *this)

{
  return (this->CloudChunkSourceStatistics).Ptr;
}

// GetConfiguration @ 1431de330

FBuildInstallerConfiguration * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetConfiguration(FBuildPatchInstaller *this)

{
  return &this->Configuration;
}

// GetDebugText @ 1431de8b0

/* WARNING: Removing unreachable block (ram,0x0001431dea49) */

void __thiscall
BuildPatchServices::FBuildPatchInstaller::GetDebugText
          (FBuildPatchInstaller *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  IDownloadServiceStatistics *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  long64 *plVar8;
  FDownload *pFVar9;
  undefined1 local_res8 [8];
  FString local_48;
  FDownload *local_38;
  int local_30;
  
  pIVar1 = (this->DownloadServiceStatistics).Ptr;
  if (pIVar1 != (IDownloadServiceStatistics *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,&local_38);
    iVar4 = local_30;
    pFVar9 = local_38 + local_30;
    plVar8 = &local_38->Received;
    while( true ) {
      if (local_30 != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<BuildPatchServices::FDownload,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if ((FDownload *)(plVar8 + -3) == pFVar9) break;
      ::FString::PrintfImpl(&local_48,L"BPI %s downloaded %.2f MBytes / %.2f MBytes");
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar7 = (longlong)iVar6;
      param_1->ArrayNum = iVar6 + 1;
      pFVar2 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + lVar7 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x10) = local_48.Data.AllocatorInstance.Data;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar2 + lVar7 * 0x10 + 8) = local_48.Data.ArrayNum;
      *(int *)(pFVar2 + lVar7 * 0x10 + 0xc) = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      plVar8 = plVar8 + 4;
    }
    DestructItems<BuildPatchServices::FDownload,int>(local_38,local_30);
    if (local_38 != (FDownload *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return;
}

// GetDiskReadSpeedRecorder @ 1431df430

ISpeedRecorder * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetDiskReadSpeedRecorder(FBuildPatchInstaller *this)

{
  return (this->DiskReadSpeedRecorder).Ptr;
}

// GetDiskWriteSpeedRecorder @ 1431df440

ISpeedRecorder * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetDiskWriteSpeedRecorder(FBuildPatchInstaller *this)

{
  return (this->DiskWriteSpeedRecorder).Ptr;
}

// GetDownloadHealth @ 1431df450

EBuildPatchDownloadHealth __thiscall
BuildPatchServices::FBuildPatchInstaller::GetDownloadHealth(FBuildPatchInstaller *this)

{
  EBuildPatchDownloadHealth EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431df45a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*(this->CloudChunkSourceStatistics).Ptr + 0x80))();
  return EVar1;
}

// GetDownloadServiceStatistics @ 1431df470

IDownloadServiceStatistics * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetDownloadServiceStatistics(FBuildPatchInstaller *this)

{
  return (this->DownloadServiceStatistics).Ptr;
}

// GetDownloadSpeed @ 1431df900

double __thiscall
BuildPatchServices::FBuildPatchInstaller::GetDownloadSpeed(FBuildPatchInstaller *this)

{
  ISpeedRecorder *pIVar1;
  code *UNRECOVERED_JUMPTABLE;
  double dVar2;
  float local_res8 [2];
  
  pIVar1 = (this->DownloadSpeedRecorder).Ptr;
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x10);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8[0] = 10.0;
      FConfigCacheIni::GetFloat
                (GConfig,L"Portal.BuildPatch",L"DownloadSpeedAverageTime",local_res8,&GEngineIni);
      AverageTime = local_res8[0];
      if (__real_41f00000 <= local_res8[0]) {
        AverageTime = __real_41f00000;
      }
      if (AverageTime <= __real_3f800000) {
        AverageTime = __real_3f800000;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431df953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = (double)(*UNRECOVERED_JUMPTABLE)(pIVar1,AverageTime);
  return dVar2;
}

// GetDownloadSpeedRecorder @ 1431df9e0

ISpeedRecorder * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetDownloadSpeedRecorder(FBuildPatchInstaller *this)

{
  return (this->DownloadSpeedRecorder).Ptr;
}

// GetDownloadSpeedText @ 1431df9f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetDownloadSpeedText
          (FBuildPatchInstaller *this,FText *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  longlong lVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  double dVar9;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_188
  ;
  FNumberFormattingOptions local_178;
  FString local_160;
  TSharedPtr<FCulture,1> local_150;
  FString local_140;
  TSharedPtr<FCulture,1> local_130;
  FString local_120;
  TSharedPtr<FCulture,1> local_110;
  FText local_100;
  FFormatArgumentValue local_f0;
  FFormatArgumentValue local_d0;
  FFormatArgumentValue local_b0;
  FText local_90;
  FText local_80;
  FText local_70;
  FTextFormat local_60 [5];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&DownloadSpeedFormat,L"BuildPatchInstaller",
                 L"BuildPatchInstaller_DownloadSpeedFormat",L"{Current} / {Total} ({Speed}/sec)");
      atexit(`BuildPatchServices::FBuildPatchInstaller::GetDownloadSpeedText'::__l2::
             _dynamic_atexit_destructor_for__DownloadSpeedFormat__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FText::FText(&local_100);
    dVar9 = (double)(**(code **)(this->_padding_ + 0x60))(this);
    lVar6 = (**(code **)(this->_padding_ + 0x70))(this);
    dVar2 = (double)lVar6;
    lVar6 = (**(code **)(this->_padding_ + 0x78))(this);
    dVar3 = (double)lVar6;
    if (dVar9 < 0.0) {
      FText::FText(__return_storage_ptr__);
    }
    else {
      FNumberFormattingOptions::FNumberFormattingOptions(&local_178);
      dVar4 = __real_43e0000000000000;
      lVar6 = 0;
      local_178.MaximumFractionalDigits = 1;
      local_178.MinimumFractionalDigits = 1;
      local_188.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.Pairs.ArrayNum = 0;
      local_188.Pairs.ArrayMax = 0;
      local_150.Object = (FCulture *)0x0;
      local_150.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if ((__real_43e0000000000000 <= dVar9) &&
         (dVar9 = dVar9 - __real_43e0000000000000, dVar9 < __real_43e0000000000000)) {
        lVar6 = -0x8000000000000000;
      }
      pFVar7 = FText::AsMemory(&local_90,(longlong)dVar9 + lVar6,&local_178,&local_150,IEC);
      local_f0.Type = Text;
      FText::FText((FText *)&local_f0.TextValue,pFVar7);
      if (local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar1)();
          return pFVar7;
        }
      }
      ::FString::FString(&local_160,L"Speed");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_188,&local_160,&local_f0);
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      if (local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_150.SharedReferenceCount.ReferenceController);
      lVar6 = 0;
      local_130.Object = (FCulture *)0x0;
      local_130.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if ((dVar4 <= dVar2) && (dVar2 = dVar2 - dVar4, dVar2 < dVar4)) {
        lVar6 = -0x8000000000000000;
      }
      pFVar7 = FText::AsMemory(&local_80,(longlong)dVar2 + lVar6,&local_178,&local_130,IEC);
      local_d0.Type = Text;
      FText::FText((FText *)&local_d0.TextValue,pFVar7);
      if (local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar1)();
          return pFVar7;
        }
      }
      ::FString::FString(&local_140,L"Total");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_188,&local_140,&local_d0);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_80.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_130.SharedReferenceCount.ReferenceController);
      lVar6 = 0;
      local_110.Object = (FCulture *)0x0;
      local_110.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if ((dVar4 <= dVar3) && (dVar3 = dVar3 - dVar4, dVar3 < dVar4)) {
        lVar6 = -0x8000000000000000;
      }
      pFVar7 = FText::AsMemory(&local_70,(longlong)dVar3 + lVar6,&local_178,&local_110,IEC);
      local_b0.Type = Text;
      FText::FText((FText *)&local_b0.TextValue,pFVar7);
      if (local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar1)();
          return pFVar7;
        }
      }
      ::FString::FString(&local_120,L"Current");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_188,&local_120,&local_b0);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_70.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.SharedReferenceCount.ReferenceController);
      pFVar8 = FTextFormat::FTextFormat(local_60,&DownloadSpeedFormat,Default);
      FText::Format(__return_storage_ptr__,pFVar8,&local_188);
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_188.Pairs.AllocatorInstance.Data,
                 local_188.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_188.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_188.Pairs.AllocatorInstance.Data);
      }
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetErrorCode @ 1431dfe90

FString * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetErrorCode
          (FBuildPatchInstaller *this,FString *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString(__return_storage_ptr__,&(this->BuildStats).ErrorCode);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetErrorText @ 1431dff00

FText * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetErrorText
          (FBuildPatchInstaller *this,FText *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->InstallerError).Ptr + 0x30))();
  return __return_storage_ptr__;
}

// GetErrorType @ 1431dff30

EBuildPatchInstallError __thiscall
BuildPatchServices::FBuildPatchInstaller::GetErrorType(FBuildPatchInstaller *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EBuildPatchInstallError EVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = (this->BuildStats).FailureType;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFileConstructorStatistics @ 1431e01e0

IFileConstructorStatistics * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetFileConstructorStatistics(FBuildPatchInstaller *this)

{
  return (this->FileConstructorStatistics).Ptr;
}

// GetFileOperationTracker @ 1431e06a0

IFileOperationTracker * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetFileOperationTracker(FBuildPatchInstaller *this)

{
  return (this->FileOperationTracker).Ptr;
}

// GetFilesInstalledToMemory @ 1431e08f0

TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
* __thiscall
BuildPatchServices::FBuildPatchInstaller::GetFilesInstalledToMemory(FBuildPatchInstaller *this)

{
  return &this->FilesInstalledToMemory;
}

// GetInstallChunkSourceStatistics @ 1431e0bd0

IInstallChunkSourceStatistics * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetInstallChunkSourceStatistics
          (FBuildPatchInstaller *this)

{
  return (this->InstallChunkSourceStatistics).Ptr;
}

// GetPercentageText @ 1431e20c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetPercentageText
          (FBuildPatchInstaller *this,FText *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRefCountPtr<ITextData> TVar1;
  float fVar2;
  undefined1 local_res8 [8];
  TSharedPtr<FCulture,1> local_38;
  FNumberFormattingOptions local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&PleaseWait,L"BuildPatchInstaller",L"BuildPatchInstaller_GenericProgress",
                 L"Please Wait");
      atexit(`BuildPatchServices::FBuildPatchInstaller::GetPercentageText'::__l2::
             _dynamic_atexit_destructor_for__PleaseWait__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar2 = (float)(**(code **)(this->_padding_ + 0x90))(this);
    if (0.0 < fVar2 * __real_42c80000) {
      FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
      local_28.MinimumFractionalDigits = 0;
      local_28.MaximumFractionalDigits = 0;
      local_38.Object = (FCulture *)0x0;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      fVar2 = (float)(**(code **)(this->_padding_ + 0x90))(this);
      FText::AsPercent(__return_storage_ptr__,fVar2,&local_28,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    else {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      TVar1 = PleaseWait.TextData;
      (__return_storage_ptr__->TextData).Reference = PleaseWait.TextData.Reference;
      if (TVar1.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar1.Reference + 8))(TVar1.Reference,local_res8);
      }
      __return_storage_ptr__->Flags = PleaseWait.Flags;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetState @ 1431e32a0

EBuildPatchState __thiscall
BuildPatchServices::FBuildPatchInstaller::GetState(FBuildPatchInstaller *this)

{
  EBuildPatchState EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431e32aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((this->BuildProgress)._padding_ + 0x28))();
  return EVar1;
}

// GetStatusText @ 1431e33f0

FText * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetStatusText
          (FBuildPatchInstaller *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  EBuildPatchState local_res8 [2];
  undefined1 local_res10 [8];
  
  local_res8[0] = (**(code **)(this->_padding_ + 0x80))();
  pFVar2 = StateToText(local_res8);
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetTotalDownloadRequired @ 1431e3d90

long64 __thiscall
BuildPatchServices::FBuildPatchInstaller::GetTotalDownloadRequired(FBuildPatchInstaller *this)

{
  ICloudChunkSourceStatistics *pIVar1;
  longlong lVar2;
  longlong lVar3;
  
  pIVar1 = (this->CloudChunkSourceStatistics).Ptr;
  lVar2 = (this->PreviousTotalDownloadRequired).Counter;
  lVar3 = (**(code **)((longlong)*pIVar1 + 0x60))(pIVar1);
  return lVar3 + lVar2;
}

// GetTotalDownloaded @ 1431e3dc0

long64 __thiscall
BuildPatchServices::FBuildPatchInstaller::GetTotalDownloaded(FBuildPatchInstaller *this)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431e3dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)((longlong)*(this->DownloadServiceStatistics).Ptr + 0x20))();
  return lVar1;
}

// GetUpdateProgress @ 1431e3ed0

float __thiscall
BuildPatchServices::FBuildPatchInstaller::GetUpdateProgress(FBuildPatchInstaller *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431e3eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((this->BuildProgress)._padding_ + 0x30))();
  return fVar1;
}

// GetVerifierStatistics @ 1431e3ef0

IVerifierStatistics * __thiscall
BuildPatchServices::FBuildPatchInstaller::GetVerifierStatistics(FBuildPatchInstaller *this)

{
  return (this->VerifierStatistics).Ptr;
}

// HasError @ 1431e51c0

bool __thiscall BuildPatchServices::FBuildPatchInstaller::HasError(FBuildPatchInstaller *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->BuildStats).FailureType == UserCanceled) {
      bVar1 = false;
    }
    else {
      bVar1 = (this->BuildStats).ProcessSuccess == false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Initialize @ 1431e5ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall BuildPatchServices::FBuildPatchInstaller::Initialize(FBuildPatchInstaller *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<BuildPatchServices::IControllable_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  IInstallerError *pIVar4;
  IBuildManifest *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  IBuildManifestSet *pIVar7;
  IVerifier *pIVar8;
  undefined8 uVar9;
  IChunkDataSizeProvider *pIVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  EBuildPatchInstallError EVar19;
  longlong lVar20;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar21;
  IFileManager *pIVar22;
  FText *pFVar23;
  FText *pFVar24;
  FTextFormat *pFVar25;
  FOptimisedDeltaConfiguration *pFVar26;
  IOptimisedDelta *pIVar27;
  ulonglong uVar28;
  longlong *plVar29;
  FBuildPatchManifestSet *pFVar30;
  FBuildPatchManifestSet *pFVar31;
  FString *pFVar32;
  IVerifier *pIVar33;
  undefined8 *puVar34;
  byte bVar35;
  ForAnyElementType *pFVar36;
  wchar_t *pwVar37;
  FScriptContainerElement *pFVar38;
  FInstallerAction *pFVar39;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  FBuildPatchInstallerAction *pFVar42;
  ForAnyElementType FVar43;
  atomic<int> *paVar44;
  FInstallerAction *pFVar45;
  FBuildPatchInstallerAction *pFVar46;
  uint *puVar47;
  TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>
  *pTVar48;
  uint uVar49;
  undefined1 auStackY_4d8 [32];
  bool local_488;
  undefined1 local_487;
  undefined1 local_486;
  undefined1 local_485;
  undefined1 local_484;
  undefined1 local_483;
  undefined1 local_482 [2];
  ForAnyElementType local_480;
  undefined8 local_478;
  uint local_470;
  ForAnyElementType local_468;
  undefined8 local_460;
  undefined1 local_458 [8];
  IVerifier *local_450;
  FString local_448;
  TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_> local_438;
  ForAnyElementType local_428;
  int local_420;
  int iStack_41c;
  undefined1 local_418 [8];
  undefined8 local_410;
  IBuildManifest *local_408;
  FSharedReferencer<1> local_400;
  FString local_3f8;
  undefined1 local_3e8 [8];
  undefined1 local_3e0 [4];
  undefined1 local_3dc [4];
  int local_3d8;
  undefined1 local_3d4 [4];
  FString local_3d0;
  ForAnyElementType local_3c0;
  undefined8 local_3b8;
  ITextData *local_3b0;
  uint local_3a8;
  longlong *local_3a0;
  uint uStack_398;
  uint uStack_394;
  TBitArray<FDefaultBitArrayAllocator> *local_390;
  undefined4 uStack_388;
  uint uStack_384;
  uint local_380;
  undefined4 uStack_37c;
  int iStack_378;
  undefined4 uStack_374;
  longlong *local_370;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_368;
  undefined8 uStack_348;
  ITextData *local_340;
  uint local_338;
  ITextData *local_330;
  uint local_328;
  TSharedPtr<IBuildInstallerSharedContext,1> local_320;
  undefined8 local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FString local_2f8;
  FString local_2e8;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  void *local_2c8 [2];
  longlong *local_2b8 [2];
  FReadAccessScope local_2a8;
  FText local_290;
  FText local_280;
  FOptimisedDeltaConfiguration local_270;
  FText local_238;
  FText local_228;
  FText local_218;
  FText local_208;
  FTextFormat local_1f8;
  FText local_1e8;
  FText local_1d8;
  FTextFormat local_1c8;
  FText local_1b8;
  FText local_1a8;
  FString local_198 [2];
  undefined4 local_16c;
  undefined1 local_168 [32];
  void *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  ForElementType<FSetElementId> local_128;
  int local_120;
  undefined1 local_118 [32];
  uint *local_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  void *local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [56];
  longlong *local_90;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  local_488 = true;
  local_470 = 0;
  InstallerHelpers::LogBuildConfiguration(&this->Configuration,&this->SessionId);
  iVar17 = (this->InstallerActions).ArrayNum;
  pFVar38 = (this->InstallerActions).AllocatorInstance.Data;
  pFVar41 = pFVar38 + (longlong)iVar17 * 0x158;
  while( true ) {
    if ((this->InstallerActions).ArrayNum != iVar17) {
      local_487 = 0;
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_487);
    }
    if (pFVar38 == pFVar41) goto LAB_1431e62e2;
    local_168._0_8_ = (FScriptContainerElement *)0x0;
    local_168._8_8_ = 0;
    local_148 = (void *)0x0;
    local_140 = 0;
    local_13c = 0x80;
    local_138 = 0xffffffff;
    local_134 = 0;
    local_128 = (ForElementType<FSetElementId>)0x0;
    local_120 = 0;
    ::FString::FString(&local_2f8,L"");
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_168,
               (FString *)local_3e8,(bool *)&local_2f8);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    lVar20 = 0x98;
    if (*(longlong *)(pFVar38 + 0xa8) != 0) {
      lVar20 = 0xa8;
    }
    if ((*(longlong *)(pFVar38 + lVar20) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar14 = (*pcVar11)();
      return (bool)uVar14;
    }
    (**(code **)(**(longlong **)(pFVar38 + lVar20) + 0xc0))
              (*(longlong **)(pFVar38 + lVar20),local_168);
    ::FString::FString(&local_2e8,L"");
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_168,
               (FString *)(local_3e8 + 4),(bool *)&local_2e8);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    pTVar21 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Difference
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                         (pFVar38 + 0xb8),&local_88,
                         (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_168)
    ;
    iVar16 = *(int *)&(pTVar21->Elements).field_0x8;
    iVar3 = *(int *)&(pTVar21->Elements).field_0x34;
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    if (0 < iVar16 - iVar3) break;
    local_120 = 0;
    if (local_128 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_168,0,local_168._8_4_);
    iVar16 = SUB84(local_168._8_8_,4);
    local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
    if (iVar16 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
    }
    local_138 = 0xffffffff;
    local_134 = 0;
    local_140 = 0;
    if (0x80 < local_13c) {
      local_13c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free(local_148);
    }
    if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_168._0_8_);
    }
    pFVar38 = pFVar38 + 0x158;
  }
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  pIVar4 = (this->InstallerError).Ptr;
  pcVar11 = *(code **)((longlong)*pIVar4 + 0x38);
  FText::AsLocalizable_Advanced_LocText
            (&local_238,L"BuildPatchInstallError",L"InvalidInstallTags",
             L"This installation could not continue due to a configuration issue. Please contact support."
            );
  (*pcVar11)(pIVar4,9,InitializationErrorCodes::InvalidInstallTags);
  local_488 = false;
  local_120 = 0;
  if (local_128 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_168,0,local_168._8_4_);
  iVar17 = SUB84(local_168._8_8_,4);
  local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
  if (iVar17 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
  }
  local_138 = 0xffffffff;
  local_134 = 0;
  local_140 = 0;
  if (0x80 < local_13c) {
    local_13c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
LAB_1431e62e2:
  if ((this->Configuration).bInstallToMemory != false) {
    if ((this->Configuration).bConstructFilesInMemory != false) {
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pIVar4 = (this->InstallerError).Ptr;
      pcVar11 = *(code **)((longlong)*pIVar4 + 0x38);
      FText::AsLocalizable_Advanced_LocText
                (&local_228,L"BuildPatchInstallError",L"InvalidMemoryConstructionConfig",
                 L"This installation could not continue due to a configuration issue. Please contact support."
                );
      (*pcVar11)(pIVar4,9);
      local_488 = false;
    }
    if ((this->Configuration).bInstallToMemory != false) {
      iVar17 = (this->InstallerActions).ArrayNum;
      pFVar39 = (FInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
      pFVar45 = (FInstallerAction *)((longlong)pFVar39 + (longlong)iVar17 * 0x158);
      while( true ) {
        if ((this->InstallerActions).ArrayNum != iVar17) {
          local_486 = 0;
          `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_486);
        }
        if (pFVar39 == pFVar45) goto LAB_1431e6421;
        bVar13 = FInstallerAction::IsInstall(pFVar39);
        if (!bVar13) break;
        pFVar39 = (FInstallerAction *)&pFVar39[2].InstallTags.Elements.field_0x8;
      }
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pIVar4 = (this->InstallerError).Ptr;
      pcVar11 = *(code **)((longlong)*pIVar4 + 0x38);
      FText::AsLocalizable_Advanced_LocText
                (&local_218,L"BuildPatchInstallError",L"InvalidInstallToMemory",
                 L"This installation could not continue due to a configuration issue. Please contact support."
                );
      (*pcVar11)(pIVar4,9);
      local_488 = false;
    }
  }
LAB_1431e6421:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CompleteDelegate,
             &local_2a8);
  if (((*(int *)&(this->CompleteDelegate).field_0x10 == 0) ||
      (plVar29 = *(longlong **)&(this->CompleteDelegate).field_0x8, plVar29 == (longlong *)0x0)) ||
     (cVar15 = (**(code **)(*plVar29 + 0x38))(), cVar15 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2a8);
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    pIVar4 = (this->InstallerError).Ptr;
    pcVar11 = *(code **)((longlong)*pIVar4 + 0x38);
    pFVar23 = FText::GetEmpty();
    local_340 = (pFVar23->TextData).Reference;
    if (local_340 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_340 + 8))(local_340,local_3e0);
    }
    local_338 = pFVar23->Flags;
    (*pcVar11)(pIVar4,9);
    local_488 = false;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2a8);
  }
  if ((this->Configuration).bInstallToMemory == false) {
    pIVar22 = IFileManager::Get();
    pFVar32 = &(this->Configuration).InstallDirectory;
    if ((this->Configuration).InstallDirectory.Data.ArrayNum == 0) {
      pwVar37 = L"";
    }
    else {
      pwVar37 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar22 + 0x60))(pIVar22,pwVar37,1);
    pIVar22 = IFileManager::Get();
    if ((this->Configuration).InstallDirectory.Data.ArrayNum == 0) {
      pwVar37 = L"";
    }
    else {
      pwVar37 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
    }
    cVar15 = (**(code **)((longlong)*pIVar22 + 0x58))(pIVar22,pwVar37);
    if (cVar15 == '\0') {
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pIVar4 = (this->InstallerError).Ptr;
      pcVar11 = *(code **)((longlong)*pIVar4 + 0x38);
      pFVar23 = FText::FromString(&local_208,pFVar32);
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_290,L"BuildPatchInstallError",L"MissingInstallDirectory",
                           L"The installation directory could not be created.\n{0}");
      pFVar25 = FTextFormat::FTextFormat(&local_1f8,pFVar24,Default);
      FText::Format<FText>(&local_1e8,pFVar25,pFVar23);
      (*pcVar11)(pIVar4,9,InitializationErrorCodes::MissingInstallDirectory,0);
      if (local_290.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
      }
      local_488 = false;
    }
    pIVar22 = IFileManager::Get();
    pFVar32 = &(this->Configuration).StagingDirectory;
    if ((this->Configuration).StagingDirectory.Data.ArrayNum == 0) {
      pwVar37 = L"";
    }
    else {
      pwVar37 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar22 + 0x60))(pIVar22,pwVar37,1);
    pIVar22 = IFileManager::Get();
    if ((this->Configuration).StagingDirectory.Data.ArrayNum == 0) {
      pwVar37 = L"";
    }
    else {
      pwVar37 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
    }
    cVar15 = (**(code **)((longlong)*pIVar22 + 0x58))(pIVar22,pwVar37);
    if (cVar15 == '\0') {
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pIVar4 = (this->InstallerError).Ptr;
      pcVar11 = *(code **)((longlong)*pIVar4 + 0x38);
      pFVar23 = FText::FromString(&local_1d8,pFVar32);
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_280,L"BuildPatchInstallError",L"MissingStageDirectory",
                           L"The following directory could not be created.\n{0}");
      pFVar25 = FTextFormat::FTextFormat(&local_1c8,pFVar24,Default);
      FText::Format<FText>(&local_1b8,pFVar25,pFVar23);
      (*pcVar11)(pIVar4,9);
      if (local_280.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
      }
      local_488 = false;
    }
  }
  if ((this->Configuration).InstallMode == PrereqOnly) {
    iVar17 = (this->InstallerActions).ArrayNum;
    pFVar38 = (this->InstallerActions).AllocatorInstance.Data;
    pFVar41 = pFVar38 + (longlong)iVar17 * 0x158;
    while( true ) {
      if ((this->InstallerActions).ArrayNum != iVar17) {
        local_485 = 0;
        `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_485);
      }
      if (pFVar38 == pFVar41) break;
      lVar20 = 0x98;
      if (*(longlong *)(pFVar38 + 0xa8) != 0) {
        lVar20 = 0xa8;
      }
      if ((*(longlong *)(pFVar38 + lVar20) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      lVar20 = (**(code **)(**(longlong **)(pFVar38 + lVar20) + 0x40))();
      if (1 < *(int *)(lVar20 + 8)) goto LAB_1431e6830;
      pFVar38 = pFVar38 + 0x158;
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    pIVar4 = (this->InstallerError).Ptr;
    pcVar11 = *(code **)((longlong)*pIVar4 + 0x38);
    FText::AsLocalizable_Advanced_LocText
              (&local_1a8,L"BuildPatchInstallError",L"MissingPrereqForPrereqOnlyInstall",
               L"This installation could not continue due to a prerequisite configuration issue. Please contact support."
              );
    (*pcVar11)(pIVar4,9);
    local_488 = false;
  }
LAB_1431e6830:
  iVar17 = (this->InstallerActions).ArrayNum;
  pFVar46 = (FBuildPatchInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  local_480.Data = (FScriptContainerElement *)0x0;
  pFVar42 = pFVar46 + iVar17;
  local_478 = 0;
  while( true ) {
    if ((this->InstallerActions).ArrayNum != iVar17) {
      local_484 = 0;
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_484);
    }
    if (pFVar46 == pFVar42) break;
    bVar13 = FInstallerAction::IsUpdate(&pFVar46->InstallerAction);
    if (bVar13) {
      local_c8._0_8_ = (this->DownloadService).Ptr;
      local_c8._16_8_ = 0;
      local_90 = (longlong *)0x0;
      pFVar26 = ConfigHelpers::BuildOptimisedDeltaConfig(&local_270,&this->Configuration,pFVar46);
      pIVar27 = FOptimisedDeltaFactory::Create(pFVar26,(FOptimisedDeltaDependencies *)local_c8);
      DestructItems<FString,int>
                ((FString *)local_270.CloudDirectories.AllocatorInstance.Data,
                 local_270.CloudDirectories.ArrayNum);
      if (local_270.CloudDirectories.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.CloudDirectories.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_270.DestinationManifest.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_270.SourceManifest.SharedReferenceCount.ReferenceController);
      if (local_c8._16_8_ != 0) {
        plVar29 = (longlong *)(local_c8 + 0x20);
        if (local_90 != (longlong *)0x0) {
          plVar29 = local_90;
        }
        (**(code **)(*plVar29 + 0x10))();
      }
      local_418 = (undefined1  [8])pFVar46;
      local_410 = pIVar27;
      if (((local_480.Data <=
            (TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>
             *)local_418) &&
          ((FScriptContainerElement *)local_418 < local_480.Data + (longlong)local_478._4_4_ * 0x10)
          ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      iVar16 = (uint)local_478;
      if ((uint)local_478 == local_478._4_4_) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_480,(int *)((longlong)&local_478 + 4));
      }
      local_478 = CONCAT44(local_478._4_4_,iVar16 + 1);
      *(undefined1 (*) [8])(local_480.Data + (longlong)iVar16 * 0x10) = local_418;
      *(IOptimisedDelta **)(local_480.Data + (longlong)iVar16 * 0x10 + 8) = local_410;
      local_410 = (IOptimisedDelta *)0x0;
    }
    pFVar46 = pFVar46 + 1;
  }
  uVar28 = (ulonglong)(int)(uint)local_478;
  pTVar48 = (TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>
             *)(local_480.Data + uVar28 * 0x10);
  local_470 = (uint)local_478;
  FVar43.Data = local_480.Data;
  while( true ) {
    if ((uint)local_478 != (int)uVar28) {
      local_483 = 0;
      `TCheckedPointerIterator<TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_483);
    }
    if ((TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>
         *)FVar43.Data == pTVar48) break;
    pFVar39 = *(FInstallerAction **)FVar43.Data;
    plVar29 = (longlong *)
              (**(code **)(**(longlong **)
                             &((TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>
                                *)FVar43.Data)->field_0x8 + 8))();
    iVar17 = (**(code **)(**(longlong **)
                            &((TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>
                               *)FVar43.Data)->field_0x8 + 0x10))();
    LOCK();
    (this->PreviousTotalDownloadRequired).Counter =
         (this->PreviousTotalDownloadRequired).Counter + (longlong)iVar17;
    UNLOCK();
    bVar35 = *(byte *)(plVar29 + 2);
    if ((2 < (ulonglong)bVar35) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar14 = (*pcVar11)();
      return (bool)uVar14;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TSharedPtr<FBuildPatchAppManifest,1>,TSharedPtr<class_FBuildPatchAppManifest,1>,TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_FBuildPatchAppManifest,1>,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar35) == '\0') {
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pIVar4 = (this->InstallerError).Ptr;
      pcVar11 = *(code **)((longlong)*pIVar4 + 0x38);
      pFVar23 = FText::GetEmpty();
      local_330 = (pFVar23->TextData).Reference;
      if (local_330 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_330 + 8))(local_330,local_3dc);
      }
      local_328 = pFVar23->Flags;
      if (((char)plVar29[2] != '\x01') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      (*pcVar11)(pIVar4,1);
      local_488 = false;
      break;
    }
    if (((char)plVar29[2] != '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar14 = (*pcVar11)();
      return (bool)uVar14;
    }
    if ((*plVar29 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar14 = (*pcVar11)();
      return (bool)uVar14;
    }
    pIVar5 = (IBuildManifest *)*plVar29;
    pTVar6 = (TReferenceControllerBase<1> *)plVar29[1];
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar5 == (IBuildManifest *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar14 = (*pcVar11)();
      return (bool)uVar14;
    }
    bVar13 = FInstallerAction::IsUpdate(pFVar39);
    if (bVar13) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_408 = pIVar5;
      local_400.ReferenceController = pTVar6;
      if (&pFVar39[1].InstallManifest != (TSharedPtr<IBuildManifest,1> *)&local_408) {
        pFVar39[1].InstallManifest.Object = pIVar5;
        local_408 = (IBuildManifest *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&pFVar39[1].InstallManifest.SharedReferenceCount,&local_400);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_400.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    uVar28 = (ulonglong)local_470;
    FVar43.Data = FVar43.Data + 0x10;
  }
  DestructItems<TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>,int>
            ((TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>
              *)local_480.Data,(uint)local_478);
  uVar28 = local_478 >> 0x20;
  local_478 = local_478 & 0xffffffff00000000;
  if ((int)uVar28 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_480,0,(int *)((longlong)&local_478 + 4));
  }
  iVar17 = (this->InstallerActions).ArrayNum;
  pFVar46 = (FBuildPatchInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.ArrayNum = iVar17;
  if (iVar17 == 0) {
    local_438.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x158,8,iVar17,0,&local_438.AllocatorInstance,iVar17,&local_438.ArrayMax);
    ConstructItems<BuildPatchServices::FBuildPatchInstallerAction,BuildPatchServices::FBuildPatchInstallerAction,int>
              (local_438.AllocatorInstance.Data,pFVar46,iVar17);
  }
  pFVar30 = ::operator_new(0x108);
  pFVar31 = (FBuildPatchManifestSet *)0x0;
  if (pFVar30 != (FBuildPatchManifestSet *)0x0) {
    pFVar31 = FBuildPatchManifestSet::FBuildPatchManifestSet(pFVar30,&local_438);
  }
  DestructItems<BuildPatchServices::FBuildPatchInstallerAction,int>
            ((FBuildPatchInstallerAction *)local_438.AllocatorInstance.Data,local_438.ArrayNum);
  if ((FBuildPatchInstallerAction *)local_438.AllocatorInstance.Data !=
      (FBuildPatchInstallerAction *)0x0) {
    FMemory::Free(local_438.AllocatorInstance.Data);
  }
  pFVar30 = (FBuildPatchManifestSet *)(this->ManifestSet).Ptr;
  if ((pFVar30 != pFVar31) &&
     ((this->ManifestSet).Ptr = (IBuildManifestSet *)pFVar31,
     pFVar30 != (FBuildPatchManifestSet *)0x0)) {
    (**(code **)pFVar30->_padding_)(pFVar30,1);
  }
  local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((this->Configuration).InstallMode == StageFiles) {
    iVar17 = (this->InstallStagingDir).Data.ArrayNum;
    pFVar38 = (this->InstallStagingDir).Data.AllocatorInstance.Data;
    local_428.Data = (FScriptContainerElement *)0x0;
    local_420 = iVar17;
    if (iVar17 == 0) {
      iStack_41c = 0;
      pFVar36 = &local_428;
      bVar12 = true;
      bVar13 = false;
      local_3d0.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)(FBuildPatchManifestSet *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar17,0,&local_428,iVar17,&iStack_41c);
      memcpy(local_428.Data,pFVar38,(longlong)iVar17 * 2);
      pFVar36 = &local_428;
      bVar12 = true;
      bVar13 = false;
      local_3d0.Data.AllocatorInstance.Data = local_428.Data;
    }
  }
  else {
    local_3b8 = 0;
    pFVar36 = &local_3c0;
    bVar12 = false;
    bVar13 = true;
  }
  pFVar36->Data = (FScriptContainerElement *)0x0;
  local_3d0.Data.ArrayNum = *(int *)&pFVar36[1].Data;
  iVar17 = *(int *)((longlong)&pFVar36[1].Data + 4);
  pFVar36[1].Data = (FScriptContainerElement *)0x0;
  local_3d0.Data.ArrayMax = iVar17;
  pFVar32 = ::FString::FString(local_198,&(this->Configuration).InstallDirectory);
  local_320.Object = (this->Configuration).SharedContext.Object;
  pIVar7 = (this->ManifestSet).Ptr;
  local_320.SharedReferenceCount.ReferenceController =
       (this->Configuration).SharedContext.SharedReferenceCount.ReferenceController;
  if (local_320.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_320.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_320.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar33 = FVerifierFactory::Create
                      ((this->FileSystem).Ptr,(IVerifierStat *)(this->VerifierStatistics).Ptr,
                       (this->Configuration).VerifyMode,&local_320,pIVar7,pFVar32,&local_3d0);
  pIVar8 = (this->Verifier).Ptr;
  if ((pIVar8 != pIVar33) && ((this->Verifier).Ptr = pIVar33, pIVar8 != (IVerifier *)0x0)) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  if ((bVar13) && (local_3c0.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_3c0.Data);
  }
  if ((bVar12) && ((FBuildPatchManifestSet *)local_428.Data != (FBuildPatchManifestSet *)0x0)) {
    FMemory::Free(local_428.Data);
  }
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_450 = (this->Verifier).Ptr;
  pTVar2 = &this->Controllables;
  pFVar38 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar38 <= (FScriptContainerElement *)&local_450) &&
      ((FScriptContainerElement *)&local_450 <
       pFVar38 + (longlong)(this->Controllables).ArrayMax * 8)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar11 = (code *)swi(3);
    uVar14 = (*pcVar11)();
    return (bool)uVar14;
  }
  iVar17 = (this->Controllables).ArrayNum;
  piVar1 = &(this->Controllables).ArrayMax;
  if (iVar17 == *piVar1) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
    (this->Controllables).ArrayNum = iVar17 + 1;
  }
  else {
    (this->Controllables).ArrayNum = iVar17 + 1;
  }
  *(IVerifier **)((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_450;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar18 = (this->InstallerActions).ArrayNum;
  local_460._0_4_ = 0;
  local_468.Data = (FScriptContainerElement *)0x0;
  local_460 = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar18,&local_468,0,(int *)((longlong)&local_460 + 4));
  }
  local_470 = (this->InstallerActions).ArrayNum;
  uVar28 = (ulonglong)(int)local_470;
  pFVar38 = (this->InstallerActions).AllocatorInstance.Data;
  pFVar41 = pFVar38 + uVar28 * 0x158;
  iStack_300 = (int)local_460;
  while( true ) {
    if ((this->InstallerActions).ArrayNum != (int)uVar28) {
      local_482[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_482);
      iStack_300 = (int)local_460;
    }
    if (pFVar38 == pFVar41) break;
    pTVar6 = *(TReferenceControllerBase<1> **)(pFVar38 + 0xb0);
    uVar9 = *(undefined8 *)(pFVar38 + 0xa8);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      paVar44 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar44 = &pTVar6->SharedReferenceCount;
      LOCK();
      *paVar44 = (atomic<int>)((int)*paVar44 + 1);
      UNLOCK();
      iStack_300 = (int)local_460;
    }
    if (iStack_300 == local_460._4_4_) {
      iStack_300 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_468,(int *)((longlong)&local_460 + 4));
    }
    local_460 = CONCAT44(local_460._4_4_,iStack_300 + 1);
    *(undefined8 *)&local_468.Data[(longlong)iStack_300 * 0x10].field_0x0 = uVar9;
    *(TReferenceControllerBase<1> **)(local_468.Data + (longlong)iStack_300 * 0x10 + 8) = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar44 = (atomic<int>)((int)*paVar44 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    uVar28 = (ulonglong)local_470;
    pFVar38 = pFVar38 + 0x158;
    iStack_300 = (int)local_460;
  }
  pIVar10 = (this->ChunkDataSizeProvider).Ptr;
  pcVar11 = *(code **)((longlong)*pIVar10 + 0x18);
  local_308 = (TSharedPtr<FBuildPatchAppManifest,1> *)local_468.Data;
  if ((iStack_300 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    uVar14 = (*pcVar11)();
    return (bool)uVar14;
  }
  local_2d8 = (undefined4)local_308;
  uStack_2d4 = local_308._4_4_;
  uStack_2cc = uStack_2fc;
  iStack_2d0 = iStack_300;
  (*pcVar11)(pIVar10,&local_2d8);
  DestructItems<TSharedPtr<FBuildPatchAppManifest,1>,int>
            ((TSharedPtr<FBuildPatchAppManifest,1> *)local_468.Data,(int)local_460);
  if ((TSharedPtr<FBuildPatchAppManifest,1> *)local_468.Data !=
      (TSharedPtr<FBuildPatchAppManifest,1> *)0x0) {
    FMemory::Free(local_468.Data);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  uVar18 = (**(code **)((longlong)*(this->ManifestSet).Ptr + 0x48))();
  pIVar4 = (this->InstallerError).Ptr;
  (this->BuildStats).NumFilesInBuild = uVar18;
  (this->BuildStats).ProcessSuccess = local_488;
  puVar34 = (undefined8 *)(**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,local_2c8);
  pFVar32 = &(this->BuildStats).ErrorCode;
  if (pFVar32 != (FString *)puVar34) {
    pFVar38 = (pFVar32->Data).AllocatorInstance.Data;
    if (pFVar38 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar38);
    }
    (pFVar32->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar34;
    *puVar34 = 0;
    (this->BuildStats).ErrorCode.Data.ArrayNum = *(int *)(puVar34 + 1);
    (this->BuildStats).ErrorCode.Data.ArrayMax = *(int *)((longlong)puVar34 + 0xc);
    puVar34[1] = 0;
  }
  if (local_2c8[0] != (void *)0x0) {
    FMemory::Free(local_2c8[0]);
  }
  pIVar4 = (this->InstallerError).Ptr;
  pFVar23 = (FText *)(**(code **)((longlong)*pIVar4 + 0x30))(pIVar4,local_2b8);
  FText::operator=(&(this->BuildStats).FailureReasonText,pFVar23);
  if (local_2b8[0] != (longlong *)0x0) {
    (**(code **)(*local_2b8[0] + 0x10))();
  }
  EVar19 = (**(code **)((longlong)*(this->InstallerError).Ptr + 0x20))();
  (this->BuildStats).FailureType = EVar19;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  local_448.Data.ArrayNum = (this->Configuration).InstallDirectory.Data.ArrayNum;
  lVar20 = (longlong)local_448.Data.ArrayNum;
  pFVar38 = (this->Configuration).InstallDirectory.Data.AllocatorInstance.Data;
  local_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar18 = 0;
  if (local_448.Data.ArrayNum == 0) {
    local_448.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_448.Data.ArrayNum,0,(ForAnyElementType *)&local_448,local_448.Data.ArrayNum
               ,&local_448.Data.ArrayMax);
    memcpy(local_448.Data.AllocatorInstance.Data,pFVar38,lVar20 * 2);
  }
  FPaths::NormalizeDirectoryName(&local_448);
  FPaths::CollapseRelativeDirectories(&local_448,false);
  ::FString::PathAppend(&local_448,L"/",1);
  pIVar7 = (this->ManifestSet).Ptr;
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_f8 = (uint *)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7,local_118);
  uVar49 = local_f0;
  local_380 = 0;
  uStack_394 = 1;
  uStack_384 = local_380;
  if (local_f0 != 0) {
    puVar47 = (uint *)(local_118 + 0x10);
    if (local_f8 != (uint *)0x0) {
      puVar47 = local_f8;
    }
    uStack_394 = *puVar47;
    local_380 = 0;
    uVar18 = 0;
    while (uStack_394 == 0) {
      lVar20 = (longlong)(int)uVar18;
      local_380 = local_380 + 0x20;
      uVar18 = uVar18 + 1;
      uStack_394 = 1;
      uStack_384 = local_f0;
      if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_1431e7340;
      uStack_394 = puVar47[lVar20 + 1];
    }
    uStack_394 = -uStack_394 & uStack_394;
    uVar28 = (ulonglong)uStack_394 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_3d8 = (int)lVar20;
    uStack_384 = (int)lVar20 + -1 + local_380;
    if ((int)local_f0 < (int)uStack_384) {
      uStack_384 = local_f0;
    }
  }
LAB_1431e7340:
  local_3a0 = (longlong *)local_118;
  uStack_37c = local_16c;
  local_390 = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
  uVar40 = local_f0 & 0xffffffe0;
  iStack_378 = local_118._8_4_ - local_e4;
  uStack_388 = 0xffffffff;
  TStack_368.CurrentBitIndex = uStack_384;
  TStack_368.UnvisitedBitMask = 0xffffffff;
  TStack_368._padding_ = CONCAT44(uStack_394,uVar18);
  iVar17 = (int)local_f0 >> 5;
  TStack_368._28_4_ = local_16c;
  TStack_368.BaseBitIndex = local_380;
  uStack_348 = CONCAT44(uStack_374,iStack_378);
  bVar35 = (byte)local_f0;
  uStack_398 = uVar18;
  local_370 = local_3a0;
  TStack_368.Array = local_390;
  if (((int)local_f0 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    uVar14 = (*pcVar11)();
    return (bool)uVar14;
  }
  if (uVar49 != local_f0) {
    puVar47 = (uint *)(local_118 + 0x10);
    if (local_f8 != (uint *)0x0) {
      puVar47 = local_f8;
    }
    uVar18 = -1 << (bVar35 & 0x1f) & puVar47[iVar17];
    while (uVar18 == 0) {
      lVar20 = (longlong)iVar17;
      uVar40 = uVar40 + 0x20;
      iVar17 = iVar17 + 1;
      uVar49 = local_f0;
      if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_1431e7460;
      uVar18 = puVar47[lVar20 + 1];
    }
    uVar28 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar49 = (int)lVar20 + -1 + uVar40;
    if ((int)local_f0 < (int)uVar49) {
      uVar49 = local_f0;
    }
  }
LAB_1431e7460:
  while( true ) {
    plVar29 = local_370;
    if ((int)local_370[1] - *(int *)((longlong)local_370 + 0x34) != (int)uStack_348) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_458);
    }
    if (((TStack_368.CurrentBitIndex == uVar49) &&
        (TStack_368.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10))) &&
       (plVar29 == (longlong *)local_118)) break;
    FPaths::ConvertRelativePathToFull
              (&local_3f8,&(this->Configuration).InstallDirectory,
               (FString *)(*plVar29 + (longlong)TStack_368.CurrentBitIndex * 0x18));
    iVar17 = local_448.Data.ArrayNum + -1;
    FVar43.Data = local_448.Data.AllocatorInstance.Data;
    if (local_448.Data.ArrayNum == 0) {
      iVar17 = 0;
      FVar43.Data = (FScriptContainerElement *)L"";
    }
    bVar13 = ::FString::StartsWith(&local_3f8,(wchar_t *)FVar43.Data,iVar17,IgnoreCase);
    if (!bVar13) {
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pIVar4 = (this->InstallerError).Ptr;
      pcVar11 = *(code **)((longlong)*pIVar4 + 0x38);
      pFVar23 = FText::GetEmpty();
      local_3b0 = (pFVar23->TextData).Reference;
      if (local_3b0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3b0 + 8))(local_3b0,local_3d4);
      }
      local_3a8 = pFVar23->Flags;
      (*pcVar11)(pIVar4,9,InitializationErrorCodes::InvalidDataInManifest,0);
      local_488 = false;
    }
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    TStack_368.UnvisitedBitMask = TStack_368.UnvisitedBitMask & ~TStack_368._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_368);
  }
  LOCK();
  this->bIsInited = (FThreadSafeBool)0x1;
  UNLOCK();
  local_d0 = 0;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  DestructItems<TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>,int>
            ((TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>
              *)local_480.Data,(uint)local_478);
  if ((TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>
       *)local_480.Data !=
      (TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>
       *)0x0) {
    FMemory::Free(local_480.Data);
  }
  return local_488;
}

// IsCanceled @ 1431e7b20

bool __thiscall BuildPatchServices::FBuildPatchInstaller::IsCanceled(FBuildPatchInstaller *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EBuildPatchInstallError EVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = (this->BuildStats).FailureType;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1 == UserCanceled;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsComplete @ 1431e7b70

bool __thiscall BuildPatchServices::FBuildPatchInstaller::IsComplete(FBuildPatchInstaller *this)

{
  if ((this->bIsRunning == (FThreadSafeBool)0x0) && (this->bIsInited != (FThreadSafeBool)0x0)) {
    return true;
  }
  return false;
}

// IsPaused @ 1431e7cb0

bool __thiscall BuildPatchServices::FBuildPatchInstaller::IsPaused(FBuildPatchInstaller *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = this->bIsPaused;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsResumable @ 1431e7d90

bool __thiscall BuildPatchServices::FBuildPatchInstaller::IsResumable(FBuildPatchInstaller *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->BuildStats).FailureType == PathLengthExceeded) {
      bVar1 = false;
    }
    else {
      bVar1 = (this->BuildStats).ProcessSuccess == false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsUpdate @ 1431e7e40

bool __thiscall BuildPatchServices::FBuildPatchInstaller::IsUpdate(FBuildPatchInstaller *this)

{
  int iVar1;
  bool bVar2;
  FInstallerAction *this_00;
  FInstallerAction *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->InstallerActions).ArrayNum;
  this_00 = (FInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  pFVar3 = (FInstallerAction *)((longlong)this_00 + (longlong)iVar1 * 0x158);
  while( true ) {
    if ((this->InstallerActions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    bVar2 = FInstallerAction::IsUpdate(this_00);
    if (bVar2) {
      return true;
    }
    this_00 = (FInstallerAction *)&this_00[2].InstallTags.Elements.field_0x8;
  }
  return false;
}

// PreExit @ 1431ec200

void __thiscall BuildPatchServices::FBuildPatchInstaller::PreExit(FBuildPatchInstaller *this)

{
  IInstallerError *pIVar1;
  code *pcVar2;
  IBuildInstallerSharedContext *pIVar3;
  IInstallerAnalytics *pIVar4;
  bool bVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  ITextData *local_18;
  uint local_10;
  
  if (this->bIsRunning != (FThreadSafeBool)0x0) {
    pIVar1 = (this->InstallerError).Ptr;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x38);
    pFVar6 = FText::GetEmpty();
    local_18 = (pFVar6->TextData).Reference;
    if (local_18 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18 + 8))(local_18,local_res8);
    }
    local_10 = pFVar6->Flags;
    (*pcVar2)(pIVar1,5,ApplicationClosedErrorCodes::ApplicationClosed,0,&local_18);
  }
  if ((this->Configuration).SharedContext.Object == (IBuildInstallerSharedContext *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar3 = (this->Configuration).SharedContext.Object;
  (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,this->Thread);
  pIVar4 = (this->InstallerAnalytics).Ptr;
  this->Thread = (IBuildInstallerThread *)0x0;
  if (pIVar4 != (IInstallerAnalytics *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431ec2e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar4 + 0x38))();
    return;
  }
  return;
}

// PumpMessages @ 1431ec3c0

void __thiscall BuildPatchServices::FBuildPatchInstaller::PumpMessages(FBuildPatchInstaller *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchInstaller.cpp"
                       ,0x8e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ec407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->MessagePump).Ptr + 0x28))();
  return;
}

// RegisterMessageHandler @ 1431ec910

void __thiscall
BuildPatchServices::FBuildPatchInstaller::RegisterMessageHandler
          (FBuildPatchInstaller *this,FMessageHandler *param_1)

{
  IMessagePump *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchInstaller.cpp"
                       ,0x8bc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 == (FMessageHandler *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MessageHandler != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchInstaller.cpp"
                       ,0x8bd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->MessagePump).Ptr;
                    /* WARNING: Could not recover jumptable at 0x0001431ec991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1);
  return;
}

// RelocateFileWithRetries @ 1431eff60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::RelocateFileWithRetries
          (FBuildPatchInstaller *this,FString *param_1,FString *param_2,uint *param_3,uint *param_4)

{
  IFileSystem *pIVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  
  iVar4 = ConfigHelpers::NumFileMoveRetries();
  cVar3 = '\0';
  *param_3 = 0;
  *param_4 = 0;
  fVar2 = __real_3f000000;
  if (iVar4 < 0) {
LAB_1431f00c7:
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
  }
  else {
    while (cVar3 == '\0') {
      pIVar1 = (this->FileSystem).Ptr;
      if ((param_2->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      if ((param_1->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      cVar3 = (**(code **)((longlong)*pIVar1 + 0x70))(pIVar1,pwVar6,pwVar7);
      DVar5 = FWindowsPlatformMisc::GetLastError();
      *param_3 = DVar5;
      if (cVar3 != '\0') {
        return (bool)cVar3;
      }
      if (2 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pIVar1 = (this->FileSystem).Ptr;
      if ((param_2->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      if ((param_1->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      cVar3 = (**(code **)((longlong)*pIVar1 + 0x78))(pIVar1,pwVar6,pwVar7);
      DVar5 = FWindowsPlatformMisc::GetLastError();
      *param_4 = DVar5;
      if (cVar3 == '\0') {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) goto LAB_1431f00c7;
        if (2 < (byte)LogBuildPatchServices._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        }
        FWindowsPlatformProcess::Sleep(fVar2);
      }
      else {
        pIVar1 = (this->FileSystem).Ptr;
        if ((param_2->Data).ArrayNum == 0) {
          (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,L"");
        }
        else {
          (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,(param_2->Data).AllocatorInstance.Data);
        }
      }
    }
  }
  return (bool)cVar3;
}

// RemoveFileWithRetries @ 1431f0530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::RemoveFileWithRetries
          (FBuildPatchInstaller *this,FString *param_1,uint *param_2)

{
  IFileSystem *pIVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  wchar_t *pwVar6;
  
  iVar4 = ConfigHelpers::NumFileMoveRetries();
  *param_2 = 0;
  fVar2 = __real_3f000000;
  if (-1 < iVar4) {
    while( true ) {
      pIVar1 = (this->FileSystem).Ptr;
      if ((param_1->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      cVar3 = (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,pwVar6);
      DVar5 = FWindowsPlatformMisc::GetLastError();
      *param_2 = DVar5;
      if (cVar3 != '\0') {
        return (bool)cVar3;
      }
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) break;
      if (2 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      FWindowsPlatformProcess::Sleep(fVar2);
    }
  }
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// Run @ 1431f29a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall BuildPatchServices::FBuildPatchInstaller::Run(FBuildPatchInstaller *this)

{
  ulong64 *puVar1;
  int *piVar2;
  bool *pbVar3;
  int *piVar4;
  EBuildPatchInstallError *pEVar5;
  bool *this_00;
  bool *pbVar6;
  int *piVar7;
  byte bVar8;
  IInstallerAnalytics *pIVar9;
  undefined8 uVar10;
  IPlatform *pIVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  void *pvVar25;
  longlong lVar26;
  IFileAttribution *pIVar27;
  IFileManager *pIVar28;
  int *piVar29;
  IMachineConfig *pIVar30;
  IPrerequisites *pIVar31;
  ulong64 uVar32;
  undefined8 *puVar33;
  FText *pFVar34;
  ulonglong uVar35;
  wchar_t *pwVar36;
  longlong *plVar37;
  longlong lVar38;
  longlong lVar39;
  char *pcVar40;
  bool bVar41;
  double dVar42;
  bool local_res8;
  undefined1 local_res20 [8];
  int *in_stack_fffffffffffffe08;
  int local_1c4;
  uint local_1c0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1b8;
  char *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  ulong64 local_148;
  TArray<FString,TSizedDefaultAllocator<32>_> local_140;
  void *local_130;
  undefined8 local_128;
  undefined1 *local_120;
  FScopedControllables local_118;
  void *local_e8 [2];
  void *local_d8 [2];
  longlong *local_c8 [2];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_b8;
  
  bVar41 = -1 < CpuChannel->Enabled;
  if (bVar41) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId812,"BuildPatchInstaller::Run",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchInstaller.cpp"
               ,0x32c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId812);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&SingletonFunctionLockCS,4000);
    atexit(`BuildPatchServices::FBuildPatchInstaller::Run'::__l2::
           _dynamic_atexit_destructor_for__SingletonFunctionLockCS__);
    _Init_thread_footer(&::_TSS0);
  }
  local_120 = &(this->CompleteDelegate).field_0x10;
  bVar8 = *(byte *)((longlong)&(this->Configuration).VerifyMode + 1);
  if (bVar8 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&SingletonFunctionLockCS);
  }
  pbVar3 = &(this->ProcessActiveTimer).bIsRunning;
  LOCK();
  *(undefined4 *)((longlong)(this->ThreadLock).CriticalSection.Opaque3 + 0x14) = 1;
  UNLOCK();
  EnterCriticalSection((LPCRITICAL_SECTION)pbVar3);
  if (((char)(this->ProcessExecuteTimer).Cycles == '\0') &&
     (cVar20 = *(char *)((longlong)&(this->ProcessExecuteTimer).Cycles + 1),
     *(undefined1 *)&(this->ProcessExecuteTimer).Cycles = 1, cVar20 == '\0')) {
    pvVar25 = (void *)FStatsCollector::GetCycles();
    (this->ProcessExecuteTimer).ThreadLock.CriticalSection.Opaque3[2] = pvVar25;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pbVar3);
  pbVar3 = &(this->ProcessPausedTimer).bIsRunning;
  EnterCriticalSection((LPCRITICAL_SECTION)pbVar3);
  if (((char)(this->ProcessActiveTimer).Cycles == '\0') &&
     (cVar20 = *(char *)((longlong)&(this->ProcessActiveTimer).Cycles + 1),
     *(undefined1 *)&(this->ProcessActiveTimer).Cycles = 1, cVar20 == '\0')) {
    pvVar25 = (void *)FStatsCollector::GetCycles();
    (this->ProcessActiveTimer).ThreadLock.CriticalSection.Opaque3[2] = pvVar25;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pbVar3);
  uVar24 = __real_3f800000;
  local_150 = 0x3f800000;
  local_14c = 0;
  (**(code **)((this->BuildStats).ProcessAvailableDiskSpace + 0x18))
            (&(this->BuildStats).ProcessAvailableDiskSpace,&local_14c,&local_150);
  uVar22 = *(uint *)&(this->InstallerActions).AllocatorInstance.Data;
  uVar35 = (ulonglong)(int)uVar22;
  lVar39 = *(longlong *)&(this->Configuration).bConstructFilesInMemory;
  lVar38 = uVar35 * 0x158 + lVar39;
  while( true ) {
    if (*(int *)&(this->InstallerActions).AllocatorInstance.Data != (int)uVar35) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    if (lVar39 == lVar38) {
      bVar17 = false;
      goto LAB_1431f2ba9;
    }
    plVar37 = (longlong *)(lVar39 + 0xa8);
    if ((*plVar37 == 0) &&
       (plVar37 = (longlong *)(lVar39 + 0x98), *(longlong *)(lVar39 + 0x98) == 0)) {
      plVar37 = (longlong *)(lVar39 + 0x98);
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L"");
      if (bVar17) {
        pcVar13 = (code *)swi(3);
        uVar22 = (*pcVar13)();
        return uVar22;
      }
    }
    lVar26 = (**(code **)(*(longlong *)*plVar37 + 0x40))();
    if (1 < *(int *)(lVar26 + 8)) break;
    uVar35 = (ulonglong)uVar22;
    lVar39 = lVar39 + 0x158;
  }
  bVar17 = true;
LAB_1431f2ba9:
  if (((char)(this->Configuration).VerifyMode == ShaVerifyAllFiles) || (!bVar17)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
    uVar24 = 0;
  }
  local_19c = 9;
  local_1a0 = uVar24;
  (**(code **)((this->BuildStats).ProcessAvailableDiskSpace + 0x18))
            (&(this->BuildStats).ProcessAvailableDiskSpace,&local_19c);
  piVar4 = &(this->Controllables).ArrayNum;
  EnterCriticalSection((LPCRITICAL_SECTION)piVar4);
  if (((char)(this->InitializeTimer).Cycles == '\0') &&
     (*(undefined1 *)&(this->InitializeTimer).Cycles = 1,
     *(char *)((longlong)&(this->InitializeTimer).Cycles + 1) == '\0')) {
    pvVar25 = (void *)FStatsCollector::GetCycles();
    (this->InitializeTimer).ThreadLock.CriticalSection.Opaque3[2] = pvVar25;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)piVar4);
  local_res8 = Initialize((FBuildPatchInstaller *)&this[-1].CachedVerifyErrorCounts.field_0x48);
  local_148 = 0;
  if (local_res8) {
    if (*(char *)((longlong)&(this->Configuration).ChunkDatabaseFiles.ArrayNum + 1) == '\0') {
      bVar19 = false;
      local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_res8 = false;
      bVar18 = true;
      local_1b8.ArrayNum = 0;
      local_1b8.ArrayMax = 0;
      local_1c0 = ConfigHelpers::NumInstallerRetries();
      uVar14 = _UNK_150631d98;
      uVar12 = ___xmm_00000000ffffffff0000008000000000;
      pcVar40 = (char *)((longlong)&(this->Configuration).ConstructorDisableResumeBelowMB.TypedValue
                        + 1);
      do {
        local_1a8 = pcVar40;
        bVar16 = local_res8;
        if (!bVar18) break;
        pIVar9 = (this->InstallerAnalytics).Ptr;
        (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9,(this->MessagePump).Ptr);
        bVar18 = RunInstallation((FBuildPatchInstaller *)
                                 &this[-1].CachedVerifyErrorCounts.field_0x48,&local_1b8);
        if ((bVar18) &&
           (bVar18 = RunBackupAndMove((FBuildPatchInstaller *)
                                      &this[-1].CachedVerifyErrorCounts.field_0x48), bVar18)) {
          if (*pcVar40 == '\0') {
            in_stack_fffffffffffffe08 = &(this->DataStagingDir).Data.ArrayNum;
            local_130 = (void *)0x0;
            local_128 = 0;
            if ((this->Configuration).CloudDirectories.ArrayNum != 0) {
              in_stack_fffffffffffffe08 = (int *)&local_130;
            }
            pbVar3 = &(this->MoveFromStageTimer).bIsRunning;
            EnterCriticalSection((LPCRITICAL_SECTION)pbVar3);
            if (((char)(this->FileAttributesTimer).Cycles == '\0') &&
               (*(undefined1 *)&(this->FileAttributesTimer).Cycles = 1,
               *(char *)((longlong)&(this->FileAttributesTimer).Cycles + 1) == '\0')) {
              pvVar25 = (void *)FStatsCollector::GetCycles();
              (this->FileAttributesTimer).ThreadLock.CriticalSection.Opaque3[2] = pvVar25;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pbVar3);
            local_b8.Elements._0_8_ = 0;
            local_b8.Elements._8_8_ = 0;
            local_b8.Elements._32_8_ = 0;
            local_b8.Elements._40_8_ = uVar12;
            local_b8.Elements._48_8_ = uVar14;
            local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_b8.HashSize = 0;
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                      (&local_b8,
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                       &(this->OutdatedFiles).HashSize);
            pIVar27 = FFileAttributionFactory::Create
                                ((IFileSystem *)(this->HttpManager).Ptr,
                                 (IBuildManifestSet *)(this->MessagePump).Ptr,&local_b8,
                                 (FString *)
                                 &(this->Configuration).SharedContext.SharedReferenceCount,
                                 (FString *)in_stack_fffffffffffffe08,
                                 (FBuildPatchProgress *)
                                 &(this->BuildStats).ProcessAvailableDiskSpace);
            local_118.SyncObject =
                 (FWindowsRecursiveMutex *)&(this->PreviousMoveMarker).Data.ArrayNum;
            local_118.RegisteredArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_118.RegistrationArray =
                 (TArray<BuildPatchServices::IControllable_*,TSizedDefaultAllocator<32>_> *)
                 &this->Verifier;
            local_118.RegisteredArray.ArrayNum = 0;
            local_118.RegisteredArray.ArrayMax = 0;
            local_118.bIsPaused =
                 (bool *)((this->BuildProgress).ThreadLock.CriticalSection.Opaque3 + 2);
            local_118.bShouldAbort =
                 (bool *)((longlong)(this->BuildProgress).ThreadLock.CriticalSection.Opaque3 + 0x11)
            ;
            FScopedControllables::Register(&local_118,(IControllable *)pIVar27);
            (**(code **)((longlong)*pIVar27 + 0x18))(pIVar27);
            EnterCriticalSection((LPCRITICAL_SECTION)pbVar3);
            if (((char)(this->FileAttributesTimer).Cycles != '\0') &&
               (*(undefined1 *)&(this->FileAttributesTimer).Cycles = 0,
               *(char *)((longlong)&(this->FileAttributesTimer).Cycles + 1) == '\0')) {
              pvVar25 = (this->FileAttributesTimer).ThreadLock.CriticalSection.Opaque3[2];
              uVar32 = FStatsCollector::GetCycles();
              puVar1 = &(this->FileAttributesTimer).StartCycles;
              *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pbVar3);
            FScopedControllables::~FScopedControllables(&local_118);
            if (pIVar27 != (IFileAttribution *)0x0) {
              (**(code **)*pIVar27)(pIVar27,1);
            }
            pcVar40 = local_1a8;
            if (local_130 != (void *)0x0) {
              FMemory::Free(local_130);
              pcVar40 = local_1a8;
            }
          }
          bVar18 = true;
        }
        else {
          bVar18 = false;
        }
        DestructItems<FString,int>((FString *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
        iVar23 = local_1b8.ArrayMax;
        local_1b8._8_8_ = local_1b8._8_8_ & 0xffffffff00000000;
        if (iVar23 != 0) {
          in_stack_fffffffffffffe08 =
               (int *)((ulonglong)in_stack_fffffffffffffe08 & 0xffffffff00000000);
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_1b8.AllocatorInstance,0,&local_1b8.ArrayMax);
        }
        if ((bVar18) &&
           (bVar19 = RunVerification((FBuildPatchInstaller *)
                                     &this[-1].CachedVerifyErrorCounts.field_0x48,&local_1b8),
           bVar19)) {
          bVar19 = true;
          local_res8 = true;
LAB_1431f2f21:
          if (*pcVar40 == '\0') {
            pbVar3 = &(this->VerifyTimer).bIsRunning;
            EnterCriticalSection((LPCRITICAL_SECTION)pbVar3);
            if (((char)(this->CleanUpTimer).Cycles == '\0') &&
               (*(undefined1 *)&(this->CleanUpTimer).Cycles = 1,
               *(char *)((longlong)&(this->CleanUpTimer).Cycles + 1) == '\0')) {
              pvVar25 = (void *)FStatsCollector::GetCycles();
              (this->CleanUpTimer).ThreadLock.CriticalSection.Opaque3[2] = pvVar25;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pbVar3);
            if ((this->Configuration).CloudDirectories.ArrayNum == 0) {
              if (4 < (byte)LogBuildPatchServices._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
              }
              pIVar28 = IFileManager::Get();
              if (*(int *)&(this->DataStagingDir).Data.AllocatorInstance.Data == 0) {
                (**(code **)((longlong)*pIVar28 + 0x68))(pIVar28,L"",0,1);
              }
              else {
                uVar10._0_4_ = (this->InstallerActions).ArrayNum;
                uVar10._4_4_ = (this->InstallerActions).ArrayMax;
                (**(code **)((longlong)*pIVar28 + 0x68))(pIVar28,uVar10,0,1);
              }
            }
            else {
              if (4 < (byte)LogBuildPatchServices._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
              }
              pIVar28 = IFileManager::Get();
              if (*(int *)&(this->Configuration).StagingDirectory.Data.AllocatorInstance.Data == 0)
              {
                pwVar36 = L"";
              }
              else {
                pwVar36 = *(wchar_t **)&(this->Configuration).InstallDirectory.Data.ArrayNum;
              }
              (**(code **)((longlong)*pIVar28 + 0x68))(pIVar28,pwVar36,0,1);
              CleanupEmptyDirectories
                        ((FBuildPatchInstaller *)&this[-1].CachedVerifyErrorCounts.field_0x48,
                         (FString *)&(this->Configuration).SharedContext.SharedReferenceCount);
            }
            EnterCriticalSection((LPCRITICAL_SECTION)pbVar3);
            if (((char)(this->CleanUpTimer).Cycles != '\0') &&
               (*(undefined1 *)&(this->CleanUpTimer).Cycles = 0,
               *(char *)((longlong)&(this->CleanUpTimer).Cycles + 1) == '\0')) {
              pvVar25 = (this->CleanUpTimer).ThreadLock.CriticalSection.Opaque3[2];
              uVar32 = FStatsCollector::GetCycles();
              puVar1 = &(this->CleanUpTimer).StartCycles;
              *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pbVar3);
          }
        }
        else {
          bVar19 = false;
          local_res8 = false;
          if (bVar18) goto LAB_1431f2f21;
        }
        local_198 = 0x3f800000;
        local_194 = 8;
        (**(code **)((this->BuildStats).ProcessAvailableDiskSpace + 0x18))
                  (&(this->BuildStats).ProcessAvailableDiskSpace,&local_194);
        local_1c0 = local_1c0 - 1;
        if ((((int)local_1c0 < 1) ||
            (cVar20 = (**(code **)((longlong)*(this->Platform).Ptr + 0x10))(), cVar20 != '\0')) ||
           (cVar20 = (**(code **)((longlong)*(this->Platform).Ptr + 0x18))(), cVar20 == '\0')) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        if ((bVar19 == false) && (bVar18)) {
          bVar16 = true;
        }
        else {
          bVar16 = false;
        }
        if ((*local_1a8 == '\0') && ((bVar19 != false || (bVar18)))) {
          if (4 < (byte)LogBuildPatchServices._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          }
          pIVar28 = IFileManager::Get();
          if (*(int *)&(this->PreviousMoveMarker).Data.AllocatorInstance.Data == 0) {
            pwVar36 = L"";
          }
          else {
            pwVar36 = *(wchar_t **)&(this->MetaStagingDir).Data.ArrayNum;
          }
          in_stack_fffffffffffffe08 =
               (int *)((ulonglong)in_stack_fffffffffffffe08 & 0xffffffffffffff00);
          (**(code **)((longlong)*pIVar28 + 0x38))(pIVar28,pwVar36,0,1,in_stack_fffffffffffffe08);
        }
        LOCK();
        this->bIsRunning = (FThreadSafeBool)0x0;
        UNLOCK();
        uVar22 = (**(code **)((this->BuildStats).ProcessAvailableDiskSpace + 0x38))
                           (&(this->BuildStats).ProcessAvailableDiskSpace);
        piVar4 = &(this->PreviousMoveMarker).Data.ArrayNum;
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)piVar4);
        iVar23 = ConfigHelpers::NumInstallerRetries();
        (this->BuildStats).FailureReasonText.Flags = uVar22;
        (this->BuildStats).ProcessExecuteTime = (float)(iVar23 + ~local_1c0);
        if (bVar16) {
          pEVar5 = &(this->BuildStats).FailureType;
          local_1c4 = (**(code **)((longlong)*(this->Platform).Ptr + 0x20))();
          if ((*(int **)pEVar5 <= &local_1c4) &&
             (&local_1c4 <
              *(int **)pEVar5 +
              *(int *)((longlong)&(this->BuildStats).RetryFailureTypes.AllocatorInstance.Data + 4)))
          {
            in_stack_fffffffffffffe08 = &local_1c4;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar19) {
              pcVar13 = (code *)swi(3);
              uVar22 = (*pcVar13)();
              return uVar22;
            }
          }
          iVar23 = *(int *)&(this->BuildStats).RetryFailureTypes.AllocatorInstance.Data;
          piVar7 = (int *)((longlong)&(this->BuildStats).RetryFailureTypes.AllocatorInstance.Data +
                          4);
          if (iVar23 == *piVar7) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pEVar5,piVar7);
          }
          piVar7 = &(this->BuildStats).ErrorCode.Data.ArrayNum;
          *(int *)&(this->BuildStats).RetryFailureTypes.AllocatorInstance.Data = iVar23 + 1;
          *(int *)(*(longlong *)pEVar5 + (longlong)iVar23 * 4) = local_1c4;
          pIVar11 = (this->Platform).Ptr;
          piVar29 = (int *)(**(code **)((longlong)*pIVar11 + 0x28))(pIVar11,local_e8);
          if (((*(undefined8 **)piVar7 <= piVar29) &&
              (piVar29 < *(undefined8 **)piVar7 +
                         (longlong)
                         *(int *)((longlong)
                                  &(this->BuildStats).RetryErrorCodes.AllocatorInstance.Data + 4) *
                         2)) &&
             (in_stack_fffffffffffffe08 = piVar29,
             bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar19)) {
            pcVar13 = (code *)swi(3);
            uVar22 = (*pcVar13)();
            return uVar22;
          }
          iVar23 = *(int *)&(this->BuildStats).RetryErrorCodes.AllocatorInstance.Data;
          piVar2 = (int *)((longlong)&(this->BuildStats).RetryErrorCodes.AllocatorInstance.Data + 4)
          ;
          if (iVar23 == *piVar2) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)piVar7,piVar2);
          }
          lVar38 = (longlong)iVar23;
          *(int *)&(this->BuildStats).RetryErrorCodes.AllocatorInstance.Data = iVar23 + 1;
          lVar39 = *(longlong *)piVar7;
          *(undefined8 *)(lVar39 + lVar38 * 0x10) = 0;
          *(undefined8 *)(lVar39 + lVar38 * 0x10) = *(undefined8 *)piVar29;
          *(undefined8 *)piVar29 = 0;
          *(int *)(lVar39 + lVar38 * 0x10 + 8) = piVar29[2];
          *(int *)(lVar39 + lVar38 * 0x10 + 0xc) = piVar29[3];
          *(undefined8 *)(piVar29 + 2) = 0;
          if (local_e8[0] != (void *)0x0) {
            FMemory::Free(local_e8[0]);
          }
          *(undefined1 *)((longlong)(this->BuildProgress).ThreadLock.CriticalSection.Opaque3 + 0x11)
               = 0;
          bVar19 = local_res8;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)piVar4);
        if (bVar16) {
          EnterCriticalSection((LPCRITICAL_SECTION)&(this->Controllables).ArrayNum);
          if (((char)(this->InitializeTimer).Cycles == '\0') &&
             (*(undefined1 *)&(this->InitializeTimer).Cycles = 1,
             *(char *)((longlong)&(this->InitializeTimer).Cycles + 1) == '\0')) {
            pvVar25 = (void *)FStatsCollector::GetCycles();
            (this->InitializeTimer).ThreadLock.CriticalSection.Opaque3[2] = pvVar25;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&(this->Controllables).ArrayNum);
          puVar1 = &(this->BuildStats).ProcessAvailableDiskSpace;
          (**(code **)(*puVar1 + 0x70))(puVar1);
          local_190 = 0;
          local_18c = 1;
          (**(code **)(*puVar1 + 0x18))(puVar1,&local_18c,&local_190);
          local_188 = 0;
          local_184 = 2;
          (**(code **)(*puVar1 + 0x18))(puVar1,&local_184,&local_188);
          local_180 = 0;
          local_17c = 3;
          (**(code **)(*puVar1 + 0x18))(puVar1,&local_17c,&local_180);
          local_178 = 0;
          local_174 = 4;
          (**(code **)(*puVar1 + 0x18))(puVar1,&local_174,&local_178);
          local_170 = 0;
          local_16c = 5;
          (**(code **)(*puVar1 + 0x18))(puVar1,&local_16c,&local_170);
          local_168 = 0;
          local_164 = 6;
          (**(code **)(*puVar1 + 0x18))(puVar1,&local_164,&local_168);
          local_160 = 0;
          local_15c = 7;
          (**(code **)(*puVar1 + 0x18))(puVar1,&local_15c,&local_160);
          local_158 = 0;
          local_154 = 8;
          (**(code **)(*puVar1 + 0x18))(puVar1,&local_154);
        }
        pcVar40 = local_1a8;
        bVar16 = bVar19;
      } while (bVar19 == false);
      local_res8 = bVar16;
      DestructItems<FString,int>((FString *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
      if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.AllocatorInstance.Data);
      }
      if ((bVar19 != false) && (bVar17)) {
        pbVar3 = &(this->CleanUpTimer).bIsRunning;
        EnterCriticalSection((LPCRITICAL_SECTION)pbVar3);
        if (((char)(this->PrereqTimer).Cycles == '\0') &&
           (*(undefined1 *)&(this->PrereqTimer).Cycles = 1,
           *(char *)((longlong)&(this->PrereqTimer).Cycles + 1) == '\0')) {
          pvVar25 = (void *)FStatsCollector::GetCycles();
          (this->PrereqTimer).ThreadLock.CriticalSection.Opaque3[2] = pvVar25;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pbVar3);
        pIVar30 = FMachineConfigFactory::Create
                            ((FString *)&(this->InstallationInfo).field_0x48,true);
        pIVar31 = FPrerequisitesFactory::Create
                            (pIVar30,(IInstallerAnalytics *)
                                     (this->Analytics).SharedReferenceCount.ReferenceController,
                             (IInstallerError *)(this->Platform).Ptr,
                             (IFileSystem *)(this->HttpManager).Ptr,
                             (IPlatform *)(this->FileSystem).Ptr);
        bVar21 = (**(code **)((longlong)*pIVar31 + 8))
                           (pIVar31,(this->MessagePump).Ptr,local_120,
                            &(this->DataStagingDir).Data.ArrayNum,
                            &(this->BuildStats).ProcessAvailableDiskSpace);
        if (pIVar31 != (IPrerequisites *)0x0) {
          (**(code **)*pIVar31)(pIVar31,1);
        }
        if (pIVar30 != (IMachineConfig *)0x0) {
          (**(code **)*pIVar30)(pIVar30,1);
        }
        local_res8 = (bool)(local_res8 & bVar21);
        EnterCriticalSection((LPCRITICAL_SECTION)pbVar3);
        if (((char)(this->PrereqTimer).Cycles != '\0') &&
           (*(undefined1 *)&(this->PrereqTimer).Cycles = 0,
           *(char *)((longlong)&(this->PrereqTimer).Cycles + 1) == '\0')) {
          pvVar25 = (this->PrereqTimer).ThreadLock.CriticalSection.Opaque3[2];
          uVar32 = FStatsCollector::GetCycles();
          puVar1 = &(this->PrereqTimer).StartCycles;
          *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pbVar3);
      }
    }
    else {
      local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ArrayNum = 0;
      local_140.ArrayMax = 0;
      local_148 = DetermineInstallMaxDiskSizeIfDeletingChunkDbs
                            ((TArray<FString,TSizedDefaultAllocator<32>_> *)
                             &(this->Configuration).BackupDirectory.Data.ArrayNum,
                             (IBuildManifestSet *)(this->MessagePump).Ptr,
                             (IFileSystem *)(this->HttpManager).Ptr,
                             (FString *)&(this->Configuration).SharedContext.SharedReferenceCount,
                             &local_140,(this->Configuration).CloudDirectories.ArrayNum == 3);
      FVar15.Data = local_140.AllocatorInstance.Data;
      DestructItems<FString,int>((FString *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
      }
    }
  }
  piVar4 = &(this->Controllables).ArrayNum;
  EnterCriticalSection((LPCRITICAL_SECTION)piVar4);
  if (((char)(this->InitializeTimer).Cycles != '\0') &&
     (*(undefined1 *)&(this->InitializeTimer).Cycles = 0,
     *(char *)((longlong)&(this->InitializeTimer).Cycles + 1) == '\0')) {
    pvVar25 = (this->InitializeTimer).ThreadLock.CriticalSection.Opaque3[2];
    uVar32 = FStatsCollector::GetCycles();
    puVar1 = &(this->InitializeTimer).StartCycles;
    *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)piVar4);
  pbVar3 = &(this->InitializeTimer).bIsRunning;
  EnterCriticalSection((LPCRITICAL_SECTION)pbVar3);
  if (((char)(this->ConstructTimer).Cycles != '\0') &&
     (*(undefined1 *)&(this->ConstructTimer).Cycles = 0,
     *(char *)((longlong)&(this->ConstructTimer).Cycles + 1) == '\0')) {
    pvVar25 = (this->ConstructTimer).ThreadLock.CriticalSection.Opaque3[2];
    uVar32 = FStatsCollector::GetCycles();
    puVar1 = &(this->ConstructTimer).StartCycles;
    *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pbVar3);
  pbVar3 = &(this->ConstructTimer).bIsRunning;
  EnterCriticalSection((LPCRITICAL_SECTION)pbVar3);
  if (((char)(this->MoveFromStageTimer).Cycles != '\0') &&
     (*(undefined1 *)&(this->MoveFromStageTimer).Cycles = 0,
     *(char *)((longlong)&(this->MoveFromStageTimer).Cycles + 1) == '\0')) {
    pvVar25 = (this->MoveFromStageTimer).ThreadLock.CriticalSection.Opaque3[2];
    uVar32 = FStatsCollector::GetCycles();
    puVar1 = &(this->MoveFromStageTimer).StartCycles;
    *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pbVar3);
  this_00 = &(this->MoveFromStageTimer).bIsRunning;
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  if (((char)(this->FileAttributesTimer).Cycles != '\0') &&
     (*(undefined1 *)&(this->FileAttributesTimer).Cycles = 0,
     *(char *)((longlong)&(this->FileAttributesTimer).Cycles + 1) == '\0')) {
    pvVar25 = (this->FileAttributesTimer).ThreadLock.CriticalSection.Opaque3[2];
    uVar32 = FStatsCollector::GetCycles();
    puVar1 = &(this->FileAttributesTimer).StartCycles;
    *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  pbVar6 = &(this->FileAttributesTimer).bIsRunning;
  EnterCriticalSection((LPCRITICAL_SECTION)pbVar6);
  if (((char)(this->VerifyTimer).Cycles != '\0') &&
     (*(undefined1 *)&(this->VerifyTimer).Cycles = 0,
     *(char *)((longlong)&(this->VerifyTimer).Cycles + 1) == '\0')) {
    pvVar25 = (this->VerifyTimer).ThreadLock.CriticalSection.Opaque3[2];
    uVar32 = FStatsCollector::GetCycles();
    puVar1 = &(this->VerifyTimer).StartCycles;
    *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pbVar6);
  pbVar6 = &(this->VerifyTimer).bIsRunning;
  EnterCriticalSection((LPCRITICAL_SECTION)pbVar6);
  if (((char)(this->CleanUpTimer).Cycles != '\0') &&
     (*(undefined1 *)&(this->CleanUpTimer).Cycles = 0,
     *(char *)((longlong)&(this->CleanUpTimer).Cycles + 1) == '\0')) {
    pvVar25 = (this->CleanUpTimer).ThreadLock.CriticalSection.Opaque3[2];
    uVar32 = FStatsCollector::GetCycles();
    puVar1 = &(this->CleanUpTimer).StartCycles;
    *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pbVar6);
  pbVar6 = &(this->CleanUpTimer).bIsRunning;
  EnterCriticalSection((LPCRITICAL_SECTION)pbVar6);
  if (((char)(this->PrereqTimer).Cycles != '\0') &&
     (*(undefined1 *)&(this->PrereqTimer).Cycles = 0,
     *(char *)((longlong)&(this->PrereqTimer).Cycles + 1) == '\0')) {
    pvVar25 = (this->PrereqTimer).ThreadLock.CriticalSection.Opaque3[2];
    uVar32 = FStatsCollector::GetCycles();
    puVar1 = &(this->PrereqTimer).StartCycles;
    *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pbVar6);
  pbVar6 = &(this->PrereqTimer).bIsRunning;
  EnterCriticalSection((LPCRITICAL_SECTION)pbVar6);
  if (((char)(this->ProcessPausedTimer).Cycles != '\0') &&
     (*(undefined1 *)&(this->ProcessPausedTimer).Cycles = 0,
     *(char *)((longlong)&(this->ProcessPausedTimer).Cycles + 1) == '\0')) {
    pvVar25 = (this->ProcessPausedTimer).ThreadLock.CriticalSection.Opaque3[2];
    uVar32 = FStatsCollector::GetCycles();
    puVar1 = &(this->ProcessPausedTimer).StartCycles;
    *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pbVar6);
  EnterCriticalSection((LPCRITICAL_SECTION)&(this->ProcessPausedTimer).bIsRunning);
  if (((char)(this->ProcessActiveTimer).Cycles != '\0') &&
     (*(undefined1 *)&(this->ProcessActiveTimer).Cycles = 0,
     *(char *)((longlong)&(this->ProcessActiveTimer).Cycles + 1) == '\0')) {
    pvVar25 = (this->ProcessActiveTimer).ThreadLock.CriticalSection.Opaque3[2];
    uVar32 = FStatsCollector::GetCycles();
    puVar1 = &(this->ProcessActiveTimer).StartCycles;
    *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&(this->ProcessPausedTimer).bIsRunning);
  EnterCriticalSection((LPCRITICAL_SECTION)&(this->ProcessActiveTimer).bIsRunning);
  if (((char)(this->ProcessExecuteTimer).Cycles != '\0') &&
     (*(undefined1 *)&(this->ProcessExecuteTimer).Cycles = 0,
     *(char *)((longlong)&(this->ProcessExecuteTimer).Cycles + 1) == '\0')) {
    pvVar25 = (this->ProcessExecuteTimer).ThreadLock.CriticalSection.Opaque3[2];
    uVar32 = FStatsCollector::GetCycles();
    puVar1 = &(this->ProcessExecuteTimer).StartCycles;
    *puVar1 = *puVar1 + (uVar32 - (longlong)pvVar25);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&(this->ProcessActiveTimer).bIsRunning);
  piVar4 = &(this->PreviousMoveMarker).Data.ArrayNum;
  LOCK();
  *(uint *)((this->ThreadLock).CriticalSection.Opaque3 + 2) = (uint)(local_res8 != false);
  UNLOCK();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)piVar4);
  dVar42 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds
                     ((TProcessTimer<BuildPatchServices::FStatsCollector,1> *)
                      &(this->Controllables).ArrayNum);
  *(float *)&(this->BuildStats).MaxDiskSpaceNeededWhenDeletingChunkDbsIfRequested = (float)dVar42;
  dVar42 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds
                     ((TProcessTimer<BuildPatchServices::FStatsCollector,1> *)
                      &(this->InitializeTimer).bIsRunning);
  *(float *)((longlong)&(this->BuildStats).MaxDiskSpaceNeededWhenDeletingChunkDbsIfRequested + 4) =
       (float)dVar42;
  dVar42 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds
                     ((TProcessTimer<BuildPatchServices::FStatsCollector,1> *)pbVar3);
  (this->BuildStats).InitializeTime = (float)dVar42;
  dVar42 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds
                     ((TProcessTimer<BuildPatchServices::FStatsCollector,1> *)this_00);
  (this->BuildStats).ConstructTime = (float)dVar42;
  dVar42 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds
                     ((TProcessTimer<BuildPatchServices::FStatsCollector,1> *)
                      &(this->FileAttributesTimer).bIsRunning);
  (this->BuildStats).MoveFromStageTime = (float)dVar42;
  dVar42 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds
                     ((TProcessTimer<BuildPatchServices::FStatsCollector,1> *)
                      &(this->VerifyTimer).bIsRunning);
  (this->BuildStats).FileAttributesTime = (float)dVar42;
  dVar42 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds
                     ((TProcessTimer<BuildPatchServices::FStatsCollector,1> *)
                      &(this->CleanUpTimer).bIsRunning);
  (this->BuildStats).VerifyTime = (float)dVar42;
  dVar42 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds
                     ((TProcessTimer<BuildPatchServices::FStatsCollector,1> *)pbVar6);
  (this->BuildStats).CleanUpTime = (float)dVar42;
  dVar42 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds
                     ((TProcessTimer<BuildPatchServices::FStatsCollector,1> *)
                      &(this->ProcessPausedTimer).bIsRunning);
  (this->BuildStats).PrereqTime = (float)dVar42;
  dVar42 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds
                     ((TProcessTimer<BuildPatchServices::FStatsCollector,1> *)
                      &(this->ProcessActiveTimer).bIsRunning);
  pIVar11 = (this->Platform).Ptr;
  *(bool *)&(this->BuildStats).ProcessActiveTime = local_res8;
  (this->BuildStats).ProcessPausedTime = (float)dVar42;
  puVar33 = (undefined8 *)(**(code **)((longlong)*pIVar11 + 0x28))(pIVar11,local_d8);
  piVar7 = &(this->BuildStats).RetryFailureTypes.ArrayNum;
  if (piVar7 != (int *)puVar33) {
    pvVar25 = *(void **)piVar7;
    if (pvVar25 != (void *)0x0) {
      FMemory::Free(pvVar25);
    }
    uVar12 = *puVar33;
    (this->BuildStats).RetryFailureTypes.ArrayNum = (int)uVar12;
    (this->BuildStats).RetryFailureTypes.ArrayMax = (int)((ulonglong)uVar12 >> 0x20);
    *puVar33 = 0;
    *(undefined4 *)&(this->BuildStats).ErrorCode.Data.AllocatorInstance.Data =
         *(undefined4 *)(puVar33 + 1);
    *(undefined4 *)((longlong)&(this->BuildStats).ErrorCode.Data.AllocatorInstance.Data + 4) =
         *(undefined4 *)((longlong)puVar33 + 0xc);
    puVar33[1] = 0;
  }
  if (local_d8[0] != (void *)0x0) {
    FMemory::Free(local_d8[0]);
  }
  pIVar11 = (this->Platform).Ptr;
  pFVar34 = (FText *)(**(code **)((longlong)*pIVar11 + 0x30))(pIVar11,local_c8);
  FText::operator=((FText *)&(this->BuildStats).RetryErrorCodes.ArrayNum,pFVar34);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  uVar24 = (**(code **)((longlong)*(this->Platform).Ptr + 0x20))();
  *(undefined4 *)&(this->BuildStats).ProcessSuccess = uVar24;
  *(ulong64 *)&(this->BuildStats).NumFilesConstructed = local_148;
  LeaveCriticalSection((LPCRITICAL_SECTION)piVar4);
  LOCK();
  *(undefined4 *)((longlong)(this->ThreadLock).CriticalSection.Opaque3 + 0x14) = 0;
  UNLOCK();
  if (bVar8 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&SingletonFunctionLockCS);
  }
  iVar23 = *(int *)((this->ThreadLock).CriticalSection.Opaque3 + 2);
  if (bVar41) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (uint)(iVar23 == 0);
}

// RunBackupAndMove @ 1431f3ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::RunBackupAndMove(FBuildPatchInstaller *this)

{
  int *piVar1;
  ulong64 *puVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  IBuildManifestSet *pIVar4;
  IFileSystem *pIVar5;
  IMessagePump *pIVar6;
  void *pvVar7;
  IFileOperationTracker *pIVar8;
  IInstallerError *pIVar9;
  code *pcVar10;
  byte bVar11;
  longlong *plVar12;
  float fVar13;
  undefined8 uVar14;
  char cVar15;
  undefined1 uVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  ulong64 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulong64 uVar25;
  FText *pFVar26;
  ForAnyElementType FVar27;
  int iVar28;
  uint *puVar29;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar30;
  wchar_t *pwVar31;
  uint uVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  FBuildPatchProgress *pFVar35;
  FString *pFVar36;
  uint uVar37;
  uint uVar38;
  FScriptContainerElement *pFVar39;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 _Src;
  ulonglong uVar40;
  ulonglong uVar41;
  FScriptContainerElement *pFVar42;
  ForElementType<unsigned_int> FVar43;
  longlong lVar44;
  bool bVar45;
  float fVar46;
  float fVar47;
  undefined1 auStackY_3b8 [32];
  FIdentityFunctor local_367;
  FIdentityFunctor local_366 [6];
  FString local_360;
  FString local_350;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_330;
  FBuildPatchInstaller *local_328;
  undefined4 local_320;
  ForAnyElementType local_318;
  undefined8 local_310;
  undefined4 local_308;
  ForAnyElementType local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  uint local_2ec;
  uint local_2e8;
  float local_2e4;
  undefined4 local_2e0;
  float local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  int local_2c0;
  uint uStack_2bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2b8;
  undefined4 local_2b0;
  int iStack_2ac;
  int iStack_2a8;
  undefined4 uStack_2a4;
  longlong *local_2a0;
  undefined8 uStack_298;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_290;
  uint uStack_288;
  uint uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  longlong *local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_248;
  int local_228;
  int local_224;
  undefined1 local_220 [4];
  undefined1 local_21c [4];
  FIdentityFunctor *local_218;
  FIdentityFunctor *local_210;
  FString local_208;
  FString local_1f8;
  FString *local_1e8;
  undefined8 *local_1e0;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d0;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined4 local_188 [2];
  FScriptContainerElement *local_180;
  int local_178;
  undefined4 local_174;
  undefined4 local_170 [2];
  FScriptContainerElement *local_168;
  int local_160;
  undefined4 local_15c;
  ITextData *local_158;
  uint local_150;
  ITextData *local_148;
  uint local_140;
  FText local_138 [2];
  undefined4 local_10c;
  undefined1 local_108 [32];
  uint *local_e8;
  uint local_e0;
  undefined4 local_dc;
  int local_d8;
  uint local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_2c8 = 0;
  local_2f0 = 5;
  fVar47 = 0.0;
  local_328 = this;
  (**(code **)((this->BuildProgress)._padding_ + 0x18))(&this->BuildProgress,&local_2f0,&local_2c8);
  if (((this->Configuration).InstallMode == StageFiles) ||
     (((this->bFirstInstallIteration != (FThreadSafeBool)0x0 &&
       ((this->Configuration).InstallMode == PrereqOnly)) ||
      ((this->Configuration).bInstallToMemory != false)))) {
    if (4 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    local_2cc = 0x3f800000;
    local_2c4 = 5;
    (**(code **)((this->BuildProgress)._padding_ + 0x18))
              (&this->BuildProgress,&local_2c4,&local_2cc);
    return true;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->MoveFromStageTimer);
  if (((this->MoveFromStageTimer).bIsRunning == false) &&
     ((this->MoveFromStageTimer).bIsRunning = true, (this->MoveFromStageTimer).bIsPaused == false))
  {
    uVar22 = FStatsCollector::GetCycles();
    (this->MoveFromStageTimer).StartCycles = uVar22;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->MoveFromStageTimer);
  if (4 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  cVar15 = (**(code **)((longlong)*(this->InstallerError).Ptr + 8))();
  bVar45 = cVar15 == '\0';
  if (cVar15 != '\0') goto LAB_1431f4d1e;
  pIVar4 = (this->ManifestSet).Ptr;
  local_dc = 0x80;
  local_108._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (uint *)0x0;
  local_e0 = 0;
  local_d8 = -1;
  local_d4 = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,local_108);
  local_1e8 = &this->InstallStagingDir;
  FilterToExistingFiles
            (this,local_1e8,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_108);
  uVar19 = local_d4;
  local_218 = &local_367;
  lVar44 = (longlong)(int)local_d4;
  uVar37 = local_108._8_4_ - local_d4;
  local_2e8 = local_108._8_4_;
  local_2ec = uVar37;
  if (0 < (int)uVar37) {
    if (local_d4 != 0) {
      local_330 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_108._0_8_;
      pTVar30 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_108._0_8_;
      uVar32 = local_108._8_4_;
      iVar18 = local_d8;
      if (local_d8 != -1) {
        do {
          iVar28 = *(int *)((longlong)pTVar30 + (longlong)iVar18 * 0x18 + 4);
          if (iVar18 < (int)uVar37) {
            bVar11 = (byte)uVar32 & 0x1f;
            uVar38 = 1 << bVar11 | 1U >> 0x20 - bVar11;
            uVar37 = uVar32;
            do {
              uVar38 = uVar38 >> 1 | (uint)((uVar38 & 1) != 0) << 0x1f;
              uVar32 = uVar37 - 1;
              if ((((int)uVar32 < 0) || ((int)local_e0 <= (int)uVar32)) &&
                 (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar45)) {
                pcVar10 = (code *)swi(3);
                uVar16 = (*pcVar10)();
                return (bool)uVar16;
              }
              puVar29 = (uint *)(local_108 + 0x10);
              if (local_e8 != (uint *)0x0) {
                puVar29 = local_e8;
              }
              uVar33 = uVar32;
              if ((int)uVar32 < 0) {
                uVar33 = uVar37 + 0x1e;
              }
              uVar37 = uVar32;
            } while ((puVar29[(int)uVar33 >> 5] & uVar38) == 0);
            memmove(pTVar30 + iVar18,local_330 + (int)uVar32,0x18);
            if (((iVar18 < 0) || ((int)local_e0 <= iVar18)) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar45)) {
              pcVar10 = (code *)swi(3);
              uVar16 = (*pcVar10)();
              return (bool)uVar16;
            }
            puVar29 = (uint *)(local_108 + 0x10);
            if (local_e8 != (uint *)0x0) {
              puVar29 = local_e8;
            }
            iVar21 = iVar18;
            if (iVar18 < 0) {
              iVar21 = iVar18 + 0x1f;
            }
            puVar29[iVar21 >> 5] = puVar29[iVar21 >> 5] | 1 << ((byte)iVar18 & 0x1f);
            pTVar30 = local_330;
            uVar37 = local_2ec;
          }
          iVar18 = iVar28;
        } while (iVar28 != -1);
        this = local_328;
      }
      uVar32 = local_2e8;
      uVar38 = 0;
      if ((int)local_2e8 <= (int)local_108._8_4_) {
        uVar38 = ~(uVar19 | uVar37) >> 0x1f;
      }
      uVar33 = local_108._8_4_;
      if (uVar38 == 0) {
        bVar45 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar45) {
          pcVar10 = (code *)swi(3);
          uVar16 = (*pcVar10)();
          return (bool)uVar16;
        }
        uVar33 = local_108._8_4_;
      }
      iVar18 = (uVar33 - uVar19) - uVar37;
      if (iVar18 != 0) {
        memmove((FScriptContainerElement *)(local_108._0_8_ + (longlong)(int)uVar37 * 0x18),
                (FScriptContainerElement *)(local_108._0_8_ + (longlong)(int)uVar37 * 0x18) +
                lVar44 * 0x18,(longlong)iVar18 * 0x18);
        uVar33 = local_108._8_4_;
      }
      local_108._8_4_ = uVar33 - uVar19;
      if ((((int)uVar19 < 0) || ((int)local_e0 < (int)uVar32)) &&
         (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                             ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x3ee,L""), bVar45)) {
        pcVar10 = (code *)swi(3);
        uVar16 = (*pcVar10)();
        return (bool)uVar16;
      }
      if (uVar32 != local_e0) {
        puVar29 = (uint *)(local_108 + 0x10);
        if (local_e8 != (uint *)0x0) {
          puVar29 = local_e8;
        }
        FBitArrayMemory::MemmoveBitsWordOrder
                  (puVar29,uVar37,puVar29,uVar32,(local_e0 - uVar19) - uVar37);
      }
      local_e0 = local_e0 - uVar19;
      uVar37 = (int)local_e0 >> 0x1f & 0x1f;
      uVar19 = local_e0 + uVar37;
      iVar18 = (uVar19 & 0x1f) - uVar37;
      if (iVar18 != 0) {
        puVar29 = (uint *)(local_108 + 0x10);
        if (local_e8 != (uint *)0x0) {
          puVar29 = local_e8;
        }
        puVar29[(int)uVar19 >> 5] =
             puVar29[(int)uVar19 >> 5] & 0xffffffffU >> (0x20U - (char)iVar18 & 0x1f);
      }
      TBitArray<FDefaultBitArrayAllocator>::CheckInvariants
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10));
      local_d4 = 0;
      local_d8 = -1;
      if (local_108._12_4_ != local_108._8_4_) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_108._8_4_,(ForAnyElementType *)local_108,local_108._8_4_,
                   (int *)(local_108 + 0xc));
      }
    }
    uVar14 = local_108._0_8_;
    iVar18 = local_108._8_4_ - local_d4;
    if ((iVar18 < 0) &&
       (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar45)) {
      pcVar10 = (code *)swi(3);
      uVar16 = (*pcVar10)();
      return (bool)uVar16;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar14,iVar18,local_367,
               (FElementCompareClass<TLess<FString>_> *)&local_218);
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_108);
  pIVar4 = (this->ManifestSet).Ptr;
  local_b8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (ForElementType<unsigned_int>)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = -1;
  local_84 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  (**(code **)((longlong)*pIVar4 + 0x60))(pIVar4,local_b8);
  pFVar36 = &(this->Configuration).InstallDirectory;
  local_330 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)pFVar36;
  FilterToExistingFiles
            (this,pFVar36,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_b8)
  ;
  local_210 = local_366;
  if (0 < local_b8._8_4_ - local_84) {
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_b8);
    uVar14 = local_b8._0_8_;
    iVar18 = local_b8._8_4_ - local_84;
    if ((iVar18 < 0) &&
       (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar45)) {
      pcVar10 = (code *)swi(3);
      uVar16 = (*pcVar10)();
      return (bool)uVar16;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar14,iVar18,local_366[0]
               ,(FElementCompareClass<TLess<FString>_> *)&local_210);
  }
  uVar19 = local_70;
  uVar41 = (ulonglong)local_70;
  if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
  }
  if (uVar19 != 0) {
    uVar37 = uVar19;
    if (uVar19 < 2) {
      if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
        uVar37 = 0;
        goto LAB_1431f411b;
      }
    }
    else {
LAB_1431f411b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar37,4);
    }
    if (0 < (int)uVar19) {
      uVar40 = 0;
      do {
        FVar27.Data = (FScriptContainerElement *)local_80;
        if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
          FVar27.Data = local_78.Data;
        }
        uVar23 = uVar40 & (longlong)(int)uVar19 - 1U;
        uVar40 = uVar40 + 1;
        *(undefined4 *)((longlong)FVar27.Data + uVar23 * 4) = 0xffffffff;
        uVar41 = uVar41 - 1;
      } while (uVar41 != 0);
    }
  }
  if (local_70 != 0) {
    pTStack_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    local_2c0 = 0;
    uStack_2bc = 1;
    iStack_2ac = 0;
    iStack_2a8 = 0;
    if (local_90 != 0) {
      FVar43 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar43 = local_98;
      }
      uVar19 = *(uint *)FVar43;
      iStack_2a8 = 0;
      local_2c0 = 0;
      while (uVar19 == 0) {
        iStack_2a8 = iStack_2a8 + 0x20;
        lVar44 = (longlong)local_2c0;
        local_2c0 = local_2c0 + 1;
        if ((int)(local_90 + -1 + (local_90 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2c0)
        goto LAB_1431f424e;
        uVar19 = ((uint *)((longlong)FVar43 + 4))[lVar44];
      }
      uStack_2bc = -uVar19 & uVar19;
      uVar41 = (ulonglong)uStack_2bc * 2 + 1;
      lVar44 = 0x3f;
      if (uVar41 != 0) {
        for (; uVar41 >> lVar44 == 0; lVar44 = lVar44 + -1) {
        }
      }
      local_228 = (int)lVar44;
      iStack_2ac = local_228 + -1 + iStack_2a8;
      if (local_90 < iStack_2ac) {
LAB_1431f424e:
        iStack_2ac = local_90;
      }
    }
    local_2b0 = 0xffffffff;
    local_1d8 = (longlong *)local_b8;
    local_1d0._padding_ = CONCAT44(uStack_2bc,local_2c0);
    local_1d0.CurrentBitIndex = iStack_2ac;
    local_1d0.UnvisitedBitMask = 0xffffffff;
    local_1d0._28_4_ = uStack_2a4;
    local_1d0.BaseBitIndex = iStack_2a8;
    iVar18 = iStack_2ac;
    local_1d0.Array = pTStack_2b8;
    if (iStack_2ac < local_90) {
      do {
        lVar44 = *local_1d8;
        lVar24 = (longlong)iVar18;
        iVar28 = *(int *)(lVar44 + 8 + lVar24 * 0x18);
        if (iVar28 == 0) {
          pwVar31 = L"";
          iVar28 = 0;
        }
        else {
          pwVar31 = *(wchar_t **)(lVar44 + lVar24 * 0x18);
          iVar28 = iVar28 + -1;
        }
        uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar28,pwVar31);
        uVar19 = local_70 - 1 & uVar19;
        *(uint *)(lVar44 + 0x14 + lVar24 * 0x18) = uVar19;
        FVar27.Data = (FScriptContainerElement *)local_80;
        if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
          FVar27.Data = local_78.Data;
        }
        uVar41 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar19;
        *(undefined4 *)(lVar44 + 0x10 + lVar24 * 0x18) =
             *(undefined4 *)((longlong)FVar27.Data + uVar41 * 4);
        *(int *)((longlong)FVar27.Data + uVar41 * 4) = iVar18;
        local_1d0.UnvisitedBitMask = local_1d0.UnvisitedBitMask & ~local_1d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1d0);
        this = local_328;
        iVar18 = local_1d0.CurrentBitIndex;
      } while (local_1d0.CurrentBitIndex < (local_1d0.Array)->NumBits);
    }
    pFVar36 = &(this->Configuration).InstallDirectory;
  }
  fVar46 = (float)(int)(((local_b8._8_4_ - local_84) - local_d4) + local_108._8_4_);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  (this->BuildStats).NumFilesToRemove = local_b8._8_4_ - local_84;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  if (0.0 < fVar46) {
    if (4 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    pIVar5 = (this->FileSystem).Ptr;
    (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,&local_1e0);
    if (local_1e0 != (undefined8 *)0x0) {
      (**(code **)*local_1e0)(local_1e0,1);
    }
  }
  pFVar34 = (FScriptContainerElement *)0x0;
  local_248._padding_._4_4_ = 1;
  local_248.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
  local_248._padding_._0_4_ = 0;
  local_248.UnvisitedBitMask = 0xffffffff;
  local_248.CurrentBitIndex = 0;
  local_248.BaseBitIndex = 0;
  if (local_90 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_248);
  }
  fVar13 = __real_3f800000;
  local_2a0 = (longlong *)local_b8;
  uStack_298 = CONCAT44(local_248._padding_._4_4_,(undefined4)local_248._padding_);
  pTStack_290 = local_248.Array;
  uStack_288 = local_248.UnvisitedBitMask;
  uStack_284 = local_248.CurrentBitIndex;
  iStack_280 = local_248.BaseBitIndex;
  uStack_27c = local_248._28_4_;
  TStack_1a8.CurrentBitIndex = local_248.CurrentBitIndex;
  TStack_1a8.UnvisitedBitMask = local_248.UnvisitedBitMask;
  TStack_1a8.Array = local_248.Array;
  TStack_1a8.BaseBitIndex = local_248.BaseBitIndex;
  TStack_1a8._28_4_ = local_248._28_4_;
  bVar45 = true;
  iVar18 = local_248.CurrentBitIndex;
  local_1b0 = local_2a0;
  TStack_1a8._padding_ = uStack_298;
  if (local_248.CurrentBitIndex < (local_248.Array)->NumBits) {
    while (cVar15 = (**(code **)((longlong)*(this->InstallerError).Ptr + 8))(), plVar12 = local_1b0,
          cVar15 == '\0') {
      lVar44 = (longlong)iVar18;
      BackupFileIfNecessary(this,(FString *)(*local_1b0 + lVar44 * 0x18),false);
      ::operator/(&local_208,pFVar36,(FString *)(*plVar12 + lVar44 * 0x18));
      local_340 = 0;
      bVar17 = RemoveFileWithRetries(this,&local_208,&local_340);
      if (!bVar17) {
        pIVar9 = (this->InstallerError).Ptr;
        pcVar10 = *(code **)((longlong)*pIVar9 + 0x38);
        pFVar26 = FText::GetEmpty();
        FText::FText(local_138,pFVar26);
        (*pcVar10)(pIVar9,3,MoveErrorCodes::DeleteOldFileFailed,local_340);
        bVar45 = false;
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        break;
      }
      pIVar6 = (this->MessagePump).Ptr;
      local_308 = 0;
      pcVar10 = *(code **)((longlong)*pIVar6 + 8);
      lVar24 = *plVar12;
      local_300.Data = (FScriptContainerElement *)0x0;
      iVar18 = *(int *)(lVar24 + 8 + lVar44 * 0x18);
      pvVar7 = *(void **)(lVar24 + lVar44 * 0x18);
      FVar27.Data = pFVar34;
      uVar20 = 0;
      if (iVar18 != 0) {
        local_2f8._0_4_ = iVar18;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar18,0,&local_300,iVar18,(int *)((longlong)&local_2f8 + 4));
        memcpy(local_300.Data,pvVar7,(longlong)iVar18 * 2);
        FVar27.Data = local_300.Data;
        iVar18 = (int)local_2f8;
        uVar20 = local_2f8._4_4_;
      }
      local_300.Data = (FScriptContainerElement *)0x0;
      local_2f8 = 0;
      local_188[0] = local_308;
      local_180 = FVar27.Data;
      local_178 = iVar18;
      local_174 = uVar20;
      (*pcVar10)(pIVar6,local_188);
      if (local_300.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data);
      }
      local_2e0 = 5;
      local_2e4 = fVar47 / fVar46;
      (**(code **)((this->BuildProgress)._padding_ + 0x18))(&this->BuildProgress,&local_2e0);
      fVar47 = fVar47 + fVar13;
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
      pFVar36 = &(this->Configuration).InstallDirectory;
      iVar18 = TStack_1a8.CurrentBitIndex;
      if ((TStack_1a8.Array)->NumBits <= TStack_1a8.CurrentBitIndex) break;
    }
  }
  uVar19 = 1;
  pFVar39 = pFVar34;
  pFVar42 = pFVar34;
  if (local_e0 != 0) {
    puVar29 = (uint *)(local_108 + 0x10);
    if (local_e8 != (uint *)0x0) {
      puVar29 = local_e8;
    }
    uVar37 = *puVar29;
    while (uVar37 == 0) {
      iVar18 = (int)pFVar39;
      pFVar42 = (FScriptContainerElement *)(ulonglong)((int)pFVar42 + 0x20);
      uVar37 = iVar18 + 1;
      pFVar39 = (FScriptContainerElement *)(ulonglong)uVar37;
      if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar37) {
        pFVar34 = (FScriptContainerElement *)(ulonglong)local_e0;
        goto LAB_1431f4713;
      }
      uVar37 = (puVar29 + 1)[iVar18];
    }
    uVar19 = -uVar37 & uVar37;
    uVar41 = (ulonglong)uVar19 * 2 + 1;
    lVar44 = 0x3f;
    if (uVar41 != 0) {
      for (; uVar41 >> lVar44 == 0; lVar44 = lVar44 + -1) {
      }
    }
    local_224 = (int)lVar44;
    uVar37 = (int)pFVar42 + -1 + local_224;
    pFVar34 = (FScriptContainerElement *)(ulonglong)uVar37;
    if ((int)local_e0 < (int)uVar37) {
      pFVar34 = (FScriptContainerElement *)(ulonglong)local_e0;
    }
  }
LAB_1431f4713:
  local_2a0 = (longlong *)local_108;
  pTStack_290 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
  uStack_298 = CONCAT44(uVar19,(int)pFVar39);
  uStack_288 = 0xffffffff;
  uStack_284 = (uint)pFVar34;
  uStack_27c = local_10c;
  iStack_280 = (int)pFVar42;
  TStack_268._padding_ = uStack_298;
  TStack_268._28_4_ = local_10c;
  TStack_268.BaseBitIndex = iStack_280;
  TStack_268.UnvisitedBitMask = 0xffffffff;
  local_270 = local_2a0;
  TStack_268.CurrentBitIndex = uStack_284;
  TStack_268.Array = pTStack_290;
  if ((int)uStack_284 < (int)local_e0) {
    local_270 = local_2a0;
    cVar15 = (**(code **)((longlong)*(this->InstallerError).Ptr + 8))();
    plVar12 = local_270;
    uVar19 = TStack_268.CurrentBitIndex;
    while (local_270 = plVar12, cVar15 == '\0') {
      lVar44 = *plVar12;
      iVar28 = (local_1e8->Data).ArrayNum;
      iVar21 = *(int *)(lVar44 + 8 + (longlong)(int)pFVar34 * 0x18);
      iVar18 = iVar21 + -1;
      if (iVar21 == 0) {
        iVar18 = 0;
      }
      iVar21 = iVar18 + 1;
      local_350.Data.ArrayNum = iVar28;
      if ((iVar28 == 0) && (iVar21 != 0)) {
        pFVar39 = (local_1e8->Data).AllocatorInstance.Data;
        iVar21 = iVar18 + 2;
LAB_1431f47ef:
        local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar21 != 0) goto LAB_1431f47f9;
        local_350.Data.ArrayMax = 0;
      }
      else {
        pFVar39 = (local_1e8->Data).AllocatorInstance.Data;
        if (iVar28 == 0) goto LAB_1431f47ef;
LAB_1431f47f9:
        local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar37 = iVar21 + iVar28;
        if ((int)uVar37 < iVar28) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar37,0,(ForAnyElementType *)&local_350,iVar28,&local_350.Data.ArrayMax);
        if (iVar28 != 0) {
          memcpy(local_350.Data.AllocatorInstance.Data,pFVar39,(longlong)iVar28 * 2);
        }
      }
      ::FString::PathAppend(&local_350,*(wchar_t **)(lVar44 + (longlong)(int)pFVar34 * 0x18),iVar18)
      ;
      lVar44 = *plVar12;
      lVar24 = (longlong)(int)uVar19;
      iVar28 = (local_328->Configuration).InstallDirectory.Data.ArrayNum;
      iVar21 = *(int *)(lVar44 + 8 + lVar24 * 0x18);
      iVar18 = iVar21 + -1;
      if (iVar21 == 0) {
        iVar18 = 0;
      }
      iVar21 = iVar18 + 1;
      local_360.Data.ArrayNum = iVar28;
      if ((iVar28 == 0) && (iVar21 != 0)) {
        iVar21 = iVar18 + 2;
        _Src = local_330->_s_1;
LAB_1431f48b5:
        local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar21 != 0) goto LAB_1431f48bf;
        local_360.Data.ArrayMax = 0;
      }
      else {
        _Src = local_330->_s_1;
        if (iVar28 == 0) goto LAB_1431f48b5;
LAB_1431f48bf:
        local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar37 = iVar21 + iVar28;
        if ((int)uVar37 < iVar28) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar37,0,(ForAnyElementType *)&local_360,iVar28,&local_360.Data.ArrayMax);
        if (iVar28 != 0) {
          memcpy(local_360.Data.AllocatorInstance.Data,(void *)_Src,(longlong)iVar28 * 2);
        }
      }
      ::FString::PathAppend(&local_360,*(wchar_t **)(lVar44 + lVar24 * 0x18),iVar18);
      this = local_328;
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_360.Data.ArrayNum != 0) {
        FVar27.Data = local_360.Data.AllocatorInstance.Data;
      }
      pIVar5 = (local_328->FileSystem).Ptr;
      cVar15 = (**(code **)((longlong)*pIVar5 + 0x80))(pIVar5,FVar27.Data);
      if (cVar15 != '\0') {
        BackupFileIfNecessary(this,(FString *)(*plVar12 + lVar24 * 0x18),false);
        local_33c = 0;
        bVar17 = RemoveFileWithRetries(this,&local_360,&local_33c);
        if (bVar17) goto LAB_1431f4980;
        pIVar9 = (this->InstallerError).Ptr;
        pcVar10 = *(code **)((longlong)*pIVar9 + 0x38);
        pFVar26 = FText::GetEmpty();
        local_158 = (pFVar26->TextData).Reference;
        if (local_158 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_158 + 8))(local_158,local_220);
        }
        local_150 = pFVar26->Flags;
        (*pcVar10)(pIVar9,3,MoveErrorCodes::DeletePrevFileFailed,local_33c);
LAB_1431f4cb5:
        if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data.AllocatorInstance.Data);
        }
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
        goto LAB_1431f4cd3;
      }
LAB_1431f4980:
      local_334 = 0;
      local_338 = 0;
      bVar17 = RelocateFileWithRetries(this,&local_360,&local_350,&local_334,&local_338);
      uVar32 = local_334;
      uVar37 = local_338;
      if (!bVar17) {
        ::FString::PrintfImpl(&local_1f8,L"%s-%u-%u");
        pIVar9 = (this->InstallerError).Ptr;
        pcVar10 = *(code **)((longlong)*pIVar9 + 0x38);
        pFVar26 = FText::GetEmpty();
        local_148 = (pFVar26->TextData).Reference;
        if (local_148 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_148 + 8))(local_148,local_21c);
        }
        local_140 = pFVar26->Flags;
        if (((uVar32 != 0) ||
            (FVar27.Data = (FScriptContainerElement *)MoveErrorCodes::StageToInstall, uVar37 != 0))
           && (FVar27.Data = (FScriptContainerElement *)L"", local_1f8.Data.ArrayNum != 0)) {
          FVar27.Data = local_1f8.Data.AllocatorInstance.Data;
        }
        (*pcVar10)(pIVar9,3,FVar27.Data,0);
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        goto LAB_1431f4cb5;
      }
      pTVar3 = &this->FilesInstalled;
      pFVar39 = (pTVar3->AllocatorInstance).Data;
      pFVar34 = (FScriptContainerElement *)(*plVar12 + lVar24 * 0x18);
      if ((pFVar39 <= pFVar34) &&
         (pFVar34 < pFVar39 + (longlong)(this->FilesInstalled).ArrayMax * 0x10)) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar17) {
          pcVar10 = (code *)swi(3);
          uVar16 = (*pcVar10)();
          return (bool)uVar16;
        }
      }
      iVar18 = (this->FilesInstalled).ArrayNum;
      piVar1 = &(this->FilesInstalled).ArrayMax;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->FilesInstalled).ArrayNum = iVar18 + 1;
      ::FString::FString((FString *)((pTVar3->AllocatorInstance).Data + (longlong)iVar18 * 0x10),
                         (FString *)pFVar34);
      pIVar8 = (this->FileOperationTracker).Ptr;
      lVar44 = (longlong)(int)uVar19;
      (**(code **)((longlong)*pIVar8 + 0x40))(pIVar8,*plVar12 + lVar44 * 0x18,0xb);
      iVar18 = *(int *)(*plVar12 + 8 + lVar44 * 0x18);
      pFVar36 = (FString *)(*plVar12 + lVar44 * 0x18);
      if (iVar18 == 0) {
        pwVar31 = L"";
        iVar18 = 0;
      }
      else {
        pwVar31 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
        iVar18 = iVar18 + -1;
      }
      uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar31);
      iVar18 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(&this->OldFilesRemovedBySystem,uVar19,pFVar36);
      if ((iVar18 != -1) || (local_320 = 1, cVar15 != '\0')) {
        local_320 = 2;
      }
      pIVar6 = (this->MessagePump).Ptr;
      pcVar10 = *(code **)((longlong)*pIVar6 + 8);
      local_318.Data = (FScriptContainerElement *)0x0;
      iVar18 = *(int *)(*plVar12 + 8 + lVar44 * 0x18);
      pvVar7 = *(void **)(*plVar12 + lVar44 * 0x18);
      if (iVar18 == 0) {
        local_168 = (FScriptContainerElement *)0x0;
        local_160 = iVar18;
        local_15c = 0;
      }
      else {
        local_310._0_4_ = iVar18;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar18,0,&local_318,iVar18,(int *)((longlong)&local_310 + 4));
        memcpy(local_318.Data,pvVar7,(longlong)iVar18 * 2);
        local_168 = local_318.Data;
        local_160 = (int)local_310;
        local_15c = local_310._4_4_;
      }
      local_318.Data = (FScriptContainerElement *)0x0;
      local_310 = 0;
      local_170[0] = local_320;
      (*pcVar10)(pIVar6,local_170);
      if (local_318.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data);
      }
      local_2d8 = 5;
      local_2dc = fVar47 / fVar46;
      pFVar35 = &this->BuildProgress;
      (**(code **)(pFVar35->_padding_ + 0x18))(pFVar35,&local_2d8,&local_2dc);
      fVar47 = fVar47 + fVar13;
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
      if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data.AllocatorInstance.Data);
      }
      TStack_268.UnvisitedBitMask = TStack_268.UnvisitedBitMask & ~TStack_268._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_268);
      uVar19 = TStack_268.CurrentBitIndex;
      if ((TStack_268.Array)->NumBits <= TStack_268.CurrentBitIndex) goto LAB_1431f4c09;
      pFVar34 = (FScriptContainerElement *)(ulonglong)(uint)TStack_268.CurrentBitIndex;
      cVar15 = (**(code **)((longlong)*(this->InstallerError).Ptr + 8))();
      plVar12 = local_270;
    }
  }
  pFVar35 = &this->BuildProgress;
LAB_1431f4c09:
  if (bVar45) {
    cVar15 = (**(code **)((longlong)*(this->InstallerError).Ptr + 8))();
    if (cVar15 != '\0') goto LAB_1431f4cd3;
    local_2d4 = 0x3f800000;
    local_2d0 = 5;
    bVar45 = true;
    (**(code **)((this->BuildProgress)._padding_ + 0x18))(pFVar35,&local_2d0,&local_2d4);
  }
  else {
LAB_1431f4cd3:
    bVar45 = false;
  }
  local_70 = 0;
  if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_78.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  local_c0 = 0;
  if (local_c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
LAB_1431f4d1e:
  if (4 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->MoveFromStageTimer);
  if (((this->MoveFromStageTimer).bIsRunning != false) &&
     ((this->MoveFromStageTimer).bIsRunning = false, (this->MoveFromStageTimer).bIsPaused == false))
  {
    uVar22 = (this->MoveFromStageTimer).StartCycles;
    uVar25 = FStatsCollector::GetCycles();
    puVar2 = &(this->MoveFromStageTimer).Cycles;
    *puVar2 = *puVar2 + (uVar25 - uVar22);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->MoveFromStageTimer);
  return bVar45;
}

// RunFileAttributes @ 1431f4ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::RunFileAttributes(FBuildPatchInstaller *this)

{
  ulong64 *puVar1;
  TProcessTimer<BuildPatchServices::FStatsCollector,1> *lpCriticalSection;
  ulong64 uVar2;
  IFileAttribution *pIVar3;
  ulong64 uVar4;
  FString *pFVar5;
  FString local_98;
  FScopedControllables local_88;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_58;
  
  if ((this->Configuration).bInstallToMemory == false) {
    pFVar5 = &this->InstallStagingDir;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    if ((this->Configuration).InstallMode != StageFiles) {
      pFVar5 = &local_98;
    }
    lpCriticalSection = &this->FileAttributesTimer;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->FileAttributesTimer).bIsRunning == false) &&
       ((this->FileAttributesTimer).bIsRunning = true,
       (this->FileAttributesTimer).bIsPaused == false)) {
      uVar2 = FStatsCollector::GetCycles();
      (this->FileAttributesTimer).StartCycles = uVar2;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_58.Elements._0_8_ = 0;
    local_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_58.Elements._48_8_ = _UNK_150631d98;
    local_58.Elements._8_8_ = 0;
    local_58.Elements._32_8_ = 0;
    local_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_58.HashSize = 0;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              (&local_58,&this->FilesToConstruct);
    pIVar3 = FFileAttributionFactory::Create
                       ((this->FileSystem).Ptr,(this->ManifestSet).Ptr,&local_58,
                        &(this->Configuration).InstallDirectory,pFVar5,&this->BuildProgress);
    local_88.SyncObject = &this->ThreadLock;
    local_88.RegisteredArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.RegistrationArray = &this->Controllables;
    local_88.RegisteredArray.ArrayNum = 0;
    local_88.RegisteredArray.ArrayMax = 0;
    local_88.bIsPaused = &this->bIsPaused;
    local_88.bShouldAbort = &this->bShouldAbort;
    FScopedControllables::Register(&local_88,(IControllable *)pIVar3);
    (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3);
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->FileAttributesTimer).bIsRunning != false) &&
       ((this->FileAttributesTimer).bIsRunning = false,
       (this->FileAttributesTimer).bIsPaused == false)) {
      uVar2 = (this->FileAttributesTimer).StartCycles;
      uVar4 = FStatsCollector::GetCycles();
      puVar1 = &(this->FileAttributesTimer).Cycles;
      *puVar1 = *puVar1 + (uVar4 - uVar2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FScopedControllables::~FScopedControllables(&local_88);
    if (pIVar3 != (IFileAttribution *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// RunInstallation @ 1431f50b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::RunInstallation
          (FBuildPatchInstaller *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  ulong64 *puVar1;
  undefined1 *puVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar3;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  FBuildPatchProgress *pFVar4;
  TOptional<bool> *pTVar5;
  TOptional<int> *pTVar6;
  FString *pFVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  EInstallMode EVar12;
  EVerifyMode EVar13;
  IVerifier *pIVar14;
  IFileOperationTracker *pIVar15;
  ICloudChunkSourceStatistics *pIVar16;
  IChunkDbChunkSourceStat *pIVar17;
  IFileSystem *pIVar18;
  IConstructorInstallChunkSource IVar19;
  IDownloadServiceStatistics *pIVar20;
  IBuildManifestSet *pIVar21;
  ICloudChunkSourceStat *pIVar22;
  IMessagePump *pIVar23;
  IFileConstructorStat *pIVar24;
  void *pvVar25;
  IInstallChunkSourceStatistics *pIVar26;
  IChunkDbChunkSourceStatistics *pIVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  IConstructorInstallChunkSource *pIVar29;
  ForAnyElementType *this_01;
  EConstructorChunkLocation *pEVar30;
  IConstructorInstallChunkSource *pIVar31;
  char cVar32;
  bool bVar33;
  undefined1 uVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  ulong64 uVar39;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar40;
  longlong lVar41;
  FText *pFVar42;
  longlong lVar43;
  IChunkDataSerialization *pIVar44;
  IChunkReferenceTracker *pIVar45;
  IConstructorChunkDbChunkSource *pIVar46;
  IConstructorInstallChunkSource *pIVar47;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar48;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar49;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_02;
  FDownloadConnectionCountConfig *pFVar50;
  IDownloadConnectionCount *pIVar51;
  FConstructorCloudChunkSourceConfig *pFVar52;
  IConstructorCloudChunkSource *pIVar53;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar54;
  FFileConstructorConfig *pFVar55;
  FBuildPatchFileConstructor *this_03;
  FDelegateHandle FVar56;
  ulong64 uVar57;
  longlong *plVar58;
  byte bVar59;
  LPCRITICAL_SECTION p_Var60;
  wchar_t *pwVar61;
  int iVar62;
  code *pcVar63;
  FWindowsRecursiveMutex *pFVar64;
  FBuildPatchInstaller *pFVar65;
  TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
  *pTVar66;
  undefined4 uVar67;
  IInstallerError *pIVar68;
  uint uVar69;
  uint *puVar70;
  int iVar71;
  float fVar72;
  undefined1 auStackY_9e8 [32];
  undefined1 local_978;
  undefined1 local_977;
  undefined1 local_976;
  undefined1 local_975;
  undefined1 local_974;
  undefined1 local_973 [3];
  FBuildPatchInstaller *local_970;
  LPCRITICAL_SECTION local_968;
  IConstructorInstallChunkSource *local_960;
  undefined1 local_958;
  float *local_950;
  int local_948;
  FScopedControllables local_940;
  IDownloadService *local_910;
  undefined8 local_908;
  EConstructorChunkLocation *local_900;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8f8;
  undefined8 local_8d8;
  FFileConstructorConfig local_8c8;
  undefined4 local_838;
  undefined4 local_834;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined4 local_800 [2];
  FBuildPatchFileConstructor *local_7f8;
  IFileSystem *local_7f0;
  IConstructorInstallChunkSource *local_7e8;
  undefined4 local_7e0 [2];
  IInstallerError *local_7d8;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  undefined4 local_794;
  undefined4 local_790;
  undefined4 local_78c;
  undefined4 local_788;
  undefined4 local_784;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_780;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_770;
  undefined4 local_760;
  undefined4 local_75c;
  undefined4 local_758 [2];
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_750;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_740;
  FChunkDbSourceConfig local_720;
  FDestructionSentinel local_708;
  longlong *local_6f0;
  int iStack_6e8;
  uint uStack_6e4;
  TBitArray<FDefaultBitArrayAllocator> *local_6e0;
  undefined4 uStack_6d8;
  uint uStack_6d4;
  undefined8 local_6d0;
  int iStack_6c8;
  undefined4 uStack_6c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_680;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_660;
  TArray<FString,TSizedDefaultAllocator<32>_> local_640;
  int local_630;
  int local_62c;
  undefined1 local_628 [8];
  TPairInitializer<FGuid_const_&,BuildPatchServices::EConstructorChunkLocation_&&> local_620;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_610;
  undefined8 uStack_5f0;
  longlong *local_5e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5e0;
  undefined8 uStack_5c0;
  undefined1 local_5b8 [12];
  uint uStack_5ac;
  TBitArray<FDefaultBitArrayAllocator> *local_5a8;
  undefined8 uStack_5a0;
  bool *local_598;
  int iStack_590;
  undefined4 uStack_58c;
  undefined1 local_588 [12];
  uint uStack_57c;
  TBitArray<FDefaultBitArrayAllocator> *local_578;
  undefined8 uStack_570;
  bool *local_568;
  bool *pbStack_560;
  longlong local_558;
  undefined1 *local_550;
  longlong local_548;
  undefined1 *local_540;
  longlong local_538;
  undefined1 *local_530;
  FBuildPatchInstaller *local_528;
  IConstructorInstallChunkSource **local_520;
  <lambda_2> local_510;
  undefined **local_4f8;
  FBuildPatchInstaller *local_4f0;
  undefined8 local_4e0;
  undefined1 local_4d8 [48];
  undefined1 local_4a8 [48];
  FConstructorCloudChunkSourceConfig local_478;
  FText local_438;
  FText local_428;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_418;
  undefined4 local_3dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b8;
  FDownloadConnectionCountConfig local_398;
  FFileConstructorConfig local_360;
  undefined1 local_2c8 [32];
  uint *local_2a8;
  uint local_2a0;
  int local_294;
  ForElementType<FSetElementId> local_288;
  int local_280;
  undefined1 local_278 [64];
  void *local_238;
  undefined4 local_230;
  undefined1 local_228 [40];
  int local_200;
  int local_1f4;
  ForElementType<FSetElementId> local_1e8;
  int local_1e0;
  undefined1 local_1d8 [40];
  uint local_1b0;
  int local_1a4;
  ForElementType<FSetElementId> local_198;
  int local_190;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_188;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_138;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_e8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  local_970 = this;
  if (4 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  FPaths::NormalizeDirectoryName(&this->DataStagingDir);
  FPaths::NormalizeDirectoryName(&this->InstallStagingDir);
  FPaths::NormalizeDirectoryName(&this->MetaStagingDir);
  cVar32 = (**(code **)((longlong)*(this->InstallerError).Ptr + 0x10))();
  if (cVar32 == '\0') {
    (**(code **)((longlong)*(this->InstallerError).Ptr + 0x50))();
    local_4f8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::`23'::<lambda_1>,0,0>
                 ::_vftable_;
    local_510.InstallChunkSource =
         (TUniquePtr<BuildPatchServices::IConstructorInstallChunkSource,TDefaultDelete<BuildPatchServices::IConstructorInstallChunkSource>_>
          *)UE::Core::Private::Function::
            TFunctionRefCaller<`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l23::<lambda_1>,void>
            ::Call;
    local_4e0 = 0;
    local_4f0 = this;
    (**(code **)((longlong)*(this->InstallerError).Ptr + 0x40))();
  }
  pTVar3 = &this->TaggedFiles;
  if ((this->TaggedFiles).HashSize < 2) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(pTVar3);
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&pTVar3->Elements,0);
  }
  else {
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&pTVar3->Elements,0);
    (this->TaggedFiles).HashSize = 1;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(pTVar3);
  }
  (**(code **)((longlong)*(this->ManifestSet).Ptr + 0x50))();
  this_00 = &this->OutdatedFiles;
  if ((this->OutdatedFiles).HashSize < 2) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,0);
  }
  else {
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,0);
    (this->OutdatedFiles).HashSize = 1;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  if ((this->Configuration).bInstallToMemory == false) {
    pIVar21 = (this->ManifestSet).Ptr;
    (**(code **)((longlong)*pIVar21 + 0x58))
              (pIVar21,&(this->Configuration).InstallDirectory,this_00);
  }
  else {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=(this_00,pTVar3);
  }
  EVar12 = (this->Configuration).InstallMode;
  iVar38 = param_1->ArrayNum;
  local_968 = (LPCRITICAL_SECTION)CONCAT44(local_968._4_4_,iVar38);
  GenerateFilesToConstruct
            (&this->FilesToConstruct,(this->ManifestSet).Ptr,param_1,pTVar3,this_00,
             EVar12 == PrereqOnly);
  if (4 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  if (iVar38 < 1) {
    if (((this->Configuration).bInstallToMemory == false) &&
       ((EVar12 == PrereqOnly ||
        (bVar33 = CheckForExternallyInstalledFiles(this,&this->FilesToConstruct), bVar33)))) {
      if (4 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pIVar14 = (this->Verifier).Ptr;
      (**(code **)((longlong)*pIVar14 + 0x20))(pIVar14,&this->FilesToConstruct);
      pFVar4 = &this->BuildProgress;
      local_78c = 0;
      local_788 = 3;
      (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,&local_788,&local_78c);
      local_784 = 0;
      local_760 = 4;
      (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,&local_760,&local_784);
      local_75c = 0;
      local_758[0] = 5;
      (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,local_758,&local_75c);
      local_838 = 0x3e4ccccd;
      local_834 = 6;
      (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,&local_834,&local_838);
      local_830 = 0x3f800000;
      local_82c = 7;
      (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,&local_82c,&local_830);
      local_828 = 0x3f800000;
      local_824 = 1;
      (**(code **)(pFVar4->_padding_ + 0x18))(pFVar4,&local_824,&local_828);
      local_820 = 0x3f800000;
      local_81c = 2;
      (**(code **)(pFVar4->_padding_ + 0x18))(pFVar4,&local_81c,&local_820);
      local_818 = 0x3f800000;
      local_814 = 3;
      (**(code **)(pFVar4->_padding_ + 0x18))(pFVar4,&local_814,&local_818);
      local_810 = 0x3f800000;
      local_80c = 4;
      (**(code **)(pFVar4->_padding_ + 0x18))(pFVar4,&local_80c,&local_810);
      EnterCriticalSection((LPCRITICAL_SECTION)&this->InitializeTimer);
      if (((this->InitializeTimer).bIsRunning != false) &&
         ((this->InitializeTimer).bIsRunning = false, (this->InitializeTimer).bIsPaused == false)) {
        uVar57 = (this->InitializeTimer).StartCycles;
        uVar39 = FStatsCollector::GetCycles();
        puVar1 = &(this->InitializeTimer).Cycles;
        *puVar1 = *puVar1 + (uVar39 - uVar57);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->InitializeTimer);
      return true;
    }
    pFVar64 = &this->ThreadLock;
    if (pFVar64 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar64);
    (this->BuildStats).NumFilesOutdated =
         *(int *)&(this->FilesToConstruct).Elements.field_0x8 -
         *(int *)&(this->FilesToConstruct).Elements.field_0x34;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar64);
  }
  iVar71 = 0;
  iVar38 = 0;
  if ((this->Configuration).bInstallToMemory == false) {
    puVar2 = &(this->FilesToConstruct).Elements.field_0x10;
    local_6c0._padding_._0_4_ = 0;
    pTVar3 = &this->FilesToConstruct;
    local_6c0._padding_._4_4_ = 1;
    local_6c0.UnvisitedBitMask = 0xffffffff;
    local_6c0.CurrentBitIndex = 0;
    local_6c0.BaseBitIndex = 0;
    local_6c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if (*(int *)&(this->FilesToConstruct).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6c0);
    }
    local_940.RegistrationArray =
         (TArray<BuildPatchServices::IControllable_*,TSizedDefaultAllocator<32>_> *)
         CONCAT44(local_6c0._padding_._4_4_,(undefined4)local_6c0._padding_);
    local_940.RegisteredArray._8_8_ = CONCAT44(local_6c0.CurrentBitIndex,local_6c0.UnvisitedBitMask)
    ;
    local_940.bIsPaused = (bool *)CONCAT44(local_6c0._28_4_,local_6c0.BaseBitIndex);
    local_940.RegisteredArray.AllocatorInstance.Data = (FScriptContainerElement *)local_6c0.Array;
    local_940.bShouldAbort =
         (bool *)CONCAT44(local_940.bShouldAbort._4_4_,
                          *(int *)&(this->FilesToConstruct).Elements.field_0x8 -
                          *(int *)&(this->FilesToConstruct).Elements.field_0x34);
    local_578 = local_6c0.Array;
    pbStack_560 = local_940.bShouldAbort;
    local_940.SyncObject = (FWindowsRecursiveMutex *)pTVar3;
    local_588._0_8_ = pTVar3;
    unique0x10003dfd = local_940.RegistrationArray;
    uStack_570 = local_940.RegisteredArray._8_8_;
    local_568 = local_940.bIsPaused;
    pTVar40 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_418,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                         *(int *)&(this->FilesToConstruct).Elements.field_0x28);
    local_940.RegistrationArray =
         (TArray<BuildPatchServices::IControllable_*,TSizedDefaultAllocator<32>_> *)
         pTVar40->_padding_;
    local_940.RegisteredArray.AllocatorInstance.Data = (FScriptContainerElement *)pTVar40->Array;
    local_940.RegisteredArray.ArrayNum = pTVar40->UnvisitedBitMask;
    local_940.RegisteredArray.ArrayMax = pTVar40->CurrentBitIndex;
    local_940.bIsPaused = *(bool **)&pTVar40->BaseBitIndex;
    local_940.bShouldAbort =
         (bool *)CONCAT44(local_940.bShouldAbort._4_4_,
                          *(int *)&(this->FilesToConstruct).Elements.field_0x8 -
                          *(int *)&(this->FilesToConstruct).Elements.field_0x34);
    local_4d8._40_8_ = local_940.bShouldAbort;
    local_940.SyncObject = (FWindowsRecursiveMutex *)pTVar3;
    local_4d8._0_8_ = pTVar3;
    local_4d8._8_8_ = local_940.RegistrationArray;
    local_4d8._16_8_ = local_940.RegisteredArray.AllocatorInstance.Data;
    local_4d8._24_8_ = local_940.RegisteredArray._8_8_;
    local_4d8._32_8_ = local_940.bIsPaused;
    bVar33 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=
                       ((TRangedForIterator *)local_588,(TRangedForIterator *)local_4d8);
    if (bVar33) {
      do {
        lVar41 = (longlong)uStack_570._4_4_;
        iVar35 = (this->Configuration).InstallDirectory.Data.ArrayNum;
        lVar43 = *(longlong *)
                  (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_588._0_8_;
        iVar36 = *(int *)(lVar43 + 8 + lVar41 * 0x18);
        iVar62 = iVar36 + -1;
        if (iVar36 == 0) {
          iVar62 = iVar38;
        }
        if ((iVar35 != 0) || (iVar36 = 1, iVar62 + 1 == 0)) {
          iVar36 = iVar38;
        }
        local_770.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmptyWithSlack<wchar_t,int>
                  (&local_770,
                   (wchar_t *)(this->Configuration).InstallDirectory.Data.AllocatorInstance.Data,
                   iVar35,0,iVar36 + iVar62 + 1);
        ::FString::PathAppend((FString *)&local_770,*(wchar_t **)(lVar43 + lVar41 * 0x18),iVar62);
        iVar35 = *(int *)(lVar43 + 8 + lVar41 * 0x18);
        iVar36 = (this->InstallStagingDir).Data.ArrayNum;
        iVar62 = iVar35 + -1;
        if (iVar35 == 0) {
          iVar62 = iVar38;
        }
        if ((iVar36 != 0) || (iVar35 = 1, iVar62 + 1 == 0)) {
          iVar35 = iVar38;
        }
        local_780.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmptyWithSlack<wchar_t,int>
                  (&local_780,(wchar_t *)(this->InstallStagingDir).Data.AllocatorInstance.Data,
                   iVar36,0,iVar35 + iVar62 + 1);
        ::FString::PathAppend((FString *)&local_780,*(wchar_t **)(lVar43 + lVar41 * 0x18),iVar62);
        iVar35 = local_770.ArrayNum + -1;
        if (local_770.ArrayNum == 0) {
          iVar35 = iVar71;
        }
        iVar36 = FWindowsPlatformMisc::GetMaxPathLength();
        if (iVar36 <= iVar35) {
          if (1 < (byte)LogBuildPatchServices._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          }
          pIVar68 = (this->InstallerError).Ptr;
          pcVar63 = *(code **)((longlong)*pIVar68 + 0x38);
          pFVar42 = FText::GetEmpty();
          FText::FText(&local_438,pFVar42);
          pwVar61 = PathLengthErrorCodes::InstallDirectory;
LAB_1431f5999:
          (*pcVar63)(pIVar68,10,pwVar61,0);
          if (local_780.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_780.AllocatorInstance.Data);
          }
          if (local_770.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_770.AllocatorInstance.Data);
          }
          return false;
        }
        iVar35 = local_780.ArrayNum + -1;
        if (local_780.ArrayNum == 0) {
          iVar35 = iVar71;
        }
        iVar36 = FWindowsPlatformMisc::GetMaxPathLength();
        if (iVar36 <= iVar35) {
          if (1 < (byte)LogBuildPatchServices._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          }
          pIVar68 = (this->InstallerError).Ptr;
          pcVar63 = *(code **)((longlong)*pIVar68 + 0x38);
          pFVar42 = FText::GetEmpty();
          FText::FText(&local_428,pFVar42);
          pwVar61 = PathLengthErrorCodes::StagingDirectory;
          goto LAB_1431f5999;
        }
        if (local_780.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_780.AllocatorInstance.Data);
        }
        if (local_770.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_770.AllocatorInstance.Data);
        }
        uStack_570 = CONCAT44(uStack_570._4_4_,(uint)uStack_570 & ~uStack_57c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_588 + 8));
        bVar33 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=
                           ((TRangedForIterator *)local_588,(TRangedForIterator *)local_4d8);
      } while (bVar33);
    }
  }
  EVar13 = (this->Configuration).VerifyMode;
  if ((EVar13 == ShaVerifyAllFiles) || (EVar13 == FileSizeCheckAllFiles)) {
    iVar38 = 1;
  }
  local_6a0._padding_._0_4_ = 0;
  local_6a0._padding_._4_4_ = 1;
  local_6a0.UnvisitedBitMask = 0xffffffff;
  uVar67 = 0xe;
  if (iVar38 != 0) {
    uVar67 = 0xb;
  }
  local_6a0.CurrentBitIndex = 0;
  local_6a0.BaseBitIndex = 0;
  puVar2 = &(this->TaggedFiles).Elements.field_0x10;
  pTVar3 = &this->TaggedFiles;
  local_6a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (*(int *)&(this->TaggedFiles).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6a0);
  }
  local_940.RegistrationArray =
       (TArray<BuildPatchServices::IControllable_*,TSizedDefaultAllocator<32>_> *)
       CONCAT44(local_6a0._padding_._4_4_,(undefined4)local_6a0._padding_);
  local_940.RegisteredArray._8_8_ = CONCAT44(local_6a0.CurrentBitIndex,local_6a0.UnvisitedBitMask);
  local_940.bIsPaused = (bool *)CONCAT44(local_6a0._28_4_,local_6a0.BaseBitIndex);
  iStack_590 = *(int *)&(this->TaggedFiles).Elements.field_0x8 -
               *(int *)&(this->TaggedFiles).Elements.field_0x34;
  local_940.RegisteredArray.AllocatorInstance.Data = (FScriptContainerElement *)local_6a0.Array;
  local_5a8 = local_6a0.Array;
  uStack_58c = local_940.bShouldAbort._4_4_;
  local_940.SyncObject = (FWindowsRecursiveMutex *)pTVar3;
  local_5b8._0_8_ = pTVar3;
  unique0x10003ddd = local_940.RegistrationArray;
  uStack_5a0 = local_940.RegisteredArray._8_8_;
  local_598 = local_940.bIsPaused;
  local_940.bShouldAbort._0_4_ = iStack_590;
  pTVar40 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_3b8,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                       *(int *)&(this->TaggedFiles).Elements.field_0x28);
  local_940.RegistrationArray =
       (TArray<BuildPatchServices::IControllable_*,TSizedDefaultAllocator<32>_> *)pTVar40->_padding_
  ;
  local_940.RegisteredArray.AllocatorInstance.Data = (FScriptContainerElement *)pTVar40->Array;
  local_940.RegisteredArray.ArrayNum = pTVar40->UnvisitedBitMask;
  local_940.RegisteredArray.ArrayMax = pTVar40->CurrentBitIndex;
  local_940.bIsPaused = *(bool **)&pTVar40->BaseBitIndex;
  local_940.bShouldAbort =
       (bool *)CONCAT44(local_940.bShouldAbort._4_4_,
                        *(int *)&(this->TaggedFiles).Elements.field_0x8 -
                        *(int *)&(this->TaggedFiles).Elements.field_0x34);
  local_4a8._40_8_ = local_940.bShouldAbort;
  local_940.SyncObject = (FWindowsRecursiveMutex *)pTVar3;
  local_4a8._0_8_ = pTVar3;
  local_4a8._8_8_ = local_940.RegistrationArray;
  local_4a8._16_8_ = local_940.RegisteredArray.AllocatorInstance.Data;
  local_4a8._24_8_ = local_940.RegisteredArray._8_8_;
  local_4a8._32_8_ = local_940.bIsPaused;
  bVar33 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=
                     ((TRangedForIterator *)local_5b8,(TRangedForIterator *)local_4a8);
  if (bVar33) {
    do {
      pFVar7 = (FString *)
               (*(longlong *)
                 (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_5b8._0_8_ + (longlong)uStack_5a0._4_4_ * 0x18);
      iVar38 = *(int *)(*(longlong *)
                         (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_5b8._0_8_ + 8 + (longlong)uStack_5a0._4_4_ * 0x18);
      if (iVar38 == 0) {
        pwVar61 = L"";
        iVar38 = iVar71;
      }
      else {
        pwVar61 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        iVar38 = iVar38 + -1;
      }
      uVar37 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar38,pwVar61);
      iVar38 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(&this->FilesToConstruct,uVar37,pFVar7);
      if (iVar38 == -1) {
        pIVar15 = (this->FileOperationTracker).Ptr;
        (**(code **)((longlong)*pIVar15 + 0x40))(pIVar15,pFVar7,uVar67);
      }
      uStack_5a0 = CONCAT44(uStack_5a0._4_4_,(uint)uStack_5a0 & ~uStack_5ac);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5b8 + 8));
      bVar33 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=
                         ((TRangedForIterator *)local_5b8,(TRangedForIterator *)local_4a8);
    } while (bVar33);
  }
  lVar43 = (**(code **)((longlong)*(this->CloudChunkSourceStatistics).Ptr + 0x60))();
  LOCK();
  (this->PreviousTotalDownloadRequired).Counter =
       (this->PreviousTotalDownloadRequired).Counter + lVar43;
  UNLOCK();
  pIVar16 = (this->CloudChunkSourceStatistics).Ptr;
  (**(code **)((longlong)*pIVar16 + 0x38))(pIVar16,0);
  pIVar16 = (this->CloudChunkSourceStatistics).Ptr;
  (**(code **)((longlong)*pIVar16 + 0x30))(pIVar16,0);
  pIVar44 = FChunkDataSerializationFactory::Create((this->FileSystem).Ptr,Latest);
  pIVar45 = FChunkReferenceTrackerFactory::Create((this->ManifestSet).Ptr,&this->FilesToConstruct);
  (**(code **)((longlong)*pIVar45 + 8))(pIVar45,&local_138);
  local_750.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_750.ArrayNum = 0;
  local_750.ArrayMax = 0;
  (**(code **)((longlong)*pIVar45 + 0x40))(pIVar45,&local_750);
  pIVar17 = (IChunkDbChunkSourceStat *)(this->ChunkDbChunkSourceStatistics).Ptr;
  pIVar18 = (this->FileSystem).Ptr;
  local_720.ChunkDbFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FString,TSizedDefaultAllocator<32>_>::CopyToEmpty<FString,int>
            (&local_720.ChunkDbFiles,
             (FString *)(this->Configuration).ChunkDatabaseFiles.AllocatorInstance.Data,
             (this->Configuration).ChunkDatabaseFiles.ArrayNum,0);
  local_720.bDeleteChunkDBAfterUse = (this->Configuration).bDeleteChunkDbFilesAfterUse;
  pIVar46 = IConstructorChunkDbChunkSource::CreateChunkDbSource
                      (&local_720,pIVar18,&local_750,pIVar44,pIVar17);
  DestructItems<FString,int>
            ((FString *)local_720.ChunkDbFiles.AllocatorInstance.Data,
             local_720.ChunkDbFiles.ArrayNum);
  if (local_720.ChunkDbFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_720.ChunkDbFiles.AllocatorInstance.Data);
  }
  local_188.Elements._44_4_ = 0x80;
  local_960 = (IConstructorInstallChunkSource *)0x0;
  local_188.Elements._0_8_ = 0;
  local_188.Elements._8_8_ = 0;
  local_188.Elements._32_8_ = 0;
  local_188.Elements._40_4_ = 0;
  local_188.Elements._48_4_ = 0xffffffff;
  local_188.Elements._52_4_ = 0;
  local_188.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_188.HashSize = 0;
  pIVar31 = local_960;
  if ((((this->Configuration).bInstallToMemory == false) &&
      (pIVar47 = IConstructorInstallChunkSource::CreateInstallSource
                           ((this->FileSystem).Ptr,
                            (IInstallChunkSourceStat *)(this->InstallChunkSourceStatistics).Ptr,
                            &this->InstallationInfo,&local_138), pIVar29 = local_960,
      pIVar31 = local_960, local_960 != pIVar47)) &&
     (pIVar31 = pIVar47, local_960 != (IConstructorInstallChunkSource *)0x0)) {
    IVar19 = *local_960;
    local_960 = pIVar47;
    (**(code **)IVar19)(pIVar29,1);
    pIVar31 = local_960;
  }
  local_960 = pIVar31;
  pTVar48 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
            (**(code **)((longlong)*pIVar46 + 0x18))(pIVar46);
  if (local_960 == (IConstructorInstallChunkSource *)0x0) {
    pTVar49 = &local_188;
  }
  else {
    pTVar49 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
              (**(code **)((longlong)*local_960 + 0x18))();
  }
  this_02 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
                      (&local_138,&local_e8,pTVar49);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
            (this_02,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_2c8,pTVar48)
  ;
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Intersect
            (&local_138,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_1d8,
             pTVar48);
  pTVar49 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Intersect
                      (&local_138,&local_98,pTVar49);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
            (pTVar49,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_228,pTVar48)
  ;
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  pIVar31 = local_960;
  if ((local_228._8_4_ == local_1f4) && (local_960 != (IConstructorInstallChunkSource *)0x0)) {
    local_960 = (IConstructorInstallChunkSource *)0x0;
    (**(code **)*pIVar31)(pIVar31,1);
  }
  local_680.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10);
  local_680.UnvisitedBitMask = 0xffffffff;
  local_278._0_8_ = 0;
  local_278._8_8_ = 0;
  local_278._32_8_ = 0;
  local_278._40_4_ = 0;
  local_278._44_4_ = 0x80;
  local_278._48_4_ = 0xffffffff;
  local_278._52_4_ = 0;
  local_238 = (void *)0x0;
  local_230 = 0;
  local_680._padding_._0_4_ = 0;
  local_680._padding_._4_4_ = 1;
  local_680.CurrentBitIndex = 0;
  local_680.BaseBitIndex = 0;
  if (local_200 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_680);
  }
  TStack_8f8._padding_ = CONCAT44(local_680._padding_._4_4_,(undefined4)local_680._padding_);
  local_900 = local_228;
  TStack_8f8.CurrentBitIndex = local_680.CurrentBitIndex;
  TStack_8f8.UnvisitedBitMask = local_680.UnvisitedBitMask;
  TStack_8f8._28_4_ = local_680._28_4_;
  TStack_8f8.BaseBitIndex = local_680.BaseBitIndex;
  TStack_8f8.Array = local_680.Array;
  local_8d8 = CONCAT44(local_8d8._4_4_,local_228._8_4_ - local_1f4);
  TStack_5e0.Array = local_680.Array;
  uStack_5c0 = local_8d8;
  local_5e8 = (longlong *)local_900;
  TStack_5e0._padding_ = TStack_8f8._padding_;
  TStack_5e0._16_8_ = TStack_8f8._16_8_;
  TStack_5e0._24_8_ = TStack_8f8._24_8_;
  pTVar40 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_3d8,(TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10),
                       local_200);
  TStack_8f8._padding_ = pTVar40->_padding_;
  pTVar28 = pTVar40->Array;
  TStack_8f8.UnvisitedBitMask = pTVar40->UnvisitedBitMask;
  TStack_8f8.CurrentBitIndex = pTVar40->CurrentBitIndex;
  TStack_8f8.BaseBitIndex = pTVar40->BaseBitIndex;
  TStack_8f8._28_4_ = *(undefined4 *)&pTVar40->field_0x1c;
  TStack_8f8.Array = pTVar28;
  while( true ) {
    plVar58 = local_5e8;
    if ((int)local_5e8[1] - *(int *)((longlong)local_5e8 + 0x34) != (int)uStack_5c0) {
      local_978 = 0;
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_978);
    }
    if (((TStack_5e0.CurrentBitIndex == TStack_8f8.CurrentBitIndex) && (TStack_5e0.Array == pTVar28)
        ) && (plVar58 == (longlong *)local_228)) break;
    local_977 = 0;
    local_558 = *plVar58 + (longlong)TStack_5e0.CurrentBitIndex * 0x18;
    local_550 = &local_977;
    TSet<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>,TDefaultMapHashableKeyFuncs<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FGuid_const_&,enum_BuildPatchServices::EConstructorChunkLocation_&&>_>
              (local_278,
               (TPairInitializer<FGuid_const_&,BuildPatchServices::EConstructorChunkLocation_&&> *)
               (local_628 + 4),(bool *)&local_558);
    TStack_5e0.UnvisitedBitMask = TStack_5e0.UnvisitedBitMask & ~TStack_5e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5e0);
  }
  local_660.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
  local_660._padding_._4_4_ = 1;
  local_660._padding_._0_4_ = 0;
  local_660.UnvisitedBitMask = 0xffffffff;
  local_660.CurrentBitIndex = 0;
  local_660.BaseBitIndex = 0;
  if (local_1b0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_660);
  }
  TStack_8f8._padding_ = CONCAT44(local_660._padding_._4_4_,(undefined4)local_660._padding_);
  local_900 = local_1d8;
  TStack_8f8.CurrentBitIndex = local_660.CurrentBitIndex;
  TStack_8f8.UnvisitedBitMask = local_660.UnvisitedBitMask;
  TStack_8f8._28_4_ = local_660._28_4_;
  TStack_8f8.BaseBitIndex = local_660.BaseBitIndex;
  bVar59 = (byte)local_1b0 & 0x1f;
  local_8d8 = CONCAT44(local_8d8._4_4_,local_1d8._8_4_ - local_1a4);
  local_740._padding_._0_4_ = (int)local_1b0 >> 5;
  local_740._padding_._4_4_ = 1 << bVar59;
  local_740.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
  local_740.UnvisitedBitMask = -1 << bVar59;
  TStack_8f8.Array = local_660.Array;
  local_740.BaseBitIndex = local_1b0 & 0xffffffe0;
  TStack_610.Array = local_660.Array;
  uStack_5f0 = local_8d8;
  local_740.CurrentBitIndex = local_1b0;
  local_620.Value = local_900;
  TStack_610._padding_ = TStack_8f8._padding_;
  TStack_610._16_8_ = TStack_8f8._16_8_;
  TStack_610._24_8_ = TStack_8f8._24_8_;
  if (((int)local_1b0 < 0) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar33)) {
    pcVar63 = (code *)swi(3);
    uVar34 = (*pcVar63)();
    return (bool)uVar34;
  }
  pTVar28 = local_740.Array;
  if (local_1b0 != (local_740.Array)->NumBits) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_740);
    pTVar28 = local_740.Array;
  }
  while( true ) {
    pEVar30 = local_620.Value;
    if (*(undefined4 *)(local_620.Value + 8) - *(undefined4 *)(local_620.Value + 0x34) !=
        (int)uStack_5f0) {
      local_976 = 0;
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_976);
    }
    uVar37 = local_2a0;
    pFVar65 = local_970;
    if (((TStack_610.CurrentBitIndex == local_740.CurrentBitIndex) && (TStack_610.Array == pTVar28))
       && (pEVar30 == local_1d8)) break;
    local_975 = 1;
    local_548 = *(undefined8 *)pEVar30 + (longlong)TStack_610.CurrentBitIndex * 0x18;
    local_540 = &local_975;
    TSet<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>,TDefaultMapHashableKeyFuncs<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FGuid_const_&,enum_BuildPatchServices::EConstructorChunkLocation_&&>_>
              (local_278,&local_620,(bool *)&local_548);
    TStack_610.UnvisitedBitMask = TStack_610.UnvisitedBitMask & ~TStack_610._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_610);
  }
  iStack_6e8 = 0;
  uStack_6e4 = 1;
  local_6d0._0_4_ = 0;
  uStack_6d4 = 0;
  if (local_2a0 != 0) {
    puVar70 = (uint *)(local_2c8 + 0x10);
    if (local_2a8 != (uint *)0x0) {
      puVar70 = local_2a8;
    }
    uVar69 = *puVar70;
    local_6d0._0_4_ = 0;
    while (uVar69 == 0) {
      lVar43 = (longlong)iStack_6e8;
      local_6d0._0_4_ = (uint)local_6d0 + 0x20;
      iStack_6e8 = iStack_6e8 + 1;
      uStack_6d4 = local_2a0;
      if ((int)((local_2a0 - 1) + ((int)(local_2a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_6e8)
      goto LAB_1431f60e3;
      uVar69 = puVar70[lVar43 + 1];
    }
    uStack_6e4 = -uVar69 & uVar69;
    uVar8 = (ulonglong)uStack_6e4 * 2 + 1;
    lVar43 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar43 == 0; lVar43 = lVar43 + -1) {
      }
    }
    local_630 = (int)lVar43;
    uStack_6d4 = local_630 + -1 + (uint)local_6d0;
    if ((int)local_2a0 < (int)uStack_6d4) {
      uStack_6d4 = local_2a0;
    }
  }
LAB_1431f60e3:
  local_900 = local_2c8;
  TStack_8f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10);
  iStack_6c8 = local_2c8._8_4_ - local_294;
  TStack_8f8._padding_ = CONCAT44(uStack_6e4,iStack_6e8);
  uStack_6d8 = 0xffffffff;
  TStack_8f8.CurrentBitIndex = uStack_6d4;
  TStack_8f8.UnvisitedBitMask = 0xffffffff;
  bVar59 = (byte)local_2a0;
  local_6d0._4_4_ = local_3dc;
  local_8d8 = CONCAT44(uStack_6c4,iStack_6c8);
  iVar38 = (int)local_2a0 >> 5;
  local_908 = (ForAnyElementType *)(CONCAT44(local_908._4_4_,local_2a0) & 0xffffffffffffffe0);
  TStack_8f8.BaseBitIndex = (uint)local_6d0;
  TStack_8f8._28_4_ = local_3dc;
  uVar69 = local_2a0 & 0xffffffe0;
  local_6f0 = (longlong *)local_900;
  local_6e0 = TStack_8f8.Array;
  if ((int)local_2a0 < 0) {
    bVar33 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar33) {
      pcVar63 = (code *)swi(3);
      uVar34 = (*pcVar63)();
      return (bool)uVar34;
    }
    uVar69 = (uint)local_908;
  }
  if (uVar37 != local_2a0) {
    puVar70 = (uint *)(local_2c8 + 0x10);
    if (local_2a8 != (uint *)0x0) {
      puVar70 = local_2a8;
    }
    uVar37 = -1 << (bVar59 & 0x1f) & puVar70[iVar38];
    while (uVar37 == 0) {
      lVar43 = (longlong)iVar38;
      uVar69 = uVar69 + 0x20;
      iVar38 = iVar38 + 1;
      uVar37 = local_2a0;
      if ((int)((local_2a0 - 1) + ((int)(local_2a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar38)
      goto LAB_1431f6236;
      uVar37 = puVar70[lVar43 + 1];
    }
    uVar8 = (ulonglong)(-uVar37 & uVar37) * 2 + 1;
    lVar43 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar43 == 0; lVar43 = lVar43 + -1) {
      }
    }
    local_62c = (int)lVar43;
    uVar37 = local_62c + -1 + uVar69;
    if ((int)local_2a0 < (int)uVar37) {
      uVar37 = local_2a0;
    }
  }
LAB_1431f6236:
  while( true ) {
    pEVar30 = local_900;
    if ((int)*(longlong *)((longlong)local_900 + 8) - *(int *)((longlong)local_900 + 0x34) !=
        (int)local_8d8) {
      local_974 = 0;
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_974);
    }
    if (((TStack_8f8.CurrentBitIndex == uVar37) &&
        (TStack_8f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10))) &&
       (pEVar30 == local_2c8)) break;
    local_973[0] = 4;
    local_538 = *(longlong *)pEVar30 + (longlong)TStack_8f8.CurrentBitIndex * 0x18;
    local_530 = local_973;
    TSet<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>,TDefaultMapHashableKeyFuncs<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FGuid_const_&,enum_BuildPatchServices::EConstructorChunkLocation_&&>_>
              (local_278,
               (TPairInitializer<FGuid_const_&,BuildPatchServices::EConstructorChunkLocation_&&> *)
               local_628,(bool *)&local_538);
    TStack_8f8.UnvisitedBitMask = TStack_8f8.UnvisitedBitMask & ~TStack_8f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8f8);
  }
  pIVar15 = (pFVar65->FileOperationTracker).Ptr;
  (**(code **)((longlong)*pIVar15 + 0x20))(pIVar15,local_1d8,1);
  pIVar15 = (pFVar65->FileOperationTracker).Ptr;
  (**(code **)((longlong)*pIVar15 + 0x20))(pIVar15,local_228,3);
  pIVar15 = (pFVar65->FileOperationTracker).Ptr;
  (**(code **)((longlong)*pIVar15 + 0x20))(pIVar15,local_2c8,5);
  pIVar20 = (pFVar65->DownloadServiceStatistics).Ptr;
  pFVar50 = BuildConnectionCountConfig(pFVar65,&local_398);
  pIVar51 = FDownloadConnectionCountFactory::Create(pFVar50,pIVar20);
  pIVar21 = (pFVar65->ManifestSet).Ptr;
  pIVar22 = (ICloudChunkSourceStat *)(pFVar65->CloudChunkSourceStatistics).Ptr;
  pIVar23 = (pFVar65->MessagePump).Ptr;
  local_910 = (local_970->DownloadService).Ptr;
  pFVar52 = BuildCloudSourceConfig(&local_478,&local_970->Configuration);
  pIVar53 = IConstructorCloudChunkSource::CreateCloudSource
                      (pFVar52,local_910,pIVar44,pIVar51,pIVar23,pIVar22,pIVar21);
  if (local_478.HealthPercentages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.HealthPercentages.AllocatorInstance.Data);
  }
  if (local_478.RetryDelayTimes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.RetryDelayTimes.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_478.CloudRoots.AllocatorInstance.Data,local_478.CloudRoots.ArrayNum);
  if (local_478.CloudRoots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.CloudRoots.AllocatorInstance.Data);
  }
  pFVar65 = local_970;
  local_8c8.InstallDirectory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.InstallDirectory.Data.ArrayNum = 0;
  local_8c8.InstallDirectory.Data.ArrayMax = 0;
  local_8c8.StagingDirectory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.StagingDirectory.Data.ArrayNum = 0;
  local_8c8.StagingDirectory.Data.ArrayMax = 0;
  local_8c8.MetaDirectory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.MetaDirectory.Data.ArrayNum = 0;
  local_8c8.MetaDirectory.Data.ArrayMax = 0;
  local_8c8.ConstructList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.ConstructList.ArrayNum = 0;
  local_8c8.ConstructList.ArrayMax = 0;
  local_8c8.BackingStoreDirectory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.BackingStoreDirectory.Data.ArrayNum = 0;
  local_8c8.BackingStoreDirectory.Data.ArrayMax = 0;
  local_8c8.bDeleteChunkDBFilesAfterUse = false;
  local_8c8.SpawnAdditionalIOThreads.bIsSet = false;
  local_8c8.IOBatchSizeMB.bIsSet = false;
  local_8c8.IOBufferSizeMB.bIsSet = false;
  local_8c8.StallWhenFileSystemThrottled.bIsSet = false;
  local_8c8.DisableResumeBelowMB.bIsSet = false;
  local_8c8.bInstallToMemory = (local_970->Configuration).bInstallToMemory;
  local_8c8.bConstructInMemory = (local_970->Configuration).bConstructFilesInMemory;
  local_8c8.bSkipInitialDiskSizeCheck = (local_970->Configuration).bSkipInitialDiskSizeCheck;
  pTVar54 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
                      (&local_970->FilesToConstruct,&local_640);
  if (&local_8c8.ConstructList != pTVar54) {
    DestructItems<FString,int>
              ((FString *)local_8c8.ConstructList.AllocatorInstance.Data,
               local_8c8.ConstructList.ArrayNum);
    if (local_8c8.ConstructList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.ConstructList.AllocatorInstance.Data);
    }
    local_8c8.ConstructList.AllocatorInstance.Data = (pTVar54->AllocatorInstance).Data;
    (pTVar54->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_8c8.ConstructList.ArrayNum = pTVar54->ArrayNum;
    local_8c8.ConstructList.ArrayMax = pTVar54->ArrayMax;
    pTVar54->ArrayNum = 0;
    pTVar54->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_640.AllocatorInstance.Data,local_640.ArrayNum);
  if (local_640.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_640.AllocatorInstance.Data);
  }
  iVar71 = (pFVar65->Configuration).InstallDirectory.Data.ArrayNum;
  iVar38 = iVar71 + -1;
  if (iVar71 == 0) {
    iVar38 = 0;
  }
  ::FString::AssignRange
            (&local_8c8.InstallDirectory,
             (wchar_t *)(pFVar65->Configuration).InstallDirectory.Data.AllocatorInstance.Data,iVar38
            );
  FPaths::NormalizeDirectoryName(&local_8c8.InstallDirectory);
  local_8c8.InstallMode = (pFVar65->Configuration).InstallMode;
  local_8c8.ManifestSet = (pFVar65->ManifestSet).Ptr;
  iVar71 = (pFVar65->MetaStagingDir).Data.ArrayNum;
  iVar38 = iVar71 + -1;
  if (iVar71 == 0) {
    iVar38 = 0;
  }
  ::FString::AssignRange
            (&local_8c8.MetaDirectory,
             (wchar_t *)(pFVar65->MetaStagingDir).Data.AllocatorInstance.Data,iVar38);
  local_8c8.SharedContext = (pFVar65->Configuration).SharedContext.Object;
  iVar71 = (pFVar65->InstallStagingDir).Data.ArrayNum;
  iVar38 = iVar71 + -1;
  if (iVar71 == 0) {
    iVar38 = 0;
  }
  ::FString::AssignRange
            (&local_8c8.StagingDirectory,
             (wchar_t *)(pFVar65->InstallStagingDir).Data.AllocatorInstance.Data,iVar38);
  local_8c8.bDeleteChunkDBFilesAfterUse = (pFVar65->Configuration).bDeleteChunkDbFilesAfterUse;
  iVar71 = (pFVar65->DataStagingDir).Data.ArrayNum;
  iVar38 = iVar71 + -1;
  if (iVar71 == 0) {
    iVar38 = 0;
  }
  ::FString::AssignRange
            (&local_8c8.BackingStoreDirectory,
             (wchar_t *)(pFVar65->DataStagingDir).Data.AllocatorInstance.Data,iVar38);
  pTVar5 = &(pFVar65->Configuration).ConstructorSpawnAdditionalIOThreads;
  if (pTVar5 != &local_8c8.SpawnAdditionalIOThreads) {
    if ((pFVar65->Configuration).ConstructorSpawnAdditionalIOThreads.bIsSet == false) {
      if (local_8c8.SpawnAdditionalIOThreads.bIsSet != false) {
        local_8c8.SpawnAdditionalIOThreads.bIsSet = false;
      }
    }
    else {
      local_8c8.SpawnAdditionalIOThreads.TypedValue = pTVar5->TypedValue;
      local_8c8.SpawnAdditionalIOThreads.bIsSet = true;
    }
  }
  pTVar6 = &(pFVar65->Configuration).ConstructorIOBufferSizeMB;
  if (pTVar6 != &local_8c8.IOBufferSizeMB) {
    if ((pFVar65->Configuration).ConstructorIOBufferSizeMB.bIsSet == false) {
      if (local_8c8.IOBufferSizeMB.bIsSet != false) {
        local_8c8.IOBufferSizeMB.bIsSet = false;
      }
    }
    else {
      local_8c8.IOBufferSizeMB.TypedValue = pTVar6->TypedValue;
      local_8c8.IOBufferSizeMB.bIsSet = true;
    }
  }
  pTVar6 = &(pFVar65->Configuration).ConstructorIOBatchSizeMB;
  if (pTVar6 != &local_8c8.IOBatchSizeMB) {
    if ((pFVar65->Configuration).ConstructorIOBatchSizeMB.bIsSet == false) {
      if (local_8c8.IOBatchSizeMB.bIsSet != false) {
        local_8c8.IOBatchSizeMB.bIsSet = false;
      }
    }
    else {
      local_8c8.IOBatchSizeMB.TypedValue = pTVar6->TypedValue;
      local_8c8.IOBatchSizeMB.bIsSet = true;
    }
  }
  pTVar5 = &(pFVar65->Configuration).ConstructorStallWhenFileSystemThrottled;
  if (pTVar5 != &local_8c8.StallWhenFileSystemThrottled) {
    if ((pFVar65->Configuration).ConstructorStallWhenFileSystemThrottled.bIsSet == false) {
      if (local_8c8.StallWhenFileSystemThrottled.bIsSet != false) {
        local_8c8.StallWhenFileSystemThrottled.bIsSet = false;
      }
    }
    else {
      local_8c8.StallWhenFileSystemThrottled.TypedValue = pTVar5->TypedValue;
      local_8c8.StallWhenFileSystemThrottled.bIsSet = true;
    }
  }
  pTVar6 = &(pFVar65->Configuration).ConstructorDisableResumeBelowMB;
  if (pTVar6 != &local_8c8.DisableResumeBelowMB) {
    if ((pFVar65->Configuration).ConstructorDisableResumeBelowMB.bIsSet == false) {
      if (local_8c8.DisableResumeBelowMB.bIsSet != false) {
        local_8c8.DisableResumeBelowMB.bIsSet = false;
      }
    }
    else {
      local_8c8.DisableResumeBelowMB.TypedValue = pTVar6->TypedValue;
      local_8c8.DisableResumeBelowMB.bIsSet = true;
    }
  }
  local_7f8 = ::operator_new(0x2b0);
  if (local_7f8 == (FBuildPatchFileConstructor *)0x0) {
    this_03 = (FBuildPatchFileConstructor *)0x0;
  }
  else {
    pIVar24 = (IFileConstructorStat *)(pFVar65->FileConstructorStatistics).Ptr;
    local_910 = (IDownloadService *)(local_970->InstallerAnalytics).Ptr;
    pIVar23 = (local_970->MessagePump).Ptr;
    local_7d8 = (local_970->InstallerError).Ptr;
    local_7e8 = local_960;
    local_7f0 = (local_970->FileSystem).Ptr;
    pFVar55 = FFileConstructorConfig::FFileConstructorConfig(&local_360,&local_8c8);
    this_03 = FBuildPatchFileConstructor::FBuildPatchFileConstructor
                        (local_7f8,pFVar55,local_7f0,pIVar46,pIVar53,local_7e8,pIVar45,local_7d8,
                         (IInstallerAnalytics *)local_910,pIVar23,pIVar24,
                         (TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
                          *)local_278);
    pFVar65 = local_970;
  }
  lVar43 = 0;
  if (local_960 != (IConstructorInstallChunkSource *)0x0) {
    local_520 = &local_960;
    local_528 = pFVar65;
    FVar56 = TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
             ::
             AddLambda<_BuildPatchServices::FBuildPatchInstaller::RunInstallation_::__l149::<lambda_2>_>
                       ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                         *)&this_03->BeforeDeleteFileEvent,&local_510);
    lVar43 = *(longlong *)FVar56.ID;
  }
  pFVar64 = &pFVar65->ThreadLock;
  local_940.RegistrationArray = &local_970->Controllables;
  local_940.RegisteredArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_940.RegisteredArray.ArrayNum = 0;
  local_940.RegisteredArray.ArrayMax = 0;
  local_940.bIsPaused = &local_970->bIsPaused;
  local_940.bShouldAbort = &local_970->bShouldAbort;
  local_940.SyncObject = pFVar64;
  FScopedControllables::Register(&local_940,(IControllable *)this_03);
  if ((int)local_968 < 1) {
    if (pFVar64 == (FWindowsRecursiveMutex *)0x0) goto LAB_1431f750e;
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar64);
    (local_970->BuildStats).NumChunksRequired = local_138.Elements._8_4_ - local_138.Elements._52_4_
    ;
    (local_970->BuildStats).ChunksInChunkDbs = local_1d8._8_4_ - local_1a4;
    (local_970->BuildStats).ChunksQueuedForDownload = local_2c8._8_4_ - local_294;
    (local_970->BuildStats).ChunksLocallyAvailable = local_228._8_4_ - local_1f4;
    if (3 < (byte)LogBPSInstallerConfig._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar64);
  }
  pFVar65 = local_970;
  cVar32 = (**(code **)((longlong)*(local_970->ManifestSet).Ptr + 0xa8))();
  if ((cVar32 == '\0') ||
     (bVar33 = true,
     *(int *)&(pFVar65->FilesToConstruct).Elements.field_0x8 !=
     *(int *)&(pFVar65->FilesToConstruct).Elements.field_0x34)) {
    bVar33 = false;
  }
  cVar32 = (**(code **)((longlong)*(pFVar65->ManifestSet).Ptr + 0xb0))();
  if (cVar32 == '\0') {
    local_7e0[0] = 0;
  }
  else {
    local_7e0[0] = __real_3d4ccccd;
    if (bVar33) {
      local_7e0[0] = __real_3ca3d70a;
    }
  }
  EVar13 = (pFVar65->Configuration).VerifyMode;
  local_7d0 = __real_3dfa4fa5;
  if ((EVar13 != ShaVerifyAllFiles) && (EVar13 != ShaVerifyTouchedFiles)) {
    local_7d0 = __real_3d088889;
  }
  local_808 = 0;
  local_804 = 3;
  (**(code **)((pFVar65->BuildProgress)._padding_ + 0x20))
            (&pFVar65->BuildProgress,&local_804,&local_808);
  local_800[0] = 0x3d4ccccd;
  local_7f8 = (FBuildPatchFileConstructor *)CONCAT44(local_7f8._4_4_,5);
  (**(code **)((pFVar65->BuildProgress)._padding_ + 0x20))
            (&pFVar65->BuildProgress,&local_7f8,local_800);
  uVar67 = __real_3f800000;
  if (*(int *)&(pFVar65->FilesToConstruct).Elements.field_0x8 -
      *(int *)&(pFVar65->FilesToConstruct).Elements.field_0x34 < 1) {
    uVar67 = 0;
  }
  local_7f0 = (IFileSystem *)CONCAT44(local_7f0._4_4_,uVar67);
  local_7e8 = (IConstructorInstallChunkSource *)CONCAT44(local_7e8._4_4_,4);
  (**(code **)((pFVar65->BuildProgress)._padding_ + 0x20))
            (&pFVar65->BuildProgress,&local_7e8,&local_7f0);
  local_7d8 = (IInstallerError *)CONCAT44(local_7d8._4_4_,6);
  (**(code **)((pFVar65->BuildProgress)._padding_ + 0x20))
            (&pFVar65->BuildProgress,&local_7d8,local_7e0);
  local_910 = (IDownloadService *)CONCAT44(local_910._4_4_,7);
  (**(code **)((pFVar65->BuildProgress)._padding_ + 0x20))();
  if (bVar33) {
    if (4 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    local_7cc = 0x3f800000;
    local_7c8 = 3;
    (**(code **)((pFVar65->BuildProgress)._padding_ + 0x18))
              (&pFVar65->BuildProgress,&local_7c8,&local_7cc);
    local_7c4 = 0x3f800000;
    local_7c0 = 4;
    (**(code **)((pFVar65->BuildProgress)._padding_ + 0x18))
              (&pFVar65->BuildProgress,&local_7c0,&local_7c4);
    local_7bc = 0x3f800000;
    local_7b8 = 5;
    (**(code **)((pFVar65->BuildProgress)._padding_ + 0x18))();
  }
  if (0 < *(int *)&(pFVar65->FilesToConstruct).Elements.field_0x8 -
          *(int *)&(pFVar65->FilesToConstruct).Elements.field_0x34) {
    local_7b4 = 0x3f800000;
    local_7b0 = 1;
    (**(code **)((pFVar65->BuildProgress)._padding_ + 0x18))(&pFVar65->BuildProgress);
    local_968 = (LPCRITICAL_SECTION)&pFVar65->InitializeTimer;
    EnterCriticalSection(local_968);
    p_Var60 = (LPCRITICAL_SECTION)&pFVar65->InitializeTimer;
    if (((pFVar65->InitializeTimer).bIsRunning != false) &&
       ((pFVar65->InitializeTimer).bIsRunning = false, (pFVar65->InitializeTimer).bIsPaused == false
       )) {
      uVar57 = (pFVar65->InitializeTimer).StartCycles;
      uVar39 = FStatsCollector::GetCycles();
      *(ulong64 *)&local_968[1].LockCount = *(longlong *)&local_968[1].LockCount + (uVar39 - uVar57)
      ;
      p_Var60 = local_968;
      pFVar65 = local_970;
    }
    LeaveCriticalSection(p_Var60);
  }
  p_Var60 = (LPCRITICAL_SECTION)&pFVar65->ConstructTimer;
  local_968 = p_Var60;
  EnterCriticalSection(p_Var60);
  if (((pFVar65->ConstructTimer).bIsRunning == false) &&
     ((pFVar65->ConstructTimer).bIsRunning = true, (pFVar65->ConstructTimer).bIsPaused == false)) {
    uVar57 = FStatsCollector::GetCycles();
    (pFVar65->ConstructTimer).StartCycles = uVar57;
  }
  LeaveCriticalSection(p_Var60);
  FBuildPatchFileConstructor::Run(this_03);
  EnterCriticalSection(p_Var60);
  if (((pFVar65->ConstructTimer).bIsRunning != false) &&
     ((pFVar65->ConstructTimer).bIsRunning = false, (pFVar65->ConstructTimer).bIsPaused == false)) {
    uVar57 = (pFVar65->ConstructTimer).StartCycles;
    uVar39 = FStatsCollector::GetCycles();
    *(ulong64 *)&local_968[1].LockCount = *(longlong *)&local_968[1].LockCount + (uVar39 - uVar57);
    p_Var60 = local_968;
  }
  LeaveCriticalSection(p_Var60);
  if (lVar43 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_03->BeforeDeleteFileEvent,(FWriteAccessScope *)&local_708);
    uVar37 = 0;
    if (0 < *(int *)&(this_03->BeforeDeleteFileEvent).field_0x10) {
      local_968 = (LPCRITICAL_SECTION)0x0;
      do {
        uVar69 = 0;
        if ((int)uVar37 < *(int *)&(this_03->BeforeDeleteFileEvent).field_0x10) {
          uVar69 = ~uVar37 >> 0x1f;
        }
        if ((uVar69 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar63 = (code *)swi(3);
          uVar34 = (*pcVar63)();
          return (bool)uVar34;
        }
        local_908 = (ForAnyElementType *)
                    ((longlong)&local_968->DebugInfo +
                    *(longlong *)&(this_03->BeforeDeleteFileEvent).field_0x8);
        if (((*(int *)&local_908[1].Data != 0) &&
            (local_908->Data != (FScriptContainerElement *)0x0)) &&
           (plVar58 = (longlong *)(**(code **)(*(longlong *)local_908->Data + 0x40))(),
           this_01 = local_908, *plVar58 == lVar43)) {
          local_958 = 0;
          if ((*(int *)&local_908[1].Data != 0) &&
             (local_908->Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_908->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10);
            *(undefined4 *)&this_01[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this_03->BeforeDeleteFileEvent,false);
          if (local_708.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_708.Accessor,&local_708);
          }
          goto LAB_1431f6d54;
        }
        uVar37 = uVar37 + 1;
        local_968 = (LPCRITICAL_SECTION)&local_968->OwningThread;
      } while ((int)uVar37 < *(int *)&(this_03->BeforeDeleteFileEvent).field_0x10);
    }
    if (local_708.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_708.Accessor,&local_708);
    }
  }
LAB_1431f6d54:
  if (4 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  pFVar65 = local_970;
  if ((local_970->Configuration).bInstallToMemory != false) {
    pTVar66 = &this_03->MemoryOutputFiles;
    if (&local_970->FilesInstalledToMemory != pTVar66) {
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&local_970->FilesInstalledToMemory,0,
                        *(int *)&(local_970->FilesInstalledToMemory).field_0x8);
      if (*(void **)&pFVar65->FilesInstalledToMemory != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar65->FilesInstalledToMemory);
      }
      local_970 = (FBuildPatchInstaller *)&(pFVar65->FilesInstalledToMemory).field_0x10;
      *(undefined8 *)&pFVar65->FilesInstalledToMemory = *(undefined8 *)pTVar66;
      puVar2 = &(this_03->MemoryOutputFiles).field_0x10;
      *(undefined8 *)pTVar66 = 0;
      *(undefined4 *)&(pFVar65->FilesInstalledToMemory).field_0x8 =
           *(undefined4 *)&(this_03->MemoryOutputFiles).field_0x8;
      *(undefined4 *)&(pFVar65->FilesInstalledToMemory).field_0xc =
           *(undefined4 *)&(this_03->MemoryOutputFiles).field_0xc;
      *(undefined8 *)&(this_03->MemoryOutputFiles).field_0x8 = 0;
      if (local_970 != (FBuildPatchInstaller *)puVar2) {
        if (*(longlong *)&(this_03->MemoryOutputFiles).field_0x20 == 0) {
          memmove(local_970,puVar2,0x10);
        }
        if ((void *)local_970->_padding_ != (void *)0x0) {
          FMemory::Free((void *)local_970->_padding_);
        }
        local_970->_padding_ = *(longlong *)&(this_03->MemoryOutputFiles).field_0x20;
        *(undefined8 *)&(this_03->MemoryOutputFiles).field_0x20 = 0;
        *(undefined4 *)&local_970->_padding_ =
             *(undefined4 *)&(this_03->MemoryOutputFiles).field_0x28;
        *(undefined4 *)((longlong)&local_970->_padding_ + 4) =
             *(undefined4 *)&(this_03->MemoryOutputFiles).field_0x2c;
        *(undefined8 *)&(this_03->MemoryOutputFiles).field_0x28 = 0;
      }
      *(undefined4 *)&(pFVar65->FilesInstalledToMemory).field_0x30 =
           *(undefined4 *)&(this_03->MemoryOutputFiles).field_0x30;
      *(undefined4 *)&(pFVar65->FilesInstalledToMemory).field_0x34 =
           *(undefined4 *)&(this_03->MemoryOutputFiles).field_0x34;
      *(undefined4 *)&(this_03->MemoryOutputFiles).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_03->MemoryOutputFiles).field_0x34 = 0;
      if (*(longlong *)&(this_03->MemoryOutputFiles).field_0x40 == 0) {
        *(undefined4 *)&(pFVar65->FilesInstalledToMemory).field_0x38 =
             *(undefined4 *)&(this_03->MemoryOutputFiles).field_0x38;
      }
      pvVar25 = *(void **)&(pFVar65->FilesInstalledToMemory).field_0x40;
      if (pvVar25 != (void *)0x0) {
        FMemory::Free(pvVar25);
      }
      *(undefined8 *)&(pFVar65->FilesInstalledToMemory).field_0x40 =
           *(undefined8 *)&(this_03->MemoryOutputFiles).field_0x40;
      *(undefined8 *)&(this_03->MemoryOutputFiles).field_0x40 = 0;
      *(undefined4 *)&(pFVar65->FilesInstalledToMemory).field_0x48 =
           *(undefined4 *)&(this_03->MemoryOutputFiles).field_0x48;
      *(undefined4 *)&(this_03->MemoryOutputFiles).field_0x48 = 0;
    }
  }
  if (pFVar65 != (FBuildPatchInstaller *)0xfffffffffffffe98) {
    EnterCriticalSection((LPCRITICAL_SECTION)&pFVar65->ThreadLock);
    (pFVar65->BuildStats).ProcessRequiredDiskSpace = (ulong64)this_03->RequiredDiskSpace;
    (pFVar65->BuildStats).ProcessAvailableDiskSpace = (ulong64)this_03->AvailableDiskSpace;
    uVar9 = (this_03->BackingStoreStats).MemoryLimitBytes;
    uVar10 = (this_03->BackingStoreStats).DiskLoadFailureCount;
    uVar11 = (this_03->BackingStoreStats).DiskLostChunkCount;
    local_6d0 = *(undefined8 *)&(this_03->BackingStoreStats).DiskChunkLoadCount;
    uVar57 = (this_03->BackingStoreStats).MemoryPeakUsageBytes;
    (pFVar65->BuildStats).DriveStorePeakBytes =
         (uint)(this_03->BackingStoreStats).DiskPeakUsageBytes;
    (pFVar65->BuildStats).NumDriveStoreLostChunks = uVar11;
    (pFVar65->BuildStats).NumDriveStoreChunkLoads = (uint)local_6d0;
    (pFVar65->BuildStats).NumDriveStoreLoadFailures = uVar10;
    (pFVar65->BuildStats).MemoryStoreSizePeakBytes = uVar57;
    (pFVar65->BuildStats).MemoryStoreSizeLimitBytes = uVar9;
    LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar65->ThreadLock);
    pIVar14 = (pFVar65->Verifier).Ptr;
    (**(code **)((longlong)*pIVar14 + 0x20))(pIVar14,&pFVar65->FilesToConstruct);
    FScopedControllables::~FScopedControllables(&local_940);
    (**(code **)this_03->_padding_)(this_03,1);
    if (local_8c8.BackingStoreDirectory.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.BackingStoreDirectory.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_8c8.ConstructList.AllocatorInstance.Data,
               local_8c8.ConstructList.ArrayNum);
    if (local_8c8.ConstructList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.ConstructList.AllocatorInstance.Data);
    }
    if (local_8c8.MetaDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.MetaDirectory.Data.AllocatorInstance.Data);
    }
    if (local_8c8.StagingDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.StagingDirectory.Data.AllocatorInstance.Data);
    }
    if (local_8c8.InstallDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.InstallDirectory.Data.AllocatorInstance.Data);
    }
    if (pIVar53 != (IConstructorCloudChunkSource *)0x0) {
      (**(code **)*pIVar53)(pIVar53,1);
    }
    if (pIVar51 != (IDownloadConnectionCount *)0x0) {
      (**(code **)((longlong)*pIVar51 + 8))(pIVar51,1);
    }
    local_230 = 0;
    if (local_238 != (void *)0x0) {
      FMemory::Free(local_238);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_278);
    local_1e0 = 0;
    if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_228);
    local_190 = 0;
    if (local_198 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1d8);
    local_280 = 0;
    if (local_288 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_288);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2c8);
    local_188.HashSize = 0;
    if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_188.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_188.Elements);
    if (local_960 != (IConstructorInstallChunkSource *)0x0) {
      (**(code **)*local_960)(local_960,1);
    }
    if (pIVar46 != (IConstructorChunkDbChunkSource *)0x0) {
      (**(code **)*pIVar46)(pIVar46,1);
    }
    if (local_750.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_750.AllocatorInstance.Data);
    }
    local_138.HashSize = 0;
    if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_138.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138.Elements);
    if (pIVar45 != (IChunkReferenceTracker *)0x0) {
      (**(code **)*pIVar45)(pIVar45,1);
    }
    if (pIVar44 != (IChunkDataSerialization *)0x0) {
      (**(code **)*pIVar44)(pIVar44,1);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&pFVar65->ThreadLock);
    uVar37 = (**(code **)((longlong)*(pFVar65->DownloadServiceStatistics).Ptr + 0x28))();
    pIVar20 = (pFVar65->DownloadServiceStatistics).Ptr;
    (pFVar65->BuildStats).NumChunksDownloaded = uVar37;
    uVar37 = (**(code **)((longlong)*pIVar20 + 0x30))();
    pIVar16 = (pFVar65->CloudChunkSourceStatistics).Ptr;
    (pFVar65->BuildStats).NumFailedDownloads = uVar37;
    uVar37 = (**(code **)((longlong)*pIVar16 + 0x68))();
    pIVar16 = (pFVar65->CloudChunkSourceStatistics).Ptr;
    (pFVar65->BuildStats).NumBadDownloads = uVar37;
    uVar37 = (**(code **)((longlong)*pIVar16 + 0x70))();
    pIVar16 = (pFVar65->CloudChunkSourceStatistics).Ptr;
    (pFVar65->BuildStats).NumAbortedDownloads = uVar37;
    fVar72 = (float)(**(code **)((longlong)*pIVar16 + 0x78))();
    pIVar26 = (pFVar65->InstallChunkSourceStatistics).Ptr;
    (pFVar65->BuildStats).OverallRequestSuccessRate = fVar72;
    uVar37 = (**(code **)((longlong)*pIVar26 + 0x30))();
    pIVar27 = (pFVar65->ChunkDbChunkSourceStatistics).Ptr;
    (pFVar65->BuildStats).NumChunksRecycled = uVar37;
    uVar37 = (**(code **)((longlong)*pIVar27 + 0x28))();
    pIVar26 = (pFVar65->InstallChunkSourceStatistics).Ptr;
    (pFVar65->BuildStats).NumChunksReadFromChunkDbs = uVar37;
    uVar37 = (**(code **)((longlong)*pIVar26 + 0x38))();
    pIVar27 = (pFVar65->ChunkDbChunkSourceStatistics).Ptr;
    (pFVar65->BuildStats).NumRecycleFailures = uVar37;
    uVar37 = (**(code **)((longlong)*pIVar27 + 0x30))();
    pIVar16 = (pFVar65->CloudChunkSourceStatistics).Ptr;
    (pFVar65->BuildStats).NumChunkDbChunksFailed = uVar37;
    (**(code **)((longlong)*pIVar16 + 0x88))(pIVar16,&local_950);
    if ((local_948 < 5) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar63 = (code *)swi(3);
      uVar34 = (*pcVar63)();
      return (bool)uVar34;
    }
    (pFVar65->BuildStats).ExcellentDownloadHealthTime = local_950[4];
    if ((local_948 < 4) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar63 = (code *)swi(3);
      uVar34 = (*pcVar63)();
      return (bool)uVar34;
    }
    (pFVar65->BuildStats).GoodDownloadHealthTime = local_950[3];
    if ((local_948 < 3) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar63 = (code *)swi(3);
      uVar34 = (*pcVar63)();
      return (bool)uVar34;
    }
    (pFVar65->BuildStats).OkDownloadHealthTime = local_950[2];
    if ((local_948 < 2) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar63 = (code *)swi(3);
      uVar34 = (*pcVar63)();
      return (bool)uVar34;
    }
    (pFVar65->BuildStats).PoorDownloadHealthTime = local_950[1];
    if ((local_948 < 1) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar63 = (code *)swi(3);
      uVar34 = (*pcVar63)();
      return (bool)uVar34;
    }
    (pFVar65->BuildStats).DisconnectedDownloadHealthTime = *local_950;
    uVar37 = (**(code **)((longlong)*(pFVar65->CloudChunkSourceStatistics).Ptr + 0x98))();
    (pFVar65->BuildStats).ActiveRequestCountPeak = uVar37;
    if (local_950 != (float *)0x0) {
      FMemory::Free(local_950);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar65->ThreadLock);
    if (4 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    cVar32 = (**(code **)((longlong)*(pFVar65->InstallerError).Ptr + 8))();
    if (cVar32 == '\0') {
      local_7ac = 0x3f800000;
      local_7a8 = 1;
      (**(code **)((pFVar65->BuildProgress)._padding_ + 0x18))
                (&pFVar65->BuildProgress,&local_7a8,&local_7ac);
      local_7a4 = 0x3f800000;
      local_7a0 = 2;
      (**(code **)((pFVar65->BuildProgress)._padding_ + 0x18))
                (&pFVar65->BuildProgress,&local_7a0,&local_7a4);
      local_79c = 0x3f800000;
      local_798 = 3;
      (**(code **)((pFVar65->BuildProgress)._padding_ + 0x18))
                (&pFVar65->BuildProgress,&local_798,&local_79c);
      local_794 = 0x3f800000;
      local_790 = 4;
      (**(code **)((pFVar65->BuildProgress)._padding_ + 0x18))
                (&pFVar65->BuildProgress,&local_790,&local_794);
      EnterCriticalSection((LPCRITICAL_SECTION)&pFVar65->InitializeTimer);
      if (((pFVar65->InitializeTimer).bIsRunning != false) &&
         ((pFVar65->InitializeTimer).bIsRunning = false,
         (pFVar65->InitializeTimer).bIsPaused == false)) {
        uVar57 = (pFVar65->InitializeTimer).StartCycles;
        uVar39 = FStatsCollector::GetCycles();
        puVar1 = &(pFVar65->InitializeTimer).Cycles;
        *puVar1 = *puVar1 + (uVar39 - uVar57);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar65->InitializeTimer);
    }
    return cVar32 == '\0';
  }
LAB_1431f750e:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RunPrerequisites @ 1431f7520

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::RunPrerequisites(FBuildPatchInstaller *this)

{
  undefined1 uVar1;
  IMachineConfig *pIVar2;
  IPrerequisites *pIVar3;
  
  pIVar2 = FMachineConfigFactory::Create(&this->LocalMachineConfigFile,true);
  pIVar3 = FPrerequisitesFactory::Create
                     (pIVar2,(this->InstallerAnalytics).Ptr,(this->InstallerError).Ptr,
                      (this->FileSystem).Ptr,(this->Platform).Ptr);
  uVar1 = (**(code **)((longlong)*pIVar3 + 8))
                    (pIVar3,(this->ManifestSet).Ptr,&this->Configuration,&this->InstallStagingDir,
                     &this->BuildProgress);
  if (pIVar3 != (IPrerequisites *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  if (pIVar2 != (IMachineConfig *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  return (bool)uVar1;
}

// RunVerification @ 1431f75e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::RunVerification
          (FBuildPatchInstaller *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  bool bVar3;
  EVerifyError EVar4;
  int iVar5;
  IVerifier *pIVar6;
  IInstallerError *pIVar7;
  code *pcVar8;
  IVerifierStatistics *pIVar9;
  undefined1 *puVar10;
  void *pvVar11;
  IFileSystem *pIVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 uVar15;
  char cVar16;
  int iVar17;
  EVerifyError EVar18;
  int iVar19;
  ulong64 uVar20;
  FText *pFVar21;
  ulong64 uVar22;
  byte bVar23;
  longlong lVar24;
  EVerifyError *pEVar25;
  undefined1 *puVar26;
  wchar_t *pwVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  TMap<BuildPatchServices::EVerifyError,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,int,0>_>
  *pTVar32;
  FScriptContainerElement *pFVar33;
  ForElementType<unsigned_int> FVar34;
  FScriptContainerElement *pFVar35;
  FScriptContainerElement *pFVar36;
  bool bVar37;
  undefined1 auStackY_1d8 [32];
  undefined1 local_196;
  undefined1 local_195 [5];
  FString local_190;
  FString local_180;
  undefined4 local_170;
  undefined4 local_16c;
  EVerifyResult local_168 [4];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_158;
  longlong *local_150;
  int iStack_148;
  uint uStack_144;
  TBitArray<FDefaultBitArrayAllocator> *local_140;
  undefined4 uStack_138;
  uint uStack_134;
  int local_130;
  uint uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined1 local_120 [4];
  int local_11c;
  undefined1 local_118 [8];
  FString local_110;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  ITextData *local_d0;
  uint local_c8;
  FString local_c0;
  FString local_b0;
  longlong local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((this->Configuration).bInstallToMemory == false) {
    local_158 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&SingletonFunctionLockCS,4000);
      atexit(`BuildPatchServices::FBuildPatchInstaller::RunVerification'::__l2::
             _dynamic_atexit_destructor_for__SingletonFunctionLockCS__);
      _Init_thread_footer(&::_TSS0);
    }
    bVar3 = (this->Configuration).bAllowConcurrentExecution;
    if (bVar3 == false) {
      EnterCriticalSection((LPCRITICAL_SECTION)&SingletonFunctionLockCS);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->VerifyTimer);
    if (((this->VerifyTimer).bIsRunning == false) &&
       ((this->VerifyTimer).bIsRunning = true, (this->VerifyTimer).bIsPaused == false)) {
      uVar20 = FStatsCollector::GetCycles();
      (this->VerifyTimer).StartCycles = uVar20;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->VerifyTimer);
    local_170 = 0;
    local_16c = 7;
    (**(code **)((this->BuildProgress)._padding_ + 0x18))(&this->BuildProgress,&local_16c);
    if (4 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    pIVar6 = (this->Verifier).Ptr;
    iVar17 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,param_1);
    bVar37 = iVar17 == 0;
    local_168[3] = iVar17;
    if (iVar17 != 0) {
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pIVar7 = (this->InstallerError).Ptr;
      pcVar8 = *(code **)((longlong)*pIVar7 + 0x38);
      pFVar21 = FText::GetEmpty();
      local_d0 = (pFVar21->TextData).Reference;
      if (local_d0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0 + 8))(local_d0,local_120);
      }
      local_c8 = pFVar21->Flags;
      pwVar27 = VerifyErrorCodes::FileMissing;
      if ((((iVar17 != 2) && (pwVar27 = VerifyErrorCodes::OpenFileFailed, iVar17 != 3)) &&
          (pwVar27 = VerifyErrorCodes::HashCheckFailed, iVar17 != 4)) &&
         (pwVar27 = VerifyErrorCodes::FileSizeFailed, iVar17 != 5)) {
        pwVar27 = VerifyErrorCodes::UnknownFail;
      }
      (*pcVar8)(pIVar7,4,pwVar27,0);
    }
    pIVar9 = (this->VerifierStatistics).Ptr;
    (**(code **)((longlong)*pIVar9 + 0x50))(pIVar9,&local_98);
    uVar31 = local_88.NumBits;
    iStack_148 = 0;
    uStack_144 = 1;
    local_130 = 0;
    uStack_134 = 0;
    if (local_88.NumBits != 0) {
      FVar34 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_88.AllocatorInstance.SecondaryData;
      }
      uVar29 = *(uint *)FVar34;
      while (uVar29 == 0) {
        lVar24 = (longlong)iStack_148;
        local_130 = local_130 + 0x20;
        iStack_148 = iStack_148 + 1;
        uStack_134 = local_88.NumBits;
        if ((int)((local_88.NumBits - 1U) + ((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iStack_148) goto LAB_1431f78a0;
        uVar29 = *(uint *)((longlong)FVar34 + (lVar24 + 1) * 4);
      }
      uStack_144 = -uVar29 & uVar29;
      uVar2 = (ulonglong)uStack_144 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_11c = (int)lVar24;
      uStack_134 = local_130 + -1 + local_11c;
      if (local_88.NumBits < (int)uStack_134) {
        uStack_134 = local_88.NumBits;
      }
    }
LAB_1431f78a0:
    local_150 = &local_98;
    local_140 = &local_88;
    uVar29 = local_88.NumBits & 0xffffffe0;
    iStack_128 = (int)local_90 - local_64;
    uStack_138 = 0xffffffff;
    TStack_f8.CurrentBitIndex = uStack_134;
    TStack_f8.UnvisitedBitMask = 0xffffffff;
    TStack_f8._padding_ = CONCAT44(uStack_144,iStack_148);
    iVar17 = local_88.NumBits >> 5;
    TStack_f8._28_4_ = uStack_134;
    TStack_f8.BaseBitIndex = local_130;
    uStack_d8 = CONCAT44(uStack_124,iStack_128);
    bVar23 = (byte)local_88.NumBits;
    uStack_12c = uStack_134;
    local_100 = local_150;
    TStack_f8.Array = local_140;
    if (local_88.NumBits < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar14) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
    }
    if (uVar31 != local_88.NumBits) {
      FVar34 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_88.AllocatorInstance.SecondaryData;
      }
      uVar31 = -1 << (bVar23 & 0x1f) & *(uint *)((longlong)FVar34 + (longlong)iVar17 * 4);
      while (uVar31 == 0) {
        lVar24 = (longlong)iVar17;
        uVar29 = uVar29 + 0x20;
        iVar17 = iVar17 + 1;
        uVar31 = local_88.NumBits;
        if ((int)((local_88.NumBits - 1U) + ((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iVar17) goto LAB_1431f799c;
        uVar31 = *(uint *)((longlong)FVar34 + (lVar24 + 1) * 4);
      }
      uVar2 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      uVar31 = (int)lVar24 + -1 + uVar29;
      if (local_88.NumBits < (int)uVar31) {
        uVar31 = local_88.NumBits;
      }
    }
LAB_1431f799c:
    while( true ) {
      plVar13 = local_100;
      if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
        `TSparseArray<TSparseSetElement<TTuple<enum_BuildPatchServices::EVerifyError,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_196);
      }
      pTVar32 = &this->CachedVerifyErrorCounts;
      if (((TStack_f8.CurrentBitIndex == uVar31) && (TStack_f8.Array == &local_88)) &&
         (plVar13 == &local_98)) break;
      lVar24 = *plVar13;
      EVar4 = *(EVerifyError *)(lVar24 + (longlong)TStack_f8.CurrentBitIndex * 0x10);
      if (*(int *)&(this->CachedVerifyErrorCounts).field_0x8 !=
          *(int *)&(this->CachedVerifyErrorCounts).field_0x34) {
        puVar10 = *(undefined1 **)&(this->CachedVerifyErrorCounts).field_0x40;
        puVar26 = &(this->CachedVerifyErrorCounts).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar26 = puVar10;
        }
        EVar18 = *(EVerifyError *)
                  (puVar26 +
                  (ulonglong)
                  (*(int *)&(this->CachedVerifyErrorCounts).field_0x48 - OpenFileFailed & EVar4) * 4
                  );
        if (EVar18 != ~FileMissing) {
          do {
            pEVar25 = (EVerifyError *)
                      ((longlong)(int)EVar18 * 0x10 + *(longlong *)&this->CachedVerifyErrorCounts);
            if (*pEVar25 == EVar4) {
              if (pEVar25 != (EVerifyError *)0x0) {
                EVar18 = pEVar25[1];
                goto LAB_1431f7a49;
              }
              break;
            }
            EVar18 = pEVar25[2];
          } while (EVar18 != ~FileMissing);
        }
      }
      EVar18 = FileMissing;
LAB_1431f7a49:
      if (((int)EVar18 < *(int *)(lVar24 + 4 + (longlong)TStack_f8.CurrentBitIndex * 0x10)) &&
         (bVar14 = TryConvertToVerifyResult(EVar4,local_168), bVar14)) {
        ::FString::FString(&local_b0,InstallErrorPrefixes::ErrorTypeStrings[4]);
        pwVar27 = VerifyErrorCodes::FileMissing;
        if ((local_168[0] != FileMissing) &&
           (((pwVar27 = VerifyErrorCodes::OpenFileFailed, local_168[0] != OpenFileFailed &&
             (pwVar27 = VerifyErrorCodes::HashCheckFailed, local_168[0] != HashCheckFailed)) &&
            (pwVar27 = VerifyErrorCodes::FileSizeFailed, local_168[0] != FileSizeFailed)))) {
          pwVar27 = VerifyErrorCodes::UnknownFail;
        }
        ::FString::FString(&local_c0,pwVar27);
        if (4 < (byte)LogBuildPatchServices._0_1_) {
          ::FString::ConcatFF(&local_110,&local_b0,&local_c0);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    }
    if (pTVar32 !=
        (TMap<BuildPatchServices::EVerifyError,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,int,0>_>
         *)&local_98) {
      if (*(void **)pTVar32 != (void *)0x0) {
        FMemory::Free(*(void **)pTVar32);
      }
      *(longlong *)pTVar32 = local_98;
      *(int *)&(this->CachedVerifyErrorCounts).field_0x8 = (int)local_90;
      *(undefined4 *)&(this->CachedVerifyErrorCounts).field_0xc = local_90._4_4_;
      local_98 = 0;
      local_90 = 0;
      if ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedVerifyErrorCounts).field_0x10 !=
          &local_88) {
        if (local_88.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
          (this->CachedVerifyErrorCounts).field_0x10 = local_88.AllocatorInstance.InlineData[0];
          (this->CachedVerifyErrorCounts).field_0x11 = local_88.AllocatorInstance.InlineData[1];
          (this->CachedVerifyErrorCounts).field_0x12 = local_88.AllocatorInstance.InlineData[2];
          (this->CachedVerifyErrorCounts).field_0x13 = local_88.AllocatorInstance.InlineData[3];
          (this->CachedVerifyErrorCounts).field_0x14 = local_88.AllocatorInstance.InlineData[4];
          (this->CachedVerifyErrorCounts).field_0x15 = local_88.AllocatorInstance.InlineData[5];
          (this->CachedVerifyErrorCounts).field_0x16 = local_88.AllocatorInstance.InlineData[6];
          (this->CachedVerifyErrorCounts).field_0x17 = local_88.AllocatorInstance.InlineData[7];
          (this->CachedVerifyErrorCounts).field_0x18 = local_88.AllocatorInstance.InlineData[8];
          (this->CachedVerifyErrorCounts).field_0x19 = local_88.AllocatorInstance.InlineData[9];
          (this->CachedVerifyErrorCounts).field_0x1a = local_88.AllocatorInstance.InlineData[10];
          (this->CachedVerifyErrorCounts).field_0x1b = local_88.AllocatorInstance.InlineData[0xb];
          (this->CachedVerifyErrorCounts).field_0x1c = local_88.AllocatorInstance.InlineData[0xc];
          (this->CachedVerifyErrorCounts).field_0x1d = local_88.AllocatorInstance.InlineData[0xd];
          (this->CachedVerifyErrorCounts).field_0x1e = local_88.AllocatorInstance.InlineData[0xe];
          (this->CachedVerifyErrorCounts).field_0x1f = local_88.AllocatorInstance.InlineData[0xf];
        }
        pvVar11 = *(void **)&(this->CachedVerifyErrorCounts).field_0x20;
        if (pvVar11 != (void *)0x0) {
          FMemory::Free(pvVar11);
        }
        *(ForElementType<unsigned_int> *)&(this->CachedVerifyErrorCounts).field_0x20 =
             local_88.AllocatorInstance.SecondaryData;
        *(int *)&(this->CachedVerifyErrorCounts).field_0x28 = local_88.NumBits;
        *(int *)&(this->CachedVerifyErrorCounts).field_0x2c = local_88.MaxBits;
        local_88.NumBits = 0;
        local_88.MaxBits = 0;
        local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      }
      *(undefined4 *)&(this->CachedVerifyErrorCounts).field_0x30 = local_68;
      *(int *)&(this->CachedVerifyErrorCounts).field_0x34 = local_64;
      local_64 = 0;
      local_68 = 0xffffffff;
      if (local_58 == (void *)0x0) {
        *(undefined4 *)&(this->CachedVerifyErrorCounts).field_0x38 = local_60;
      }
      pvVar11 = *(void **)&(this->CachedVerifyErrorCounts).field_0x40;
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
      *(void **)&(this->CachedVerifyErrorCounts).field_0x40 = local_58;
      *(undefined4 *)&(this->CachedVerifyErrorCounts).field_0x48 = local_50;
      local_50 = 0;
      local_58 = (void *)0x0;
    }
    local_168[1] = 0x3f800000;
    local_168[2] = 7;
    (**(code **)((this->BuildProgress)._padding_ + 0x18))
              (&this->BuildProgress,local_168 + 2,local_168 + 1);
    cVar16 = (**(code **)((longlong)*(this->InstallerError).Ptr + 0x10))();
    if (cVar16 == '\0') {
      iVar17 = local_158->ArrayNum;
      pFVar33 = (local_158->AllocatorInstance).Data;
      pFVar35 = pFVar33 + (longlong)iVar17 * 0x10;
      while( true ) {
        if (local_158->ArrayNum != iVar17) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_195);
        }
        if (pFVar33 == pFVar35) break;
        BackupFileIfNecessary(this,(FString *)pFVar33,true);
        iVar5 = (this->InstallStagingDir).Data.ArrayNum;
        iVar30 = *(int *)(pFVar33 + 8) + -1;
        if (*(int *)(pFVar33 + 8) == 0) {
          iVar30 = 0;
        }
        local_180.Data.ArrayNum = iVar5;
        if ((iVar5 == 0) && (iVar30 != -1)) {
          iVar19 = iVar30 + 2;
          pFVar36 = (this->InstallStagingDir).Data.AllocatorInstance.Data;
LAB_1431f7d06:
          local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (iVar19 != 0) goto LAB_1431f7d12;
          local_180.Data.ArrayMax = 0;
        }
        else {
          iVar19 = iVar30 + 1;
          pFVar36 = (this->InstallStagingDir).Data.AllocatorInstance.Data;
          if (iVar5 == 0) goto LAB_1431f7d06;
LAB_1431f7d12:
          local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar31 = iVar5 + iVar19;
          if ((int)uVar31 < iVar5) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar31,0,(ForAnyElementType *)&local_180,iVar5,&local_180.Data.ArrayMax);
          if (iVar5 != 0) {
            memcpy(local_180.Data.AllocatorInstance.Data,pFVar36,(longlong)iVar5 * 2);
          }
        }
        ::FString::PathAppend(&local_180,*(wchar_t **)&pFVar33->field_0x0,iVar30);
        pIVar12 = (this->FileSystem).Ptr;
        FVar28.Data = (FScriptContainerElement *)L"";
        if (local_180.Data.ArrayNum != 0) {
          FVar28.Data = local_180.Data.AllocatorInstance.Data;
        }
        cVar16 = (**(code **)((longlong)*pIVar12 + 0x80))(pIVar12,FVar28.Data);
        if (cVar16 != '\0') {
          pIVar12 = (this->FileSystem).Ptr;
          FVar28.Data = (FScriptContainerElement *)L"";
          if (local_180.Data.ArrayNum != 0) {
            FVar28.Data = local_180.Data.AllocatorInstance.Data;
          }
          (**(code **)((longlong)*pIVar12 + 0x68))(pIVar12,FVar28.Data);
        }
        if ((this->Configuration).InstallMode != StageFiles) {
          iVar5 = (this->Configuration).InstallDirectory.Data.ArrayNum;
          iVar30 = *(int *)(pFVar33 + 8) + -1;
          if (*(int *)(pFVar33 + 8) == 0) {
            iVar30 = 0;
          }
          local_190.Data.ArrayNum = iVar5;
          if ((iVar5 == 0) && (iVar30 != -1)) {
            pFVar36 = (this->Configuration).InstallDirectory.Data.AllocatorInstance.Data;
            iVar19 = iVar30 + 2;
LAB_1431f7e0f:
            local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (iVar19 != 0) goto LAB_1431f7e19;
            local_190.Data.ArrayMax = 0;
          }
          else {
            pFVar36 = (this->Configuration).InstallDirectory.Data.AllocatorInstance.Data;
            iVar19 = iVar30 + 1;
            if (iVar5 == 0) goto LAB_1431f7e0f;
LAB_1431f7e19:
            local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            uVar31 = iVar5 + iVar19;
            if ((int)uVar31 < iVar5) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
            }
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar31,0,(ForAnyElementType *)&local_190,iVar5,&local_190.Data.ArrayMax);
            if (iVar5 != 0) {
              memcpy(local_190.Data.AllocatorInstance.Data,pFVar36,(longlong)iVar5 * 2);
            }
          }
          ::FString::PathAppend(&local_190,*(wchar_t **)&pFVar33->field_0x0,iVar30);
          pIVar12 = (this->FileSystem).Ptr;
          FVar28.Data = (FScriptContainerElement *)L"";
          if (local_190.Data.ArrayNum != 0) {
            FVar28.Data = local_190.Data.AllocatorInstance.Data;
          }
          cVar16 = (**(code **)((longlong)*pIVar12 + 0x80))(pIVar12,FVar28.Data);
          if (cVar16 != '\0') {
            pIVar12 = (this->FileSystem).Ptr;
            FVar28.Data = (FScriptContainerElement *)L"";
            if (local_190.Data.ArrayNum != 0) {
              FVar28.Data = local_190.Data.AllocatorInstance.Data;
            }
            (**(code **)((longlong)*pIVar12 + 0x68))(pIVar12,FVar28.Data);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (&this->OldFilesRemovedBySystem,(FString *)local_118,(bool *)pFVar33);
          }
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
        }
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        pFVar33 = pFVar33 + 0x10;
      }
    }
    if (4 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->VerifyTimer);
    if (((this->VerifyTimer).bIsRunning != false) &&
       ((this->VerifyTimer).bIsRunning = false, (this->VerifyTimer).bIsPaused == false)) {
      uVar20 = (this->VerifyTimer).StartCycles;
      uVar22 = FStatsCollector::GetCycles();
      puVar1 = &(this->VerifyTimer).Cycles;
      *puVar1 = *puVar1 + (uVar22 - uVar20);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->VerifyTimer);
    if (bVar3 == false) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&SingletonFunctionLockCS);
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_BuildPatchServices::EVerifyError,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_BuildPatchServices::EVerifyError,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98);
  }
  else {
    bVar37 = true;
  }
  return bVar37;
}

// StartInstallation @ 1431fb700

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::StartInstallation(FBuildPatchInstaller *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IBuildInstallerThread *pIVar5;
  TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *pTVar6;
  FBuildPatchInstaller *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> local_68;
  FReadAccessScope local_58;
  code *local_38 [2];
  undefined **local_28;
  FBuildPatchInstaller *local_20;
  undefined8 local_10;
  
  if (this->Thread == (IBuildInstallerThread *)0x0) {
    if ((this->Configuration).SharedContext.Object == (IBuildInstallerSharedContext *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pIVar5 = (IBuildInstallerThread *)
             (**(code **)((longlong)*(this->Configuration).SharedContext.Object + 8))();
    this->Thread = pIVar5;
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::StartInstallation'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`BuildPatchServices::FBuildPatchInstaller::StartInstallation'::__l5::<lambda_1>,void>
                  ::Call;
    local_20 = this;
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_38);
    pTVar6 = TSharedFromThis<BuildPatchServices::FBuildPatchInstaller,1>::AsShared
                       ((TSharedFromThis<BuildPatchServices::FBuildPatchInstaller,1> *)
                        &this->_padding_,&local_68);
    local_78 = pTVar6->Object;
    local_70 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StartDelegate,
               &local_58);
    if ((*(int *)&(this->StartDelegate).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->StartDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_78);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return this->Thread != (IBuildInstallerThread *)0x0;
}

// Tick @ 1431fc240

bool __thiscall BuildPatchServices::FBuildPatchInstaller::Tick(FBuildPatchInstaller *this)

{
  IBuildInstallerSharedContext *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchInstaller.cpp"
                       ,0x8e4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  (**(code **)((longlong)*(this->MessagePump).Ptr + 0x28))();
  cVar5 = (**(code **)(this->_padding_ + 0x10))(this);
  if (cVar5 != '\0') {
    ExecuteCompleteDelegate(this);
    if ((this->Configuration).SharedContext.Object == (IBuildInstallerSharedContext *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pIVar1 = (this->Configuration).SharedContext.Object;
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,this->Thread);
    this->Thread = (IBuildInstallerThread *)0x0;
    return false;
  }
  return true;
}

// TogglePauseInstall @ 1431fc830

bool __thiscall
BuildPatchServices::FBuildPatchInstaller::TogglePauseInstall(FBuildPatchInstaller *this)

{
  ulong64 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->bIsPaused == false) &&
     (cVar5 = (**(code **)((longlong)*(this->InstallerError).Ptr + 8))(), cVar5 == '\0')) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (this->bIsPaused == false) {
    if (bVar9 == false) goto LAB_1431fc8fe;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->ProcessPausedTimer);
    if (((this->ProcessPausedTimer).bIsRunning == false) &&
       ((this->ProcessPausedTimer).bIsRunning = true, (this->ProcessPausedTimer).bIsPaused == false)
       ) {
      uVar7 = FStatsCollector::GetCycles();
      (this->ProcessPausedTimer).StartCycles = uVar7;
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->ProcessPausedTimer);
    if (((this->ProcessPausedTimer).bIsRunning != false) &&
       ((this->ProcessPausedTimer).bIsRunning = false, (this->ProcessPausedTimer).bIsPaused == false
       )) {
      uVar7 = (this->ProcessPausedTimer).StartCycles;
      uVar6 = FStatsCollector::GetCycles();
      puVar1 = &(this->ProcessPausedTimer).Cycles;
      *puVar1 = *puVar1 + (uVar6 - uVar7);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ProcessPausedTimer);
LAB_1431fc8fe:
  this->bIsPaused = bVar9;
  pFVar8 = (this->Controllables).AllocatorInstance.Data;
  iVar4 = (this->Controllables).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Controllables).ArrayNum != iVar4) {
      `TCheckedPointerIterator<BuildPatchServices::IControllable_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    (**(code **)(**(longlong **)pFVar8 + 8))(*(longlong **)pFVar8,bVar9);
    pFVar8 = pFVar8 + 8;
  }
  bVar3 = this->bIsPaused;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ConstructTimer);
  if (((this->ConstructTimer).bIsPaused != bVar3) &&
     ((this->ConstructTimer).bIsPaused = bVar3, (this->ConstructTimer).bIsRunning != false)) {
    uVar7 = FStatsCollector::GetCycles();
    if (bVar3 == false) {
      (this->ConstructTimer).StartCycles = uVar7;
    }
    else {
      puVar1 = &(this->ConstructTimer).Cycles;
      *puVar1 = *puVar1 + (uVar7 - (this->ConstructTimer).StartCycles);
      (this->ConstructTimer).StartCycles = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ConstructTimer);
  bVar3 = this->bIsPaused;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->MoveFromStageTimer);
  if (((this->MoveFromStageTimer).bIsPaused != bVar3) &&
     ((this->MoveFromStageTimer).bIsPaused = bVar3, (this->MoveFromStageTimer).bIsRunning != false))
  {
    uVar7 = FStatsCollector::GetCycles();
    if (bVar3 == false) {
      (this->MoveFromStageTimer).StartCycles = uVar7;
    }
    else {
      puVar1 = &(this->MoveFromStageTimer).Cycles;
      *puVar1 = *puVar1 + (uVar7 - (this->MoveFromStageTimer).StartCycles);
      (this->MoveFromStageTimer).StartCycles = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->MoveFromStageTimer);
  bVar3 = this->bIsPaused;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->FileAttributesTimer);
  if (((this->FileAttributesTimer).bIsPaused != bVar3) &&
     ((this->FileAttributesTimer).bIsPaused = bVar3, (this->FileAttributesTimer).bIsRunning != false
     )) {
    uVar7 = FStatsCollector::GetCycles();
    if (bVar3 == false) {
      (this->FileAttributesTimer).StartCycles = uVar7;
    }
    else {
      puVar1 = &(this->FileAttributesTimer).Cycles;
      *puVar1 = *puVar1 + (uVar7 - (this->FileAttributesTimer).StartCycles);
      (this->FileAttributesTimer).StartCycles = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->FileAttributesTimer);
  bVar3 = this->bIsPaused;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->VerifyTimer);
  if (((this->VerifyTimer).bIsPaused != bVar3) &&
     ((this->VerifyTimer).bIsPaused = bVar3, (this->VerifyTimer).bIsRunning != false)) {
    uVar7 = FStatsCollector::GetCycles();
    if (bVar3 == false) {
      (this->VerifyTimer).StartCycles = uVar7;
    }
    else {
      puVar1 = &(this->VerifyTimer).Cycles;
      *puVar1 = *puVar1 + (uVar7 - (this->VerifyTimer).StartCycles);
      (this->VerifyTimer).StartCycles = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->VerifyTimer);
  bVar3 = this->bIsPaused;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CleanUpTimer);
  if (((this->CleanUpTimer).bIsPaused != bVar3) &&
     ((this->CleanUpTimer).bIsPaused = bVar3, (this->CleanUpTimer).bIsRunning != false)) {
    uVar7 = FStatsCollector::GetCycles();
    if (bVar3 == false) {
      (this->CleanUpTimer).StartCycles = uVar7;
    }
    else {
      puVar1 = &(this->CleanUpTimer).Cycles;
      *puVar1 = *puVar1 + (uVar7 - (this->CleanUpTimer).StartCycles);
      (this->CleanUpTimer).StartCycles = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CleanUpTimer);
  bVar3 = this->bIsPaused;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ProcessActiveTimer);
  if (((this->ProcessActiveTimer).bIsPaused != bVar3) &&
     ((this->ProcessActiveTimer).bIsPaused = bVar3, (this->ProcessActiveTimer).bIsRunning != false))
  {
    uVar7 = FStatsCollector::GetCycles();
    if (bVar3 == false) {
      (this->ProcessActiveTimer).StartCycles = uVar7;
    }
    else {
      puVar1 = &(this->ProcessActiveTimer).Cycles;
      *puVar1 = *puVar1 + (uVar7 - (this->ProcessActiveTimer).StartCycles);
      (this->ProcessActiveTimer).StartCycles = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ProcessActiveTimer);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar9;
}

// UnregisterMessageHandler @ 1431fea60

void __thiscall
BuildPatchServices::FBuildPatchInstaller::UnregisterMessageHandler
          (FBuildPatchInstaller *this,FMessageHandler *param_1)

{
  IMessagePump *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchInstaller.cpp"
                       ,0x8c3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->MessagePump).Ptr;
                    /* WARNING: Could not recover jumptable at 0x0001431feab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,param_1);
  return;
}

