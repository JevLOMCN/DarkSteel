// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 32

// FBuildPatchFileConstructor @ 1431b86b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FBuildPatchFileConstructor * __thiscall
BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor
          (FBuildPatchFileConstructor *this,FFileConstructorConfig *param_1,IFileSystem *param_2,
          IConstructorChunkDbChunkSource *param_3,IConstructorCloudChunkSource *param_4,
          IConstructorInstallChunkSource *param_5,IChunkReferenceTracker *param_6,
          IInstallerError *param_7,IInstallerAnalytics *param_8,IMessagePump *param_9,
          IFileConstructorStat *param_10,
          TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
          *param_11)

{
  undefined1 *_Dst;
  int *piVar1;
  TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
  *pTVar2;
  int *piVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<BuildPatchServices::FBuildPatchFileConstructor::FFileToConstruct,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<BuildPatchServices::IBuildInstallerThread_*,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::FMutex,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  void *pvVar8;
  FChunkBackingStore *pFVar9;
  IBuildManifestSet *pIVar10;
  FScriptContainerElement *pFVar11;
  IConstructorInstallChunkSource *pIVar12;
  longlong lVar13;
  code *pcVar14;
  bool bVar15;
  int iVar16;
  bool *pbVar17;
  FChunkBackingStore *pFVar18;
  FBuildPatchFileConstructor *pFVar19;
  longlong lVar20;
  ulonglong uVar21;
  EConstructorChunkLocation *pEVar22;
  ForAnyElementType FVar23;
  longlong *plVar24;
  TOptional<bool> *pTVar25;
  atomic<unsigned___int64> aVar26;
  char *pcVar27;
  FLogCategoryLogBuildPatchServices *pFVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  undefined8 *puVar33;
  TOptional<int> TVar34;
  char cVar35;
  ulonglong uVar36;
  ForElementType<unsigned_int> FVar37;
  char cVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  ulonglong uVar41;
  uint uVar42;
  FScriptContainerElement *pFVar43;
  TOptional<int> TVar44;
  undefined1 auStackY_2e8 [32];
  TOptional<bool> local_298;
  undefined1 local_296;
  undefined1 local_295;
  char local_294;
  int local_290;
  uint local_28c;
  TOptional<int> local_288;
  IBuildInstallerSharedContext local_280;
  longlong local_278;
  longlong local_270;
  uint local_268;
  uint local_260;
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_258;
  undefined4 local_250;
  uint uStack_24c;
  uint uStack_248;
  int iStack_244;
  TOptional<int> local_240;
  longlong local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [4];
  undefined4 local_224;
  int local_220;
  undefined1 local_21c [20];
  undefined1 local_208 [20];
  uint uStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  ForAnyElementType local_1e8;
  int *local_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined8 *local_1c8;
  IBuildInstallerSharedContext *local_1c0;
  uint local_1b8;
  undefined4 uStack_1b4;
  TOptional<int> TStack_1b0;
  TOptional<int> local_1a8;
  undefined8 uStack_1a0;
  code *local_198 [2];
  undefined **local_188;
  ForAnyElementType local_180;
  uint local_178;
  int local_174;
  IFileSystem *local_170;
  IConstructorChunkDbChunkSource *local_168;
  IConstructorInstallChunkSource *pIStack_160;
  int local_14c;
  undefined1 local_148 [32];
  ForElementType<unsigned_int> local_128;
  uint local_120;
  int local_11c;
  int local_118;
  int local_114;
  FScriptContainerElement local_110 [8];
  ForAnyElementType local_108;
  uint local_100;
  code *local_f8 [2];
  longlong local_e8 [3];
  longlong *local_d0;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> local_c8
  ;
  code *local_78 [2];
  undefined **local_68;
  FEvent *local_60;
  atomic<unsigned___int64> local_50;
  atomic<unsigned___int64> local_48;
  
  local_48 = (atomic<unsigned___int64>)(__security_cookie.value ^ (ulonglong)auStackY_2e8);
  this->_padding_ = (longlong)&___7FBuildPatchFileConstructor_BuildPatchServices__6B_;
  local_21c._4_8_ = param_1;
  FFileConstructorConfig::FFileConstructorConfig(&this->Configuration,param_1);
  piVar1 = &(this->ConstructionList).ArrayMax;
  this->bIsDownloadStarted = false;
  this->bInitialDiskSizeCheck = false;
  this->bHasChunkDbSource = false;
  this->bStallWhenFileSystemThrottled = false;
  this->bIsPaused = (FThreadSafeBool)0x0;
  this->bShouldAbort = (FThreadSafeBool)0x0;
  this->NextIndexToConstruct = (atomic<int>)0x0;
  (this->ConstructionList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructionList).ArrayNum = 0;
  *piVar1 = 0;
  this->InstallSource = param_5;
  this->CloudSource = param_4;
  this->ChunkDbSource = param_3;
  this->FileSystem = param_2;
  pTVar2 = &this->ChunkLocations;
  *(undefined8 *)&this->MemoryOutputFiles = 0;
  *(undefined8 *)&(this->MemoryOutputFiles).field_0x8 = 0;
  *(undefined8 *)&(this->MemoryOutputFiles).field_0x20 = 0;
  *(undefined4 *)&(this->MemoryOutputFiles).field_0x28 = 0;
  *(undefined4 *)&(this->MemoryOutputFiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemoryOutputFiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MemoryOutputFiles).field_0x34 = 0;
  *(undefined8 *)&(this->MemoryOutputFiles).field_0x40 = 0;
  *(undefined4 *)&(this->MemoryOutputFiles).field_0x48 = 0;
  (this->ChunkLocationsLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)pTVar2 = 0;
  *(undefined8 *)&(this->ChunkLocations).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkLocations).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkLocations).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkLocations).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkLocations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkLocations).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkLocations).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkLocations).field_0x48 = 0;
  if (pTVar2 != param_11) {
    *(undefined8 *)pTVar2 = *(undefined8 *)param_11;
    _Dst = &(this->ChunkLocations).field_0x10;
    *(undefined8 *)param_11 = 0;
    *(undefined4 *)&(this->ChunkLocations).field_0x8 = *(undefined4 *)&param_11->field_0x8;
    *(undefined4 *)&(this->ChunkLocations).field_0xc = *(undefined4 *)&param_11->field_0xc;
    *(undefined8 *)&param_11->field_0x8 = 0;
    if (_Dst != &param_11->field_0x10) {
      if (*(longlong *)&param_11->field_0x20 == 0) {
        memmove(_Dst,&param_11->field_0x10,0x10);
      }
      pvVar8 = *(void **)&(this->ChunkLocations).field_0x20;
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
      *(undefined8 *)&(this->ChunkLocations).field_0x20 = *(undefined8 *)&param_11->field_0x20;
      *(undefined8 *)&param_11->field_0x20 = 0;
      *(undefined4 *)&(this->ChunkLocations).field_0x28 = *(undefined4 *)&param_11->field_0x28;
      *(undefined4 *)&(this->ChunkLocations).field_0x2c = *(undefined4 *)&param_11->field_0x2c;
      *(undefined8 *)&param_11->field_0x28 = 0;
    }
    *(undefined4 *)&(this->ChunkLocations).field_0x30 = *(undefined4 *)&param_11->field_0x30;
    *(undefined4 *)&(this->ChunkLocations).field_0x34 = *(undefined4 *)&param_11->field_0x34;
    *(undefined4 *)&param_11->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_11->field_0x34 = 0;
  }
  if (*(longlong *)&param_11->field_0x40 == 0) {
    *(undefined4 *)&(this->ChunkLocations).field_0x38 = *(undefined4 *)&param_11->field_0x38;
  }
  pvVar8 = *(void **)&(this->ChunkLocations).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  pFVar28._0_4_ = 0;
  pFVar28._4_1_ = false;
  pFVar28._5_3_ = 0;
  piVar3 = &(this->FileCompletionPositions).ArrayMax;
  *(undefined8 *)&(this->ChunkLocations).field_0x40 = *(undefined8 *)&param_11->field_0x40;
  *(undefined8 *)&param_11->field_0x40 = 0;
  *(undefined4 *)&(this->ChunkLocations).field_0x48 = *(undefined4 *)&param_11->field_0x48;
  *(undefined4 *)&param_11->field_0x48 = 0;
  this->bAllowMultipleFilesInFlight = true;
  this->bShouldLogNextDependencyWait = true;
  this->TotalJobSize = 0;
  this->ChunkReferenceTracker = param_6;
  this->InstallerError = param_7;
  this->InstallerAnalytics = param_8;
  this->RequiredDiskSpace = (atomic<unsigned___int64>)0x0;
  this->AvailableDiskSpace = (atomic<unsigned___int64>)0x0;
  *(undefined8 *)&this->BeforeDeleteFileEvent = 0;
  *(undefined8 *)&(this->BeforeDeleteFileEvent).field_0x8 = 0;
  *(undefined8 *)&(this->BeforeDeleteFileEvent).field_0x10 = 0;
  *(undefined8 *)&(this->BeforeDeleteFileEvent).field_0x18 = 2;
  (this->ThreadWakeups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadWakeups).ArrayNum = 0;
  (this->ThreadWakeups).ArrayMax = 0;
  (this->ThreadJobPostings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadJobPostings).ArrayNum = 0;
  (this->ThreadJobPostings).ArrayMax = 0;
  (this->ThreadJobPostingLocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadJobPostingLocks).ArrayNum = 0;
  (this->ThreadJobPostingLocks).ArrayMax = 0;
  (this->ThreadCompleteEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadCompleteEvents).ArrayNum = 0;
  (this->ThreadCompleteEvents).ArrayMax = 0;
  (this->Threads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Threads).ArrayNum = 0;
  (this->Threads).ArrayMax = 0;
  this->WriteThreadIndex = -1;
  this->MessagePump = param_9;
  (this->BackingStore).Ptr = (FChunkBackingStore *)0x0;
  this->WakeUpDispatchThreadEvent = (FEvent *)0x0;
  this->FileConstructorStat = param_10;
  this->DownloadRequirement = 0;
  this->ExpectedChunkSize = 0;
  this->ByteProcessed = 0;
  this->MaxWriteBatchSize = 0;
  this->IOBufferSize = 0;
  this->WriteCount = 0;
  (this->FileCompletionPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileCompletionPositions).ArrayNum = 0;
  *piVar3 = 0;
  this->PendingHarvestRequests = (atomic<int>)0x0;
  (this->BackingStoreStats).DiskPeakUsageBytes = 0;
  (this->BackingStoreStats).MemoryPeakUsageBytes = 0;
  (this->BackingStoreStats).MemoryLimitBytes = 0;
  (this->BackingStoreStats).DiskLoadFailureCount = 0;
  (this->BackingStoreStats).DiskLostChunkCount = 0;
  (this->BackingStoreStats).DiskChunkLoadCount = 0;
  if (CpuChannel->Enabled < 0) {
    local_298.bIsSet = false;
  }
  else {
    local_298.bIsSet = true;
    pcVar27 = "FileConstructor_ctor";
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1407,"FileConstructor_ctor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
               ,0x57f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1407);
    pFVar28 = (FLogCategoryLogBuildPatchServices *)pcVar27;
  }
  bVar15 = (this->Configuration).StallWhenFileSystemThrottled.bIsSet;
  this->bStallWhenFileSystemThrottled = bCVarStallWhenFileSystemThrottled;
  if (bVar15 != false) {
    if (3 < (byte)LogBuildPatchServices._0_1_) {
      TOptional<bool>::GetValue(&(this->Configuration).StallWhenFileSystemThrottled);
      pFVar28 = &LogBuildPatchServices;
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    pbVar17 = TOptional<bool>::GetValue(&(this->Configuration).StallWhenFileSystemThrottled);
    this->bStallWhenFileSystemThrottled = *pbVar17;
  }
  this->bAllowMultipleFilesInFlight = bCVarAllowMultipleFilesInFlight;
  pFVar18 = ::operator_new(0x138);
  if (pFVar18 == (FChunkBackingStore *)0x0) {
    pFVar18 = (FChunkBackingStore *)0x0;
  }
  else {
    pFVar28 = (FLogCategoryLogBuildPatchServices *)this;
    pFVar18 = FChunkBackingStore::FChunkBackingStore
                        (pFVar18,this,&(this->Configuration).InstallDirectory,
                         &this->BackingStoreStats);
  }
  pFVar9 = (this->BackingStore).Ptr;
  if ((pFVar9 != pFVar18) &&
     ((this->BackingStore).Ptr = pFVar18, pFVar9 != (FChunkBackingStore *)0x0)) {
    pFVar28._0_4_ = 0;
    pFVar28._4_1_ = false;
    pFVar28._5_3_ = 0;
    (**(code **)pFVar9->_padding_)(pFVar9,1);
  }
  uVar30 = (this->Configuration).ConstructList.ArrayNum;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
  }
  if ((this->ConstructionList).ArrayMax < (int)uVar30) {
    pFVar28._0_4_ = 0;
    pFVar28._4_1_ = false;
    pFVar28._5_3_ = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar30,&(this->ConstructionList).AllocatorInstance,
               (this->ConstructionList).ArrayNum,piVar1);
  }
  uVar30 = (this->Configuration).ConstructList.ArrayNum;
  local_290 = 0;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
  }
  if ((this->FileCompletionPositions).ArrayMax < (int)uVar30) {
    pFVar28._0_4_ = 0;
    pFVar28._4_1_ = false;
    pFVar28._5_3_ = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar30,&(this->FileCompletionPositions).AllocatorInstance,
               (this->FileCompletionPositions).ArrayNum,piVar3);
  }
  iVar32 = (this->Configuration).ConstructList.ArrayNum;
  pTVar4 = &this->FileCompletionPositions;
  pFVar43 = (this->Configuration).ConstructList.AllocatorInstance.Data;
  local_c8.Elements._0_8_ = 0;
  pFVar40 = pFVar43 + (longlong)iVar32 * 0x10;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  pTVar5 = &this->ConstructionList;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  while( true ) {
    if ((this->Configuration).ConstructList.ArrayNum != iVar32) {
      local_296 = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_296);
    }
    cVar35 = local_298.bIsSet;
    if (pFVar43 == pFVar40) break;
    pIVar10 = (this->Configuration).ManifestSet;
    local_238 = (**(code **)((longlong)*pIVar10 + 0x70))(pIVar10,pFVar43);
    uStack_230 = 0xffffffff;
    if (local_238 != 0) {
      this->TotalJobSize = this->TotalJobSize + *(longlong *)(local_238 + 0x58);
      local_290 = local_290 + *(int *)(local_238 + 0x50);
    }
    pFVar11 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_290) &&
        ((FScriptContainerElement *)&local_290 <
         pFVar11 + (longlong)(this->FileCompletionPositions).ArrayMax * 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar14 = (code *)swi(3);
      pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
      return pFVar19;
    }
    iVar16 = (this->FileCompletionPositions).ArrayNum;
    if (iVar16 == (this->FileCompletionPositions).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar4->AllocatorInstance,&(this->FileCompletionPositions).ArrayMax
                         );
    }
    pFVar11 = (pTVar4->AllocatorInstance).Data;
    (this->FileCompletionPositions).ArrayNum = iVar16 + 1;
    *(int *)(pFVar11 + (longlong)iVar16 * 4) = local_290;
    local_1e0 = &local_290;
    pFVar28 = (FLogCategoryLogBuildPatchServices *)local_228;
    local_1e8.Data = pFVar43;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_const_&,int_const_&>_>
              (&local_c8,(TPairInitializer<FString_const_&,int_const_&> *)pFVar28,(bool *)&local_1e8
              );
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    if ((pFVar11 <= (FScriptContainerElement *)&local_238) &&
       (pFVar28 = (FLogCategoryLogBuildPatchServices *)(longlong)(this->ConstructionList).ArrayMax,
       (FScriptContainerElement *)&local_238 < pFVar11 + (longlong)pFVar28 * 0x10)) {
      pFVar28._0_4_ = 0x506109c0;
      pFVar28._4_1_ = true;
      pFVar28._5_3_ = 0;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar15) {
        pcVar14 = (code *)swi(3);
        pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
        return pFVar19;
      }
    }
    iVar16 = (this->ConstructionList).ArrayNum;
    if (iVar16 == (this->ConstructionList).ArrayMax) {
      pFVar28 = (FLogCategoryLogBuildPatchServices *)pTVar5;
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar5->AllocatorInstance,&(this->ConstructionList).ArrayMax);
    }
    (this->ConstructionList).ArrayNum = iVar16 + 1;
    pFVar43 = pFVar43 + 0x10;
    pFVar11 = (pTVar5->AllocatorInstance).Data + (longlong)iVar16 * 0x10;
    *(longlong *)pFVar11 = local_238;
    *(longlong *)(pFVar11 + 8) = CONCAT44(uStack_22c,uStack_230);
  }
  pIVar12 = this->InstallSource;
  cVar38 = '\0';
  if (pIVar12 != (IConstructorInstallChunkSource *)0x0) {
    pFVar28 = (FLogCategoryLogBuildPatchServices *)&local_c8;
    (**(code **)((longlong)*pIVar12 + 0x38))(pIVar12,pFVar28);
    lVar20 = (**(code **)((longlong)*this->InstallSource + 0x18))();
    uVar41 = 0;
    if (*(int *)(lVar20 + 8) != *(int *)(lVar20 + 0x34)) {
      uVar30 = (this->Configuration).ConstructList.ArrayNum;
      local_294 = '\x01';
      local_148._0_8_ = (FScriptContainerElement *)0x0;
      local_148._8_8_ = 0;
      local_128 = (ForElementType<unsigned_int>)0x0;
      local_120 = 0;
      local_11c = 0x80;
      local_118 = -1;
      local_114 = 0;
      local_108.Data = (FScriptContainerElement *)0x0;
      local_100 = 0;
      if (uVar30 != 0) {
        if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar30);
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_148,uVar30);
        if (uVar30 < 4) {
          uVar30 = 1;
        }
        else {
          uVar29 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
          lVar20 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_224 = (int)lVar20;
          uVar30 = 1 << ((byte)lVar20 & 0x1f);
        }
        if ((local_100 == 0) || ((int)local_100 < (int)uVar30)) {
          local_100 = uVar30;
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,0,4);
          }
          if (uVar30 != 0) {
            uVar31 = uVar30;
            if (uVar30 < 2) {
              if (local_108.Data != (FScriptContainerElement *)0x0) {
                uVar31 = 0;
                goto LAB_1431b8ebb;
              }
            }
            else {
LAB_1431b8ebb:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_108,0,uVar31,4);
            }
            if (0 < (int)uVar30) {
              uVar36 = (ulonglong)uVar30;
              uVar29 = uVar41;
              do {
                FVar23.Data = local_110;
                if (local_108.Data != (FScriptContainerElement *)0x0) {
                  FVar23.Data = local_108.Data;
                }
                uVar21 = uVar29 & (longlong)(int)uVar30 - 1U;
                uVar29 = uVar29 + 1;
                *(undefined4 *)(FVar23.Data + uVar21 * 4) = 0xffffffff;
                uVar36 = uVar36 - 1;
              } while (uVar36 != 0);
            }
          }
          if (local_100 != 0) {
            pTStack_258 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
            local_260 = 0;
            uStack_25c = 1;
            local_250 = 0xffffffff;
            uStack_24c = 0;
            uStack_248 = 0;
            uVar29 = uVar41;
            if (local_120 != 0) {
              FVar37 = (ForElementType<unsigned_int>)((longlong)local_148 + 0x10);
              if (local_128 != (ForElementType<unsigned_int>)0x0) {
                FVar37 = local_128;
              }
              uVar30 = *(uint *)FVar37;
              uVar36 = uVar41;
              while (uVar30 == 0) {
                uStack_248 = (int)uVar36 + 0x20;
                uVar36 = (ulonglong)uStack_248;
                iVar32 = (int)uVar29;
                local_260 = iVar32 + 1;
                uVar29 = (ulonglong)local_260;
                if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_260) goto LAB_1431b8fcd;
                uVar30 = ((uint *)((longlong)FVar37 + 4))[iVar32];
                local_250 = 0xffffffff;
              }
              uStack_25c = -uVar30 & uVar30;
              uVar29 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
              lVar20 = 0x3f;
              if (uVar29 != 0) {
                for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              local_220 = (int)lVar20;
              uStack_24c = (int)lVar20 + -1 + uStack_248;
              uVar29 = (ulonglong)uStack_24c;
              if ((int)local_120 < (int)uStack_24c) {
LAB_1431b8fcd:
                uVar29 = (ulonglong)local_120;
                uStack_24c = local_120;
              }
            }
            local_250 = 0xffffffff;
            local_21c._12_8_ = local_148;
            local_208._0_8_ = (FScriptContainerElement *)CONCAT44(uStack_25c,local_260);
            local_208._8_8_ = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
            stack0xfffffffffffffe08 = (FScriptContainerElement *)CONCAT44(uStack_24c,0xffffffff);
            iStack_1f0 = uStack_248;
            iStack_1ec = iStack_244;
            if ((int)uVar29 < (int)local_120) {
              do {
                puVar33 = (undefined8 *)
                          ((longlong)(int)uVar29 * 0x20 + *(longlong *)local_21c._12_8_);
                local_168 = (IConstructorChunkDbChunkSource *)*puVar33;
                pIStack_160 = (IConstructorInstallChunkSource *)puVar33[1];
                uVar30 = FCrc::Strihash_DEPRECATED<wchar_t>((int)puVar33[1],(wchar_t *)local_168);
                uVar30 = local_100 - 1 & uVar30;
                *(uint *)((longlong)puVar33 + 0x1c) = uVar30;
                FVar23.Data = local_110;
                if (local_108.Data != (FScriptContainerElement *)0x0) {
                  FVar23.Data = local_108.Data;
                }
                uVar36 = (longlong)(int)local_100 - 1U & (longlong)(int)uVar30;
                *(undefined4 *)(puVar33 + 3) = *(undefined4 *)(FVar23.Data + uVar36 * 4);
                *(int *)(FVar23.Data + uVar36 * 4) = (int)uVar29;
                local_208._16_4_ = local_208._16_4_ & ~local_208._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_208);
                uVar29 = (ulonglong)uStack_1f4;
              } while ((int)uStack_1f4 < *(int *)(local_208._8_8_ + 0x18));
            }
          }
        }
      }
      uVar30 = (this->Configuration).ConstructList.ArrayNum;
      pFVar28._4_4_ = 0;
      pFVar28._0_4_ = uVar30;
      local_280._0_4_ = 0;
      uVar29 = uVar41;
      if (0 < (int)uVar30) {
        do {
          uVar31 = (uint)uVar29;
          uVar30 = 0;
          if ((int)uVar31 < (int)pFVar28) {
            uVar30 = ~uVar31 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar14 = (code *)swi(3);
            pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
            return pFVar19;
          }
          pFVar43 = (this->Configuration).ConstructList.AllocatorInstance.Data +
                    (longlong)(int)uVar31 * 0x10;
          local_1d8 = *(undefined8 *)pFVar43;
          iVar32 = *(int *)(pFVar43 + 8);
          local_1d0 = iVar32 - 1;
          if (iVar32 == 0) {
            local_1d0 = 0;
          }
          local_1c8 = &local_1d8;
          local_1c0 = &local_280;
          TSet<TTuple<TStringView<wchar_t>,int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<TStringView<wchar_t>_&&,int_const_&>_>
                    ((TSet<TTuple<TStringView<wchar_t>,int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,int,0>,FDefaultSetAllocator>
                      *)local_148,(TPairInitializer<TStringView<wchar_t>_&&,int_const_&> *)local_21c
                     ,(bool *)&local_1c8);
          uVar30 = (this->Configuration).ConstructList.ArrayNum;
          pFVar28._4_4_ = 0;
          pFVar28._0_4_ = uVar30;
          local_280._0_4_ = local_280._0_4_ + 1;
          uVar29 = (ulonglong)(uint)local_280._0_4_;
        } while ((int)local_280._0_4_ < (int)uVar30);
      }
      local_28c = 0;
      cVar38 = '\x01';
      if (0 < (int)pFVar28) {
        local_278 = 0;
        local_270 = 0;
        do {
          lVar20 = local_270;
          uVar31 = (uint)uVar41;
          local_268 = ~uVar31 >> 0x1f;
          uVar30 = 0;
          if ((int)uVar31 < (this->ConstructionList).ArrayNum) {
            uVar30 = local_268;
          }
          if ((uVar30 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar14 = (code *)swi(3);
            pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
            return pFVar19;
          }
          uVar30 = local_28c;
          pFVar28 = (FLogCategoryLogBuildPatchServices *)
                    ((longlong)(this->ConstructionList).AllocatorInstance.Data + lVar20);
          lVar13 = *(longlong *)pFVar28;
          local_288 = (TOptional<int>)pFVar28;
          if (lVar13 != 0) {
            iVar32 = *(int *)(lVar13 + 0x50);
            TVar44 = *(TOptional<int> *)(lVar13 + 0x48);
            TVar34 = (TOptional<int>)((longlong)TVar44 + (longlong)iVar32 * 0x18);
            local_240 = TVar34;
            while( true ) {
              if (*(int *)(lVar13 + 0x50) != iVar32) {
                local_295 = 0;
                `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::
                __l2::<lambda_1>::operator()(&local_295);
              }
              if (TVar44 == TVar34) break;
              pFVar28 = (FLogCategoryLogBuildPatchServices *)TVar44;
              pEVar22 = TMapBase<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,0>_>
                        ::FindChecked(&this->ChunkLocations,(FGuid *)TVar44);
              if (*pEVar22 == Install) {
                pIVar12 = this->InstallSource;
                local_1b8 = uVar30;
                pcVar14 = *(code **)((longlong)*pIVar12 + 0x30);
                TStack_1b0 = (TOptional<int>)local_148;
                local_1a8 = local_288;
                uStack_1a0 = &(this->Configuration).InstallDirectory;
                local_f8[0] = (code *)0x0;
                local_d0 = (longlong *)0x0;
                local_d0 = FMemory::Malloc(0x28,8);
                *local_d0 = (longlong)
                            &UE::Core::Private::Function::
                             TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::`50'::<lambda_1>,1,1>
                             ::_vftable_;
                *(uint *)(local_d0 + 1) = local_1b8;
                *(undefined4 *)((longlong)local_d0 + 0xc) = uStack_1b4;
                *(int *)(local_d0 + 2) = TStack_1b0.TypedValue;
                *(undefined4 *)((longlong)local_d0 + 0x14) = TStack_1b0._4_4_;
                *(int *)(local_d0 + 3) = local_1a8.TypedValue;
                *(undefined4 *)((longlong)local_d0 + 0x1c) = local_1a8._4_4_;
                *(undefined4 *)(local_d0 + 4) = (undefined4)uStack_1a0;
                *(int *)((longlong)local_d0 + 0x24) = uStack_1a0._4_4_;
                if ((uint *)(local_d0 + 1) != (uint *)0x0) {
                  local_f8[0] = UE::Core::Private::Function::
                                TFunctionRefCaller<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::__l50::<lambda_1>,void,FString_const_&,FString_const_&>
                                ::Call;
                }
                pFVar28 = (FLogCategoryLogBuildPatchServices *)TVar44;
                (*pcVar14)(pIVar12,TVar44,local_f8);
                TVar34 = local_240;
                if (local_f8[0] != (code *)0x0) {
                  plVar24 = local_e8;
                  if (local_d0 != (longlong *)0x0) {
                    plVar24 = local_d0;
                  }
                  (**(code **)(*plVar24 + 0x10))();
                  TVar34 = local_240;
                }
              }
              TVar44 = (TOptional<int>)((longlong)TVar44 + 0x18);
            }
            uVar39 = *(uint *)&((FFileConstructorConfig *)((longlong)local_288 + 8))->ManifestSet;
            lVar20 = local_270;
            uVar31 = uVar30;
            if ((-1 < (int)uVar39) && (3 < (byte)LogBuildPatchServices._0_1_)) {
              uVar42 = 0;
              if ((int)uVar39 < (this->Configuration).ConstructList.ArrayNum) {
                uVar42 = ~uVar39 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar14 = (code *)swi(3);
                pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
                return pFVar19;
              }
              uVar39 = 0;
              if ((int)uVar30 < (this->Configuration).ConstructList.ArrayNum) {
                uVar39 = local_268;
              }
              if ((uVar39 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar14 = (code *)swi(3);
                pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
                return pFVar19;
              }
              lVar20 = local_270;
              pFVar28 = &LogBuildPatchServices;
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
            }
          }
          local_28c = uVar31 + 1;
          uVar41 = (ulonglong)local_28c;
          local_278 = local_278 + 1;
          local_270 = lVar20 + 0x10;
          cVar38 = local_294;
          cVar35 = local_298.bIsSet;
        } while ((int)local_28c < (this->Configuration).ConstructList.ArrayNum);
      }
      local_100 = 0;
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_148);
    }
  }
  uVar41 = 0;
  lVar20 = (**(code **)((longlong)*this->ChunkDbSource + 0x18))();
  this->bHasChunkDbSource = *(int *)(lVar20 + 8) != *(int *)(lVar20 + 0x34);
  if (this->ThreadAssignments <= &this->WriteThreadIndex) {
    memset(this->ThreadAssignments,(int)CONCAT71(SUB87(pFVar28,1),0xff),6);
  }
  this->WriteThreadIndex = -1;
  local_298.TypedValue = true;
  bVar15 = FConfigCacheIni::GetBool
                     (GConfig,L"Portal.BuildPatch",L"ConstructorSpawnAdditionalIOThreads",
                      &local_298.TypedValue,&GEngineIni);
  if ((bVar15) && (5 < (byte)LogBuildPatchServices._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  if ((this->Configuration).SpawnAdditionalIOThreads.bIsSet != false) {
    pTVar25 = &local_298;
    if ((this->Configuration).SpawnAdditionalIOThreads.bIsSet != false) {
      pTVar25 = &(this->Configuration).SpawnAdditionalIOThreads;
    }
    local_298.TypedValue = pTVar25->TypedValue;
    if (5 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
  }
  uVar30 = 0;
  if (local_298.TypedValue != false) {
    uVar29 = uVar41;
    if (((this->Configuration).bInstallToMemory == false) &&
       ((this->Configuration).bConstructInMemory == false)) {
      this->WriteThreadIndex = '\0';
      uVar29 = 1;
    }
    uVar30 = (uint)uVar29;
    if (cVar38 != '\0') {
      this->ThreadAssignments[0] = (schar)uVar29;
      uVar30 = uVar30 + 1;
    }
    if (this->bHasChunkDbSource != false) {
      this->ThreadAssignments[1] = (schar)uVar30;
      uVar30 = uVar30 + 1;
    }
  }
  local_60 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->WakeUpDispatchThreadEvent = local_60;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::__l2::<lambda_2>,void>
                ::Call;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::`2'::<lambda_2>,1,0>
              ::_vftable_;
  local_50 = (atomic<unsigned___int64>)0x0;
  (**(code **)((longlong)*this->CloudSource + 0x28))(this->CloudSource,local_78);
  if (local_78[0] != (code *)0x0) {
    aVar26 = (atomic<unsigned___int64>)&local_68;
    if (local_50 != (atomic<unsigned___int64>)0x0) {
      aVar26 = local_50;
    }
    (*(code *)(*(undefined ***)aVar26)[2])();
  }
  pTVar6 = &this->Threads;
  iVar32 = (this->Threads).ArrayNum;
  if (iVar32 < (int)uVar30) {
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar30 - iVar32,&pTVar6->AllocatorInstance,&(this->Threads).ArrayNum,
                        &(this->Threads).ArrayMax);
    memset((pTVar6->AllocatorInstance).Data + (longlong)iVar16 * 8,0,
           (longlong)(int)(uVar30 - iVar32) << 3);
  }
  else if ((int)uVar30 < iVar32) {
    iVar32 = iVar32 - uVar30;
    if (iVar32 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar15) {
        pcVar14 = (code *)swi(3);
        pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
        return pFVar19;
      }
    }
    else if (iVar32 == 0) goto LAB_1431b9713;
    pFVar43 = (pTVar6->AllocatorInstance).Data + (ulonglong)uVar30 * 8;
    iVar16 = ((this->Threads).ArrayNum - iVar32) - uVar30;
    if (iVar16 != 0) {
      memmove(pFVar43,pFVar43 + (longlong)iVar32 * 8,(longlong)iVar16 << 3);
    }
    iVar32 = (this->Threads).ArrayNum - iVar32;
    (this->Threads).ArrayNum = iVar32;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar6->AllocatorInstance,iVar32,&(this->Threads).ArrayMax);
  }
LAB_1431b9713:
  TArray<FEvent_*,TSizedDefaultAllocator<32>_>::SetNum(&this->ThreadWakeups,uVar30,Default);
  TArray<FEvent_*,TSizedDefaultAllocator<32>_>::SetNum(&this->ThreadCompleteEvents,uVar30,Default);
  pTVar7 = &this->ThreadJobPostingLocks;
  iVar32 = (this->ThreadJobPostingLocks).ArrayNum;
  if (iVar32 < (int)uVar30) {
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,uVar30 - iVar32,&pTVar7->AllocatorInstance,
                        &(this->ThreadJobPostingLocks).ArrayNum,
                        &(this->ThreadJobPostingLocks).ArrayMax);
    DefaultConstructItems<UE::FMutex,int>((pTVar7->AllocatorInstance).Data + iVar16,uVar30 - iVar32)
    ;
  }
  else if ((int)uVar30 < iVar32) {
    iVar32 = iVar32 - uVar30;
    if (iVar32 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar15) {
        pcVar14 = (code *)swi(3);
        pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
        return pFVar19;
      }
    }
    else if (iVar32 == 0) goto LAB_1431b981b;
    pFVar43 = (pTVar7->AllocatorInstance).Data + uVar30;
    iVar16 = ((this->ThreadJobPostingLocks).ArrayNum - uVar30) - iVar32;
    if (iVar16 != 0) {
      memmove(pFVar43,pFVar43 + iVar32,(longlong)iVar16);
    }
    iVar32 = (this->ThreadJobPostingLocks).ArrayNum - iVar32;
    (this->ThreadJobPostingLocks).ArrayNum = iVar32;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,&pTVar7->AllocatorInstance,iVar32,&(this->ThreadJobPostingLocks).ArrayMax);
  }
LAB_1431b981b:
  this_00 = &this->ThreadJobPostings;
  iVar32 = (this->ThreadJobPostings).ArrayNum;
  if (iVar32 < (int)uVar30) {
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar30 - iVar32,&this_00->AllocatorInstance,
                        &(this->ThreadJobPostings).ArrayNum,&(this->ThreadJobPostings).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar16 * 0x10,0,
           (longlong)(int)(uVar30 - iVar32) << 4);
  }
  else if ((int)uVar30 < iVar32) {
    iVar32 = iVar32 - uVar30;
    if (iVar32 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar15) {
        pcVar14 = (code *)swi(3);
        pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
        return pFVar19;
      }
    }
    else if (iVar32 == 0) goto LAB_1431b98f1;
    TArray<TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl(this_00,uVar30,iVar32);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this_00->AllocatorInstance,(this->ThreadJobPostings).ArrayNum,
               &(this->ThreadJobPostings).ArrayMax);
  }
LAB_1431b98f1:
  uVar29 = uVar41;
  if (uVar30 != 0) {
    do {
      local_288 = (TOptional<int>)
                  (**(code **)((longlong)*(this->Configuration).SharedContext + 8))();
      uVar42 = (uint)uVar29;
      uVar39 = ~uVar42 >> 0x1f;
      uVar31 = 0;
      if ((int)uVar42 < (this->Threads).ArrayNum) {
        uVar31 = uVar39;
      }
      if ((uVar31 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
        return pFVar19;
      }
      *(TOptional<int> *)((this->Threads).AllocatorInstance.Data + uVar41) = local_288;
      local_288 = (TOptional<int>)FGenericPlatformProcess::GetSynchEventFromPool(false);
      uVar31 = 0;
      if ((int)uVar42 < (this->ThreadWakeups).ArrayNum) {
        uVar31 = uVar39;
      }
      if ((uVar31 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
        return pFVar19;
      }
      *(TOptional<int> *)((this->ThreadWakeups).AllocatorInstance.Data + uVar41) = local_288;
      local_288 = (TOptional<int>)FGenericPlatformProcess::GetSynchEventFromPool(false);
      uVar31 = 0;
      if ((int)uVar42 < (this->ThreadCompleteEvents).ArrayNum) {
        uVar31 = uVar39;
      }
      if ((uVar31 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
        return pFVar19;
      }
      *(TOptional<int> *)((this->ThreadCompleteEvents).AllocatorInstance.Data + uVar41) = local_288;
      uVar31 = 0;
      if ((int)uVar42 < (this->Threads).ArrayNum) {
        uVar31 = uVar39;
      }
      if ((uVar31 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        pFVar19 = (FBuildPatchFileConstructor *)(*pcVar14)();
        return pFVar19;
      }
      plVar24 = *(longlong **)((this->Threads).AllocatorInstance.Data + uVar41);
      local_188 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'[::D]::<lambda_3>,1,0>
                   ::_vftable_;
      local_198[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'[::D]::<lambda_3>,void>
                     ::Call;
      local_170 = (IFileSystem *)0x0;
      local_174 = local_14c;
      local_180.Data = (FScriptContainerElement *)this;
      local_178 = uVar42;
      (**(code **)(*plVar24 + 8))(plVar24,local_198);
      uVar41 = uVar41 + 8;
      uVar29 = (ulonglong)(uVar42 + 1);
      cVar35 = local_298.bIsSet;
    } while ((int)(uVar42 + 1) < (int)uVar30);
  }
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  if (cVar35 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FFileConstructorConfig::~FFileConstructorConfig((FFileConstructorConfig *)local_21c._4_8_);
  return this;
}

// ~FBuildPatchFileConstructor @ 1431bea30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::~FBuildPatchFileConstructor
          (FBuildPatchFileConstructor *this)

{
  FThreadSafeBool FVar1;
  int iVar2;
  longlong *plVar3;
  IBuildInstallerSharedContext *pIVar4;
  FScriptContainerElement *pFVar5;
  FChunkBackingStore *pFVar6;
  void *pvVar7;
  code *pcVar8;
  bool bVar9;
  BOOLEAN BVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  this->_padding_ = (longlong)&___7FBuildPatchFileConstructor_BuildPatchServices__6B_;
  LOCK();
  FVar1 = this->bShouldAbort;
  this->bShouldAbort = (FThreadSafeBool)0x1;
  UNLOCK();
  if (5 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  if (FVar1 == (FThreadSafeBool)0x0) {
    (**(code **)(this->WakeUpDispatchThreadEvent->_padding_ + 0x10))();
    uVar14 = 0;
    if (0 < (this->Threads).ArrayNum) {
      lVar13 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar14 < (this->ThreadWakeups).ArrayNum) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (**(code **)(**(longlong **)((this->ThreadWakeups).AllocatorInstance.Data + lVar13) + 0x10))
                  ();
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar14 < (this->Threads).ArrayNum);
    }
  }
  uVar14 = 0;
  if (0 < (this->Threads).ArrayNum) {
    lVar13 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar14 < (this->ThreadCompleteEvents).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar3 = *(longlong **)((this->ThreadCompleteEvents).AllocatorInstance.Data + lVar13);
      (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      iVar2 = (this->Threads).ArrayNum;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar14 < iVar2);
    uVar14 = 0;
    if (0 < iVar2) {
      lVar13 = 0;
      do {
        uVar12 = ~uVar14 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar14 < (this->ThreadWakeups).ArrayNum) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FGenericPlatformProcess::ReturnSynchEventToPool
                  (*(FEvent **)((this->ThreadWakeups).AllocatorInstance.Data + lVar13));
        uVar11 = 0;
        if ((int)uVar14 < (this->ThreadCompleteEvents).ArrayNum) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FGenericPlatformProcess::ReturnSynchEventToPool
                  (*(FEvent **)((this->ThreadCompleteEvents).AllocatorInstance.Data + lVar13));
        pIVar4 = (this->Configuration).SharedContext;
        pcVar8 = *(code **)((longlong)*pIVar4 + 0x10);
        uVar11 = 0;
        if ((int)uVar14 < (this->Threads).ArrayNum) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (*pcVar8)(pIVar4,*(undefined8 *)((this->Threads).AllocatorInstance.Data + lVar13));
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar14 < (this->Threads).ArrayNum);
    }
  }
  FGenericPlatformProcess::ReturnSynchEventToPool(this->WakeUpDispatchThreadEvent);
  this->WakeUpDispatchThreadEvent = (FEvent *)0x0;
  pFVar5 = (this->FileCompletionPositions).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar6 = (this->BackingStore).Ptr;
  if (pFVar6 != (FChunkBackingStore *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  pFVar5 = (this->Threads).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->ThreadCompleteEvents).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->ThreadJobPostingLocks).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_> *)
             (this->ThreadJobPostings).AllocatorInstance.Data,(this->ThreadJobPostings).ArrayNum);
  pFVar5 = (this->ThreadJobPostings).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->ThreadWakeups).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->BeforeDeleteFileEvent).field_0x8,
             *(int *)&(this->BeforeDeleteFileEvent).field_0x10);
  pvVar7 = *(void **)&(this->BeforeDeleteFileEvent).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BeforeDeleteFileEvent);
  *(undefined4 *)&(this->ChunkLocations).field_0x48 = 0;
  pvVar7 = *(void **)&(this->ChunkLocations).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ChunkLocations);
  BVar10 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ChunkLocationsLock);
  if (BVar10 == '\0') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ChunkLocationsLock);
  }
  *(undefined4 *)&(this->MemoryOutputFiles).field_0x48 = 0;
  pvVar7 = *(void **)&(this->MemoryOutputFiles).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MemoryOutputFiles);
  pFVar5 = (this->ConstructionList).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FFileConstructorConfig::~FFileConstructorConfig(&this->Configuration);
  this->_padding_ = (longlong)&___7IControllable_BuildPatchServices__6B_;
  return;
}

// operator() @ 1431c0230

void __thiscall
`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
  FVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
  FVar6;
  ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
  FVar7;
  void *_Dst;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  TLess<unsigned___int64> local_res10;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
           )param_1;
  if (FVar1 != (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                )0x0) {
    FVar7 = FVar1;
  }
  AlgoImpl::
  IntroSortInternal<_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range,int,UE::Core::Private::TProjectionMemberData<unsigned___int64__BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range::*>,TLess<unsigned___int64>_>
            ((Range *)FVar7,param_1->ArrayNum,
             (TProjectionMemberData<unsigned___int64__private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range::*>
              )0x0,local_res10);
  iVar8 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar8 + -1) {
    uVar10 = 1;
    lVar12 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1 = (param_1->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
               )param_1;
      if (FVar1 != (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                    )0x0) {
        FVar7 = FVar1;
      }
      uVar11 = ~uVar10 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1 = (param_1->AllocatorInstance).SecondaryData;
      FVar6 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
               )param_1;
      if (FVar1 != (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                    )0x0) {
        FVar6 = FVar1;
      }
      if (*(longlong *)(lVar12 + 8 + (longlong)FVar7) ==
          *(longlong *)(lVar12 + 0x10 + (longlong)FVar6)) {
        uVar5 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar1 = (param_1->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                 )param_1;
        if (FVar1 != (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                      )0x0) {
          FVar7 = FVar1;
        }
        uVar2 = *(undefined8 *)(lVar12 + 0x18 + (longlong)FVar7);
        uVar5 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar1 = (param_1->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                 )param_1;
        if (FVar1 != (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                      )0x0) {
          FVar7 = FVar1;
        }
        *(undefined8 *)(lVar12 + 8 + (longlong)FVar7) = uVar2;
        uVar5 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar1 = (param_1->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                 )param_1;
        if (FVar1 != (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                      )0x0) {
          FVar7 = FVar1;
        }
        _Dst = (void *)((longlong)(int)uVar10 * 0x10 + (longlong)FVar7);
        iVar8 = ~uVar10 + param_1->ArrayNum;
        if (iVar8 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar8 << 4);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range>_>
                  (0x10,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
        uVar9 = uVar9 - 1;
        uVar10 = uVar10 - 1;
        lVar12 = lVar12 + -0x10;
      }
      iVar8 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar9 < iVar8 + -1);
  }
  return;
}

// operator() @ 1431c04f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest'::__l2::<lambda_1>::operator()
          (void *this,bool param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  bool bVar8;
  void *local_58 [2];
  void *local_48 [2];
  FRecord local_38 [2];
  
  if (!param_1) {
    uVar3 = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x60);
    uVar4 = *(ulonglong *)(*(longlong *)((longlong)this + 0x10) + 0x68);
    if (*(char *)(*(longlong *)this + 0x9b) == '\0') {
LAB_1431c0666:
      (**(code **)(**(longlong **)(*(longlong *)this + 0x1a8) + 0x70))();
      BuildPatchServices::ISpeedRecorder::FRecord::FRecord(local_38);
      local_38[0].CyclesStart = BuildPatchServices::FStatsCollector::GetCycles();
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2405,"WriteThread_Serialize",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                   ,0x965);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2405);
      }
      (**(code **)(**(longlong **)((longlong)this + 8) + 0x188))
                (*(longlong **)((longlong)this + 8),uVar3,uVar4);
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      local_38[0].Size = uVar4;
      local_38[0].CyclesEnd = BuildPatchServices::FStatsCollector::GetCycles();
      (**(code **)(**(longlong **)(*(longlong *)this + 0x1a8) + 0x78))
                (*(longlong **)(*(longlong *)this + 0x1a8),local_38);
      *(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x9c) = 1;
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)this + 0xb8);
      pcVar2 = *(code **)(*plVar1 + 0xa0);
      puVar5 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)this + 8) + 0x18))
                         (*(longlong **)((longlong)this + 8),local_58);
      if (*(int *)(puVar5 + 1) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)*puVar5;
      }
      uVar6 = (*pcVar2)(plVar1,pwVar7);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
      do {
        if (uVar4 <= uVar6) goto LAB_1431c0666;
        if (3 < (byte)LogBuildPatchServices._0_1_) {
          (**(code **)(**(longlong **)((longlong)this + 8) + 0x18))
                    (*(longlong **)((longlong)this + 8),local_58);
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          if (local_58[0] != (void *)0x0) {
            FMemory::Free(local_58[0]);
          }
        }
        FWindowsPlatformProcess::Sleep((float)SleepTimeWhenFileSystemThrottledSeconds);
        plVar1 = *(longlong **)(*(longlong *)this + 0xb8);
        pcVar2 = *(code **)(*plVar1 + 0xa0);
        puVar5 = (undefined8 *)
                 (**(code **)(**(longlong **)((longlong)this + 8) + 0x18))
                           (*(longlong **)((longlong)this + 8),local_48);
        if (*(int *)(puVar5 + 1) == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)*puVar5;
        }
        uVar6 = (*pcVar2)(plVar1,pwVar7);
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
      } while (*(int *)(*(longlong *)this + 0xa0) == 0);
    }
  }
  return;
}

// operator() @ 1431c0a10

void __thiscall
`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::__l50::<lambda_1>::
operator()(void *this,FString *param_1,FString *param_2)

{
  int iVar1;
  TSet<TTuple<TStringView<wchar_t>,int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,int,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  bool bVar6;
  TStringView<wchar_t> local_18;
  
  iVar3 = (param_1->Data).ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  if (iVar1 == iVar3) {
    if (iVar1 < 2) goto LAB_1431c0a4f;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)**(undefined8 **)((longlong)this + 0x18),
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar6 = iVar3 == 0;
  }
  else {
    bVar6 = iVar1 + iVar3 == 1;
  }
  if (!bVar6) {
    return;
  }
LAB_1431c0a4f:
  iVar3 = (param_2->Data).ArrayNum;
  local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  this_00 = *(TSet<TTuple<TStringView<wchar_t>,int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,int,0>,FDefaultSetAllocator>
              **)((longlong)this + 8);
  local_18.Size = iVar3 + -1;
  if (iVar3 == 0) {
    local_18.Size = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  iVar3 = TSet<TTuple<TStringView<wchar_t>,int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>(this_00,uVar2,&local_18);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&this_00->Elements;
    piVar5 = (int *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    if ((piVar5 != (int *)0x0) && (iVar3 = *piVar5, iVar3 < *(int *)this)) {
      lVar4 = *(longlong *)((longlong)this + 0x10);
      if (iVar3 < *(int *)(lVar4 + 8)) {
        iVar3 = *(int *)(lVar4 + 8);
      }
      *(int *)(lVar4 + 8) = iVar3;
    }
  }
  return;
}

// Abort @ 1431c2880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::Abort(FBuildPatchFileConstructor *this)

{
  FThreadSafeBool FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  LOCK();
  FVar1 = this->bShouldAbort;
  this->bShouldAbort = (FThreadSafeBool)0x1;
  UNLOCK();
  if (5 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  if (FVar1 == (FThreadSafeBool)0x0) {
    (**(code **)(this->WakeUpDispatchThreadEvent->_padding_ + 0x10))();
    uVar5 = 0;
    if (0 < (this->Threads).ArrayNum) {
      lVar6 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar5 < (this->ThreadWakeups).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)(**(longlong **)((this->ThreadWakeups).AllocatorInstance.Data + lVar6) + 0x10))
                  ();
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < (this->Threads).ArrayNum);
    }
  }
  return;
}

// CalculateDiskSpaceRequirementsWithDeleteDuringInstall @ 1431c4340

ulong64 __thiscall
BuildPatchServices::FBuildPatchFileConstructor::
CalculateDiskSpaceRequirementsWithDeleteDuringInstall(FBuildPatchFileConstructor *this)

{
  atomic<int> aVar1;
  IConstructorChunkDbChunkSource *pIVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  atomic<int> aVar8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  pIVar2 = this->ChunkDbSource;
  if (pIVar2 == (IConstructorChunkDbChunkSource *)0x0) {
    return 0;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  uVar5 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,&this->FileCompletionPositions,&local_18);
  aVar1 = this->NextIndexToConstruct;
  if ((int)aVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompletedFileCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                       ,0x86b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  aVar8 = (atomic<int>)((int)aVar1 + -1);
  if ((int)aVar1 < 1) {
    aVar8 = aVar1;
  }
  uVar7 = FBuildPatchUtils::CalculateDiskSpaceRequirementsWithDeleteDuringInstall
                    (&(this->Configuration).ConstructList,(int)aVar8,
                     (this->Configuration).ManifestSet,&local_18,uVar5);
  uVar6 = uVar7 - uVar5;
  if (uVar7 <= uVar5) {
    uVar6 = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return uVar6;
}

// CalculateInProgressDiskSpaceRequired @ 1431c4420

ulong64 __thiscall
BuildPatchServices::FBuildPatchFileConstructor::CalculateInProgressDiskSpaceRequired
          (FBuildPatchFileConstructor *this,FFileManifest *param_1,ulong64 param_2)

{
  IBuildManifestSet *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  longlong lVar12;
  
  if ((this->Configuration).InstallMode == DestructiveInstall) {
    uVar7 = param_1->FileSize - param_2;
    lVar5 = (**(code **)((longlong)*(this->Configuration).ManifestSet + 0x68))();
    uVar11 = uVar7;
    if (lVar5 != 0) {
      uVar11 = uVar7 - *(longlong *)(lVar5 + 0x58);
    }
    uVar10 = (ulonglong)(int)this->NextIndexToConstruct;
    if ((int)this->NextIndexToConstruct < (this->ConstructionList).ArrayNum) {
      lVar5 = uVar10 << 4;
      uVar8 = uVar7;
      do {
        uVar9 = (uint)uVar10;
        uVar4 = 0;
        if ((int)uVar9 < (this->ConstructionList).ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return uVar7;
        }
        lVar12 = *(longlong *)((this->ConstructionList).AllocatorInstance.Data + lVar5);
        uVar7 = uVar8;
        if (lVar12 != 0) {
          pIVar1 = (this->Configuration).ManifestSet;
          pcVar2 = *(code **)((longlong)*pIVar1 + 0x68);
          uVar4 = 0;
          if ((int)uVar9 < (this->Configuration).ConstructList.ArrayNum) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return uVar7;
          }
          lVar6 = (*pcVar2)(pIVar1,(this->Configuration).ConstructList.AllocatorInstance.Data +
                                   (longlong)(int)uVar9 * 0x10);
          uVar11 = uVar11 + *(longlong *)(lVar12 + 0x58);
          uVar7 = uVar11;
          if ((longlong)uVar11 <= (longlong)uVar8) {
            uVar7 = uVar8;
          }
          if (lVar6 != 0) {
            uVar11 = uVar11 - *(longlong *)(lVar6 + 0x58);
          }
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        lVar5 = lVar5 + 0x10;
        uVar8 = uVar7;
      } while ((int)(uVar9 + 1) < (this->ConstructionList).ArrayNum);
    }
  }
  else {
    uVar10 = (ulonglong)(int)this->NextIndexToConstruct;
    lVar5 = 0;
    if ((int)this->NextIndexToConstruct < (this->ConstructionList).ArrayNum) {
      lVar12 = uVar10 << 4;
      do {
        uVar9 = (uint)uVar10;
        uVar4 = 0;
        if ((int)uVar9 < (this->ConstructionList).ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return uVar7;
        }
        if (*(longlong *)((this->ConstructionList).AllocatorInstance.Data + lVar12) != 0) {
          uVar4 = 0;
          if ((int)uVar9 < (this->ConstructionList).ArrayNum) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return uVar7;
          }
          lVar5 = lVar5 + *(longlong *)
                           (*(longlong *)((this->ConstructionList).AllocatorInstance.Data + lVar12)
                           + 0x58);
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        lVar12 = lVar12 + 0x10;
      } while ((int)(uVar9 + 1) < (this->ConstructionList).ArrayNum);
    }
    uVar7 = (param_1->FileSize - param_2) + lVar5;
  }
  return uVar7;
}

// ChunkHarvestCompletedFn @ 1431ccd80

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::ChunkHarvestCompletedFn
          (FBuildPatchFileConstructor *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  
  if (param_3) {
    SetChunkLocation(this,param_1,Cloud);
  }
  LOCK();
  paVar1 = &this->PendingHarvestRequests;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001431ccdb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->WakeUpDispatchThreadEvent->_padding_ + 0x10))();
    return;
  }
  return;
}

// CompleteConstructedFile @ 1431cd710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::CompleteConstructedFile
          (FBuildPatchFileConstructor *this,FFileConstructionState *param_1)

{
  undefined1 *puVar1;
  FArchive *pFVar2;
  longlong *plVar3;
  IFileConstructorStat *pIVar4;
  IConstructorChunkDbChunkSource *pIVar5;
  IInstallerAnalytics *pIVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  DWORD DVar12;
  undefined4 uVar13;
  IFileManager *pIVar14;
  undefined8 *puVar15;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar16;
  ulong64 uVar17;
  FNumberFormattingOptions *pFVar18;
  TTuple<FString,FFormatArgumentValue> *this_00;
  FTextFormat *pFVar19;
  FText *pFVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  code *pcVar23;
  longlong lVar24;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *pTVar25;
  IInstallerError *pIVar26;
  wchar_t *pwVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStackY_438 [32];
  FString local_400;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_3f0
  ;
  undefined8 *local_3e0;
  ulong64 local_3d8;
  FRecord local_3d0;
  IFileConstructorStat *local_3b8;
  FRecord local_3b0;
  IFileConstructorStat *local_398;
  FRecord local_390;
  IFileConstructorStat *local_378;
  FRecord local_370;
  FString local_358;
  TSharedPtr<FCulture,1> local_348;
  FText local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FDestructionSentinel local_2b8;
  ulong64 local_2a0;
  FText local_298;
  FText local_288;
  FNumberFormattingOptions local_278;
  FText local_260;
  FText local_250;
  FText local_240;
  FText local_230;
  FText local_220;
  FTextFormat local_210;
  FText local_200;
  FText local_1f0;
  FText local_1e0;
  FText local_1d0;
  FNumberFormattingOptions local_1c0;
  uchar local_1a8 [32];
  TStringBuilderBase<wchar_t> local_188;
  wchar_t local_168 [64];
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_438;
  if (3 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  this->bShouldLogNextDependencyWait = true;
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2932,"Constructor_CompleteFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
               ,0xb74);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2932);
  }
  if (param_1->bSkippedConstruction == false) {
    pFVar2 = (param_1->NewFile).Ptr;
    if (pFVar2 != (FArchive *)0x0) {
      if (param_1->bSuccess == false) goto LAB_1431cd963;
      if ((pFVar2->field_0x29 & 2) == 0) {
        pIVar4 = this->FileConstructorStat;
        ISpeedRecorder::FRecord::FRecord(&local_3d0);
        local_3b8 = pIVar4;
        (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4);
        local_3d0.CyclesStart = FStatsCollector::GetCycles();
        cVar8 = (**(code **)(*(longlong *)(param_1->NewFile).Ptr + 0x210))();
        pFVar2 = (param_1->NewFile).Ptr;
        if (pFVar2 != (FArchive *)0x0) {
          (param_1->NewFile).Ptr = (FArchive *)0x0;
          (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
        }
        local_3d0.CyclesEnd = FStatsCollector::GetCycles();
        local_3d0.Size = 0;
        (**(code **)((longlong)*local_3b8 + 0x58))();
        if (param_1->bSuccess == false) goto LAB_1431cd963;
        if (cVar8 != '\0') goto LAB_1431cd8c9;
        param_1->ConstructionError = CloseError;
      }
      else {
        if (2 < (byte)LogBuildPatchServices._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        }
        param_1->ConstructionError = SerializeError;
      }
      param_1->bSuccess = false;
    }
LAB_1431cd8c9:
    if (param_1->bSuccess != false) {
      if ((this->bAllowMultipleFilesInFlight == false) &&
         (bVar7 = FChunkBackingStore::CheckNoLocks((this->BackingStore).Ptr,false), !bVar7)) {
        param_1->bSuccess = false;
        param_1->ConstructionError = InternalConsistencyError;
      }
      if (param_1->bSuccess != false) {
        FSHA1::Final(&param_1->HashState);
        local_1a8[0] = '\0';
        local_1a8[1] = '\0';
        local_1a8[2] = '\0';
        local_1a8[3] = '\0';
        local_1a8[4] = '\0';
        local_1a8[5] = '\0';
        local_1a8[6] = '\0';
        local_1a8[7] = '\0';
        local_1a8[8] = '\0';
        local_1a8[9] = '\0';
        local_1a8[10] = '\0';
        local_1a8[0xb] = '\0';
        local_1a8[0xc] = '\0';
        local_1a8[0xd] = '\0';
        local_1a8[0xe] = '\0';
        local_1a8[0xf] = '\0';
        local_1a8[0x10] = '\0';
        local_1a8[0x11] = '\0';
        local_1a8[0x12] = '\0';
        local_1a8[0x13] = '\0';
        FSHA1::GetHash(&param_1->HashState,local_1a8);
        iVar10 = memcmp(local_1a8,&param_1->FileManifest->FileHash,0x14);
        param_1->bSuccess = iVar10 == 0;
        if (iVar10 != 0) {
          param_1->ConstructionError = OutboundDataError;
        }
      }
    }
  }
LAB_1431cd963:
  if (((param_1->bSuccess != false) && ((this->Configuration).InstallMode == DestructiveInstall)) &&
     ((this->Configuration).bInstallToMemory == false)) {
    ::operator/(&local_400,&(this->Configuration).InstallDirectory,param_1->BuildFilename);
    FPaths::NormalizeFilename(&local_400);
    FPaths::CollapseRelativeDirectories(&local_400,false);
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_400.Data.ArrayNum != 0) {
      FVar21.Data = local_400.Data.AllocatorInstance.Data;
    }
    cVar8 = (**(code **)((longlong)*this->FileSystem + 0x80))(this->FileSystem,FVar21.Data);
    if (cVar8 != '\0') {
      if ((this->InstallSource != (IConstructorInstallChunkSource *)0x0) &&
         (bVar7 = HarvestChunksForCompletedFile(this,&local_400), !bVar7)) {
        param_1->bSuccess = false;
        param_1->ConstructionError = InternalConsistencyError;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->BeforeDeleteFileEvent,(FWriteAccessScope *)&local_2b8);
      puVar1 = &(this->BeforeDeleteFileEvent).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar7 = false;
      uVar22 = *(int *)&(this->BeforeDeleteFileEvent).field_0x10 - 1;
      if (-1 < (int)uVar22) {
        lVar28 = (longlong)(int)uVar22 << 4;
        bVar7 = false;
        do {
          uVar11 = 0;
          if ((int)uVar22 < *(int *)&(this->BeforeDeleteFileEvent).field_0x10) {
            uVar11 = ~uVar22 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar23 = (code *)swi(3);
            (*pcVar23)();
            return;
          }
          lVar29 = *(longlong *)&(this->BeforeDeleteFileEvent).field_0x8;
          if (((*(int *)(lVar29 + 8 + lVar28) == 0) ||
              (plVar3 = *(longlong **)(lVar29 + lVar28), plVar3 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar3 + 0x68))(), cVar8 == '\0')) {
            bVar7 = true;
          }
          lVar28 = lVar28 + -0x10;
          uVar22 = uVar22 - 1;
        } while (-1 < (int)uVar22);
      }
      puVar1 = &(this->BeforeDeleteFileEvent).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->BeforeDeleteFileEvent,false);
      }
      if (local_2b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
      }
      bVar7 = -1 < CpuChannel->Enabled;
      if (bVar7) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId3016,"Delete",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                   ,0xbc8);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3016);
      }
      pIVar14 = IFileManager::Get();
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_400.Data.ArrayNum != 0) {
        FVar21.Data = local_400.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar14 + 0x38))(pIVar14,FVar21.Data,0,1);
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
  }
  if (param_1->bSuccess != false) {
    if ((this->Configuration).bConstructInMemory == false) {
LAB_1431cdc70:
      pIVar5 = this->ChunkDbSource;
      pcVar23 = *(code **)((longlong)*pIVar5 + 0x28);
      uVar13 = (**(code **)((longlong)*this->ChunkReferenceTracker + 0x38))();
      (*pcVar23)(pIVar5,uVar13);
    }
    else {
      pIVar4 = this->FileConstructorStat;
      ISpeedRecorder::FRecord::FRecord(&local_3b0);
      local_398 = pIVar4;
      (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4);
      local_3b0.CyclesStart = FStatsCollector::GetCycles();
      if ((param_1->NewFilename).Data.ArrayNum == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = (wchar_t *)(param_1->NewFilename).Data.AllocatorInstance.Data;
      }
      puVar15 = (undefined8 *)
                (**(code **)((longlong)*this->FileSystem + 0x50))
                          (this->FileSystem,&local_3e0,pwVar27,0);
      pTVar25 = &param_1->NewFile;
      if (pTVar25 != (TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *)puVar15) {
        pFVar2 = pTVar25->Ptr;
        pTVar25->Ptr = (FArchive *)*puVar15;
        *puVar15 = 0;
        if (pFVar2 != (FArchive *)0x0) {
          (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
        }
      }
      if (local_3e0 != (undefined8 *)0x0) {
        (**(code **)*local_3e0)(local_3e0,1);
      }
      DVar12 = FWindowsPlatformMisc::GetLastError();
      param_1->CreateFilePlatformLastError = DVar12;
      local_3b0.CyclesEnd = FStatsCollector::GetCycles();
      local_3b0.Size = 0;
      (**(code **)((longlong)*local_398 + 0x58))(local_398,&local_3b0);
      pFVar2 = pTVar25->Ptr;
      param_1->bSuccess = pFVar2 != (FArchive *)0x0;
      if (pFVar2 == (FArchive *)0x0) {
        param_1->ConstructionError = CannotCreateFile;
      }
      else {
        pTVar16 = TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
                  ::FindChecked((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
                                 *)&this->MemoryOutputFiles,param_1->BuildFilename);
        (**(code **)((longlong)*this->FileConstructorStat + 0x70))();
        ISpeedRecorder::FRecord::FRecord(&local_370);
        local_370.CyclesStart = FStatsCollector::GetCycles();
        bVar7 = -1 < CpuChannel->Enabled;
        if (bVar7) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId3055,"MemoryConstruction_Write",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                     ,0xbef);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3055);
        }
        lVar28 = pTVar16->ArrayNum;
        lVar29 = 0;
        if (lVar28 != 0) {
          do {
            lVar24 = 0x400000;
            if (lVar28 < lVar29 + 0x400000) {
              lVar24 = lVar28 - lVar29;
            }
            pFVar2 = (param_1->NewFile).Ptr;
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,(pTVar16->AllocatorInstance).Data + lVar29);
            lVar28 = pTVar16->ArrayNum;
            lVar29 = lVar29 + lVar24;
          } while (lVar29 != lVar28);
        }
        pTVar25 = &param_1->NewFile;
        if (bVar7) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        local_370.Size = pTVar16->ArrayNum;
        local_370.CyclesEnd = FStatsCollector::GetCycles();
        (**(code **)((longlong)*this->FileConstructorStat + 0x78))
                  (this->FileConstructorStat,&local_370);
        bVar7 = -1 < CpuChannel->Enabled;
        if (bVar7) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId3080,"MemoryConstruction_WriteFree",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                     ,0xc08);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3080);
        }
        pTVar16->ArrayNum = 0;
        if (pTVar16->ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0,&pTVar16->AllocatorInstance,0,&pTVar16->ArrayMax);
        }
        if (bVar7) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((pTVar25->Ptr->field_0x29 & 2) != 0) {
          param_1->bSuccess = false;
          param_1->ConstructionError = SerializeError;
        }
        pIVar4 = this->FileConstructorStat;
        ISpeedRecorder::FRecord::FRecord(&local_390);
        local_378 = pIVar4;
        (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4);
        local_390.CyclesStart = FStatsCollector::GetCycles();
        cVar8 = (**(code **)(*(longlong *)pTVar25->Ptr + 0x210))();
        pFVar2 = pTVar25->Ptr;
        if (pFVar2 != (FArchive *)0x0) {
          pTVar25->Ptr = (FArchive *)0x0;
          (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
        }
        local_390.CyclesEnd = FStatsCollector::GetCycles();
        local_390.Size = 0;
        (**(code **)((longlong)*local_378 + 0x58))(local_378,&local_390);
        if (param_1->bSuccess != false) {
          if (cVar8 != '\0') goto LAB_1431cdc70;
          param_1->ConstructionError = SerializeError;
          param_1->bSuccess = false;
        }
      }
    }
  }
  (**(code **)((longlong)*this->FileConstructorStat + 0x30))
            (this->FileConstructorStat,param_1->BuildFilename,param_1->bSuccess);
  if (param_1->bSuccess != false) goto LAB_1431ce86f;
  cVar8 = (**(code **)((longlong)*this->InstallerError + 8))();
  switch(param_1->ConstructionError) {
  case CannotCreateFile:
    if (cVar8 == '\0') {
      pIVar6 = this->InstallerAnalytics;
      pcVar23 = *(code **)((longlong)*pIVar6 + 0x20);
      ::FString::FString(&local_328,L"Could Not Create File");
      (*pcVar23)(pIVar6,param_1->BuildFilename,param_1->CreateFilePlatformLastError,&local_328);
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    pIVar26 = this->InstallerError;
    pcVar23 = *(code **)((longlong)*pIVar26 + 0x38);
    pFVar20 = FText::GetEmpty();
    FText::FText(&local_1f0,pFVar20);
    iVar10 = param_1->CreateFilePlatformLastError;
    pwVar27 = ConstructionErrorCodes::FileCreateFail;
    goto LAB_1431cdfbb;
  case FailedWrite:
    FWindowsPlatformMisc::GetDiskTotalAndFreeSpace
              (&(this->Configuration).InstallDirectory,&local_2a0,&local_3d8);
    if ((this->Configuration).bDeleteChunkDBFilesAfterUse == false) {
      uVar17 = CalculateInProgressDiskSpaceRequired(this,param_1->FileManifest,param_1->Progress);
    }
    else {
      uVar17 = CalculateDiskSpaceRequirementsWithDeleteDuringInstall(this);
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Write_failure_d_150a6bc90,
                 (FLogCategoryBase *)&LogBuildPatchServices);
    }
    pFVar18 = FNumberFormattingOptions::FNumberFormattingOptions(&local_1c0);
    pFVar18->MinimumFractionalDigits = 2;
    pFVar18->MaximumFractionalDigits = 2;
    local_278.AlwaysSign = pFVar18->AlwaysSign;
    local_278.UseGrouping = pFVar18->UseGrouping;
    local_278.IndicateNearlyInteger = pFVar18->IndicateNearlyInteger;
    local_278._3_1_ = pFVar18->field_0x3;
    local_278.RoundingMode = pFVar18->RoundingMode;
    local_278.MinimumIntegralDigits = pFVar18->MinimumIntegralDigits;
    local_278.MaximumIntegralDigits = pFVar18->MaximumIntegralDigits;
    local_278.MinimumFractionalDigits = pFVar18->MinimumFractionalDigits;
    local_278.MaximumFractionalDigits = pFVar18->MaximumFractionalDigits;
    local_348.Object = (FCulture *)0x0;
    local_348.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_3f0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3f0.Pairs.ArrayNum = 0;
    local_3f0.Pairs.ArrayMax = 0;
    pFVar20 = FText::AsMemory(&local_298,uVar17,&local_278,&local_348,SI);
    this_00 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::AllocateMemoryForEmplace<wchar_t_const_(&)[14]>
                        (&local_3f0,(wchar_t (*) [14])L"RequiredBytes");
    ::FString::FString((FString *)this_00,L"RequiredBytes");
    *(undefined4 *)&this_00->field_0x10 = 4;
    FText::FText((FText *)&this_00->field_0x20,pFVar20);
    if ((*(longlong *)&this_00->field_0x20 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
    if (local_298.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_348.SharedReferenceCount.ReferenceController);
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_288,L"BuildPatchInstallError",L"InstallationWriteFailed",
                         L"Low-level failure to write files to disk during installation. Verify there is sufficient disk space. {RequiredBytes} more is required."
                        );
    pFVar19 = FTextFormat::FTextFormat(&local_210,pFVar20,Default);
    FText::Format(&local_338,pFVar19,&local_3f0);
    if (local_288.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
    }
    pIVar26 = this->InstallerError;
    pcVar23 = *(code **)((longlong)*pIVar26 + 0x38);
    FText::FText(&local_200,&local_338);
    (*pcVar23)(pIVar26,0xb,DiskSpaceErrorCodes::DuringInstallation,0);
    if (local_338.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_3f0.Pairs.AllocatorInstance.Data,
               local_3f0.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_3f0.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_3f0.Pairs.AllocatorInstance.Data);
    }
  default:
    goto LAB_1431ce1fc;
  case MissingChunk:
    if (cVar8 == '\0') {
      pIVar6 = this->InstallerAnalytics;
      pcVar23 = *(code **)((longlong)*pIVar6 + 0x20);
      ::FString::FString(&local_308,L"Missing Chunk");
      (*pcVar23)(pIVar6,param_1->BuildFilename,0xffffffff,&local_308);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      local_188.Base = local_168;
      local_188.bIsDynamic = false;
      local_188.bIsExternal = false;
      local_188.CurPos = local_168;
      local_188.End = (wchar_t *)&local_e8;
      FGuid::AppendString(&param_1->ErrorContextGuid,&local_188,DigitsWithHyphensLower);
      if (local_188.End < (TStringBuilderBase<wchar_t> *)(local_188.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_188,1);
      }
      *local_188.CurPos = L'\0';
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
    }
    pIVar26 = this->InstallerError;
    pcVar23 = *(code **)((longlong)*pIVar26 + 0x38);
    pFVar20 = FText::GetEmpty();
    FText::FText(&local_1d0,pFVar20);
    pwVar27 = ConstructionErrorCodes::MissingChunkData;
    break;
  case SerializeError:
    if (cVar8 == '\0') {
      pIVar6 = this->InstallerAnalytics;
      pcVar23 = *(code **)((longlong)*pIVar6 + 0x20);
      ::FString::FString(&local_2f8,L"Serialization Error");
      (*pcVar23)(pIVar6,param_1->BuildFilename,0xffffffff,&local_2f8);
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    pIVar26 = this->InstallerError;
    pcVar23 = *(code **)((longlong)*pIVar26 + 0x38);
    pFVar20 = FText::GetEmpty();
    FText::FText(&local_260,pFVar20);
    pwVar27 = ConstructionErrorCodes::SerializationError;
    break;
  case TrackingError:
    if (cVar8 == '\0') {
      pIVar6 = this->InstallerAnalytics;
      pcVar23 = *(code **)((longlong)*pIVar6 + 0x20);
      ::FString::FString(&local_2e8,L"Tracking Error");
      (*pcVar23)(pIVar6,param_1->BuildFilename,0xffffffff,&local_2e8);
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      local_e8.Base = local_c8;
      local_e8.bIsDynamic = false;
      local_e8.bIsExternal = false;
      local_e8.CurPos = local_c8;
      local_e8.End = (wchar_t *)local_48;
      FGuid::AppendString(&param_1->ErrorContextGuid,&local_e8,DigitsWithHyphensLower);
      if (local_e8.End < local_e8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
      }
      *local_e8.CurPos = L'\0';
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
    }
    pIVar26 = this->InstallerError;
    pcVar23 = *(code **)((longlong)*pIVar26 + 0x38);
    pFVar20 = FText::GetEmpty();
    FText::FText(&local_250,pFVar20);
    pwVar27 = ConstructionErrorCodes::TrackingError;
    break;
  case OutboundDataError:
    if (cVar8 == '\0') {
      pIVar6 = this->InstallerAnalytics;
      pcVar23 = *(code **)((longlong)*pIVar6 + 0x20);
      ::FString::FString(&local_358,L"Serialised Verify Fail");
      (*pcVar23)(pIVar6,param_1->BuildFilename,0xffffffff,&local_358);
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    pIVar26 = this->InstallerError;
    pcVar23 = *(code **)((longlong)*pIVar26 + 0x38);
    pFVar20 = FText::GetEmpty();
    FText::FText(&local_220,pFVar20);
    pwVar27 = ConstructionErrorCodes::OutboundCorrupt;
    break;
  case InternalConsistencyError:
    if (cVar8 == '\0') {
      pIVar6 = this->InstallerAnalytics;
      pcVar23 = *(code **)((longlong)*pIVar6 + 0x20);
      ::FString::FString(&local_2d8,L"Internal Consistency Error");
      (*pcVar23)(pIVar6,param_1->BuildFilename,0xffffffff,&local_2d8);
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    pIVar26 = this->InstallerError;
    pcVar23 = *(code **)((longlong)*pIVar26 + 0x38);
    pFVar20 = FText::GetEmpty();
    FText::FText(&local_240,pFVar20);
    pwVar27 = ConstructionErrorCodes::InternalConsistencyFailure;
    break;
  case MissingFileInfo:
    if (cVar8 == '\0') {
      pIVar6 = this->InstallerAnalytics;
      pcVar23 = *(code **)((longlong)*pIVar6 + 0x20);
      ::FString::FString(&local_2c8,L"Missing File Manifest");
      (*pcVar23)(pIVar6,param_1->BuildFilename,0xffffffff,&local_2c8);
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    pIVar26 = this->InstallerError;
    pcVar23 = *(code **)((longlong)*pIVar26 + 0x38);
    pFVar20 = FText::GetEmpty();
    FText::FText(&local_230,pFVar20);
    pwVar27 = ConstructionErrorCodes::MissingFileInfo;
    break;
  case CloseError:
    if (cVar8 == '\0') {
      pIVar6 = this->InstallerAnalytics;
      pcVar23 = *(code **)((longlong)*pIVar6 + 0x20);
      ::FString::FString(&local_318,L"Could Not Close File");
      (*pcVar23)(pIVar6,param_1->BuildFilename,0xffffffff,&local_318);
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    pIVar26 = this->InstallerError;
    pcVar23 = *(code **)((longlong)*pIVar26 + 0x38);
    pFVar20 = FText::GetEmpty();
    FText::FText(&local_1e0,pFVar20);
    pwVar27 = ConstructionErrorCodes::CloseFileError;
  }
  iVar10 = 0;
LAB_1431cdfbb:
  (*pcVar23)(pIVar26,2,pwVar27,iVar10);
LAB_1431ce1fc:
  switch(param_1->ConstructionError) {
  case CannotCreateFile:
  case SerializeError:
  case TrackingError:
  case OutboundDataError:
  case InternalConsistencyError:
  case CloseError:
    if ((param_1->NewFilename).Data.ArrayNum == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = (wchar_t *)(param_1->NewFilename).Data.AllocatorInstance.Data;
    }
    cVar8 = (**(code **)((longlong)*this->FileSystem + 0x68))(this->FileSystem,pwVar27);
    if ((cVar8 == '\0') && (2 < (byte)LogBuildPatchServices._0_1_)) {
      FWindowsPlatformMisc::GetLastError();
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
  }
  (**(code **)(this->_padding_ + 0x10))(this);
LAB_1431ce86f:
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CompleteReadBatch @ 1431ce930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::CompleteReadBatch
          (FBuildPatchFileConstructor *this,FFileManifest *param_1,FBatchState *param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  FChunkBackingStore *pFVar8;
  IChunkReferenceTracker *pIVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  FBuildPatchFileConstructor *pFVar14;
  TMap<FGuid,FRequestInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>_>
  *pTVar15;
  bool bVar16;
  char cVar17;
  ulong64 uVar18;
  longlong *plVar19;
  longlong lVar20;
  atomic<unsigned_char> *paVar21;
  int iVar22;
  uint uVar23;
  FGuid *this_00;
  undefined1 *puVar24;
  FStoredChunk *pFVar25;
  int iVar26;
  uint *puVar27;
  longlong lVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  uint uVar30;
  uint *puVar31;
  bool bVar32;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  char local_158;
  undefined1 local_157;
  undefined1 local_156 [2];
  uint local_154;
  FBuildPatchFileConstructor *local_148;
  TMap<FGuid,FRequestInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>_>
  *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  FBatchState *local_100;
  FFileManifest *local_f8;
  TMap<FGuid,FRequestInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [40];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar32 = CpuChannel->Enabled < 0;
  local_148 = this;
  local_100 = param_2;
  local_f8 = param_1;
  if (bVar32) {
    local_158 = '\0';
  }
  else {
    local_158 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2421,"CFFC_CompleteRead",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
               ,0x975);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2421);
  }
  if ((param_2->Error == None) && (param_2->FailedRequestCount != (atomic<int>)0x0)) {
    param_2->Error = MissingChunk;
  }
  if (5 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  iVar26 = 0;
  cVar17 = !bVar32;
  if (param_2->Error != None) {
LAB_1431ceec4:
    pFVar14 = local_148;
    if ((param_2->Error == None) && (iVar26 = 0, 0 < param_2->ChunkCount)) {
      do {
        pIVar9 = pFVar14->ChunkReferenceTracker;
        iVar5 = (param_1->ChunkParts).ArrayNum;
        uVar30 = param_2->StartChunkPartIndex + iVar26;
        pcVar10 = *(code **)((longlong)*pIVar9 + 0x30);
        uVar23 = 0;
        if ((int)uVar30 < iVar5) {
          uVar23 = ~uVar30 >> 0x1f;
        }
        if (uVar23 == 0) {
          local_168 = (longlong)(int)uVar30;
          local_160 = (longlong)iVar5;
          bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar32) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        cVar17 = (*pcVar10)(pIVar9,(param_1->ChunkParts).AllocatorInstance.Data +
                                   (longlong)(int)uVar30 * 0x18);
        if (cVar17 == '\0') {
          uVar30 = param_2->StartChunkPartIndex + iVar26;
          param_2->Error = TrackingError;
          iVar5 = (param_1->ChunkParts).ArrayNum;
          uVar23 = 0;
          if ((int)uVar30 < iVar5) {
            uVar23 = ~uVar30 >> 0x1f;
          }
          if (uVar23 == 0) {
            local_168 = (longlong)(int)uVar30;
            local_160 = (longlong)iVar5;
            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar32) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          pFVar1 = (param_1->ChunkParts).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x18;
          uVar11 = *(undefined8 *)pFVar1;
          uVar12 = *(undefined8 *)(pFVar1 + 8);
          (param_2->ErrorContextGuid).A = (int)uVar11;
          (param_2->ErrorContextGuid).B = (int)((ulonglong)uVar11 >> 0x20);
          (param_2->ErrorContextGuid).C = (int)uVar12;
          (param_2->ErrorContextGuid).D = (int)((ulonglong)uVar12 >> 0x20);
        }
        iVar26 = iVar26 + 1;
        cVar17 = local_158;
      } while (iVar26 < param_2->ChunkCount);
    }
    if (param_2->Error == None) {
      bVar32 = -1 < CpuChannel->Enabled;
      if (bVar32) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2504,"CFFC_MemRetire",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                   ,0x9c8);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2504);
      }
      pFVar8 = (local_148->BackingStore).Ptr;
      iVar26 = (**(code **)((longlong)*local_148->ChunkReferenceTracker + 0x50))();
      bVar16 = FChunkBackingStore::CheckRetirements(pFVar8,iVar26);
      if (!bVar16) {
        param_2->Error = InternalConsistencyError;
      }
      if (bVar32) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (cVar17 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  iVar5 = *(int *)&(param_2->Requests).field_0x28;
  pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Requests).field_0x10;
  local_140 = &param_2->Requests;
  iStack_138 = 0;
  uStack_134 = 1;
  iStack_124 = 0;
  if (iVar5 != 0) {
    puVar27 = *(uint **)&(param_2->Requests).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)pTVar29;
    }
    uVar23 = *puVar27;
    while (uVar23 == 0) {
      lVar20 = (longlong)iStack_138;
      iVar26 = iVar26 + 0x20;
      iStack_138 = iStack_138 + 1;
      iStack_124 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_1431cea9e;
      uVar23 = puVar27[lVar20 + 1];
    }
    uStack_134 = -uVar23 & uVar23;
    uVar2 = (ulonglong)uStack_134 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_110 = (int)lVar20;
    iStack_124 = iVar26 + -1 + local_110;
    if (iVar5 < iStack_124) {
      iStack_124 = iVar5;
    }
  }
LAB_1431cea9e:
  uVar23 = *(uint *)&(param_2->Requests).field_0x28;
  iStack_118 = *(int *)&(param_2->Requests).field_0x8 - *(int *)&(param_2->Requests).field_0x34;
  uVar30 = uVar23 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uStack_134,iStack_138);
  uStack_128 = 0xffffffff;
  TStack_e8.CurrentBitIndex = iStack_124;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar23 >> 5;
  TStack_e8._28_4_ = iStack_124;
  TStack_e8.BaseBitIndex = iVar26;
  uStack_c8 = CONCAT44(uStack_114,iStack_118);
  local_154 = uVar23;
  local_130 = (undefined1 *)pTVar29;
  local_120 = iVar26;
  iStack_11c = iStack_124;
  local_f0 = local_140;
  TStack_e8.Array = pTVar29;
  if ((((int)uVar23 < 0) || (iVar5 < (int)uVar23)) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar6 = *(uint *)&(param_2->Requests).field_0x28;
  if (uVar23 != uVar6) {
    puVar7 = *(undefined1 **)&(param_2->Requests).field_0x20;
    puVar24 = (undefined1 *)pTVar29;
    if (puVar7 != (undefined1 *)0x0) {
      puVar24 = puVar7;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar22 * 4);
    while (uVar23 == 0) {
      lVar20 = (longlong)iVar22;
      uVar30 = uVar30 + 0x20;
      iVar22 = iVar22 + 1;
      uVar23 = uVar6;
      local_154 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_1431cebc0;
      uVar23 = *(uint *)(puVar24 + lVar20 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_10c = (int)lVar20;
    uVar23 = local_10c + -1 + uVar30;
    local_154 = uVar23;
    if ((int)uVar6 < (int)uVar23) {
      uVar23 = uVar6;
      local_154 = uVar6;
    }
  }
LAB_1431cebc0:
  do {
    pTVar15 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      local_157 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FRequestInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_157);
    }
    if (((TStack_e8.CurrentBitIndex == uVar23) && (TStack_e8.Array == pTVar29)) &&
       (param_1 = local_f8, cVar17 = local_158, pTVar15 == &param_2->Requests)) goto LAB_1431ceec4;
    this_00 = (FGuid *)(*(longlong *)pTVar15 + 0x10 + (longlong)TStack_e8.CurrentBitIndex * 0x90);
    if (*(char *)((longlong)&this_00[6].C + 1) == '\0') {
      if (((char)this_00[6].C != '\0') &&
         (bVar32 = FChunkBackingStore::CommitAndReleaseEntry((local_148->BackingStore).Ptr,this_00),
         !bVar32)) {
        param_2->Error = InternalConsistencyError;
        uVar30 = this_00->B;
        uVar6 = this_00->C;
        uVar13 = this_00->D;
        (param_2->ErrorContextGuid).A = this_00->A;
        (param_2->ErrorContextGuid).B = uVar30;
        (param_2->ErrorContextGuid).C = uVar6;
        (param_2->ErrorContextGuid).D = uVar13;
      }
    }
    else {
      bVar32 = -1 < CpuChannel->Enabled;
      if (bVar32) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2443,"CFFC_DirectCopy",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                   ,0x98b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2443);
      }
      pFVar8 = (local_148->BackingStore).Ptr;
      uVar18 = CityHash64((char *)this_00,0x10);
      iVar26 = TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FGuid>
                         ((TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                           *)&pFVar8->StoredChunks,(uint)uVar18,this_00);
      if (iVar26 == -1) {
LAB_1431cedce:
        param_2->Error = MissingChunk;
        uVar30 = this_00->B;
        uVar6 = this_00->C;
        uVar13 = this_00->D;
        (param_2->ErrorContextGuid).A = this_00->A;
        (param_2->ErrorContextGuid).B = uVar30;
        (param_2->ErrorContextGuid).C = uVar6;
        (param_2->ErrorContextGuid).D = uVar13;
      }
      else {
        lVar20 = (longlong)iVar26 * 0x38 + *(longlong *)&pFVar8->StoredChunks;
        plVar19 = (longlong *)(lVar20 + 0x10);
        if (lVar20 == 0) {
          plVar19 = (longlong *)0x0;
        }
        if ((plVar19 == (longlong *)0x0) || (lVar20 = *plVar19, (int)plVar19[1] == 0))
        goto LAB_1431cedce;
        uVar23 = this_00[3].A;
        puVar27 = &this_00[1].C;
        lVar28 = 0;
        if (*(uint **)&this_00[2].C != (uint *)0x0) {
          puVar27 = *(uint **)&this_00[2].C;
        }
        puVar31 = puVar27 + 3;
        while( true ) {
          if (this_00[3].A != uVar23) {
            local_156[0] = 0;
            `TCheckedPointerIterator<FRequestInfo::FRequestSplat,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_156);
          }
          param_2 = local_100;
          if (puVar31 + -3 == puVar27 + (longlong)(int)uVar23 * 4) break;
          memcpy((void *)(*(longlong *)(this_00 + 5) + *(longlong *)(puVar31 + -3)),
                 (void *)((ulonglong)puVar31[-1] + lVar20),(ulonglong)*puVar31);
          lVar28 = lVar28 + (ulonglong)*puVar31;
          puVar31 = puVar31 + 4;
        }
        paVar21 = (atomic<unsigned_char> *)(*(longlong *)(this_00 + 6) + 0xa3);
        LOCK();
        FVar3.State = *paVar21;
        if (FVar3.State == (atomic<unsigned_char>)0x0) {
          *paVar21 = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (FVar3.State != (atomic<unsigned_char>)0x0) {
          UE::FMutex::LockSlow((FMutex *)paVar21);
        }
        *(longlong *)(*(longlong *)(this_00 + 6) + 0xa8) =
             *(longlong *)(*(longlong *)(this_00 + 6) + 0xa8) + lVar28;
        paVar21 = (atomic<unsigned_char> *)(*(longlong *)(this_00 + 6) + 0xa3);
        LOCK();
        aVar4 = *paVar21;
        *paVar21 = (atomic<unsigned_char>)((char)*paVar21 + -1);
        UNLOCK();
        uVar23 = local_154;
        if (((byte)aVar4 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)paVar21);
          uVar23 = local_154;
        }
      }
      pFVar8 = (local_148->BackingStore).Ptr;
      uVar18 = CityHash64((char *)this_00,0x10);
      iVar26 = TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FGuid>
                         ((TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                           *)&pFVar8->StoredChunks,(uint)uVar18,this_00);
      if (iVar26 == -1) {
LAB_1431ceddf:
        if (1 < (byte)LogBuildPatchServices._0_1_) {
          local_b8.Base = local_98;
          local_b8.bIsDynamic = false;
          local_b8.bIsExternal = false;
          local_b8.CurPos = local_98;
          local_b8.End = (wchar_t *)local_48;
          FGuid::AppendString(this_00,&local_b8,DigitsWithHyphensLower);
          if (local_b8.End < local_b8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
          }
          *local_b8.CurPos = L'\0';
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)
                     &`public:_bool___cdecl_FChunkBackingStore::ReleaseEntry(FGuid_const&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
        }
LAB_1431cee5b:
        param_2->Error = InternalConsistencyError;
        uVar30 = this_00->B;
        uVar6 = this_00->C;
        uVar13 = this_00->D;
        (param_2->ErrorContextGuid).A = this_00->A;
        (param_2->ErrorContextGuid).B = uVar30;
        (param_2->ErrorContextGuid).C = uVar6;
        (param_2->ErrorContextGuid).D = uVar13;
      }
      else {
        lVar20 = (longlong)iVar26 * 0x38 + *(longlong *)&pFVar8->StoredChunks;
        pFVar25 = (FStoredChunk *)(lVar20 + 0x10);
        if (lVar20 == 0) {
          pFVar25 = (FStoredChunk *)0x0;
        }
        if (pFVar25 == (FStoredChunk *)0x0) goto LAB_1431ceddf;
        bVar16 = FChunkBackingStore::ReleaseEntryInternal(pFVar8,this_00,pFVar25);
        if (!bVar16) goto LAB_1431cee5b;
      }
      if (bVar32) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Requests).field_0x10;
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  } while( true );
}

// ConstructFiles @ 1431cfce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001431cfdcd) */
/* WARNING: Removing unreachable block (ram,0x0001431cfe63) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles
          (FBuildPatchFileConstructor *this,FResumeData *param_1)

{
  uint *puVar1;
  FMutex *this_00;
  uchar *puVar2;
  longlong *plVar3;
  atomic<unsigned_char> aVar4;
  atomic<int> aVar5;
  TUniquePtr<FBatchState,TDefaultDelete<FBatchState>_> TVar6;
  TUniquePtr<FFileConstructionState,TDefaultDelete<FFileConstructionState>_> TVar7;
  FArchive *pFVar8;
  IFileConstructorStat *pIVar9;
  FFileManifest *pFVar10;
  ulong64 uVar11;
  code *pcVar12;
  double dVar13;
  unkuint9 Var14;
  double dVar15;
  FBuildPatchFileConstructor *pFVar16;
  LARGE_INTEGER LVar17;
  LARGE_INTEGER LVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  ushort uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
  FVar26;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar27;
  FFileConstructionState *pFVar28;
  FFileConstructionState *pFVar29;
  size_t sVar30;
  int *piVar31;
  FText *pFVar32;
  FString *pFVar33;
  FBatchState *pFVar34;
  ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
  FVar35;
  longlong lVar36;
  void *pvVar37;
  FBatchState *pFVar38;
  undefined1 auVar39 [8];
  uint uVar40;
  longlong lVar41;
  ForAnyElementType FVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  longlong lVar46;
  wchar_t *_Str;
  FScriptContainerElement *pFVar47;
  ulonglong uVar48;
  uint uVar49;
  FScriptContainerElement *pFVar50;
  int iVar51;
  ulonglong uVar52;
  undefined1 auStackY_1368 [32];
  byte local_1308;
  ForAnyElementType local_1300;
  undefined8 local_12f8;
  byte local_12f0;
  ForAnyElementType local_12e8;
  undefined8 local_12e0;
  undefined1 local_12d8;
  undefined1 local_12d7;
  undefined1 local_12d6;
  undefined1 local_12d5;
  undefined1 local_12d4;
  undefined1 local_12d3;
  undefined1 local_12d2 [2];
  FFileConstructionState *local_12d0;
  FBatchState *local_12c8;
  FBatchState *local_12c0;
  FBuildPatchFileConstructor *local_12b8;
  int local_12b0;
  uint local_12ac;
  FBatchState *local_12a8;
  undefined1 local_12a0;
  undefined1 local_129f [3];
  uint local_129c;
  uint local_1298;
  uint local_1294;
  FFileConstructionState *local_1290;
  undefined4 local_1288;
  undefined4 uStack_1284;
  longlong local_1280;
  longlong local_1278;
  longlong local_1270;
  longlong local_1268;
  ulonglong local_1260;
  longlong local_1258;
  longlong local_1250;
  int local_1248;
  ulonglong local_1240;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1238;
  undefined1 local_1228 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1208;
  LARGE_INTEGER local_11f8;
  LARGE_INTEGER local_11f0;
  LARGE_INTEGER local_11e8;
  FResumeData *local_11e0;
  LARGE_INTEGER local_11d8;
  LARGE_INTEGER local_11d0;
  LARGE_INTEGER local_11c8;
  LARGE_INTEGER local_11c0;
  LARGE_INTEGER local_11b8;
  LARGE_INTEGER local_11b0;
  LARGE_INTEGER local_11a8;
  LARGE_INTEGER local_11a0;
  LARGE_INTEGER local_1198;
  LARGE_INTEGER local_1190;
  LARGE_INTEGER local_1188;
  LARGE_INTEGER local_1180;
  LARGE_INTEGER local_1178;
  FString local_1170;
  FString local_1160;
  TSharedPtr<FCulture,1> local_1150;
  TSharedPtr<FCulture,1> local_1140;
  FText local_1130;
  FText local_1120;
  TArray<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  local_1110;
  code *local_10c8 [2];
  FEvent local_10b8;
  undefined1 local_10a0 [8];
  uchar local_1098 [3];
  undefined1 local_1095 [4093];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1368;
  puVar1 = &this->MaxWriteBatchSize;
  *puVar1 = 10;
  local_12b8 = this;
  local_11e0 = param_1;
  bVar19 = FConfigCacheIni::GetInt
                     (GConfig,L"Portal.BuildPatch",L"ConstructorIOBatchSizeMB",(int *)puVar1,
                      &GEngineIni);
  if ((bVar19) && (5 < (byte)LogBuildPatchServices._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  if ((this->Configuration).IOBatchSizeMB.bIsSet != false) {
    uVar49 = (this->Configuration).IOBatchSizeMB.TypedValue;
    if ((int)uVar49 < 1) {
      uVar49 = 1;
    }
    *puVar1 = uVar49;
    if (5 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
  }
  *puVar1 = *puVar1 << 0x14;
  puVar1 = &this->IOBufferSize;
  *puVar1 = 0x40;
  bVar19 = FConfigCacheIni::GetInt
                     (GConfig,L"Portal.BuildPatch",L"ConstructorIOBufferSizeMB",(int *)puVar1,
                      &GEngineIni);
  if ((bVar19) && (5 < (byte)LogBuildPatchServices._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  if ((this->Configuration).IOBufferSizeMB.bIsSet != false) {
    uVar49 = (this->Configuration).IOBufferSizeMB.TypedValue;
    if ((int)uVar49 < 1) {
      uVar49 = 1;
    }
    *puVar1 = uVar49;
    if (5 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
  }
  *puVar1 = *puVar1 << 0x14;
  uVar49 = 0;
  local_1238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1238.ArrayNum = 0;
  local_1238.ArrayMax = 0;
  if (((this->Configuration).bInstallToMemory == false) &&
     ((this->Configuration).bConstructInMemory == false)) {
    local_12ac = (this->ConstructionList).ArrayNum;
    uVar25 = (ulonglong)(int)local_12ac;
    pFVar47 = (this->ConstructionList).AllocatorInstance.Data;
    pFVar50 = pFVar47 + uVar25 * 0x10;
    while( true ) {
      if ((local_12b8->ConstructionList).ArrayNum != (int)uVar25) {
        local_12d8 = 0;
        `TCheckedPointerIterator<BuildPatchServices::FBuildPatchFileConstructor::FFileToConstruct,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_12d8);
      }
      this = local_12b8;
      if (pFVar47 == pFVar50) break;
      lVar41 = *(longlong *)pFVar47;
      if (lVar41 != 0) {
        iVar23 = *(int *)(lVar41 + 0x50);
        lVar46 = *(longlong *)(lVar41 + 0x48);
        lVar36 = lVar46 + (longlong)iVar23 * 0x18;
        while( true ) {
          if (*(int *)(lVar41 + 0x50) != iVar23) {
            local_12d7 = 0;
            `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&local_12d7);
          }
          if (lVar46 == lVar36) break;
          if (uVar49 < *(uint *)(lVar46 + 0x14)) {
            uVar49 = *(uint *)(lVar46 + 0x14);
          }
          lVar46 = lVar46 + 0x18;
        }
      }
      uVar25 = (ulonglong)local_12ac;
      pFVar47 = pFVar47 + 0x10;
    }
    if (local_12b8->MaxWriteBatchSize < uVar49) {
      local_12b8->MaxWriteBatchSize = uVar49;
      if (3 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      if ((this->IOBufferSize < this->MaxWriteBatchSize) &&
         (this->IOBufferSize = this->MaxWriteBatchSize, 3 < (byte)LogBuildPatchServices._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_Increasing_IO_b_150a6c8c0,
                   (FLogCategoryBase *)&LogBuildPatchServices);
      }
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_1238,this->IOBufferSize,Default);
  }
  QueryPerformanceCounter(&local_1188);
  local_1190 = local_1188;
  local_1228._8_8_ = SEXT48(local_1238.ArrayNum);
  local_1250 = 0;
  local_1258 = 0;
  local_1260 = 0;
  local_1268 = 0;
  local_1270 = 0;
  local_1278 = 0;
  local_1280 = 0;
  local_12e8.Data = (FScriptContainerElement *)0x0;
  local_12e0 = 0;
  local_1300.Data = (FScriptContainerElement *)0x0;
  local_12f8 = 0;
  local_1110.AllocatorInstance.SecondaryData =
       (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
        )0x0;
  local_1110.ArrayNum = 0;
  local_1110.ArrayMax = 3;
  local_1228[0] = '\0';
  local_1228[1] = '\0';
  local_1228[2] = '\0';
  local_1228[3] = '\0';
  local_1228[4] = '\0';
  local_1228[5] = '\0';
  local_1228[6] = '\0';
  local_1228[7] = '\0';
  iVar23 = 0;
  if ((&local_1110 <=
       (TArray<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
        *)local_1228) && (local_1228 < &local_1110.AllocatorInstance.SecondaryData)) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar23 = local_1110.ArrayNum;
    if (local_1110.ArrayNum == local_1110.ArrayMax) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range>_>
                         (0x810,&local_1110.AllocatorInstance,&local_1110.ArrayMax);
    }
  }
  dVar15 = __real_43e0000000000000;
  local_1110.ArrayNum = iVar23 + 1;
  FVar35 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
            )&local_1110;
  if (local_1110.AllocatorInstance.SecondaryData !=
      (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
       )0x0) {
    FVar35 = local_1110.AllocatorInstance.SecondaryData;
  }
  local_1294 = CONCAT31(local_1294._1_3_,1);
  puVar2 = (uchar *)((longlong)FVar35 + (longlong)iVar23 * 0x10);
  *(undefined8 *)puVar2 = local_1228._0_8_;
  *(undefined8 *)(puVar2 + 8) = local_1228._8_8_;
LAB_1431d0110:
  local_1308 = 0;
  if ((int)local_12f8 != 0) {
    if (((int)local_12f8 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((*(FBatchState **)local_1300.Data)->bIsWriting == false) {
LAB_1431d01b0:
      if (((int)local_12f8 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((*(FBatchState **)local_1300.Data)->bIsEmptyFileSentinel != false) goto LAB_1431d01fe;
    }
    else {
      if (((int)local_12f8 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((*(FBatchState **)local_1300.Data)->bIsFinished == (atomic<bool>)0x0) goto LAB_1431d01b0;
LAB_1431d01fe:
      QueryPerformanceCounter(&local_1180);
      LVar17 = local_1180;
      if (((int)local_12f8 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar29 = (*(FBatchState **)local_1300.Data)->OwningFile;
      pFVar29->OutstandingBatches = pFVar29->OutstandingBatches + -1;
      if (((this->Configuration).bInstallToMemory == false) &&
         ((this->Configuration).bConstructInMemory == false)) {
        if (((int)local_12f8 < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (((*(FBatchState **)local_1300.Data)->BatchBuffer).Size != 0) {
          if (((int)local_12f8 < 1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar41 = (longlong)((*(FBatchState **)local_1300.Data)->BatchBuffer).Data -
                   (longlong)local_1238.AllocatorInstance.Data;
          local_1228._16_8_ = lVar41;
          if (((int)local_12f8 < 1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_1228._24_8_ = ((*(FBatchState **)local_1300.Data)->BatchBuffer).Size + lVar41;
          FVar35 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                    )&local_1110;
          if (local_1110.AllocatorInstance.SecondaryData !=
              (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
               )0x0) {
            FVar35 = local_1110.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar35 <= (longlong)local_1228 + 0x10U) {
            FVar35 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                      )&local_1110;
            if (local_1110.AllocatorInstance.SecondaryData !=
                (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                 )0x0) {
              FVar35 = local_1110.AllocatorInstance.SecondaryData;
            }
            if ((local_1228 + 0x10 <
                 (undefined1 *)((longlong)local_1110.ArrayMax * 0x10 + (longlong)FVar35)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          if (local_1110.ArrayNum == local_1110.ArrayMax) {
            local_1110.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range>_>
                           (0x810,&local_1110.AllocatorInstance,&local_1110.ArrayMax);
          }
          FVar35 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                    )&local_1110;
          if (local_1110.AllocatorInstance.SecondaryData !=
              (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
               )0x0) {
            FVar35 = local_1110.AllocatorInstance.SecondaryData;
          }
          plVar3 = (longlong *)((longlong)FVar35 + (longlong)local_1110.ArrayNum * 0x10);
          local_1110.ArrayNum = local_1110.ArrayNum + 1;
          *plVar3 = local_1228._16_8_;
          plVar3[1] = local_1228._24_8_;
          `BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l2::<lambda_1>::
          operator()(&local_12d3,&local_1110);
        }
        if ((((pFVar29->NewFile).Ptr)->field_0x29 & 2) != 0) {
          pFVar29->bSuccess = false;
          pFVar29->ConstructionError = FailedWrite;
        }
      }
      if (((int)local_12f8 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar42.Data = local_1300.Data;
      TVar6.Ptr = *(FBatchState **)local_1300.Data;
      if (TVar6.Ptr != (FBatchState *)0x0) {
        *(undefined4 *)&((TVar6.Ptr)->Requests).field_0x48 = 0;
        pvVar37 = *(void **)&((TVar6.Ptr)->Requests).field_0x40;
        if (pvVar37 != (void *)0x0) {
          FMemory::Free(pvVar37);
        }
        TSparseArray<TSparseSetElement<TTuple<FGuid,FRequestInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FGuid,FRequestInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FGuid,FRequestInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&(TVar6.Ptr)->Requests);
        ::operator_delete(TVar6.Ptr,0xa0);
      }
      if ((int)local_12f8 + -1 != 0) {
        memmove(FVar42.Data,FVar42.Data + 8,(longlong)((int)local_12f8 + -1) << 3);
      }
      iVar23 = (int)local_12f8 + -1;
      local_12f8 = CONCAT44(local_12f8._4_4_,iVar23);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&local_1300,iVar23,(int *)((longlong)&local_12f8 + 4));
      if ((pFVar29->NextChunkPartToRead == (pFVar29->FileManifest->ChunkParts).ArrayNum) &&
         (pFVar29->OutstandingBatches == 0)) {
        CompleteConstructedFile(this,pFVar29);
        if (5 < (byte)LogBuildPatchServices._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        }
        if (((int)(uint)local_12e0 < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((*(FFileConstructionState **)local_12e8.Data != pFVar29) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("ActiveFiles[0].Get() == File",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                                ,0xdb6,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (((int)(uint)local_12e0 < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar42.Data = local_12e8.Data;
        TVar7.Ptr = *(FFileConstructionState **)local_12e8.Data;
        if (TVar7.Ptr != (FFileConstructionState *)0x0) {
          pFVar47 = ((TVar7.Ptr)->NewFilename).Data.AllocatorInstance.Data;
          if (pFVar47 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar47);
          }
          pFVar8 = ((TVar7.Ptr)->NewFile).Ptr;
          if (pFVar8 != (FArchive *)0x0) {
            (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
          }
          FSHA1::~FSHA1(&(TVar7.Ptr)->HashState);
          ::operator_delete(TVar7.Ptr,0xf8);
        }
        if ((uint)local_12e0 + -1 != 0) {
          memmove(FVar42.Data,FVar42.Data + 8,(longlong)(int)((uint)local_12e0 + -1) << 3);
        }
        iVar23 = (uint)local_12e0 + -1;
        local_12e0 = CONCAT44(local_12e0._4_4_,iVar23);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&local_12e8,iVar23,(int *)((longlong)&local_12e0 + 4));
        if ((uint)local_12e0 != 0) {
          pIVar9 = this->FileConstructorStat;
          pcVar12 = *(code **)((longlong)*pIVar9 + 0x20);
          if ((int)(uint)local_12e0 < 1) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          if (((int)(uint)local_12e0 < 1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (*pcVar12)(pIVar9);
        }
      }
      QueryPerformanceCounter(&local_1178);
      local_1250 = local_1250 + (local_1178.QuadPart - (longlong)LVar17);
    }
    if ((int)local_12f8 != 0) {
      QueryPerformanceCounter(&local_11f0);
      iVar23 = (int)local_12f8;
      pFVar47 = local_1300.Data + (longlong)(int)local_12f8 * 8;
      FVar42.Data = local_1300.Data;
      do {
        if ((int)local_12f8 != iVar23) {
          local_12d6 = 0;
          `TCheckedPointerIterator<TUniquePtr<FBatchState,TDefaultDelete<FBatchState>_>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_12d6);
        }
        if (FVar42.Data == pFVar47) goto LAB_1431d0854;
        if ((*(FBatchState **)FVar42.Data)->bIsReading != false) {
          if ((*(FBatchState **)FVar42.Data)->bIsFinished == (atomic<bool>)0x0) goto LAB_1431d0854;
          pFVar29 = (*(FBatchState **)FVar42.Data)->OwningFile;
          CompleteReadBatch(this,pFVar29->FileManifest,*(FBatchState **)FVar42.Data);
          (*(FBatchState **)FVar42.Data)->bIsReading = false;
          (*(FBatchState **)FVar42.Data)->bNeedsWrite = true;
          if ((pFVar29->ConstructionError == None) &&
             (TVar6.Ptr = *(FBatchState **)FVar42.Data, (TVar6.Ptr)->Error != None)) {
            uVar49 = ((TVar6.Ptr)->ErrorContextGuid).B;
            uVar24 = ((TVar6.Ptr)->ErrorContextGuid).C;
            uVar43 = ((TVar6.Ptr)->ErrorContextGuid).D;
            (pFVar29->ErrorContextGuid).A = ((TVar6.Ptr)->ErrorContextGuid).A;
            (pFVar29->ErrorContextGuid).B = uVar49;
            (pFVar29->ErrorContextGuid).C = uVar24;
            (pFVar29->ErrorContextGuid).D = uVar43;
            pFVar29->ConstructionError = (*(FBatchState **)FVar42.Data)->Error;
            pFVar29->bSuccess = false;
          }
        }
        FVar42.Data = FVar42.Data + 8;
      } while( true );
    }
  }
  goto LAB_1431d086a;
LAB_1431d0854:
  QueryPerformanceCounter(&local_11f8);
  local_1258 = local_1258 + (local_11f8.QuadPart - (longlong)local_11f0);
LAB_1431d086a:
  iVar23 = (uint)local_12e0;
  pFVar47 = local_12e8.Data + (longlong)(int)(uint)local_12e0 * 8;
  FVar42.Data = local_12e8.Data;
  while( true ) {
    if ((uint)local_12e0 != iVar23) {
      local_12d5 = 0;
      `TCheckedPointerIterator<TUniquePtr<FFileConstructionState,TDefaultDelete<FFileConstructionState>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_12d5);
    }
    if (FVar42.Data == pFVar47) break;
    if (((*(FFileConstructionState **)FVar42.Data)->bSuccess != false) &&
       (this->bShouldAbort != (FThreadSafeBool)0x0)) {
      (*(FFileConstructionState **)FVar42.Data)->ConstructionError = Aborted;
      (*(FFileConstructionState **)FVar42.Data)->bSuccess = false;
    }
    local_1308 = local_1308 | (*(FFileConstructionState **)FVar42.Data)->bSuccess == false;
    FVar42.Data = FVar42.Data + 8;
  }
  if (local_1308 != 0) {
    (**(code **)((longlong)*this->CloudSource + 0x18))();
  }
  if ((this->bIsPaused != (FThreadSafeBool)0x0) || (local_1308 != 0)) goto LAB_1431d2995;
  do {
    local_12f0 = local_1308;
    uVar25 = 0;
    QueryPerformanceCounter(&local_11e8);
    Var14 = (unkuint9)(ulonglong)local_11e8.QuadPart;
    bVar19 = -1 < CpuChannel->Enabled;
    if (bVar19) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3601,"CFFC_ReadCheck",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                 ,0xe11);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3601);
    }
    bVar21 = false;
    if (((this->Configuration).bInstallToMemory == false) &&
       ((this->Configuration).bConstructInMemory == false)) {
      bVar20 = false;
      if (0 < local_1110.ArrayNum) {
        uVar49 = 0;
        local_1298 = 0;
        local_1240 = 0;
        uVar48 = uVar25;
        uVar52 = uVar25;
        iVar23 = local_1110.ArrayNum;
        do {
          uVar43 = (uint)uVar25;
          uVar24 = 0;
          if ((int)uVar43 < iVar23) {
            uVar24 = ~uVar43 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar23 = local_1110.ArrayNum, bVar20)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FVar35 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                    )&local_1110;
          if (local_1110.AllocatorInstance.SecondaryData !=
              (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
               )0x0) {
            FVar35 = local_1110.AllocatorInstance.SecondaryData;
          }
          uVar24 = 0;
          if ((int)uVar43 < iVar23) {
            uVar24 = ~uVar43 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar23 = local_1110.ArrayNum, bVar20)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FVar26 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                    )&local_1110;
          if (local_1110.AllocatorInstance.SecondaryData !=
              (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
               )0x0) {
            FVar26 = local_1110.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)(longlong)(int)uVar49 <
              (ulonglong)
              (*(longlong *)(uVar52 + 8 + (longlong)FVar26) -
              *(longlong *)(uVar52 + (longlong)FVar35))) {
            uVar49 = 0;
            if ((int)uVar43 < iVar23) {
              uVar49 = ~uVar43 >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar23 = local_1110.ArrayNum, bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar35 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                      )&local_1110;
            if (local_1110.AllocatorInstance.SecondaryData !=
                (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                 )0x0) {
              FVar35 = local_1110.AllocatorInstance.SecondaryData;
            }
            uVar49 = 0;
            if ((int)uVar43 < iVar23) {
              uVar49 = ~uVar43 >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar23 = local_1110.ArrayNum, bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar26 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                      )&local_1110;
            if (local_1110.AllocatorInstance.SecondaryData !=
                (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                 )0x0) {
              FVar26 = local_1110.AllocatorInstance.SecondaryData;
            }
            uVar49 = *(int *)((uchar *)((longlong)FVar26 + 8) + uVar52) -
                     *(int *)((longlong)FVar35 + uVar52);
            local_1298 = uVar43;
            local_1240 = uVar48;
          }
          uVar25 = (ulonglong)(uVar43 + 1);
          uVar48 = uVar48 + 1;
          uVar52 = uVar52 + 0x10;
        } while ((int)(uVar43 + 1) < iVar23);
        this = local_12b8;
        local_129c = uVar49;
        bVar20 = bVar21;
        if (0 < (int)uVar49) goto LAB_1431d0bcd;
      }
    }
    else {
      local_129c = 0;
      local_1298 = 0;
      local_1240 = 0;
LAB_1431d0bcd:
      uVar49 = (uint)local_12e0;
      lVar41 = (longlong)(int)(uint)local_12e0;
      local_1290 = (FFileConstructionState *)0x0;
      local_12ac = (uint)local_12e0;
      if ((uint)local_12e0 == 0) {
LAB_1431d0cfb:
        pFVar16 = local_12b8;
        lVar41 = 0;
        aVar5 = this->NextIndexToConstruct;
        lVar36 = (longlong)(int)aVar5;
        iVar45 = (uint)local_12e0;
        bVar20 = (uint)local_12e0 == 0;
        iVar23 = (this->ConstructionList).ArrayNum;
        local_1248 = iVar23;
        if ((((uint)local_12e0 == 0) || (iVar23 <= (int)aVar5)) ||
           (local_12b8->bAllowMultipleFilesInFlight == false)) {
LAB_1431d0e17:
          if ((!bVar20) || (iVar23 <= (int)aVar5)) {
            local_1294 = local_1294 & 0xff;
            this = local_12b8;
            bVar20 = false;
            if ((uint)local_12e0 == 0) {
              local_1294 = 0;
            }
            goto LAB_1431d0b97;
          }
        }
        else if (((local_12b8->Configuration).bInstallToMemory != false) ||
                ((local_12b8->Configuration).bConstructInMemory != false)) {
          pFVar47 = local_12e8.Data + (longlong)(int)(uint)local_12e0 * 8;
          FVar42.Data = local_12e8.Data;
          while( true ) {
            if ((uint)local_12e0 != iVar45) {
              local_12d4 = 0;
              `TCheckedPointerIterator<TUniquePtr<FFileConstructionState,TDefaultDelete<FFileConstructionState>_>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_12d4);
            }
            iVar23 = local_1248;
            if (FVar42.Data == pFVar47) break;
            pTVar27 = TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
                      ::FindChecked((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
                                     *)&pFVar16->MemoryOutputFiles,
                                    (*(FFileConstructionState **)FVar42.Data)->BuildFilename);
            lVar41 = lVar41 + pTVar27->ArrayNum;
            FVar42.Data = FVar42.Data + 8;
          }
          uVar49 = 0;
          if ((int)aVar5 < (pFVar16->ConstructionList).ArrayNum) {
            uVar49 = ~(uint)aVar5 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          bVar20 = (ulonglong)
                   (*(longlong *)
                     (*(longlong *)
                       ((local_12b8->ConstructionList).AllocatorInstance.Data + lVar36 * 0x10) +
                     0x58) + lVar41) < (ulonglong)local_12b8->IOBufferSize;
          uVar49 = local_12ac;
          goto LAB_1431d0e17;
        }
        this = local_12b8;
        uVar43 = 0;
        uVar24 = uVar43;
        if ((int)aVar5 < (local_12b8->ConstructionList).ArrayNum) {
          uVar24 = ~(uint)aVar5 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((*(int *)((this->ConstructionList).AllocatorInstance.Data + lVar36 * 0x10 + 8) != -1) &&
           (uVar49 != 0)) {
          if (((int)(uint)local_12e0 < 1) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TVar7.Ptr = *(FFileConstructionState **)local_12e8.Data;
          uVar49 = uVar43;
          if ((int)aVar5 < (this->ConstructionList).ArrayNum) {
            uVar49 = ~(uint)aVar5 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((TVar7.Ptr)->ConstructionIndex <=
              *(int *)((this->ConstructionList).AllocatorInstance.Data + lVar36 * 0x10 + 8)) {
            bVar20 = bVar21;
            if ((this->bShouldLogNextDependencyWait != false) &&
               (this->bShouldLogNextDependencyWait = false, 3 < (byte)LogBuildPatchServices._0_1_))
            {
              if ((int)aVar5 < (this->ConstructionList).ArrayNum) {
                uVar43 = ~(uint)aVar5 >> 0x1f;
              }
              if ((uVar43 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (((int)(uint)local_12e0 < 1) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar49 = 0;
              if ((int)aVar5 < (this->ConstructionList).ArrayNum) {
                uVar49 = ~(uint)aVar5 >> 0x1f;
              }
              if ((uVar49 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar49 = *(uint *)((this->ConstructionList).AllocatorInstance.Data + lVar36 * 0x10 + 8
                                );
              uVar24 = 0;
              if ((int)uVar49 < (this->Configuration).ConstructList.ArrayNum) {
                uVar24 = ~uVar49 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (((int)(uint)local_12e0 < 1) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar49 = 0;
              if ((*(FFileConstructionState **)local_12e8.Data)->ConstructionIndex <
                  (this->Configuration).ConstructList.ArrayNum) {
                uVar49 = (uint)~(*(FFileConstructionState **)local_12e8.Data)->ConstructionIndex >>
                         0x1f;
              }
              if ((uVar49 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar49 = 0;
              if ((int)aVar5 < (this->Configuration).ConstructList.ArrayNum) {
                uVar49 = ~(uint)aVar5 >> 0x1f;
              }
              if ((uVar49 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
              bVar20 = bVar21;
            }
            goto LAB_1431d0b97;
          }
        }
        LOCK();
        this->NextIndexToConstruct = (atomic<int>)((int)this->NextIndexToConstruct + 1);
        UNLOCK();
        if ((int)aVar5 < (this->Configuration).ConstructList.ArrayNum) {
          uVar43 = ~(uint)aVar5 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar47 = (this->Configuration).ConstructList.AllocatorInstance.Data;
        iVar45 = (this->Configuration).StagingDirectory.Data.ArrayNum;
        iVar51 = *(int *)(pFVar47 + lVar36 * 0x10 + 8);
        iVar23 = iVar51 + -1;
        if (iVar51 == 0) {
          iVar23 = 0;
        }
        if ((iVar45 != 0) || (iVar51 = 1, iVar23 + 1 == 0)) {
          iVar51 = 0;
        }
        local_1208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmptyWithSlack<wchar_t,int>
                  (&local_1208,
                   (wchar_t *)(this->Configuration).StagingDirectory.Data.AllocatorInstance.Data,
                   iVar45,0,iVar51 + iVar23 + 1);
        ::FString::PathAppend((FString *)&local_1208,*(wchar_t **)(pFVar47 + lVar36 * 0x10),iVar23);
        pFVar29 = (FFileConstructionState *)0x0;
        uVar24 = 0;
        uVar49 = uVar24;
        if ((int)aVar5 < (this->Configuration).ConstructList.ArrayNum) {
          uVar49 = ~(uint)aVar5 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar47 = (this->Configuration).ConstructList.AllocatorInstance.Data;
        uVar49 = uVar24;
        if ((int)aVar5 < (this->ConstructionList).ArrayNum) {
          uVar49 = ~(uint)aVar5 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar50 = (this->ConstructionList).AllocatorInstance.Data;
        pFVar28 = ::operator_new(0xf8);
        if (pFVar28 != (FFileConstructionState *)0x0) {
          pFVar29 = FFileConstructionState::FFileConstructionState
                              (pFVar28,*(FFileManifest **)(pFVar50 + lVar36 * 0x10),
                               (FString *)(pFVar47 + lVar36 * 0x10),(FString *)&local_1208);
        }
        pFVar29->BaseReferenceIndex = 0;
        local_12d0 = pFVar29;
        if (aVar5 != (atomic<int>)0x0) {
          uVar49 = (int)aVar5 - 1;
          if ((int)uVar49 < (this->FileCompletionPositions).ArrayNum) {
            uVar24 = ~uVar49 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_12d0->BaseReferenceIndex =
               *(int *)((this->FileCompletionPositions).AllocatorInstance.Data +
                       (longlong)(int)uVar49 * 4);
        }
        local_12d0->ConstructionIndex = (int)aVar5;
        if (-1 < BookmarkChannel->Enabled) {
          if (__BookmarkPoint3724 == false) {
            FMiscTrace::OutputBookmarkSpec
                      (&__BookmarkPoint3724,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                       ,0xe8c,L"Starting File: %s [%u]");
            __BookmarkPoint3724 = true;
          }
          iVar23 = (local_12d0->FileManifest->ChunkParts).ArrayNum;
          if ((local_12d0->BuildFilename->Data).ArrayNum == 0) {
            _Str = L"";
          }
          else {
            _Str = (wchar_t *)(local_12d0->BuildFilename->Data).AllocatorInstance.Data;
          }
          uVar49 = CallstackTrace_GetCurrentId();
          if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
            local_1098[0] = '\x02';
            local_1098[1] = 0xc2;
            local_1095._0_2_ = 0;
            uVar25 = 9;
            piVar31 = (int *)(local_1095 + 2);
          }
          else {
            sVar30 = wcslen(_Str);
            iVar45 = (int)sVar30 * 2 + 2;
            if (0xffff < iVar45) {
              iVar45 = 0xffff;
            }
            uVar25 = (longlong)iVar45 + 7;
            if (0x1000 < uVar25) goto LAB_1431d15b9;
            local_1098[0] = '\x02';
            local_1098[1] = 0xc2;
            sVar30 = wcslen(_Str);
            uVar24 = (int)sVar30 * 2 + 2;
            uVar48 = (ulonglong)uVar24;
            if (0xffff < (int)uVar24) {
              uVar48 = 0xffff;
            }
            uVar52 = uVar48 & 0xffff;
            memcpy(local_1095,_Str,uVar52);
            if ((short)uVar48 == -1) {
              local_1288 = 0x2e002e;
              uStack_1284 = 0x2e;
              *(undefined8 *)(local_10a0 + (uVar52 - ((uint)uVar52 & 1)) + 3) = 0x2e002e002e;
            }
            piVar31 = (int *)(local_1095 + uVar52);
          }
          local_1098[2] = 0x44;
          *piVar31 = iVar23;
          if (((longlong)piVar31 + (4 - (longlong)local_1098) != uVar25) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PayloadBufferPtr - Buffer == FormatArgsSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                                  ,0x44,L""), bVar20)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((ushort)uVar25 != 0) {
            FMiscTrace::OutputBookmarkInternal
                      (&__BookmarkPoint3724,uVar49,(ushort)uVar25,local_1098);
          }
        }
LAB_1431d15b9:
        if (3 < (byte)LogBuildPatchServices._0_1_) {
          local_1150.Object = (FCulture *)0x0;
          local_1150.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar32 = FText::AsNumber(&local_1130,local_12d0->FileManifest->FileSize,
                                    (FNumberFormattingOptions *)0x0,&local_1150);
          pFVar33 = FText::ToString(pFVar32);
          ::FString::FString(&local_1170,pFVar33);
          if (local_1130.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1130.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1150.SharedReferenceCount.ReferenceController);
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          if (local_1170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1170.Data.AllocatorInstance.Data);
          }
        }
        StartFile(this,local_12d0,local_11e0);
        if (local_12d0->bSkippedConstruction == false) {
          if (local_12ac == 0) {
            (**(code **)((longlong)*this->FileConstructorStat + 0x20))
                      (this->FileConstructorStat,local_12d0->BuildFilename);
          }
          pFVar29 = local_12d0;
          local_1290 = local_12d0;
          if (((local_12e8.Data <= (FScriptContainerElement *)&local_12d0) &&
              ((FScriptContainerElement *)&local_12d0 <
               local_12e8.Data + (longlong)local_12e0._4_4_ * 8)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar23 = (uint)local_12e0;
          if ((uint)local_12e0 == local_12e0._4_4_) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_12e8,(int *)((longlong)&local_12e0 + 4));
          }
          local_12e0 = CONCAT44(local_12e0._4_4_,iVar23 + 1);
          *(FFileConstructionState **)(local_12e8.Data + (longlong)iVar23 * 8) = local_12d0;
          local_12d0 = (FFileConstructionState *)0x0;
        }
        else {
          bVar21 = true;
          pFVar29 = local_1290;
        }
        pFVar28 = local_12d0;
        if (local_12d0 != (FFileConstructionState *)0x0) {
          pFVar47 = (local_12d0->NewFilename).Data.AllocatorInstance.Data;
          if (pFVar47 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar47);
          }
          pFVar8 = (pFVar28->NewFile).Ptr;
          if (pFVar8 != (FArchive *)0x0) {
            (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
          }
          FSHA1::~FSHA1(&pFVar28->HashState);
          ::operator_delete(pFVar28,0xf8);
        }
        if (local_1208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1208.AllocatorInstance.Data);
        }
        bVar20 = bVar21;
        if (pFVar29 == (FFileConstructionState *)0x0) goto LAB_1431d0b97;
      }
      else {
        uVar44 = (uint)local_12e0 - 1;
        uVar43 = ~uVar44 >> 0x1f;
        uVar24 = 0;
        if ((int)uVar44 < (int)(uint)local_12e0) {
          uVar24 = uVar43;
        }
        if (uVar24 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        iVar23 = *(int *)(*(longlong *)
                           (*(longlong *)(local_12e8.Data + (longlong)(int)uVar44 * 8) + 0xd8) +
                         0x50);
        uVar24 = 0;
        if ((int)uVar44 < (int)(uint)local_12e0) {
          uVar24 = uVar43;
        }
        uVar40 = (uint)local_12e0;
        if (uVar24 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar40 = (uint)local_12e0;
        }
        if (iVar23 <= *(int *)(*(longlong *)(local_12e8.Data + (longlong)(int)uVar44 * 8) + 0xc4))
        goto LAB_1431d0cfb;
        uVar24 = 0;
        if ((int)(uVar49 - 1) < (int)uVar40) {
          uVar24 = uVar43;
        }
        if ((uVar24 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar29 = *(FFileConstructionState **)(local_12e8.Data + lVar41 * 8 + -8);
        local_1290 = pFVar29;
        if (pFVar29 == (FFileConstructionState *)0x0) goto LAB_1431d0cfb;
      }
      pFVar38 = (FBatchState *)0x0;
      bVar20 = bVar21;
      if (pFVar29->bSuccess == false) {
        local_1308 = 1;
      }
      else {
        pFVar10 = pFVar29->FileManifest;
        iVar23 = (pFVar10->ChunkParts).ArrayNum;
        if (iVar23 == 0) {
          pFVar34 = ::operator_new(0xa0);
          if (pFVar34 != (FBatchState *)0x0) {
            pFVar34->BatchId = 0;
            *(undefined8 *)&pFVar34->Requests = 0;
            *(undefined8 *)&(pFVar34->Requests).field_0x8 = 0;
            *(undefined8 *)&(pFVar34->Requests).field_0x20 = 0;
            *(undefined4 *)&(pFVar34->Requests).field_0x28 = 0;
            *(undefined4 *)&(pFVar34->Requests).field_0x2c = 0x80;
            *(undefined4 *)&(pFVar34->Requests).field_0x30 = 0xffffffff;
            *(undefined4 *)&(pFVar34->Requests).field_0x34 = 0;
            *(undefined8 *)&(pFVar34->Requests).field_0x40 = 0;
            *(undefined4 *)&(pFVar34->Requests).field_0x48 = 0;
            pFVar34->PendingRequestCount = (atomic<int>)0x0;
            pFVar34->FailedRequestCount = (atomic<int>)0x0;
            (pFVar34->BatchBuffer).Data = (void *)0x0;
            (pFVar34->BatchBuffer).Size = 0;
            pFVar34->Error = None;
            (pFVar34->ErrorContextGuid).A = 0;
            (pFVar34->ErrorContextGuid).B = 0;
            (pFVar34->ErrorContextGuid).C = 0;
            (pFVar34->ErrorContextGuid).D = 0;
            pFVar34->OwningFile = (FFileConstructionState *)0x0;
            pFVar34->StartChunkPartIndex = 0;
            pFVar34->ChunkCount = 0;
            pFVar34->bIsEmptyFileSentinel = false;
            pFVar34->bNeedsWrite = false;
            pFVar34->bIsReading = false;
            pFVar34->bIsWriting = false;
            pFVar34->bIsFinished = (atomic<bool>)0x1;
            LOCK();
            UNLOCK();
            aVar5 = (atomic<int>)
                    ((int)`public:___cdecl_FBatchState::FBatchState(void)___ptr64'::__l2::
                          UniqueBatchId + 1);
            pFVar34->BatchId =
                 (int)`public:___cdecl_FBatchState::FBatchState(void)___ptr64'::__l2::UniqueBatchId;
            `public:___cdecl_FBatchState::FBatchState(void)___ptr64'::__l2::UniqueBatchId = aVar5;
            pFVar38 = pFVar34;
          }
          pFVar38->bNeedsWrite = false;
          pFVar38->bIsReading = false;
          pFVar38->OwningFile = pFVar29;
          pFVar38->bIsEmptyFileSentinel = true;
          pFVar38->bIsFinished = (atomic<bool>)0x0;
          pFVar29->OutstandingBatches = pFVar29->OutstandingBatches + 1;
          local_12a8 = pFVar38;
          if (((local_1300.Data <= (FScriptContainerElement *)&local_12a8) &&
              ((FScriptContainerElement *)&local_12a8 <
               local_1300.Data + (longlong)local_12f8._4_4_ * 8)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar23 = (int)local_12f8;
          if ((int)local_12f8 == local_12f8._4_4_) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_1300,(int *)((longlong)&local_12f8 + 4));
          }
          local_12f8 = CONCAT44(local_12f8._4_4_,iVar23 + 1);
          *(FBatchState **)(local_1300.Data + (longlong)iVar23 * 8) = local_12a8;
          local_1308 = local_12f0;
          local_12a8 = (FBatchState *)0x0;
          bVar20 = true;
        }
        else if (((this->Configuration).bInstallToMemory == false) &&
                ((this->Configuration).bConstructInMemory == false)) {
          uVar49 = pFVar29->NextChunkPartToRead;
          uVar24 = local_129c;
          if (this->MaxWriteBatchSize < local_129c) {
            uVar24 = this->MaxWriteBatchSize;
          }
          uVar43 = 0;
          if ((int)uVar49 < iVar23) {
            uVar43 = ~uVar49 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_1308 = local_12f0;
          uVar25 = (ulonglong)pFVar29->NextChunkPartToRead;
          iVar23 = (pFVar10->ChunkParts).ArrayNum;
          uVar49 = *(uint *)((pFVar10->ChunkParts).AllocatorInstance.Data +
                            (longlong)(int)uVar49 * 0x18 + 0x14);
          if (pFVar29->NextChunkPartToRead < iVar23) {
            lVar41 = uVar25 * 0x18;
            do {
              uVar44 = (uint)uVar25;
              uVar43 = 0;
              if ((int)uVar44 < iVar23) {
                uVar43 = ~uVar44 >> 0x1f;
              }
              if ((uVar43 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar43 = (int)pFVar38 +
                       *(int *)((pFVar10->ChunkParts).AllocatorInstance.Data + lVar41 + 0x14);
              pFVar38 = (FBatchState *)(ulonglong)uVar43;
              pFVar29 = local_1290;
              if (local_12b8->MaxWriteBatchSize <= uVar43) {
                pFVar38 = (FBatchState *)(ulonglong)local_12b8->MaxWriteBatchSize;
                break;
              }
              iVar23 = (pFVar10->ChunkParts).ArrayNum;
              uVar25 = (ulonglong)(uVar44 + 1);
              lVar41 = lVar41 + 0x18;
            } while ((int)(uVar44 + 1) < iVar23);
          }
          if ((uVar24 < uVar49) && ((int)local_12f8 == 0)) {
            pFVar29->bSuccess = false;
            pFVar29->ConstructionError = InternalConsistencyError;
            if (1 < (byte)LogBuildPatchServices._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
            }
            local_1308 = 1;
          }
          this = local_12b8;
          if ((uint)pFVar38 <= uVar24) {
            local_12c8 = ::operator_new(0xa0);
            uVar49 = local_1298;
            if (local_12c8 != (FBatchState *)0x0) {
              local_12c8->BatchId = 0;
              *(undefined8 *)&local_12c8->Requests = 0;
              *(undefined8 *)&(local_12c8->Requests).field_0x8 = 0;
              *(undefined8 *)&(local_12c8->Requests).field_0x20 = 0;
              *(undefined4 *)&(local_12c8->Requests).field_0x28 = 0;
              *(undefined4 *)&(local_12c8->Requests).field_0x2c = 0x80;
              *(undefined4 *)&(local_12c8->Requests).field_0x34 = 0;
              *(undefined4 *)&(local_12c8->Requests).field_0x30 = 0xffffffff;
              *(undefined8 *)&(local_12c8->Requests).field_0x40 = 0;
              *(undefined4 *)&(local_12c8->Requests).field_0x48 = 0;
              local_12c8->PendingRequestCount = (atomic<int>)0x0;
              local_12c8->FailedRequestCount = (atomic<int>)0x0;
              (local_12c8->BatchBuffer).Data = (void *)0x0;
              (local_12c8->BatchBuffer).Size = 0;
              local_12c8->Error = None;
              (local_12c8->ErrorContextGuid).A = 0;
              (local_12c8->ErrorContextGuid).B = 0;
              (local_12c8->ErrorContextGuid).C = 0;
              (local_12c8->ErrorContextGuid).D = 0;
              local_12c8->OwningFile = (FFileConstructionState *)0x0;
              local_12c8->StartChunkPartIndex = 0;
              local_12c8->ChunkCount = 0;
              local_12c8->bIsEmptyFileSentinel = false;
              local_12c8->bNeedsWrite = false;
              local_12c8->bIsReading = false;
              local_12c8->bIsWriting = false;
              local_12c8->bIsFinished = (atomic<bool>)0x1;
              LOCK();
              UNLOCK();
              aVar5 = (atomic<int>)
                      ((int)`public:___cdecl_FBatchState::FBatchState(void)___ptr64'::__l2::
                            UniqueBatchId + 1);
              local_12c8->BatchId =
                   (int)`public:___cdecl_FBatchState::FBatchState(void)___ptr64'::__l2::
                        UniqueBatchId;
              `public:___cdecl_FBatchState::FBatchState(void)___ptr64'::__l2::UniqueBatchId = aVar5;
            }
            lVar41 = (longlong)(int)local_1298;
            local_12c8->bNeedsWrite = true;
            uVar44 = ~local_1298;
            local_12c8->bIsReading = true;
            local_12c8->OwningFile = pFVar29;
            uVar43 = 0;
            if ((int)local_1298 < local_1110.ArrayNum) {
              uVar43 = uVar44 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar25 = local_1240;
            this = local_12b8;
            FVar35 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                      )&local_1110;
            if (local_1110.AllocatorInstance.SecondaryData !=
                (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                 )0x0) {
              FVar35 = local_1110.AllocatorInstance.SecondaryData;
            }
            lVar36 = local_1240 * 0x10;
            (local_12c8->BatchBuffer).Data =
                 local_1238.AllocatorInstance.Data + *(longlong *)(lVar36 + (longlong)FVar35);
            (local_12c8->BatchBuffer).Size = (ulonglong)uVar24;
            local_12c8->bIsFinished = (atomic<bool>)0x0;
            StartReadBatch(local_12b8,local_1290,local_12c8);
            uVar11 = (local_12c8->BatchBuffer).Size;
            uVar24 = 0;
            if ((int)uVar49 < local_1110.ArrayNum) {
              uVar24 = uVar44 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar35 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                      )&local_1110;
            if (local_1110.AllocatorInstance.SecondaryData !=
                (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                 )0x0) {
              FVar35 = local_1110.AllocatorInstance.SecondaryData;
            }
            plVar3 = (longlong *)(lVar36 + (longlong)FVar35);
            *plVar3 = *plVar3 + uVar11;
            uVar24 = 0;
            if ((int)uVar49 < local_1110.ArrayNum) {
              uVar24 = ~uVar49 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar35 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                      )&local_1110;
            if (local_1110.AllocatorInstance.SecondaryData !=
                (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                 )0x0) {
              FVar35 = local_1110.AllocatorInstance.SecondaryData;
            }
            uVar24 = 0;
            if ((int)uVar49 < local_1110.ArrayNum) {
              uVar24 = ~uVar49 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar26 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                      )&local_1110;
            if (local_1110.AllocatorInstance.SecondaryData !=
                (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                 )0x0) {
              FVar26 = local_1110.AllocatorInstance.SecondaryData;
            }
            if (*(longlong *)((longlong)FVar26 + uVar25 * 0x10) ==
                *(longlong *)((uchar *)((longlong)FVar35 + 8) + uVar25 * 0x10)) {
              uVar24 = 0;
              if ((int)uVar49 < local_1110.ArrayNum) {
                uVar24 = ~uVar49 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              FVar35 = (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                        )&local_1110;
              if (local_1110.AllocatorInstance.SecondaryData !=
                  (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
                   )0x0) {
                FVar35 = local_1110.AllocatorInstance.SecondaryData;
              }
              pvVar37 = (void *)(lVar41 * 0x10 + (longlong)FVar35);
              iVar23 = (local_1110.ArrayNum - uVar49) + -1;
              if (iVar23 != 0) {
                memmove(pvVar37,(void *)((longlong)pvVar37 + 0x10),(longlong)iVar23 << 4);
              }
              local_1110.ArrayNum = local_1110.ArrayNum + -1;
              UE::Core::Private::
              ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range>_>
                        (0x10,8,&local_1110.AllocatorInstance,local_1110.ArrayNum,
                         &local_1110.ArrayMax);
              `BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l2::<lambda_1>::
              operator()(&local_12d3,&local_1110);
            }
            if (6 < (byte)LogBuildPatchServices._0_1_) {
              local_1140.Object = (FCulture *)0x0;
              local_1140.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar32 = FText::AsNumber(&local_1120,(local_12c8->BatchBuffer).Size,
                                        (FNumberFormattingOptions *)0x0,&local_1140);
              pFVar33 = FText::ToString(pFVar32);
              ::FString::FString(&local_1160,pFVar33);
              if (local_1120.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1120.TextData.Reference + 0x10))();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_1140.SharedReferenceCount.ReferenceController);
              UE::Logging::Private::BasicLog<7>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
              if (local_1160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1160.Data.AllocatorInstance.Data);
              }
            }
            if (((local_1300.Data <= (FScriptContainerElement *)&local_12c8) &&
                ((FScriptContainerElement *)&local_12c8 <
                 local_1300.Data + (longlong)local_12f8._4_4_ * 8)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar23 = (int)local_12f8;
            if ((int)local_12f8 == local_12f8._4_4_) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_1300,(int *)((longlong)&local_12f8 + 4));
            }
            local_12f8 = CONCAT44(local_12f8._4_4_,iVar23 + 1);
            *(FBatchState **)(local_1300.Data + (longlong)iVar23 * 8) = local_12c8;
            local_12c8 = (FBatchState *)0x0;
            bVar20 = true;
          }
        }
        else {
          pTVar27 = TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
                    ::FindChecked((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
                                   *)&this->MemoryOutputFiles,pFVar29->BuildFilename);
          pFVar34 = ::operator_new(0xa0);
          if (pFVar34 != (FBatchState *)0x0) {
            pFVar34->BatchId = 0;
            *(undefined8 *)&pFVar34->Requests = 0;
            *(undefined8 *)&(pFVar34->Requests).field_0x8 = 0;
            *(undefined8 *)&(pFVar34->Requests).field_0x20 = 0;
            *(undefined4 *)&(pFVar34->Requests).field_0x28 = 0;
            *(undefined4 *)&(pFVar34->Requests).field_0x2c = 0x80;
            *(undefined4 *)&(pFVar34->Requests).field_0x30 = 0xffffffff;
            *(undefined4 *)&(pFVar34->Requests).field_0x34 = 0;
            *(undefined8 *)&(pFVar34->Requests).field_0x40 = 0;
            *(undefined4 *)&(pFVar34->Requests).field_0x48 = 0;
            pFVar34->PendingRequestCount = (atomic<int>)0x0;
            pFVar34->FailedRequestCount = (atomic<int>)0x0;
            (pFVar34->BatchBuffer).Data = (void *)0x0;
            (pFVar34->BatchBuffer).Size = 0;
            pFVar34->Error = None;
            (pFVar34->ErrorContextGuid).A = 0;
            (pFVar34->ErrorContextGuid).B = 0;
            (pFVar34->ErrorContextGuid).C = 0;
            (pFVar34->ErrorContextGuid).D = 0;
            pFVar34->OwningFile = (FFileConstructionState *)0x0;
            pFVar34->StartChunkPartIndex = 0;
            pFVar34->ChunkCount = 0;
            pFVar34->bIsEmptyFileSentinel = false;
            pFVar34->bNeedsWrite = false;
            pFVar34->bIsReading = false;
            pFVar34->bIsWriting = false;
            pFVar34->bIsFinished = (atomic<bool>)0x1;
            LOCK();
            UNLOCK();
            aVar5 = (atomic<int>)
                    ((int)`public:___cdecl_FBatchState::FBatchState(void)___ptr64'::__l2::
                          UniqueBatchId + 1);
            pFVar34->BatchId =
                 (int)`public:___cdecl_FBatchState::FBatchState(void)___ptr64'::__l2::UniqueBatchId;
            `public:___cdecl_FBatchState::FBatchState(void)___ptr64'::__l2::UniqueBatchId = aVar5;
            pFVar38 = pFVar34;
          }
          pFVar38->bNeedsWrite = true;
          pFVar38->bIsReading = true;
          pFVar38->OwningFile = pFVar29;
          pFVar38->bIsFinished = (atomic<bool>)0x0;
          uVar11 = pFVar29->FileManifest->FileSize;
          (pFVar38->BatchBuffer).Data = (pTVar27->AllocatorInstance).Data;
          (pFVar38->BatchBuffer).Size = uVar11;
          local_12c0 = pFVar38;
          StartReadBatch(this,pFVar29,pFVar38);
          if ((local_12c0->BatchBuffer).Size == pFVar29->FileManifest->FileSize) {
            bVar21 = true;
            if (((local_1300.Data <= (FScriptContainerElement *)&local_12c0) &&
                ((FScriptContainerElement *)&local_12c0 <
                 local_1300.Data + (longlong)local_12f8._4_4_ * 8)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar23 = (int)local_12f8;
            if ((int)local_12f8 == local_12f8._4_4_) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_1300,(int *)((longlong)&local_12f8 + 4));
            }
            local_12f8 = CONCAT44(local_12f8._4_4_,iVar23 + 1);
            *(FBatchState **)(local_1300.Data + (longlong)iVar23 * 8) = local_12c0;
            local_1308 = local_12f0;
            local_12c0 = (FBatchState *)0x0;
          }
          else {
            pFVar29->bSuccess = false;
            pFVar29->ConstructionError = InternalConsistencyError;
            local_1308 = 1;
            if (1 < (byte)LogBuildPatchServices._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
            }
          }
          pFVar38 = local_12c0;
          bVar20 = bVar21;
          if (local_12c0 != (FBatchState *)0x0) {
            *(undefined4 *)&(local_12c0->Requests).field_0x48 = 0;
            pvVar37 = *(void **)&(local_12c0->Requests).field_0x40;
            if (pvVar37 != (void *)0x0) {
              FMemory::Free(pvVar37);
            }
            TSparseArray<TSparseSetElement<TTuple<FGuid,FRequestInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FGuid,FRequestInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FGuid,FRequestInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)&pFVar38->Requests);
            ::operator_delete(pFVar38,0xa0);
          }
        }
      }
    }
LAB_1431d0b97:
    QueryPerformanceCounter(&local_11d8);
    dVar13 = ((double)(ulonglong)local_11d8.QuadPart - (double)(unkint9)Var14) + (double)local_1260;
    lVar41 = 0;
    if ((dVar15 <= dVar13) && (dVar13 = dVar13 - dVar15, dVar13 < dVar15)) {
      lVar41 = -0x8000000000000000;
    }
    local_1260 = (longlong)dVar13 + lVar41;
    if (bVar19) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  } while (bVar20);
  if ((int)local_12f8 == 0) goto LAB_1431d2995;
  if ((int)local_12f8 < 1) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  if ((*(FBatchState **)local_1300.Data)->bNeedsWrite == false) goto LAB_1431d2995;
  if (((int)local_12f8 < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((*(FBatchState **)local_1300.Data)->bIsReading != false) goto LAB_1431d2995;
  QueryPerformanceCounter(&local_11d0);
  LVar17 = local_11d0;
  if (((int)(uint)local_12e0 < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  TVar7.Ptr = *(FFileConstructionState **)local_12e8.Data;
  if (((this->Configuration).bInstallToMemory == false) &&
     ((this->Configuration).bConstructInMemory == false)) {
    if (((int)local_12f8 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (*(FBatchState **)local_1300.Data)->bNeedsWrite = false;
    if (((int)local_12f8 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (*(FBatchState **)local_1300.Data)->bIsWriting = true;
    if (((int)local_12f8 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (*(FBatchState **)local_1300.Data)->bIsFinished = (atomic<bool>)0x0;
    if (6 < (byte)LogBuildPatchServices._0_1_) {
      if ((int)local_12f8 < 1) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      iVar23 = (int)local_12f8;
      if ((int)local_12f8 < 1) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar23 = (int)local_12f8;
      }
      if (iVar23 < 1) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar23 = (int)local_12f8;
      }
      if ((iVar23 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    if (((int)local_12f8 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar8 = ((TVar7.Ptr)->NewFile).Ptr;
    TVar6.Ptr = *(FBatchState **)local_1300.Data;
    local_10c8[0] = (code *)0x0;
    local_10a0 = (undefined1  [8])0x0;
    local_10a0 = (undefined1  [8])FMemory::Malloc(0x20,8);
    ((FEvent *)local_10a0)->_padding_ =
         (longlong)
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest'::`2'::<lambda_1>,1,1>
          ::_vftable_;
    *(FBuildPatchFileConstructor **)&((FEvent *)local_10a0)->EventId = this;
    ((FEvent *)((longlong)local_10a0 + 0x10))->_padding_ = (longlong)pFVar8;
    *(FBatchState **)&((FEvent *)((longlong)local_10a0 + 0x10))->EventId = TVar6.Ptr;
    if (&((FEvent *)local_10a0)->EventId != (uint *)0x0) {
      local_10c8[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest'::__l2::<lambda_1>,void,bool>
           ::Call;
    }
    QueueGenericThreadTask
              (this,(int)this->WriteThreadIndex,(TUniqueFunction<void___cdecl(bool)> *)local_10c8);
    if (local_10c8[0] != (code *)0x0) {
      auVar39 = (undefined1  [8])(local_10c8 + 2);
      if (local_10a0 != (undefined1  [8])0x0) {
        auVar39 = local_10a0;
      }
      goto LAB_1431d2870;
    }
  }
  else {
    if (((int)local_12f8 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (*(FBatchState **)local_1300.Data)->bNeedsWrite = false;
    if (((int)local_12f8 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (*(FBatchState **)local_1300.Data)->bIsWriting = true;
    if (((int)local_12f8 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (*(FBatchState **)local_1300.Data)->bIsFinished = (atomic<bool>)0x1;
    auVar39 = (undefined1  [8])this->WakeUpDispatchThreadEvent;
LAB_1431d2870:
    (**(code **)((code *)((FEvent *)auVar39)->_padding_ + 0x10))();
  }
  QueryPerformanceCounter(&local_11c8);
  LVar18 = local_11c8;
  local_1280 = local_1280 + (local_11c8.QuadPart - (longlong)LVar17);
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3950,"CFFC_Hash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
               ,0xf6e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3950);
  }
  if ((int)local_12f8 < 1) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  uVar11 = ((*(FBatchState **)local_1300.Data)->BatchBuffer).Size;
  if (((int)local_12f8 < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FSHA1::Update(&(TVar7.Ptr)->HashState,((*(FBatchState **)local_1300.Data)->BatchBuffer).Data,
                uVar11);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  QueryPerformanceCounter(&local_11c0);
  local_1270 = local_1270 + (local_11c0.QuadPart - (longlong)LVar18);
LAB_1431d2995:
  if ((uint)local_12e0 != 0) {
    if (((int)(uint)local_12e0 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    TVar7.Ptr = *(FFileConstructionState **)local_12e8.Data;
    this_00 = &(TVar7.Ptr)->ProgressLock;
    LOCK();
    bVar19 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar19) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar19) {
      UE::FMutex::LockSlow(this_00);
    }
    uVar11 = (TVar7.Ptr)->Progress;
    LOCK();
    aVar4 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
    if (uVar11 != (TVar7.Ptr)->LastSeenProgress) {
      this->ByteProcessed = this->ByteProcessed + (uVar11 - (TVar7.Ptr)->LastSeenProgress);
      (**(code **)((longlong)*this->FileConstructorStat + 0x40))
                (this->FileConstructorStat,this->ByteProcessed);
      (TVar7.Ptr)->LastSeenProgress = uVar11;
      (**(code **)((longlong)*this->FileConstructorStat + 0x28))
                (this->FileConstructorStat,(TVar7.Ptr)->BuildFilename,uVar11);
    }
  }
  local_12b0 = -1;
  QueryPerformanceCounter(&local_11b0);
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3992,"CFFC_TickCloud",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
               ,0xf98);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3992);
  }
  (**(code **)((longlong)*this->CloudSource + 0x20))();
  QueryPerformanceCounter(&local_11b8);
  local_1268 = local_1268 + (local_11b8.QuadPart - (longlong)local_11b0);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  iVar51 = 0;
  iVar23 = (int)local_12f8;
  pFVar47 = local_1300.Data + (longlong)(int)local_12f8 * 8;
  FVar42.Data = local_1300.Data;
  iVar45 = iVar51;
  while( true ) {
    if ((int)local_12f8 != iVar23) {
      local_12d2[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FBatchState,TDefaultDelete<FBatchState>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_12d2);
    }
    if (FVar42.Data == pFVar47) break;
    iVar51 = iVar51 + (uint)((*(FBatchState **)FVar42.Data)->bIsReading != false);
    iVar45 = iVar45 + (uint)((*(FBatchState **)FVar42.Data)->bIsWriting != false);
    FVar42.Data = FVar42.Data + 8;
  }
  if ((iVar51 == 0) && (iVar45 == 0)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  if ((local_1308 == 0) || (bVar19)) {
    lVar41 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar41 + 0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
      __TraceCounter4043.Value = 0;
      __TraceCounter4043.CounterName = L"BPS.FC.ActiveFiles";
      __TraceCounter4043.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter4043.CounterFlags = '\0';
      __TraceCounter4043.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"BPS.FC.ActiveFiles",TraceCounterType_Int,TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter4043.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l147::
             _dynamic_atexit_destructor_for____TraceCounter4043__);
      _Init_thread_footer(&::_TSS6);
    }
    lVar36 = (longlong)(int)(uint)local_12e0;
    if ((__TraceCounter4043.Value != lVar36) &&
       (__TraceCounter4043.Value = lVar36, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter4043.CounterId == (atomic<unsigned_int>)0x0) {
        uVar22 = FCountersTrace::OutputInitCounter
                           (__TraceCounter4043.CounterName,TraceCounterType_Int,
                            __TraceCounter4043.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter4043.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter4043.CounterId._2_2_ = 0;
          __TraceCounter4043.CounterId._0_2_ = uVar22;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter4043.CounterId._0_2_,__TraceCounter4043.Value);
    }
    if ((*(int *)(lVar41 + 0x9d4c) < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
      __TraceCounter4044.Value = 0;
      __TraceCounter4044.CounterName = L"BPS.FC.ActiveReadBatches";
      __TraceCounter4044.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter4044.CounterFlags = '\0';
      __TraceCounter4044.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"BPS.FC.ActiveReadBatches",TraceCounterType_Int,TraceCounterDisplayHint_None)
      ;
      LOCK();
      __TraceCounter4044.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l147::
             _dynamic_atexit_destructor_for____TraceCounter4044__);
      _Init_thread_footer(&::_TSS7);
    }
    lVar41 = (longlong)iVar51;
    if ((__TraceCounter4044.Value != lVar41) &&
       (__TraceCounter4044.Value = lVar41, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter4044.CounterId == (atomic<unsigned_int>)0x0) {
        uVar22 = FCountersTrace::OutputInitCounter
                           (__TraceCounter4044.CounterName,TraceCounterType_Int,
                            __TraceCounter4044.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter4044.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter4044.CounterId._2_2_ = 0;
          __TraceCounter4044.CounterId._0_2_ = uVar22;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter4044.CounterId._0_2_,__TraceCounter4044.Value);
    }
    if ((char)local_1294 == '\0') goto LAB_1431d2e6e;
    if (bVar19) {
      if (local_12b0 == -1) {
        local_12b0 = 15000;
      }
      QueryPerformanceCounter(&local_11a0);
      bVar19 = -1 < CpuChannel->Enabled;
      if (bVar19) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId4055,"CFFC_Waiting",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                   ,0xfd7);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4055);
      }
      (**(code **)(this->WakeUpDispatchThreadEvent->_padding_ + 0x20))();
      QueryPerformanceCounter(&local_11a8);
      local_1278 = local_1278 + (local_11a8.QuadPart - (longlong)local_11a0);
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    goto LAB_1431d0110;
  }
LAB_1431d2e6e:
  iVar23 = (uint)local_12e0;
  if ((uint)local_12e0 != 0) {
    pFVar47 = local_12e8.Data + (longlong)(int)(uint)local_12e0 * 8;
    FVar42.Data = local_12e8.Data;
    while( true ) {
      if ((uint)local_12e0 != iVar23) {
        `TCheckedPointerIterator<TUniquePtr<FFileConstructionState,TDefaultDelete<FFileConstructionState>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_12a0);
      }
      if (FVar42.Data == pFVar47) break;
      TVar7.Ptr = *(FFileConstructionState **)FVar42.Data;
      if (((TVar7.Ptr)->bSuccess == false) && ((TVar7.Ptr)->ConstructionError != Aborted)) {
        CompleteConstructedFile(this,TVar7.Ptr);
      }
      FVar42.Data = FVar42.Data + 8;
    }
    iVar23 = (uint)local_12e0;
    pFVar47 = local_12e8.Data + (longlong)(int)(uint)local_12e0 * 8;
    FVar42.Data = local_12e8.Data;
    while( true ) {
      if ((uint)local_12e0 != iVar23) {
        `TCheckedPointerIterator<TUniquePtr<FFileConstructionState,TDefaultDelete<FFileConstructionState>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_129f);
      }
      if (FVar42.Data == pFVar47) break;
      TVar7.Ptr = *(FFileConstructionState **)FVar42.Data;
      if ((TVar7.Ptr)->bSuccess == false) {
        if ((TVar7.Ptr)->ConstructionError != Aborted) goto LAB_1431d2f2f;
        CompleteConstructedFile(this,TVar7.Ptr);
        FVar42.Data = FVar42.Data + 8;
      }
      else {
        (TVar7.Ptr)->bSuccess = false;
        (*(FFileConstructionState **)FVar42.Data)->ConstructionError = Aborted;
        CompleteConstructedFile(this,*(FFileConstructionState **)FVar42.Data);
LAB_1431d2f2f:
        FVar42.Data = FVar42.Data + 8;
      }
    }
  }
  QueryPerformanceCounter(&local_1198);
  if (3 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  if (local_1110.AllocatorInstance.SecondaryData !=
      (ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
       )0x0) {
    FMemory::Free((void *)local_1110.AllocatorInstance.SecondaryData);
  }
  DestructItems<TUniquePtr<FBatchState,TDefaultDelete<FBatchState>_>,int>
            ((TUniquePtr<FBatchState,TDefaultDelete<FBatchState>_> *)local_1300.Data,(int)local_12f8
            );
  if (local_1300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1300.Data);
  }
  DestructItems<TUniquePtr<FFileConstructionState,TDefaultDelete<FFileConstructionState>_>,int>
            ((TUniquePtr<FFileConstructionState,TDefaultDelete<FFileConstructionState>_> *)
             local_12e8.Data,(uint)local_12e0);
  if (local_12e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_12e8.Data);
  }
  if (local_1238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1238.AllocatorInstance.Data);
  }
  return;
}

// CountBytesProcessed @ 1431d3bf0

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::CountBytesProcessed
          (FBuildPatchFileConstructor *this,long64 *param_1)

{
  this->ByteProcessed = this->ByteProcessed + *param_1;
                    /* WARNING: Could not recover jumptable at 0x0001431d3c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->FileConstructorStat + 0x40))
            (this->FileConstructorStat,this->ByteProcessed);
  return;
}

// CreateWriteRequest @ 1431d48f0

TUniqueFunction<void___cdecl(bool)> * __thiscall
BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest
          (FBuildPatchFileConstructor *this,
          TUniqueFunction<void___cdecl(bool)> *__return_storage_ptr__,FArchive *param_1,
          FBatchState *param_2)

{
  undefined8 *puVar1;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  puVar1 = FMemory::Malloc(0x20,8);
  *(undefined8 **)&__return_storage_ptr__->field_0x28 = puVar1;
  *puVar1 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest'::`2'::<lambda_1>,1,1>
             ::_vftable_;
  puVar1[1] = this;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest'::__l2::<lambda_1>,void,bool>
         ::Call;
  }
  return __return_storage_ptr__;
}

// GenericThreadFn @ 1431dcbb0

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::GenericThreadFn
          (FBuildPatchFileConstructor *this,int param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  TUniqueFunction<void___cdecl(bool)> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  TUniqueFunction<void___cdecl(bool)> *pTVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined1 local_res18 [16];
  int local_68;
  FScriptContainerElement local_58 [24];
  
  uVar10 = (ulonglong)param_1;
  uVar12 = (uint)~param_1 >> 0x1f;
  uVar13 = 0;
  uVar11 = uVar10;
  local_res10 = param_1;
  while( true ) {
    iVar9 = (int)uVar11;
    uVar4 = 0;
    if (iVar9 < (this->ThreadWakeups).ArrayNum) {
      uVar4 = uVar12;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar7 = *(longlong **)((this->ThreadWakeups).AllocatorInstance.Data + uVar10 * 8);
    (**(code **)(*plVar7 + 0x20))(plVar7,0xffffffff,0);
    local_68 = 0;
    uVar4 = uVar13;
    if (iVar9 < (this->ThreadJobPostingLocks).ArrayNum) {
      uVar4 = uVar12;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (this->ThreadJobPostingLocks).AllocatorInstance.Data + uVar10;
    LOCK();
    FVar1 = *pFVar6;
    if (FVar1 == (FScriptContainerElement)0x0) {
      *pFVar6 = (FScriptContainerElement)0x1;
    }
    UNLOCK();
    if (FVar1 != (FScriptContainerElement)0x0) {
      UE::FMutex::LockSlow((FMutex *)pFVar6);
    }
    uVar4 = 0;
    if (iVar9 < (this->ThreadJobPostings).ArrayNum) {
      uVar4 = uVar12;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (this->ThreadJobPostings).AllocatorInstance.Data + uVar10 * 0x10;
    pTVar14 = (TUniqueFunction<void___cdecl(bool)> *)0x0;
    if (local_58 != pFVar6) {
      DestructItems<TUniqueFunction<void___cdecl(bool)>,int>
                ((TUniqueFunction<void___cdecl(bool)> *)0x0,0);
      pTVar14 = *(TUniqueFunction<void___cdecl(bool)> **)pFVar6;
      *(undefined8 *)pFVar6 = 0;
      local_68 = *(int *)(pFVar6 + 8);
      *(undefined8 *)(pFVar6 + 8) = 0;
    }
    uVar4 = uVar13;
    if (iVar9 < (this->ThreadJobPostingLocks).ArrayNum) {
      uVar4 = uVar12;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    pFVar6 = (this->ThreadJobPostingLocks).AllocatorInstance.Data + uVar10;
    LOCK();
    FVar1 = *pFVar6;
    *pFVar6 = (FScriptContainerElement)((char)*pFVar6 + -1);
    UNLOCK();
    if (((byte)FVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)pFVar6);
    }
    if (this->bShouldAbort != (FThreadSafeBool)0x0) {
      for (pTVar8 = pTVar14; pTVar8 != pTVar14 + local_68; pTVar8 = pTVar8 + 1) {
        local_res18[0] = 1;
        UE::Core::Private::Function::CheckCallable(*(void **)pTVar8);
        pcVar2 = *(code **)pTVar8;
        plVar7 = (longlong *)&pTVar8->field_0x10;
        if (*(longlong **)&pTVar8->field_0x28 != (longlong *)0x0) {
          plVar7 = *(longlong **)&pTVar8->field_0x28;
        }
        uVar5 = (**(code **)(*plVar7 + 8))();
        (*pcVar2)(uVar5,local_res18);
      }
      (**(code **)(this->WakeUpDispatchThreadEvent->_padding_ + 0x10))();
      DestructItems<TUniqueFunction<void___cdecl(bool)>,int>(pTVar14,local_68);
      if (pTVar14 != (TUniqueFunction<void___cdecl(bool)> *)0x0) {
        FMemory::Free(pTVar14);
      }
      if ((int)local_res10 < (this->ThreadCompleteEvents).ArrayNum) {
        uVar13 = uVar12;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001431dcf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)((this->ThreadCompleteEvents).AllocatorInstance.Data + uVar10 * 8)
                  + 0x10))();
      return;
    }
    for (pTVar8 = pTVar14; pTVar8 != pTVar14 + local_68; pTVar8 = pTVar8 + 1) {
      local_res8[0] = 0;
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar8);
      pcVar2 = *(code **)pTVar8;
      plVar7 = (longlong *)&pTVar8->field_0x10;
      if (*(longlong **)&pTVar8->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&pTVar8->field_0x28;
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      (*pcVar2)(uVar5,local_res8);
    }
    (**(code **)(this->WakeUpDispatchThreadEvent->_padding_ + 0x10))();
    DestructItems<TUniqueFunction<void___cdecl(bool)>,int>(pTVar14,local_68);
    uVar11 = (ulonglong)local_res10;
    if (pTVar14 != (TUniqueFunction<void___cdecl(bool)> *)0x0) {
      FMemory::Free(pTVar14);
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GetAvailableDiskSpace @ 1431dd0d0

ulong64 __thiscall
BuildPatchServices::FBuildPatchFileConstructor::GetAvailableDiskSpace
          (FBuildPatchFileConstructor *this)

{
  return (ulong64)this->AvailableDiskSpace;
}

// GetRemainingBytes @ 1431e2940

long64 __thiscall
BuildPatchServices::FBuildPatchFileConstructor::GetRemainingBytes(FBuildPatchFileConstructor *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)(int)this->NextIndexToConstruct;
  lVar4 = 0;
  if ((int)this->NextIndexToConstruct < (this->ConstructionList).ArrayNum) {
    lVar7 = uVar6 << 4;
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < (this->ConstructionList).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        lVar4 = (*pcVar1)();
        return lVar4;
      }
      if (*(longlong *)((this->ConstructionList).AllocatorInstance.Data + lVar7) != 0) {
        uVar3 = 0;
        if ((int)uVar5 < (this->ConstructionList).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          lVar4 = (*pcVar1)();
          return lVar4;
        }
        lVar4 = lVar4 + *(longlong *)
                         (*(longlong *)((this->ConstructionList).AllocatorInstance.Data + lVar7) +
                         0x58);
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      lVar7 = lVar7 + 0x10;
    } while ((int)(uVar5 + 1) < (this->ConstructionList).ArrayNum);
  }
  return lVar4;
}

// GetRequiredDiskSpace @ 1431e3150

ulong64 __thiscall
BuildPatchServices::FBuildPatchFileConstructor::GetRequiredDiskSpace
          (FBuildPatchFileConstructor *this)

{
  return (ulong64)this->RequiredDiskSpace;
}

// HandleInitialDiskSizeCheck @ 1431e3fd0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FBuildPatchFileConstructor::HandleInitialDiskSizeCheck
          (FBuildPatchFileConstructor *this,FFileManifest *param_1,long64 param_2)

{
  FScriptContainerElement *_Src;
  IInstallerError *pIVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  atomic<unsigned___int64> aVar5;
  FText *pFVar6;
  FString *pFVar7;
  longlong lVar8;
  atomic<unsigned___int64> aVar9;
  atomic<unsigned___int64> aVar10;
  atomic<unsigned___int64> local_res20;
  TSharedPtr<FCulture,1> local_88;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TSharedPtr<FCulture,1> local_58;
  FText local_48;
  
  aVar10 = (atomic<unsigned___int64>)0x0;
  if (((this->Configuration).bInstallToMemory != false) ||
     ((this->Configuration).bSkipInitialDiskSizeCheck != false)) {
    this->bInitialDiskSizeCheck = true;
    return true;
  }
  if (this->bInitialDiskSizeCheck == false) {
    this->bInitialDiskSizeCheck = true;
    aVar5 = (atomic<unsigned___int64>)CalculateInProgressDiskSpaceRequired(this,param_1,param_2);
    if ((this->Configuration).bDeleteChunkDBFilesAfterUse != false) {
      aVar5 = (atomic<unsigned___int64>)CalculateDiskSpaceRequirementsWithDeleteDuringInstall(this);
    }
    local_88.Object = (FCulture *)0x0;
    local_res20 = (atomic<unsigned___int64>)0x0;
    bVar4 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace
                      (&(this->Configuration).InstallDirectory,(ulong64 *)&local_88,
                       (ulong64 *)&local_res20);
    aVar9 = aVar10;
    if (bVar4) {
      ((this->BackingStore).Ptr)->InstallationFreeSpaceRequired = (ulong64)aVar5;
      aVar9 = local_res20;
    }
    bVar3 = (ulonglong)local_res20 <= (ulonglong)aVar5;
    if (3 < (byte)LogBuildPatchServices._0_1_) {
      if (bVar4) {
        local_88.Object = (FCulture *)0x0;
        local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar6 = FText::AsNumber((FText *)&local_58,(ulong64)aVar9,(FNumberFormattingOptions *)0x0,
                                 &local_88);
        pFVar7 = FText::ToString(pFVar6);
        local_68.Data = (FScriptContainerElement *)0x0;
        local_60 = (pFVar7->Data).ArrayNum;
        lVar8 = (longlong)local_60;
        _Src = (pFVar7->Data).AllocatorInstance.Data;
        if (local_60 == 0) {
          local_5c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_60,0,&local_68,local_60,&local_5c);
          memcpy(local_68.Data,_Src,lVar8 * 2);
        }
        if (local_58.Object != (FCulture *)0x0) {
          (**(code **)((((local_58.Object)->Implementation).Ptr)->ICULocale).language)();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        aVar10 = (atomic<unsigned___int64>)0x1;
      }
      local_58.Object = (FCulture *)0x0;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar6 = FText::AsNumber(&local_48,(ulong64)aVar5,(FNumberFormattingOptions *)0x0,&local_58);
      pFVar7 = FText::ToString(pFVar6);
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = (pFVar7->Data).ArrayNum;
      local_88.Object = (FCulture *)(pFVar7->Data).AllocatorInstance.Data;
      local_res20._0_4_ = local_70;
      if (local_70 == 0) {
        local_6c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_70,0,&local_78,local_70,&local_6c);
        memcpy(local_78.Data,local_88.Object,(longlong)(int)local_res20._0_4_ * 2);
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      if ((aVar10 != (atomic<unsigned___int64>)0x0) &&
         (local_68.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data);
      }
    }
    this->AvailableDiskSpace = aVar9;
    this->RequiredDiskSpace = aVar5;
    if ((!bVar4) || (!bVar4 || bVar3)) {
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pIVar1 = this->InstallerError;
      pcVar2 = *(code **)((longlong)*pIVar1 + 0x38);
      pFVar6 = GetDiskSpaceMessage(&local_48,&(this->Configuration).InstallDirectory,(ulong64)aVar5,
                                   (ulong64)aVar9,(FNumberFormattingOptions *)0x0);
      (*pcVar2)(pIVar1,0xb,DiskSpaceErrorCodes::InitialSpaceCheck,0,pFVar6);
      return false;
    }
  }
  return true;
}

// HarvestChunksForCompletedFile @ 1431e4300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile
          (FBuildPatchFileConstructor *this,FString *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IBuildManifestSet *pIVar3;
  IConstructorInstallChunkSource *pIVar4;
  FChunkBackingStore *this_00;
  code *pcVar5;
  TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
  *this_01;
  FEvent **ppFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  EConstructorChunkLocation *pEVar13;
  FStoredChunk *pFVar14;
  byte bVar15;
  longlong lVar16;
  longlong *plVar17;
  FBuildPatchFileConstructor *this_02;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  char *pcVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  FGuid *pFVar27;
  uint uVar28;
  bool bVar29;
  undefined1 auStackY_418 [32];
  bool local_3c8;
  TGreater<int> local_3c0 [8];
  ForAnyElementType local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8 [4];
  uint local_3a4;
  uint local_3a0;
  int local_39c;
  TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
  *local_398;
  FBuildPatchFileConstructor *local_390;
  longlong local_388;
  FEvent **local_380;
  FNeededChunk local_378;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_358;
  FDelegateAllocation local_350;
  longlong *local_340;
  uint uStack_338;
  uint uStack_334;
  TBitArray<FDefaultBitArrayAllocator> *local_330;
  undefined4 uStack_328;
  uint uStack_324;
  uint local_320;
  uint uStack_31c;
  int iStack_318;
  undefined4 uStack_314;
  int local_310;
  int local_30c;
  FEvent **local_308;
  longlong *local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f8;
  undefined8 uStack_2d8;
  TMemoryView<void> local_2c8;
  FDestructionSentinel local_2b8;
  FDelegateAllocation *local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 local_288 [32];
  uint *local_268;
  uint local_260;
  undefined4 local_25c;
  undefined4 local_258;
  int local_254;
  void *local_248;
  undefined4 local_240;
  code *local_238 [2];
  longlong local_228 [3];
  longlong *local_210;
  TStringBuilderBase<wchar_t> local_208;
  wchar_t local_1e8 [40];
  TStringBuilderBase<wchar_t> local_198;
  wchar_t local_178 [40];
  TStringBuilderBase<wchar_t> local_128;
  wchar_t local_108 [40];
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [40];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_390 = this;
  if (5 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1760,"Harvest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
               ,0x6e0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1760);
  }
  local_25c = 0x80;
  local_288._0_8_ = 0;
  local_288._8_8_ = 0;
  local_268 = (uint *)0x0;
  uVar24 = 0;
  local_260 = 0;
  local_258 = 0xffffffff;
  local_254 = 0;
  local_248 = (void *)0x0;
  local_240 = 0;
  (**(code **)((longlong)*this->InstallSource + 0x28))(this->InstallSource,param_1,local_288);
  local_398 = (TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
               *)&this->ChunkLocationsLock;
  local_3b8.Data = (FScriptContainerElement *)0x0;
  local_3b0 = 0;
  AcquireSRWLockShared((PSRWLOCK)local_398);
  iVar9 = (**(code **)((longlong)*this->ChunkReferenceTracker + 0x50))();
  uVar28 = local_260;
  uStack_334 = 1;
  local_320 = 0;
  uStack_324 = local_320;
  if (local_260 != 0) {
    puVar25 = (uint *)(local_288 + 0x10);
    if (local_268 != (uint *)0x0) {
      puVar25 = local_268;
    }
    uVar26 = *puVar25;
    local_320 = 0;
    uVar24 = 0;
    while (uVar26 == 0) {
      lVar16 = (longlong)(int)uVar24;
      local_320 = local_320 + 0x20;
      uVar24 = uVar24 + 1;
      uStack_324 = local_260;
      if ((int)((local_260 - 1) + ((int)(local_260 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
      goto LAB_1431e44c0;
      uVar26 = puVar25[lVar16 + 1];
    }
    uStack_334 = -uVar26 & uVar26;
    uVar20 = (ulonglong)uStack_334 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_310 = (int)lVar16;
    uStack_324 = local_310 + -1 + local_320;
    if ((int)local_260 < (int)uStack_324) {
      uStack_324 = local_260;
    }
  }
LAB_1431e44c0:
  local_340 = (longlong *)local_288;
  local_330 = (TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x10);
  uVar26 = local_260 & 0xffffffe0;
  iStack_318 = local_288._8_4_ - local_254;
  TStack_2f8._padding_ = CONCAT44(uStack_334,uVar24);
  uStack_328 = 0xffffffff;
  TStack_2f8.CurrentBitIndex = uStack_324;
  TStack_2f8.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)local_260 >> 5;
  TStack_2f8._28_4_ = uStack_324;
  TStack_2f8.BaseBitIndex = local_320;
  uStack_2d8 = CONCAT44(uStack_314,iStack_318);
  bVar15 = (byte)local_260;
  uStack_338 = uVar24;
  uStack_31c = uStack_324;
  local_300 = local_340;
  TStack_2f8.Array = local_330;
  if (((int)local_260 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  this_02 = local_390;
  if (uVar28 != local_260) {
    puVar25 = (uint *)(local_288 + 0x10);
    if (local_268 != (uint *)0x0) {
      puVar25 = local_268;
    }
    uVar24 = -1 << (bVar15 & 0x1f) & puVar25[iVar21];
    while (uVar24 == 0) {
      lVar16 = (longlong)iVar21;
      uVar26 = uVar26 + 0x20;
      iVar21 = iVar21 + 1;
      uVar28 = local_260;
      if ((int)((local_260 - 1) + ((int)(local_260 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_1431e45d5;
      uVar24 = puVar25[lVar16 + 1];
    }
    uVar20 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_30c = (int)lVar16;
    uVar28 = (uVar26 - 1) + local_30c;
    if ((int)local_260 < (int)uVar28) {
      uVar28 = local_260;
    }
  }
LAB_1431e45d5:
  while( true ) {
    plVar17 = local_300;
    if ((int)local_300[1] - *(int *)((longlong)local_300 + 0x34) != (int)uStack_2d8) {
      local_3a8[0] = 0;
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3a8);
    }
    if (((TStack_2f8.CurrentBitIndex == uVar28) &&
        (TStack_2f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x10))) &&
       (plVar17 == (longlong *)local_288)) break;
    pFVar27 = (FGuid *)(*plVar17 + (longlong)TStack_2f8.CurrentBitIndex * 0x18);
    uVar10 = CityHash64((char *)pFVar27,0x10);
    iVar21 = TSet<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>,TDefaultMapHashableKeyFuncs<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FGuid>(&this_02->ChunkLocations,(uint)uVar10,pFVar27);
    if (iVar21 != -1) {
      lVar16 = (longlong)iVar21 * 0x1c + *(longlong *)&this_02->ChunkLocations;
      pcVar23 = (char *)(lVar16 + 0x10);
      if (lVar16 == 0) {
        pcVar23 = (char *)0x0;
      }
      if ((pcVar23 != (char *)0x0) && (*pcVar23 == '\0')) {
        local_39c = 0;
        iVar21 = (**(code **)((longlong)*this_02->ChunkReferenceTracker + 0x48))
                           (this_02->ChunkReferenceTracker,pFVar27,&local_39c);
        if ((iVar21 == -1) || (local_39c < iVar9)) {
          *pcVar23 = '\x05';
        }
        else {
          pIVar3 = (this_02->Configuration).ManifestSet;
          lVar16 = (**(code **)((longlong)*pIVar3 + 0x30))(pIVar3,pFVar27);
          local_378.Id.A = pFVar27->A;
          local_378.Id.B = pFVar27->B;
          local_378.Id.C = pFVar27->C;
          local_378.Id.D = pFVar27->D;
          local_378.ChunkSize = *(int *)(lVar16 + 0x30);
          local_378.LastUsageIndex = local_39c;
          local_378.NextUsageIndex = iVar21;
          if (((local_3b8.Data <= &local_378) &&
              (&local_378 < (FNeededChunk *)(local_3b8.Data + (longlong)local_3b0._4_4_ * 0x1c))) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          iVar21 = (int)local_3b0;
          if ((int)local_3b0 == local_3b0._4_4_) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x41c,&local_3b8,(int *)((longlong)&local_3b0 + 4));
          }
          local_3b0 = CONCAT44(local_3b0._4_4_,iVar21 + 1);
          lVar16 = (longlong)iVar21 * 0x1c;
          *(undefined8 *)&local_3b8.Data[lVar16].field_0x0 = local_378.Id._0_8_;
          *(undefined8 *)(local_3b8.Data + lVar16 + 8) = local_378.Id._8_8_;
          *(ulonglong *)(local_3b8.Data + lVar16 + 0x10) =
               CONCAT44(local_378.NextUsageIndex,local_378.LastUsageIndex);
          *(int *)(local_3b8.Data + lVar16 + 0x18) = local_378.ChunkSize;
        }
      }
    }
    TStack_2f8.UnvisitedBitMask = TStack_2f8.UnvisitedBitMask & ~TStack_2f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f8);
  }
  ReleaseSRWLockShared((PSRWLOCK)local_398);
  if ((int)local_3b0 == 0) {
    bVar7 = true;
  }
  else {
    AlgoImpl::
    IntroSortInternal<_BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile_::__l2::FNeededChunk,int,UE::Core::Private::TProjectionMemberData<int__BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile_::__l2::FNeededChunk::*>,TGreater<int>_>
              ((FNeededChunk *)local_3b8.Data,(int)local_3b0,
               (TProjectionMemberData<int__private:_bool___cdecl_BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile(FString_const_&)_::_2_::FNeededChunk::*>
                )0x14,local_3c0[0]);
    local_3a0 = 0;
    local_3c8 = true;
    bVar7 = true;
    if (0 < (int)local_3b0) {
      local_380 = &this_02->WakeUpDispatchThreadEvent;
      lVar16 = 0;
      local_308 = local_380;
      do {
        uVar24 = local_3a0;
        iVar9 = 0;
        uVar28 = local_3a0 + 1;
        local_388 = lVar16 + 1;
        if ((int)uVar28 < (int)local_3b0) {
          lVar19 = local_388 * 0x1c;
          iVar21 = (int)local_3b0;
          local_3a4 = uVar28;
          do {
            uVar26 = 0;
            if ((int)uVar28 < iVar21) {
              uVar26 = ~uVar28 >> 0x1f;
            }
            if (uVar26 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
              iVar21 = (int)local_3b0;
            }
            if (0x1000000 < *(int *)(local_3b8.Data + lVar19 + 0x18) + iVar9) break;
            uVar26 = 0;
            if ((int)uVar28 < iVar21) {
              uVar26 = ~uVar28 >> 0x1f;
            }
            if (uVar26 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
              iVar21 = (int)local_3b0;
            }
            uVar28 = uVar28 + 1;
            local_388 = local_388 + 1;
            iVar9 = iVar9 + *(int *)(local_3b8.Data + lVar19 + 0x18);
            lVar19 = lVar19 + 0x1c;
          } while ((int)uVar28 < iVar21);
        }
        this_02->PendingHarvestRequests = (atomic<int>)(uVar28 - uVar24);
        local_3a4 = uVar28;
        if (lVar16 < local_388) {
          lVar19 = lVar16 * 0x1c;
          local_398 = (TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
                       *)(local_388 - lVar16);
          do {
            uVar28 = 0;
            if ((int)uVar24 < (int)local_3b0) {
              uVar28 = ~uVar24 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            pFVar27 = (FGuid *)(local_3b8.Data + lVar19);
            SetChunkLocation(this_02,pFVar27,Memory);
            FChunkBackingStore::ReserveAndLockEntry
                      ((this_02->BackingStore).Ptr,&local_2c8,pFVar27,pFVar27[1].C,pFVar27[1].A);
            ppFVar6 = local_308;
            if (CONCAT44(local_2c8.Size._4_4_,(undefined4)local_2c8.Size) == 0) {
              LOCK();
              paVar1 = &this_02->PendingHarvestRequests;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<int>)0x1) {
                (**(code **)((*local_308)->_padding_ + 0x10))();
                local_380 = ppFVar6;
              }
              local_3c8 = false;
            }
            pIVar4 = this_02->InstallSource;
            local_358.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_350.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_350.DelegateSize = 0;
            pcVar5 = *(code **)((longlong)*pIVar4 + 8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_358,(FWriteAccessScope *)&local_2b8);
            local_2a0 = &local_350;
            puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_350);
            if (puVar11 != (undefined8 *)0x0) {
              *puVar11 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar10 = FDelegateHandle::GenerateNewID();
              puVar11[2] = uVar10;
              *puVar11 = &
                         ___7__TBaseRawMethodDelegateInstance__0A_VFBuildPatchFileConstructor_BuildPatchServices____A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar11[4] = ChunkHarvestCompletedFn;
              puVar11[3] = this_02;
            }
            if (local_2b8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
            }
            local_298 = local_2c8.Data._0_4_;
            uStack_294 = local_2c8.Data._4_4_;
            uStack_290 = (undefined4)local_2c8.Size;
            uStack_28c = local_2c8.Size._4_4_;
            (*pcVar5)(pIVar4,local_238,pFVar27,&local_298);
            local_3c0[0] = (TGreater<int>)0x0;
            UE::Core::Private::Function::CheckCallable(local_238[0]);
            pcVar5 = local_238[0];
            plVar17 = local_228;
            if (local_210 != (longlong *)0x0) {
              plVar17 = local_210;
            }
            uVar12 = (**(code **)(*plVar17 + 8))();
            (*pcVar5)(uVar12,local_3c0);
            if (local_238[0] != (code *)0x0) {
              plVar17 = local_228;
              if (local_210 != (longlong *)0x0) {
                plVar17 = local_210;
              }
              (**(code **)(*plVar17 + 0x10))();
            }
            uVar24 = uVar24 + 1;
            lVar19 = lVar19 + 0x1c;
            local_398 = (TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
                         *)((longlong)local_398 + -1);
          } while (local_398 !=
                   (TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
                    *)0x0);
          local_398 = (TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
                       *)0x0;
        }
        uVar24 = local_3a4;
        if (CpuChannel->Enabled < 0) {
          (**(code **)((*local_380)->_padding_ + 0x20))(*local_380,0xffffffff);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1863,"HarvestWait",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                     ,0x747);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1863);
          (**(code **)((*local_380)->_padding_ + 0x20))(*local_380,0xffffffff);
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (local_3c8 != false) {
          AcquireSRWLockShared((PSRWLOCK)&this_02->ChunkLocationsLock);
          uVar28 = local_3a4;
          uVar20 = (ulonglong)(int)local_3a0;
          if ((int)local_3a0 < (int)uVar24) {
            local_398 = &this_02->ChunkLocations;
            lVar16 = uVar20 * 0x1c;
            do {
              this_01 = local_398;
              uVar18 = (uint)uVar20;
              uVar26 = 0;
              uVar22 = ~uVar18 >> 0x1f;
              uVar24 = uVar26;
              if ((int)uVar18 < (int)local_3b0) {
                uVar24 = uVar22;
              }
              if ((uVar24 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
              pEVar13 = TMapBase<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,0>_>
                        ::FindChecked(this_01,(FGuid *)(local_3b8.Data + lVar16));
              this_00 = (local_390->BackingStore).Ptr;
              if (*pEVar13 == Cloud) {
                if ((int)uVar18 < (int)local_3b0) {
                  uVar26 = uVar22;
                }
                if ((uVar26 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  uVar8 = (*pcVar5)();
                  return (bool)uVar8;
                }
                pFVar27 = (FGuid *)(local_3b8.Data + lVar16);
                uVar10 = CityHash64((char *)pFVar27,0x10);
                iVar9 = TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                        ::FindIndexByHash<FGuid>
                                  ((TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                                    *)&this_00->StoredChunks,(uint)uVar10,pFVar27);
                if (iVar9 != -1) {
                  lVar19 = (longlong)iVar9 * 0x38 + *(longlong *)&this_00->StoredChunks;
                  pFVar14 = (FStoredChunk *)(lVar19 + 0x10);
                  if (lVar19 == 0) {
                    pFVar14 = (FStoredChunk *)0x0;
                  }
                  if (pFVar14 != (FStoredChunk *)0x0) {
                    if ((pFVar14->bCommitted == false) && (pFVar14->bBackedByDisk == false)) {
                      this_00->CurrentMemoryLoad =
                           this_00->CurrentMemoryLoad - (longlong)(pFVar14->ChunkData).ArrayNum;
                      TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
                      ::Remove((TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
                                *)&this_00->StoredChunks,pFVar27);
                    }
                    else {
                      if ((byte)LogBuildPatchServices._0_1_ < 2) goto LAB_1431e4f84;
                      local_208.Base = local_1e8;
                      local_208.bIsDynamic = false;
                      local_208.bIsExternal = false;
                      local_208.CurPos = local_1e8;
                      local_208.End = (wchar_t *)&local_198;
                      FGuid::AppendString(pFVar27,&local_208,DigitsWithHyphensLower);
                      if (local_208.End < (TStringBuilderBase<wchar_t> *)(local_208.CurPos + 1)) {
                        TStringBuilderBase<wchar_t>::Extend(&local_208,1);
                      }
                      *local_208.CurPos = L'\0';
                      UE::Logging::Private::BasicLog<2>
                                ((FStaticBasicLogRecord *)
                                 &`public:_bool___cdecl_FChunkBackingStore::DereserveHarvestingEntry(FGuid_const&___ptr64)___ptr64'
                                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_208);
                      local_3c8 = false;
                    }
                    goto LAB_1431e4d28;
                  }
                }
                if (1 < (byte)LogBuildPatchServices._0_1_) {
                  local_198.Base = local_178;
                  local_198.bIsDynamic = false;
                  local_198.bIsExternal = false;
                  local_198.CurPos = local_178;
                  local_198.End = (wchar_t *)&local_128;
                  FGuid::AppendString(pFVar27,&local_198,DigitsWithHyphensLower);
                  if (local_198.End < (TStringBuilderBase<wchar_t> *)(local_198.CurPos + 1)) {
                    TStringBuilderBase<wchar_t>::Extend(&local_198,1);
                  }
                  *local_198.CurPos = L'\0';
                  UE::Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)
                             &`public:_bool___cdecl_FChunkBackingStore::DereserveHarvestingEntry(FGuid_const&___ptr64)___ptr64'
                              ::__l29::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_198);
                }
LAB_1431e4f84:
                local_3c8 = false;
              }
              else {
                if ((int)uVar18 < (int)local_3b0) {
                  uVar26 = uVar22;
                }
                if ((uVar26 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  uVar8 = (*pcVar5)();
                  return (bool)uVar8;
                }
                pFVar27 = (FGuid *)(local_3b8.Data + lVar16);
                uVar10 = CityHash64((char *)pFVar27,0x10);
                iVar9 = TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                        ::FindIndexByHash<FGuid>
                                  ((TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                                    *)&this_00->StoredChunks,(uint)uVar10,pFVar27);
                if (iVar9 != -1) {
                  lVar19 = (longlong)iVar9 * 0x38 + *(longlong *)&this_00->StoredChunks;
                  pFVar14 = (FStoredChunk *)(lVar19 + 0x10);
                  if (lVar19 == 0) {
                    pFVar14 = (FStoredChunk *)0x0;
                  }
                  if (pFVar14 != (FStoredChunk *)0x0) {
                    if (pFVar14->bCommitted == false) {
                      pFVar14->bCommitted = true;
                      bVar7 = FChunkBackingStore::ReleaseEntryInternal(this_00,pFVar27,pFVar14);
                      if (!bVar7) {
                        local_3c8 = false;
                      }
                    }
                    else {
                      if ((byte)LogBuildPatchServices._0_1_ < 2) goto LAB_1431e4f84;
                      local_128.Base = local_108;
                      local_128.bIsDynamic = false;
                      local_128.bIsExternal = false;
                      local_128.CurPos = local_108;
                      local_128.End = (wchar_t *)&local_b8;
                      FGuid::AppendString(pFVar27,&local_128,DigitsWithHyphensLower);
                      if (local_128.End < (TStringBuilderBase<wchar_t> *)(local_128.CurPos + 1)) {
                        TStringBuilderBase<wchar_t>::Extend(&local_128,1);
                      }
                      *local_128.CurPos = L'\0';
                      UE::Logging::Private::BasicLog<2>
                                (&`public:_bool___cdecl_FChunkBackingStore::CommitAndReleaseEntry(FGuid_const&___ptr64)___ptr64'
                                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_128);
                      local_3c8 = false;
                    }
                    goto LAB_1431e4d28;
                  }
                }
                if ((byte)LogBuildPatchServices._0_1_ < 2) goto LAB_1431e4f84;
                local_b8.Base = local_98;
                local_b8.bIsDynamic = false;
                local_b8.bIsExternal = false;
                local_b8.CurPos = local_98;
                local_b8.End = (wchar_t *)local_48;
                FGuid::AppendString(pFVar27,&local_b8,DigitsWithHyphensLower);
                if (local_b8.End < local_b8.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
                }
                *local_b8.CurPos = L'\0';
                UE::Logging::Private::BasicLog<2>
                          (&`public:_bool___cdecl_FChunkBackingStore::CommitAndReleaseEntry(FGuid_const&___ptr64)___ptr64'
                            ::__l29::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
                local_3c8 = false;
              }
LAB_1431e4d28:
              local_3a0 = local_3a0 + 1;
              uVar20 = (ulonglong)local_3a0;
              lVar16 = lVar16 + 0x1c;
              this_02 = local_390;
              uVar24 = uVar28;
            } while ((int)local_3a0 < (int)uVar28);
          }
          ReleaseSRWLockShared((PSRWLOCK)&this_02->ChunkLocationsLock);
          if ((local_3c8 != false) && (this_02->bAllowMultipleFilesInFlight == false)) {
            local_3c8 = FChunkBackingStore::CheckNoLocks((this_02->BackingStore).Ptr,true);
          }
        }
        local_3a0 = uVar24;
        bVar7 = local_3c8;
      } while (((this_02->bShouldAbort == (FThreadSafeBool)0x0) && (local_3c8 != false)) &&
              (lVar16 = local_388, (int)uVar24 < (int)local_3b0));
    }
  }
  if ((FNeededChunk *)local_3b8.Data != (FNeededChunk *)0x0) {
    FMemory::Free(local_3b8.Data);
  }
  local_240 = 0;
  if (local_248 != (void *)0x0) {
    FMemory::Free(local_248);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_288);
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// InitFile @ 1431e54a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::InitFile
          (FBuildPatchFileConstructor *this,FFileConstructionState *param_1,FResumeData *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  ulong64 uVar3;
  FFileManifest *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  FString *local_58;
  ForAnyElementType *local_50;
  ForAnyElementType local_48;
  long64 alStack_40 [3];
  
  if (param_1->bSuccess != false) {
    pFVar2 = param_1->BuildFilename;
    uVar3 = param_1->FileManifest->FileSize;
    iVar9 = (pFVar2->Data).ArrayNum;
    if (iVar9 == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    iVar10 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar10 = 0;
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
    iVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&param_2->FilesCompleted,uVar8,pFVar2);
    if (iVar9 == -1) {
      if ((param_1->bSuccess == false) && (1 < (param_1->FileManifest->SymlinkTarget).Data.ArrayNum)
         ) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSymlinkNotImplemented",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                           ,0xab5,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        param_1->bSuccess = false;
      }
      if (((this->Configuration).bInstallToMemory != false) ||
         ((this->Configuration).bConstructInMemory != false)) {
        local_48.Data = (FScriptContainerElement *)0x0;
        alStack_40[0] = 0;
        alStack_40[1] = 0;
        uVar3 = param_1->FileManifest->FileSize;
        if ((longlong)uVar3 < 1) {
          if ((longlong)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar3);
          }
        }
        else {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,uVar3,&local_48,alStack_40,alStack_40 + 1);
        }
        local_58 = param_1->BuildFilename;
        local_50 = &local_48;
        TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_&&>_>
                  ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                    *)&this->MemoryOutputFiles,
                   (TPairInitializer<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_&&>
                    *)&stack0x00000020,(bool *)&local_58);
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
      }
    }
    else {
      this->ByteProcessed = this->ByteProcessed + uVar3;
      (**(code **)((longlong)*this->FileConstructorStat + 0x40))
                (this->FileConstructorStat,this->ByteProcessed);
      if (3 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pFVar4 = param_1->FileManifest;
      iVar9 = (pFVar4->ChunkParts).ArrayNum;
      pFVar12 = (pFVar4->ChunkParts).AllocatorInstance.Data;
      pFVar1 = pFVar12 + (longlong)iVar9 * 0x18;
      while( true ) {
        if ((pFVar4->ChunkParts).ArrayNum != iVar9) {
          `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar12 == pFVar1) goto LAB_1431e55c3;
        cVar6 = (**(code **)((longlong)*this->ChunkReferenceTracker + 0x30))
                          (this->ChunkReferenceTracker,pFVar12);
        if (cVar6 == '\0') break;
        pFVar12 = pFVar12 + 0x18;
      }
      param_1->bSuccess = false;
      param_1->ConstructionError = TrackingError;
LAB_1431e55c3:
      param_1->bSkippedConstruction = true;
    }
  }
  return;
}

// OnBeforeDeleteFile @ 1431eb7c0

FOnBeforeDeleteFile * __thiscall
BuildPatchServices::FBuildPatchFileConstructor::OnBeforeDeleteFile(FBuildPatchFileConstructor *this)

{
  return &this->BeforeDeleteFileEvent;
}

// OpenFileToConstruct @ 1431eb7d0

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::OpenFileToConstruct
          (FBuildPatchFileConstructor *this,FFileConstructionState *param_1)

{
  IFileConstructorStat *pIVar1;
  FArchive *pFVar2;
  DWORD DVar3;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *pTVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 *local_res10;
  FRecord local_28;
  IFileConstructorStat *local_10;
  
  if ((((param_1->bSuccess != false) && (param_1->bSkippedConstruction == false)) &&
      ((this->Configuration).bInstallToMemory == false)) &&
     ((this->Configuration).bConstructInMemory == false)) {
    pIVar1 = this->FileConstructorStat;
    ISpeedRecorder::FRecord::FRecord(&local_28);
    local_10 = pIVar1;
    (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1);
    local_28.CyclesStart = FStatsCollector::GetCycles();
    if ((param_1->NewFilename).Data.ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_1->NewFilename).Data.AllocatorInstance.Data;
    }
    pTVar4 = (TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *)
             (**(code **)((longlong)*this->FileSystem + 0x50))
                       (this->FileSystem,&local_res10,pwVar6,-(param_1->bIsResumedFile != false) & 8
                       );
    TUniquePtr<FArchive,TDefaultDelete<FArchive>_>::operator=(&param_1->NewFile,pTVar4);
    if (local_res10 != (undefined8 *)0x0) {
      (**(code **)*local_res10)(local_res10,1);
    }
    DVar3 = FWindowsPlatformMisc::GetLastError();
    param_1->CreateFilePlatformLastError = DVar3;
    local_28.CyclesEnd = FStatsCollector::GetCycles();
    local_28.Size = 0;
    (**(code **)((longlong)*local_10 + 0x58))(local_10,&local_28);
    pFVar2 = (param_1->NewFile).Ptr;
    param_1->bSuccess = pFVar2 != (FArchive *)0x0;
    if (pFVar2 == (FArchive *)0x0) {
      param_1->ConstructionError = CannotCreateFile;
    }
    else {
      lVar5 = (**(code **)(*(longlong *)pFVar2 + 0x28))();
      if (lVar5 != param_1->StartPosition) {
        pIVar1 = this->FileConstructorStat;
        ISpeedRecorder::FRecord::FRecord(&local_28);
        local_10 = pIVar1;
        (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1);
        local_28.CyclesStart = FStatsCollector::GetCycles();
        pFVar2 = (param_1->NewFile).Ptr;
        (**(code **)(*(longlong *)pFVar2 + 0x1b8))(pFVar2,param_1->StartPosition);
        local_28.CyclesEnd = FStatsCollector::GetCycles();
        local_28.Size = 0;
        (**(code **)((longlong)*local_10 + 0x58))(local_10,&local_28);
      }
      param_1->Progress = param_1->StartPosition;
      param_1->LastSeenProgress = param_1->StartPosition;
    }
  }
  return;
}

// QueueGenericThreadTask @ 1431ec420

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::QueueGenericThreadTask
          (FBuildPatchFileConstructor *this,int param_1,TUniqueFunction<void___cdecl(bool)> *param_2
          )

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  
  lVar11 = (longlong)param_1;
  if ((param_1 == -1) || ((this->Threads).ArrayNum <= param_1)) {
    local_res20[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar2 = *(code **)param_2;
    plVar10 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar2)(uVar8,local_res20);
    (**(code **)(this->WakeUpDispatchThreadEvent->_padding_ + 0x10))();
  }
  else {
    bVar5 = false;
    uVar12 = (uint)~param_1 >> 0x1f;
    uVar6 = 0;
    if (param_1 < (this->ThreadJobPostingLocks).ArrayNum) {
      uVar6 = uVar12;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (this->ThreadJobPostingLocks).AllocatorInstance.Data + lVar11;
    LOCK();
    FVar1 = *pFVar9;
    if (FVar1 == (FScriptContainerElement)0x0) {
      *pFVar9 = (FScriptContainerElement)0x1;
    }
    UNLOCK();
    if (FVar1 != (FScriptContainerElement)0x0) {
      UE::FMutex::LockSlow((FMutex *)pFVar9);
    }
    if (this->bShouldAbort == (FThreadSafeBool)0x0) {
      uVar6 = 0;
      if (param_1 < (this->ThreadJobPostings).ArrayNum) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (this->ThreadJobPostings).AllocatorInstance.Data + lVar11 * 0x10;
      if (((*(TUniqueFunction<void___cdecl(bool)> **)&pFVar9->field_0x0 <= param_2) &&
          (param_2 < *(TUniqueFunction<void___cdecl(bool)> **)&pFVar9->field_0x0 +
                     *(int *)(pFVar9 + 0xc))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = *(int *)&pFVar9[8].field_0x0;
      if (iVar7 == *(int *)(pFVar9 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
      }
      *(int *)&pFVar9[8].field_0x0 = iVar7 + 1;
      plVar10 = (longlong *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar7 * 0x30);
      *plVar10 = *(longlong *)param_2;
      plVar10[5] = *(longlong *)&param_2->field_0x28;
      *(undefined8 *)&param_2->field_0x28 = 0;
      lVar3 = *(longlong *)&param_2->field_0x18;
      plVar10[2] = *(longlong *)&param_2->field_0x10;
      plVar10[3] = lVar3;
      plVar10[4] = *(longlong *)&param_2->field_0x20;
      if (*plVar10 != 0) {
        *(undefined8 *)param_2 = 0;
      }
      bVar5 = true;
    }
    uVar6 = 0;
    if (param_1 < (this->ThreadJobPostingLocks).ArrayNum) {
      uVar6 = uVar12;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (this->ThreadJobPostingLocks).AllocatorInstance.Data + lVar11;
    LOCK();
    FVar1 = *pFVar9;
    *pFVar9 = (FScriptContainerElement)((char)*pFVar9 + -1);
    UNLOCK();
    if (((byte)FVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)pFVar9);
    }
    uVar6 = 0;
    if (param_1 < (this->ThreadWakeups).ArrayNum) {
      uVar6 = uVar12;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)((this->ThreadWakeups).AllocatorInstance.Data + lVar11 * 8) + 0x10))
              ();
    if (!bVar5) {
      local_res10[0] = 1;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar2 = *(code **)param_2;
      plVar10 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar10 = *(longlong **)&param_2->field_0x28;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar2)(uVar8,local_res10);
      return;
    }
  }
  return;
}

// RequestCompletedFn @ 1431f0650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::RequestCompletedFn
          (FBuildPatchFileConstructor *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  int *piVar1;
  longlong *plVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  int iVar5;
  IConstructorCloudChunkSource *pIVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  TUniqueFunction<void___cdecl(bool)> *pTVar10;
  atomic<unsigned_char> *paVar11;
  FEvent *pFVar12;
  ulonglong uVar13;
  uint *puVar14;
  bool bVar15;
  undefined1 auStack_148 [32];
  void *local_128;
  TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy> *local_120;
  undefined1 local_118 [8];
  undefined4 local_110;
  uint local_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy> local_c8 [3];
  longlong local_78 [2];
  FEvent local_68;
  FEvent *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  *(bool *)((longlong)param_4 + 0x6a) = param_2;
  *(bool *)((longlong)param_4 + 0x6b) = param_3;
  if (param_2) {
    if (param_3) goto LAB_1431f0940;
  }
  else if (param_3) {
    if (*(char *)((longlong)param_4 + 0x6c) == '\0') {
      *(undefined2 *)((longlong)param_4 + 0x6b) = 0x100;
      if (*(char *)((longlong)param_4 + 0x68) == '\0') {
        SetChunkLocation(this,param_4,Cloud);
      }
      else {
        lVar9 = (**(code **)((longlong)*(this->Configuration).ManifestSet + 0x28))();
        AcquireSRWLockExclusive((PSRWLOCK)&this->ChunkLocationsLock);
        this->DownloadRequirement = this->DownloadRequirement + lVar9;
        (**(code **)((longlong)*this->CloudSource + 0x30))
                  (this->CloudSource,this->DownloadRequirement);
        ReleaseSRWLockExclusive((PSRWLOCK)&this->ChunkLocationsLock);
      }
      if (this->bHasChunkDbSource != false) {
        local_10c = param_1->A;
        uStack_108 = param_1->B;
        uStack_104 = param_1->C;
        uStack_100 = param_1->D;
        local_110 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        (**(code **)((longlong)*this->MessagePump + 0x10))(this->MessagePump,&local_110);
      }
      pIVar6 = this->CloudSource;
      pcVar7 = *(code **)((longlong)*pIVar6 + 8);
      local_120 = TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
                  ::CreateRaw<BuildPatchServices::FBuildPatchFileConstructor>
                            (local_c8,this,(pmf_dc5a59a3)0x1431f0650);
      local_d8 = *(undefined4 *)((longlong)param_4 + 0x38);
      uStack_d4 = *(undefined4 *)((longlong)param_4 + 0x3c);
      uStack_d0 = *(undefined4 *)((longlong)param_4 + 0x40);
      uStack_cc = *(undefined4 *)((longlong)param_4 + 0x44);
      local_128 = param_4;
      pTVar10 = (TUniqueFunction<void___cdecl(bool)> *)(*pcVar7)(pIVar6,local_78,param_4,&local_d8);
      QueueGenericThreadTask(this,(int)this->ThreadAssignments[4],pTVar10);
      if (local_78[0] == 0) {
        return;
      }
      pFVar12 = &local_68;
      if (local_50 != (FEvent *)0x0) {
        pFVar12 = local_50;
      }
      goto LAB_1431f0974;
    }
LAB_1431f0940:
    lVar9 = *(longlong *)((longlong)param_4 + 0x48);
    uVar8 = *(undefined8 *)&param_1->C;
    *(undefined8 *)(lVar9 + 0x74) = *(undefined8 *)param_1;
    *(undefined8 *)(lVar9 + 0x7c) = uVar8;
    LOCK();
    piVar1 = (int *)(*(longlong *)((longlong)param_4 + 0x48) + 0x5c);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  else {
    uVar13 = 0;
    if (*(char *)((longlong)param_4 + 0x68) == '\0') {
      if (*(int *)((longlong)param_4 + 0x30) < 1) {
        local_128 = (void *)0x0;
        local_120 = (TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
                     *)(longlong)*(int *)((longlong)param_4 + 0x30);
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar9 = *(longlong *)((longlong)param_4 + 0x28);
      if (*(longlong *)((longlong)param_4 + 0x28) == 0) {
        lVar9 = (longlong)param_4 + 0x18;
      }
      uVar13 = (ulonglong)*(uint *)(lVar9 + 0xc);
    }
    else {
      bVar15 = -1 < CpuChannel->Enabled;
      if (bVar15) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2340,"CFFC_Splats",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                   ,0x924);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2340);
      }
      iVar5 = *(int *)((longlong)param_4 + 0x30);
      lVar9 = *(longlong *)((longlong)param_4 + 0x28);
      if (*(longlong *)((longlong)param_4 + 0x28) == 0) {
        lVar9 = (longlong)param_4 + 0x18;
      }
      puVar14 = (uint *)(lVar9 + 0xc);
      while( true ) {
        if (*(int *)((longlong)param_4 + 0x30) != iVar5) {
          `TCheckedPointerIterator<FRequestInfo::FRequestSplat,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_118);
        }
        if (puVar14 + -3 == (uint *)((longlong)iVar5 * 0x10 + lVar9)) break;
        memcpy((void *)(*(longlong *)((longlong)param_4 + 0x50) + *(longlong *)(puVar14 + -3)),
               (void *)((ulonglong)puVar14[-1] + *(longlong *)((longlong)param_4 + 0x38)),
               (ulonglong)*puVar14);
        uVar13 = uVar13 + *puVar14;
        puVar14 = puVar14 + 4;
      }
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    paVar11 = (atomic<unsigned_char> *)(*(longlong *)((longlong)param_4 + 0x60) + 0xa3);
    LOCK();
    FVar3.State = *paVar11;
    if (FVar3.State == (atomic<unsigned_char>)0x0) {
      *paVar11 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar3.State != (atomic<unsigned_char>)0x0) {
      UE::FMutex::LockSlow((FMutex *)paVar11);
    }
    plVar2 = (longlong *)(*(longlong *)((longlong)param_4 + 0x60) + 0xa8);
    *plVar2 = *plVar2 + uVar13;
    paVar11 = (atomic<unsigned_char> *)(*(longlong *)((longlong)param_4 + 0x60) + 0xa3);
    LOCK();
    aVar4 = *paVar11;
    *paVar11 = (atomic<unsigned_char>)((char)*paVar11 + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)paVar11);
    }
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)param_4 + 0x48) + 0x58);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 != 1) {
    return;
  }
  *(undefined1 *)(*(longlong *)((longlong)param_4 + 0x48) + 0x9c) = 1;
  pFVar12 = this->WakeUpDispatchThreadEvent;
LAB_1431f0974:
  (**(code **)(pFVar12->_padding_ + 0x10))();
  return;
}

// ResumeFile @ 1431f13a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::ResumeFile
          (FBuildPatchFileConstructor *this,FFileConstructionState *param_1)

{
  FThreadSafeBool FVar1;
  FFileManifest *pFVar2;
  IFileConstructorStat *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  IFileManager *pIVar11;
  longlong *plVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_78;
  FRecord local_68;
  IFileConstructorStat *local_50;
  
  if ((param_1->bSuccess != false) && (param_1->bSkippedConstruction == false)) {
    pwVar14 = L"";
    if (((this->Configuration).bInstallToMemory != false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Configuration.bInstallToMemory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                           ,0xb06,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((this->Configuration).bConstructInMemory != false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Configuration.bConstructInMemory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                           ,0xb07,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar11 = IFileManager::Get();
    if ((param_1->NewFilename).Data.ArrayNum != 0) {
      pwVar14 = (wchar_t *)(param_1->NewFilename).Data.AllocatorInstance.Data;
    }
    plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,pwVar14,0);
    if (plVar12 != (longlong *)0x0) {
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x400000,&local_78.AllocatorInstance,&local_78.ArrayNum,&local_78.ArrayMax);
      lVar13 = (**(code **)(*plVar12 + 0x30))(plVar12);
      fVar7 = __real_3f000000;
      lVar15 = 0;
      uVar18 = 0;
      if (0 < (param_1->FileManifest->ChunkParts).ArrayNum) {
        lVar17 = 0;
        do {
          if (this->bShouldAbort != (FThreadSafeBool)0x0) break;
          pFVar2 = param_1->FileManifest;
          uVar10 = 0;
          if ((int)uVar18 < (pFVar2->ChunkParts).ArrayNum) {
            uVar10 = ~uVar18 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar16 = (pFVar2->ChunkParts).AllocatorInstance.Data + lVar17;
          lVar15 = lVar15 + (ulonglong)*(uint *)(pFVar16 + 0x14);
          if (lVar13 < lVar15) break;
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_78,*(uint *)(pFVar16 + 0x14),No);
          uVar10 = *(uint *)(pFVar16 + 0x14);
          pIVar3 = this->FileConstructorStat;
          ISpeedRecorder::FRecord::FRecord(&local_68);
          local_50 = pIVar3;
          local_68.CyclesStart = FStatsCollector::GetCycles();
          local_68.Size = (ulonglong)uVar10;
          (**(code **)((longlong)*local_50 + 0x60))();
          (**(code **)(*plVar12 + 0x188))
                    (plVar12,local_78.AllocatorInstance.Data,*(undefined4 *)(pFVar16 + 0x14));
          local_68.CyclesEnd = FStatsCollector::GetCycles();
          (**(code **)((longlong)*local_50 + 0x68))(local_50,&local_68);
          FSHA1::Update(&param_1->HashState,(uchar *)local_78.AllocatorInstance.Data,
                        (ulonglong)*(uint *)(pFVar16 + 0x14));
          param_1->StartPosition = lVar15;
          uVar18 = uVar18 + 1;
          param_1->NextChunkPartToRead = uVar18;
          cVar9 = (**(code **)((longlong)*this->ChunkReferenceTracker + 0x30))
                            (this->ChunkReferenceTracker,pFVar16);
          if (cVar9 == '\0') {
            param_1->bSuccess = false;
            param_1->ConstructionError = TrackingError;
            uVar5 = *(undefined8 *)pFVar16;
            uVar6 = *(undefined8 *)(pFVar16 + 8);
            (param_1->ErrorContextGuid).A = (int)uVar5;
            (param_1->ErrorContextGuid).B = (int)((ulonglong)uVar5 >> 0x20);
            (param_1->ErrorContextGuid).C = (int)uVar6;
            (param_1->ErrorContextGuid).D = (int)((ulonglong)uVar6 >> 0x20);
            break;
          }
          this->ByteProcessed = this->ByteProcessed + (ulonglong)*(uint *)(pFVar16 + 0x14);
          (**(code **)((longlong)*this->FileConstructorStat + 0x40))
                    (this->FileConstructorStat,this->ByteProcessed);
          pIVar3 = this->FileConstructorStat;
          pcVar4 = *(code **)((longlong)*pIVar3 + 0x28);
          (**(code **)(*plVar12 + 0x28))(plVar12);
          (*pcVar4)(pIVar3,param_1->BuildFilename);
          FVar1 = this->bIsPaused;
          while ((FVar1 != (FThreadSafeBool)0x0 && (this->bShouldAbort == (FThreadSafeBool)0x0))) {
            FWindowsPlatformProcess::Sleep(fVar7);
            FVar1 = this->bIsPaused;
          }
          lVar17 = lVar17 + 0x18;
        } while ((int)uVar18 < (param_1->FileManifest->ChunkParts).ArrayNum);
      }
      (**(code **)(*plVar12 + 0x210))(plVar12);
      param_1->bIsResumedFile = true;
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      (**(code **)*plVar12)(plVar12,1);
    }
  }
  return;
}

// Run @ 1431f1940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::Run(FBuildPatchFileConstructor *this)

{
  TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
  *pTVar1;
  undefined8 *puVar2;
  uint uVar3;
  IBuildManifestSet *pIVar4;
  IFileSystem *pIVar5;
  code *pcVar6;
  TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
  *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  FText *pFVar13;
  FString *pFVar14;
  IFileManager *pIVar15;
  ulonglong uVar16;
  FOutputDeviceRedirector *this_00;
  ForAnyElementType FVar17;
  byte bVar18;
  uint *puVar19;
  TOptional<int> *pTVar20;
  ForElementType<FSetElementId> FVar21;
  ulong64 uVar22;
  ForAnyElementType FVar23;
  wchar_t *pwVar24;
  int iVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  undefined1 *puVar30;
  int iVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  uint uVar33;
  bool bVar34;
  undefined1 auStackY_488 [32];
  undefined1 local_448;
  undefined1 local_447;
  undefined1 local_446 [2];
  uint local_444;
  FString local_440;
  FScriptContainerElement *local_430;
  int local_428;
  uint uStack_424;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_420;
  undefined4 local_418;
  int iStack_414;
  int iStack_410;
  undefined4 uStack_40c;
  FString local_408;
  FString local_3f8;
  TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
  *local_3e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3e0;
  undefined8 local_3c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_398;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_378;
  FString local_358;
  FString local_348;
  longlong *local_338;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_330;
  TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
  *local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_308;
  undefined8 uStack_2e8;
  TSharedPtr<FCulture,1> local_2e0;
  TSharedPtr<FCulture,1> local_2d0;
  longlong *local_2c0;
  longlong lStack_2b8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  int local_298;
  undefined4 uStack_294;
  FText local_290;
  FText local_280;
  FString local_270;
  undefined1 local_258 [32];
  undefined1 *local_238;
  uint local_230;
  undefined4 local_22c;
  undefined4 local_228;
  int local_224;
  undefined1 local_220 [8];
  ForElementType<FSetElementId> local_218;
  int local_210;
  undefined1 local_208 [32];
  void *local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  undefined1 local_1b8 [128];
  undefined1 local_138 [32];
  uint *local_118;
  int local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [8];
  ForAnyElementType local_f8;
  int local_f0;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  undefined2 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_488;
  (**(code **)((longlong)*this->FileConstructorStat + 0x48))
            (this->FileConstructorStat,this->TotalJobSize);
  local_22c = 0x80;
  local_258._0_8_ = 0;
  pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ChunkLocations).field_0x10;
  local_258._8_8_ = 0;
  pTVar1 = &this->ChunkLocations;
  local_238 = (undefined1 *)0x0;
  local_230 = 0;
  local_224 = 0;
  local_218 = (ForElementType<FSetElementId>)0x0;
  local_210 = 0;
  this->DownloadRequirement = 0;
  local_228 = 0xffffffff;
  local_398._padding_._0_4_ = 0;
  local_398._padding_._4_4_ = 1;
  local_398.UnvisitedBitMask = 0xffffffff;
  local_398.CurrentBitIndex = 0;
  local_398.BaseBitIndex = 0;
  local_398.Array = pTVar32;
  if (*(int *)&(this->ChunkLocations).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_398);
  }
  uVar33 = *(uint *)&(this->ChunkLocations).field_0x28;
  TStack_3e0._padding_ = CONCAT44(local_398._padding_._4_4_,(undefined4)local_398._padding_);
  bVar18 = (byte)uVar33 & 0x1f;
  TStack_3e0.CurrentBitIndex = local_398.CurrentBitIndex;
  TStack_3e0.UnvisitedBitMask = local_398.UnvisitedBitMask;
  TStack_3e0._28_4_ = local_398._28_4_;
  TStack_3e0.BaseBitIndex = local_398.BaseBitIndex;
  local_3c0 = CONCAT44(local_3c0._4_4_,
                       *(int *)&(this->ChunkLocations).field_0x8 -
                       *(int *)&(this->ChunkLocations).field_0x34);
  TStack_3e0.Array = local_398.Array;
  local_3b8._padding_._0_4_ = (int)uVar33 >> 5;
  local_3b8._padding_._4_4_ = 1 << bVar18;
  local_3b8.UnvisitedBitMask = -1 << bVar18;
  local_3b8.BaseBitIndex = uVar33 & 0xffffffe0;
  TStack_308.Array = local_398.Array;
  uStack_2e8 = local_3c0;
  local_3e8 = pTVar1;
  local_3b8.Array = pTVar32;
  local_3b8.CurrentBitIndex = uVar33;
  local_310 = pTVar1;
  TStack_308._padding_ = TStack_3e0._padding_;
  TStack_308._16_8_ = TStack_3e0._16_8_;
  TStack_308._24_8_ = TStack_3e0._24_8_;
  if (((int)uVar33 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar33 != *(uint *)&(this->ChunkLocations).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b8);
    pTVar32 = local_3b8.Array;
    uVar33 = local_3b8.CurrentBitIndex;
  }
  while( true ) {
    pTVar7 = local_310;
    if (*(int *)&local_310->field_0x8 - *(int *)&local_310->field_0x34 != (int)uStack_2e8) {
      local_448 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_448);
    }
    if (((TStack_308.CurrentBitIndex == uVar33) && (TStack_308.Array == pTVar32)) &&
       (pTVar7 == pTVar1)) break;
    lVar26 = *(longlong *)pTVar7 + (longlong)TStack_308.CurrentBitIndex * 0x1c;
    pIVar4 = (this->Configuration).ManifestSet;
    lVar12 = (**(code **)((longlong)*pIVar4 + 0x30))(pIVar4,lVar26);
    uVar28 = *(uint *)(lVar12 + 0x30);
    if (local_258._8_4_ != local_224) {
      FVar21 = (ForElementType<FSetElementId>)local_220;
      if (local_218 != (ForElementType<FSetElementId>)0x0) {
        FVar21 = local_218;
      }
      uVar3 = *(uint *)((longlong)FVar21 + (ulonglong)(local_210 - 1U & uVar28) * 4);
      while (uVar3 != 0xffffffff) {
        puVar19 = (uint *)((longlong)(int)uVar3 * 0x10 + local_258._0_8_);
        if (*puVar19 == uVar28) {
          if (puVar19 != (uint *)0x0) goto LAB_1431f1bd2;
          break;
        }
        uVar3 = puVar19[2];
      }
    }
    local_430 = (FScriptContainerElement *)(lVar12 + 0x30);
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                *)local_258,(uint)&local_444,
               (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)uVar28,(bool *)&local_430);
    puVar19 = (uint *)((longlong)(int)local_444 * 0x10 + local_258._0_8_);
LAB_1431f1bd2:
    puVar19[1] = puVar19[1] + 1;
    if (*(char *)(lVar26 + 0x10) == '\x04') {
      this->DownloadRequirement = this->DownloadRequirement + *(longlong *)(lVar12 + 0x38);
    }
    TStack_308.UnvisitedBitMask = TStack_308.UnvisitedBitMask & ~TStack_308._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_308);
  }
  (**(code **)((longlong)*this->CloudSource + 0x30))(this->CloudSource,this->DownloadRequirement);
  local_378.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10);
  iVar11 = 0;
  local_378._padding_._4_4_ = 1;
  this->ExpectedChunkSize = 0;
  local_378._padding_._0_4_ = 0;
  local_378.UnvisitedBitMask = 0xffffffff;
  local_378.CurrentBitIndex = 0;
  local_378.BaseBitIndex = 0;
  if (local_230 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_378);
  }
  uVar28 = local_230;
  TStack_3e0._padding_ = CONCAT44(local_378._padding_._4_4_,(undefined4)local_378._padding_);
  local_3e8 = (TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
               *)local_258;
  TStack_3e0.CurrentBitIndex = local_378.CurrentBitIndex;
  TStack_3e0.UnvisitedBitMask = local_378.UnvisitedBitMask;
  TStack_3e0._28_4_ = local_378._28_4_;
  TStack_3e0.BaseBitIndex = local_378.BaseBitIndex;
  local_298 = local_258._8_4_ - local_224;
  pTStack_2b0 = local_378.Array;
  uVar33 = local_230 & 0xffffffe0;
  iVar25 = (int)local_230 >> 5;
  bVar18 = (byte)local_230;
  local_3c0 = CONCAT44(uStack_294,local_298);
  TStack_3e0.Array = local_378.Array;
  local_2c0 = (longlong *)local_3e8;
  lStack_2b8 = TStack_3e0._padding_;
  uStack_2a8 = TStack_3e0._16_8_;
  uStack_2a0 = TStack_3e0._24_8_;
  if (((int)local_230 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar28 != local_230) {
    puVar30 = local_258 + 0x10;
    if (local_238 != (undefined1 *)0x0) {
      puVar30 = local_238;
    }
    uVar28 = -1 << (bVar18 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar25 * 4);
    while (uVar28 == 0) {
      lVar12 = (longlong)iVar25;
      uVar33 = uVar33 + 0x20;
      iVar25 = iVar25 + 1;
      uVar28 = local_230;
      if ((int)((local_230 - 1) + ((int)(local_230 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_1431f1d6d;
      uVar28 = *(uint *)(puVar30 + lVar12 * 4 + 4);
    }
    uVar16 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar28 = (int)lVar12 + -1 + uVar33;
    if ((int)local_230 < (int)uVar28) {
      uVar28 = local_230;
    }
  }
LAB_1431f1d6d:
  while( true ) {
    pTVar1 = local_3e8;
    if ((int)*(longlong *)((longlong)local_3e8 + 8) - *(int *)((longlong)local_3e8 + 0x34) !=
        (int)local_3c0) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_447);
    }
    if (((TStack_3e0.CurrentBitIndex == uVar28) &&
        (TStack_3e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10))) &&
       (pTVar1 == (TMap<FGuid,BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::EConstructorChunkLocation,0>_>
                   *)local_258)) break;
    lVar12 = *(longlong *)pTVar1;
    iVar25 = *(int *)(lVar12 + 4 + (longlong)TStack_3e0.CurrentBitIndex * 0x10);
    if (iVar11 < iVar25) {
      this->ExpectedChunkSize = *(uint *)(lVar12 + (longlong)TStack_3e0.CurrentBitIndex * 0x10);
      iVar11 = iVar25;
    }
    TStack_3e0.UnvisitedBitMask = TStack_3e0.UnvisitedBitMask & ~TStack_3e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3e0);
  }
  if (this->ExpectedChunkSize == 0) {
    if (4 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    this->ExpectedChunkSize = 0x100000;
  }
  else if (4 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  bVar9 = true;
  cVar10 = (**(code **)((longlong)*(this->Configuration).ManifestSet + 0xa0))();
  if (cVar10 == '\0') {
    pTVar20 = (TOptional<int> *)&CVarDisableResumeBelowMB;
    if ((this->Configuration).DisableResumeBelowMB.bIsSet != false) {
      pTVar20 = &(this->Configuration).DisableResumeBelowMB;
    }
    uVar22 = (longlong)pTVar20->TypedValue * 0x100000;
    if (this->TotalJobSize < (longlong)uVar22) {
      if (4 < (byte)LogBuildPatchServices._0_1_) {
        local_2e0.Object = (FCulture *)0x0;
        local_2e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar13 = FText::AsNumber(&local_290,uVar22,(FNumberFormattingOptions *)0x0,&local_2e0);
        pFVar14 = FText::ToString(pFVar13);
        ::FString::FString(&local_348,pFVar14);
        if (local_290.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e0.SharedReferenceCount.ReferenceController);
        local_2d0.Object = (FCulture *)0x0;
        local_2d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar13 = FText::AsNumber(&local_280,this->TotalJobSize,(FNumberFormattingOptions *)0x0,
                                  &local_2d0);
        pFVar14 = FText::ToString(pFVar13);
        ::FString::FString(&local_358,pFVar14);
        if (local_280.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2d0.SharedReferenceCount.ReferenceController);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_358.Data.AllocatorInstance.Data);
        }
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
      }
      bVar9 = false;
    }
  }
  if ((this->Configuration).bInstallToMemory != false) {
    if (4 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    bVar9 = false;
  }
  ::operator/(&local_3f8,&(this->Configuration).MetaDirectory,L"$resumeData");
  local_1b8._0_8_ = this->FileSystem;
  local_1b8._8_8_ = (this->Configuration).ManifestSet;
  ::FString::FString((FString *)(local_1b8 + 0x10),&(this->Configuration).StagingDirectory);
  iVar11 = local_3f8.Data.ArrayNum;
  FVar17.Data = local_3f8.Data.AllocatorInstance.Data;
  local_1b8._40_4_ = local_3f8.Data.ArrayNum;
  local_1b8._32_8_ = (FScriptContainerElement *)0x0;
  if (local_3f8.Data.ArrayNum == 0) {
    local_1b8._44_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_3f8.Data.ArrayNum,0,(ForAnyElementType *)(local_1b8 + 0x20),
               local_3f8.Data.ArrayNum,(int *)(local_1b8 + 0x2c));
    memcpy((void *)local_1b8._32_8_,FVar17.Data,(longlong)iVar11 * 2);
  }
  local_1b8._48_8_ = 0;
  local_1b8._56_8_ = 0;
  local_1b8._80_8_ = 0;
  local_1b8._88_4_ = 0;
  local_1b8._92_4_ = 0x80;
  local_1b8._96_4_ = 0xffffffff;
  local_1b8._100_4_ = 0;
  local_1b8._112_8_ = (ForElementType<FSetElementId>)0x0;
  local_1b8._120_4_ = 0;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (uint *)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_e8._32_8_ = 0;
  local_e8._40_4_ = 0;
  local_e8._44_4_ = 0x80;
  local_e8._48_4_ = 0xffffffff;
  local_e8._52_4_ = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_48._0_1_ = false;
  local_48._1_1_ = false;
  if (bVar9) {
    pIVar15 = IFileManager::Get();
    if ((this->Configuration).MetaDirectory.Data.ArrayNum == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = (wchar_t *)(this->Configuration).MetaDirectory.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar15 + 0x60))(pIVar15,pwVar24,0);
    ::operator/(&local_408,&(this->Configuration).StagingDirectory,L"$resumeData");
    cVar10 = (**(code **)((longlong)*this->FileSystem + 0x80))();
    if (cVar10 != '\0') {
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar17.Data = local_408.Data.AllocatorInstance.Data;
      }
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_3f8.Data.ArrayNum != 0) {
        FVar23.Data = local_3f8.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*this->FileSystem + 0x70))(this->FileSystem,FVar23.Data,FVar17.Data);
    }
    FResumeData::InitResume((FResumeData *)local_1b8);
    if (local_48._0_1_ != false) {
      local_444 = (this->Configuration).ConstructList.ArrayNum;
      uVar16 = (ulonglong)(int)local_444;
      pFVar27 = (this->Configuration).ConstructList.AllocatorInstance.Data;
      pFVar29 = pFVar27 + uVar16 * 0x10;
      local_430 = pFVar29;
      while( true ) {
        if ((this->Configuration).ConstructList.ArrayNum != (int)uVar16) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_446);
        }
        iVar11 = 0;
        if (pFVar27 == pFVar29) break;
        FResumeData::CheckFile((FResumeData *)local_1b8,(FString *)pFVar27);
        if (*(int *)(pFVar27 + 8) == 0) {
          pwVar24 = L"";
          iVar25 = iVar11;
        }
        else {
          pwVar24 = *(wchar_t **)&pFVar27->field_0x0;
          iVar25 = *(int *)(pFVar27 + 8) + -1;
        }
        uVar33 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar25,pwVar24);
        iVar25 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                 FindIndexByHash<FString>(&local_98,uVar33,(FString *)pFVar27);
        if (iVar25 != -1) {
          this_00 = GetGlobalLogSingleton();
          FOutputDevice::LogfImpl
                    ((FOutputDevice *)this_00,
                     L"FBuildPatchFileConstructor: Deleting incompatible stage file %s");
          pIVar5 = this->FileSystem;
          iVar25 = (this->Configuration).StagingDirectory.Data.ArrayNum;
          pcVar6 = *(code **)((longlong)*pIVar5 + 0x68);
          iVar31 = *(int *)(pFVar27 + 8) + -1;
          if (*(int *)(pFVar27 + 8) == 0) {
            iVar31 = iVar11;
          }
          local_440.Data.ArrayNum = iVar25;
          if ((iVar25 == 0) && (iVar31 != -1)) {
            iVar11 = iVar31 + 2;
            pFVar29 = (this->Configuration).StagingDirectory.Data.AllocatorInstance.Data;
LAB_1431f232c:
            local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (iVar11 != 0) goto LAB_1431f233a;
            local_440.Data.ArrayMax = 0;
          }
          else {
            iVar11 = iVar31 + 1;
            pFVar29 = (this->Configuration).StagingDirectory.Data.AllocatorInstance.Data;
            if (iVar25 == 0) goto LAB_1431f232c;
LAB_1431f233a:
            local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            uVar33 = iVar25 + iVar11;
            if ((int)uVar33 < iVar25) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
            }
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar33,0,(ForAnyElementType *)&local_440,iVar25,&local_440.Data.ArrayMax)
            ;
            if (iVar25 != 0) {
              memcpy(local_440.Data.AllocatorInstance.Data,pFVar29,(longlong)iVar25 * 2);
            }
          }
          ::FString::PathAppend(&local_440,*(wchar_t **)&pFVar27->field_0x0,iVar31);
          (*pcVar6)(pIVar5);
          pFVar29 = local_430;
          if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_440.Data.AllocatorInstance.Data);
            pFVar29 = local_430;
          }
        }
        uVar16 = (ulonglong)local_444;
        pFVar27 = pFVar27 + 0x10;
      }
      if ((this->Configuration).bConstructInMemory != false) {
        if (4 < (byte)LogBuildPatchServices._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        }
        bVar9 = 1 < local_f0;
        if (!bVar9) {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_138);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_138,0,local_138._8_4_);
        bVar34 = local_138._12_4_ != 0;
        local_138._8_8_ = (ulonglong)(uint)local_138._12_4_ << 0x20;
        if (bVar34) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
        }
        local_108 = 0xffffffff;
        local_104 = 0;
        local_110 = 0;
        if (0x80 < local_10c) {
          local_10c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
        }
        if (bVar9) {
          local_f0 = 1;
          if (((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0)
             && (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                           (&local_f8,0,0,4),
                (ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0))
          {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
          }
          FVar17.Data = (FScriptContainerElement *)local_100;
          if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
            FVar17.Data = local_f8.Data;
          }
          *(undefined4 *)FVar17.Data = 0xffffffff;
          if (local_f0 != 0) {
            pTStack_420 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
            local_428 = 0;
            uStack_424 = 1;
            iStack_414 = 0;
            iStack_410 = 0;
            if (local_110 != 0) {
              puVar19 = (uint *)(local_138 + 0x10);
              if (local_118 != (uint *)0x0) {
                puVar19 = local_118;
              }
              uVar33 = *puVar19;
              while (uVar33 == 0) {
                iStack_410 = iStack_410 + 0x20;
                lVar12 = (longlong)local_428;
                local_428 = local_428 + 1;
                if ((int)(local_110 + -1 + (local_110 + -1 >> 0x1f & 0x1fU)) >> 5 < local_428)
                goto LAB_1431f25ec;
                uVar33 = (puVar19 + 1)[lVar12];
              }
              uStack_424 = -uVar33 & uVar33;
              uVar16 = (ulonglong)uStack_424 * 2 + 1;
              lVar12 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              iStack_414 = (int)lVar12 + -1 + iStack_410;
              if (local_110 < iStack_414) {
LAB_1431f25ec:
                iStack_414 = local_110;
              }
            }
            local_418 = 0xffffffff;
            local_338 = (longlong *)local_138;
            local_330._padding_ = CONCAT44(uStack_424,local_428);
            local_330.CurrentBitIndex = iStack_414;
            local_330.UnvisitedBitMask = 0xffffffff;
            local_330._28_4_ = uStack_40c;
            local_330.BaseBitIndex = iStack_410;
            local_330.Array = pTStack_420;
            iVar25 = iStack_414;
            if (iStack_414 < local_110) {
              do {
                puVar2 = (undefined8 *)(*local_338 + (longlong)iVar25 * 0x18);
                iVar31 = *(int *)(*local_338 + 8 + (longlong)iVar25 * 0x18);
                if (iVar31 == 0) {
                  pwVar24 = L"";
                  iVar31 = iVar11;
                }
                else {
                  pwVar24 = (wchar_t *)*puVar2;
                  iVar31 = iVar31 + -1;
                }
                uVar33 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar31,pwVar24);
                uVar33 = local_f0 - 1U & uVar33;
                *(uint *)((longlong)puVar2 + 0x14) = uVar33;
                FVar17.Data = (FScriptContainerElement *)local_100;
                if ((ForElementType<FSetElementId>)local_f8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar17.Data = local_f8.Data;
                }
                uVar16 = (longlong)local_f0 - 1U & (longlong)(int)uVar33;
                *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar17.Data + uVar16 * 4);
                *(int *)((longlong)FVar17.Data + uVar16 * 4) = iVar25;
                local_330.UnvisitedBitMask = local_330.UnvisitedBitMask & ~local_330._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_330);
                iVar25 = local_330.CurrentBitIndex;
              } while (local_330.CurrentBitIndex < (local_330.Array)->NumBits);
            }
          }
        }
      }
    }
    pIVar4 = (this->Configuration).ManifestSet;
    local_208._0_8_ = (FScriptContainerElement *)0x0;
    local_208._8_8_ = 0;
    local_1e8 = (void *)0x0;
    local_1e0 = 0;
    local_1dc = 0x80;
    local_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1c8 = (ForElementType<FSetElementId>)0x0;
    local_1c0 = 0;
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_208,0);
    uVar8 = local_1b8._0_8_;
    if (local_48._1_1_ != false) {
      pcVar6 = *(code **)((longlong)*(IFileSystem *)local_1b8._0_8_ + 0x60);
      pFVar14 = ::FString::Join<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                          (&local_270,
                           (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                           local_208,L"\n");
      pFVar27 = (FScriptContainerElement *)L"";
      if (local_1b8._40_4_ != 0) {
        pFVar27 = (FScriptContainerElement *)local_1b8._32_8_;
      }
      (*pcVar6)(uVar8,pFVar27,pFVar14);
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
    }
    local_1c0 = 0;
    if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_208,0,local_208._8_4_);
    bVar9 = local_208._12_4_ != 0;
    local_208._8_8_ = (ulonglong)(uint)local_208._12_4_ << 0x20;
    if (bVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_208,0,(int *)(local_208 + 0xc));
    }
    local_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1e0 = 0;
    if (0x80 < local_1dc) {
      local_1dc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10),0);
    }
    if (local_1e8 != (void *)0x0) {
      FMemory::Free(local_1e8);
    }
    if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_208._0_8_);
    }
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)((longlong)*this->FileConstructorStat + 8))();
  ConstructFiles(this,(FResumeData *)local_1b8);
  if (this->bIsDownloadStarted == false) {
    (**(code **)((longlong)*this->FileConstructorStat + 0x10))();
  }
  (**(code **)((longlong)*this->FileConstructorStat + 0x38))();
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8);
  local_f0 = 0;
  if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  local_1b8._120_4_ = 0;
  if ((ForElementType<FSetElementId>)local_1b8._112_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8._112_8_);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1b8 + 0x30));
  if ((FScriptContainerElement *)local_1b8._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._32_8_);
  }
  if ((FScriptContainerElement *)local_1b8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._16_8_);
  }
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  local_210 = 0;
  if (local_218 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_218);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_258);
  return;
}

// SetChunkLocation @ 1431fa470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::SetChunkLocation
          (FBuildPatchFileConstructor *this,FGuid *param_1,EConstructorChunkLocation param_2)

{
  IBuildManifestSet *pIVar1;
  int iVar2;
  ulong64 uVar3;
  longlong lVar4;
  EConstructorChunkLocation *pEVar5;
  undefined1 auStack_d8 [32];
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [40];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_d8;
  AcquireSRWLockExclusive((PSRWLOCK)&this->ChunkLocationsLock);
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>,TDefaultMapHashableKeyFuncs<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->ChunkLocations,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x1c + *(longlong *)&this->ChunkLocations;
    pEVar5 = (EConstructorChunkLocation *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      pEVar5 = (EConstructorChunkLocation *)0x0;
    }
    if (pEVar5 != (EConstructorChunkLocation *)0x0) {
      if ((*pEVar5 != Cloud) && (param_2 == Cloud)) {
        pIVar1 = (this->Configuration).ManifestSet;
        lVar4 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_1);
        if (6 < (byte)LogBuildPatchServices._0_1_) {
          local_b8.Base = local_98;
          local_b8.bIsDynamic = false;
          local_b8.bIsExternal = false;
          local_b8.CurPos = local_98;
          local_b8.End = (wchar_t *)local_48;
          FGuid::AppendString(param_1,&local_b8,DigitsWithHyphensLower);
          if (local_b8.End < local_b8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
          }
          *local_b8.CurPos = L'\0';
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
        }
        this->DownloadRequirement = this->DownloadRequirement + lVar4;
        (**(code **)((longlong)*this->CloudSource + 0x30))
                  (this->CloudSource,this->DownloadRequirement);
      }
      *pEVar5 = param_2;
      goto LAB_1431fa642;
    }
  }
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    local_b8.Base = local_98;
    local_b8.bIsDynamic = false;
    local_b8.bIsExternal = false;
    local_b8.CurPos = local_98;
    local_b8.End = (wchar_t *)local_48;
    FGuid::AppendString(param_1,&local_b8,DigitsWithHyphensLower);
    if (local_b8.End < local_b8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
    }
    *local_b8.CurPos = L'\0';
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  }
LAB_1431fa642:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ChunkLocationsLock);
  return;
}

// SetPaused @ 1431fa9a0

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::SetPaused
          (FBuildPatchFileConstructor *this,bool param_1)

{
  FThreadSafeBool FVar1;
  FThreadSafeBool FVar2;
  
  LOCK();
  FVar1 = this->bIsPaused;
  FVar2._1_3_ = 0;
  FVar2._0_1_ = param_1;
  this->bIsPaused = FVar2;
  UNLOCK();
  if ((FVar1 != (FThreadSafeBool)0x0) && (!param_1)) {
                    /* WARNING: Could not recover jumptable at 0x0001431fa9bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->WakeUpDispatchThreadEvent->_padding_ + 0x10))();
    return;
  }
  return;
}

// StartFile @ 1431fabd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::StartFile
          (FBuildPatchFileConstructor *this,FFileConstructionState *param_1,FResumeData *param_2)

{
  FGuid *pFVar1;
  ulonglong uVar2;
  int iVar3;
  FThreadSafeBool FVar4;
  FString *pFVar5;
  FFileManifest *pFVar6;
  IFileConstructorStat *pIVar7;
  IBuildManifestSet *pIVar8;
  FArchive *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  FResumeData *pFVar14;
  char cVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  DWORD DVar20;
  IFileManager *pIVar21;
  longlong *plVar22;
  ulong64 uVar23;
  char *pcVar24;
  wchar_t *pwVar25;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *pTVar26;
  longlong lVar27;
  byte bVar28;
  longlong lVar29;
  FScriptContainerElement *pFVar30;
  uint *puVar31;
  FScriptContainerElement *pFVar32;
  bool bVar33;
  undefined1 auStackY_238 [32];
  undefined1 local_207;
  undefined1 local_206 [6];
  FResumeData *local_200;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1f8;
  longlong local_1e8;
  FScriptContainerElement *local_1e0;
  ForAnyElementType local_1d8;
  long64 lStack_1d0;
  long64 local_1c8;
  TPairInitializer<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_&&> local_1c0;
  FFileConstructionState *local_1b0;
  undefined8 *local_1a8;
  FRecord local_1a0;
  IFileConstructorStat *local_188;
  longlong *local_180;
  uint uStack_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  uint local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FRecord local_120;
  IFileConstructorStat *local_108;
  FRecord local_100;
  IFileConstructorStat *local_e8;
  FString *local_e0;
  ForAnyElementType *local_d8;
  undefined4 local_b4;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar33 = -1 < CpuChannel->Enabled;
  local_200 = param_2;
  local_1b0 = param_1;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3288,"Constructor_StartFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
               ,0xcd8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3288);
  }
  iVar18 = 0;
  if (param_1->bSuccess != false) {
    pFVar5 = param_1->BuildFilename;
    uVar23 = param_1->FileManifest->FileSize;
    iVar3 = (pFVar5->Data).ArrayNum;
    if (iVar3 == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      iVar18 = iVar3 + -1;
    }
    uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar25);
    iVar18 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       (&param_2->FilesCompleted,uVar17,pFVar5);
    if (iVar18 == -1) {
      if ((param_1->bSuccess == false) && (1 < (param_1->FileManifest->SymlinkTarget).Data.ArrayNum)
         ) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("bSymlinkNotImplemented",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                            ,0xab5,L"");
        if (bVar16) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        param_1->bSuccess = false;
      }
      if (((this->Configuration).bInstallToMemory != false) ||
         ((this->Configuration).bConstructInMemory != false)) {
        local_1c8 = 0;
        local_1d8.Data = (FScriptContainerElement *)0x0;
        lStack_1d0 = 0;
        uVar23 = param_1->FileManifest->FileSize;
        if ((longlong)uVar23 < 1) {
          if ((longlong)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar23);
          }
        }
        else {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,uVar23,&local_1d8,&lStack_1d0,&local_1c8);
        }
        local_e0 = param_1->BuildFilename;
        local_d8 = &local_1d8;
        TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_&&>_>
                  ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                    *)&this->MemoryOutputFiles,&local_1c0,(bool *)&local_e0);
        if (local_1d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data);
        }
      }
    }
    else {
      this->ByteProcessed = this->ByteProcessed + uVar23;
      (**(code **)((longlong)*this->FileConstructorStat + 0x40))
                (this->FileConstructorStat,this->ByteProcessed);
      if (3 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      pFVar6 = param_1->FileManifest;
      iVar18 = (pFVar6->ChunkParts).ArrayNum;
      pFVar30 = (pFVar6->ChunkParts).AllocatorInstance.Data;
      pFVar32 = pFVar30 + (longlong)iVar18 * 0x18;
      while( true ) {
        if ((pFVar6->ChunkParts).ArrayNum != iVar18) {
          local_207 = 0;
          `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_207);
        }
        if (pFVar30 == pFVar32) goto LAB_1431fad71;
        cVar15 = (**(code **)((longlong)*this->ChunkReferenceTracker + 0x30))
                           (this->ChunkReferenceTracker,pFVar30);
        if (cVar15 == '\0') break;
        pFVar30 = pFVar30 + 0x18;
      }
      param_1->bSuccess = false;
      param_1->ConstructionError = TrackingError;
LAB_1431fad71:
      param_1->bSkippedConstruction = true;
      param_2 = local_200;
    }
  }
  if (param_1->bSkippedConstruction == false) {
    pFVar5 = param_1->BuildFilename;
    uVar17 = 0;
    iVar18 = (pFVar5->Data).ArrayNum;
    if (iVar18 == 0) {
      pwVar25 = L"";
      iVar18 = 0;
    }
    else {
      pwVar25 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      iVar18 = iVar18 + -1;
    }
    uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar25);
    iVar18 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       (&param_2->FilesStarted,uVar19,pFVar5);
    if (iVar18 != -1) {
      if ((param_1->bSuccess != false) && (param_1->bSkippedConstruction == false)) {
        if (((this->Configuration).bInstallToMemory != false) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Configuration.bInstallToMemory",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                                ,0xb06,L""), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (((this->Configuration).bConstructInMemory != false) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Configuration.bConstructInMemory",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                                ,0xb07,L""), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pIVar21 = IFileManager::Get();
        if ((param_1->NewFilename).Data.ArrayNum == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = (wchar_t *)(param_1->NewFilename).Data.AllocatorInstance.Data;
        }
        plVar22 = (longlong *)(**(code **)((longlong)*pIVar21 + 0x18))(pIVar21,pwVar25,0);
        if (plVar22 != (longlong *)0x0) {
          local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1f8.ArrayNum = 0;
          local_1f8.ArrayMax = 0;
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x400000,&local_1f8.AllocatorInstance,&local_1f8.ArrayNum,
                     &local_1f8.ArrayMax);
          local_1c0.Value =
               (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
               (**(code **)(*plVar22 + 0x30))(plVar22);
          fVar13 = __real_3f000000;
          local_1e8 = 0;
          if (0 < (param_1->FileManifest->ChunkParts).ArrayNum) {
            local_200 = (FResumeData *)0x0;
            do {
              pFVar14 = local_200;
              if (this->bShouldAbort != (FThreadSafeBool)0x0) break;
              pFVar6 = param_1->FileManifest;
              uVar19 = 0;
              if ((int)uVar17 < (pFVar6->ChunkParts).ArrayNum) {
                uVar19 = ~uVar17 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar32 = (pFVar6->ChunkParts).AllocatorInstance.Data + -0x30 +
                        (longlong)(&(pFVar14->LoadedResumeIds).Hash + -4) + 8;
              local_1e8 = local_1e8 + (ulonglong)*(uint *)(pFVar32 + 0x14);
              local_1e0 = pFVar32;
              if ((longlong)local_1c0.Value < local_1e8) break;
              TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                        (&local_1f8,*(uint *)(pFVar32 + 0x14),No);
              uVar19 = *(uint *)(pFVar32 + 0x14);
              pIVar7 = this->FileConstructorStat;
              ISpeedRecorder::FRecord::FRecord(&local_1a0);
              local_188 = pIVar7;
              local_1a0.CyclesStart = FStatsCollector::GetCycles();
              local_1a0.Size = (ulonglong)uVar19;
              (**(code **)((longlong)*local_188 + 0x60))();
              pFVar32 = local_1e0;
              (**(code **)(*plVar22 + 0x188))
                        (plVar22,local_1f8.AllocatorInstance.Data,*(undefined4 *)(local_1e0 + 0x14))
              ;
              local_1a0.CyclesEnd = FStatsCollector::GetCycles();
              (**(code **)((longlong)*local_188 + 0x68))(local_188,&local_1a0);
              FSHA1::Update(&param_1->HashState,(uchar *)local_1f8.AllocatorInstance.Data,
                            (ulonglong)*(uint *)(pFVar32 + 0x14));
              param_1->StartPosition = local_1e8;
              param_1->NextChunkPartToRead = uVar17 + 1;
              cVar15 = (**(code **)((longlong)*this->ChunkReferenceTracker + 0x30))
                                 (this->ChunkReferenceTracker,pFVar32);
              if (cVar15 == '\0') {
                param_1->bSuccess = false;
                param_1->ConstructionError = TrackingError;
                uVar11 = *(undefined8 *)pFVar32;
                uVar12 = *(undefined8 *)(pFVar32 + 8);
                (param_1->ErrorContextGuid).A = (int)uVar11;
                (param_1->ErrorContextGuid).B = (int)((ulonglong)uVar11 >> 0x20);
                (param_1->ErrorContextGuid).C = (int)uVar12;
                (param_1->ErrorContextGuid).D = (int)((ulonglong)uVar12 >> 0x20);
                break;
              }
              this->ByteProcessed = this->ByteProcessed + (ulonglong)*(uint *)(pFVar32 + 0x14);
              (**(code **)((longlong)*this->FileConstructorStat + 0x40))
                        (this->FileConstructorStat,this->ByteProcessed);
              pIVar7 = this->FileConstructorStat;
              pcVar10 = *(code **)((longlong)*pIVar7 + 0x28);
              (**(code **)(*plVar22 + 0x28))(plVar22);
              (*pcVar10)(pIVar7,param_1->BuildFilename);
              FVar4 = this->bIsPaused;
              while ((FVar4 != (FThreadSafeBool)0x0 && (this->bShouldAbort == (FThreadSafeBool)0x0))
                    ) {
                FWindowsPlatformProcess::Sleep(fVar13);
                FVar4 = this->bIsPaused;
              }
              uVar17 = uVar17 + 1;
              local_200 = (FResumeData *)&(local_200->StagingDir).Data.ArrayNum;
            } while ((int)uVar17 < (param_1->FileManifest->ChunkParts).ArrayNum);
          }
          (**(code **)(*plVar22 + 0x210))(plVar22);
          param_1->bIsResumedFile = true;
          if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.AllocatorInstance.Data);
          }
          (**(code **)*plVar22)(plVar22,1);
        }
      }
      (**(code **)((longlong)*this->ChunkReferenceTracker + 8))
                (this->ChunkReferenceTracker,local_a8);
      local_1e0 = (FScriptContainerElement *)0x0;
      AcquireSRWLockExclusive((PSRWLOCK)&this->ChunkLocationsLock);
      uVar17 = local_80;
      uStack_178 = 0;
      uStack_174 = 1;
      uStack_164 = uStack_178;
      local_160 = uStack_178;
      if (local_80 != 0) {
        puVar31 = (uint *)(local_a8 + 0x10);
        if (local_88 != (uint *)0x0) {
          puVar31 = local_88;
        }
        uVar19 = *puVar31;
        local_160 = 0;
        uStack_178 = 0;
        while (uVar19 == 0) {
          lVar29 = (longlong)(int)uStack_178;
          local_160 = local_160 + 0x20;
          uStack_178 = uStack_178 + 1;
          uStack_164 = local_80;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_178)
          goto LAB_1431fb2b1;
          uVar19 = puVar31[lVar29 + 1];
        }
        uStack_174 = -uVar19 & uVar19;
        uVar2 = (ulonglong)uStack_174 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        local_1c0.Key._4_4_ = (int)lVar29;
        uStack_164 = (local_160 - 1) + local_1c0.Key._4_4_;
        if ((int)local_80 < (int)uStack_164) {
          uStack_164 = local_80;
        }
      }
LAB_1431fb2b1:
      local_180 = (longlong *)local_a8;
      uStack_15c = local_b4;
      local_170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
      uVar19 = local_80 & 0xffffffe0;
      iStack_158 = local_a8._8_4_ - local_74;
      uStack_168 = 0xffffffff;
      TStack_148.CurrentBitIndex = uStack_164;
      TStack_148.UnvisitedBitMask = 0xffffffff;
      TStack_148._padding_ = CONCAT44(uStack_174,uStack_178);
      iVar18 = (int)local_80 >> 5;
      TStack_148._28_4_ = local_b4;
      TStack_148.BaseBitIndex = local_160;
      uStack_128 = CONCAT44(uStack_154,iStack_158);
      bVar28 = (byte)local_80;
      local_150 = local_180;
      TStack_148.Array = local_170;
      if (((int)local_80 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar17 != local_80) {
        puVar31 = (uint *)(local_a8 + 0x10);
        if (local_88 != (uint *)0x0) {
          puVar31 = local_88;
        }
        uVar17 = -1 << (bVar28 & 0x1f) & puVar31[iVar18];
        while (uVar17 == 0) {
          lVar29 = (longlong)iVar18;
          uVar19 = uVar19 + 0x20;
          iVar18 = iVar18 + 1;
          uVar17 = local_80;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_1431fb3c3;
          uVar17 = puVar31[lVar29 + 1];
        }
        uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar29 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        uVar17 = (uVar19 - 1) + (int)lVar29;
        if ((int)local_80 < (int)uVar17) {
          uVar17 = local_80;
        }
      }
LAB_1431fb3c3:
      pFVar32 = local_1e0;
      while( true ) {
        plVar22 = local_150;
        if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
          `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_206);
        }
        if (((TStack_148.CurrentBitIndex == uVar17) &&
            (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
           (plVar22 == (longlong *)local_a8)) break;
        pFVar1 = (FGuid *)(*plVar22 + (longlong)TStack_148.CurrentBitIndex * 0x18);
        uVar23 = CityHash64((char *)pFVar1,0x10);
        iVar18 = TSet<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>,TDefaultMapHashableKeyFuncs<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FGuid>(&this->ChunkLocations,(uint)uVar23,pFVar1);
        if (iVar18 != -1) {
          lVar29 = (longlong)iVar18 * 0x1c + *(longlong *)&this->ChunkLocations;
          pcVar24 = (char *)(lVar29 + 0x10);
          if (lVar29 == 0) {
            pcVar24 = (char *)0x0;
          }
          if ((pcVar24 != (char *)0x0) && (*pcVar24 == '\x04')) {
            pIVar8 = (this->Configuration).ManifestSet;
            lVar29 = (**(code **)((longlong)*pIVar8 + 0x30))(pIVar8,pFVar1);
            pFVar32 = pFVar32 + *(longlong *)(lVar29 + 0x38);
          }
        }
        TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
      }
      this->DownloadRequirement = (ulong64)pFVar32;
      (**(code **)((longlong)*this->CloudSource + 0x30))(this->CloudSource,pFVar32);
      ReleaseSRWLockExclusive((PSRWLOCK)&this->ChunkLocationsLock);
      param_1 = local_1b0;
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
    }
    bVar16 = HandleInitialDiskSizeCheck(this,param_1->FileManifest,param_1->StartPosition);
    if (!bVar16) {
      param_1->bSuccess = false;
      param_1->ConstructionError = FailedInitialSizeCheck;
    }
    if (this->bIsDownloadStarted == false) {
      this->bIsDownloadStarted = true;
      (**(code **)((longlong)*this->FileConstructorStat + 0x10))();
    }
    if (((param_1->bSuccess != false) && (param_1->bSkippedConstruction == false)) &&
       (((this->Configuration).bInstallToMemory == false &&
        ((this->Configuration).bConstructInMemory == false)))) {
      pIVar7 = this->FileConstructorStat;
      ISpeedRecorder::FRecord::FRecord(&local_120);
      local_108 = pIVar7;
      (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7);
      local_120.CyclesStart = FStatsCollector::GetCycles();
      if ((param_1->NewFilename).Data.ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(param_1->NewFilename).Data.AllocatorInstance.Data;
      }
      pTVar26 = (TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *)
                (**(code **)((longlong)*this->FileSystem + 0x50))
                          (this->FileSystem,&local_1a8,pwVar25,
                           -(param_1->bIsResumedFile != false) & 8);
      TUniquePtr<FArchive,TDefaultDelete<FArchive>_>::operator=(&param_1->NewFile,pTVar26);
      if (local_1a8 != (undefined8 *)0x0) {
        (**(code **)*local_1a8)(local_1a8,1);
      }
      DVar20 = FWindowsPlatformMisc::GetLastError();
      param_1->CreateFilePlatformLastError = DVar20;
      local_120.CyclesEnd = FStatsCollector::GetCycles();
      local_120.Size = 0;
      (**(code **)((longlong)*local_108 + 0x58))(local_108,&local_120);
      pFVar9 = (param_1->NewFile).Ptr;
      param_1->bSuccess = pFVar9 != (FArchive *)0x0;
      if (pFVar9 == (FArchive *)0x0) {
        param_1->ConstructionError = CannotCreateFile;
      }
      else {
        lVar29 = param_1->StartPosition;
        lVar27 = (**(code **)(*(longlong *)pFVar9 + 0x28))();
        if (lVar27 != lVar29) {
          pIVar7 = this->FileConstructorStat;
          ISpeedRecorder::FRecord::FRecord(&local_100);
          local_e8 = pIVar7;
          (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7);
          local_100.CyclesStart = FStatsCollector::GetCycles();
          pFVar9 = (param_1->NewFile).Ptr;
          (**(code **)(*(longlong *)pFVar9 + 0x1b8))(pFVar9,param_1->StartPosition);
          local_100.CyclesEnd = FStatsCollector::GetCycles();
          local_100.Size = 0;
          (**(code **)((longlong)*local_e8 + 0x58))(local_e8,&local_100);
        }
        param_1->Progress = param_1->StartPosition;
        param_1->LastSeenProgress = param_1->StartPosition;
      }
    }
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StartReadBatch @ 1431fb830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::StartReadBatch
          (FBuildPatchFileConstructor *this,FFileConstructionState *param_1,FBatchState *param_2)

{
  int *piVar1;
  uint uVar2;
  IBuildManifestSet *pIVar3;
  ForElementType<FRequestInfo::FRequestSplat> FVar4;
  undefined1 *puVar5;
  code *pcVar6;
  FFileConstructionState *pFVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  ulong64 uVar11;
  FRequestInfo *pFVar12;
  longlong lVar13;
  byte *pbVar14;
  longlong lVar15;
  TMemoryView<void> *pTVar16;
  undefined8 *puVar17;
  byte bVar18;
  longlong *plVar19;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar20;
  uint uVar21;
  FFileManifest *pFVar22;
  ForElementType<FRequestInfo::FRequestSplat> FVar23;
  uint *puVar24;
  longlong lVar25;
  TMap<FGuid,FRequestInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>_>
  *pTVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  FGuid *pFVar30;
  FChunkBackingStore *pFVar31;
  ulonglong uVar32;
  undefined1 *puVar33;
  bool bVar34;
  undefined1 auStackY_2b8 [32];
  undefined1 local_287 [3];
  uint local_284;
  int local_280 [2];
  FBatchState *local_278;
  int local_270;
  uint uStack_26c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_268;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  undefined4 uStack_254;
  uint local_250;
  FFileConstructionState *local_248;
  TBitArray<FDefaultBitArrayAllocator> *local_240;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  FDelegateAllocation local_230;
  int local_220;
  int local_21c;
  TMap<FGuid,FRequestInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>_>
  *local_218;
  int iStack_210;
  uint uStack_20c;
  undefined1 *local_208;
  undefined4 uStack_200;
  int iStack_1fc;
  int local_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  TMap<FGuid,FRequestInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>_>
  *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  uint local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  FDestructionSentinel local_148;
  FDelegateAllocation *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  TMemoryView<void> local_118 [2];
  undefined4 local_ec;
  undefined1 local_e8 [16];
  TBitArray<FDefaultBitArrayAllocator> *apTStack_d8 [3];
  TBitArray<FDefaultBitArrayAllocator> **local_c0;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [40];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  param_1->OutstandingBatches = param_1->OutstandingBatches + 1;
  local_278 = param_2;
  local_248 = param_1;
  TSet<TTuple<FGuid,FRequestInfo>,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGuid,FRequestInfo>,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>,FDefaultSetAllocator>
           *)&param_2->Requests);
  uVar27 = param_1->NextChunkPartToRead;
  uVar29 = (ulonglong)(int)uVar27;
  param_2->StartChunkPartIndex = uVar27;
  bVar34 = -1 < CpuChannel->Enabled;
  local_284 = uVar27;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2526,"CFFC_Count",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
               ,0x9de);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2526);
  }
  pFVar7 = local_248;
  pFVar22 = param_1->FileManifest;
  uVar32 = 0;
  if ((int)uVar27 < (pFVar22->ChunkParts).ArrayNum) {
    lVar25 = uVar29 * 0x18;
    do {
      uVar27 = 0;
      if ((int)(uint)uVar29 < (pFVar22->ChunkParts).ArrayNum) {
        uVar27 = ~(uint)uVar29 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar30 = (FGuid *)((pFVar22->ChunkParts).AllocatorInstance.Data + lVar25);
      uVar27 = local_284;
      if ((param_2->BatchBuffer).Size < pFVar30[1].B + uVar32) break;
      uVar11 = CityHash64((char *)pFVar30,0x10);
      pFVar12 = TMapBase<FGuid,FRequestInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>_>
                ::FindOrAddImpl<FGuid_const_&>
                          ((TMapBase<FGuid,FRequestInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>_>
                            *)&param_2->Requests,(uint)uVar11,pFVar30);
      uVar27 = pFVar30->B;
      uVar28 = pFVar30->C;
      uVar21 = pFVar30->D;
      (pFVar12->Guid).A = pFVar30->A;
      (pFVar12->Guid).B = uVar27;
      (pFVar12->Guid).C = uVar28;
      (pFVar12->Guid).D = uVar21;
      pFVar12->Batch = param_2;
      pIVar3 = (this->Configuration).ManifestSet;
      lVar13 = (**(code **)((longlong)*pIVar3 + 0x30))(pIVar3,pFVar30);
      uVar27 = *(uint *)(lVar13 + 0x30);
      pFVar12->ChunkIndexInFile = local_284;
      pFVar12->ChunkSize = uVar27;
      pFVar12->File = pFVar7;
      iVar9 = (pFVar12->Splats).ArrayNum;
      piVar1 = &(pFVar12->Splats).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRequestInfo::FRequestSplat>_>
                          (0x810,&(pFVar12->Splats).AllocatorInstance,piVar1);
      }
      (pFVar12->Splats).ArrayNum = iVar9 + 1;
      FVar4 = (pFVar12->Splats).AllocatorInstance.SecondaryData;
      FVar23 = (ForElementType<FRequestInfo::FRequestSplat>)&pFVar12->Splats;
      if (FVar4 != (ForElementType<FRequestInfo::FRequestSplat>)0x0) {
        FVar23 = FVar4;
      }
      lVar13 = (longlong)iVar9;
      lVar25 = lVar25 + 0x18;
      *(ulonglong *)((longlong)FVar23 + lVar13 * 0x10) = uVar32;
      *(uint *)((uchar *)((longlong)FVar23 + 8) + lVar13 * 0x10) = pFVar30[1].A;
      *(uint *)((uchar *)((longlong)FVar23 + 0xc) + lVar13 * 0x10) = pFVar30[1].B;
      uVar32 = uVar32 + pFVar30[1].B;
      pFVar22 = pFVar7->FileManifest;
      uVar27 = local_284 + 1;
      uVar29 = (ulonglong)uVar27;
      local_284 = uVar27;
    } while ((int)uVar27 < (pFVar22->ChunkParts).ArrayNum);
  }
  pTVar26 = &param_2->Requests;
  if ((param_2->BatchBuffer).Size < uVar32) {
    uVar32 = (param_2->BatchBuffer).Size;
  }
  (param_2->BatchBuffer).Size = uVar32;
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  puVar33 = &(param_2->Requests).field_0x10;
  iStack_210 = 0;
  param_2->ChunkCount = uVar27 - param_2->StartChunkPartIndex;
  local_1f8 = 0;
  uStack_20c = 1;
  LOCK();
  param_2->PendingRequestCount =
       (atomic<int>)
       (*(int *)&(param_2->Requests).field_0x8 - *(int *)&(param_2->Requests).field_0x34);
  UNLOCK();
  LOCK();
  param_2->FailedRequestCount = (atomic<int>)0x0;
  UNLOCK();
  iVar9 = *(int *)&(param_2->Requests).field_0x28;
  iStack_1fc = 0;
  if (iVar9 != 0) {
    puVar24 = *(uint **)&(param_2->Requests).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar33;
    }
    uVar27 = *puVar24;
    while (uVar27 == 0) {
      lVar25 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      iStack_1fc = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_210) goto LAB_1431fbafd;
      uVar27 = puVar24[lVar25 + 1];
    }
    uStack_20c = -uVar27 & uVar27;
    uVar29 = (ulonglong)uStack_20c * 2 + 1;
    lVar25 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_220 = (int)lVar25;
    iStack_1fc = local_1f8 + -1 + local_220;
    if (iVar9 < iStack_1fc) {
      iStack_1fc = iVar9;
    }
  }
LAB_1431fbafd:
  uStack_1f4 = local_ec;
  iStack_1f0 = *(int *)&(param_2->Requests).field_0x8 - *(int *)&(param_2->Requests).field_0x34;
  uVar27 = *(uint *)&(param_2->Requests).field_0x28;
  iVar9 = (int)uVar27 >> 5;
  bVar18 = (byte)uVar27 & 0x1f;
  TStack_1e0._padding_ = CONCAT44(uStack_20c,iStack_210);
  uStack_26c = 1 << bVar18;
  uVar28 = -1 << bVar18;
  uVar21 = uVar27 & 0xffffffe0;
  uStack_200 = 0xffffffff;
  TStack_1e0.CurrentBitIndex = iStack_1fc;
  TStack_1e0.UnvisitedBitMask = 0xffffffff;
  TStack_1e0._28_4_ = local_ec;
  TStack_1e0.BaseBitIndex = local_1f8;
  uStack_1c0 = CONCAT44(uStack_1ec,iStack_1f0);
  local_270 = iVar9;
  pTStack_268 = (TBitArray<FDefaultBitArrayAllocator> *)puVar33;
  local_260 = uVar28;
  uStack_25c = uVar27;
  uStack_258 = uVar21;
  local_218 = pTVar26;
  local_208 = puVar33;
  local_1e8 = pTVar26;
  TStack_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar33;
  if (((int)uVar27 < 0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar34)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = *(uint *)&(param_2->Requests).field_0x28;
  if (uVar27 != uVar2) {
    puVar5 = *(undefined1 **)&(param_2->Requests).field_0x20;
    if (puVar5 != (undefined1 *)0x0) {
      puVar33 = puVar5;
    }
    uVar28 = uVar28 & *(uint *)(puVar33 + (longlong)iVar9 * 4);
    while (uVar28 == 0) {
      uStack_258 = uVar21 + 0x20;
      local_270 = iVar9 + 1;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < local_270)
      goto LAB_1431fbc40;
      uVar28 = *(uint *)(puVar33 + (longlong)iVar9 * 4 + 4);
      local_260 = 0xffffffff;
      iVar9 = local_270;
      uVar21 = uStack_258;
    }
    uStack_26c = -uVar28 & uVar28;
    uVar29 = (ulonglong)uStack_26c * 2 + 1;
    lVar25 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_21c = (int)lVar25;
    uStack_25c = (uVar21 - 1) + local_21c;
    if ((int)uVar2 < (int)uStack_25c) {
LAB_1431fbc40:
      uStack_25c = uVar2;
    }
  }
  local_e8._12_4_ = uStack_26c;
  local_e8._8_4_ = local_270;
  apTStack_d8[1]._4_4_ = uStack_25c;
  apTStack_d8[1]._0_4_ = local_260;
  apTStack_d8[2]._4_4_ = uStack_254;
  apTStack_d8[2]._0_4_ = uStack_258;
  apTStack_d8[0] = pTStack_268;
  local_240 = pTStack_268;
  local_250 = uStack_25c;
  do {
    pTVar26 = local_1e8;
    uVar27 = local_250;
    if (*(int *)&local_1e8->field_0x8 - *(int *)&local_1e8->field_0x34 != (int)uStack_1c0) {
      local_287[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FRequestInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_287);
    }
    if (((TStack_1e0.CurrentBitIndex == uVar27) && (TStack_1e0.Array == local_240)) &&
       (pTVar26 == &param_2->Requests)) {
      local_248->NextChunkPartToRead = local_284;
      return;
    }
    uVar11 = (param_2->BatchBuffer).Size;
    lVar25 = (longlong)TStack_1e0.CurrentBitIndex * 0x90 + *(longlong *)pTVar26;
    *(void **)(lVar25 + 0x60) = (param_2->BatchBuffer).Data;
    *(ulong64 *)(lVar25 + 0x68) = uVar11;
    pFVar30 = (FGuid *)(lVar25 + 0x10);
    uVar11 = CityHash64((char *)pFVar30,0x10);
    iVar9 = TSet<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>,TDefaultMapHashableKeyFuncs<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>(&this->ChunkLocations,(uint)uVar11,pFVar30);
    if (iVar9 == -1) {
LAB_1431fbe44:
      param_2->Error = InternalConsistencyError;
      *(undefined2 *)(lVar25 + 0x7a) = 1;
      LOCK();
      piVar1 = (int *)(*(longlong *)(lVar25 + 0x58) + 0x58);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        *(undefined1 *)(*(longlong *)(lVar25 + 0x58) + 0x9c) = 1;
        (**(code **)(this->WakeUpDispatchThreadEvent->_padding_ + 0x10))();
      }
    }
    else {
      lVar13 = (longlong)iVar9 * 0x1c + *(longlong *)&this->ChunkLocations;
      pbVar14 = (byte *)(lVar13 + 0x10);
      if (lVar13 == 0) {
        pbVar14 = (byte *)0x0;
      }
      if (pbVar14 == (byte *)0x0) goto LAB_1431fbe44;
      bVar18 = *pbVar14;
      *(bool *)(lVar25 + 0x79) = bVar18 == 2;
      if (bVar18 == 2) {
        pFVar31 = (this->BackingStore).Ptr;
        uVar11 = CityHash64((char *)pFVar30,0x10);
        iVar9 = TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FGuid>
                          ((TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                            *)&pFVar31->StoredChunks,(uint)uVar11,pFVar30);
        if (iVar9 == -1) {
LAB_1431fbd95:
          param_2 = local_278;
          if (1 < (byte)LogBuildPatchServices._0_1_) {
            local_b8.Base = local_98;
            local_b8.bIsDynamic = false;
            local_b8.bIsExternal = false;
            local_b8.CurPos = local_98;
            local_b8.End = (wchar_t *)local_48;
            FGuid::AppendString(pFVar30,&local_b8,DigitsWithHyphensLower);
            if (local_b8.End < local_b8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
            }
            *local_b8.CurPos = L'\0';
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)
                       &`public:_bool___cdecl_FChunkBackingStore::LockEntry(FGuid_const&___ptr64)___ptr64'
                        ::__l6::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
            param_2 = local_278;
          }
          goto LAB_1431fbe44;
        }
        lVar15 = (longlong)iVar9 * 0x38 + *(longlong *)&pFVar31->StoredChunks;
        lVar13 = lVar15 + 0x10;
        if (lVar15 == 0) {
          lVar13 = 0;
        }
        if (lVar13 == 0) goto LAB_1431fbd95;
        *(short *)(lVar13 + 0x1e) = *(short *)(lVar13 + 0x1e) + 1;
        RequestCompletedFn(this,pFVar30,false,false,pFVar30);
        param_2 = local_278;
      }
      else {
        pFVar31 = (FChunkBackingStore *)0x0;
        if (bVar18 == 0) {
          pFVar31 = (FChunkBackingStore *)this->InstallSource;
LAB_1431fbebf:
          if (pFVar31 == (FChunkBackingStore *)this->CloudSource) goto LAB_1431fbec8;
        }
        else {
          if (bVar18 == 1) {
            pFVar31 = (FChunkBackingStore *)this->ChunkDbSource;
            goto LAB_1431fbebf;
          }
          if (bVar18 == 3) {
            pFVar31 = (this->BackingStore).Ptr;
            goto LAB_1431fbebf;
          }
          if (bVar18 != 4) goto LAB_1431fbebf;
          pFVar31 = (FChunkBackingStore *)this->CloudSource;
LAB_1431fbec8:
          *(undefined1 *)(lVar25 + 0x7c) = 1;
          if (this->bHasChunkDbSource != false) {
            local_1b4 = pFVar30->A;
            uStack_1b0 = *(undefined4 *)(lVar25 + 0x14);
            uStack_1ac = *(undefined4 *)(lVar25 + 0x18);
            uStack_1a8 = *(undefined4 *)(lVar25 + 0x1c);
            local_1b8 = 0;
            local_1a0 = 0;
            local_180 = 0;
            local_168 = 0;
            local_160 = 0;
            uStack_198 = 0;
            local_158 = 0;
            local_190 = 0;
            local_150 = 0;
            uStack_188 = 0;
            local_17c = local_1b4;
            uStack_178 = uStack_1b0;
            uStack_174 = uStack_1ac;
            uStack_170 = uStack_1a8;
            (**(code **)((longlong)*this->MessagePump + 0x10))(this->MessagePump,&local_180);
          }
        }
        local_280[0] = 0;
        (**(code **)((longlong)*this->ChunkReferenceTracker + 0x48))
                  (this->ChunkReferenceTracker,pFVar30,local_280);
        uVar10 = (**(code **)(pFVar31->_padding_ + 0x10))(pFVar31);
        *(undefined4 *)(lVar25 + 0x84) = uVar10;
        if (*(int *)(lVar25 + 0x40) == 1) {
          lVar13 = lVar25 + 0x28;
          if (*(longlong *)(lVar25 + 0x38) != 0) {
            lVar13 = *(longlong *)(lVar25 + 0x38);
          }
          if (*(int *)(lVar13 + 0xc) != *(int *)(lVar25 + 0x20)) goto LAB_1431fbfbb;
          if ((*(int *)(lVar25 + 0x40) < 1) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar13 = lVar25 + 0x28;
          if (*(longlong *)(lVar25 + 0x38) != 0) {
            lVar13 = *(longlong *)(lVar25 + 0x38);
          }
          if (*(int *)(lVar13 + 8) != 0) goto LAB_1431fbfbb;
          bVar34 = true;
        }
        else {
LAB_1431fbfbb:
          bVar34 = false;
        }
        if ((local_248->BaseReferenceIndex + *(int *)(lVar25 + 0x80) < local_280[0]) &&
           (*(int *)(lVar25 + 0x84) <= local_280[0])) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if ((!bVar34) || (bVar8)) {
          pTVar16 = FChunkBackingStore::ReserveAndLockEntry
                              ((this->BackingStore).Ptr,local_118,pFVar30,*(uint *)(lVar25 + 0x20),
                               local_280[0]);
          uVar11 = pTVar16->Size;
          *(void **)(lVar25 + 0x48) = pTVar16->Data;
          *(ulong64 *)(lVar25 + 0x50) = uVar11;
          param_2 = local_278;
          if (*(longlong *)(lVar25 + 0x50) == 0) goto LAB_1431fbe44;
          *(undefined1 *)(lVar25 + 0x78) = 1;
          SetChunkLocation(this,(FGuid *)(lVar25 + 0x10),Memory);
        }
        else {
          if ((*(int *)(lVar25 + 0x40) < 1) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar19 = (longlong *)(lVar25 + 0x28);
          if (*(longlong **)(lVar25 + 0x38) != (longlong *)0x0) {
            plVar19 = *(longlong **)(lVar25 + 0x38);
          }
          uVar27 = *(uint *)((longlong)plVar19 + 0xc);
          if ((*(int *)(lVar25 + 0x40) < 1) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar19 = (longlong *)(lVar25 + 0x28);
          if (*(longlong **)(lVar25 + 0x38) != (longlong *)0x0) {
            plVar19 = *(longlong **)(lVar25 + 0x38);
          }
          *(longlong *)(lVar25 + 0x48) = *(longlong *)(lVar25 + 0x60) + *plVar19;
          *(ulonglong *)(lVar25 + 0x50) = (ulonglong)uVar27;
        }
        pcVar6 = *(code **)(pFVar31->_padding_ + 8);
        local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_230.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_230.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_238,(FWriteAccessScope *)&local_148);
        local_130 = &local_230;
        puVar17 = UE::Core::Private::DelegateAllocate(0x28,&local_230);
        if (puVar17 != (undefined8 *)0x0) {
          *puVar17 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar17[2] = uVar11;
          *puVar17 = &
                     ___7__TBaseRawMethodDelegateInstance__0A_VFBuildPatchFileConstructor_BuildPatchServices____A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar17[4] = RequestCompletedFn;
          puVar17[3] = this;
        }
        if (local_148.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
        }
        local_128 = *(undefined4 *)(lVar25 + 0x48);
        uStack_124 = *(undefined4 *)(lVar25 + 0x4c);
        uStack_120 = *(undefined4 *)(lVar25 + 0x50);
        uStack_11c = *(undefined4 *)(lVar25 + 0x54);
        (*pcVar6)(pFVar31,local_e8,pFVar30);
        QueueGenericThreadTask
                  (this,(int)this->ThreadAssignments[bVar18],
                   (TUniqueFunction<void___cdecl(bool)> *)local_e8);
        param_2 = local_278;
        if (local_e8._0_8_ != 0) {
          ppTVar20 = apTStack_d8;
          if (local_c0 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
            ppTVar20 = local_c0;
          }
          (*(code *)((*ppTVar20)->AllocatorInstance).SecondaryData)();
          param_2 = local_278;
        }
      }
    }
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  } while( true );
}

// WakeUpDispatch @ 1431fed80

void __thiscall
BuildPatchServices::FBuildPatchFileConstructor::WakeUpDispatch(FBuildPatchFileConstructor *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001431fed8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->WakeUpDispatchThreadEvent->_padding_ + 0x10))();
  return;
}

