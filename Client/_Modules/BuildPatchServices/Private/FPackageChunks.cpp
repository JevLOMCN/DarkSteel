// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 13

// FPackageChunks @ 143282630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FPackageChunks * __thiscall
BuildPatchServices::FPackageChunks::FPackageChunks
          (FPackageChunks *this,FPackageChunksConfiguration *param_1)

{
  TArray<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar5;
  FElement *pFVar6;
  IInstallerError *pIVar7;
  code *pcVar8;
  bool bVar9;
  FTSTicker *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TFunction<void___cdecl(void)> *pTVar13;
  FFileOperationTracker *pFVar14;
  IHttpManager *pIVar15;
  IFileSystem *pIVar16;
  FFileOperationTracker *pFVar17;
  ISpeedRecorder *pIVar18;
  IChunkDataSizeProvider *pIVar19;
  FPackageChunks *pFVar20;
  IDownloadService *pIVar21;
  FFileOperationTracker *pFVar22;
  FFileOperationTracker *pFVar23;
  longlong *plVar24;
  wchar_t *pwVar25;
  wchar_t *pwVar26;
  undefined1 auStackY_188 [32];
  FDestructionSentinel local_148;
  undefined1 *local_130;
  code *local_128 [2];
  undefined **local_118;
  FPackageChunks *local_110;
  undefined8 local_100;
  undefined1 local_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this->_padding_ = (longlong)&___7FPackageChunks_BuildPatchServices__6B_;
  (this->Configuration).FeatureLevel = param_1->FeatureLevel;
  ::FString::FString(&(this->Configuration).ManifestFilePath,&param_1->ManifestFilePath);
  ::FString::FString(&(this->Configuration).PrevManifestFilePath,&param_1->PrevManifestFilePath);
  pTVar1 = &(this->Configuration).TagSetArray;
  pFVar23 = (FFileOperationTracker *)0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Configuration).TagSetArray.ArrayMax;
  iVar4 = (param_1->TagSetArray).ArrayNum;
  pTVar5 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
           (param_1->TagSetArray).AllocatorInstance.Data;
  (this->Configuration).TagSetArray.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar4);
  }
  pTVar5 = &(this->Configuration).PrevTagSet;
  *(undefined8 *)&pTVar5->Elements = 0;
  *(undefined8 *)&(this->Configuration).PrevTagSet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Configuration).PrevTagSet.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Configuration).PrevTagSet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Configuration).PrevTagSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Configuration).PrevTagSet.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Configuration).PrevTagSet.Elements.field_0x34 = 0;
  (this->Configuration).PrevTagSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Configuration).PrevTagSet.HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (pTVar5,&param_1->PrevTagSet);
  ::FString::FString(&(this->Configuration).OutputFile,&param_1->OutputFile);
  ::FString::FString(&(this->Configuration).CloudDir,&param_1->CloudDir);
  (this->Configuration).MaxOutputFileSize = param_1->MaxOutputFileSize;
  ::FString::FString(&(this->Configuration).ResultDataFilePath,&param_1->ResultDataFilePath);
  pFVar10 = FTSTicker::GetCoreTicker();
  this->CoreTicker = pFVar10;
  puVar3 = &(this->DownloadCompleteDelegate).field_0x8;
  *(undefined8 *)&this->DownloadCompleteDelegate = 0;
  *(undefined8 *)puVar3 = 0;
  *(undefined4 *)&(this->DownloadCompleteDelegate).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->DownloadCompleteDelegate,(FWriteAccessScope *)&local_148);
  local_130 = puVar3;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar3);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFPackageChunks_BuildPatchServices____A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[4] = HandleDownloadComplete;
    puVar11[3] = this;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  *(undefined8 *)&(this->DownloadProgressDelegate).field_0x10 = 0;
  *(undefined8 *)&this->DownloadProgressDelegate = 0;
  *(undefined8 *)&(this->DownloadProgressDelegate).field_0x8 = 0;
  this->bManifestsProcessed = false;
  this->bShouldRun = (FThreadSafeBool)0x1;
  this->bSuccess = (FThreadSafeBool)0x1;
  this->RequestIdManifestFile = -1;
  this->RequestIdPrevManifestFile = -1;
  pTVar13 = MakePromiseCompleteDelegate
                      (this,(TFunction<void___cdecl(void)> *)local_98,(pmf_47963ee4)0x1432d9e00);
  local_f8._0_8_ = *(undefined8 *)pTVar13;
  local_f8._40_8_ = *(undefined8 *)&pTVar13->field_0x28;
  *(undefined8 *)&pTVar13->field_0x28 = 0;
  local_f8._16_8_ = *(undefined8 *)&pTVar13->field_0x10;
  local_f8._24_8_ = *(undefined8 *)&pTVar13->field_0x18;
  local_f8._32_8_ = *(undefined8 *)&pTVar13->field_0x20;
  if (local_f8._0_8_ != 0) {
    *(undefined8 *)pTVar13 = 0;
  }
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>
            (&this->PromiseManifestFile,(TUniqueFunction<void___cdecl(void)> *)local_f8);
  if (local_f8._0_8_ != 0) {
    plVar24 = (longlong *)(local_f8 + 0x10);
    if ((longlong *)local_f8._40_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_f8._40_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  if (local_98._0_8_ != 0) {
    plVar24 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  pTVar13 = MakePromiseCompleteDelegate
                      (this,(TFunction<void___cdecl(void)> *)local_68,(pmf_47963ee4)0x1432d9e00);
  local_c8._0_8_ = *(undefined8 *)pTVar13;
  local_c8._40_8_ = *(undefined8 *)&pTVar13->field_0x28;
  *(undefined8 *)&pTVar13->field_0x28 = 0;
  local_c8._16_8_ = *(undefined8 *)&pTVar13->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&pTVar13->field_0x18;
  local_c8._32_8_ = *(undefined8 *)&pTVar13->field_0x20;
  if (local_c8._0_8_ != 0) {
    *(undefined8 *)pTVar13 = 0;
  }
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>
            (&this->PromisePrevManifestFile,(TUniqueFunction<void___cdecl(void)> *)local_c8);
  if (local_c8._0_8_ != 0) {
    plVar24 = (longlong *)(local_c8 + 0x10);
    if ((longlong *)local_c8._40_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_c8._40_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  if (local_68._0_8_ != 0) {
    plVar24 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::GetFuture
            (&this->PromiseManifestFile,&this->FutureManifestFile);
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::GetFuture
            (&this->PromisePrevManifestFile,&this->FuturePrevManifestFile);
  (this->Manifest).Object = (FBuildPatchAppManifest *)0x0;
  (this->Manifest).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->PrevManifest).Object = (FBuildPatchAppManifest *)0x0;
  (this->PrevManifest).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->ManifestSet).Ptr = (IBuildManifestSet *)0x0;
  this->bUsingOptimisedDelta = false;
  (this->ChunkDbFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkDbFiles).ArrayNum = 0;
  (this->ChunkDbFiles).ArrayMax = 0;
  (this->TagSetLookupTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagSetLookupTable).ArrayNum = 0;
  (this->TagSetLookupTable).ArrayMax = 0;
  pFVar14 = ::operator_new(8);
  pFVar22 = pFVar23;
  if (pFVar14 != (FFileOperationTracker *)0x0) {
    *(undefined ***)pFVar14 =
         &___7__TPlatform_UFWindowsPlatformProcess__UFWindowsPlatformMisc___BuildPatchServices__6B_;
    pFVar22 = pFVar14;
  }
  (this->Platform).Ptr = (IPlatform *)pFVar22;
  pIVar15 = FHttpManagerFactory::Create();
  (this->HttpManager).Ptr = pIVar15;
  pIVar16 = FFileSystemFactory::Create();
  (this->FileSystem).Ptr = pIVar16;
  pFVar14 = ::operator_new(0x60);
  pFVar22 = pFVar23;
  if (pFVar14 != (FFileOperationTracker *)0x0) {
    pFVar14->Ticker = (FTSTicker *)0x0;
    (pFVar14->TickerHandle).Object = (FElement *)0x0;
    (pFVar14->TickerHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar14->FileOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar14->FileOperationStates).ArrayNum = 0;
    (pFVar14->FileOperationStates).ArrayMax = 0;
    (pFVar14->DummyOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar14->DummyOperationStates).ArrayNum = 0;
    (pFVar14->DummyOperationStates).ArrayMax = 0;
    *(undefined8 *)&pFVar14->FileOperationStatesDataIdLookup = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x8 = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x10 = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x18 = 0;
    *(undefined ***)pFVar14 = &___7FMessagePump_BuildPatchServices__6B_;
    pFVar17 = ::operator_new(0x48);
    if (pFVar17 != (FFileOperationTracker *)0x0) {
      *(double *)&pFVar17->field_0x0 = 0.0;
      *(undefined8 *)&pFVar17->Ticker = 0;
      *(undefined8 *)&((TUniqueFunction<bool___cdecl(float)> *)&pFVar17->TickerHandle)->field_0x0 =
           0;
      *(undefined8 *)&((TUniqueFunction<bool___cdecl(float)> *)&pFVar17->TickerHandle)->field_0x8 =
           0;
      (pFVar17->FileOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar17->FileOperationStates).ArrayNum = 0;
      (pFVar17->FileOperationStates).ArrayMax = 0;
      (pFVar17->DummyOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar17->DummyOperationStates).ArrayNum = 0;
      (pFVar17->DummyOperationStates).ArrayMax = 0;
      *(undefined8 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x0 = 0;
      *(double *)&pFVar17->field_0x0 = 0.0;
      (pFVar17->FileOperationStatesDataIdLookup).field_0x0 = 0xff;
      pFVar22 = pFVar17;
    }
    (pFVar14->TickerHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar22;
    (pFVar14->TickerHandle).Object = (FElement *)pFVar22;
    pFVar17 = ::operator_new(0x60);
    pFVar22 = pFVar23;
    if (pFVar17 != (FFileOperationTracker *)0x0) {
      *(undefined8 *)pFVar17 = 0;
      pFVar17->Ticker = (FTSTicker *)0x0;
      (pFVar17->TickerHandle).Object = (FElement *)0x0;
      (pFVar17->TickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar17->FileOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar17->FileOperationStates).ArrayNum = 0;
      (pFVar17->FileOperationStates).ArrayMax = 0;
      (pFVar17->DummyOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar17->DummyOperationStates).ArrayNum = 0;
      (pFVar17->DummyOperationStates).ArrayMax = 0;
      *(undefined8 *)&pFVar17->FileOperationStatesDataIdLookup = 0;
      *(undefined8 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x8 = 0;
      *(undefined8 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x10 = 0;
      *(undefined8 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x18 = 0;
      *(undefined8 *)pFVar17 = 0;
      (pFVar17->TickerHandle).Object = (FElement *)0x0;
      (pFVar17->TickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar17->FileOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar17->FileOperationStates).ArrayNum = 0;
      (pFVar17->FileOperationStates).ArrayMax = 0;
      (pFVar17->DummyOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x18 = 0;
      pFVar22 = pFVar17;
    }
    *(FFileOperationTracker **)&(pFVar14->FileOperationStates).ArrayNum = pFVar22;
    (pFVar14->FileOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)pFVar22;
    (pFVar14->DummyOperationStates).AllocatorInstance.Data =
         (FScriptContainerElement *)&___7FDefaultMessageHandler_BuildPatchServices__6B_;
    (pFVar14->DummyOperationStates).ArrayNum = -1;
    *(undefined8 *)&pFVar14->FileOperationStatesDataIdLookup = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x8 = 0;
    *(undefined4 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x10 = 0;
    pFVar22 = pFVar14;
  }
  (this->MessagePump).Ptr = (IMessagePump *)pFVar22;
  pFVar14 = ::operator_new(0xb0);
  pFVar22 = pFVar23;
  if (pFVar14 != (FFileOperationTracker *)0x0) {
    *(undefined ***)pFVar14 = &___7FInstallerError_BuildPatchServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar14->Ticker,4000);
    pwVar25 = InstallErrorPrefixes::ErrorTypeStrings[0];
    *(undefined4 *)&(pFVar14->DummyOperationStates).AllocatorInstance.Data = 0;
    ::FString::FString((FString *)&(pFVar14->DummyOperationStates).ArrayNum,pwVar25);
    switch(*(undefined4 *)&(pFVar14->DummyOperationStates).AllocatorInstance.Data) {
    case 0:
      pwVar25 = L"BuildPatchInstallShortError_NoError";
      pwVar26 = L"The operation was successful.";
      break;
    case 1:
      pwVar25 = L"BuildPatchInstallShortError_DownloadError";
      pwVar26 = 
      L"Could not download patch data. Please check your internet connection, and try again.";
      break;
    case 2:
      pwVar25 = L"BuildPatchInstallShortError_FileConstructionFail";
      pwVar26 = L"A file corruption has occurred. Please try again.";
      break;
    case 3:
      pwVar25 = L"BuildPatchInstallShortError_MoveFileToInstall";
      pwVar26 = L"A file access error has occurred. Please check your running processes.";
      break;
    case 4:
      pwVar25 = L"BuildPatchInstallShortError_BuildCorrupt";
      pwVar26 = L"The installation is corrupt. Please contact support.";
      break;
    case 5:
      pwVar25 = L"BuildPatchInstallShortError_ApplicationClosing";
      pwVar26 = L"The application is closing.";
      break;
    case 6:
      pwVar25 = L"BuildPatchInstallShortError_ApplicationError";
      pwVar26 = L"Patching service could not start. Please contact support.";
      break;
    case 7:
      pwVar25 = L"BuildPatchInstallShortError_UserCanceled";
      pwVar26 = L"User cancelled.";
      break;
    case 8:
      pwVar25 = L"BuildPatchInstallShortError_PrerequisiteError";
      pwVar26 = L"The necessary prerequisites have failed to install. Please contact support.";
      break;
    case 9:
      pwVar25 = L"BuildPatchInstallShortError_InitializationError";
      pwVar26 = L"The installer failed to initialize. Please contact support.";
      break;
    case 10:
      pwVar25 = L"BuildPatchInstallShortError_PathLengthExceeded";
      pwVar26 = L"Maximum path length exceeded. Please specify a shorter install location.";
      break;
    case 0xb:
      pwVar25 = L"BuildPatchInstallShortError_OutOfDiskSpace";
      pwVar26 = L"Not enough disk space available. Please free up some disk space and try again.";
      break;
    default:
      pwVar25 = L"BuildPatchInstallShortError_InvalidOrMax";
      pwVar26 = L"An unknown error ocurred. Please contact support.";
    }
    FText::AsLocalizable_Advanced_LocText
              ((FText *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x8,
               L"BuildPatchInstallError",pwVar25,pwVar26);
    *(undefined4 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x18 = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x30 = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x38 = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesFilenameLookup).field_0x8 = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesFilenameLookup).field_0x18 = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x20 = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x28 = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x40 = 0;
    *(undefined4 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x48 = 0;
    *(undefined4 *)&(pFVar14->FileOperationStatesDataIdLookup).field_0x4c = 0x80;
    *(undefined4 *)&pFVar14->FileOperationStatesFilenameLookup = 0xffffffff;
    *(undefined4 *)&(pFVar14->FileOperationStatesFilenameLookup).field_0x4 = 0;
    *(undefined8 *)&(pFVar14->FileOperationStatesFilenameLookup).field_0x10 = 0;
    pFVar22 = pFVar14;
  }
  (this->InstallerError).Ptr = (IInstallerError *)pFVar22;
  pIVar18 = FSpeedRecorderFactory::Create();
  (this->DownloadSpeedRecorder).Ptr = pIVar18;
  pIVar19 = FChunkDataSizeProviderFactory::Create();
  (this->ChunkDataSizeProvider).Ptr = pIVar19;
  pFVar14 = ::operator_new(8);
  pFVar22 = pFVar23;
  if (pFVar14 != (FFileOperationTracker *)0x0) {
    *(undefined ***)pFVar14 = &___7FNullInstallerAnalytics_BuildPatchServices__6B_;
    pFVar22 = pFVar14;
  }
  (this->InstallerAnalytics).Ptr = (IInstallerAnalytics *)pFVar22;
  pFVar10 = (FTSTicker *)(this->DownloadSpeedRecorder).Ptr;
  pFVar6 = (FElement *)(this->ChunkDataSizeProvider).Ptr;
  if ((pFVar10 == (FTSTicker *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SpeedRecorder != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\DownloadServiceStatistics.cpp"
                         ,0xcb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar20 = (FPackageChunks *)(*pcVar8)();
    return pFVar20;
  }
  if ((pFVar6 == (FElement *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataSizeProvider != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\DownloadServiceStatistics.cpp"
                         ,0xcc,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar20 = (FPackageChunks *)(*pcVar8)();
    return pFVar20;
  }
  if ((pFVar22 == (FFileOperationTracker *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstallerAnalytics != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\DownloadServiceStatistics.cpp"
                         ,0xcd,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar20 = (FPackageChunks *)(*pcVar8)();
    return pFVar20;
  }
  pFVar17 = ::operator_new(0xe0);
  pFVar14 = pFVar23;
  if (pFVar17 != (FFileOperationTracker *)0x0) {
    pFVar17->Ticker = pFVar10;
    *(undefined ***)pFVar17 = &___7FDownloadServiceStatistics_BuildPatchServices__6B_;
    (pFVar17->TickerHandle).Object = pFVar6;
    (pFVar17->TickerHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar22;
    (pFVar17->FileOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar17->FileOperationStates).ArrayNum = 0;
    (pFVar17->FileOperationStates).ArrayMax = 0;
    (pFVar17->DummyOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar17->DummyOperationStates).ArrayNum = 0;
    (pFVar17->DummyOperationStates).ArrayMax = 0;
    *(undefined8 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x10 = 0;
    *(undefined4 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x18 = 0;
    *(undefined4 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x1c = 0x80;
    *(undefined4 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x20 = 0xffffffff;
    *(undefined4 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x24 = 0;
    *(undefined8 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x30 = 0;
    *(undefined4 *)&(pFVar17->FileOperationStatesDataIdLookup).field_0x38 = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&(pFVar17->FileOperationStatesDataIdLookup).field_0x40,4000);
    *(undefined8 *)&(pFVar17->FileOperationStatesFilenameLookup).field_0x18 = 0;
    *(undefined4 *)&(pFVar17->FileOperationStatesFilenameLookup).field_0x20 = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&(pFVar17->FileOperationStatesFilenameLookup).field_0x28,4000);
    pFVar14 = pFVar17;
  }
  (this->DownloadServiceStatistics).Ptr = (IDownloadServiceStatistics *)pFVar14;
  pIVar21 = FDownloadServiceFactory::Create
                      ((this->HttpManager).Ptr,(this->FileSystem).Ptr,
                       (IDownloadServiceStat *)pFVar14,(this->InstallerAnalytics).Ptr);
  (this->DownloadService).Ptr = pIVar21;
  pFVar10 = this->CoreTicker;
  (this->ChunkReferenceTracker).Ptr = (IChunkReferenceTracker *)0x0;
  pFVar22 = ::operator_new(0x100);
  if (pFVar22 != (FFileOperationTracker *)0x0) {
    pFVar23 = FFileOperationTracker::FFileOperationTracker(pFVar22,pFVar10);
  }
  (this->FileOperationTracker).Ptr = (IFileOperationTracker *)pFVar23;
  (this->OptimisedDelta).Ptr = (IOptimisedDelta *)0x0;
  FBuildPatchProgress::FBuildPatchProgress(&this->BuildProgress);
  pIVar7 = (this->InstallerError).Ptr;
  (this->MemoryChunkStoreStatistics).Ptr = (IMemoryChunkStoreStatistics *)0x0;
  (this->CloudChunkSourceStatistics).Ptr = (ICloudChunkSourceStatistics *)0x0;
  (this->ChunkDataSerialization).Ptr = (IChunkDataSerialization *)0x0;
  (this->MemoryEvictionPolicy).Ptr = (IChunkEvictionPolicy *)0x0;
  (this->CloudChunkStore).Ptr = (IMemoryChunkStore *)0x0;
  (this->DownloadConnectionCount).Ptr = (IDownloadConnectionCount *)0x0;
  (this->CloudChunkSource).Ptr = (ICloudChunkSource *)0x0;
  (this->ChunkDatabaseWriter).Ptr = (IChunkDatabaseWriter *)0x0;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`BuildPatchServices::FPackageChunks::FPackageChunks'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  local_100 = 0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`BuildPatchServices::FPackageChunks::FPackageChunks'::__l2::<lambda_1>,void>
                 ::Call;
  local_110 = this;
  (**(code **)((longlong)*pIVar7 + 0x40))(pIVar7,local_128);
  return this;
}

// ~FPackageChunks @ 143288ec0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall BuildPatchServices::FPackageChunks::~FPackageChunks(FPackageChunks *this)

{
  IChunkDatabaseWriter *pIVar1;
  ICloudChunkSource *pIVar2;
  IDownloadConnectionCount *pIVar3;
  IMemoryChunkStore *pIVar4;
  IChunkEvictionPolicy *pIVar5;
  IChunkDataSerialization *pIVar6;
  ICloudChunkSourceStatistics *pIVar7;
  IMemoryChunkStoreStatistics *pIVar8;
  IOptimisedDelta *pIVar9;
  IFileOperationTracker *pIVar10;
  IChunkReferenceTracker *pIVar11;
  IDownloadService *pIVar12;
  IDownloadServiceStatistics *pIVar13;
  IInstallerAnalytics *pIVar14;
  IChunkDataSizeProvider *pIVar15;
  ISpeedRecorder *pIVar16;
  IInstallerError *pIVar17;
  IMessagePump *pIVar18;
  IFileSystem *pIVar19;
  IHttpManager *pIVar20;
  IPlatform *pIVar21;
  FScriptContainerElement *pFVar22;
  IBuildManifestSet *pIVar23;
  TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar24;
  code *pcVar25;
  bool bVar26;
  
  this->_padding_ = (longlong)&___7FPackageChunks_BuildPatchServices__6B_;
  pIVar1 = (this->ChunkDatabaseWriter).Ptr;
  if (pIVar1 != (IChunkDatabaseWriter *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar2 = (this->CloudChunkSource).Ptr;
  if (pIVar2 != (ICloudChunkSource *)0x0) {
    (*(code *)**(undefined8 **)pIVar2)(pIVar2,1);
  }
  pIVar3 = (this->DownloadConnectionCount).Ptr;
  if (pIVar3 != (IDownloadConnectionCount *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,1);
  }
  pIVar4 = (this->CloudChunkStore).Ptr;
  if (pIVar4 != (IMemoryChunkStore *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pIVar5 = (this->MemoryEvictionPolicy).Ptr;
  if (pIVar5 != (IChunkEvictionPolicy *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  pIVar6 = (this->ChunkDataSerialization).Ptr;
  if (pIVar6 != (IChunkDataSerialization *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  pIVar7 = (this->CloudChunkSourceStatistics).Ptr;
  if (pIVar7 != (ICloudChunkSourceStatistics *)0x0) {
    (**(code **)*pIVar7)(pIVar7,1);
  }
  pIVar8 = (this->MemoryChunkStoreStatistics).Ptr;
  if (pIVar8 != (IMemoryChunkStoreStatistics *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->BuildProgress).ThreadLock);
  (this->BuildProgress)._padding_ = (longlong)&___7IControllable_BuildPatchServices__6B_;
  pIVar9 = (this->OptimisedDelta).Ptr;
  if (pIVar9 != (IOptimisedDelta *)0x0) {
    (**(code **)*pIVar9)(pIVar9,1);
  }
  pIVar10 = (this->FileOperationTracker).Ptr;
  if (pIVar10 != (IFileOperationTracker *)0x0) {
    (**(code **)*pIVar10)(pIVar10,1);
  }
  pIVar11 = (this->ChunkReferenceTracker).Ptr;
  if (pIVar11 != (IChunkReferenceTracker *)0x0) {
    (**(code **)*pIVar11)(pIVar11,1);
  }
  pIVar12 = (this->DownloadService).Ptr;
  if (pIVar12 != (IDownloadService *)0x0) {
    (**(code **)*pIVar12)(pIVar12,1);
  }
  pIVar13 = (this->DownloadServiceStatistics).Ptr;
  if (pIVar13 != (IDownloadServiceStatistics *)0x0) {
    (**(code **)*pIVar13)(pIVar13,1);
  }
  pIVar14 = (this->InstallerAnalytics).Ptr;
  if (pIVar14 != (IInstallerAnalytics *)0x0) {
    (**(code **)*pIVar14)(pIVar14,1);
  }
  pIVar15 = (this->ChunkDataSizeProvider).Ptr;
  if (pIVar15 != (IChunkDataSizeProvider *)0x0) {
    (**(code **)*pIVar15)(pIVar15,1);
  }
  pIVar16 = (this->DownloadSpeedRecorder).Ptr;
  if (pIVar16 != (ISpeedRecorder *)0x0) {
    (**(code **)*pIVar16)(pIVar16,1);
  }
  pIVar17 = (this->InstallerError).Ptr;
  if (pIVar17 != (IInstallerError *)0x0) {
    (**(code **)*pIVar17)(pIVar17,1);
  }
  pIVar18 = (this->MessagePump).Ptr;
  if (pIVar18 != (IMessagePump *)0x0) {
    (**(code **)*pIVar18)(pIVar18,1);
  }
  pIVar19 = (this->FileSystem).Ptr;
  if (pIVar19 != (IFileSystem *)0x0) {
    (**(code **)*pIVar19)(pIVar19,1);
  }
  pIVar20 = (this->HttpManager).Ptr;
  if (pIVar20 != (IHttpManager *)0x0) {
    (**(code **)*pIVar20)(pIVar20,1);
  }
  pIVar21 = (this->Platform).Ptr;
  if (pIVar21 != (IPlatform *)0x0) {
    (**(code **)*pIVar21)(pIVar21,1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->TagSetLookupTable).AllocatorInstance.Data,(this->TagSetLookupTable).ArrayNum);
  pFVar22 = (this->TagSetLookupTable).AllocatorInstance.Data;
  if (pFVar22 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar22);
  }
  DestructItems<BuildPatchServices::FChunkDatabaseFile,int>
            ((FChunkDatabaseFile *)(this->ChunkDbFiles).AllocatorInstance.Data,
             (this->ChunkDbFiles).ArrayNum);
  pFVar22 = (this->ChunkDbFiles).AllocatorInstance.Data;
  if (pFVar22 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar22);
  }
  pIVar23 = (this->ManifestSet).Ptr;
  if (pIVar23 != (IBuildManifestSet *)0x0) {
    (**(code **)*pIVar23)(pIVar23,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PrevManifest).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Manifest).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FuturePrevManifestFile).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FutureManifestFile).field_0x8);
  pTVar24 = (this->PromisePrevManifestFile).State.Object;
  if ((pTVar24 != (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) &&
     ((char)pTVar24->_padding_ == '\0')) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("State->IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x242,L"");
    if (bVar26) {
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PromisePrevManifestFile).State.SharedReferenceCount.ReferenceController);
  pTVar24 = (this->PromiseManifestFile).State.Object;
  if ((pTVar24 != (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) &&
     ((char)pTVar24->_padding_ == '\0')) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("State->IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x242,L"");
    if (bVar26) {
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PromiseManifestFile).State.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DownloadProgressDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DownloadCompleteDelegate);
  FPackageChunksConfiguration::~FPackageChunksConfiguration(&this->Configuration);
  this->_padding_ = (longlong)&___7IPackageChunks_BuildPatchServices__6B_;
  return;
}

// operator() @ 14328c9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`BuildPatchServices::FPackageChunks::FPackageChunks'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  char cVar2;
  TFuture<void> *pTVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_20 = (undefined ***)0x0;
  local_38[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``BuildPatchServices::FPackageChunks::FPackageChunks'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  local_38[1] = *(undefined ***)this;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``BuildPatchServices::FPackageChunks::FPackageChunks'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  pTVar3 = BuildPatchServices::AsyncHelpers::ExecuteOnGameThread<void>
                     ((TFuture<void> *)local_58,(TFunction<void___cdecl(void)> *)local_48);
  if (*(longlong *)pTVar3 != 0) {
    do {
      do {
      } while (*(longlong *)pTVar3 == 0);
      plVar1 = *(longlong **)(*(longlong *)pTVar3 + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_58._8_8_);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// operator() @ 143299620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`BuildPatchServices::FPackageChunks::MakeOptimiseCompleteDelegate'::__l2::<lambda_1>::operator()
          (void *this,TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> *param_1)

{
  uchar uVar1;
  longlong lVar2;
  code *pcVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code **ppcVar9;
  ulonglong uVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStack_b8 [32];
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *local_90;
  TReferenceControllerBase<1> *local_88;
  TReferenceControllerBase<1> *local_80;
  undefined1 local_70 [24];
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar10 = (ulonglong)(param_1->Variant).TypeIndex;
  if ((2 < uVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = (param_1->Variant).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TSharedPtr<FBuildPatchAppManifest,1>,TSharedPtr<class_FBuildPatchAppManifest,1>,TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_FBuildPatchAppManifest,1>,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10) == '\0') {
    if ((uVar1 != '\x01') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = ::operator_new(0x28);
    pTVar11 = ___xmm_00000000000000000000000000000010;
    pTVar7 = _UNK_150651568;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TValueOrError_V__TSharedPtr_VFBuildPatchAppManifest___00__VFString_____00_SharedPointerInternals__6B_
      ;
      ::FString::FString((FString *)(pTVar8 + 1),(FString *)param_1);
      pTVar11 = pTVar8 + 1;
      *(undefined1 *)&pTVar8[2]._padding_ = 1;
      pTVar7 = pTVar8;
      local_98 = pTVar11;
      local_90 = pTVar8;
      if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar5 = false;
    bVar6 = true;
    pTVar8 = local_80;
    pTVar12 = pTVar7;
  }
  else {
    if ((uVar1 != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar7 = ::operator_new(0x28);
    bVar5 = true;
    pTVar8 = _UNK_150651568;
    pTVar11 = ___xmm_00000000000000000000000000000010;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TValueOrError_V__TSharedPtr_VFBuildPatchAppManifest___00__VFString_____00_SharedPointerInternals__6B_
      ;
      pTVar7[1]._padding_ = (param_1->Variant)._padding_;
      lVar2 = (param_1->Variant)._padding_;
      pTVar7[1].SharedReferenceCount = (atomic<int>)(int)lVar2;
      pTVar7[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pTVar11 = pTVar7 + 1;
      *(undefined1 *)&pTVar7[2]._padding_ = 0;
      pTVar8 = pTVar7;
      local_88 = pTVar11;
      local_80 = pTVar7;
      if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar6 = false;
    pTVar7 = local_90;
    pTVar12 = pTVar8;
  }
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  pcVar4 = *(code **)this;
  pcVar3 = *(code **)((longlong)this + 8);
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x28,8);
  local_30[1] = pcVar4;
  local_30[2] = pcVar3;
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<``BuildPatchServices::FPackageChunks::MakeOptimiseCompleteDelegate'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_30[3] = (code *)pTVar11;
  local_30[4] = (code *)pTVar12;
  if (local_30 != (code **)&DAT_fffffffffffffff8) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``BuildPatchServices::FPackageChunks::MakeOptimiseCompleteDelegate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  BuildPatchServices::AsyncHelpers::ExecuteOnGameThread<void>
            ((TFuture<void> *)local_70,(TFunction<void___cdecl(void)> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_70._8_8_);
  if (local_58[0] != (code *)0x0) {
    ppcVar9 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar9 = local_30;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14329b050

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
`BuildPatchServices::FPackageChunks::HandleDownloadComplete'::__l8::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  FFutureState *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FBuildPatchAppManifest *pFVar5;
  undefined8 uVar6;
  TRawPtrProxy<FBuildPatchAppManifest> local_res8;
  TSharedPtr<FBuildPatchAppManifest,1> local_28;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  pFVar5 = ::operator_new(0x2b8);
  local_res8.Object = (FBuildPatchAppManifest *)0x0;
  if (pFVar5 != (FBuildPatchAppManifest *)0x0) {
    local_res8.Object = FBuildPatchAppManifest::FBuildPatchAppManifest(pFVar5);
  }
  TSharedPtr<FBuildPatchAppManifest,1>::TSharedPtr<FBuildPatchAppManifest,1><FBuildPatchAppManifest>
            (&local_28,&local_res8);
  if (local_28.Object == (FBuildPatchAppManifest *)0x0) {
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
  pFVar5 = local_28.Object;
  pcVar2 = *(code **)((local_28.Object)->_padding_ + 0x160);
  uVar6 = (**(code **)(**(longlong **)this + 0x20))();
  cVar4 = (*pcVar2)(pFVar5,uVar6);
  if (cVar4 == '\0') {
    local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (FBuildPatchAppManifest *)0x0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_28.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
  }
  plVar1 = *(longlong **)((longlong)this + 0x10);
  if (*plVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*plVar1 == 0) {
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
  }
  this_00 = (FFutureState *)*plVar1;
  if (this_00->bComplete != (TAtomic<bool>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00[1].Mutex.CriticalSection.Opaque1[0] = local_28.Object;
  *(TReferenceControllerBase<1> **)this_00[1].Mutex.CriticalSection.Opaque2 =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FFutureState::MarkComplete(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// BeginPackageProcess @ 1432bfa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FPackageChunks::BeginPackageProcess(FPackageChunks *this)

{
  TArray<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  code *pcVar6;
  IChunkReferenceTracker *pIVar7;
  FScriptContainerElement *pFVar8;
  IMemoryChunkStoreStatistics IVar9;
  IMemoryChunkStoreStatistics IVar10;
  IChunkDataSerialization *pIVar11;
  ICloudChunkSourceStat *pIVar12;
  IDownloadConnectionCount *pIVar13;
  IInstallerError *pIVar14;
  IMessagePump *pIVar15;
  FCloudChunkSource *pFVar16;
  FChunkDatabaseFile *pFVar17;
  IChunkDatabaseWriter *pIVar18;
  undefined8 uVar19;
  IPlatform *pIVar20;
  IDownloadService *pIVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  FBuildPatchAppManifest *pFVar26;
  TSharedRef<FBuildPatchAppManifest,1> *pTVar27;
  TSharedRef<FBuildPatchAppManifest,1> *pTVar28;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar29;
  IChunkReferenceTracker *pIVar30;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar31;
  undefined1 *puVar32;
  size_t sVar33;
  IMemoryChunkStoreStatistics *pIVar34;
  IChunkDataSerialization *pIVar35;
  IMemoryChunkStoreStatistics *pIVar36;
  IMemoryChunkStoreStatistics *pIVar37;
  FCloudSourceConfig *pFVar38;
  FCloudChunkSource *pFVar39;
  IChunkDatabaseWriter *pIVar40;
  ulonglong uVar41;
  uint uVar42;
  longlong lVar43;
  IBuildManifestSet *pIVar44;
  ForAnyElementType FVar45;
  FScriptContainerElement *pFVar46;
  int iVar47;
  IDownloadService IVar48;
  uint uVar49;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar50;
  undefined1 *puVar51;
  undefined1 auStackY_7b8 [32];
  uint local_748;
  uint local_744;
  undefined1 local_740;
  undefined1 local_73f [7];
  TArray<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  local_738;
  ForAnyElementType local_728;
  undefined8 local_720;
  IPlatform *local_718;
  uint local_710;
  int local_70c;
  int local_708;
  IDownloadService local_700;
  FString local_6f8;
  IDownloadService *local_6e8;
  IChunkReferenceTracker *local_6e0;
  FString local_6d8;
  ForAnyElementType local_6c8;
  undefined8 local_6c0;
  FScriptContainerElement *local_6b8;
  undefined8 local_6b0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_6a8;
  FString local_698;
  IChunkDataSerialization *local_688;
  IBuildManifestSet *local_680;
  FChunkDatabaseHeader local_678;
  TArray<BuildPatchServices::FChunkDatabaseFile,TSizedDefaultAllocator<32>_> local_658;
  undefined8 local_648;
  int local_640;
  FString local_638;
  FString local_628;
  int local_618;
  FGuid local_610;
  undefined8 local_600;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  IDownloadService *local_5f0;
  int iStack_5e8;
  uint uStack_5e4;
  IDownloadService *local_5e0;
  undefined4 uStack_5d8;
  int iStack_5d4;
  int local_5d0;
  undefined4 uStack_5cc;
  int iStack_5c8;
  undefined4 uStack_5c4;
  IDownloadService *local_5c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5b8;
  undefined8 uStack_598;
  FString local_590;
  FCloudSourceConfig local_580;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_520;
  FArchiveState local_4c8;
  undefined8 local_438;
  ForAnyElementType *local_430;
  undefined8 local_428;
  TSharedRef<FBuildPatchAppManifest,1> local_418;
  TSharedRef<FBuildPatchAppManifest,1> local_408;
  TSharedRef<FBuildPatchAppManifest,1> local_3f8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_3e8;
  code *local_398 [2];
  undefined **local_388;
  FPackageChunks *local_380;
  undefined8 local_370;
  FCloudSourceConfig local_368;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_308;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_2f8 [2];
  undefined4 local_2cc;
  FCloudSourceConfig local_2c8;
  undefined1 local_268 [32];
  void *local_248;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_238;
  int local_234;
  ForElementType<FSetElementId> local_228;
  int local_220;
  undefined1 local_218 [32];
  void *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  void *local_1d8;
  undefined4 local_1d0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_1c8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_178;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_128;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_d8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  local_6e0 = (IChunkReferenceTracker *)0x150a77158;
  local_1c8.Elements._44_4_ = 0x80;
  local_1c8.Elements._48_4_ = 0xffffffff;
  if (this->bUsingOptimisedDelta != false) {
    local_6e0 = (IChunkReferenceTracker *)0x150a80c78;
  }
  iVar47 = 0;
  local_738.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_738.ArrayNum = 0;
  local_738.ArrayMax = 0;
  local_1c8.Elements._0_8_ = 0;
  local_1c8.Elements._8_8_ = 0;
  local_1c8.Elements._32_8_ = 0;
  local_1c8.Elements._40_4_ = 0;
  local_1c8.Elements._52_4_ = 0;
  local_1c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1c8.HashSize = 0;
  if ((this->Configuration).TagSetArray.ArrayNum == 0) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&local_738.AllocatorInstance,&local_738.ArrayMax);
    local_738.ArrayNum = iVar23 + 1;
    DefaultConstructItems<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,int>
              (local_738.AllocatorInstance.Data + (longlong)iVar23 * 0x50,1);
    pFVar26 = TSharedPtr<FBuildPatchAppManifest,1>::operator->(&this->Manifest);
    pcVar6 = *(code **)(pFVar26->_padding_ + 0xc0);
    uVar42 = 0;
    if ((int)(local_738.ArrayNum - 1U) < local_738.ArrayNum) {
      uVar42 = ~(local_738.ArrayNum - 1U) >> 0x1f;
    }
    if (uVar42 == 0) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar22) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (*pcVar6)(pFVar26,local_738.AllocatorInstance.Data + (longlong)(local_738.ArrayNum + -1) * 0x50)
    ;
  }
  else {
    pTVar1 = &(this->Configuration).TagSetArray;
    if (&local_738 != pTVar1) {
      DestructItems<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,int>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,0);
      iVar23 = (this->Configuration).TagSetArray.ArrayNum;
      pTVar50 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                (pTVar1->AllocatorInstance).Data;
      local_738.ArrayNum = iVar23;
      if ((iVar23 == 0) && (local_738.ArrayMax == 0)) {
        local_738.ArrayNum = 0;
        local_738.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar23,local_738.ArrayMax,&local_738.AllocatorInstance,iVar23,
                   &local_738.ArrayMax);
        ConstructItems<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,int>
                  (local_738.AllocatorInstance.Data,pTVar50,iVar23);
      }
    }
  }
  lVar43 = (longlong)local_738.ArrayNum;
  iVar23 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,local_738.ArrayNum,&(this->TagSetLookupTable).AllocatorInstance,
                      &(this->TagSetLookupTable).ArrayNum,&(this->TagSetLookupTable).ArrayMax);
  memset((this->TagSetLookupTable).AllocatorInstance.Data + (longlong)iVar23 * 0x10,0,lVar43 << 4);
  if ((this->PrevManifest).Object == (FBuildPatchAppManifest *)0x0) {
    pTVar27 = TSharedPtr<FBuildPatchAppManifest,1>::ToSharedRef(&this->Manifest,&local_418);
    pTVar29 = PackageChunksHelpers::GetCustomChunkReferences(local_2f8,&local_738,pTVar27);
    pIVar30 = FChunkReferenceTrackerFactory::Create(pTVar29);
    pIVar7 = (this->ChunkReferenceTracker).Ptr;
    local_3f8.SharedReferenceCount.ReferenceController =
         local_418.SharedReferenceCount.ReferenceController;
    if ((pIVar7 != pIVar30) &&
       ((this->ChunkReferenceTracker).Ptr = pIVar30, pIVar7 != (IChunkReferenceTracker *)0x0)) {
      (**(code **)*pIVar7)(pIVar7,1);
      local_3f8.SharedReferenceCount.ReferenceController =
           local_418.SharedReferenceCount.ReferenceController;
    }
  }
  else {
    if (*(int *)&(this->Configuration).PrevTagSet.Elements.field_0x8 ==
        *(int *)&(this->Configuration).PrevTagSet.Elements.field_0x34) {
      pFVar26 = TSharedPtr<FBuildPatchAppManifest,1>::operator->(&this->PrevManifest);
      (**(code **)(pFVar26->_padding_ + 0xc0))(pFVar26,&local_1c8);
    }
    else {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                (&local_1c8,&(this->Configuration).PrevTagSet);
    }
    pTVar27 = TSharedPtr<FBuildPatchAppManifest,1>::ToSharedRef(&this->PrevManifest,&local_3f8);
    pTVar28 = TSharedPtr<FBuildPatchAppManifest,1>::ToSharedRef(&this->Manifest,&local_408);
    pTVar29 = PackageChunksHelpers::GetCustomChunkReferences
                        (&local_308,&local_738,pTVar28,&local_1c8,pTVar27);
    pIVar30 = FChunkReferenceTrackerFactory::Create(pTVar29);
    pIVar7 = (this->ChunkReferenceTracker).Ptr;
    if ((pIVar7 != pIVar30) &&
       ((this->ChunkReferenceTracker).Ptr = pIVar30, pIVar7 != (IChunkReferenceTracker *)0x0)) {
      (**(code **)*pIVar7)(pIVar7,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_408.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f8.SharedReferenceCount.ReferenceController);
  local_6c8.Data = (FScriptContainerElement *)0x0;
  local_6c0 = 0;
  local_4c8._padding_ = 0;
  local_4c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_648 = 0;
  local_4c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_4c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_4c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_4c8._40_8_ = 0;
  local_4c8.ArSerializingDefaults = 0;
  local_4c8.ArPortFlags = 0;
  local_4c8.ArMaxSerializeSize = 0;
  local_4c8.ArUEVer.FileVersionUE4 = 0;
  local_4c8.ArUEVer.FileVersionUE5 = 0;
  local_4c8.ArLicenseeUEVer = 0;
  local_4c8.ArEngineVer.Major = 0;
  local_4c8.ArEngineVer.Minor = 0;
  local_4c8.ArEngineVer.Patch = 0;
  local_4c8.ArEngineVer._6_2_ = 0;
  local_4c8.ArEngineVer.Changelist = 0;
  local_4c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_4c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_4c8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_4c8.SerializedProperty = (FProperty *)0x0;
  local_4c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_4c8.bCustomVersionsAreReset = false;
  local_4c8._129_7_ = 0;
  local_4c8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_4c8);
  local_438 = 0;
  local_4c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_430 = &local_6c8;
  local_428 = 0;
  FArchiveState::SetIsSaving(&local_4c8,true);
  (**(code **)(local_4c8._padding_ + 0x108))(&local_4c8,0);
  local_4c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FChunkDatabaseHeader::FChunkDatabaseHeader(&local_678);
  BuildPatchServices::operator<<((FArchive *)&local_4c8,&local_678);
  lVar43 = local_6c0;
  pIVar44 = (IBuildManifestSet *)(longlong)(int)local_6c0;
  uVar42 = local_6c0._4_4_;
  local_438 = 0;
  local_6c0 = (ulonglong)local_6c0._4_4_ << 0x20;
  local_680 = pIVar44;
  if ((lVar43 < 0) && (uVar42 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&local_6c8,0,(int *)((longlong)&local_6c0 + 4));
  }
  FGuid::NewGuid(&local_610);
  local_600 = 0;
  uStack_5f8 = 0;
  if (((local_678.Contents.AllocatorInstance.Data <= &local_610) &&
      (&local_610 <
       (FGuid *)(local_678.Contents.AllocatorInstance.Data +
                (longlong)local_678.Contents.ArrayMax * 0x20))) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar22)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_678.Contents.ArrayNum == local_678.Contents.ArrayMax) {
    local_678.Contents.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&local_678.Contents.AllocatorInstance,&local_678.Contents.ArrayMax);
  }
  *(undefined8 *)
   (local_678.Contents.AllocatorInstance.Data + (longlong)local_678.Contents.ArrayNum * 0x20) =
       local_610._0_8_;
  *(undefined8 *)
   (local_678.Contents.AllocatorInstance.Data + (longlong)local_678.Contents.ArrayNum * 0x20 + 8) =
       local_610._8_8_;
  *(undefined8 *)
   (local_678.Contents.AllocatorInstance.Data + (longlong)local_678.Contents.ArrayNum * 0x20 + 0x10)
       = local_600;
  *(ulonglong *)
   (local_678.Contents.AllocatorInstance.Data + (longlong)local_678.Contents.ArrayNum * 0x20 + 0x10
   + 8) = CONCAT44(uStack_5f4,uStack_5f8);
  local_678.Contents.ArrayNum = local_678.Contents.ArrayNum + 1;
  BuildPatchServices::operator<<((FArchive *)&local_4c8,&local_678);
  pIVar7 = (this->ChunkReferenceTracker).Ptr;
  local_688 = (IChunkDataSerialization *)((longlong)(int)local_6c0 - (longlong)pIVar44);
  (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&local_128);
  if ((int)(local_128.Elements._8_4_ - local_128.Elements._52_4_) < 1) {
    if (4 < (byte)LogPackageChunkData._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPackageChunkData);
    }
    OnPackageComplete(this,true);
  }
  else {
    iVar23 = local_738.ArrayNum;
    uVar41 = (ulonglong)local_738.ArrayNum;
    pTVar50 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
              (local_738.AllocatorInstance.Data + uVar41 * 0x50);
    local_728.Data = (FScriptContainerElement *)0x0;
    local_720 = 0;
    local_178.Elements._0_8_ = 0;
    local_178.Elements._8_8_ = 0;
    local_178.Elements._32_8_ = 0;
    local_178.Elements._40_4_ = 0;
    local_178.Elements._44_4_ = 0x80;
    local_178.Elements._48_4_ = 0xffffffff;
    local_178.Elements._52_4_ = 0;
    local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_178.HashSize = 0;
    FVar45.Data = local_738.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar41 != iVar23) {
        local_740 = 0;
        `TCheckedPointerIterator<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_740);
      }
      if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)FVar45.Data == pTVar50)
      break;
      local_268._0_8_ = (FScriptContainerElement *)0x0;
      local_268._8_8_ = 0;
      local_248 = (void *)0x0;
      local_240 = 0;
      local_23c = 0x80;
      local_238 = 0xffffffff;
      local_234 = 0;
      local_228 = (ForElementType<FSetElementId>)0x0;
      local_220 = 0;
      local_218._0_8_ = (void *)0x0;
      local_218._8_8_ = 0;
      local_1f8 = (void *)0x0;
      local_1f0 = 0;
      local_1ec = 0x80;
      local_1e8 = 0xffffffff;
      local_1e4 = 0;
      local_1d8 = (void *)0x0;
      local_1d0 = 0;
      if (((this->Manifest).Object == (FBuildPatchAppManifest *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar26 = (this->Manifest).Object;
      (**(code **)(pFVar26->_padding_ + 0x1d0))(pFVar26,FVar45.Data,local_218);
      if (((this->Manifest).Object == (FBuildPatchAppManifest *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar26 = (this->Manifest).Object;
      (**(code **)(pFVar26->_padding_ + 0x188))(pFVar26,local_218,local_268);
      pTVar31 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Intersect
                          ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_268,
                           &local_88,&local_128);
      pTVar31 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
                          (pTVar31,&local_d8,&local_178);
      if ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_268 != pTVar31) {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
        Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
                  ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_268,pTVar31);
      }
      local_d8.HashSize = 0;
      if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8.Elements);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      if (0 < local_268._8_4_ - local_234) {
        iVar47 = iVar47 + 1;
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (&local_178,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_268
                  );
      }
      if (((local_728.Data <= (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_268
           ) && ((FScriptContainerElement *)local_268 <
                 local_728.Data + (longlong)local_720._4_4_ * 0x50)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar24 = (int)local_720;
      if ((int)local_720 == local_720._4_4_) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&local_728,(int *)((longlong)&local_720 + 4));
      }
      local_720 = CONCAT44(local_720._4_4_,iVar24 + 1);
      pTVar31 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                (local_728.Data + (longlong)iVar24 * 0x50);
      *(undefined8 *)&pTVar31->Elements = 0;
      *(undefined8 *)&(pTVar31->Elements).field_0x8 = 0;
      *(undefined8 *)&(pTVar31->Elements).field_0x20 = 0;
      *(undefined4 *)&(pTVar31->Elements).field_0x28 = 0;
      *(undefined4 *)&(pTVar31->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(pTVar31->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pTVar31->Elements).field_0x34 = 0;
      (pTVar31->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      pTVar31->HashSize = 0;
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
      Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
                (pTVar31,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_268);
      local_1d0 = 0;
      if (local_1d8 != (void *)0x0) {
        FMemory::Free(local_1d8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_218,0);
      if (local_1f8 != (void *)0x0) {
        FMemory::Free(local_1f8);
      }
      if ((void *)local_218._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_218._0_8_);
      }
      local_220 = 0;
      if (local_228 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_228);
      }
      iVar24 = SUB84(local_268._8_8_,4);
      local_268._8_8_ = local_268._8_8_ & 0xffffffff00000000;
      if (iVar24 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,(ForAnyElementType *)local_268,0,(int *)(local_268 + 0xc));
      }
      local_238 = 0xffffffff;
      local_234 = 0;
      local_240 = 0;
      if (0x80 < local_23c) {
        local_23c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_268 + 0x10),0);
      }
      if (local_248 != (void *)0x0) {
        FMemory::Free(local_248);
      }
      if ((FScriptContainerElement *)local_268._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_268._0_8_);
      }
      uVar41 = local_738._8_8_ & 0xffffffff;
      FVar45.Data = FVar45.Data + 0x50;
    }
    if (iVar47 < 2) {
      local_708 = 0;
    }
    else {
      local_708 = PackageChunksHelpers::GetNumDigitsRequiredForInteger((int)local_720);
    }
    local_748 = 0;
    if (0 < (int)local_720) {
      local_718 = (IPlatform *)0x0;
LAB_1432c0480:
      pIVar20 = local_718;
      puVar51 = (undefined1 *)0x0;
      local_710 = ~local_748 >> 0x1f;
      uVar42 = 0;
      if ((int)local_748 < (int)local_720) {
        uVar42 = local_710;
      }
      if ((uVar42 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar43 = (longlong)pIVar20 * 0x50;
      if (0 < *(int *)(local_728.Data + lVar43 + 8) - *(int *)(local_728.Data + lVar43 + 0x34)) {
        iVar47 = (this->ChunkDbFiles).ArrayNum;
        uVar41 = (ulonglong)iVar47;
        local_70c = 0;
        local_744 = iVar47 - 1;
        puVar32 = puVar51;
        if ((int)local_748 < (int)local_720) {
          puVar32 = (undefined1 *)(ulonglong)local_710;
        }
        if (((int)puVar32 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_6e8 = (IDownloadService *)(local_728.Data + lVar43);
        iStack_5e8 = 0;
        iVar23 = *(int *)(local_6e8 + 5);
        local_5e0 = local_6e8 + 2;
        uStack_5e4 = 1;
        local_5d0 = 0;
        iStack_5d4 = 0;
        if (iVar23 != 0) {
          IVar48 = (IDownloadService)local_5e0;
          if (local_6e8[4] != (IDownloadService)0x0) {
            IVar48 = local_6e8[4];
          }
          uVar42 = *(uint *)IVar48;
          local_5d0 = 0;
          while (uVar42 == 0) {
            lVar43 = (longlong)iStack_5e8;
            local_5d0 = local_5d0 + 0x20;
            iStack_5e8 = iStack_5e8 + 1;
            iStack_5d4 = iVar23;
            if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_5e8)
            goto LAB_1432c05e1;
            uVar42 = ((uint *)((longlong)IVar48 + 4))[lVar43];
          }
          uStack_5e4 = -uVar42 & uVar42;
          uVar5 = (ulonglong)uStack_5e4 * 2 + 1;
          lVar43 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar43 == 0; lVar43 = lVar43 + -1) {
            }
          }
          local_618 = (int)lVar43;
          iStack_5d4 = local_5d0 + -1 + local_618;
          if (iVar23 < iStack_5d4) {
            iStack_5d4 = iVar23;
          }
        }
LAB_1432c05e1:
        uStack_5cc = local_2cc;
        local_700 = (IDownloadService)(local_6e8 + 2);
        iStack_5c8 = *(int *)(local_6e8 + 1) - *(int *)&local_6e8[6].field_0x4;
        uVar42 = *(uint *)(local_6e8 + 5);
        TStack_5b8._padding_ = CONCAT44(uStack_5e4,iStack_5e8);
        uStack_5d8 = 0xffffffff;
        uVar49 = uVar42 & 0xffffffe0;
        TStack_5b8.CurrentBitIndex = iStack_5d4;
        TStack_5b8.UnvisitedBitMask = 0xffffffff;
        iVar24 = (int)uVar42 >> 5;
        TStack_5b8._28_4_ = local_2cc;
        TStack_5b8.BaseBitIndex = local_5d0;
        uStack_598 = CONCAT44(uStack_5c4,iStack_5c8);
        local_5f0 = local_6e8;
        local_5c0 = local_6e8;
        TStack_5b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_5e0;
        if ((((int)uVar42 < 0) || (iVar23 < (int)uVar42)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar25 = *(uint *)((longlong)local_700 + 0x18);
        if (uVar42 != uVar25) {
          IVar48 = local_700;
          if (*(IDownloadService *)((longlong)local_700 + 0x10) != (IDownloadService)0x0) {
            IVar48 = *(IDownloadService *)((longlong)local_700 + 0x10);
          }
          uVar42 = -1 << ((byte)uVar42 & 0x1f) & *(uint *)((longlong)IVar48 + (longlong)iVar24 * 4);
          while (uVar42 == 0) {
            lVar43 = (longlong)iVar24;
            uVar49 = uVar49 + 0x20;
            iVar24 = iVar24 + 1;
            uVar42 = uVar25;
            if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
            goto LAB_1432c0730;
            uVar42 = *(uint *)((longlong)IVar48 + 4 + lVar43 * 4);
          }
          uVar5 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
          lVar43 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar43 == 0; lVar43 = lVar43 + -1) {
            }
          }
          local_640 = (int)lVar43;
          uVar42 = (uVar49 - 1) + local_640;
          if ((int)uVar25 < (int)uVar42) {
            uVar42 = uVar25;
          }
        }
LAB_1432c0730:
        do {
          pIVar21 = local_5c0;
          if (*(int *)(local_5c0 + 1) - *(int *)&local_5c0[6].field_0x4 != (int)uStack_598) {
            local_73f[0] = 0;
            `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_73f);
          }
          if (((TStack_5b8.CurrentBitIndex == uVar42) &&
              ((IDownloadService)TStack_5b8.Array == local_700)) && (pIVar21 == local_6e8))
          goto LAB_1432c0aa3;
          puVar3 = (undefined8 *)
                   (*(longlong *)&pIVar21->field_0x0 + (longlong)TStack_5b8.CurrentBitIndex * 0x18);
          if (((this->Manifest).Object == (FBuildPatchAppManifest *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar26 = (this->Manifest).Object;
          lVar43 = (**(code **)(pFVar26->_padding_ + 0x1a8))(pFVar26,puVar3);
          puVar32 = &local_688->field_0x0 + lVar43;
          if (puVar51 < puVar32) {
            lVar43 = (longlong)(int)local_744;
            if (iVar47 <= (int)local_744) {
              uVar49 = 0;
              if ((int)local_744 < (this->ChunkDbFiles).ArrayNum) {
                uVar49 = ~local_744 >> 0x1f;
              }
              if ((uVar49 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (*(int *)((this->ChunkDbFiles).AllocatorInstance.Data + lVar43 * 0x20 + 0x18) < 1)
              goto LAB_1432c0986;
            }
            iVar23 = (this->ChunkDbFiles).ArrayNum;
            piVar2 = &(this->ChunkDbFiles).ArrayMax;
            if (iVar23 == *piVar2) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&(this->ChunkDbFiles).AllocatorInstance,piVar2);
            }
            (this->ChunkDbFiles).ArrayNum = iVar23 + 1;
            DefaultConstructItems<BuildPatchServices::FChunkDatabaseFile,int>
                      ((this->ChunkDbFiles).AllocatorInstance.Data + (longlong)iVar23 * 0x20,1);
            local_70c = local_70c + 1;
            local_744 = local_744 + 1;
            puVar51 = (undefined1 *)((this->Configuration).MaxOutputFileSize - (longlong)local_680);
            uVar49 = 0;
            if ((int)local_748 < (this->TagSetLookupTable).ArrayNum) {
              uVar49 = local_710;
            }
            if ((uVar49 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar46 = (this->TagSetLookupTable).AllocatorInstance.Data + (longlong)local_718 * 0x10;
            if (((*(uint **)&pFVar46->field_0x0 <= &local_744) &&
                (&local_744 < *(uint **)&pFVar46->field_0x0 + *(int *)(pFVar46 + 0xc))) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar23 = *(int *)&pFVar46[8].field_0x0;
            if (iVar23 == *(int *)(pFVar46 + 0xc)) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar46,(int *)(pFVar46 + 0xc));
            }
            *(int *)&pFVar46[8].field_0x0 = iVar23 + 1;
            *(uint *)(*(longlong *)&pFVar46->field_0x0 + (longlong)iVar23 * 4) = local_744;
          }
LAB_1432c0986:
          uVar49 = local_744;
          uVar25 = 0;
          if ((int)local_744 < (this->ChunkDbFiles).ArrayNum) {
            uVar25 = ~local_744 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar46 = (this->ChunkDbFiles).AllocatorInstance.Data;
          if (((*(undefined8 **)(pFVar46 + (longlong)(int)uVar49 * 0x20 + 0x10) <= puVar3) &&
              (puVar3 < *(undefined8 **)(pFVar46 + (longlong)(int)uVar49 * 0x20 + 0x10) +
                        (longlong)*(int *)(pFVar46 + (longlong)(int)uVar49 * 0x20 + 0x1c) * 2)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar23 = *(int *)(pFVar46 + (longlong)(int)uVar49 * 0x20 + 0x18);
          if (iVar23 == *(int *)(pFVar46 + (longlong)(int)uVar49 * 0x20 + 0x1c)) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,(ForAnyElementType *)
                                      (pFVar46 + (longlong)(int)uVar49 * 0x20 + 0x10),
                                (int *)(pFVar46 + (longlong)(int)uVar49 * 0x20 + 0x1c));
          }
          *(int *)(pFVar46 + (longlong)(int)uVar49 * 0x20 + 0x18) = iVar23 + 1;
          uVar19 = puVar3[1];
          puVar4 = (undefined8 *)
                   (*(longlong *)(pFVar46 + (longlong)(int)uVar49 * 0x20 + 0x10) +
                   (longlong)iVar23 * 0x10);
          *puVar4 = *puVar3;
          puVar4[1] = uVar19;
          if (puVar32 < puVar51) {
            puVar51 = puVar51 + -(longlong)puVar32;
          }
          else {
            puVar51 = (undefined1 *)0x0;
          }
          TStack_5b8.UnvisitedBitMask = TStack_5b8.UnvisitedBitMask & ~TStack_5b8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5b8);
        } while( true );
      }
      goto LAB_1432c0eae;
    }
LAB_1432c0ecb:
    pIVar37 = (IMemoryChunkStoreStatistics *)0x0;
    local_698.Data.ArrayNum = (this->Configuration).CloudDir.Data.ArrayNum;
    lVar43 = (longlong)local_698.Data.ArrayNum;
    pFVar46 = (this->Configuration).CloudDir.Data.AllocatorInstance.Data;
    local_698.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_698.Data.ArrayNum == 0) {
      local_698.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_698.Data.ArrayNum,0,(ForAnyElementType *)&local_698,
                 local_698.Data.ArrayNum,&local_698.Data.ArrayMax);
      memcpy(local_698.Data.AllocatorInstance.Data,pFVar46,lVar43 * 2);
    }
    local_6a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6a8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_6a8.AllocatorInstance,1,&local_6a8.ArrayMax);
    ConstructItems<FString,FString,int>(local_6a8.AllocatorInstance.Data,&local_698,1);
    FCloudSourceConfig::FCloudSourceConfig(&local_368,&local_6a8);
    DestructItems<FString,int>((FString *)local_6a8.AllocatorInstance.Data,local_6a8.ArrayNum);
    if (local_6a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.AllocatorInstance.Data);
    }
    if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data.AllocatorInstance.Data);
    }
    IVar9 = (IMemoryChunkStoreStatistics)(this->FileOperationTracker).Ptr;
    local_368.bBeginDownloadsOnFirstGet = false;
    local_368.MaxRetryCount = 0x1e;
    if ((IVar9 == (IMemoryChunkStoreStatistics)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("FileOperationTracker != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\MemoryChunkStoreStatistics.cpp"
                            ,0xe0,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar34 = ::operator_new(0xc0);
    pIVar36 = pIVar37;
    if (pIVar34 != (IMemoryChunkStoreStatistics *)0x0) {
      pIVar34[1] = IVar9;
      *pIVar34 = (IMemoryChunkStoreStatistics)
                 &___7FMemoryChunkStoreStatistics_BuildPatchServices__6B_;
      *(undefined4 *)(pIVar34 + 2) = 0;
      pIVar34[3] = (IMemoryChunkStoreStatistics)0x0;
      *(undefined4 *)(pIVar34 + 4) = 0;
      *(undefined4 *)&pIVar34[4].field_0x4 = 0;
      *(undefined4 *)(pIVar34 + 5) = 0;
      pIVar34[6] = (IMemoryChunkStoreStatistics)0x0;
      *(undefined4 *)(pIVar34 + 7) = 0;
      *(undefined4 *)&pIVar34[7].field_0x4 = 0;
      *(undefined4 *)(pIVar34 + 8) = 0;
      *(undefined4 *)&pIVar34[8].field_0x4 = 0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar34 + 9),4000);
      pIVar34[0xe] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[0xf] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[0x12] = (IMemoryChunkStoreStatistics)0x0;
      *(undefined4 *)(pIVar34 + 0x13) = 0;
      *(undefined4 *)&pIVar34[0x13].field_0x4 = 0x80;
      *(undefined4 *)(pIVar34 + 0x14) = 0xffffffff;
      *(undefined4 *)&pIVar34[0x14].field_0x4 = 0;
      pIVar34[0x16] = (IMemoryChunkStoreStatistics)0x0;
      *(undefined4 *)(pIVar34 + 0x17) = 0;
      pIVar36 = pIVar34;
    }
    pIVar34 = (this->MemoryChunkStoreStatistics).Ptr;
    if ((pIVar34 != pIVar36) &&
       ((this->MemoryChunkStoreStatistics).Ptr = pIVar36,
       pIVar34 != (IMemoryChunkStoreStatistics *)0x0)) {
      (**(code **)*pIVar34)(pIVar34,1);
    }
    IVar9 = (IMemoryChunkStoreStatistics)(this->InstallerAnalytics).Ptr;
    IVar10 = (IMemoryChunkStoreStatistics)(this->FileOperationTracker).Ptr;
    if ((IVar9 == (IMemoryChunkStoreStatistics)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstallerAnalytics != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\CloudChunkSourceStatistics.cpp"
                            ,0xcf,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((&this->BuildProgress == (FBuildPatchProgress *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("BuildProgress != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\CloudChunkSourceStatistics.cpp"
                            ,0xd0,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((IVar10 == (IMemoryChunkStoreStatistics)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("FileOperationTracker != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\CloudChunkSourceStatistics.cpp"
                            ,0xd1,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar34 = ::operator_new(0x90);
    pIVar36 = pIVar37;
    if (pIVar34 != (IMemoryChunkStoreStatistics *)0x0) {
      pIVar34[1] = IVar9;
      *pIVar34 = (IMemoryChunkStoreStatistics)
                 &___7FCloudChunkSourceStatistics_BuildPatchServices__6B_;
      pIVar34[2] = (IMemoryChunkStoreStatistics)&this->BuildProgress;
      pIVar34[3] = IVar10;
      pIVar34[4] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[5] = (IMemoryChunkStoreStatistics)0x0;
      *(undefined4 *)(pIVar34 + 6) = 0;
      *(undefined4 *)&pIVar34[6].field_0x4 = 0;
      *(undefined4 *)(pIVar34 + 7) = 0;
      *(undefined4 *)&pIVar34[7].field_0x4 = 0;
      *(undefined4 *)(pIVar34 + 8) = 0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar34 + 9),4000);
      *(undefined4 *)(pIVar34 + 0xe) = 4;
      *(int *)(pIVar34 + 0x11) = 0;
      pIVar34[0xf] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[0x10] = (IMemoryChunkStoreStatistics)0x0;
      *(undefined4 *)&pIVar34[0x11].field_0x4 = 0;
      iVar47 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,5,(ForAnyElementType *)(pIVar34 + 0x10),(int *)(pIVar34 + 0x11),
                          (int *)&pIVar34[0x11].field_0x4);
      IVar9 = pIVar34[0x10];
      puVar3 = (undefined8 *)((longlong)IVar9 + (longlong)iVar47 * 4);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)((longlong)IVar9 + 0x10 + (longlong)iVar47 * 4) = 0;
      pIVar36 = pIVar34;
    }
    pIVar34 = (IMemoryChunkStoreStatistics *)(this->CloudChunkSourceStatistics).Ptr;
    if ((pIVar34 != pIVar36) &&
       ((this->CloudChunkSourceStatistics).Ptr = (ICloudChunkSourceStatistics *)pIVar36,
       pIVar34 != (IMemoryChunkStoreStatistics *)0x0)) {
      (**(code **)*pIVar34)(pIVar34,1);
    }
    pIVar35 = FChunkDataSerializationFactory::Create((this->FileSystem).Ptr,Latest);
    pIVar11 = (this->ChunkDataSerialization).Ptr;
    if ((pIVar11 != pIVar35) &&
       ((this->ChunkDataSerialization).Ptr = pIVar35, pIVar11 != (IChunkDataSerialization *)0x0)) {
      (**(code **)*pIVar11)(pIVar11,1);
    }
    IVar9 = (IMemoryChunkStoreStatistics)(this->ChunkReferenceTracker).Ptr;
    if ((IVar9 == (IMemoryChunkStoreStatistics)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkReferenceTracker != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\ChunkEvictionPolicy.cpp"
                            ,0x45,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar34 = ::operator_new(0x10);
    pIVar36 = pIVar37;
    if (pIVar34 != (IMemoryChunkStoreStatistics *)0x0) {
      pIVar34[1] = IVar9;
      *pIVar34 = (IMemoryChunkStoreStatistics)&___7FChunkEvictionPolicy_BuildPatchServices__6B_;
      pIVar36 = pIVar34;
    }
    pIVar34 = (IMemoryChunkStoreStatistics *)(this->MemoryEvictionPolicy).Ptr;
    if ((pIVar34 != pIVar36) &&
       ((this->MemoryEvictionPolicy).Ptr = (IChunkEvictionPolicy *)pIVar36,
       pIVar34 != (IMemoryChunkStoreStatistics *)0x0)) {
      (**(code **)*pIVar34)(pIVar34,1);
    }
    IVar9 = (IMemoryChunkStoreStatistics)(this->MemoryEvictionPolicy).Ptr;
    IVar10 = (IMemoryChunkStoreStatistics)(this->MemoryChunkStoreStatistics).Ptr;
    if ((IVar9 == (IMemoryChunkStoreStatistics)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("EvictionPolicy != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\MemoryChunkStore.cpp"
                            ,0xfd,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((IVar10 == (IMemoryChunkStoreStatistics)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("MemoryChunkStoreStat != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\MemoryChunkStore.cpp"
                            ,0xfe,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar34 = ::operator_new(0x120);
    pIVar36 = pIVar37;
    if (pIVar34 != (IMemoryChunkStoreStatistics *)0x0) {
      *(undefined4 *)(pIVar34 + 1) = 0x200;
      *pIVar34 = (IMemoryChunkStoreStatistics)&___7FMemoryChunkStore_BuildPatchServices__6B_;
      pIVar34[4] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[5] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[9] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[0xb] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[2] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[3] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[6] = (IMemoryChunkStoreStatistics)0x0;
      *(undefined4 *)(pIVar34 + 7) = 0;
      *(undefined4 *)&pIVar34[7].field_0x4 = 0x80;
      *(undefined4 *)(pIVar34 + 8) = 0xffffffff;
      *(undefined4 *)&pIVar34[8].field_0x4 = 0;
      pIVar34[10] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[0xc] = IVar9;
      pIVar34[0xd] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[0xe] = IVar10;
      pIVar34[0xf] = (IMemoryChunkStoreStatistics)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar34 + 0x10),4000);
      pIVar34[0x16] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[0x1b] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[0x1c] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[0x1d] = (IMemoryChunkStoreStatistics)0x0;
      pIVar34[0x1e] = (IMemoryChunkStoreStatistics)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar34 + 0x1f),4000);
      (**(code **)(*(longlong *)pIVar34[0xe] + 0x28))(pIVar34[0xe],*(undefined4 *)(pIVar34 + 1));
      pIVar36 = pIVar34;
    }
    pIVar34 = (IMemoryChunkStoreStatistics *)(this->CloudChunkStore).Ptr;
    if ((pIVar34 != pIVar36) &&
       ((this->CloudChunkStore).Ptr = (IMemoryChunkStore *)pIVar36,
       pIVar34 != (IMemoryChunkStoreStatistics *)0x0)) {
      (**(code **)*pIVar34)(pIVar34,1);
    }
    IVar9 = (IMemoryChunkStoreStatistics)(this->DownloadServiceStatistics).Ptr;
    pIVar36 = ::operator_new(0x78);
    if (pIVar36 != (IMemoryChunkStoreStatistics *)0x0) {
      pIVar36[1] = IVar9;
      *pIVar36 = (IMemoryChunkStoreStatistics)&___7FDownloadConnectionCount_BuildPatchServices__6B_;
      pIVar36[5] = (IMemoryChunkStoreStatistics)0x3feb333333333333;
      pIVar36[6] = (IMemoryChunkStoreStatistics)0x3fe4cccccccccccd;
      *(undefined4 *)(pIVar36 + 2) = 100;
      *(undefined4 *)&pIVar36[2].field_0x4 = 8;
      *(undefined4 *)(pIVar36 + 3) = 8;
      *(undefined4 *)&pIVar36[3].field_0x4 = 8;
      *(undefined4 *)(pIVar36 + 4) = 4;
      *(undefined1 *)(pIVar36 + 7) = 0;
      *(undefined4 *)&pIVar36[7].field_0x4 = 0x10;
      *(undefined4 *)(pIVar36 + 8) = 8;
      *(undefined4 *)(pIVar36 + 9) = 0;
      *(undefined8 *)&pIVar36[9].field_0x4 = 0x10;
      *(undefined4 *)&pIVar36[10].field_0x4 = 0;
      pIVar36[0xb] = (IMemoryChunkStoreStatistics)0x0;
      pIVar36[0xc] = (IMemoryChunkStoreStatistics)0x0;
      *(undefined4 *)(pIVar36 + 0xd) = 0;
      *(undefined4 *)&pIVar36[0xd].field_0x4 = 4;
      *(undefined4 *)(pIVar36 + 0xe) = 0x10;
      pIVar37 = pIVar36;
    }
    pIVar36 = (IMemoryChunkStoreStatistics *)(this->DownloadConnectionCount).Ptr;
    if ((pIVar36 != pIVar37) &&
       ((this->DownloadConnectionCount).Ptr = (IDownloadConnectionCount *)pIVar37,
       pIVar36 != (IMemoryChunkStoreStatistics *)0x0)) {
      (**(code **)((longlong)*pIVar36 + 8))(pIVar36,1);
    }
    local_520.Elements._0_8_ = 0;
    local_520.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_520.Elements._48_8_ = _UNK_150631d98;
    local_520.Elements._8_8_ = 0;
    local_520.Elements._32_8_ = 0;
    local_520.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_520.HashSize = 0;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=(&local_520,&local_128);
    local_680 = (this->ManifestSet).Ptr;
    pIVar11 = (this->ChunkDataSerialization).Ptr;
    pIVar12 = (ICloudChunkSourceStat *)(this->CloudChunkSourceStatistics).Ptr;
    pIVar13 = (this->DownloadConnectionCount).Ptr;
    pIVar14 = (this->InstallerError).Ptr;
    pIVar15 = (this->MessagePump).Ptr;
    local_6e0 = (this->ChunkReferenceTracker).Ptr;
    local_6e8 = (this->DownloadService).Ptr;
    local_700 = (IDownloadService)(this->CloudChunkStore).Ptr;
    local_718 = (this->Platform).Ptr;
    local_688 = pIVar11;
    pFVar38 = FCloudSourceConfig::FCloudSourceConfig(&local_2c8,&local_368);
    if (5 < (byte)LogCloudChunkSource._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCloudChunkSource);
    }
    if ((local_718 == (IPlatform *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Platform != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                            ,0x33d,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((local_700 == (IDownloadService)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkStore != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                            ,0x33e,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((local_6e8 == (IDownloadService *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("DownloadService != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                            ,0x33f,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((local_6e0 == (IChunkReferenceTracker *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkReferenceTracker != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                            ,0x340,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pIVar11 == (IChunkDataSerialization *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkDataSerialization != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                            ,0x341,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pIVar15 == (IMessagePump *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("MessagePump != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                            ,0x342,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pIVar14 == (IInstallerError *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstallerError != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                            ,0x343,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pIVar13 == (IDownloadConnectionCount *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("ConnectionCount != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                            ,0x344,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pIVar12 == (ICloudChunkSourceStat *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("CloudChunkSourceStat != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                            ,0x345,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar39 = ::operator_new(0x280);
    if (pFVar39 == (FCloudChunkSource *)0x0) {
      pFVar39 = (FCloudChunkSource *)0x0;
    }
    else {
      local_3e8.Elements._0_8_ = 0;
      local_3e8.Elements._8_8_ = 0;
      local_3e8.Elements._32_8_ = 0;
      local_3e8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_3e8.Elements._48_8_ = _UNK_150631d98;
      local_3e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_3e8.HashSize = 0;
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
      Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>(&local_3e8,&local_520);
      local_580.CloudRoots.AllocatorInstance.Data = (pFVar38->CloudRoots).AllocatorInstance.Data;
      (pFVar38->CloudRoots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_580.CloudRoots.ArrayNum = (pFVar38->CloudRoots).ArrayNum;
      local_580.CloudRoots.ArrayMax = (pFVar38->CloudRoots).ArrayMax;
      (pFVar38->CloudRoots).ArrayNum = 0;
      (pFVar38->CloudRoots).ArrayMax = 0;
      local_580.MaxRetryCount = pFVar38->MaxRetryCount;
      local_580.PreFetchMinimum = pFVar38->PreFetchMinimum;
      local_580.PreFetchMaximum = pFVar38->PreFetchMaximum;
      local_580.RetryDelayTimes.AllocatorInstance.Data =
           (pFVar38->RetryDelayTimes).AllocatorInstance.Data;
      (pFVar38->RetryDelayTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_580.RetryDelayTimes.ArrayNum = (pFVar38->RetryDelayTimes).ArrayNum;
      local_580.RetryDelayTimes.ArrayMax = (pFVar38->RetryDelayTimes).ArrayMax;
      (pFVar38->RetryDelayTimes).ArrayNum = 0;
      (pFVar38->RetryDelayTimes).ArrayMax = 0;
      local_580.HealthPercentages.AllocatorInstance.Data =
           (pFVar38->HealthPercentages).AllocatorInstance.Data;
      (pFVar38->HealthPercentages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_580.HealthPercentages.ArrayNum = (pFVar38->HealthPercentages).ArrayNum;
      local_580.HealthPercentages.ArrayMax = (pFVar38->HealthPercentages).ArrayMax;
      (pFVar38->HealthPercentages).ArrayNum = 0;
      (pFVar38->HealthPercentages).ArrayMax = 0;
      local_580.bBeginDownloadsOnFirstGet = pFVar38->bBeginDownloadsOnFirstGet;
      local_580.DisconnectedDelay = pFVar38->DisconnectedDelay;
      local_580.SharedContext = pFVar38->SharedContext;
      local_580.bRunOwnThread = pFVar38->bRunOwnThread;
      local_580.TcpZeroWindowMinimumSeconds = pFVar38->TcpZeroWindowMinimumSeconds;
      pFVar39 = FCloudChunkSource::FCloudChunkSource
                          (pFVar39,&local_580,local_718,(IChunkStore *)local_700,local_6e8,local_6e0
                           ,local_688,pIVar15,pIVar14,pIVar13,pIVar12,local_680,&local_3e8);
    }
    pFVar46 = (pFVar38->HealthPercentages).AllocatorInstance.Data;
    if (pFVar46 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar46);
    }
    pFVar46 = (pFVar38->RetryDelayTimes).AllocatorInstance.Data;
    if (pFVar46 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar46);
    }
    DestructItems<FString,int>
              ((FString *)(pFVar38->CloudRoots).AllocatorInstance.Data,
               (pFVar38->CloudRoots).ArrayNum);
    pFVar46 = (pFVar38->CloudRoots).AllocatorInstance.Data;
    if (pFVar46 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar46);
    }
    local_520.HashSize = 0;
    if (local_520.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_520.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_520.Elements);
    pFVar16 = (FCloudChunkSource *)(this->CloudChunkSource).Ptr;
    if ((pFVar16 != pFVar39) &&
       ((this->CloudChunkSource).Ptr = (ICloudChunkSource *)pFVar39,
       pFVar16 != (FCloudChunkSource *)0x0)) {
      (**(code **)pFVar16->_padding_)(pFVar16,1);
    }
    iVar47 = (this->ChunkDbFiles).ArrayNum;
    pFVar17 = (FChunkDatabaseFile *)(this->ChunkDbFiles).AllocatorInstance.Data;
    local_388 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`BuildPatchServices::FPackageChunks::BeginPackageProcess'::`20'::<lambda_1>,0,0>
                 ::_vftable_;
    local_398[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`BuildPatchServices::FPackageChunks::BeginPackageProcess'::__l20::<lambda_1>,void,bool>
                   ::Call;
    local_370 = 0;
    local_658.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_658.ArrayNum = iVar47;
    local_380 = this;
    if (iVar47 == 0) {
      local_658.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar47,0,&local_658.AllocatorInstance,iVar47,&local_658.ArrayMax);
      ConstructItems<BuildPatchServices::FChunkDatabaseFile,BuildPatchServices::FChunkDatabaseFile,int>
                (local_658.AllocatorInstance.Data,pFVar17,iVar47);
    }
    pIVar40 = FChunkDatabaseWriterFactory::Create
                        ((IChunkSource *)(this->CloudChunkSource).Ptr,(this->FileSystem).Ptr,
                         (this->InstallerError).Ptr,(this->ChunkReferenceTracker).Ptr,
                         (this->ChunkDataSerialization).Ptr,&local_658,
                         (TFunction<void___cdecl(bool)> *)local_398);
    pIVar18 = (this->ChunkDatabaseWriter).Ptr;
    if ((pIVar18 != pIVar40) &&
       ((this->ChunkDatabaseWriter).Ptr = pIVar40, pIVar18 != (IChunkDatabaseWriter *)0x0)) {
      (**(code **)*pIVar18)(pIVar18,1);
    }
    if (local_368.HealthPercentages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.HealthPercentages.AllocatorInstance.Data);
    }
    if (local_368.RetryDelayTimes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.RetryDelayTimes.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_368.CloudRoots.AllocatorInstance.Data,local_368.CloudRoots.ArrayNum)
    ;
    if (local_368.CloudRoots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.CloudRoots.AllocatorInstance.Data);
    }
    local_178.HashSize = 0;
    if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_178.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_178.Elements);
    DestructItems<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,int>
              ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_728.Data,
               (int)local_720);
    if ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_728.Data !=
        (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0) {
      FMemory::Free(local_728.Data);
    }
  }
  local_128.HashSize = 0;
  if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Elements);
  if ((FGuid *)local_678.Contents.AllocatorInstance.Data != (FGuid *)0x0) {
    FMemory::Free(local_678.Contents.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_4c8);
  if (local_6c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c8.Data);
  }
  local_1c8.HashSize = 0;
  if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1c8.Elements);
  DestructItems<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,int>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             local_738.AllocatorInstance.Data,local_738.ArrayNum);
  if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
      local_738.AllocatorInstance.Data !=
      (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
    FMemory::Free(local_738.AllocatorInstance.Data);
  }
  return;
LAB_1432c0aa3:
  if (local_70c < 2) {
    if (local_70c == 1) {
      local_6f8.Data.ArrayNum = (this->Configuration).OutputFile.Data.ArrayNum;
      lVar43 = (longlong)local_6f8.Data.ArrayNum;
      pFVar46 = (this->Configuration).OutputFile.Data.AllocatorInstance.Data;
      local_6f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_6f8.Data.ArrayNum == 0) {
        local_6f8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_6f8.Data.ArrayNum,0,(ForAnyElementType *)&local_6f8,
                   local_6f8.Data.ArrayNum,&local_6f8.Data.ArrayMax);
        memcpy(local_6f8.Data.AllocatorInstance.Data,pFVar46,lVar43 * 2);
      }
      ::FString::RemoveFromEnd(&local_6f8,L".delta.chunkdb",0xe,IgnoreCase);
      ::FString::RemoveFromEnd(&local_6f8,L".chunkdb",8,IgnoreCase);
      ::FString::ReplaceInline(&local_6f8,L"%",L"%%",IgnoreCase);
      if (0 < local_708) {
        ::FString::PrintfImpl(&local_628,L".tagset%0*d");
        iVar47 = local_628.Data.ArrayNum + -1;
        if (local_628.Data.ArrayNum == 0) {
          iVar47 = 0;
        }
        ::FString::AppendChars(&local_6f8,(wchar_t *)local_628.Data.AllocatorInstance.Data,iVar47);
        if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_628.Data.AllocatorInstance.Data);
        }
      }
      sVar33 = wcslen((wchar_t *)local_6e0);
      ::FString::AppendChars(&local_6f8,(wchar_t *)local_6e0,(int)sVar33);
      lVar43 = (longlong)(int)local_744;
      uVar42 = 0;
      if ((int)local_744 < (this->ChunkDbFiles).ArrayNum) {
        uVar42 = ~local_744 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar42 = local_6f8.Data.ArrayNum - 1;
      if (local_6f8.Data.ArrayNum == 0) {
        uVar42 = 0;
      }
      ::FString::AssignRange
                ((FString *)((this->ChunkDbFiles).AllocatorInstance.Data + lVar43 * 0x20),
                 (wchar_t *)local_6f8.Data.AllocatorInstance.Data,uVar42);
      if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_6d8.Data.ArrayNum = (this->Configuration).OutputFile.Data.ArrayNum;
    lVar43 = (longlong)local_6d8.Data.ArrayNum;
    pFVar46 = (this->Configuration).OutputFile.Data.AllocatorInstance.Data;
    local_6d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_6d8.Data.ArrayNum == 0) {
      local_6d8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_6d8.Data.ArrayNum,0,(ForAnyElementType *)&local_6d8,
                 local_6d8.Data.ArrayNum,&local_6d8.Data.ArrayMax);
      memcpy(local_6d8.Data.AllocatorInstance.Data,pFVar46,lVar43 * 2);
    }
    ::FString::RemoveFromEnd(&local_6d8,L".delta.chunkdb",0xe,IgnoreCase);
    ::FString::RemoveFromEnd(&local_6d8,L".chunkdb",8,IgnoreCase);
    if (0 < local_708) {
      ::FString::PrintfImpl(&local_638,L".tagset%0*d");
      iVar23 = local_638.Data.ArrayNum + -1;
      if (local_638.Data.ArrayNum == 0) {
        iVar23 = 0;
      }
      ::FString::AppendChars(&local_6d8,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar23);
      if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_638.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl(&local_590,L"%d");
    if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_590.Data.AllocatorInstance.Data);
    }
    if (iVar47 < (this->ChunkDbFiles).ArrayNum) {
      lVar43 = uVar41 << 5;
      do {
        uVar42 = (uint)uVar41;
        ::FString::PrintfImpl((FString *)&local_6b8,L"%s.part%0*d%s");
        uVar49 = 0;
        if ((int)uVar42 < (this->ChunkDbFiles).ArrayNum) {
          uVar49 = ~uVar42 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar46 = (this->ChunkDbFiles).AllocatorInstance.Data + lVar43;
        if (pFVar46 != (FScriptContainerElement *)&local_6b8) {
          pFVar8 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar46->field_0x0)->
                   AllocatorInstance).Data;
          if (pFVar8 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar8);
          }
          (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar46->field_0x0)->AllocatorInstance).
          Data = local_6b8;
          local_6b8 = (FScriptContainerElement *)0x0;
          *(int *)&pFVar46[8].field_0x0 = (int)local_6b0;
          *(int *)&pFVar46[0xc].field_0x0 = local_6b0._4_4_;
          local_6b0 = 0;
        }
        if (local_6b8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6b8);
        }
        uVar41 = (ulonglong)(uVar42 + 1);
        lVar43 = lVar43 + 0x20;
      } while ((int)(uVar42 + 1) < (this->ChunkDbFiles).ArrayNum);
    }
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
  }
LAB_1432c0eae:
  local_748 = local_748 + 1;
  local_718 = (IPlatform *)((longlong)local_718 + 1);
  if ((int)local_720 <= (int)local_748) goto LAB_1432c0ecb;
  goto LAB_1432c0480;
}

// HandleDownloadComplete @ 1432d9ca0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FPackageChunks::HandleDownloadComplete
          (FPackageChunks *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar1;
  TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *this_00;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  FSharedReferencer<1> FVar6;
  undefined1 local_68 [16];
  <lambda_1> local_58;
  TUniqueFunction<void___cdecl(void)> local_38;
  
  if (param_1 == this->RequestIdManifestFile) {
    lVar5 = 0x118;
  }
  else {
    if (param_1 != this->RequestIdPrevManifestFile) {
      return;
    }
    lVar5 = 0x130;
  }
  pTVar1 = (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *)
           ((this->Configuration).PrevTagSet.Hash.InlineData + lVar5 + -0x78);
  if (pTVar1 != (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
    cVar3 = (**(code **)((longlong)*param_2->Object + 0x10))();
    if (cVar3 == '\0') {
      if ((pTVar1->State).Object == (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((pTVar1->State).Object == (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0)
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this_00 = (pTVar1->State).Object;
      if ((*(TAtomic<bool> *)&this_00->_padding_ != (TAtomic<bool>)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this_00->Result).Pad[0] = '\0';
      (this_00->Result).Pad[1] = '\0';
      (this_00->Result).Pad[2] = '\0';
      (this_00->Result).Pad[3] = '\0';
      (this_00->Result).Pad[4] = '\0';
      (this_00->Result).Pad[5] = '\0';
      (this_00->Result).Pad[6] = '\0';
      (this_00->Result).Pad[7] = '\0';
      (this_00->Result).Pad[8] = '\0';
      (this_00->Result).Pad[9] = '\0';
      (this_00->Result).Pad[10] = '\0';
      (this_00->Result).Pad[0xb] = '\0';
      (this_00->Result).Pad[0xc] = '\0';
      (this_00->Result).Pad[0xd] = '\0';
      (this_00->Result).Pad[0xe] = '\0';
      (this_00->Result).Pad[0xf] = '\0';
      FFutureState::MarkComplete((FFutureState *)this_00);
      FVar6.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      local_38._0_8_ = 0;
      local_38._40_8_ = 0;
      local_58.Download.Object = param_2->Object;
      local_58.Download.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_58.Download.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.Download.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.Download.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.RelevantPromisePtr = pTVar1;
      Async<_BuildPatchServices::FPackageChunks::HandleDownloadComplete_::__l8::<lambda_1>_>
                ((TFuture<void> *)local_68,ThreadPool,&local_58,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_68._8_8_);
      FVar6.ReferenceController = local_58.Download.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
  }
  return;
}

// HandleManifestComplete @ 1432d9e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001432da144) */
/* WARNING: Removing unreachable block (ram,0x0001432da155) */
/* WARNING: Removing unreachable block (ram,0x0001432da159) */
/* WARNING: Removing unreachable block (ram,0x0001432da16c) */
/* WARNING: Removing unreachable block (ram,0x0001432da173) */
/* WARNING: Removing unreachable block (ram,0x0001432da177) */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FPackageChunks::HandleManifestComplete(FPackageChunks *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FBuildPatchAppManifest *pFVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar7;
  TSharedRef<FBuildPatchAppManifest,1> *pTVar8;
  FOptimisedDelta *pFVar9;
  FOptimisedDelta *pFVar10;
  longlong *plVar11;
  undefined1 auStackY_188 [32];
  FOptimisedDeltaConfiguration local_148;
  FString local_110;
  FBuildPatchAppManifest *local_100;
  TReferenceControllerBase<1> *pTStack_f8;
  FBuildPatchAppManifest *local_f0;
  TReferenceControllerBase<1> *pTStack_e8;
  TSharedRef<FBuildPatchAppManifest,1> local_e0;
  FBuildPatchAppManifest *local_d0;
  TReferenceControllerBase<1> *pTStack_c8;
  undefined1 local_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  FPackageChunks *pFStack_90;
  code *local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined **local_68;
  FPackageChunks *pFStack_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  code *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  lVar1 = *(longlong *)&this->FutureManifestFile;
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x68) != '\0')) &&
      (*(longlong *)&this->FuturePrevManifestFile != 0)) &&
     ((*(char *)(*(longlong *)&this->FuturePrevManifestFile + 0x68) != '\0' &&
      (this->bManifestsProcessed == false)))) {
    this->bManifestsProcessed = true;
    pTVar7 = TFutureBase<TSharedPtr<FBuildPatchAppManifest,1>_>::Get
                       ((TFutureBase<TSharedPtr<FBuildPatchAppManifest,1>_> *)
                        &this->FutureManifestFile);
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar7->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_100 = (this->Manifest).Object;
    pTStack_f8 = (this->Manifest).SharedReferenceCount.ReferenceController;
    (this->Manifest).Object = pFVar3;
    (this->Manifest).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f8);
    pTVar7 = TFutureBase<TSharedPtr<FBuildPatchAppManifest,1>_>::Get
                       ((TFutureBase<TSharedPtr<FBuildPatchAppManifest,1>_> *)
                        &this->FuturePrevManifestFile);
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar7->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f0 = (this->PrevManifest).Object;
    pTStack_e8 = (this->PrevManifest).SharedReferenceCount.ReferenceController;
    (this->PrevManifest).Object = pFVar3;
    (this->PrevManifest).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e8);
    pFVar10 = (FOptimisedDelta *)0x0;
    if ((this->Manifest).Object == (FBuildPatchAppManifest *)0x0) {
      if (1 < (byte)LogPackageChunkData._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageChunkData);
      }
      LOCK();
      this->bSuccess = (FThreadSafeBool)0x0;
      UNLOCK();
      LOCK();
      this->bShouldRun = (FThreadSafeBool)0x0;
      UNLOCK();
    }
    if ((1 < (this->Configuration).PrevManifestFilePath.Data.ArrayNum) &&
       ((this->PrevManifest).Object == (FBuildPatchAppManifest *)0x0)) {
      if (1 < (byte)LogPackageChunkData._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageChunkData);
      }
      LOCK();
      this->bSuccess = (FThreadSafeBool)0x0;
      UNLOCK();
      LOCK();
      this->bShouldRun = (FThreadSafeBool)0x0;
      UNLOCK();
    }
    if (this->bSuccess != (FThreadSafeBool)0x0) {
      pTVar8 = TSharedPtr<FBuildPatchAppManifest,1>::ToSharedRef(&this->Manifest,&local_e0);
      local_148.SourceManifest.Object = (FBuildPatchAppManifest *)0x0;
      local_148.SourceManifest.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_148.DestinationManifest.Object = pTVar8->Object;
      local_148.DestinationManifest.SharedReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_148.DestinationManifest.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_148.DestinationManifest.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.DestinationManifest.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_148.CloudDirectories.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.InstallMode = NonDestructiveInstall;
      local_148.CloudDirectories.ArrayNum = 0;
      local_148.CloudDirectories.ArrayMax = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar8->SharedReferenceCount).ReferenceController);
      FVar5.ReferenceController = local_148.SourceManifest.SharedReferenceCount.ReferenceController;
      pTVar2 = (this->PrevManifest).SharedReferenceCount.ReferenceController;
      pFVar3 = (this->PrevManifest).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d0 = local_148.SourceManifest.Object;
      pTStack_c8 = local_148.SourceManifest.SharedReferenceCount.ReferenceController;
      local_148.SourceManifest.Object = pFVar3;
      local_148.SourceManifest.SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      local_148.DeltaPolicy = Skip;
      if (0x10 < (int)(this->Configuration).FeatureLevel) {
        local_148.DeltaPolicy = TryFetchContinueWithout;
      }
      FPaths::GetPath(&local_110,&(this->Configuration).ManifestFilePath);
      DestructItems<FString,int>
                ((FString *)local_148.CloudDirectories.AllocatorInstance.Data,
                 local_148.CloudDirectories.ArrayNum);
      local_148.CloudDirectories.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,local_148.CloudDirectories.ArrayMax,
                 &local_148.CloudDirectories.AllocatorInstance,1,
                 &local_148.CloudDirectories.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_148.CloudDirectories.AllocatorInstance.Data,&local_110,1);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      local_28 = local_88;
      uStack_2c = pFStack_90._4_4_;
      uStack_30 = pFStack_90._0_4_;
      uStack_34 = uStack_94;
      local_38 = local_98;
      local_b8._0_8_ = (this->DownloadService).Ptr;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`BuildPatchServices::FPackageChunks::MakeOptimiseCompleteDelegate'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_58 = HandleManifestSelection;
      pFStack_60 = this;
      local_88 = HandleManifestSelection;
      plStack_80 = (longlong *)0x0;
      local_50 = 0;
      local_78 = 0;
      local_98 = 0x50a8d5d8;
      uStack_94 = 1;
      pFStack_90 = this;
      local_48 = 0;
      uStack_20 = 0;
      uStack_20 = 0;
      local_48 = 0;
      local_50 = 0;
      local_58 = HandleManifestSelection;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`BuildPatchServices::FPackageChunks::MakeOptimiseCompleteDelegate'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_78 = 0;
      plStack_80 = (longlong *)0x0;
      local_88 = HandleManifestSelection;
      uStack_94 = 1;
      local_98 = 0x50a8d5d8;
      local_b8._28_4_ = uStack_3c;
      local_b8._24_4_ = uStack_40;
      local_b8._16_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`BuildPatchServices::FPackageChunks::MakeOptimiseCompleteDelegate'::__l2::<lambda_1>,void,TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>_const_&>
           ::Call;
      if ((IDownloadService *)local_b8._0_8_ == (IDownloadService *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dependencies.DownloadService != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\OptimisedDelta.cpp"
                           ,0x11f,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar9 = ::operator_new(0x110);
      if (pFVar9 != (FOptimisedDelta *)0x0) {
        pFVar10 = FOptimisedDelta::FOptimisedDelta
                            (pFVar9,&local_148,(FOptimisedDeltaDependencies *)local_b8);
      }
      pFVar9 = (FOptimisedDelta *)(this->OptimisedDelta).Ptr;
      if ((pFVar9 != pFVar10) &&
         ((this->OptimisedDelta).Ptr = (IOptimisedDelta *)pFVar10, pFVar9 != (FOptimisedDelta *)0x0)
         ) {
        (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
      }
      if ((code *)local_b8._16_8_ != (code *)0x0) {
        plVar11 = (longlong *)&local_98;
        if (plStack_80 != (longlong *)0x0) {
          plVar11 = plStack_80;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      DestructItems<FString,int>
                ((FString *)local_148.CloudDirectories.AllocatorInstance.Data,
                 local_148.CloudDirectories.ArrayNum);
      if (local_148.CloudDirectories.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.CloudDirectories.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.DestinationManifest.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SourceManifest.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// HandleManifestSelection @ 1432da270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FPackageChunks::HandleManifestSelection
          (FPackageChunks *this,TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  IBuildManifestSet *pIVar2;
  IFileOperationTracker *pIVar3;
  IChunkDataSizeProvider *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FInstallerAction *pFVar8;
  IBuildManifestSet *pIVar9;
  ulonglong uVar10;
  FBuildPatchAppManifest *pFVar11;
  FBuildPatchAppManifest *pFVar12;
  int iVar13;
  FBuildPatchAppManifest *pFVar14;
  undefined1 auStackY_358 [32];
  TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_> local_318;
  FBuildPatchAppManifest *local_300;
  TReferenceControllerBase<1> *pTStack_2f8;
  FString local_2f0;
  FString local_2e0;
  TSharedRef<IBuildManifest,1> local_2d0;
  FBuildPatchAppManifest *local_2c0;
  FBuildPatchAppManifest *local_2b8;
  FBuildPatchAppManifest *local_2b0;
  TReferenceControllerBase<1> *local_2a8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_2a0;
  undefined8 local_250;
  TReferenceControllerBase<1> *pTStack_248;
  FInstallerAction local_238;
  FBuildPatchInstallerAction local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_358;
  uVar10 = (ulonglong)(param_1->Variant).TypeIndex;
  pFVar12 = (FBuildPatchAppManifest *)0x0;
  if (2 < uVar10) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar13 = 0;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TSharedPtr<FBuildPatchAppManifest,1>,TSharedPtr<class_FBuildPatchAppManifest,1>,TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_FBuildPatchAppManifest,1>,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10) == '\0') {
    local_250 = 0;
    pTStack_248 = (TReferenceControllerBase<1> *)0x0;
    iVar7 = 2;
    pFVar14 = pFVar12;
LAB_1432da36f:
    pFVar11 = local_2b8;
    if (iVar7 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_248);
    }
    if (iVar13 == 0) goto LAB_1432da389;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar14 = (FBuildPatchAppManifest *)(param_1->Variant)._padding_;
    pFVar11 = (FBuildPatchAppManifest *)(param_1->Variant)._padding_;
    if (pFVar11 != (FBuildPatchAppManifest *)0x0) {
      LOCK();
      (pFVar11->ManifestMeta).FeatureLevel = (pFVar11->ManifestMeta).FeatureLevel + CustomFields;
      UNLOCK();
    }
    pFVar12 = pFVar11;
    iVar7 = iVar13;
    iVar13 = 1;
    local_2c0 = pFVar14;
    local_2b8 = pFVar11;
    if (pFVar11 == (FBuildPatchAppManifest *)0x0) goto LAB_1432da36f;
    LOCK();
    (pFVar11->ManifestMeta).FeatureLevel = (pFVar11->ManifestMeta).FeatureLevel + CustomFields;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
LAB_1432da389:
  this->bUsingOptimisedDelta = (this->Manifest).Object != pFVar14;
  if (pFVar14 != (FBuildPatchAppManifest *)0x0) {
    if (pFVar12 != (FBuildPatchAppManifest *)0x0) {
      LOCK();
      (pFVar12->ManifestMeta).FeatureLevel = (pFVar12->ManifestMeta).FeatureLevel + CustomFields;
      UNLOCK();
    }
    local_300 = (this->Manifest).Object;
    pTStack_2f8 = (this->Manifest).SharedReferenceCount.ReferenceController;
    (this->Manifest).Object = pFVar14;
    (this->Manifest).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2f8)
    ;
  }
  local_2a0.Elements._16_8_ = 0;
  local_2a0.Elements._24_8_ = 0;
  local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_2a0.Elements._48_8_ = _UNK_150631d98;
  local_2f0.Data.ArrayNum = 0;
  local_2f0.Data.ArrayMax = 0;
  local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e0.Data.ArrayNum = 0;
  local_2e0.Data.ArrayMax = 0;
  local_2a0.Hash.InlineData[0] = '\0';
  local_2a0.Hash.InlineData[1] = '\0';
  local_2a0.Hash.InlineData[2] = '\0';
  local_2a0.Hash.InlineData[3] = '\0';
  local_2a0.Hash._padding_ = 0;
  local_2a0.HashSize = 0;
  local_2a0._76_4_ = 0;
  local_2a0.Elements._0_8_ = 0;
  local_2a0.Elements._8_8_ = 0;
  local_2a0.Elements._32_8_ = 0;
  local_2a0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  if ((this->Manifest).Object == (FBuildPatchAppManifest *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar1 = (this->Manifest).SharedReferenceCount.ReferenceController;
  pFVar14 = (this->Manifest).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar14 == (FBuildPatchAppManifest *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2d0.Object = (IBuildManifest *)pFVar14;
  local_2d0.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar8 = FInstallerAction::MakeInstall(&local_238,&local_2d0,&local_2a0,&local_2e0,&local_2f0);
  FBuildPatchInstallerAction::FBuildPatchInstallerAction(&local_198,pFVar8);
  local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x158,8,1,0,&local_318.AllocatorInstance,1,&local_318.ArrayMax);
  ConstructItems<BuildPatchServices::FBuildPatchInstallerAction,BuildPatchServices::FBuildPatchInstallerAction,int>
            (local_318.AllocatorInstance.Data,&local_198,1);
  pIVar9 = FBuildManifestSetFactory::Create(&local_318);
  pIVar2 = (this->ManifestSet).Ptr;
  if ((pIVar2 != pIVar9) && ((this->ManifestSet).Ptr = pIVar9, pIVar2 != (IBuildManifestSet *)0x0))
  {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  local_198.TaggedFiles.HashSize = 0;
  if (local_198.TaggedFiles.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198.TaggedFiles.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_198.TaggedFiles.Elements);
  local_198.InstallTags.HashSize = 0;
  if (local_198.InstallTags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198.InstallTags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_198.InstallTags.Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.InstallManifest.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.CurrentManifest.SharedReferenceCount.ReferenceController);
  FInstallerAction::~FInstallerAction(&local_198.InstallerAction);
  if (local_238.CloudSubdirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.CloudSubdirectory.Data.AllocatorInstance.Data);
  }
  if (local_238.InstallSubdirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.InstallSubdirectory.Data.AllocatorInstance.Data);
  }
  local_238.InstallTags.HashSize = 0;
  if (local_238.InstallTags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_238.InstallTags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_238.InstallTags.Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.InstallManifest.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.CurrentManifest.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pIVar3 = (this->FileOperationTracker).Ptr;
  (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,(this->ManifestSet).Ptr);
  pIVar4 = (this->ChunkDataSizeProvider).Ptr;
  pcVar5 = *(code **)((longlong)*pIVar4 + 0x20);
  local_2b0 = (this->Manifest).Object;
  local_2a8 = (this->Manifest).SharedReferenceCount.ReferenceController;
  if (local_2a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2a8->SharedReferenceCount = (atomic<int>)((int)local_2a8->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar5)(pIVar4,&local_2b0);
  BeginPackageProcess(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return;
}

// MakeOptimiseCompleteDelegate @ 1432dda20

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TFunction<void___cdecl(TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>_const_&)> *
__thiscall
BuildPatchServices::FPackageChunks::MakeOptimiseCompleteDelegate
          (FPackageChunks *this,
          TFunction<void___cdecl(TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>_const_&)>
          *__return_storage_ptr__,pmf_743248ee param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`BuildPatchServices::FPackageChunks::MakeOptimiseCompleteDelegate'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(FPackageChunks **)&__return_storage_ptr__->field_0x18 = this;
  *(pmf_743248ee *)&__return_storage_ptr__->field_0x20 = param_1;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`BuildPatchServices::FPackageChunks::MakeOptimiseCompleteDelegate'::__l2::<lambda_1>,void,TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>_const_&>
         ::Call;
  }
  return __return_storage_ptr__;
}

// MakePromiseCompleteDelegate @ 1432dda60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001432ddb41) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x0001432ddb45 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TFunction<void___cdecl(void)> * __thiscall
BuildPatchServices::FPackageChunks::MakePromiseCompleteDelegate
          (FPackageChunks *this,TFunction<void___cdecl(void)> *__return_storage_ptr__,
          pmf_47963ee4 param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined1 auStack_98 [32];
  code *local_78;
  FFunctionStorage local_68;
  code *local_48;
  undefined **local_38;
  FPackageChunks *local_30;
  pmf_47963ee4 local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`BuildPatchServices::FPackageChunks::MakePromiseCompleteDelegate'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`BuildPatchServices::FPackageChunks::MakePromiseCompleteDelegate'::__l2::<lambda_1>,void>
             ::Call;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`BuildPatchServices::FPackageChunks::MakePromiseCompleteDelegate'::__l2::<lambda_1>,void>
             ::Call;
  local_20 = (undefined ***)0x0;
  local_68.HeapAllocation = (void *)0x0;
  local_30 = this;
  local_28 = param_1;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`BuildPatchServices::FPackageChunks::MakePromiseCompleteDelegate'::__l2::<lambda_1>,0,0>
  ::CloneToEmptyStorage(&local_38,&local_68);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  puVar2 = FMemory::Malloc(0x40,0x10);
  *(undefined8 **)&__return_storage_ptr__->field_0x28 = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`BuildPatchServices::FPackageChunks::MakePromiseCompleteDelegate'::`2'::<lambda_2>,0,1>
             ::_vftable_;
  plVar1 = puVar2 + 2;
  *plVar1 = (longlong)local_78;
  puVar2[7] = local_68.HeapAllocation;
  local_68.HeapAllocation = (void *)0x0;
  *(undefined4 *)(puVar2 + 4) = local_68.InlineAllocation._0_4_;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_68.InlineAllocation._4_4_;
  *(undefined4 *)(puVar2 + 5) = local_68.InlineAllocation._8_4_;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = local_68.InlineAllocation._12_4_;
  puVar2[6] = local_68.InlineAllocation._16_8_;
  if (*plVar1 != 0) {
    local_78 = (code *)0x0;
  }
  if (plVar1 != (longlong *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`BuildPatchServices::FPackageChunks::MakePromiseCompleteDelegate'::__l2::<lambda_2>,void>
         ::Call;
  }
  if (local_78 != (code *)0x0) {
    (**(code **)(CONCAT44(local_68.InlineAllocation._4_4_,local_68.InlineAllocation._0_4_) + 0x10))
              ();
  }
  if (local_48 != (code *)0x0) {
    pppuVar3 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar3 = local_20;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return __return_storage_ptr__;
}

// OnPackageComplete @ 1432e0560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FPackageChunks::OnPackageComplete(FPackageChunks *this,bool param_1)

{
  EJsonToken EVar1;
  IInstallerError *pIVar2;
  ISpeedRecorder *pIVar3;
  undefined8 uVar4;
  FArchive *pFVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  FThreadSafeBool FVar9;
  int iVar10;
  uint uVar11;
  FThreadSafeBool FVar12;
  FText *pFVar13;
  ulong64 uVar14;
  FArchiveState *pFVar15;
  FArchiveState *this_00;
  ulonglong uVar16;
  size_t sVar17;
  IFileManager *pIVar18;
  uint uVar19;
  FArchiveState *pFVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  code *pcVar23;
  wchar_t *pwVar24;
  longlong lVar25;
  double dVar26;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6 [2];
  undefined4 local_1b4;
  undefined2 local_1b0 [4];
  undefined2 local_1a8 [4];
  undefined2 local_1a0 [4];
  undefined2 local_198 [4];
  undefined2 local_190 [4];
  uint local_188;
  wchar_t *local_180;
  undefined8 local_178;
  undefined8 local_170;
  FScriptContainerElement *local_168;
  TRawPtrProxy<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_> local_160;
  longlong local_158;
  FPackageChunks *local_150;
  FScriptContainerElement *local_148;
  TReferenceControllerBase<1> *local_140;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1> local_138;
  undefined8 local_128;
  FThreadSafeBool FStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  uint uStack_110;
  undefined4 uStack_10c;
  void *local_108 [2];
  FString local_f8;
  longlong *local_e8 [2];
  FText local_d8;
  FText local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  FThreadSafeBool FStack_b0;
  undefined4 uStack_ac;
  TStringView<wchar_t> local_a8;
  TStringBuilderBase<wchar_t> local_98;
  wchar_t local_78 [32];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar20 = (FArchiveState *)0x0;
  FVar12 = (FThreadSafeBool)0x0;
  if ((this->bSuccess == (FThreadSafeBool)0x0) || (FVar9 = (FThreadSafeBool)0x1, !param_1)) {
    FVar9 = FVar12;
  }
  LOCK();
  this->bSuccess = FVar9;
  UNLOCK();
  local_150 = this;
  cVar7 = (**(code **)((longlong)*(this->InstallerError).Ptr + 8))();
  if (cVar7 == '\0') {
    if (4 < (byte)LogPackageChunkData._0_1_) {
      pIVar3 = (this->DownloadSpeedRecorder).Ptr;
      dVar26 = (double)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,__real_7f7fffff);
      lVar25 = 0;
      if ((__real_43e0000000000000 <= dVar26) &&
         (dVar26 = dVar26 - __real_43e0000000000000, dVar26 < __real_43e0000000000000)) {
        lVar25 = -0x8000000000000000;
      }
      pFVar13 = FText::AsMemory(&local_c8,(longlong)dVar26 + lVar25,IEC);
      FText::ToString(pFVar13);
      uVar14 = (**(code **)((longlong)*(this->DownloadServiceStatistics).Ptr + 0x20))();
      pFVar13 = FText::AsMemory(&local_d8,uVar14,IEC);
      FText::ToString(pFVar13);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPackageChunkData);
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    if (1 < (byte)LogPackageChunkData._0_1_) {
      pIVar2 = (this->InstallerError).Ptr;
      pFVar13 = (FText *)(**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,local_e8);
      FText::BuildSourceString(pFVar13,&local_f8);
      pIVar2 = (this->InstallerError).Ptr;
      (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,local_108);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageChunkData);
      if (local_108[0] != (void *)0x0) {
        FMemory::Free(local_108[0]);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
    }
    LOCK();
    this->bSuccess = (FThreadSafeBool)0x0;
    UNLOCK();
  }
  if ((this->bSuccess != (FThreadSafeBool)0x0) &&
     (1 < (this->Configuration).ResultDataFilePath.Data.ArrayNum)) {
    local_180 = (wchar_t *)0x0;
    local_178 = 0;
    pFVar15 = ::operator_new(0x40);
    if (pFVar15 != (FArchiveState *)0x0) {
      this_00 = ::operator_new(0xa8);
      if (this_00 != (FArchiveState *)0x0) {
        local_170 = 0;
        this_00->_padding_ = 0;
        this_00->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        (this_00->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
        (this_00->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
        (this_00->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
        *(undefined8 *)&this_00->field_0x28 = 0;
        this_00->ArSerializingDefaults = 0;
        this_00->ArPortFlags = 0;
        this_00->ArMaxSerializeSize = 0;
        (this_00->ArUEVer).FileVersionUE4 = 0;
        (this_00->ArUEVer).FileVersionUE5 = 0;
        this_00->ArLicenseeUEVer = 0;
        (this_00->ArEngineVer).Major = 0;
        (this_00->ArEngineVer).Minor = 0;
        (this_00->ArEngineVer).Patch = 0;
        *(undefined2 *)&(this_00->ArEngineVer).field_0x6 = 0;
        (this_00->ArEngineVer).Changelist = 0;
        this_00->CustomVersionContainer = (FCustomVersionContainer *)0x0;
        this_00->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        this_00->SavePackageData = (FArchiveSavePackageData *)0x0;
        this_00->SerializedProperty = (FProperty *)0x0;
        this_00->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        *(undefined8 *)&this_00->bCustomVersionsAreReset = 0;
        this_00->NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(this_00);
        this_00[1]._padding_ = 0;
        this_00->_padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)&pFVar15->field_0x28;
        this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        FArchiveState::SetIsSaving(this_00,true);
        (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
        this_00->_padding_ = (longlong)&___7FMemoryWriter__6B_;
        pFVar20 = this_00;
      }
      pFVar15->ActiveFPLB = (FFastPathLoadBuffer *)pFVar20;
      pFVar15->_padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_
      ;
      pFVar15->ArMaxSerializeSize = (long64)&local_180;
      (pFVar15->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (pFVar15->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (pFVar15->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&pFVar15->field_0x28 = 0;
      pFVar15->ArSerializingDefaults = 0;
      pFVar15->ArPortFlags = 0;
      pFVar20 = pFVar15;
    }
    local_160.Object = (TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *)pFVar20;
    TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1>::
    TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_>
              (&local_138,&local_160);
    local_140 = local_138.SharedReferenceCount.ReferenceController;
    if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_138.Object);
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[17]>
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_138.Object,
               (wchar_t (*) [17])L"ChunkDbFilePaths");
    iVar10 = (this->ChunkDbFiles).ArrayNum;
    pFVar22 = (this->ChunkDbFiles).AllocatorInstance.Data;
    pFVar21 = pFVar22 + (longlong)iVar10 * 0x20;
    while( true ) {
      if ((this->ChunkDbFiles).ArrayNum != iVar10) {
        local_1b8 = 0;
        `TCheckedPointerIterator<BuildPatchServices::FChunkDatabaseFile,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1b8);
      }
      if (pFVar22 == pFVar21) break;
      bVar8 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
              CanWriteValueWithoutIdentifier
                        ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                         local_138.Object);
      if ((!bVar8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CanWriteValueWithoutIdentifier()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0xfa,L""), bVar8)) {
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      EVar1 = *(EJsonToken *)&(local_138.Object)->_padding_;
      if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0))))
      {
        local_1b0[0] = 0x2c;
        (**(code **)(*(longlong *)(local_138.Object)->_padding_ + 0x188))
                  ((FArchive *)(local_138.Object)->_padding_,local_1b0);
        *(EJsonToken *)&(local_138.Object)->_padding_ = Comma;
      }
      uVar4 = *(undefined8 *)pFVar22;
      FStack_120 = (FThreadSafeBool)(*(int *)(pFVar22 + 8) + -1);
      if (*(int *)(pFVar22 + 8) == 0) {
        FStack_120 = FVar12;
      }
      local_128._0_4_ = (undefined4)uVar4;
      local_128._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_b8 = (undefined4)local_128;
      uStack_b4 = local_128._4_4_;
      uStack_ac = uStack_11c;
      local_128 = uVar4;
      FStack_b0 = FStack_120;
      (**(code **)((local_138.Object)->_padding_ + 0x28))(local_138.Object,&local_b8);
      pFVar22 = pFVar22 + 0x20;
      *(EJsonToken *)&(local_138.Object)->_padding_ = String;
    }
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_138.Object);
    if (0 < (this->Configuration).TagSetArray.ArrayNum) {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
      WriteArrayStart<wchar_t_const_(&)[18]>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_138.Object,
                 (wchar_t (*) [18])L"TagSetLookupTable");
      local_188 = (this->TagSetLookupTable).ArrayNum;
      uVar16 = (ulonglong)(int)local_188;
      pFVar22 = (this->TagSetLookupTable).AllocatorInstance.Data;
      local_148 = pFVar22 + uVar16 * 0x10;
      while( true ) {
        pFVar21 = local_148;
        local_168 = pFVar22;
        if ((this->TagSetLookupTable).ArrayNum != (int)uVar16) {
          local_1b7 = 0;
          `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_1b7);
        }
        if (pFVar22 == pFVar21) break;
        bVar8 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
                CanWriteValueWithoutIdentifier
                          ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                           local_138.Object);
        if ((!bVar8) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CanWriteValueWithoutIdentifier()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x9b,L""), bVar8)) {
          pcVar23 = (code *)swi(3);
          (*pcVar23)();
          return;
        }
        EVar1 = *(EJsonToken *)&(local_138.Object)->_padding_;
        if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))
           ) {
          local_1a8[0] = 0x2c;
          (**(code **)(*(longlong *)(local_138.Object)->_padding_ + 0x188))
                    ((FArchive *)(local_138.Object)->_padding_,local_1a8,2);
          *(EJsonToken *)&(local_138.Object)->_padding_ = Comma;
        }
        local_1a0[0] = 0x5b;
        (**(code **)(*(longlong *)(local_138.Object)->_padding_ + 0x188))
                  ((FArchive *)(local_138.Object)->_padding_,local_1a0,2);
        *(int *)((longlong)&(local_138.Object)->_padding_ + 4) =
             *(int *)((longlong)&(local_138.Object)->_padding_ + 4) + 1;
        pFVar21 = (((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_138.Object)->_padding_)->
                  AllocatorInstance).Data;
        local_1b4 = 5;
        if (((pFVar21 <= (FScriptContainerElement *)&local_1b4) &&
            ((FScriptContainerElement *)&local_1b4 <
             pFVar21 + (longlong)*(int *)((longlong)&(local_138.Object)->_padding_ + 4) * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar23 = (code *)swi(3);
          (*pcVar23)();
          return;
        }
        iVar10 = (int)(local_138.Object)->_padding_;
        if (iVar10 == *(int *)((longlong)&(local_138.Object)->_padding_ + 4)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)&(local_138.Object)->_padding_,
                              (int *)((longlong)&(local_138.Object)->_padding_ + 4));
        }
        *(int *)&(local_138.Object)->_padding_ = iVar10 + 1;
        *(undefined4 *)
         ((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_138.Object)->_padding_)->
          AllocatorInstance).Data + (longlong)iVar10 * 4) = local_1b4;
        *(EJsonToken *)&(local_138.Object)->_padding_ = SquareOpen;
        lVar25 = *(longlong *)pFVar22;
        iVar10 = *(int *)(pFVar22 + 8);
        local_158 = lVar25 + (longlong)iVar10 * 4;
        while( true ) {
          lVar6 = local_158;
          if (*(int *)(pFVar22 + 8) != iVar10) {
            local_1b6[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1b6);
          }
          if (lVar25 == lVar6) break;
          bVar8 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
                  CanWriteValueWithoutIdentifier
                            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                             local_138.Object);
          if ((!bVar8) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CanWriteValueWithoutIdentifier()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0xde,L""), bVar8)) {
            pcVar23 = (code *)swi(3);
            (*pcVar23)();
            return;
          }
          EVar1 = *(EJsonToken *)&(local_138.Object)->_padding_;
          if ((EVar1 != CurlyOpen) &&
             ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
            local_198[0] = 0x2c;
            (**(code **)(*(longlong *)(local_138.Object)->_padding_ + 0x188))
                      ((FArchive *)(local_138.Object)->_padding_,local_198,2);
            *(EJsonToken *)&(local_138.Object)->_padding_ = Comma;
          }
          local_98.Base = local_78;
          local_98.CurPos = local_78;
          local_98.bIsDynamic = false;
          local_98.bIsExternal = false;
          local_98.End = (wchar_t *)local_38;
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_98,L"%lld");
          pwVar24 = local_98.Base;
          pFVar5 = (FArchive *)(local_138.Object)->_padding_;
          FVar9 = SUB84((longlong)local_98.CurPos - (longlong)local_98.Base >> 1,0);
          if (local_98.Base == (wchar_t *)0x0) {
            pwVar24 = (wchar_t *)0x0;
            pcVar23 = *(code **)(*(longlong *)pFVar5 + 0x188);
            FVar9 = FVar12;
          }
          else {
            if ((0 < (int)FVar9) && (local_98.Base[(longlong)(int)FVar9 + -1] == L'\0')) {
              FVar9 = (FThreadSafeBool)((int)FVar9 + -1);
            }
            pcVar23 = *(code **)(*(longlong *)pFVar5 + 0x188);
            if (FVar9 == (FThreadSafeBool)0xffffffff) {
              sVar17 = wcslen(local_98.Base);
              FVar9 = SUB84(sVar17,0);
            }
          }
          (*pcVar23)(pFVar5,pwVar24,(longlong)(int)FVar9 * 2);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
          lVar25 = lVar25 + 4;
          *(EJsonToken *)&(local_138.Object)->_padding_ = Number;
          pFVar22 = local_168;
        }
        iVar10 = (int)(local_138.Object)->_padding_;
        uVar19 = iVar10 - 1;
        uVar11 = 0;
        if ((int)uVar19 < iVar10) {
          uVar11 = ~uVar19 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar23 = (code *)swi(3);
          (*pcVar23)();
          return;
        }
        if ((*(int *)((((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_138.Object)->_padding_)
                      ->AllocatorInstance).Data +
                     (longlong)(int)(local_138.Object)->_padding_ * 4 + -4) != 5) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Array",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0xb9,L""), bVar8)) {
          pcVar23 = (code *)swi(3);
          (*pcVar23)();
          return;
        }
        pFVar5 = (FArchive *)(local_138.Object)->_padding_;
        *(int *)((longlong)&(local_138.Object)->_padding_ + 4) =
             *(int *)((longlong)&(local_138.Object)->_padding_ + 4) + -1;
        local_190[0] = 0x5d;
        (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_190,2);
        if (((int)(local_138.Object)->_padding_ < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar23 = (code *)swi(3);
          (*pcVar23)();
          return;
        }
        iVar10 = (int)(local_138.Object)->_padding_;
        uVar11 = iVar10 - 1;
        pFVar21 = (((TArray<EJson,TSizedDefaultAllocator<32>_> *)&(local_138.Object)->_padding_)->
                  AllocatorInstance).Data + (longlong)(int)uVar11 * 4;
        iVar10 = ~uVar11 + iVar10;
        if (iVar10 != 0) {
          memmove(pFVar21,pFVar21 + 4,(longlong)iVar10 << 2);
        }
        *(int *)&(local_138.Object)->_padding_ = (int)(local_138.Object)->_padding_ + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)&(local_138.Object)->_padding_,
                   (int)(local_138.Object)->_padding_,
                   (int *)((longlong)&(local_138.Object)->_padding_ + 4));
        uVar16 = (ulonglong)local_188;
        pFVar22 = pFVar22 + 0x10;
        *(EJsonToken *)&(local_138.Object)->_padding_ = SquareClose;
        this = local_150;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_138.Object);
    }
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
              ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_138.Object);
    (**(code **)((local_138.Object)->_padding_ + 8))(local_138.Object);
    pIVar18 = IFileManager::Get();
    if ((this->Configuration).ResultDataFilePath.Data.ArrayNum == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = (wchar_t *)(this->Configuration).ResultDataFilePath.Data.AllocatorInstance.Data;
    }
    local_118 = local_180;
    uStack_110 = (int)local_178 - 1;
    if ((int)local_178 == 0) {
      uStack_110 = 0;
    }
    local_a8._12_4_ = uStack_10c;
    local_a8.Size = uStack_110;
    local_a8.DataPtr = local_180;
    FVar12._0_1_ = FFileHelper::SaveStringToFile(&local_a8,pwVar24,AutoDetect,pIVar18,0);
    LOCK();
    FVar12._1_3_ = 0;
    this->bSuccess = FVar12;
    UNLOCK();
    if ((this->bSuccess == (FThreadSafeBool)0x0) && (1 < (byte)LogPackageChunkData._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageChunkData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
    if (local_180 != (wchar_t *)0x0) {
      FMemory::Free(local_180);
    }
  }
  LOCK();
  this->bShouldRun = (FThreadSafeBool)0x0;
  UNLOCK();
  return;
}

// Run @ 1432eb4e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall BuildPatchServices::FPackageChunks::Run(FPackageChunks *this)

{
  FThreadSafeBool FVar1;
  IDownloadService *pIVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FTaskGraphInterface *pFVar7;
  FTSTicker *this_00;
  FOutputDeviceRedirector *pFVar8;
  double dVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  FHttpModule::Get();
  pIVar2 = (this->DownloadService).Ptr;
  iVar6 = (**(code **)((longlong)*pIVar2 + 8))
                    (pIVar2,&(this->Configuration).ManifestFilePath,&this->DownloadCompleteDelegate,
                     &this->DownloadProgressDelegate);
  pIVar2 = (this->DownloadService).Ptr;
  this->RequestIdManifestFile = iVar6;
  iVar6 = (**(code **)((longlong)*pIVar2 + 8))
                    (pIVar2,&(this->Configuration).PrevManifestFilePath,
                     &this->DownloadCompleteDelegate,&this->DownloadProgressDelegate);
  this->RequestIdPrevManifestFile = iVar6;
  dVar9 = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar5 = __real_3f847ae140000000;
  dVar4 = __real_4170000000000000;
  FVar1 = this->bShouldRun;
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  while (FVar1 != (FThreadSafeBool)0x0) {
    GFrameCounter = GFrameCounter + 1;
    pFVar7 = FTaskGraphInterface::Get();
    (**(code **)((longlong)*pFVar7 + 0x48))(pFVar7);
    this_00 = FTSTicker::GetCoreTicker();
    FTSTicker::Tick(this_00,(float)dVar9);
    (**(code **)((longlong)*(this->MessagePump).Ptr + 0x28))();
    pFVar8 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::FlushThreadedLogs(pFVar8,None);
    QueryPerformanceCounter(&local_res8);
    dVar9 = dVar5 - (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) -
                    dVar3);
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    FWindowsPlatformProcess::Sleep((float)dVar9);
    QueryPerformanceCounter(&local_res10);
    dVar10 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
    dVar9 = dVar10 - dVar3;
    dVar3 = dVar10;
    FVar1 = this->bShouldRun;
  }
  pFVar8 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::FlushThreadedLogs(pFVar8,None);
  return this->bSuccess != (FThreadSafeBool)0x0;
}

