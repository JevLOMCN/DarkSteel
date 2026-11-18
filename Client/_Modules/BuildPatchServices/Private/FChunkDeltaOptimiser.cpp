// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// FChunkDeltaOptimiser @ 143220720

FChunkDeltaOptimiser * __thiscall
BuildPatchServices::FChunkDeltaOptimiser::FChunkDeltaOptimiser
          (FChunkDeltaOptimiser *this,FChunkDeltaOptimiserConfiguration *param_1)

{
  undefined1 *puVar1;
  FTSTicker *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IFileSystem *pIVar5;
  IFileSystem IVar6;
  IFileSystem *pIVar7;
  ISpeedRecorder *pIVar8;
  IInstallerAnalytics *pIVar9;
  IDownloadServiceStatistics *pIVar10;
  IDownloadService *pIVar11;
  IMessagePump *pIVar12;
  FStatsCollector *pFVar13;
  IFileSystem *pIVar14;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->_padding_ = (longlong)&___7FChunkDeltaOptimiser_BuildPatchServices__6B_;
  ::FString::FString(&(this->Configuration).ManifestAUri,&param_1->ManifestAUri);
  ::FString::FString(&(this->Configuration).ManifestBUri,&param_1->ManifestBUri);
  ::FString::FString(&(this->Configuration).CloudDirectory,&param_1->CloudDirectory);
  (this->Configuration).ScanWindowSize = param_1->ScanWindowSize;
  (this->Configuration).OutputChunkSize = param_1->OutputChunkSize;
  (this->Configuration).DiffAbortThreshold = param_1->DiffAbortThreshold;
  pFVar2 = FTSTicker::GetCoreTicker();
  this->CoreTicker = pFVar2;
  puVar1 = &(this->DownloadCompleteDelegate).field_0x8;
  pIVar14 = (IFileSystem *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->DownloadCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->DownloadCompleteDelegate = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->DownloadCompleteDelegate,(FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChunkDeltaOptimiser_BuildPatchServices____A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = HandleDownloadComplete;
    puVar3[3] = this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  *(undefined8 *)&(this->DownloadProgressDelegate).field_0x10 = 0;
  *(undefined8 *)&this->DownloadProgressDelegate = 0;
  *(undefined8 *)&(this->DownloadProgressDelegate).field_0x8 = 0;
  pIVar5 = ::operator_new(0x18);
  pIVar7 = pIVar14;
  if (pIVar5 != (IFileSystem *)0x0) {
    *pIVar5 = (IFileSystem)&___7FFileSystem_BuildPatchServices__6B_;
    IVar6 = (IFileSystem)IFileManager::Get();
    pIVar5[1] = IVar6;
    IVar6 = (IFileSystem)IPlatformFile::GetPlatformPhysical();
    pIVar5[2] = IVar6;
    pIVar7 = pIVar5;
  }
  (this->FileSystem).Ptr = pIVar7;
  pIVar5 = ::operator_new(0x10);
  pIVar7 = pIVar14;
  if (pIVar5 != (IFileSystem *)0x0) {
    *pIVar5 = (IFileSystem)&___7FHttpManager_BuildPatchServices__6B_;
    IVar6 = (IFileSystem)FHttpModule::Get();
    pIVar5[1] = IVar6;
    pIVar7 = pIVar5;
  }
  (this->HttpManager).Ptr = (IHttpManager *)pIVar7;
  pIVar7 = ::operator_new(0x40);
  if (pIVar7 != (IFileSystem *)0x0) {
    pIVar7[3] = (IFileSystem)0x0;
    pIVar7[4] = (IFileSystem)0x0;
    pIVar7[5] = (IFileSystem)0x0;
    pIVar7[6] = (IFileSystem)0x0;
    pIVar7[7] = (IFileSystem)0x0;
    *pIVar7 = (IFileSystem)&___7FChunkDataSizeProvider_BuildPatchServices__6B_;
    pIVar7[1] = (IFileSystem)0x0;
    pIVar7[2] = (IFileSystem)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar7 + 3),4000);
    pIVar14 = pIVar7;
  }
  (this->ChunkDataSizeProvider).Ptr = (IChunkDataSizeProvider *)pIVar14;
  pIVar8 = FSpeedRecorderFactory::Create();
  (this->DownloadSpeedRecorder).Ptr = pIVar8;
  pIVar9 = FInstallerAnalyticsFactory::Create((IAnalyticsProvider *)0x0);
  (this->InstallerAnalytics).Ptr = pIVar9;
  pIVar10 = FDownloadServiceStatisticsFactory::Create
                      ((this->DownloadSpeedRecorder).Ptr,
                       (IDataSizeProvider *)(this->ChunkDataSizeProvider).Ptr,pIVar9);
  (this->DownloadServiceStatistics).Ptr = pIVar10;
  pIVar11 = FDownloadServiceFactory::Create
                      ((this->HttpManager).Ptr,(this->FileSystem).Ptr,
                       (IDownloadServiceStat *)pIVar10,(this->InstallerAnalytics).Ptr);
  (this->DownloadService).Ptr = pIVar11;
  pIVar12 = FMessagePumpFactory::Create();
  (this->MessagePump).Ptr = pIVar12;
  pFVar13 = FStatsCollectorFactory::Create();
  (this->StatsCollector).Ptr = pFVar13;
  this->bShouldRun = (FThreadSafeBool)0x1;
  this->bSuccess = (FThreadSafeBool)0x0;
  this->RequestIdManifestA = -1;
  this->RequestIdManifestB = -1;
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>
            (&this->PromiseManifestA);
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>
            (&this->PromiseManifestB);
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::GetFuture
            (&this->PromiseManifestA,&this->FutureManifestA);
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::GetFuture
            (&this->PromiseManifestB,&this->FutureManifestB);
  return this;
}

// ~FChunkDeltaOptimiser @ 143227c60

void __thiscall
BuildPatchServices::FChunkDeltaOptimiser::~FChunkDeltaOptimiser(FChunkDeltaOptimiser *this)

{
  TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar1;
  FStatsCollector *pFVar2;
  IMessagePump *pIVar3;
  IDownloadService *pIVar4;
  IDownloadServiceStatistics *pIVar5;
  IInstallerAnalytics *pIVar6;
  ISpeedRecorder *pIVar7;
  IChunkDataSizeProvider *pIVar8;
  IHttpManager *pIVar9;
  IFileSystem *pIVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  bool bVar13;
  
  this->_padding_ = (longlong)&___7FChunkDeltaOptimiser_BuildPatchServices__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FutureManifestB).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FutureManifestA).field_0x8);
  pTVar1 = (this->PromiseManifestB).State.Object;
  if ((pTVar1 != (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) &&
     ((char)pTVar1->_padding_ == '\0')) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("State->IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x242,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PromiseManifestB).State.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->PromiseManifestA).State.Object;
  if ((pTVar1 != (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) &&
     ((char)pTVar1->_padding_ == '\0')) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("State->IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x242,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PromiseManifestA).State.SharedReferenceCount.ReferenceController);
  pFVar2 = (this->StatsCollector).Ptr;
  if (pFVar2 != (FStatsCollector *)0x0) {
    (**(code **)*pFVar2)(pFVar2,1);
  }
  pIVar3 = (this->MessagePump).Ptr;
  if (pIVar3 != (IMessagePump *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar4 = (this->DownloadService).Ptr;
  if (pIVar4 != (IDownloadService *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pIVar5 = (this->DownloadServiceStatistics).Ptr;
  if (pIVar5 != (IDownloadServiceStatistics *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  pIVar6 = (this->InstallerAnalytics).Ptr;
  if (pIVar6 != (IInstallerAnalytics *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  pIVar7 = (this->DownloadSpeedRecorder).Ptr;
  if (pIVar7 != (ISpeedRecorder *)0x0) {
    (**(code **)*pIVar7)(pIVar7,1);
  }
  pIVar8 = (this->ChunkDataSizeProvider).Ptr;
  if (pIVar8 != (IChunkDataSizeProvider *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  pIVar9 = (this->HttpManager).Ptr;
  if (pIVar9 != (IHttpManager *)0x0) {
    (**(code **)*pIVar9)(pIVar9,1);
  }
  pIVar10 = (this->FileSystem).Ptr;
  if (pIVar10 != (IFileSystem *)0x0) {
    (**(code **)*pIVar10)(pIVar10,1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DownloadProgressDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DownloadCompleteDelegate);
  pFVar11 = (this->Configuration).CloudDirectory.Data.AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  pFVar11 = (this->Configuration).ManifestBUri.Data.AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  pFVar11 = (this->Configuration).ManifestAUri.Data.AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  this->_padding_ = (longlong)&___7IChunkDeltaOptimiser_BuildPatchServices__6B_;
  return;
}

// operator() @ 14322d230

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
`BuildPatchServices::FChunkDeltaOptimiser::HandleDownloadComplete'::__l8::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FBuildPatchAppManifest *pFVar4;
  undefined8 uVar5;
  TRawPtrProxy<FBuildPatchAppManifest> local_res8;
  TSharedPtr<FBuildPatchAppManifest,1> local_28;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  pFVar4 = ::operator_new(0x2b8);
  local_res8.Object = (FBuildPatchAppManifest *)0x0;
  if (pFVar4 != (FBuildPatchAppManifest *)0x0) {
    local_res8.Object = FBuildPatchAppManifest::FBuildPatchAppManifest(pFVar4);
  }
  TSharedPtr<FBuildPatchAppManifest,1>::TSharedPtr<FBuildPatchAppManifest,1><FBuildPatchAppManifest>
            (&local_28,&local_res8);
  pFVar4 = local_28.Object;
  if (local_28.Object == (FBuildPatchAppManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(pFVar4->_padding_ + 0x160);
  uVar5 = (**(code **)(**(longlong **)this + 0x20))();
  cVar3 = (*pcVar1)(pFVar4,uVar5);
  if (cVar3 == '\0') {
    local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (FBuildPatchAppManifest *)0x0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_28.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
  }
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::SetValue
            (*(TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> **)((longlong)this + 0x10),&local_28)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// GetDesiredBytes @ 143255b90

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBlockStructure * __thiscall
BuildPatchServices::FChunkDeltaOptimiser::GetDesiredBytes
          (FChunkDeltaOptimiser *this,FBlockStructure *__return_storage_ptr__,
          TSharedPtr<FBuildPatchAppManifest,1> *param_1,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_2)

{
  FGuid *pFVar1;
  int iVar2;
  FBlockEntry *pFVar3;
  code *pcVar4;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  FString *pFVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  FBlockStructure *pFVar9;
  longlong lVar10;
  ulong64 uVar11;
  FGuid *pFVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  FString *pFVar15;
  undefined1 local_res10 [8];
  TSharedPtr<FBuildPatchAppManifest,1> *local_res18;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_res20;
  undefined1 local_68 [4];
  uint local_64;
  FString *local_60;
  FString *local_58;
  FString *local_50;
  undefined8 local_48;
  
  uVar13 = 0;
  __return_storage_ptr__->Head = (FBlockEntry *)0x0;
  __return_storage_ptr__->Tail = (FBlockEntry *)0x0;
  local_50 = (FString *)0x0;
  local_48 = 0;
  local_res18 = param_1;
  local_res20 = param_2;
  (**(code **)(param_1->Object->_padding_ + 0x1c8))(param_1->Object,&local_50);
  uVar8 = (ulonglong)(int)(uint)local_48;
  local_58 = local_50 + uVar8;
  local_64 = (uint)local_48;
  uVar14 = uVar13;
  pFVar15 = local_50;
  while( true ) {
    pFVar5 = local_58;
    local_60 = pFVar15;
    if ((uint)local_48 != (int)uVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar15 == pFVar5) break;
    if ((param_1->Object == (FBuildPatchAppManifest *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FBlockStructure *)(*pcVar4)();
      return pFVar9;
    }
    lVar10 = (**(code **)(param_1->Object->_padding_ + 0x1f8))(param_1->Object,pFVar15);
    this_00 = local_res20;
    iVar2 = *(int *)(lVar10 + 0x50);
    pFVar12 = *(FGuid **)(lVar10 + 0x48);
    pFVar1 = (FGuid *)((longlong)pFVar12 + (longlong)iVar2 * 0x18);
    while( true ) {
      if (*(int *)(lVar10 + 0x50) != iVar2) {
        local_68[0] = 0;
        `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_68);
      }
      if (pFVar12 == pFVar1) break;
      uVar11 = CityHash64((char *)pFVar12,0x10);
      iVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                        (this_00,(uint)uVar11,pFVar12);
      if (iVar7 != -1) {
        FBlockStructure::Add(__return_storage_ptr__,uVar14,(ulonglong)pFVar12[1].B,FromEnd);
        uVar13 = uVar13 + pFVar12[1].B;
      }
      uVar14 = uVar14 + pFVar12[1].B;
      pFVar12 = (FGuid *)&pFVar12[1].C;
    }
    pFVar15 = local_60 + 1;
    uVar8 = (ulonglong)local_64;
    param_1 = local_res18;
  }
  DestructItems<FString,int>(local_50,(uint)local_48);
  uVar14 = 0;
  if (local_50 != (FString *)0x0) {
    FMemory::Free(local_50);
  }
  for (pFVar3 = __return_storage_ptr__->Head; pFVar3 != (FBlockEntry *)0x0; pFVar3 = pFVar3->Next) {
    uVar14 = uVar14 + pFVar3->Size;
  }
  if ((uVar13 != uVar14) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UnknownCount == BlockStructureHelpers::CountSize(DesiredBytes)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkDeltaOptimiser.cpp"
                         ,0x53f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FBlockStructure *)(*pcVar4)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// HandleDownloadComplete @ 143257850

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FChunkDeltaOptimiser::HandleDownloadComplete
          (FChunkDeltaOptimiser *this,int param_1,
          TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *this_00;
  char cVar1;
  longlong lVar2;
  FSharedReferencer<1> FVar3;
  TSharedPtr<FBuildPatchAppManifest,1> local_68;
  <lambda_1> local_58;
  TUniqueFunction<void___cdecl(void)> local_38;
  
  if (param_1 == this->RequestIdManifestA) {
    lVar2 = 0xd8;
  }
  else {
    if (param_1 != this->RequestIdManifestB) {
      return;
    }
    lVar2 = 0xf0;
  }
  this_00 = (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *)((longlong)&this->_padding_ + lVar2);
  if (this_00 != (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
    cVar1 = (**(code **)((longlong)*param_2->Object + 0x10))();
    if (cVar1 == '\0') {
      local_68.Object = (FBuildPatchAppManifest *)0x0;
      local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::SetValue(this_00,&local_68);
      FVar3.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
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
      local_58.RelevantPromisePtr = this_00;
      Async<_BuildPatchServices::FChunkDeltaOptimiser::HandleDownloadComplete_::__l8::<lambda_1>_>
                ((TFuture<void> *)&local_68,ThreadPool,&local_58,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      FVar3.ReferenceController = local_58.Download.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
  }
  return;
}

// Run @ 143262b30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall BuildPatchServices::FChunkDeltaOptimiser::Run(FChunkDeltaOptimiser *this)

{
  FThreadSafeBool FVar1;
  FStatsCollector *pFVar2;
  code *pcVar3;
  IDownloadService *pIVar4;
  ISpeedRecorder *pIVar5;
  FString *pFVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  FTaskGraphInterface *pFVar16;
  FTSTicker *this_00;
  FOutputDeviceRedirector *pFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 local_res8 [8];
  float local_res10 [2];
  LARGE_INTEGER local_res18;
  <lambda_1> local_res20;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  undefined1 local_138 [16];
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  LARGE_INTEGER local_110;
  LARGE_INTEGER local_108;
  FString local_100;
  FString local_f0;
  TUniqueFunction<void___cdecl(void)> local_d8 [3];
  
  FHttpModule::Get();
  pFVar2 = (this->StatsCollector).Ptr;
  pcVar3 = *(code **)((longlong)*pFVar2 + 8);
  ::FString::FString(&local_100,L"Generation: Total Time");
  plVar14 = (longlong *)(*pcVar3)(pFVar2,&local_100,0,0);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  pFVar2 = (this->StatsCollector).Ptr;
  pcVar3 = *(code **)((longlong)*pFVar2 + 8);
  ::FString::FString(&local_f0,L"Generation: Data stream speed");
  plVar15 = (longlong *)(*pcVar3)(pFVar2,&local_f0,2,0);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  QueryPerformanceCounter(&local_res18);
  pIVar4 = (this->DownloadService).Ptr;
  iVar13 = (**(code **)((longlong)*pIVar4 + 8))
                     (pIVar4,&this->Configuration,&this->DownloadCompleteDelegate,
                      &this->DownloadProgressDelegate);
  pIVar4 = (this->DownloadService).Ptr;
  this->RequestIdManifestA = iVar13;
  iVar13 = (**(code **)((longlong)*pIVar4 + 8))
                     (pIVar4,&(this->Configuration).ManifestBUri,&this->DownloadCompleteDelegate,
                      &this->DownloadProgressDelegate);
  this->RequestIdManifestB = iVar13;
  local_d8[0]._0_8_ = 0;
  local_d8[0]._40_8_ = 0;
  local_res20.__this = this;
  Async<_BuildPatchServices::FChunkDeltaOptimiser::Run_::__l2::<lambda_1>_>
            ((TFuture<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_138,Thread,&local_res20,
             local_d8);
  dVar20 = 0.0;
  QueryPerformanceCounter(&local_128);
  dVar8 = __real_4170000000000000;
  local_res10[0] = 10.0;
  dVar22 = (double)local_128.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  FConfigCacheIni::GetFloat
            (GConfig,L"BuildPatchServices",L"StatsLoggerTimeSeconds",local_res10,&GEngineIni);
  uVar10 = __real_7f7fffff;
  dVar9 = __real_3f847ae140000000;
  FVar1 = this->bShouldRun;
  if (__real_42700000 <= local_res10[0]) {
    local_res10[0] = __real_42700000;
  }
  lVar7 = local_138._0_8_;
  if (local_res10[0] <= __real_3f800000) {
    local_res10[0] = __real_3f800000;
  }
  while (FVar1 != (FThreadSafeBool)0x0) {
    GFrameCounter = GFrameCounter + 1;
    local_138._0_8_ = lVar7;
    pFVar16 = FTaskGraphInterface::Get();
    (**(code **)((longlong)*pFVar16 + 0x48))(pFVar16);
    this_00 = FTSTicker::GetCoreTicker();
    FTSTicker::Tick(this_00,(float)dVar20);
    (**(code **)((longlong)*(this->MessagePump).Ptr + 0x28))();
    pFVar17 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::FlushThreadedLogs(pFVar17,None);
    QueryPerformanceCounter(&local_120);
    LOCK();
    *plVar14 = local_120.QuadPart - (longlong)local_res18;
    UNLOCK();
    pIVar5 = (this->DownloadSpeedRecorder).Ptr;
    dVar20 = (double)(**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,uVar10);
    LOCK();
    *plVar15 = (longlong)dVar20;
    UNLOCK();
    pFVar2 = (this->StatsCollector).Ptr;
    (**(code **)((longlong)*pFVar2 + 0x10))(pFVar2,local_res10[0]);
    QueryPerformanceCounter(&local_118);
    dVar20 = dVar9 - (((double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) -
                     dVar22);
    if (dVar20 <= 0.0) {
      dVar20 = 0.0;
    }
    FWindowsPlatformProcess::Sleep((float)dVar20);
    QueryPerformanceCounter(&local_110);
    dVar21 = (double)local_110.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
    dVar20 = dVar21 - dVar22;
    dVar22 = dVar21;
    lVar7 = local_138._0_8_;
    FVar1 = this->bShouldRun;
  }
  if (lVar7 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("State.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x155,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      uVar12 = (*pcVar3)();
      return (bool)uVar12;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      uVar12 = (*pcVar3)();
      return (bool)uVar12;
    }
  }
  while (*(char *)(lVar7 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar7 + 0x60) + 0x20))(*(longlong **)(lVar7 + 0x60),0xffffffff,0);
  }
  local_148.Data = (FScriptContainerElement *)0x0;
  iVar13 = *(int *)(lVar7 + 0x78);
  pFVar6 = *(FString **)(lVar7 + 0x70);
  local_140 = iVar13;
  if (iVar13 == 0) {
    local_13c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar13,0,&local_148,iVar13,&local_13c);
    ConstructItems<FString,FString,int>(local_148.Data,pFVar6,iVar13);
  }
  pFVar17 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::FlushThreadedLogs(pFVar17,None);
  QueryPerformanceCounter(&local_108);
  LOCK();
  *plVar14 = local_108.QuadPart - (longlong)local_res18;
  UNLOCK();
  pIVar5 = (this->DownloadSpeedRecorder).Ptr;
  dVar22 = (double)(**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,uVar10);
  LOCK();
  *plVar15 = (longlong)dVar22;
  UNLOCK();
  pFVar2 = (this->StatsCollector).Ptr;
  (**(code **)((longlong)*pFVar2 + 0x10))(pFVar2,0);
  iVar13 = local_140;
  pFVar19 = local_148.Data + (longlong)local_140 * 0x10;
  FVar18.Data = local_148.Data;
  while( true ) {
    if (local_140 != iVar13) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar18.Data == pFVar19) break;
    if (3 < (byte)LogChunkDeltaOptimiser._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDeltaOptimiser);
    }
    FVar18.Data = FVar18.Data + 0x10;
  }
  FVar1 = this->bSuccess;
  DestructItems<FString,int>((FString *)local_148.Data,local_140);
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_138._8_8_);
  return FVar1 != (FThreadSafeBool)0x0;
}

