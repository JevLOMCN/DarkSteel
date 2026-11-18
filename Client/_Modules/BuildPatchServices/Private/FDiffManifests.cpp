// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// FDiffManifests @ 143222980

FDiffManifests * __thiscall
BuildPatchServices::FDiffManifests::FDiffManifests
          (FDiffManifests *this,FDiffManifestsConfiguration *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  int iVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar5;
  FTSTicker *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  IFileSystem *pIVar9;
  IFileSystem IVar10;
  IFileSystem *pIVar11;
  ISpeedRecorder *pIVar12;
  IInstallerAnalytics *pIVar13;
  IDownloadServiceStatistics *pIVar14;
  IDownloadService *pIVar15;
  FStatsCollector *pFVar16;
  IFileSystem *pIVar17;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->_padding_ = (longlong)&___7FDiffManifests_BuildPatchServices__6B_;
  ::FString::FString(&(this->Configuration).ManifestAUri,&param_1->ManifestAUri);
  ::FString::FString(&(this->Configuration).ManifestBUri,&param_1->ManifestBUri);
  pTVar5 = &(this->Configuration).TagSetA;
  pIVar17 = (IFileSystem *)0x0;
  *(undefined8 *)&pTVar5->Elements = 0;
  *(undefined8 *)&(this->Configuration).TagSetA.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Configuration).TagSetA.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Configuration).TagSetA.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Configuration).TagSetA.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Configuration).TagSetA.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Configuration).TagSetA.Elements.field_0x34 = 0;
  (this->Configuration).TagSetA.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Configuration).TagSetA.HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=(pTVar5,&param_1->TagSetA)
  ;
  pTVar5 = &(this->Configuration).TagSetB;
  *(undefined8 *)&pTVar5->Elements = 0;
  *(undefined8 *)&(this->Configuration).TagSetB.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Configuration).TagSetB.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Configuration).TagSetB.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Configuration).TagSetB.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Configuration).TagSetB.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Configuration).TagSetB.Elements.field_0x34 = 0;
  (this->Configuration).TagSetB.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Configuration).TagSetB.HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=(pTVar5,&param_1->TagSetB)
  ;
  pTVar3 = &(this->Configuration).CompareTagSets;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Configuration).CompareTagSets.ArrayMax;
  iVar4 = (param_1->CompareTagSets).ArrayNum;
  pTVar5 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
           (param_1->CompareTagSets).AllocatorInstance.Data;
  (this->Configuration).CompareTagSets.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    ConstructItems<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar5,iVar4);
  }
  ::FString::FString(&(this->Configuration).OutputFilePath,&param_1->OutputFilePath);
  ::FString::FString(&(this->Configuration).OutputPatchDescriptorPath,
                     &param_1->OutputPatchDescriptorPath);
  (this->Configuration).bRequireOptimizedDelta = param_1->bRequireOptimizedDelta;
  (this->Configuration).bOnlyPatchDescriptors = param_1->bOnlyPatchDescriptors;
  (this->Configuration).bEmitInstallTime = param_1->bEmitInstallTime;
  pFVar6 = FTSTicker::GetCoreTicker();
  this->CoreTicker = pFVar6;
  puVar2 = &(this->DownloadCompleteDelegate).field_0x8;
  *(undefined8 *)&this->DownloadCompleteDelegate = 0;
  *(undefined8 *)puVar2 = 0;
  *(undefined4 *)&(this->DownloadCompleteDelegate).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->DownloadCompleteDelegate,(FWriteAccessScope *)&local_38);
  local_20 = puVar2;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar2);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDiffManifests_BuildPatchServices____A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = HandleDownloadComplete;
    puVar7[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  *(undefined8 *)&(this->DownloadProgressDelegate).field_0x10 = 0;
  *(undefined8 *)&this->DownloadProgressDelegate = 0;
  *(undefined8 *)&(this->DownloadProgressDelegate).field_0x8 = 0;
  pIVar9 = ::operator_new(0x18);
  pIVar11 = pIVar17;
  if (pIVar9 != (IFileSystem *)0x0) {
    *pIVar9 = (IFileSystem)&___7FFileSystem_BuildPatchServices__6B_;
    IVar10 = (IFileSystem)IFileManager::Get();
    pIVar9[1] = IVar10;
    IVar10 = (IFileSystem)IPlatformFile::GetPlatformPhysical();
    pIVar9[2] = IVar10;
    pIVar11 = pIVar9;
  }
  (this->FileSystem).Ptr = pIVar11;
  pIVar9 = ::operator_new(0x10);
  pIVar11 = pIVar17;
  if (pIVar9 != (IFileSystem *)0x0) {
    *pIVar9 = (IFileSystem)&___7FHttpManager_BuildPatchServices__6B_;
    IVar10 = (IFileSystem)FHttpModule::Get();
    pIVar9[1] = IVar10;
    pIVar11 = pIVar9;
  }
  (this->HttpManager).Ptr = (IHttpManager *)pIVar11;
  pIVar11 = ::operator_new(0x40);
  if (pIVar11 != (IFileSystem *)0x0) {
    pIVar11[3] = (IFileSystem)0x0;
    pIVar11[4] = (IFileSystem)0x0;
    pIVar11[5] = (IFileSystem)0x0;
    pIVar11[6] = (IFileSystem)0x0;
    pIVar11[7] = (IFileSystem)0x0;
    *pIVar11 = (IFileSystem)&___7FChunkDataSizeProvider_BuildPatchServices__6B_;
    pIVar11[1] = (IFileSystem)0x0;
    pIVar11[2] = (IFileSystem)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar11 + 3),4000);
    pIVar17 = pIVar11;
  }
  (this->ChunkDataSizeProvider).Ptr = (IChunkDataSizeProvider *)pIVar17;
  pIVar12 = FSpeedRecorderFactory::Create();
  (this->DownloadSpeedRecorder).Ptr = pIVar12;
  pIVar13 = FInstallerAnalyticsFactory::Create((IAnalyticsProvider *)0x0);
  (this->InstallerAnalytics).Ptr = pIVar13;
  pIVar14 = FDownloadServiceStatisticsFactory::Create
                      ((this->DownloadSpeedRecorder).Ptr,
                       (IDataSizeProvider *)(this->ChunkDataSizeProvider).Ptr,pIVar13);
  (this->DownloadServiceStatistics).Ptr = pIVar14;
  pIVar15 = FDownloadServiceFactory::Create
                      ((this->HttpManager).Ptr,(this->FileSystem).Ptr,
                       (IDownloadServiceStat *)pIVar14,(this->InstallerAnalytics).Ptr);
  (this->DownloadService).Ptr = pIVar15;
  pFVar16 = FStatsCollectorFactory::Create();
  (this->StatsCollector).Ptr = pFVar16;
  this->bShouldRun = (FThreadSafeBool)0x1;
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

// ~FDiffManifests @ 143228380

void __thiscall BuildPatchServices::FDiffManifests::~FDiffManifests(FDiffManifests *this)

{
  TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar1;
  FStatsCollector *pFVar2;
  IDownloadService *pIVar3;
  IDownloadServiceStatistics *pIVar4;
  IInstallerAnalytics *pIVar5;
  ISpeedRecorder *pIVar6;
  IChunkDataSizeProvider *pIVar7;
  IHttpManager *pIVar8;
  IFileSystem *pIVar9;
  code *pcVar10;
  bool bVar11;
  
  this->_padding_ = (longlong)&___7FDiffManifests_BuildPatchServices__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FutureManifestB).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FutureManifestA).field_0x8);
  pTVar1 = (this->PromiseManifestB).State.Object;
  if ((pTVar1 != (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) &&
     ((char)pTVar1->_padding_ == '\0')) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("State->IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x242,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PromiseManifestB).State.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->PromiseManifestA).State.Object;
  if ((pTVar1 != (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) &&
     ((char)pTVar1->_padding_ == '\0')) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("State->IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x242,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PromiseManifestA).State.SharedReferenceCount.ReferenceController);
  pFVar2 = (this->StatsCollector).Ptr;
  if (pFVar2 != (FStatsCollector *)0x0) {
    (**(code **)*pFVar2)(pFVar2,1);
  }
  pIVar3 = (this->DownloadService).Ptr;
  if (pIVar3 != (IDownloadService *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar4 = (this->DownloadServiceStatistics).Ptr;
  if (pIVar4 != (IDownloadServiceStatistics *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pIVar5 = (this->InstallerAnalytics).Ptr;
  if (pIVar5 != (IInstallerAnalytics *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  pIVar6 = (this->DownloadSpeedRecorder).Ptr;
  if (pIVar6 != (ISpeedRecorder *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  pIVar7 = (this->ChunkDataSizeProvider).Ptr;
  if (pIVar7 != (IChunkDataSizeProvider *)0x0) {
    (**(code **)*pIVar7)(pIVar7,1);
  }
  pIVar8 = (this->HttpManager).Ptr;
  if (pIVar8 != (IHttpManager *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  pIVar9 = (this->FileSystem).Ptr;
  if (pIVar9 != (IFileSystem *)0x0) {
    (**(code **)*pIVar9)(pIVar9,1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DownloadProgressDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DownloadCompleteDelegate);
  FDiffManifestsConfiguration::~FDiffManifestsConfiguration(&this->Configuration);
  this->_padding_ = (longlong)&___7IDiffManifests_BuildPatchServices__6B_;
  return;
}

// operator() @ 14322d330

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
`BuildPatchServices::FDiffManifests::HandleDownloadComplete'::__l8::<lambda_1>::operator()
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

// ExportPatchDescriptorFiles @ 14324e550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
BuildPatchServices::FDiffManifests::ExportPatchDescriptorFiles
          (FDiffManifests *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSharedPtr<FBuildPatchAppManifest,1> *param_2,
          TSharedPtr<FBuildPatchAppManifest,1> *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  bool *pbVar3;
  FScriptContainerElement FVar4;
  int iVar5;
  FBuildPatchAppManifest *pFVar6;
  code *pcVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar9;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar10;
  uchar *puVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  FText *pFVar19;
  longlong lVar20;
  IFileManager *pIVar21;
  longlong *plVar22;
  byte bVar23;
  longlong lVar24;
  wchar_t *pwVar25;
  char *pcVar26;
  ForAnyElementType FVar27;
  FString *pFVar28;
  uint uVar29;
  uint uVar30;
  FString *pFVar31;
  uint uVar32;
  bool *pbVar33;
  FScriptContainerElement *_Src;
  int iVar34;
  uint *puVar35;
  ForElementType<FSetElementId> FVar36;
  ulong64 uVar37;
  ulonglong uVar38;
  ulong64 uVar39;
  undefined1 auStackY_a78 [32];
  ForAnyElementType local_a38;
  undefined8 local_a30;
  undefined1 local_a28;
  undefined1 local_a27;
  undefined1 local_a26;
  undefined1 local_a25;
  undefined1 local_a24 [4];
  undefined2 local_a20;
  undefined1 local_a1e;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  int local_9f0;
  undefined4 uStack_9ec;
  FString local_9e8;
  ulong64 local_9d8;
  ulong64 local_9d0;
  FString *local_9c8;
  ulonglong local_9c0;
  int local_9b8;
  uint uStack_9b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_9b0;
  uint local_9a8;
  uint uStack_9a4;
  uint uStack_9a0;
  undefined4 uStack_99c;
  uint local_998;
  TSharedPtr<FBuildPatchAppManifest,1> *local_990;
  TBitArray<FDefaultBitArrayAllocator> *local_988;
  FString local_980;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_970;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_968;
  undefined8 local_948;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_940;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_920;
  undefined1 local_900 [8];
  FString local_8f8;
  undefined8 *local_8e8;
  FDiffManifests *local_8e0;
  TSharedPtr<FBuildPatchAppManifest,1> *local_8d8;
  FGuid local_8d0;
  longlong *local_8c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8b8;
  undefined8 uStack_898;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_890;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_888;
  undefined8 uStack_868;
  FString local_860;
  TSharedPtr<FCulture,1> local_850;
  TSharedPtr<FCulture,1> local_840;
  TSharedPtr<FCulture,1> local_830;
  TSharedPtr<FCulture,1> local_820;
  FText local_810;
  FText local_800;
  FText local_7f0;
  FText local_7e0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_7d0;
  undefined8 uStack_7c8;
  undefined4 local_7c0;
  undefined4 uStack_7bc;
  uint uStack_7b8;
  uint uStack_7b4;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined4 local_784;
  undefined4 local_764;
  undefined1 local_758 [32];
  uint *local_738;
  uint local_730;
  undefined4 local_72c;
  undefined4 local_728;
  int local_724;
  ForElementType<FSetElementId> local_718;
  int local_710;
  longlong local_708;
  longlong lStack_700;
  int local_6f8;
  longlong local_6f4;
  longlong lStack_6ec;
  int local_6e4;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_6d8;
  undefined1 local_688 [32];
  uint *local_668;
  uint local_660;
  int local_654;
  ForElementType<FSetElementId> local_648;
  int local_640;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_638;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_5e8;
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_598;
  void *local_558;
  undefined4 local_550;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_548;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_4f8;
  TStringBuilderBase<char8_t> local_4a8;
  uchar local_488 [1024];
  ulonglong local_88 [9];
  
  local_88[0] = __security_cookie.value ^ (ulonglong)auStackY_a78;
  local_990 = param_3;
  local_8e0 = this;
  local_8d8 = param_2;
  if (3 < (byte)LogDiffManifests._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDiffManifests);
  }
  local_920._padding_._4_4_ = 1;
  puVar1 = &(param_1->Elements).field_0x10;
  local_920._padding_._0_4_ = 0;
  local_920.UnvisitedBitMask = 0xffffffff;
  local_920.CurrentBitIndex = 0;
  local_920.BaseBitIndex = 0;
  local_920.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(param_1->Elements).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_920);
  }
  uVar15 = *(uint *)&(param_1->Elements).field_0x28;
  TStack_968._padding_ = CONCAT44(local_920._padding_._4_4_,(undefined4)local_920._padding_);
  bVar23 = (byte)uVar15 & 0x1f;
  TStack_968.CurrentBitIndex = local_920.CurrentBitIndex;
  TStack_968.UnvisitedBitMask = local_920.UnvisitedBitMask;
  TStack_968._28_4_ = local_920._28_4_;
  TStack_968.BaseBitIndex = local_920.BaseBitIndex;
  local_948 = CONCAT44(local_948._4_4_,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_940._padding_._0_4_ = (int)uVar15 >> 5;
  local_940._padding_._4_4_ = 1 << bVar23;
  local_940.UnvisitedBitMask = -1 << bVar23;
  TStack_968.Array = local_920.Array;
  local_940.BaseBitIndex = uVar15 & 0xffffffe0;
  TStack_888.Array = local_920.Array;
  uStack_868 = local_948;
  local_970 = param_1;
  local_940.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_940.CurrentBitIndex = uVar15;
  local_890 = param_1;
  TStack_888._padding_ = TStack_968._padding_;
  TStack_888._16_8_ = TStack_968._16_8_;
  TStack_888._24_8_ = TStack_968._24_8_;
  if (((int)uVar15 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar15 != *(uint *)&(param_1->Elements).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_940);
  }
  uStack_a10 = CONCAT44(local_940._padding_._4_4_,(int)local_940._padding_);
  uStack_a00 = CONCAT44(local_940.CurrentBitIndex,local_940.UnvisitedBitMask);
  uStack_9f8 = CONCAT44(local_940._28_4_,local_940.BaseBitIndex);
  local_9f0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_a08 = local_940.Array;
  pTVar8 = uStack_a08;
  uStack_a08._0_4_ = SUB84(local_940.Array,0);
  uStack_a08._4_4_ = (undefined4)((ulonglong)local_940.Array >> 0x20);
  uStack_7a8 = CONCAT44(uStack_9ec,local_9f0);
  local_7c0 = (undefined4)uStack_a08;
  uStack_7bc = uStack_a08._4_4_;
  uStack_7b8 = local_940.UnvisitedBitMask;
  uStack_7b4 = local_940.CurrentBitIndex;
  local_a18 = param_1;
  uStack_a08 = pTVar8;
  local_7d0 = param_1;
  uStack_7c8 = uStack_a10;
  local_7b0 = uStack_9f8;
LAB_14324e713:
  pTVar10 = local_890;
  uVar39 = 0;
  if (*(int *)&(local_890->Elements).field_0x8 - *(int *)&(local_890->Elements).field_0x34 !=
      (int)uStack_868) {
    local_a28 = 0;
    `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_a28);
  }
  lVar24 = (longlong)TStack_888.CurrentBitIndex;
  if (((TStack_888.CurrentBitIndex == uStack_7b4) &&
      (TStack_888.Array == (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uStack_7bc,local_7c0)))
     && (pTVar10 == local_7d0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    return;
  }
  lVar20 = *(longlong *)&pTVar10->Elements;
  if (3 < (byte)LogDiffManifests._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDiffManifests);
  }
  local_638.Elements._0_8_ = 0;
  local_638.Elements._8_8_ = 0;
  local_638.Elements._32_8_ = 0;
  local_638.Elements._40_4_ = 0;
  local_638.Elements._44_4_ = 0x80;
  local_638.Elements._48_4_ = 0xffffffff;
  local_638.Elements._52_4_ = 0;
  local_638.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_638.HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&local_638,(FString *)local_900,(bool *)(lVar20 + lVar24 * 0x18));
  local_5e8.Elements._0_8_ = 0;
  local_5e8.Elements._8_8_ = 0;
  local_5e8.Elements._32_8_ = 0;
  local_5e8.Elements._40_4_ = 0;
  local_5e8.Elements._44_4_ = 0x80;
  local_5e8.Elements._48_4_ = 0xffffffff;
  local_5e8.Elements._52_4_ = 0;
  local_5e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_5e8.HashSize = 0;
  if ((param_2->Object == (FBuildPatchAppManifest *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (**(code **)(param_2->Object->_padding_ + 0x1d0))(param_2->Object,&local_638,&local_5e8);
  local_9c8 = (FString *)0x0;
  local_9c0 = 0;
  if ((param_3->Object == (FBuildPatchAppManifest *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (**(code **)(param_3->Object->_padding_ + 0x1e0))(param_3->Object,&local_638,&local_9c8);
  iVar34 = (int)local_9c0;
  uVar18 = (ulonglong)(int)local_9c0;
  pFVar31 = local_9c8 + uVar18;
  local_758._0_8_ = 0;
  local_758._8_8_ = 0;
  local_738 = (uint *)0x0;
  local_730 = 0;
  local_72c = 0x80;
  local_728 = 0xffffffff;
  local_724 = 0;
  local_718 = (ForElementType<FSetElementId>)0x0;
  local_710 = 0;
  pFVar28 = local_9c8;
LAB_14324e940:
  do {
    if ((int)uVar18 != iVar34) {
      local_a27 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_a27)
      ;
    }
    if (pFVar28 == pFVar31) break;
    if ((param_3->Object == (FBuildPatchAppManifest *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(param_3->Object->_padding_ + 0x1f8))(param_3->Object,pFVar28);
    iVar16 = (pFVar28->Data).ArrayNum;
    if (iVar16 == 0) {
      pwVar25 = L"";
      iVar16 = 0;
    }
    else {
      pwVar25 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
      iVar16 = iVar16 + -1;
    }
    uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar25);
    iVar16 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       (&local_5e8,uVar15,pFVar28);
    if (iVar16 == -1) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_758,
                 (FString *)(local_900 + 4),(bool *)pFVar28);
      uVar18 = local_9c0 & 0xffffffff;
      pFVar28 = pFVar28 + 1;
      goto LAB_14324e940;
    }
    local_6f8 = 0;
    local_708 = 0;
    lStack_700 = 0;
    local_6e4 = 0;
    local_6f4 = 0;
    lStack_6ec = 0;
    if ((param_3->Object == (FBuildPatchAppManifest *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    cVar13 = (**(code **)(param_3->Object->_padding_ + 0xb8))(param_3->Object,pFVar28,&local_708);
    if ((param_2->Object == (FBuildPatchAppManifest *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    cVar14 = (**(code **)(param_2->Object->_padding_ + 0xb8))(param_2->Object,pFVar28,&local_6f4);
    if ((cVar13 == '\0') || (cVar14 == '\0')) {
      if (1 < (byte)LogDiffManifests._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDiffManifests);
      }
    }
    else if (((local_708 != local_6f4) || (lStack_700 != lStack_6ec)) || (local_6f8 != local_6e4)) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_758,
                 &local_8f8,(bool *)pFVar28);
      uVar18 = local_9c0 & 0xffffffff;
      pFVar28 = pFVar28 + 1;
      goto LAB_14324e940;
    }
    uVar18 = local_9c0 & 0xffffffff;
    pFVar28 = pFVar28 + 1;
  } while( true );
  local_548.Elements._0_8_ = 0;
  local_548.Elements._8_8_ = 0;
  local_548.Elements._32_8_ = 0;
  local_548.Elements._40_4_ = 0;
  local_548.Elements._44_4_ = 0x80;
  local_548.Elements._48_4_ = 0xffffffff;
  local_548.Elements._52_4_ = 0;
  local_548.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_548.HashSize = 0;
  if ((param_3->Object == (FBuildPatchAppManifest *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (**(code **)(param_3->Object->_padding_ + 0x188))(param_3->Object,local_758,&local_548);
  local_6d8.Elements._0_8_ = 0;
  local_6d8.Elements._8_8_ = 0;
  local_6d8.Elements._32_8_ = 0;
  local_6d8.Elements._40_4_ = 0;
  local_6d8.Elements._44_4_ = 0x80;
  local_6d8.Elements._48_4_ = 0xffffffff;
  local_6d8.Elements._52_4_ = 0;
  local_6d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_6d8.HashSize = 0;
  local_598._0_8_ = 0;
  local_598._8_8_ = 0;
  local_598._32_8_ = 0;
  local_598._40_4_ = 0;
  local_598._44_4_ = 0x80;
  local_598._48_4_ = 0xffffffff;
  local_598._52_4_ = 0;
  local_558 = (void *)0x0;
  local_550 = 0;
  if ((param_2->Object == (FBuildPatchAppManifest *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (**(code **)(param_2->Object->_padding_ + 0x188))(param_2->Object,&local_5e8,&local_598);
  if ((param_2->Object == (FBuildPatchAppManifest *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (**(code **)(param_2->Object->_padding_ + 0x228))(param_2->Object,&local_638,&local_598);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
            (&local_548,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_688,
             &local_6d8);
  uVar15 = local_660;
  iVar34 = 0;
  uStack_9f8._0_4_ = 0;
  uVar37 = 0;
  uVar17 = 1;
  uStack_a00._4_4_ = 0;
  if (local_660 != 0) {
    puVar35 = (uint *)(local_688 + 0x10);
    if (local_668 != (uint *)0x0) {
      puVar35 = local_668;
    }
    uVar29 = *puVar35;
    while (uVar29 == 0) {
      lVar24 = (longlong)iVar34;
      uStack_9f8._0_4_ = (uint)uStack_9f8 + 0x20;
      iVar34 = iVar34 + 1;
      uStack_a00._4_4_ = local_660;
      if ((int)((local_660 - 1) + ((int)(local_660 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
      goto LAB_14324ed96;
      uVar29 = puVar35[lVar24 + 1];
    }
    uVar17 = -uVar29 & uVar29;
    uVar18 = (ulonglong)uVar17 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_8f8.Data.AllocatorInstance.Data._4_4_ = (int)lVar24;
    uStack_a00._4_4_ = local_8f8.Data.AllocatorInstance.Data._4_4_ + -1 + (uint)uStack_9f8;
    if ((int)local_660 < (int)uStack_a00._4_4_) {
      uStack_a00._4_4_ = local_660;
    }
  }
LAB_14324ed96:
  local_a18 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_688;
  uStack_a08 = (TBitArray<FDefaultBitArrayAllocator> *)(local_688 + 0x10);
  uVar29 = local_660 & 0xffffffe0;
  local_9f0 = local_688._8_4_ - local_654;
  uStack_a10 = CONCAT44(uVar17,iVar34);
  uStack_a00._0_4_ = 0xffffffff;
  uStack_9f8._4_4_ = local_784;
  TStack_8b8._padding_ = uStack_a10;
  iVar34 = (int)local_660 >> 5;
  uStack_898 = CONCAT44(uStack_9ec,local_9f0);
  bVar23 = (byte)local_660;
  TStack_8b8.UnvisitedBitMask = 0xffffffff;
  TStack_8b8.CurrentBitIndex = uStack_a00._4_4_;
  TStack_8b8.BaseBitIndex = (uint)uStack_9f8;
  TStack_8b8._28_4_ = local_784;
  local_8c0 = (longlong *)local_a18;
  TStack_8b8.Array = uStack_a08;
  if (((int)local_660 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar9 = local_990;
  if (uVar15 != local_660) {
    puVar35 = (uint *)(local_688 + 0x10);
    if (local_668 != (uint *)0x0) {
      puVar35 = local_668;
    }
    uVar15 = -1 << (bVar23 & 0x1f) & puVar35[iVar34];
    while (uVar15 == 0) {
      lVar24 = (longlong)iVar34;
      uVar29 = uVar29 + 0x20;
      iVar34 = iVar34 + 1;
      uVar15 = local_660;
      if ((int)((local_660 - 1) + ((int)(local_660 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
      goto LAB_14324eec3;
      uVar15 = puVar35[lVar24 + 1];
    }
    uVar18 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_8f8.Data.ArrayNum = (int)lVar24;
    uVar15 = (uVar29 - 1) + local_8f8.Data.ArrayNum;
    if ((int)local_660 < (int)uVar15) {
      uVar15 = local_660;
    }
  }
LAB_14324eec3:
  while( true ) {
    plVar22 = local_8c0;
    if ((int)local_8c0[1] - *(int *)((longlong)local_8c0 + 0x34) != (int)uStack_898) {
      local_a26 = 0;
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_a26);
    }
    lVar24 = (longlong)TStack_8b8.CurrentBitIndex;
    if (((TStack_8b8.CurrentBitIndex == uVar15) &&
        (TStack_8b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_688 + 0x10))) &&
       (plVar22 == (longlong *)local_688)) break;
    lVar20 = *plVar22;
    if ((pTVar9->Object == (FBuildPatchAppManifest *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = pTVar9->Object;
    lVar24 = (**(code **)(pFVar6->_padding_ + 0x218))(pFVar6,lVar20 + lVar24 * 0x18);
    uVar37 = uVar37 + *(longlong *)(lVar24 + 0x38);
    uVar39 = uVar39 + *(uint *)(lVar24 + 0x30);
    TStack_8b8.UnvisitedBitMask = TStack_8b8.UnvisitedBitMask & ~TStack_8b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8b8);
  }
  if (3 < (byte)LogDiffManifests._0_1_) {
    local_820.Object = (FCulture *)0x0;
    local_820.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar19 = FText::AsNumber(&local_810,uVar37,(FNumberFormattingOptions *)0x0,&local_820);
    FText::ToString(pFVar19);
    local_830.Object = (FCulture *)0x0;
    local_830.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar19 = FText::AsNumber(&local_7e0,uVar39,(FNumberFormattingOptions *)0x0,&local_830);
    FText::ToString(pFVar19);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDiffManifests);
    if (local_7e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7e0.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830.SharedReferenceCount.ReferenceController);
    if (local_810.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_810.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_820.SharedReferenceCount.ReferenceController);
  }
  uVar17 = local_730;
  uVar39 = 0;
  uStack_9f8._0_4_ = 0;
  uVar15 = 0;
  local_9d8 = 0;
  uVar29 = 1;
  local_9d0 = 0;
  local_4f8.Elements._0_8_ = 0;
  local_4f8.Elements._8_8_ = 0;
  local_4f8.Elements._32_8_ = 0;
  local_4f8.Elements._40_4_ = 0;
  local_4f8.Elements._44_4_ = 0x80;
  local_4f8.Elements._48_4_ = 0xffffffff;
  local_4f8.Elements._52_4_ = 0;
  local_4f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_4f8.HashSize = 0;
  uStack_a00._4_4_ = 0;
  if (local_730 != 0) {
    puVar35 = (uint *)(local_758 + 0x10);
    if (local_738 != (uint *)0x0) {
      puVar35 = local_738;
    }
    uVar30 = *puVar35;
    uVar18 = uVar39;
    uVar38 = uVar39;
    uVar15 = 0;
    uStack_9f8._0_4_ = 0;
    while (uVar30 == 0) {
      iVar34 = (int)uVar18;
      uStack_9f8._0_4_ = (int)uVar38 + 0x20;
      uVar38 = (ulonglong)(uint)uStack_9f8;
      uVar15 = iVar34 + 1;
      uVar18 = (ulonglong)uVar15;
      uStack_a00._4_4_ = local_730;
      if ((int)((local_730 - 1) + ((int)(local_730 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_14324f146;
      uVar30 = (puVar35 + 1)[iVar34];
    }
    uVar29 = -uVar30 & uVar30;
    uVar18 = (ulonglong)uVar29 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_8d0.C = (uint)lVar24;
    uStack_a00._4_4_ = (local_8d0.C - 1) + (uint)uStack_9f8;
    if ((int)local_730 < (int)uStack_a00._4_4_) {
      uStack_a00._4_4_ = local_730;
    }
  }
LAB_14324f146:
  local_a18 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_758;
  uVar32 = local_730 & 0xffffffe0;
  local_9f0 = local_758._8_4_ - local_724;
  uStack_a08 = (TBitArray<FDefaultBitArrayAllocator> *)(local_758 + 0x10);
  bVar23 = (byte)local_730 & 0x1f;
  uStack_9b4 = 1 << bVar23;
  iVar34 = (int)local_730 >> 5;
  uVar30 = -1 << bVar23;
  uStack_a10 = CONCAT44(uVar29,uVar15);
  uStack_a00._0_4_ = 0xffffffff;
  uStack_9f8._4_4_ = local_764;
  pTStack_9b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_758 + 0x10);
  uStack_9a4 = local_730;
  TStack_968._padding_ = uStack_a10;
  local_948 = CONCAT44(uStack_9ec,local_9f0);
  TStack_968.UnvisitedBitMask = 0xffffffff;
  TStack_968.CurrentBitIndex = uStack_a00._4_4_;
  TStack_968.BaseBitIndex = (uint)uStack_9f8;
  TStack_968._28_4_ = local_764;
  local_9b8 = iVar34;
  local_9a8 = uVar30;
  uStack_9a0 = uVar32;
  local_970 = local_a18;
  TStack_968.Array = uStack_a08;
  if (((int)local_730 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar17 != local_730) {
    puVar35 = (uint *)(local_758 + 0x10);
    if (local_738 != (uint *)0x0) {
      puVar35 = local_738;
    }
    uVar30 = uVar30 & puVar35[iVar34];
    while (uVar30 == 0) {
      uStack_9a0 = uVar32 + 0x20;
      local_9b8 = iVar34 + 1;
      if ((int)((local_730 - 1) + ((int)(local_730 - 1) >> 0x1f & 0x1fU)) >> 5 < local_9b8) {
        uStack_9a4 = local_730;
        goto LAB_14324f2b1;
      }
      uVar30 = (puVar35 + 1)[iVar34];
      local_9a8 = 0xffffffff;
      uVar32 = uStack_9a0;
      iVar34 = local_9b8;
    }
    uStack_9b4 = -uVar30 & uVar30;
    uVar18 = (ulonglong)uStack_9b4 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_8d0.B = (uint)lVar24;
    uStack_9a4 = (uVar32 - 1) + local_8d0.B;
    if ((int)local_730 < (int)uStack_9a4) {
      uStack_9a4 = local_730;
    }
  }
LAB_14324f2b1:
  uStack_a10 = CONCAT44(uStack_9b4,local_9b8);
  uStack_a08 = pTStack_9b0;
  uStack_a00 = CONCAT44(uStack_9a4,local_9a8);
  uStack_9f8 = CONCAT44(uStack_99c,uStack_9a0);
  local_988 = pTStack_9b0;
  local_998 = uStack_9a4;
  while( true ) {
    pTVar10 = local_970;
    uVar15 = local_998;
    uVar18 = 0;
    if (*(int *)&(local_970->Elements).field_0x8 - *(int *)&(local_970->Elements).field_0x34 !=
        (int)local_948) {
      local_a25 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_a25);
    }
    pTVar9 = local_990;
    uVar37 = local_9d0;
    if (((TStack_968.CurrentBitIndex == uVar15) && (TStack_968.Array == local_988)) &&
       (pTVar10 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_758))
    break;
    puVar2 = (undefined8 *)
             (*(longlong *)&pTVar10->Elements + (longlong)TStack_968.CurrentBitIndex * 0x18);
    local_8e8 = puVar2;
    if ((local_990->Object == (FBuildPatchAppManifest *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar24 = (**(code **)(pTVar9->Object->_padding_ + 0x1f8))(pTVar9->Object,puVar2);
    local_a38.Data = (FScriptContainerElement *)0x0;
    local_a30 = 0;
    iVar34 = *(int *)(lVar24 + 0x50);
    pbVar33 = *(bool **)(lVar24 + 0x48);
    pbVar3 = pbVar33 + (longlong)iVar34 * 0x18;
    uVar38 = uVar18;
    uVar39 = local_9d0;
LAB_14324f396:
    if (*(int *)(lVar24 + 0x50) != iVar34) {
      local_a24[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_a24);
      uVar18 = local_a30 & 0xffffffff;
    }
    puVar2 = local_8e8;
    if (pbVar33 != pbVar3) {
      uVar37 = CityHash64(pbVar33,0x10);
      if (local_6d8.Elements._8_4_ != local_6d8.Elements._52_4_) {
        FVar36 = (ForElementType<FSetElementId>)&local_6d8.Hash;
        if (local_6d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar36 = local_6d8.Hash.SecondaryData;
        }
        iVar16 = *(int *)((longlong)FVar36 +
                         ((ulonglong)(local_6d8.HashSize - 1) & uVar37 & 0xffffffff) * 4);
        if (iVar16 != -1) {
          do {
            lVar20 = (longlong)iVar16;
            if (((*(int *)(pbVar33 + 0xc) ==
                  *(int *)(local_6d8.Elements._0_8_ + 0xc + lVar20 * 0x18) &&
                 *(int *)(pbVar33 + 8) == *(int *)(local_6d8.Elements._0_8_ + 8 + lVar20 * 0x18)) &&
                *(int *)(pbVar33 + 4) == *(int *)(local_6d8.Elements._0_8_ + 4 + lVar20 * 0x18)) &&
                *(int *)pbVar33 == *(int *)(local_6d8.Elements._0_8_ + lVar20 * 0x18)) {
              uVar18 = (ulonglong)(int)local_a30;
              iVar16 = 0;
              if ((int)local_a30 != 0) {
                uVar15 = 0;
                if ((int)((int)local_a30 - 1U) < (int)local_a30) {
                  uVar15 = ~((int)local_a30 - 1U) >> 0x1f;
                }
                if (uVar15 == 0) {
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar12) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  uVar18 = local_a30 & 0xffffffff;
                }
                iVar16 = (int)uVar18;
                if (local_a38.Data[(longlong)(iVar16 + -1) * 0x10 + 8] !=
                    (FScriptContainerElement)0x0) goto LAB_14324f527;
              }
              if (iVar16 == local_a30._4_4_) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_a38,(int *)((longlong)&local_a30 + 4));
              }
              local_a30 = CONCAT44(local_a30._4_4_,iVar16 + 1U);
              *(ulonglong *)(local_a38.Data + (longlong)iVar16 * 0x10) = uVar38;
              local_a38.Data[(longlong)iVar16 * 0x10 + 8] = (FScriptContainerElement)0x1;
              uVar18 = (ulonglong)(iVar16 + 1U);
              uVar38 = uVar38 + *(uint *)(pbVar33 + 0x14);
              pbVar33 = pbVar33 + 0x18;
              goto LAB_14324f396;
            }
            iVar16 = *(int *)(local_6d8.Elements._0_8_ + 0x10 + lVar20 * 0x18);
          } while (iVar16 != -1);
        }
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&local_4f8,&local_8d0,pbVar33);
      uVar18 = (ulonglong)(int)local_a30;
      uVar39 = uVar39 + *(uint *)(pbVar33 + 0x14);
      iVar16 = 0;
      if ((int)local_a30 == 0) {
LAB_14324f4e8:
        if (iVar16 == local_a30._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_a38,(int *)((longlong)&local_a30 + 4));
        }
        local_a30 = CONCAT44(local_a30._4_4_,iVar16 + 1U);
        *(ulonglong *)(local_a38.Data + (longlong)iVar16 * 0x10) = uVar38;
        local_a38.Data[(longlong)iVar16 * 0x10 + 8] = (FScriptContainerElement)0x0;
        uVar18 = (ulonglong)(iVar16 + 1U);
      }
      else {
        uVar15 = 0;
        if ((int)((int)local_a30 - 1U) < (int)local_a30) {
          uVar15 = ~((int)local_a30 - 1U) >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar18 = local_a30 & 0xffffffff;
        }
        iVar16 = (int)uVar18;
        if (local_a38.Data[(longlong)(iVar16 + -1) * 0x10 + 8] != (FScriptContainerElement)0x0)
        goto LAB_14324f4e8;
      }
LAB_14324f527:
      uVar38 = uVar38 + *(uint *)(pbVar33 + 0x14);
      pbVar33 = pbVar33 + 0x18;
      goto LAB_14324f396;
    }
    local_4a8.Base = local_488;
    local_9d8 = local_9d8 + uVar38;
    local_4a8.CurPos = local_488;
    uVar15 = 0;
    local_4a8.End = (uchar *)local_88;
    local_4a8.bIsDynamic = false;
    local_4a8.bIsExternal = false;
    local_9d0 = uVar39;
    if (0 < (int)uVar18) {
      lVar24 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar15 < (int)uVar18) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        iVar34 = (int)uVar18;
        if (uVar17 == 0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar34 = (int)local_a30;
        }
        uVar17 = 0;
        if ((int)uVar15 < iVar34) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if (uVar17 == 0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar34 = (int)local_a30;
        }
        FVar4 = local_a38.Data[lVar24 + 8];
        if ((int)uVar15 < iVar34 + -1) {
          uVar17 = 0;
          if ((int)(uVar15 + 1) < iVar34) {
            uVar17 = ~(uVar15 + 1) >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pcVar26 = "M,%llu,%llu,0\r\n";
        if (FVar4 == (FScriptContainerElement)0x0) {
          pcVar26 = "N,%llu,%llu\r\n";
        }
        TStringBuilderBase<char8_t>::AppendfImpl(&local_4a8,(uchar *)pcVar26);
        uVar18 = local_a30 & 0xffffffff;
        uVar15 = uVar15 + 1;
        lVar24 = lVar24 + 0x10;
      } while ((int)uVar15 < (int)local_a30);
    }
    uVar39 = local_9d8;
    ::FString::FString(&local_860,".patch");
    iVar16 = *(int *)(puVar2 + 1);
    iVar34 = iVar16 + -1;
    iVar5 = (local_8e0->Configuration).OutputPatchDescriptorPath.Data.ArrayNum;
    if (iVar16 == 0) {
      iVar34 = 0;
    }
    iVar16 = iVar34 + 1;
    local_9e8.Data.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar16 != 0)) {
      _Src = (local_8e0->Configuration).OutputPatchDescriptorPath.Data.AllocatorInstance.Data;
      iVar16 = iVar34 + 2;
LAB_14324f813:
      local_9e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar16 != 0) goto LAB_14324f81d;
      local_9e8.Data.ArrayMax = 0;
    }
    else {
      _Src = (local_8e0->Configuration).OutputPatchDescriptorPath.Data.AllocatorInstance.Data;
      if (iVar5 == 0) goto LAB_14324f813;
LAB_14324f81d:
      local_9e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar15 = iVar5 + iVar16;
      if ((int)uVar15 < iVar5) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar15,0,(ForAnyElementType *)&local_9e8,iVar5,&local_9e8.Data.ArrayMax);
      if (iVar5 != 0) {
        memcpy(local_9e8.Data.AllocatorInstance.Data,_Src,(longlong)iVar5 * 2);
      }
    }
    ::FString::PathAppend(&local_9e8,(wchar_t *)*puVar2,iVar34);
    ::FString::ConcatFF(&local_980,&local_9e8,&local_860);
    if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
    }
    if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_860.Data.AllocatorInstance.Data);
    }
    pIVar21 = IFileManager::Get();
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_980.Data.ArrayNum != 0) {
      FVar27.Data = local_980.Data.AllocatorInstance.Data;
    }
    plVar22 = (longlong *)(**(code **)((longlong)*pIVar21 + 0x20))(pIVar21,FVar27.Data);
    puVar11 = local_4a8.Base;
    if (plVar22 == (longlong *)0x0) {
      if (2 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Unable_to_open__150a78f80,
                   (FLogCategoryBase *)&LogTemp);
      }
    }
    else {
      local_a20 = 0xbbef;
      local_a1e = 0xbf;
      (**(code **)(*plVar22 + 0x188))(plVar22,&local_a20,3);
      (**(code **)(*plVar22 + 0x188))(plVar22,puVar11);
      (**(code **)(*plVar22 + 0x210))(plVar22);
      (**(code **)*plVar22)(plVar22,1);
    }
    if (local_980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_980.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_4a8);
    if (local_a38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a38.Data);
    }
    TStack_968.UnvisitedBitMask = TStack_968.UnvisitedBitMask & ~TStack_968._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_968);
  }
  if (3 < (byte)LogDiffManifests._0_1_) {
    local_840.Object = (FCulture *)0x0;
    local_840.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar19 = FText::AsNumber(&local_7f0,uVar39,(FNumberFormattingOptions *)0x0,&local_840);
    FText::ToString(pFVar19);
    local_850.Object = (FCulture *)0x0;
    local_850.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar19 = FText::AsNumber(&local_800,uVar37,(FNumberFormattingOptions *)0x0,&local_850);
    FText::ToString(pFVar19);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDiffManifests);
    if (local_800.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_800.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_850.SharedReferenceCount.ReferenceController);
    if (local_7f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7f0.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_840.SharedReferenceCount.ReferenceController);
  }
  local_4f8.HashSize = 0;
  if (local_4f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4f8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_4f8.Elements);
  local_640 = 0;
  if (local_648 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_648);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_688);
  local_550 = 0;
  if (local_558 != (void *)0x0) {
    FMemory::Free(local_558);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_598);
  local_6d8.HashSize = 0;
  if (local_6d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_6d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_6d8.Elements);
  local_548.HashSize = 0;
  if (local_548.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_548.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_548.Elements);
  local_710 = 0;
  if (local_718 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_718);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_758);
  DestructItems<FString,int>(local_9c8,(int)local_9c0);
  if (local_9c8 != (FString *)0x0) {
    FMemory::Free(local_9c8);
  }
  local_5e8.HashSize = 0;
  if (local_5e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_5e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_5e8.Elements);
  local_638.HashSize = 0;
  if (local_638.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_638.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_638.Elements);
  TStack_888.UnvisitedBitMask = TStack_888.UnvisitedBitMask & ~TStack_888._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_888);
  param_2 = local_8d8;
  param_3 = local_990;
  goto LAB_14324e713;
}

// HandleDownloadComplete @ 143257930

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FDiffManifests::HandleDownloadComplete
          (FDiffManifests *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *this_00;
  char cVar1;
  longlong lVar2;
  FSharedReferencer<1> FVar3;
  TSharedPtr<FBuildPatchAppManifest,1> local_68;
  <lambda_1> local_58;
  TUniqueFunction<void___cdecl(void)> local_38;
  
  if (param_1 == this->RequestIdManifestA) {
    lVar2 = 0x188;
  }
  else {
    if (param_1 != this->RequestIdManifestB) {
      return;
    }
    lVar2 = 0x1a0;
  }
  this_00 = (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *)
            ((longlong)(&(this->Configuration).TagSetA.Hash + -6) + lVar2);
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
      Async<_BuildPatchServices::FDiffManifests::HandleDownloadComplete_::__l8::<lambda_1>_>
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

// Run @ 1432639e0

bool __thiscall BuildPatchServices::FDiffManifests::Run(FDiffManifests *this)

{
  FThreadSafeBool FVar1;
  IDownloadService *pIVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FTaskGraphInterface *pFVar10;
  FTSTicker *this_00;
  FOutputDeviceRedirector *pFVar11;
  double dVar12;
  double dVar13;
  <lambda_1> local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  undefined1 local_a8 [16];
  TUniqueFunction<void___cdecl(void)> local_98 [2];
  
  FHttpModule::Get();
  pIVar2 = (this->DownloadService).Ptr;
  iVar9 = (**(code **)((longlong)*pIVar2 + 8))
                    (pIVar2,&this->Configuration,&this->DownloadCompleteDelegate,
                     &this->DownloadProgressDelegate);
  pIVar2 = (this->DownloadService).Ptr;
  this->RequestIdManifestA = iVar9;
  iVar9 = (**(code **)((longlong)*pIVar2 + 8))
                    (pIVar2,&(this->Configuration).ManifestBUri,&this->DownloadCompleteDelegate,
                     &this->DownloadProgressDelegate);
  this->RequestIdManifestB = iVar9;
  local_98[0]._0_8_ = 0;
  local_98[0]._40_8_ = 0;
  local_res8.__this = this;
  Async<_BuildPatchServices::FDiffManifests::Run_::__l2::<lambda_1>_>
            ((TFuture<bool> *)local_a8,Thread,&local_res8,local_98);
  dVar12 = 0.0;
  QueryPerformanceCounter(&local_res10);
  dVar6 = __real_3f847ae140000000;
  dVar5 = __real_4170000000000000;
  FVar1 = this->bShouldRun;
  dVar4 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  while (FVar1 != (FThreadSafeBool)0x0) {
    GFrameCounter = GFrameCounter + 1;
    pFVar10 = FTaskGraphInterface::Get();
    (**(code **)((longlong)*pFVar10 + 0x48))(pFVar10);
    this_00 = FTSTicker::GetCoreTicker();
    FTSTicker::Tick(this_00,(float)dVar12);
    pFVar11 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::FlushThreadedLogs(pFVar11,None);
    QueryPerformanceCounter(&local_res18);
    dVar12 = dVar6 - (((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5)
                     - dVar4);
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    FWindowsPlatformProcess::Sleep((float)dVar12);
    QueryPerformanceCounter(&local_res20);
    dVar13 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
    dVar12 = dVar13 - dVar4;
    dVar4 = dVar13;
    FVar1 = this->bShouldRun;
  }
  pFVar11 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::FlushThreadedLogs(pFVar11,None);
  if (local_a8._0_8_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
  }
  while (*(char *)(local_a8._0_8_ + 0x68) == '\0') {
    (**(code **)(**(longlong **)(local_a8._0_8_ + 0x60) + 0x20))
              (*(longlong **)(local_a8._0_8_ + 0x60),0xffffffff,0);
  }
  uVar8 = *(undefined1 *)(local_a8._0_8_ + 0x70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._8_8_);
  return (bool)uVar8;
}

