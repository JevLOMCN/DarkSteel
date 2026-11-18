// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 43

// FImgMediaLoader @ 14ea38520

/* WARNING: Enum "Type": Some values do not have unique names */

FImgMediaLoader * __thiscall
FImgMediaLoader::FImgMediaLoader
          (FImgMediaLoader *this,TSharedRef<FImgMediaScheduler,1> *param_1,
          TSharedRef<FImgMediaGlobalCache,1> *param_2,TSharedPtr<FImgMediaMipMapInfo,1> *param_3,
          TSharedPtr<FNativeMediaSourceColorSettings,1> *param_4,bool param_5,
          FImgMediaLoaderSmartCacheSettings *param_6)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  FName local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FImgMediaLoader__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  *(undefined8 *)&(this->Frames).LookupSet.Elements = 0;
  *(undefined8 *)&(this->Frames).LookupSet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Frames).LookupSet.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Frames).LookupSet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Frames).LookupSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Frames).LookupSet.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Frames).LookupSet.Elements.field_0x34 = 0;
  (this->Frames).LookupSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Frames).LookupSet.HashSize = 0;
  (this->Frames).LeastRecent = (FCacheEntry *)0x0;
  (this->Frames).MostRecent = (FCacheEntry *)0x0;
  (this->Frames).MaxNumElements = 1;
  TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Empty(&this->Frames,1);
  pFVar3 = ::FName::FName(&local_res8,"ImageWrapper");
  FVar1 = *pFVar3;
  this_00 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  this->ImageWrapperModule = (IImageWrapperModule *)pIVar4;
  this->bFillGapsInSequence = param_5;
  (this->ImagePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImagePaths).ArrayNum = 0;
  (this->ImagePaths).ArrayMax = 0;
  (this->Info).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).Data.ArrayNum = 0;
  (this->Info).Data.ArrayMax = 0;
  this->Initialized = false;
  (this->TilingDescription).TileNum.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TilingDescription).TileSize.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TilingDescription).TileBorderSize = 0;
  (this->TilingDescription).TileNum.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->TilingDescription).TileSize.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->NumLoadAhead = 0;
  this->NumLoadBehind = 0;
  this->MinimumMipLevelToUpscale = (TAtomic<int>)0x0;
  (this->Reader).Object = (IImgMediaReader *)0x0;
  (this->Reader).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Scheduler).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Scheduler).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->GlobalCache).Object = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  (this->GlobalCache).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->MipMapInfo).Object = param_3->Object;
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  (this->MipMapInfo).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->SourceColorSettings).Object = param_4->Object;
  pTVar2 = (param_4->SharedReferenceCount).ReferenceController;
  (this->SourceColorSettings).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->SequenceDim).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->SequenceDuration).Ticks = 0;
  (this->QueuedSampleFetch).LastTimeStamp.Time.Ticks = -0x8000000000000000;
  (this->SequenceFrameRate).Numerator = 0;
  (this->SequenceFrameRate).Denominator = 0;
  (this->SequenceName).ComparisonIndex = 0;
  (this->SequenceName).Number = 0;
  (this->PendingFrameNumbers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingFrameNumbers).ArrayNum = 0;
  (this->PendingFrameNumbers).ArrayMax = 0;
  (this->QueuedFrameNumbers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedFrameNumbers).ArrayNum = 0;
  (this->QueuedFrameNumbers).ArrayMax = 0;
  (this->WorkPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkPool).ArrayNum = 0;
  (this->WorkPool).ArrayMax = 0;
  this->LastRequestedFrame = -1;
  this->RetryCount = 0;
  this->NextFrameNumberJobID = 0;
  this->UseGlobalCache = false;
  (this->QueuedSampleFetch).LastTimeStamp.SequenceIndex = 0;
  (this->QueuedSampleFetch).LastTimeStamp.LoopIndex = 0;
  (this->QueuedSampleFetch).LastDuration.Ticks = 0;
  this->SmartCacheSettings = *param_6;
  this->bIsPlaybackBlocking = false;
  this->bIsBandwidthThrottlingEnabled = true;
  this->bIsSkipFramesEnabled = false;
  this->SkipFramesCounterRaiseLevelThreshold = 10;
  this->SkipFramesCounterNewLevelValue = 5;
  (this->QueuedSampleFetch).LoopIndex = 0;
  this->SkipFramesCounter = 0;
  this->SkipFramesLevel = 0;
  (this->QueuedSampleFetch).LastTimeStamp.Time.Ticks = 0;
  (this->QueuedSampleFetch).LastTimeStamp.SequenceIndex = 0;
  (this->QueuedSampleFetch).LastTimeStamp.LoopIndex = 0;
  (this->QueuedSampleFetch).LastDuration.Ticks = 0;
  if (5 < (byte)LogImgMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
  }
  return this;
}

// ~FImgMediaLoader @ 14ea3a9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FImgMediaLoader::~FImgMediaLoader(FImgMediaLoader *this)

{
  int *piVar1;
  TArray<FImgMediaLoaderWork_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderReleaseCache> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FScriptContainerElement *pFVar14;
  FName FVar15;
  FNameEntryId FVar16;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  this->_padding_ = (longlong)&___7FImgMediaLoader__6B_;
  if (5 < (byte)LogImgMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
  }
  pTVar2 = &this->WorkPool;
  pFVar14 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->WorkPool).ArrayNum;
  pFVar3 = pFVar14 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->WorkPool).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FImgMediaLoaderWork_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar14 == pFVar3) break;
    if (*(longlong **)pFVar14 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar14 + 0x28))();
    }
    pFVar14 = pFVar14 + 8;
  }
  piVar1 = &(this->WorkPool).ArrayMax;
  FVar16.Value = 0;
  (this->WorkPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  FVar11 = StatPtr_STAT_ImgMedia_LoaderReleaseCache;
  if (StatPtr_STAT_ImgMedia_LoaderReleaseCache ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderReleaseCache>)0x0) {
    pFVar10 = ::FName::FName(&local_res10,"STAT_ImgMedia_LoaderReleaseCache");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderReleaseCache>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_LoaderReleaseCache,
                        *pFVar10,L"ImgMedia Loader Release Cache","STATGROUP_Media",
                        "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar7 = false;
  bVar9 = false;
  FVar13 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                   ,0xdd);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar8 = true;
      FVar16.Value = FVar13.Value;
      goto LAB_14ea3abbd;
    }
  }
  bVar8 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_14ea3abbd:
  TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Empty(&this->Frames,0);
  piVar1 = &(this->PendingFrameNumbers).ArrayMax;
  (this->PendingFrameNumbers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PendingFrameNumbers).AllocatorInstance,0,piVar1);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->QueuedFrameNumbers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PendingFrameNumbers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceColorSettings).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MipMapInfo).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GlobalCache).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Scheduler).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Reader).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->Info).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)
             (this->ImagePaths).AllocatorInstance.Data,(this->ImagePaths).ArrayNum);
  pFVar3 = (this->ImagePaths).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Empty(&this->Frames,0);
  (this->Frames).LookupSet.HashSize = 0;
  FVar5 = (this->Frames).LookupSet.Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Frames);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return;
}

// AddFrameToCache @ 14ea40e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FImgMediaLoader::AddFrameToCache
          (FImgMediaLoader *this,int param_1,TSharedPtr<FImgMediaFrame,1> *param_2)

{
  FName *pFVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FImgMediaGlobalCache *this_00;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FImgMediaFrame *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TSharedPtr<FImgMediaFrame,1> *pTVar9;
  ulonglong uVar10;
  int local_res10 [2];
  int local_res18;
  FImgMediaGlobalCacheEntry *local_68;
  FName local_60;
  int local_58;
  FName *local_50;
  FImgMediaGlobalCacheEntry **local_48;
  
  if (param_2->Object != (FImgMediaFrame *)0x0) {
    local_res10[0] = param_1;
    if (6 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    }
    if (this->UseGlobalCache == false) {
      TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Add
                (&this->Frames,local_res10,param_2);
      return;
    }
    if (((this->GlobalCache).Object == (FImgMediaGlobalCache *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar1 = &this->SequenceName;
    pTVar9 = FImgMediaGlobalCache::FindAndTouch((this->GlobalCache).Object,pFVar1,param_1);
    if (pTVar9 == (TSharedPtr<FImgMediaFrame,1> *)0x0) {
      local_res18 = (this->ImagePaths).ArrayNum;
      if (((this->GlobalCache).Object == (FImgMediaGlobalCache *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = (this->GlobalCache).Object;
      if (((this->ImagePaths).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->ImagePaths).AllocatorInstance.Data;
      uVar8 = 0;
      if (param_1 < *(int *)(pFVar2 + 8)) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lpCriticalSection = &this_00->CriticalSection;
      lVar3 = *(longlong *)pFVar2;
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if ((param_2->Object == (FImgMediaFrame *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = param_2->Object;
        lpCriticalSection_00 = &pFVar4->InfoCriticalSection;
        if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
          uVar10 = (pFVar4->Info).UncompressedSize;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
          if (1 < local_res18) {
            uVar10 = (uVar10 * 4) / 3;
          }
          if (this_00->MaxSize < uVar10) {
            if (2 < (byte)LogImgMedia._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
            }
          }
          else {
            FImgMediaGlobalCache::EnforceMaxSize(this_00,uVar10);
            local_68 = ::operator_new(0x50);
            if (local_68 == (FImgMediaGlobalCacheEntry *)0x0) {
              local_68 = (FImgMediaGlobalCacheEntry *)0x0;
            }
            else {
              ::FString::FString(&local_68->FileName,(FString *)((longlong)param_1 * 0x10 + lVar3));
              local_68->FrameSize = uVar10;
              local_68->Index = param_1;
              (local_68->Frame).Object = param_2->Object;
              pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
              (local_68->Frame).SharedReferenceCount.ReferenceController = pTVar5;
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_68->LessRecent = (FImgMediaGlobalCacheEntry *)0x0;
              local_68->LessRecentSequence = (FImgMediaGlobalCacheEntry *)0x0;
              local_68->MoreRecent = (FImgMediaGlobalCacheEntry *)0x0;
              local_68->MoreRecentSequence = (FImgMediaGlobalCacheEntry *)0x0;
            }
            local_60 = *pFVar1;
            local_50 = &local_60;
            local_48 = &local_68;
            local_58 = param_1;
            TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TTuple<FName,int>_&&,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&>_>
                      ((TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
                        *)&this_00->MapFrameToEntry,
                       (TPairInitializer<TTuple<FName,int>_&&,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&>
                        *)&stack0x00000020,(bool *)&local_50);
            FImgMediaGlobalCache::MarkAsRecent(this_00,pFVar1,local_68);
            this_00->CurrentSize = this_00->CurrentSize + uVar10;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
  return;
}

// DiscardVideoSamples @ 14ea46f90

bool __thiscall
FImgMediaLoader::DiscardVideoSamples
          (FImgMediaLoader *this,TRange<FMediaTimeStamp> *param_1,bool param_2,float param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (((this->QueuedSampleFetch).LastTimeStamp.Time.Ticks == -0x8000000000000000) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueuedSampleFetch.LastTimeStamp.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                         ,0x16c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (param_3 < 0.0) {
    if (((param_1->LowerBound).Type.Value == '\x02') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar1 = (param_1->LowerBound).Value.SequenceIndex;
    iVar2 = (this->QueuedSampleFetch).LastTimeStamp.SequenceIndex;
    if (iVar2 < iVar1) {
      return false;
    }
    if (iVar2 == iVar1) {
      iVar2 = (this->QueuedSampleFetch).LastTimeStamp.LoopIndex;
      iVar1 = (param_1->LowerBound).Value.LoopIndex;
      if (iVar2 < iVar1) {
        return false;
      }
      if ((iVar2 == iVar1) &&
         ((this->QueuedSampleFetch).LastTimeStamp.Time.Ticks <
          (param_1->LowerBound).Value.Time.Ticks)) {
        return false;
      }
    }
    if (((param_1->LowerBound).Type.Value == '\x02') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar1 = (param_1->LowerBound).Value.LoopIndex;
    iVar2 = (param_1->LowerBound).Value.SequenceIndex;
    auVar6._0_8_ = (double)(this->SequenceFrameRate).Numerator;
    auVar6._8_8_ = 0;
    auVar7._0_8_ = ((double)(this->SequenceFrameRate).Denominator / auVar6._0_8_) *
                   __real_416312d000000000 + __real_3fe0000000000000;
    auVar7._8_8_ = 0;
    auVar6 = roundpd(auVar6,auVar7,1);
    (this->QueuedSampleFetch).LastTimeStamp.Time.Ticks =
         (param_1->LowerBound).Value.Time.Ticks - (longlong)auVar6._0_8_;
    (this->QueuedSampleFetch).LastTimeStamp.SequenceIndex = iVar2;
    (this->QueuedSampleFetch).LastTimeStamp.LoopIndex = iVar1;
  }
  else {
    if (((param_1->UpperBound).Type.Value == '\x02') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar1 = (param_1->UpperBound).Value.SequenceIndex;
    iVar2 = (this->QueuedSampleFetch).LastTimeStamp.SequenceIndex;
    if ((iVar1 <= iVar2) &&
       ((iVar2 != iVar1 ||
        ((iVar2 = (this->QueuedSampleFetch).LastTimeStamp.LoopIndex,
         iVar1 = (param_1->UpperBound).Value.LoopIndex, iVar1 <= iVar2 &&
         ((iVar2 != iVar1 ||
          ((param_1->UpperBound).Value.Time.Ticks <=
           (this->QueuedSampleFetch).LastTimeStamp.Time.Ticks)))))))) {
      return false;
    }
    if (((param_1->UpperBound).Type.Value == '\x02') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar1 = (param_1->UpperBound).Value.SequenceIndex;
    iVar2 = (param_1->UpperBound).Value.LoopIndex;
    (this->QueuedSampleFetch).LastTimeStamp.Time.Ticks = (param_1->UpperBound).Value.Time.Ticks;
    (this->QueuedSampleFetch).LastTimeStamp.SequenceIndex = iVar1;
    (this->QueuedSampleFetch).LastTimeStamp.LoopIndex = iVar2;
  }
  (this->QueuedSampleFetch).LoopIndex = 0;
  this->SkipFramesCounter = 0;
  this->SkipFramesLevel = 0;
  (this->QueuedSampleFetch).LastDuration.Ticks = 0;
  return true;
}

// FetchBestVideoSampleForTimeRange @ 14ea485d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EFetchBestSampleResult __thiscall
FImgMediaLoader::FetchBestVideoSampleForTimeRange
          (FImgMediaLoader *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2,bool param_3,float param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int iVar1;
  int iVar2;
  FImgMediaFrame *pFVar3;
  code *pcVar4;
  float fVar5;
  uchar uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  FImgMediaTextureSample *pFVar10;
  EFetchBestSampleResult EVar11;
  uint uVar12;
  FMediaTimeStamp *pFVar13;
  FMediaTimeStamp *pFVar14;
  longlong lVar15;
  TSharedPtr<FImgMediaFrame,1> *pTVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStackY_2148 [32];
  longlong lStack_20f8;
  int local_20f0;
  int iStack_20ec;
  char cStack_20e8;
  longlong local_20e0;
  int iStack_20d4;
  int local_20d0;
  TSharedPtr<IMediaTextureSample,1> local_20b8;
  TIntPoint<int>_u_0 local_20a8;
  TSharedPtr<IMediaTextureSample,1> *local_20a0;
  TSharedPtr<FNativeMediaSourceColorSettings,1> local_2098;
  TSharedRef<FImgMediaTextureSample,1> local_2088;
  TIntPoint<int>_u_0 local_2078;
  TIntPoint<int>_u_0 TStack_2070;
  int local_2068;
  FMediaTimeStamp local_2058;
  uchar local_2048 [4];
  ulonglong local_2044;
  longlong local_203c;
  longlong local_2034;
  uchar local_1048 [3];
  longlong local_1045;
  longlong local_103d;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14ea485f2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2148;
  if (this->Initialized == false) {
    return NoSample;
  }
  if ((param_1->LowerBound).Type.Value == '\x02') {
    return NoSample;
  }
  if ((param_1->UpperBound).Type.Value == '\x02') {
    return NoSample;
  }
  local_20a0 = param_2;
  pFVar13 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
  pFVar14 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_1);
  iVar9 = pFVar14->SequenceIndex;
  iVar24 = pFVar13->SequenceIndex;
  bVar26 = SBORROW4(iVar24,iVar9);
  bVar25 = iVar24 - iVar9 < 0;
  if (iVar24 == iVar9) {
    if (((pFVar13->LoopIndex != pFVar14->LoopIndex) ||
        ((pFVar13->Time).Ticks != (pFVar14->Time).Ticks)) &&
       (pFVar14->LoopIndex <= pFVar13->LoopIndex)) {
      if (pFVar13->LoopIndex == pFVar14->LoopIndex) {
        lVar17 = (pFVar14->Time).Ticks;
        lVar15 = (pFVar13->Time).Ticks;
        bVar26 = SBORROW8(lVar15,lVar17);
        bVar25 = lVar15 - lVar17 < 0;
        goto LAB_14ea48674;
      }
      goto LAB_14ea48676;
    }
  }
  else {
LAB_14ea48674:
    if (bVar26 == bVar25) {
LAB_14ea48676:
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTimeRange.GetLowerBoundValue() <= InTimeRange.GetUpperBoundValue()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                          ,0x18e,L"");
      if (bVar25) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
    }
  }
  pFVar13 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
  iVar9 = pFVar13->SequenceIndex;
  pFVar13 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_1);
  if ((iVar9 != pFVar13->SequenceIndex) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTimeRange.GetLowerBoundValue().GetSequenceIndex() == InTimeRange.GetUpperBoundValue().GetSequenceIndex()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                          ,399,L""), bVar25)) {
    pcVar4 = (code *)swi(3);
    EVar11 = (*pcVar4)();
    return EVar11;
  }
  if (((this->QueuedSampleFetch).LastTimeStamp.Time.Ticks == -0x8000000000000000) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("QueuedSampleFetch.LastTimeStamp.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                          ,400,L""), bVar25)) {
    pcVar4 = (code *)swi(3);
    EVar11 = (*pcVar4)();
    return EVar11;
  }
  uVar6 = (param_1->LowerBound).Type.Value;
  lStack_20f8 = (param_1->LowerBound).Value.Time.Ticks;
  uVar7 = (param_1->LowerBound).Value.SequenceIndex;
  uVar8 = (param_1->LowerBound).Value.LoopIndex;
  local_20e0 = (param_1->UpperBound).Value.Time.Ticks;
  iVar9 = (param_1->UpperBound).Value.LoopIndex;
  cStack_20e8 = (char)*(undefined8 *)&param_1->UpperBound;
  if (!param_3) {
    if ((uVar6 == '\x02') &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar25)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    lVar17 = (this->SequenceDuration).Ticks;
    if ((uVar6 == '\x02') &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar25)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    if (lStack_20f8 < lVar17) {
      lVar17 = lStack_20f8;
    }
    lStack_20f8 = 0;
    if (0 < lVar17) {
      lStack_20f8 = lVar17;
    }
    if ((uVar6 == '\x02') &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,0x73,L""), bVar25)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    if ((cStack_20e8 == '\x02') &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar25)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    lVar17 = (this->SequenceDuration).Ticks;
    if ((cStack_20e8 == '\x02') &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar25)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    if (local_20e0 < lVar17) {
      lVar17 = local_20e0;
    }
    local_20e0 = 0;
    if (0 < lVar17) {
      local_20e0 = lVar17;
    }
    if ((cStack_20e8 == '\x02') &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,0x73,L""), bVar25)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
  }
  if (uVar6 == '\x02') {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("Type != ERangeBoundTypes::Open",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                        ,99,L"");
    if (bVar25) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("Type != ERangeBoundTypes::Open",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                        ,99,L"");
    if (bVar25) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
  }
  if ((cStack_20e8 == '\x02') &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar25)) {
    pcVar4 = (code *)swi(3);
    EVar11 = (*pcVar4)();
    return EVar11;
  }
  if (local_20e0 < 1) {
    local_20e0 = (this->SequenceDuration).Ticks;
    if ((cStack_20e8 == '\x02') &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar25)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    iVar9 = iVar9 + -1;
  }
  else if ((cStack_20e8 == '\x02') &&
          (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar25)) {
    pcVar4 = (code *)swi(3);
    EVar11 = (*pcVar4)();
    return EVar11;
  }
  if ((this->ImagePaths).ArrayNum < 1) {
    iVar24 = 0;
  }
  else {
    iVar24 = *(int *)((this->ImagePaths).AllocatorInstance.Data + 8);
  }
  iVar1 = (this->SequenceFrameRate).Denominator;
  iVar2 = (this->SequenceFrameRate).Numerator;
  auVar27._0_8_ = (double)iVar2;
  auVar27._8_8_ = 0;
  auVar28._0_8_ =
       ((double)iVar1 / auVar27._0_8_) * __real_416312d000000000 + __real_3fe0000000000000;
  auVar28._8_8_ = 0;
  auVar27 = roundpd(auVar27,auVar28,1);
  lVar23 = (longlong)auVar27._0_8_;
  fVar5 = (float)lVar23;
  lVar21 = (longlong)iVar1 * 10000000;
  lStack_20f8 = (longlong)((double)(int)uVar8 * (double)(longlong)((float)iVar24 * fVar5)) +
                lStack_20f8;
  lVar17 = (longlong)((double)iVar9 * (double)(longlong)((float)iVar24 * fVar5)) + local_20e0 + -1;
  lVar15 = (iVar2 * lStack_20f8) / lVar21;
  lVar21 = (iVar2 * lVar17) / lVar21;
  if (param_4 < 0.0) {
    if (lVar15 != lVar21) {
      if (lVar21 - lVar15 < 2) {
        lVar17 = lVar17 - (longlong)((float)lVar21 * fVar5);
        lVar19 = lVar21;
      }
      else {
        lVar17 = lVar23;
        lVar19 = lVar15 + 1;
      }
      if ((lVar23 - lStack_20f8) + (longlong)((float)lVar15 * fVar5) < lVar17) goto LAB_14ea48b29;
    }
    lVar19 = lVar15;
  }
  else {
    if (lVar15 != lVar21) {
      if (lVar21 - lVar15 < 2) {
        lVar20 = (lVar23 - lStack_20f8) + (longlong)((float)lVar15 * fVar5);
        lVar19 = lVar15;
      }
      else {
        lVar20 = lVar23;
        lVar19 = lVar21 + -1;
      }
      if (lVar17 - (longlong)((float)lVar21 * fVar5) < lVar20) goto LAB_14ea48b29;
    }
    lVar19 = lVar21;
  }
LAB_14ea48b29:
  if (param_3) {
    local_20d0 = (int)(lVar19 / (longlong)iVar24);
    lVar17 = -lVar19;
    if (-1 < lVar19) {
      lVar17 = lVar19;
    }
    uVar18 = lVar17 % (longlong)iVar24;
    if (lVar19 < 0) {
      uVar18 = (longlong)(iVar24 + -1) - uVar18;
    }
  }
  else {
    local_20d0 = 0;
    lVar17 = (longlong)((uVar8 + 1) * iVar24 + -1);
    lVar20 = (longlong)(uVar8 * iVar24);
    if (lVar19 < lVar17) {
      lVar17 = lVar19;
    }
    lVar19 = lVar20;
    if (lVar20 < lVar17) {
      lVar19 = lVar17;
    }
    uVar18 = lVar19 - lVar20;
  }
  iVar9 = (int)uVar18;
  RequestFrame(this,iVar9,param_4,param_3);
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar16 = GetCachedFrame(this,iVar9);
    if (pTVar16 == (TSharedPtr<FImgMediaFrame,1> *)0x0) {
      if ((((this->UseGlobalCache != false) && (this->LastRequestedFrame != -1)) &&
          ((this->PendingFrameNumbers).ArrayNum == 0)) &&
         (((this->QueuedFrameNumbers).ArrayNum == 0 &&
          (this->RetryCount = this->RetryCount + 1, 1 < this->RetryCount)))) {
        if (1 < (byte)LogImgMedia._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
        }
        this->LastRequestedFrame = -1;
        this->RetryCount = 0;
      }
      FCsvProfiler::RecordEventfInternal(_GCsvCategory_ImgMedia.Index,L"LoaderFetchMiss %lld-%lld");
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint582 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint582,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                     ,0x246,L"ImgMedia/LoaderFetchMiss %lld-%lld");
          __BookmarkPoint582 = true;
        }
        uVar12 = CallstackTrace_GetCurrentId();
        local_1048[0] = '\x02';
        local_1048[1] = 'H';
        local_1048[2] = 0x48;
        local_1045 = lVar15 % (longlong)iVar24;
        local_103d = lVar21 % (longlong)iVar24;
        FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint582,uVar12,0x13,local_1048);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return NoSample;
    }
    this->RetryCount = 0;
    lVar19 = (longlong)(this->SequenceFrameRate).Denominator;
    lVar20 = (longlong)(this->SequenceFrameRate).Numerator;
    lVar22 = (uVar18 & 0xffffffff) * lVar19 * 10000000;
    lVar17 = lVar22 / lVar20;
    if ((int)((lVar17 * lVar20) / (lVar19 * 10000000)) != iVar9) {
      lVar17 = (lVar20 + -1 + lVar22) / lVar20;
    }
    if ((param_3) && ((this->QueuedSampleFetch).LastDuration.Ticks != 0)) {
      (this->QueuedSampleFetch).LoopIndex = local_20d0;
    }
    (this->QueuedSampleFetch).LastTimeStamp.Time.Ticks = lVar17;
    if ((uVar6 == '\x02') &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar25)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    (this->QueuedSampleFetch).LastTimeStamp.SequenceIndex = uVar7;
    (this->QueuedSampleFetch).LastTimeStamp.LoopIndex = (this->QueuedSampleFetch).LoopIndex;
    (this->QueuedSampleFetch).LastDuration.Ticks = lVar23;
    MakeShared<FImgMediaTextureSample,1>(&local_2088);
    pFVar3 = pTVar16->Object;
    lpCriticalSection_00 = &pFVar3->InfoCriticalSection;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      local_20a8 = (pFVar3->Info).Dim.field0_0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      ImgMediaLoader::CheckAndUpdateImgDimensions
                (&this->SequenceDim,(TIntPoint<int> *)&local_20a8._s_0);
      pFVar10 = local_2088.Object;
      local_2098.Object = (this->SourceColorSettings).Object;
      local_2098.SharedReferenceCount.ReferenceController =
           (this->SourceColorSettings).SharedReferenceCount.ReferenceController;
      if (local_2098.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2098.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2098.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2068 = (this->TilingDescription).TileBorderSize;
      local_2078 = (this->TilingDescription).TileNum.field0_0x0;
      TStack_2070 = (this->TilingDescription).TileSize.field0_0x0;
      local_2058.Time.Ticks = (this->QueuedSampleFetch).LastTimeStamp.Time.Ticks;
      local_2058.SequenceIndex = (this->QueuedSampleFetch).LastTimeStamp.SequenceIndex;
      local_2058.LoopIndex = (this->QueuedSampleFetch).LastTimeStamp.LoopIndex;
      FImgMediaTextureSample::Initialize
                (local_2088.Object,pTVar16->Object,&this->SequenceDim,&local_2058,
                 (FTimespan)(this->QueuedSampleFetch).LastDuration.Ticks,(uchar)this->NumMipLevels,
                 (FMediaTextureTilingDescription *)&local_2078._s_0,&local_2098);
      local_20b8.Object = (IMediaTextureSample *)local_2088.Object;
      local_20b8.SharedReferenceCount.ReferenceController =
           local_2088.SharedReferenceCount.ReferenceController;
      if (local_2088.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2088.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2088.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_20a0 != &local_20b8) {
        local_20a0->Object = (IMediaTextureSample *)pFVar10;
        local_20b8.Object = (IMediaTextureSample *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_20a0->SharedReferenceCount,&local_20b8.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20b8.SharedReferenceCount.ReferenceController);
      FCsvProfiler::RecordEventfInternal
                (_GCsvCategory_ImgMedia.Index,L"LoaderFetchHit %lld %lld-%lld");
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint570 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint570,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                     ,0x23a,L"ImgMedia/LoaderFetchHit %lld %lld-%lld");
          __BookmarkPoint570 = true;
        }
        uVar12 = CallstackTrace_GetCurrentId();
        builtin_memcpy(local_2048,"\x03HHH",4);
        local_2044 = uVar18;
        local_203c = lVar15 % (longlong)iVar24;
        local_2034 = lVar21 % (longlong)iVar24;
        FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint570,uVar12,0x1c,local_2048);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2088.SharedReferenceCount.ReferenceController);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return Ok;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FindFiles @ 14ea49780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ea49eaa) */
/* WARNING: Removing unreachable block (ram,0x00014ea4a01c) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FImgMediaLoader::FindFiles
          (FImgMediaLoader *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TTuple<int,FString> *pTVar4;
  void *_Src;
  FImgMediaLoader *this_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  IFileManager *pIVar9;
  FString *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  ForElementType<FSetElementId> FVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  TTuple<int,FString> *pTVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  undefined1 auStackY_258 [32];
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  FIdentityFunctor local_205 [5];
  ForAnyElementType local_200;
  undefined8 local_1f8;
  int local_1f0;
  TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_> local_1e8;
  FScriptContainerElement *local_1d8;
  ulonglong local_1d0;
  FString local_1c8;
  FString local_1b8;
  TTuple<int,FString> *local_1a8;
  void *local_1a0;
  undefined8 local_198;
  int local_190;
  int local_18c;
  uint local_188;
  FString *local_180;
  FString local_178;
  FImgMediaLoader *local_168;
  TTuple<int,FString> *local_160;
  initializer_list<FString> local_158;
  TStringView<wchar_t> local_148;
  undefined8 local_138;
  int local_130;
  TStringView<wchar_t> local_128;
  undefined8 local_118;
  int local_110;
  FString local_108;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_f8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_48.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_258);
  local_1d8 = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  local_1a8 = (TTuple<int,FString> *)param_2;
  local_180 = param_1;
  local_168 = this;
  pIVar9 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar9 + 0x78))(pIVar9,&local_1d8,pwVar15,L"*");
  if (5 < (byte)LogImgMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
  }
  ::FString::FString(&local_a8,L"exr");
  ::FString::FString(&local_98,L"jpg");
  ::FString::FString(&local_88,L"jpeg");
  ::FString::FString(&local_78,L"png");
  ::FString::FString(&local_68,L"bmp");
  ::FString::FString(&local_58,L"dds");
  local_158._First = &local_a8;
  local_158._Last = &local_48;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>(&local_f8,&local_158);
  pFVar10 = &local_48;
  lVar12 = 6;
  do {
    pFVar20 = pFVar10[-1].Data.AllocatorInstance.Data;
    pFVar10 = pFVar10 + -1;
    lVar12 = lVar12 + -1;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
  } while (lVar12 != 0);
  uVar18 = local_1d0 & 0xffffffff;
  local_200.Data = (FScriptContainerElement *)0x0;
  local_1f8 = 0;
  local_1e8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Pairs.ArrayNum = 0;
  local_1e8.Pairs.ArrayMax = 0;
  if ((int)local_1d0 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar18);
  }
  if (0 < (int)local_1d0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_1d0,(ForAnyElementType *)&local_1e8,0,&local_1e8.Pairs.ArrayMax);
    uVar18 = local_1d0 & 0xffffffff;
  }
  this_00 = local_168;
  iVar8 = (int)uVar18;
  pFVar21 = local_1d8 + (longlong)iVar8 * 0x10;
  pFVar20 = local_1d8;
  do {
    if ((int)uVar18 != iVar8) {
      local_208 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_208)
      ;
    }
    pTVar3 = CVarImgMediaMaxFrameSequenceGap.Ref;
    if (pFVar20 == pFVar21) {
      iVar8 = -1;
      bVar22 = IsInParallelGameThread();
      pFVar10 = local_180;
      pTVar4 = local_1a8;
      if ((bVar22) || (bVar22 = IsInGameThread(), bVar22)) {
        lVar12 = 0;
      }
      else {
        lVar12 = 4;
      }
      uVar11 = (ulonglong)local_1e8.Pairs.ArrayNum;
      local_1f0 = *(int *)((longlong)pTVar3->ShadowedValue + lVar12);
      local_188 = local_1e8.Pairs.ArrayNum;
      pTVar19 = (TTuple<int,FString> *)(local_1e8.Pairs.AllocatorInstance.Data + uVar11 * 0x18);
      uVar18 = uVar11;
      FVar14.Data = local_1e8.Pairs.AllocatorInstance.Data;
      local_160 = pTVar19;
      while( true ) {
        local_1a8 = (TTuple<int,FString> *)FVar14.Data;
        if ((int)uVar11 != (int)uVar18) {
          local_207 = 0;
          `TCheckedPointerIterator<TTuple<int,FString>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_207);
        }
        if ((TTuple<int,FString> *)FVar14.Data == pTVar19) {
          AlgoImpl::
          IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                    ((FString *)local_200.Data,(int)local_1f8,local_205[0],(TLess<void> *)local_205)
          ;
          iVar8 = (int)local_1f8;
          uVar18 = (ulonglong)(int)local_1f8;
          pFVar20 = local_200.Data + uVar18 * 0x10;
          FVar14.Data = local_200.Data;
          while( true ) {
            if ((int)uVar18 != iVar8) {
              local_206 = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_206);
            }
            if (FVar14.Data == pFVar20) {
              DestructItems<TTuple<int,FString>,int>
                        ((TTuple<int,FString> *)local_1e8.Pairs.AllocatorInstance.Data,
                         local_1e8.Pairs.ArrayNum);
              if ((TTuple<int,FString> *)local_1e8.Pairs.AllocatorInstance.Data !=
                  (TTuple<int,FString> *)0x0) {
                FMemory::Free(local_1e8.Pairs.AllocatorInstance.Data);
              }
              DestructItems<FString,int>((FString *)local_200.Data,(int)local_1f8);
              if (local_200.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_200.Data);
              }
              local_f8.HashSize = 0;
              if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_f8.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_f8.Elements);
              DestructItems<FString,int>((FString *)local_1d8,(int)local_1d0);
              if (local_1d8 != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8);
              }
              return;
            }
            local_128.DataPtr = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            iVar7 = (pFVar10->Data).ArrayNum;
            local_118 = *(undefined8 *)FVar14.Data;
            local_128.Size = iVar7 + -1;
            if (iVar7 == 0) {
              local_128.Size = 0;
            }
            local_110 = *(int *)(FVar14.Data + 8) + -1;
            if (*(int *)(FVar14.Data + 8) == 0) {
              local_110 = 0;
            }
            FPaths::CombineInternal(&local_1b8,&local_128,2);
            pFVar21 = ((ForAnyElementType *)&pTVar4->field_0x0)->Data;
            if (((pFVar21 <= (FScriptContainerElement *)&local_1b8) &&
                ((FScriptContainerElement *)&local_1b8 <
                 pFVar21 + (longlong)*(int *)&pTVar4->field_0xc * 0x10)) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar22)) break;
            iVar7 = *(int *)&pTVar4->field_0x8;
            if (iVar7 == *(int *)&pTVar4->field_0xc) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,(ForAnyElementType *)pTVar4,(int *)&pTVar4->field_0xc);
            }
            *(int *)&pTVar4->field_0x8 = iVar7 + 1;
            pFVar21 = ((ForAnyElementType *)&pTVar4->field_0x0)->Data + (longlong)iVar7 * 0x10;
            *(undefined8 *)pFVar21 = 0;
            *(FScriptContainerElement **)pFVar21 = local_1b8.Data.AllocatorInstance.Data;
            local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar21 + 8) = local_1b8.Data.ArrayNum;
            *(int *)(pFVar21 + 0xc) = local_1b8.Data.ArrayMax;
            local_1b8.Data.ArrayNum = 0;
            local_1b8.Data.ArrayMax = 0;
            uVar18 = local_1f8 & 0xffffffff;
            FVar14.Data = FVar14.Data + 0x10;
          }
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = iVar8;
        if (((local_168->bFillGapsInSequence != false) &&
            (iVar7 = *(int *)FVar14.Data, pFVar10 = local_180, local_18c = iVar7, iVar8 != -1)) &&
           (iVar8 < iVar7 + -1)) {
          uVar5 = (iVar7 - iVar8) - 1;
          if ((int)uVar5 < local_1f0) {
            if (0 < (int)uVar5) {
              uVar18 = (ulonglong)uVar5;
              do {
                pFVar20 = ((ForAnyElementType *)&pTVar4->field_0x0)->Data;
                local_1a0 = (void *)0x0;
                local_198 = 0;
                if (((pFVar20 <= (FScriptContainerElement *)&local_1a0) &&
                    ((FScriptContainerElement *)&local_1a0 <
                     pFVar20 + (longlong)*(int *)&pTVar4->field_0xc * 0x10)) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar22)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar8 = *(int *)&pTVar4->field_0x8;
                if (iVar8 == *(int *)&pTVar4->field_0xc) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,(ForAnyElementType *)pTVar4,(int *)&pTVar4->field_0xc);
                }
                _Src = local_1a0;
                pFVar20 = ((ForAnyElementType *)&pTVar4->field_0x0)->Data + (longlong)iVar8 * 0x10;
                *(int *)&pTVar4->field_0x8 = iVar8 + 1;
                *(FScriptContainerElement **)&pFVar20->field_0x0 = (FScriptContainerElement *)0x0;
                lVar12 = (longlong)(int)local_198;
                *(int *)&pFVar20[8].field_0x0 = (int)local_198;
                if ((int)local_198 == 0) {
                  *(int *)(pFVar20 + 0xc) = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,(int)local_198,0,(ForAnyElementType *)pFVar20,(int)local_198,
                             (int *)(pFVar20 + 0xc));
                  memcpy(*(FScriptContainerElement **)&pFVar20->field_0x0,_Src,lVar12 * 2);
                }
                if (local_1a0 != (void *)0x0) {
                  FMemory::Free(local_1a0);
                }
                uVar18 = uVar18 - 1;
                pTVar19 = local_160;
                pFVar10 = local_180;
                FVar14.Data = (FScriptContainerElement *)local_1a8;
                iVar7 = local_18c;
              } while (uVar18 != 0);
            }
          }
          else if (2 < (byte)LogImgMedia._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
            pFVar10 = local_180;
          }
        }
        iVar8 = iVar7;
        piVar13 = (int *)&pTVar4->field_0xc;
        local_148.DataPtr = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        iVar7 = (pFVar10->Data).ArrayNum;
        local_148.Size = iVar7 + -1;
        local_138 = *(undefined8 *)&((TTuple<int,FString> *)FVar14.Data)->field_0x8;
        if (iVar7 == 0) {
          local_148.Size = 0;
        }
        local_130 = *(int *)&((TTuple<int,FString> *)FVar14.Data)->field_0x10 + -1;
        if (*(int *)&((TTuple<int,FString> *)FVar14.Data)->field_0x10 == 0) {
          local_130 = 0;
        }
        FPaths::CombineInternal(&local_1c8,&local_148,2);
        pFVar20 = ((ForAnyElementType *)&pTVar4->field_0x0)->Data;
        if (((pFVar20 <= (FScriptContainerElement *)&local_1c8) &&
            ((FScriptContainerElement *)&local_1c8 < pFVar20 + (longlong)*piVar13 * 0x10)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) break;
        iVar7 = *(int *)&pTVar4->field_0x8;
        if (iVar7 == *piVar13) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)pTVar4,piVar13);
        }
        *(int *)&pTVar4->field_0x8 = iVar7 + 1;
        pFVar20 = ((ForAnyElementType *)&pTVar4->field_0x0)->Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar20 = 0;
        *(FScriptContainerElement **)pFVar20 = local_1c8.Data.AllocatorInstance.Data;
        local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar20 + 8) = local_1c8.Data.ArrayNum;
        *(int *)(pFVar20 + 0xc) = local_1c8.Data.ArrayMax;
        local_1c8.Data.ArrayNum = 0;
        local_1c8.Data.ArrayMax = 0;
        uVar11 = local_1e8.Pairs._8_8_ & 0xffffffff;
        FVar14.Data = FVar14.Data + 0x18;
        uVar18 = (ulonglong)local_188;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar10 = FPaths::GetExtension(&local_108,(FString *)pFVar20,false);
    ::FString::ToLower(pFVar10,&local_178);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    iVar7 = local_178.Data.ArrayNum + -1;
    FVar14.Data = local_178.Data.AllocatorInstance.Data;
    if (local_178.Data.ArrayNum == 0) {
      iVar7 = 0;
      FVar14.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar14.Data);
    if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
      FVar16 = (ForElementType<FSetElementId>)&local_f8.Hash;
      if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar16 = local_f8.Hash.SecondaryData;
      }
      iVar7 = *(int *)((longlong)FVar16 + (ulonglong)(local_f8.HashSize - 1U & uVar5) * 4);
      uVar17 = local_178.Data._8_8_;
      lVar12 = local_f8.Elements._0_8_;
      while (iVar7 != -1) {
        lVar1 = (longlong)iVar7 * 0x18;
        iVar6 = *(int *)(lVar12 + 8 + lVar1);
        if (iVar6 == (int)uVar17) {
          if (1 < iVar6) {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(lVar12 + lVar1),
                               (wchar_t *)local_178.Data.AllocatorInstance.Data);
            bVar22 = iVar6 == 0;
            lVar12 = local_f8.Elements._0_8_;
            uVar17 = local_178.Data._8_8_;
            goto LAB_14ea49a5f;
          }
LAB_14ea49a74:
          if (iVar7 != -1) {
            bVar22 = GetNumberAtEndOfString(this_00,&local_190,(FString *)pFVar20);
            if (bVar22) {
              TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_>::
              Emplace<int_const_&,FString_const_&>(&local_1e8,&local_190,(FString *)pFVar20);
            }
            else {
              if (((local_200.Data <= pFVar20) &&
                  (pFVar20 < local_200.Data + (longlong)local_1f8._4_4_ * 0x10)) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar22)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar7 = (int)local_1f8;
              if ((int)local_1f8 == local_1f8._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_200,(int *)((longlong)&local_1f8 + 4));
              }
              local_1f8 = CONCAT44(local_1f8._4_4_,iVar7 + 1);
              ::FString::FString((FString *)(local_200.Data + (longlong)iVar7 * 0x10),
                                 (FString *)pFVar20);
            }
          }
          break;
        }
        bVar22 = iVar6 + (int)uVar17 == 1;
LAB_14ea49a5f:
        if (bVar22) goto LAB_14ea49a74;
        iVar7 = *(int *)(lVar12 + 0x10 + lVar1);
      }
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    uVar18 = local_1d0 & 0xffffffff;
    pFVar20 = pFVar20 + 0x10;
  } while( true );
}

// FindMips @ 14ea4a200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FImgMediaLoader::FindMips(FImgMediaLoader *this,FString *param_1)

{
  TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  wchar_t wVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FScriptContainerElement *local_58;
  int local_50;
  FString local_48;
  FString local_38;
  
  FPaths::GetPath(&local_a8,param_1);
  FPaths::GetCleanFilename(&local_38,&local_a8);
  FPaths::GetPath(&local_48,&local_a8);
  pFVar8 = local_a8.Data.AllocatorInstance.Data + (longlong)local_a8.Data.ArrayNum * 2;
  do {
    if (pFVar8 == local_a8.Data.AllocatorInstance.Data) goto LAB_14ea4a6ae;
    pFVar8 = pFVar8 + -2;
  } while (*(wchar_t *)pFVar8 != L'x');
  iVar12 = (int)((longlong)pFVar8 - (longlong)local_a8.Data.AllocatorInstance.Data >> 1);
  if (iVar12 != -1) {
    FPaths::GetPath(&local_78,&local_a8);
    ::FString::RightChop(&local_a8,(FString *)&local_c8,iVar12 + 1);
    iVar10 = 0;
    iVar4 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar4 = iVar10;
    }
    if (iVar12 < iVar4) {
      iVar4 = iVar12;
    }
    iVar12 = iVar10;
    if (0 < iVar4) {
      iVar12 = iVar4;
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar9.Data = local_a8.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_98,(wchar_t *)FVar9.Data,iVar12);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_c8.ArrayNum != 0) {
      FVar9.Data = local_c8.AllocatorInstance.Data;
    }
    iVar4 = _wtoi((wchar_t *)FVar9.Data);
    iVar12 = local_98.Data.ArrayNum + -2;
    if (local_98.Data.ArrayNum == 0) {
      iVar12 = -1;
    }
    for (; 0 < iVar12; iVar12 = iVar12 + -1) {
      ::FString::RightChop(&local_98,&local_b8,iVar12);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar9.Data = local_b8.Data.AllocatorInstance.Data;
      }
      wVar3 = *(wchar_t *)FVar9.Data;
      if ((wVar3 == L'-') || (wVar3 == L'+')) {
        FVar9.Data = FVar9.Data + 2;
        wVar3 = *(wchar_t *)FVar9.Data;
      }
      bVar2 = false;
      if (wVar3 != L'\0') {
        wVar3 = *(wchar_t *)FVar9.Data;
        do {
          if (wVar3 == L'.') {
            if (bVar2) {
LAB_14ea4a3a8:
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              goto LAB_14ea4a3b9;
            }
            bVar2 = true;
          }
          else {
            iVar6 = iswdigit(wVar3);
            if (iVar6 == 0) goto LAB_14ea4a3a8;
          }
          wVar3 = *(wchar_t *)(FVar9.Data + 2);
          FVar9.Data = FVar9.Data + 2;
        } while (wVar3 != L'\0');
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
LAB_14ea4a3b9:
    pFVar7 = ::FString::RightChop(&local_98,&local_88,iVar12 + 1);
    if (&local_98 != pFVar7) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar9.Data = local_98.Data.AllocatorInstance.Data;
    }
    uVar5 = _wtoi((wchar_t *)FVar9.Data);
    uVar13 = (ulonglong)uVar5;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (1 < (int)uVar5) {
      while (1 < iVar4) {
        uVar13 = uVar13 >> 1;
        iVar4 = iVar4 / 2;
        ::FString::PrintfImpl(&local_88,L"%dx%d");
        local_68.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
        local_68.Size = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          local_68.Size = iVar10;
        }
        local_58 = local_88.Data.AllocatorInstance.Data;
        local_50 = local_88.Data.ArrayNum + -1;
        if (local_88.Data.ArrayNum == 0) {
          local_50 = 0;
        }
        FPaths::CombineInternal(&local_b8,&local_68,2);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.ArrayNum = 0;
        local_c8.ArrayMax = 0;
        FindFiles(this,&local_b8,&local_c8);
        if (local_c8.ArrayNum == 0) {
          iVar12 = 0;
LAB_14ea4a64f:
          DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,iVar12);
          if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.AllocatorInstance.Data);
          }
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar6 = (this->ImagePaths).ArrayNum;
        pTVar1 = &this->ImagePaths;
        iVar11 = iVar10;
        if (0 < iVar6) {
          iVar11 = *(int *)((pTVar1->AllocatorInstance).Data + 8);
        }
        iVar12 = local_c8.ArrayNum;
        if (local_c8.ArrayNum != iVar11) {
          if (1 < (byte)LogImgMedia._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
            iVar12 = local_c8.ArrayNum;
          }
          goto LAB_14ea4a64f;
        }
        if (0x1f < iVar6) {
          if (1 < (byte)LogImgMedia._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
            iVar12 = local_c8.ArrayNum;
          }
          goto LAB_14ea4a64f;
        }
        if (iVar6 == (this->ImagePaths).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,&(this->ImagePaths).ArrayMax);
          (this->ImagePaths).ArrayNum = iVar6;
        }
        FVar9.Data = local_c8.AllocatorInstance.Data;
        (this->ImagePaths).ArrayNum = iVar6 + 1;
        pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar8 = 0;
        iVar12 = local_c8.ArrayNum;
        *(int *)(pFVar8 + 8) = local_c8.ArrayNum;
        if (local_c8.ArrayNum == 0) {
          *(int *)(pFVar8 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_c8.ArrayNum,0,(ForAnyElementType *)pFVar8,local_c8.ArrayNum,
                     (int *)(pFVar8 + 0xc));
          ConstructItems<FString,FString,int>(*(void **)pFVar8,(FString *)FVar9.Data,iVar12);
        }
        DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
        if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if ((uint)uVar13 < 2) break;
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
LAB_14ea4a6ae:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// Flush @ 14ea4a710

void __thiscall FImgMediaLoader::Flush(FImgMediaLoader *this)

{
  (this->QueuedSampleFetch).LoopIndex = 0;
  this->SkipFramesCounter = 0;
  this->SkipFramesLevel = 0;
  (this->QueuedSampleFetch).LastTimeStamp.SequenceIndex = 0;
  (this->QueuedSampleFetch).LastTimeStamp.LoopIndex = 0;
  return;
}

// FrameNumberToTime @ 14ea4a7e0

FTimespan __thiscall FImgMediaLoader::FrameNumberToTime(FImgMediaLoader *this,uint param_1)

{
  undefined4 in_register_00000014;
  uint in_R8D;
  
  UE::ImgMediaLoaderUtils::GetFrameStartTime(param_1,(FFrameRate *)(ulonglong)in_R8D);
  return (FTimespan)CONCAT44(in_register_00000014,param_1);
}

// FrameNumbersToTimeRanges @ 14ea4a810

void __thiscall
FImgMediaLoader::FrameNumbersToTimeRanges
          (FImgMediaLoader *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TRangeSet<FTimespan> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined7 uStack_67;
  uint7 uStack_57;
  TRange<FTimespan> local_48;
  
  if ((0 < (this->SequenceFrameRate).Denominator) && (0 < (this->SequenceFrameRate).Numerator)) {
    pFVar5 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar1) break;
      uVar3 = *(uint *)pFVar5;
      lVar7 = (longlong)(this->SequenceFrameRate).Denominator;
      lVar6 = (longlong)(this->SequenceFrameRate).Numerator;
      lVar4 = (ulonglong)uVar3 * lVar7 * 10000000;
      local_48.LowerBound.Value.Ticks = lVar4 / lVar6;
      if ((uint)((local_48.LowerBound.Value.Ticks * lVar6) / (lVar7 * 10000000)) != uVar3) {
        local_48.LowerBound.Value.Ticks = (lVar6 + -1 + lVar4) / lVar6;
      }
      lVar4 = (ulonglong)(uVar3 + 1) * lVar7 * 10000000;
      local_48.UpperBound.Value.Ticks = lVar4 / lVar6;
      if ((uint)((local_48.UpperBound.Value.Ticks * lVar6) / (lVar7 * 10000000)) != uVar3 + 1) {
        local_48.UpperBound.Value.Ticks = (lVar6 + -1 + lVar4) / lVar6;
      }
      local_48.LowerBound._1_7_ = uStack_67;
      local_48.LowerBound.Type.Value = '\x01';
      local_48.UpperBound._0_8_ = (ulonglong)uStack_57 << 8;
      TRangeSet<FTimespan>::Add(param_2,&local_48);
      pFVar5 = pFVar5 + 4;
    }
  }
  return;
}

// GetBitRate @ 14ea4b0b0

ulong64 __thiscall FImgMediaLoader::GetBitRate(FImgMediaLoader *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  double dVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar1 = 0;
    dVar2 = (double)(ulonglong)
                    ((longlong)
                     ((this->SequenceDim).field0_0x0._s_0.Y * (this->SequenceDim).field0_0x0._s_0.X)
                    << 4) *
            ((double)(this->SequenceFrameRate).Numerator /
            (double)(this->SequenceFrameRate).Denominator);
    if ((__real_43e0000000000000 <= dVar2) &&
       (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
      lVar1 = -0x8000000000000000;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (longlong)dVar2 + lVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetBusyTimeRanges @ 14ea4b220

void __thiscall
FImgMediaLoader::GetBusyTimeRanges(FImgMediaLoader *this,TRangeSet<FTimespan> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar2 = (this->QueuedFrameNumbers).ArrayNum;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  if (-1 < (int)uVar2) {
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar2,&local_28.AllocatorInstance,0,&local_28.ArrayMax);
    }
    pFVar8 = (this->QueuedFrameNumbers).AllocatorInstance.Data;
    iVar3 = (this->QueuedFrameNumbers).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->QueuedFrameNumbers).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FImgMediaLoader::FFrameNumberJobInfo_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      if ((local_28.AllocatorInstance.Data <= pFVar8) &&
         (pFVar8 < local_28.AllocatorInstance.Data + (longlong)local_28.ArrayMax * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (local_28.ArrayNum == local_28.ArrayMax) {
        local_28.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_28.AllocatorInstance,&local_28.ArrayMax);
      }
      lVar7 = (longlong)local_28.ArrayNum;
      local_28.ArrayNum = local_28.ArrayNum + 1;
      uVar4 = *(undefined4 *)pFVar8;
      pFVar8 = pFVar8 + 8;
      *(undefined4 *)(local_28.AllocatorInstance.Data + lVar7 * 4) = uVar4;
    }
    FrameNumbersToTimeRanges(this,&local_28,param_1);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetCachedFrame @ 14ea4b3f0

TSharedPtr<FImgMediaFrame,1> * __thiscall
FImgMediaLoader::GetCachedFrame(FImgMediaLoader *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<FImgMediaFrame,1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  
  if (this->UseGlobalCache == false) {
    if (*(int *)&(this->Frames).LookupSet.Elements.field_0x8 !=
        *(int *)&(this->Frames).LookupSet.Elements.field_0x34) {
      FVar5 = (this->Frames).LookupSet.Hash.SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&(this->Frames).LookupSet.Hash;
      }
      iVar3 = *(int *)((longlong)FVar5 +
                      (ulonglong)((this->Frames).LookupSet.HashSize - 1U & param_1) * 4);
      if (iVar3 != -1) {
        do {
          plVar6 = (longlong *)
                   ((longlong)iVar3 * 0x10 + *(longlong *)&(this->Frames).LookupSet.Elements);
          if (((FCacheEntry *)*plVar6)->Key == param_1) {
            if (plVar6 == (longlong *)0x0) {
              return (TSharedPtr<FImgMediaFrame,1> *)0x0;
            }
            TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::MarkAsRecent
                      (&this->Frames,(FCacheEntry *)*plVar6);
            return (TSharedPtr<FImgMediaFrame,1> *)(*plVar6 + 0x18);
          }
          iVar3 = (int)plVar6[1];
        } while (iVar3 != -1);
      }
    }
    return (TSharedPtr<FImgMediaFrame,1> *)0x0;
  }
  if (((this->GlobalCache).Object == (FImgMediaGlobalCache *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<FImgMediaFrame,1> *)(*pcVar1)();
    return pTVar4;
  }
  pTVar4 = FImgMediaGlobalCache::FindAndTouch
                     ((this->GlobalCache).Object,&this->SequenceName,param_1);
  return pTVar4;
}

// GetCompletedTimeRanges @ 14ea4b560

void __thiscall
FImgMediaLoader::GetCompletedTimeRanges(FImgMediaLoader *this,TRangeSet<FTimespan> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FImgMediaGlobalCache *pFVar2;
  FImgMediaGlobalCacheEntry *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FImgMediaGlobalCacheEntry **ppFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    if (this->UseGlobalCache == false) {
      TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::GetKeys
                (&this->Frames,&local_28);
    }
    else {
      if (((this->GlobalCache).Object == (FImgMediaGlobalCache *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->GlobalCache).Object;
      lpCriticalSection_00 = &pFVar2->CriticalSection;
      if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_14ea4b737;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      ppFVar7 = TMapBase<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>_>
                ::Find((TMapBase<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>_>
                        *)&pFVar2->MapSequenceToMostRecentEntry,this->SequenceName);
      if (ppFVar7 != (FImgMediaGlobalCacheEntry **)0x0) {
        for (pFVar3 = *ppFVar7; pFVar3 != (FImgMediaGlobalCacheEntry *)0x0;
            pFVar3 = pFVar3->LessRecentSequence) {
          piVar1 = &pFVar3->Index;
          if (((local_28.AllocatorInstance.Data <= piVar1) &&
              (piVar1 < local_28.AllocatorInstance.Data + (longlong)local_28.ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = local_28.ArrayNum;
          if (local_28.ArrayNum == local_28.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_28.AllocatorInstance,&local_28.ArrayMax);
          }
          local_28.ArrayNum = iVar6 + 1;
          *(int *)(local_28.AllocatorInstance.Data + (longlong)iVar6 * 4) = *piVar1;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    }
    FrameNumbersToTimeRanges(this,&local_28,param_1);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
LAB_14ea4b737:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDesiredMinimumMipLevelToUpscale @ 14ea4b760

int __thiscall FImgMediaLoader::GetDesiredMinimumMipLevelToUpscale(FImgMediaLoader *this)

{
  FImgMediaMipMapInfo *this_00;
  int iVar1;
  
  this_00 = (this->MipMapInfo).Object;
  if ((this_00 != (FImgMediaMipMapInfo *)0x0) &&
     (((1 < this->NumMipLevels || (1 < (this->TilingDescription).TileNum.field0_0x0._s_0.X)) ||
      (1 < (this->TilingDescription).TileNum.field0_0x0._s_0.Y)))) {
    iVar1 = FImgMediaMipMapInfo::GetMinimumMipLevelToUpscale(this_00);
    return iVar1;
  }
  return -1;
}

// GetDesiredMipTiles @ 14ea4b7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FImgMediaLoader::GetDesiredMipTiles
          (FImgMediaLoader *this,int param_1,
          TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  uint uVar3;
  FImgMediaMipMapInfo *pFVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
  *pTVar10;
  FImgMediaTileSelection *pFVar11;
  TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *pTVar12;
  int iVar13;
  undefined1 auStackY_128 [32];
  int local_f8 [2];
  FSparseArrayAllocationInfo local_f0;
  undefined1 local_d8 [72];
  undefined4 local_90;
  FImgMediaTileSelection local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar4 = (this->MipMapInfo).Object;
  piVar1 = &this->NumMipLevels;
  if ((pFVar4 != (FImgMediaMipMapInfo *)0x0) &&
     (((1 < *piVar1 || (1 < (this->TilingDescription).TileNum.field0_0x0._s_0.X)) ||
      (1 < (this->TilingDescription).TileNum.field0_0x0._s_0.Y)))) {
    lpCriticalSection = &pFVar4->ObjectsCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar13 = (pFVar4->Objects).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (0 < iVar13) {
      if (((this->MipMapInfo).Object == (FImgMediaMipMapInfo *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar10 = FImgMediaMipMapInfo::GetVisibleTiles
                          ((this->MipMapInfo).Object,
                           (TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                            *)local_d8);
      TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
      ::operator=(param_2,pTVar10);
      local_90 = 0;
      if ((void *)local_d8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_d8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      return;
    }
  }
  if (0 < *piVar1) {
    pTVar12 = (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)0x0;
    do {
      iVar13 = (int)pTVar12;
      pFVar11 = FImgMediaTileSelection::CreateForTargetMipLevel
                          (&local_88,&this->SequenceDim,&(this->TilingDescription).TileSize,iVar13,
                           true);
      if (*(int *)&param_2->field_0x34 == 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x50,8,1,(ForAnyElementType *)param_2,(int *)&param_2->field_0x8,
                           (int *)&param_2->field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
      }
      else {
        iVar9 = *(int *)&param_2->field_0x30;
        iVar8 = *(int *)&param_2->field_0x34 + -1;
        iVar2 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar9 * 0x50);
        *(int *)&param_2->field_0x30 = iVar2;
        *(int *)&param_2->field_0x34 = iVar8;
        if (iVar8 != 0) {
          *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar2 * 0x50) = 0xffffffff;
        }
      }
      TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)param_2,&local_f0,iVar9);
      pvVar6 = local_f0.Pointer;
      pTVar12 = (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)0x0;
      if (local_f0.Pointer != (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)0x0) {
        *(int *)local_f0.Pointer = iVar13;
        FImgMediaTileSelection::FImgMediaTileSelection
                  ((FImgMediaTileSelection *)((longlong)local_f0.Pointer + 8),pFVar11);
        *(undefined4 *)((longlong)pvVar6 + 0x48) = 0xffffffff;
        pTVar12 = pvVar6;
      }
      uVar3 = *(uint *)pTVar12;
      local_f8[0] = local_f0.Index;
      bVar7 = TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
              ::TryReplaceExisting
                        ((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                          *)param_2,uVar3,pTVar12,local_f8,(bool *)0x0);
      if (!bVar7) {
        TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
        ::RehashOrLink((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                        *)param_2,uVar3,pTVar12,local_f8[0]);
      }
      if (local_88.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.Tiles.AllocatorInstance.SecondaryData);
      }
      pTVar12 = (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)(ulonglong)(iVar13 + 1U);
    } while ((int)(iVar13 + 1U) < *piVar1);
  }
  return;
}

// GetFrameSample @ 14ea4c000

TSharedPtr<FImgMediaTextureSample,1> * __thiscall
FImgMediaLoader::GetFrameSample
          (FImgMediaLoader *this,TSharedPtr<FImgMediaTextureSample,1> *__return_storage_ptr__,
          FTimespan param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FImgMediaFrame *pFVar1;
  int iVar2;
  ulonglong uVar3;
  TSharedPtr<FImgMediaFrame,1> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  TIntPoint<int>_u_0 local_res18;
  FMediaTimeStamp local_78;
  TSharedPtr<FNativeMediaSourceColorSettings,1> local_68;
  TSharedRef<FImgMediaTextureSample,1> local_58;
  TIntPoint<int>_u_0 local_48;
  TIntPoint<int>_u_0 TStack_40;
  int local_38;
  
  if ((((-1 < param_1.Ticks) && (param_1.Ticks < (this->SequenceDuration).Ticks)) &&
      (0 < (this->ImagePaths).ArrayNum)) &&
     (0 < *(int *)((this->ImagePaths).AllocatorInstance.Data + 8))) {
    uVar3 = ((this->SequenceFrameRate).Numerator * param_1.Ticks) /
            ((longlong)(this->SequenceFrameRate).Denominator * 10000000);
    iVar2 = (int)uVar3;
    if (iVar2 != -1) {
      lpCriticalSection = &this->CriticalSection;
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pTVar4 = GetCachedFrame(this,iVar2);
        if (pTVar4 == (TSharedPtr<FImgMediaFrame,1> *)0x0) {
          __return_storage_ptr__->Object = (FImgMediaTextureSample *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
        }
        else {
          lVar8 = (longlong)(this->SequenceFrameRate).Denominator;
          lVar7 = (longlong)(this->SequenceFrameRate).Numerator;
          lVar6 = (uVar3 & 0xffffffff) * lVar8 * 10000000;
          lVar5 = lVar6 / lVar7;
          if ((int)((lVar5 * lVar7) / (lVar8 * 10000000)) != iVar2) {
            lVar5 = (lVar7 + -1 + lVar6) / lVar7;
          }
          lVar9 = (ulonglong)(iVar2 + 1U) * lVar8 * 10000000;
          lVar6 = lVar9 / lVar7;
          if ((uint)((lVar6 * lVar7) / (lVar8 * 10000000)) != iVar2 + 1U) {
            lVar6 = (lVar7 + -1 + lVar9) / lVar7;
          }
          MakeShared<FImgMediaTextureSample,1>(&local_58);
          pFVar1 = pTVar4->Object;
          lpCriticalSection_00 = &pFVar1->InfoCriticalSection;
          if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_14ea4c28f;
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
          local_res18 = (pFVar1->Info).Dim.field0_0x0;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
          ImgMediaLoader::CheckAndUpdateImgDimensions
                    (&this->SequenceDim,(TIntPoint<int> *)&local_res18._s_0);
          local_68.Object = (this->SourceColorSettings).Object;
          local_68.SharedReferenceCount.ReferenceController =
               (this->SourceColorSettings).SharedReferenceCount.ReferenceController;
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_38 = (this->TilingDescription).TileBorderSize;
          local_48 = (this->TilingDescription).TileNum.field0_0x0;
          TStack_40 = (this->TilingDescription).TileSize.field0_0x0;
          local_78.SequenceIndex = 0;
          local_78.LoopIndex = 0;
          local_78.Time.Ticks = lVar5;
          FImgMediaTextureSample::Initialize
                    (local_58.Object,pTVar4->Object,&this->SequenceDim,&local_78,
                     (FTimespan)(lVar6 - lVar5),(uchar)this->NumMipLevels,
                     (FMediaTextureTilingDescription *)&local_48._s_0,&local_68);
          __return_storage_ptr__->Object = local_58.Object;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               local_58.SharedReferenceCount.ReferenceController;
          if (local_58.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return __return_storage_ptr__;
      }
LAB_14ea4c28f:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
  __return_storage_ptr__->Object = (FImgMediaTextureSample *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetImagePath @ 14ea4c5b0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FImgMediaLoader::GetImagePath(FImgMediaLoader *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  longlong lVar6;
  
  if (((-1 < param_2) && (param_2 < (this->ImagePaths).ArrayNum)) && (-1 < param_1)) {
    lVar6 = (longlong)param_2 * 0x10;
    if (param_1 < *(int *)((this->ImagePaths).AllocatorInstance.Data + lVar6 + 8)) {
      uVar4 = 0;
      if (param_2 < (this->ImagePaths).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
      }
      pFVar1 = (this->ImagePaths).AllocatorInstance.Data;
      uVar4 = 0;
      if (param_1 < *(int *)(pFVar1 + lVar6 + 8)) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
      }
      return (FString *)((longlong)param_1 * 0x10 + *(longlong *)(pFVar1 + lVar6));
    }
  }
  if (1 < (byte)LogImgMedia._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::EmptyString,L"");
      atexit(`FImgMediaLoader::GetImagePath'::__l5::_dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::EmptyString;
}

// GetNumberAtEndOfString @ 14ea4d910

bool __thiscall
FImgMediaLoader::GetNumberAtEndOfString(FImgMediaLoader *this,int *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForAnyElementType _Str;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  FString local_28;
  
  iVar5 = (param_2->Data).ArrayNum;
  uVar9 = (ulonglong)(iVar5 - 2);
  if (iVar5 == 0) {
    uVar9 = 0xffffffff;
  }
  if ((int)uVar9 < 0) {
    return false;
  }
  lVar10 = (longlong)(int)uVar9 * 2;
  while( true ) {
    iVar6 = (param_2->Data).ArrayNum;
    iVar5 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar5 = 0;
    }
    iVar6 = (int)uVar9;
    if ((iVar5 <= iVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = iswdigit(*(wint_t *)((param_2->Data).AllocatorInstance.Data + lVar10));
    if (iVar5 != 0) break;
    lVar10 = lVar10 + -2;
    uVar9 = (ulonglong)(iVar6 - 1U);
    if ((int)(iVar6 - 1U) < 0) {
      return false;
    }
  }
  lVar10 = uVar9 * 2;
  do {
    uVar7 = (uint)uVar9;
    iVar1 = (param_2->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    if ((iVar5 <= (int)uVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = iswdigit(*(wint_t *)((param_2->Data).AllocatorInstance.Data + lVar10));
    if (iVar5 == 0) break;
    lVar10 = lVar10 + -2;
    uVar7 = uVar7 - 1;
    uVar9 = (ulonglong)uVar7;
  } while (-1 < (int)uVar7);
  iVar1 = (param_2->Data).ArrayNum;
  iVar8 = uVar7 + 1;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (iVar8 < iVar5) {
    ::FString::Mid(param_2,&local_28,iVar8,(iVar6 - iVar8) + 1);
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      _Str.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar5 = _wtoi((wchar_t *)_Str.Data);
    *param_1 = iVar5;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// GetPendingTimeRanges @ 14ea4def0

void __thiscall
FImgMediaLoader::GetPendingTimeRanges(FImgMediaLoader *this,TRangeSet<FTimespan> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FrameNumbersToTimeRanges(this,&this->PendingFrameNumbers,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014ea4df3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSkipFrame @ 14ea4e940

int __thiscall FImgMediaLoader::GetSkipFrame(FImgMediaLoader *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1 << ((byte)this->SkipFramesLevel & 0x1f);
  iVar2 = (-iVar2 & param_1) + iVar2;
  if (0 < (this->ImagePaths).ArrayNum) {
    iVar1 = *(int *)((this->ImagePaths).AllocatorInstance.Data + 8);
    if (iVar2 + -1 < iVar1) {
      iVar1 = iVar2;
    }
    return iVar1 + -1;
  }
  iVar1 = 0;
  if (iVar2 + -1 < 0) {
    iVar1 = iVar2;
  }
  return iVar1 + -1;
}

// GetWork @ 14ea4ff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

IQueuedWork * __thiscall FImgMediaLoader::GetWork(FImgMediaLoader *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FImgMediaMipMapInfo *this_00;
  IImgMediaReader *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  TAtomic<int> TVar9;
  IQueuedWork *pIVar10;
  FImgMediaFrame *pFVar11;
  TSharedRef<FImgMediaLoader,1> *pTVar12;
  TSharedPtr<FImgMediaFrame,1> *pTVar13;
  FString *pFVar14;
  FKeyComparisonClass<TLess<int>_> FVar15;
  FImgMediaFrame *pFVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  FImgMediaFrame *pFVar17;
  int iVar18;
  FImgMediaFrame *pFVar19;
  FSharedReferencer<1> *pFVar20;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [8];
  FKeyComparisonClass<TLess<int>_> local_120;
  LPCRITICAL_SECTION local_118;
  FString local_110;
  TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
  local_100;
  TSharedRef<FImgMediaLoader,1> local_b0;
  undefined8 local_a0;
  TReferenceControllerBase<1> *pTStack_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar16 = (FImgMediaFrame *)0x0;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_120.Predicate.Predicate =
       (TDereferenceWrapper<int,TLess<int>_>)
       ((ulonglong)local_120.Predicate.Predicate & 0xffffffff00000000);
  local_118 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  iVar2 = (this->PendingFrameNumbers).ArrayNum;
  if (iVar2 != 0) {
    if ((iVar2 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pIVar10 = (IQueuedWork *)(*pcVar7)();
      return pIVar10;
    }
    iVar2 = (this->PendingFrameNumbers).ArrayNum;
    iVar3 = *(int *)((this->PendingFrameNumbers).AllocatorInstance.Data + (longlong)iVar2 * 4 + -4);
    (this->PendingFrameNumbers).ArrayNum = iVar2 + -1;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    GetDesiredMipTiles(this,iVar3,
                       (TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                        *)local_88);
    pFVar17 = pFVar16;
    if (local_88._8_4_ == local_54) {
      TryAddEmptyFrame(this,iVar3);
    }
    else {
      this_00 = (this->MipMapInfo).Object;
      if ((this_00 == (FImgMediaMipMapInfo *)0x0) ||
         (((this->NumMipLevels < 2 && ((this->TilingDescription).TileNum.field0_0x0._s_0.X < 2)) &&
          ((this->TilingDescription).TileNum.field0_0x0._s_0.Y < 2)))) {
        TVar9 = (TAtomic<int>)0xffffffff;
      }
      else {
        TVar9 = (TAtomic<int>)FImgMediaMipMapInfo::GetMinimumMipLevelToUpscale(this_00);
      }
      LOCK();
      this->MinimumMipLevelToUpscale = TVar9;
      UNLOCK();
      if (((-1 < (int)this->MinimumMipLevelToUpscale) && (this->NumMipLevels < 2)) &&
         ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0 && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)))) {
        pFVar14 = GetImagePath(this,0,0);
        ::FString::FString(&local_110,pFVar14);
        if (3 < (byte)LogImgMedia._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u_No_upscaling_fo_152fe8998,
                     (FLogCategoryBase *)&LogImgMedia);
        }
        ThreadSafeOnce282 = 1;
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        _Init_thread_footer(&::_TSS0);
      }
      pFVar19 = pFVar16;
      if ((this->WorkPool).ArrayNum < 1) {
        pFVar11 = ::operator_new(0x98);
        FVar15.Predicate.Predicate = local_120.Predicate.Predicate;
        if (pFVar11 != (FImgMediaFrame *)0x0) {
          if (((this->Reader).Object == (IImgMediaReader *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            pIVar10 = (IQueuedWork *)(*pcVar7)();
            return pIVar10;
          }
          FVar15.Predicate.Predicate =
               (TDereferenceWrapper<int,TLess<int>_>)
               (this->Reader).SharedReferenceCount.ReferenceController;
          pIVar4 = (this->Reader).Object;
          if (FVar15.Predicate.Predicate != (TLess<int> *)0x0) {
            LOCK();
            ((TReferenceControllerBase<1> *)FVar15.Predicate.Predicate)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)FVar15.Predicate.Predicate)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pIVar4 == (IImgMediaReader *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            pIVar10 = (IQueuedWork *)(*pcVar7)();
            return pIVar10;
          }
          pTVar12 = TSharedFromThis<FImgMediaLoader,1>::AsShared
                              ((TSharedFromThis<FImgMediaLoader,1> *)&this->_padding_,&local_b0);
          (pFVar11->Data).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          *(undefined4 *)&pFVar11->field_0x14 = 0xffffffff;
          (pFVar11->Data).Object = &___7FImgMediaLoaderWork__6B_;
          (pFVar11->MipTilesPresent).CriticalSection.CriticalSection.Opaque1[0] = (void *)0x0;
          (pFVar11->MipTilesPresent).CriticalSection.CriticalSection.Opaque2[0] = 0;
          (pFVar11->MipTilesPresent).CriticalSection.CriticalSection.Opaque2[1] = 0;
          (pFVar11->MipTilesPresent).CriticalSection.CriticalSection.Opaque3[2] = (void *)0x0;
          *(undefined4 *)&(pFVar11->MipTilesPresent).MipTiles.field_0x0 = 0;
          *(undefined4 *)(&(pFVar11->MipTilesPresent).MipTiles.field_0x0 + 4) = 0x80;
          *(undefined4 *)&(pFVar11->MipTilesPresent).MipTiles.field_0x8 = 0xffffffff;
          *(undefined4 *)&(pFVar11->MipTilesPresent).MipTiles.field_0xc = 0;
          *(undefined8 *)&(pFVar11->MipTilesPresent).MipTiles.field_0x18 = 0;
          *(undefined4 *)&(pFVar11->MipTilesPresent).MipTiles.field_0x20 = 0;
          *(undefined8 *)&(pFVar11->MipTilesPresent).MipTiles.field_0x28 = 0;
          *(undefined8 *)&(pFVar11->MipTilesPresent).MipTiles.field_0x30 = 0;
          *(FImgMediaLoader **)&(pFVar11->MipTilesPresent).MipTiles.field_0x38 = pTVar12->Object;
          pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
          *(TReferenceControllerBase<1> **)&(pFVar11->MipTilesPresent).MipTiles.field_0x40 = pTVar5;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
            UNLOCK();
          }
          *(IImgMediaReader **)&(pFVar11->MipTilesPresent).MipTiles.field_0x48 = pIVar4;
          *(TDereferenceWrapper<int,TLess<int>_> *)&(pFVar11->NumTilesRead).field_0x0 =
               FVar15.Predicate.Predicate;
          if (FVar15.Predicate.Predicate != (TLess<int> *)0x0) {
            LOCK();
            ((TReferenceControllerBase<1> *)FVar15.Predicate.Predicate)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)FVar15.Predicate.Predicate)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar17 = pFVar11;
          pFVar19 = (FImgMediaFrame *)&DAT_00000003;
        }
      }
      else {
        iVar2 = (this->WorkPool).ArrayNum;
        iVar18 = iVar2 + -1;
        pFVar17 = *(FImgMediaFrame **)
                   ((this->WorkPool).AllocatorInstance.Data + (longlong)iVar2 * 8 + -8);
        (this->WorkPool).ArrayNum = iVar18;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->WorkPool).AllocatorInstance,iVar18,&(this->WorkPool).ArrayMax);
        FVar15.Predicate.Predicate = local_120.Predicate.Predicate;
      }
      if (((ulonglong)pFVar19 & 2) != 0) {
        pFVar19 = (FImgMediaFrame *)(ulonglong)((uint)pFVar19 & 0xfffffffd);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0.SharedReferenceCount.ReferenceController);
      }
      if (((ulonglong)pFVar19 & 1) != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar15.Predicate.Predicate);
      }
      pTVar13 = GetCachedFrame(this,iVar3);
      pFVar19 = pFVar16;
      if (pTVar13 != (TSharedPtr<FImgMediaFrame,1> *)0x0) {
        pFVar16 = (FImgMediaFrame *)(pTVar13->SharedReferenceCount).ReferenceController;
        pFVar19 = pTVar13->Object;
        if (pFVar16 != (FImgMediaFrame *)0x0) {
          LOCK();
          pFVar20 = &(pFVar16->Data).SharedReferenceCount;
          *(int *)&pFVar20->ReferenceController = *(int *)&pFVar20->ReferenceController + 1;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      if (pFVar16 == (FImgMediaFrame *)0x0) {
        pFVar20 = (FSharedReferencer<1> *)&DAT_00000008;
      }
      else {
        pFVar20 = &(pFVar16->Data).SharedReferenceCount;
        LOCK();
        *(int *)&pFVar20->ReferenceController = *(int *)&pFVar20->ReferenceController + 1;
        UNLOCK();
      }
      local_100.Elements._0_8_ = 0;
      local_100.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_100.Elements._48_8_ = _UNK_150631d98;
      local_100.Elements._8_8_ = 0;
      local_100.Elements._32_8_ = 0;
      local_100.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_100.HashSize = 0;
      TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
      ::operator=(&local_100,
                  (TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                   *)local_88);
      *(int *)&(pFVar17->Format).field_0x0 = this->NextFrameNumberJobID;
      *(int *)&pFVar17->field_0x14 = iVar3;
      TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
      ::operator=((TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                   *)&pFVar17->MipTilesPresent,
                  (TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                   *)&local_100);
      if (pFVar16 != (FImgMediaFrame *)0x0) {
        LOCK();
        *(int *)&pFVar20->ReferenceController = *(int *)&pFVar20->ReferenceController + 1;
        UNLOCK();
      }
      local_a0 = *(undefined8 *)&(pFVar17->MipTilesPresent).MipTiles.field_0x28;
      pTStack_98 = *(TReferenceControllerBase<1> **)&(pFVar17->MipTilesPresent).MipTiles.field_0x30;
      *(FImgMediaFrame **)&(pFVar17->MipTilesPresent).MipTiles.field_0x28 = pFVar19;
      *(FImgMediaFrame **)&(pFVar17->MipTilesPresent).MipTiles.field_0x30 = pFVar16;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_98);
      local_120.Predicate.Predicate = (TDereferenceWrapper<int,TLess<int>_>)local_128;
      TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
      ::
      Sort<TSortableMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>::FKeyComparisonClass<TLess<int>_>_>
                ((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                  *)&pFVar17->MipTilesPresent,&local_120);
      local_100.HashSize = 0;
      if (local_100.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_100.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_100.Elements);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar16);
      iVar2 = this->NextFrameNumberJobID;
      piVar1 = &(this->QueuedFrameNumbers).ArrayMax;
      this->NextFrameNumberJobID = iVar2 + 1;
      iVar18 = (this->QueuedFrameNumbers).ArrayNum;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->QueuedFrameNumbers).AllocatorInstance,piVar1);
      }
      (this->QueuedFrameNumbers).ArrayNum = iVar18 + 1;
      pFVar6 = (this->QueuedFrameNumbers).AllocatorInstance.Data;
      *(int *)(pFVar6 + (longlong)iVar18 * 8) = iVar3;
      *(int *)(pFVar6 + (longlong)iVar18 * 8 + 4) = iVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar16);
      lpCriticalSection = local_118;
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    bVar8 = local_88._12_4_ != 0;
    local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
    if (bVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    pFVar16 = pFVar17;
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return (IQueuedWork *)pFVar16;
}

// HandleGlobalCacheFrameEviction @ 14ea507c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FImgMediaLoader::HandleGlobalCacheFrameEviction(FImgMediaLoader *this)

{
  if ((((this->LastRequestedFrame != -1) && ((this->PendingFrameNumbers).ArrayNum == 0)) &&
      ((this->QueuedFrameNumbers).ArrayNum == 0)) &&
     (this->RetryCount = this->RetryCount + 1, 1 < this->RetryCount)) {
    if (1 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    }
    this->LastRequestedFrame = -1;
    this->RetryCount = 0;
  }
  return;
}

// HandlePause @ 14ea50830

void __thiscall FImgMediaLoader::HandlePause(FImgMediaLoader *this)

{
  return;
}

// HasMipsOrTilesEnabled @ 14ea50890

bool __thiscall FImgMediaLoader::HasMipsOrTilesEnabled(FImgMediaLoader *this)

{
  if (((this->MipMapInfo).Object != (FImgMediaMipMapInfo *)0x0) &&
     (((1 < this->NumMipLevels || (1 < (this->TilingDescription).TileNum.field0_0x0._s_0.X)) ||
      (1 < (this->TilingDescription).TileNum.field0_0x0._s_0.Y)))) {
    return true;
  }
  return false;
}

// Initialize @ 14ea512d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FImgMediaLoader::Initialize
          (FImgMediaLoader *this,FString *param_1,FFrameRate *param_2,bool param_3,bool param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IImgMediaReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  FText local_88;
  FImgMediaFrameInfo local_78;
  
  if (5 < (byte)LogImgMedia._0_1_) {
    this_00 = FFrameRate::ToPrettyText(param_2,&local_88);
    FText::ToString(this_00);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  if ((this->Initialized != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Initialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                         ,0x2e3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_78.CompressionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CompressionName.Data.ArrayNum = 0;
  local_78.CompressionName.Data.ArrayMax = 0;
  local_78.FormatName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Srgb = false;
  local_78.UncompressedSize = 0;
  local_78.NumChannels = 0;
  local_78.bHasTiles = false;
  local_78.TileBorder = 0;
  local_78.NumMipLevels = 0;
  local_78.FormatName.Data.ArrayNum = ___xmm_000000010000ea600000000000000000;
  local_78.FormatName.Data.ArrayMax = _UNK_1528a8c84;
  local_78.FrameRate = _UNK_1528a8c88;
  bVar3 = LoadSequence(this,param_1,param_2,param_3,&local_78);
  if (bVar3) {
    if (!param_4) {
      if (((this->Reader).Object == (IImgMediaReader *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pIVar1 = (this->Reader).Object;
      (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,this->NumFramesToLoad,&local_78);
    }
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Update(this,0,0.0,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  this->Initialized = true;
  if (local_78.FormatName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.FormatName.Data.AllocatorInstance.Data);
  }
  if (local_78.CompressionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.CompressionName.Data.AllocatorInstance.Data);
  }
  return;
}

// IsFrameFirst @ 14ea51ae0

bool __thiscall FImgMediaLoader::IsFrameFirst(FImgMediaLoader *this,FTimespan *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1->Ticks;
  if ((((-1 < lVar1) && (lVar1 < (this->SequenceDuration).Ticks)) &&
      (0 < (this->ImagePaths).ArrayNum)) &&
     (0 < *(int *)((this->ImagePaths).AllocatorInstance.Data + 8))) {
    return (int)(((this->SequenceFrameRate).Numerator * lVar1) /
                ((longlong)(this->SequenceFrameRate).Denominator * 10000000)) == 0;
  }
  return false;
}

// IsFrameLast @ 14ea51b50

bool __thiscall FImgMediaLoader::IsFrameLast(FImgMediaLoader *this,FTimespan *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1->Ticks;
  if ((((-1 < lVar1) && (lVar1 < (this->SequenceDuration).Ticks)) &&
      (0 < (this->ImagePaths).ArrayNum)) &&
     (0 < *(int *)((this->ImagePaths).AllocatorInstance.Data + 8))) {
    return (int)(((this->SequenceFrameRate).Numerator * lVar1) /
                ((longlong)(this->SequenceFrameRate).Denominator * 10000000)) ==
           *(int *)((this->ImagePaths).AllocatorInstance.Data + 8) + -1;
  }
  if (0 < (this->ImagePaths).ArrayNum) {
    return *(int *)((this->ImagePaths).AllocatorInstance.Data + 8) == 0;
  }
  return true;
}

// LoadSequence @ 14ea521d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FImgMediaLoader::LoadSequence
          (FImgMediaLoader *this,FString *param_1,FFrameRate *param_2,bool param_3,
          FImgMediaFrameInfo *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FImgMediaMipTiles *lpCriticalSection_00;
  int *piVar1;
  TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  FWindowsRecursiveMutex *lpCriticalSection_01;
  IImageWrapperModule *pIVar3;
  code *pcVar4;
  TIntPoint<int>_u_0 TVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderLoadSequence> FVar16;
  FString *pFVar17;
  TSharedRef<FImgMediaLoader,1> *pTVar18;
  TSharedPtr<IImgMediaReader,1> *pTVar19;
  FImgMediaFrame *pFVar20;
  IImgMediaReader *pIVar21;
  FFrameRate FVar22;
  longlong lVar23;
  FImgMediaMipMapInfo *pFVar24;
  ulonglong uVar25;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar26;
  ForAnyElementType FVar27;
  FStaticBasicLogRecord *pFVar28;
  uint uVar29;
  TReferenceControllerBase<1> *pTVar30;
  wchar_t *pwVar31;
  FName FVar32;
  FScriptContainerElement *pFVar33;
  int iVar34;
  longlong lVar35;
  longlong lVar36;
  uint uVar37;
  longlong lVar38;
  ulonglong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  TReferenceControllerBase<1> *local_278;
  TArray<FString,TSizedDefaultAllocator<32>_> local_268;
  FColor_u_0 local_258 [2];
  TSharedPtr<FImgMediaFrame,1> *local_250;
  TReferenceControllerBase<1> *local_248;
  FSharedReferencer<1> FStack_240;
  FName local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  FString local_228;
  FName local_218;
  TRawPtrProxy<FGenericImgMediaReader> local_208;
  UImgMediaSettings *local_200;
  LARGE_INTEGER local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FStatMessage local_1a0;
  FImgMediaFrameInfo local_190;
  FName local_128;
  FName local_120;
  TSharedPtr<IImgMediaReader,1> local_118;
  TSharedRef<FImgMediaLoader,1> local_108;
  TSharedRef<FImgMediaLoader,1> local_f8;
  TSharedRef<FImgMediaLoader,1> local_e8;
  FString local_d8;
  FPlatformMemoryStats local_c8;
  
  bVar11 = false;
  FVar16 = StatPtr_STAT_ImgMedia_LoaderLoadSequence;
  if (StatPtr_STAT_ImgMedia_LoaderLoadSequence ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderLoadSequence>)0x0) {
    pFVar15 = ::FName::FName(&local_128,"STAT_ImgMedia_LoaderLoadSequence");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderLoadSequence>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_LoaderLoadSequence,
                        *pFVar15,L"ImgMedia Loader Load Sequence","STATGROUP_Media",
                        "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar16;
  bVar7 = false;
  bVar6 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_14ea52338:
    bVar7 = bVar9;
    bVar6 = bVar8;
    bVar8 = false;
    FVar32 = local_218;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_258[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_258[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_238.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_238.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_238,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                   ,0x338);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea52338;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar8 = true;
  }
  if ((param_1->Data).ArrayNum < 2) {
    bVar11 = false;
    goto LAB_14ea530a7;
  }
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  FindFiles(this,param_1,&local_268);
  if (local_268.ArrayNum == 0) {
    if (1 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    }
    bVar11 = false;
  }
  else {
    pTVar2 = &this->ImagePaths;
    iVar13 = (this->ImagePaths).ArrayNum;
    piVar1 = &(this->ImagePaths).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    FVar27.Data = local_268.AllocatorInstance.Data;
    pFVar33 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    (this->ImagePaths).ArrayNum = iVar13 + 1;
    *(undefined8 *)pFVar33 = 0;
    iVar13 = local_268.ArrayNum;
    *(int *)(pFVar33 + 8) = local_268.ArrayNum;
    if (local_268.ArrayNum == 0) {
      *(int *)(pFVar33 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_268.ArrayNum,0,(ForAnyElementType *)pFVar33,local_268.ArrayNum,
                 (int *)(pFVar33 + 0xc));
      ConstructItems<FString,FString,int>(*(void **)pFVar33,(FString *)FVar27.Data,iVar13);
    }
    FindMips(this,param_1);
    lpCriticalSection = &this->CriticalSection;
    local_230 = 1;
    uStack_22c = 1;
    (this->TilingDescription).TileNum.field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_14ea5319b:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->ImagePaths).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    pFVar33 = (pTVar2->AllocatorInstance).Data;
    if ((*(int *)(pFVar33 + 8) < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    FPaths::GetExtension(&local_228,*(FString **)pFVar33,false);
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_228.Data.ArrayNum != 0) {
      FVar27.Data = local_228.Data.AllocatorInstance.Data;
    }
    iVar13 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar27.Data,L"exr");
    if (iVar13 == 0) {
      if (((this->ImagePaths).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar33 = (pTVar2->AllocatorInstance).Data;
      if ((*(int *)(pFVar33 + 8) < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar17 = ::FString::FString(&local_d8,*(FString **)pFVar33);
      pTVar18 = TSharedFromThis<FImgMediaLoader,1>::AsShared
                          ((TSharedFromThis<FImgMediaLoader,1> *)&this->_padding_,&local_108);
      pTVar19 = FExrImgMediaReader::GetReader(&local_118,pTVar18,pFVar17);
      if (&this->Reader != pTVar19) {
        (this->Reader).Object = pTVar19->Object;
        pTVar19->Object = (IImgMediaReader *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Reader).SharedReferenceCount,&pTVar19->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
    }
    else {
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_228.Data.ArrayNum != 0) {
        FVar27.Data = local_228.Data.AllocatorInstance.Data;
      }
      iVar13 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar27.Data,L"dds");
      if (iVar13 == 0) {
        pTVar18 = TSharedFromThis<FImgMediaLoader,1>::AsShared
                            ((TSharedFromThis<FImgMediaLoader,1> *)&this->_padding_,&local_f8);
        local_278 = ::operator_new(0x28);
        if (local_278 == (TReferenceControllerBase<1> *)0x0) {
          pTVar30 = (TReferenceControllerBase<1> *)&DAT_00000010;
          local_248 = ___xmm_00000000000000000000000000000010;
          local_278 = (TReferenceControllerBase<1> *)0x0;
          FStack_240.ReferenceController = _UNK_150651568;
        }
        else {
          local_278->SharedReferenceCount = (atomic<int>)0x1;
          local_278->WeakReferenceCount = (atomic<int>)0x1;
          local_278->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFDdsImgMediaReader___00_SharedPointerInternals__6B_
          ;
          local_278[1]._padding_ = (longlong)&___7FDdsImgMediaReader__6B_;
          *(FImgMediaLoader **)&local_278[1].SharedReferenceCount = pTVar18->Object;
          pTVar30 = (pTVar18->SharedReferenceCount).ReferenceController;
          local_278[2]._padding_ = (longlong)pTVar30;
          if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar30->WeakReferenceCount = (atomic<int>)((int)pTVar30->WeakReferenceCount + 1);
            UNLOCK();
          }
          pTVar30 = local_278 + 1;
          if ((pTVar30 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          LOCK();
          local_278->SharedReferenceCount = (atomic<int>)((int)local_278->SharedReferenceCount + 1);
          UNLOCK();
          FStack_240.ReferenceController = local_278;
          local_248 = pTVar30;
        }
        if (&this->Reader != (TSharedPtr<IImgMediaReader,1> *)&local_248) {
          (this->Reader).Object = (IImgMediaReader *)pTVar30;
          local_248 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->Reader).SharedReferenceCount,&FStack_240);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_240.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_278);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
      }
      else {
        local_208.Object = ::operator_new(0x20);
        if (local_208.Object == (FGenericImgMediaReader *)0x0) {
          local_208.Object = (FGenericImgMediaReader *)0x0;
        }
        else {
          pTVar18 = TSharedFromThis<FImgMediaLoader,1>::AsShared
                              ((TSharedFromThis<FImgMediaLoader,1> *)&this->_padding_,&local_e8);
          pIVar3 = this->ImageWrapperModule;
          (local_208.Object)->_padding_ = (longlong)&___7FGenericImgMediaReader__6B_;
          (local_208.Object)->ImageWrapperModule = pIVar3;
          ((local_208.Object)->LoaderPtr).Object = pTVar18->Object;
          pTVar30 = (pTVar18->SharedReferenceCount).ReferenceController;
          ((local_208.Object)->LoaderPtr).WeakReferenceCount.ReferenceController = pTVar30;
          if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar30->WeakReferenceCount = (atomic<int>)((int)pTVar30->WeakReferenceCount + 1);
            UNLOCK();
          }
          bVar11 = true;
        }
        TSharedPtr<IImgMediaReader,1>::operator=<FGenericImgMediaReader>(&this->Reader,&local_208);
        if (bVar11) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.SharedReferenceCount.ReferenceController);
        }
      }
    }
    if ((this->Reader).Object == (IImgMediaReader *)0x0) {
      if (1 < (byte)LogImgMedia._0_1_) {
        if (((this->ImagePaths).ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        if ((*(int *)((pTVar2->AllocatorInstance).Data + 8) < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        pFVar28 = &::LOG_Static;
LAB_14ea52b95:
        UE::Logging::Private::BasicLog<2>(pFVar28,(FLogCategoryBase *)&LogImgMedia);
      }
LAB_14ea52ba4:
      bVar11 = false;
    }
    else {
      local_200 = GetDefault<UImgMediaSettings>();
      bVar11 = local_200->BandwidthThrottlingEnabled;
      this->bIsBandwidthThrottlingEnabled = bVar11;
      if ((bVar11 == false) || (this->bIsPlaybackBlocking != false)) {
        this->bIsSkipFramesEnabled = false;
        this->SkipFramesCounter = 0;
        this->SkipFramesLevel = 0;
      }
      else {
        this->bIsSkipFramesEnabled = true;
      }
      bVar11 = (this->SmartCacheSettings).bIsEnabled;
      this->UseGlobalCache = local_200->UseGlobalCache;
      if (bVar11 != false) {
        this->UseGlobalCache = false;
      }
      if ((param_1->Data).ArrayNum == 0) {
        pwVar31 = L"";
      }
      else {
        pwVar31 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pFVar15 = ::FName::FName(&local_120,pwVar31);
      this->SequenceName = *pFVar15;
      local_250 = GetCachedFrame(this,0);
      if (local_250 == (TSharedPtr<FImgMediaFrame,1> *)0x0) {
LAB_14ea52a96:
        pIVar21 = TSharedPtr<IImgMediaReader,1>::operator->(&this->Reader);
        pcVar4 = *(code **)*pIVar21;
        if (((this->ImagePaths).ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        local_250 = (TSharedPtr<FImgMediaFrame,1> *)(this->ImagePaths).AllocatorInstance.Data;
        if ((*(int *)&(local_250->SharedReferenceCount).ReferenceController < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        cVar12 = (*pcVar4)(pIVar21,local_250->Object);
        if (cVar12 == '\0') {
          if (1 < (byte)LogImgMedia._0_1_) {
            pFVar28 = &::LOG_Static;
            goto LAB_14ea52b95;
          }
          goto LAB_14ea52ba4;
        }
      }
      else {
        pFVar20 = TSharedPtr<FImgMediaFrame,1>::operator->(local_250);
        lpCriticalSection_00 = &pFVar20->MipTilesPresent;
        if (lpCriticalSection_00 == (FImgMediaMipTiles *)0x0) goto LAB_14ea5319b;
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        iVar13 = *(int *)&(pFVar20->MipTilesPresent).MipTiles.field_0x34;
        iVar34 = *(int *)&(pFVar20->MipTilesPresent).MipTiles.field_0x8;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        if (iVar34 == iVar13) goto LAB_14ea52a96;
        pFVar20 = local_250->Object;
        lpCriticalSection_01 = &pFVar20->InfoCriticalSection;
        if (lpCriticalSection_01 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
        ::FString::FString(&local_190.CompressionName,&(pFVar20->Info).CompressionName);
        local_190.Dim.field0_0x0 = (pFVar20->Info).Dim.field0_0x0;
        ::FString::FString(&local_190.FormatName,&(pFVar20->Info).FormatName);
        local_190.FrameRate = (pFVar20->Info).FrameRate;
        local_190.Srgb = (pFVar20->Info).Srgb;
        local_190.UncompressedSize = (pFVar20->Info).UncompressedSize;
        local_190.NumChannels = (pFVar20->Info).NumChannels;
        local_190.bHasTiles = (pFVar20->Info).bHasTiles;
        local_190.NumTiles.field0_0x0 = (pFVar20->Info).NumTiles.field0_0x0;
        local_190.TileDimensions.field0_0x0 = (pFVar20->Info).TileDimensions.field0_0x0;
        local_190.TileBorder = (pFVar20->Info).TileBorder;
        local_190.NumMipLevels = (pFVar20->Info).NumMipLevels;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
        FImgMediaFrameInfo::operator=(param_4,&local_190);
        if (local_190.FormatName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.FormatName.Data.AllocatorInstance.Data);
        }
        if (local_190.CompressionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_190.CompressionName.Data.AllocatorInstance.Data);
        }
      }
      if (param_4->UncompressedSize == 0) {
        if (1 < (byte)LogImgMedia._0_1_) {
          pFVar28 = &::LOG_Static;
          goto LAB_14ea52b95;
        }
        goto LAB_14ea52ba4;
      }
      iVar13 = (param_4->Dim).field0_0x0._s_0.Y;
      if ((param_4->Dim).field0_0x0._s_0.X < iVar13) {
        iVar13 = (param_4->Dim).field0_0x0._s_0.X;
      }
      if (iVar13 < 1) {
        if (1 < (byte)LogImgMedia._0_1_) {
          pFVar28 = &::LOG_Static;
          goto LAB_14ea52b95;
        }
        goto LAB_14ea52ba4;
      }
      iVar13 = (this->ImagePaths).ArrayNum;
      if (iVar13 < param_4->NumMipLevels) {
        iVar13 = param_4->NumMipLevels;
      }
      this->NumMipLevels = iVar13;
      LOCK();
      this->MinimumMipLevelToUpscale = (TAtomic<int>)0xffffffff;
      UNLOCK();
      (this->SequenceDim).field0_0x0 = (param_4->Dim).field0_0x0;
      if ((param_2->Denominator < 1) || (param_2->Numerator < 1)) {
        FVar22 = param_4->FrameRate;
      }
      else {
        param_4->FrameRate = *param_2;
        FVar22 = *param_2;
      }
      this->SequenceFrameRate = FVar22;
      iVar13 = (this->ImagePaths).ArrayNum;
      uVar37 = 0;
      uVar14 = uVar37;
      if (0 < iVar13) {
        uVar14 = *(uint *)((this->ImagePaths).AllocatorInstance.Data + 8);
      }
      lVar35 = (longlong)(this->SequenceFrameRate).Denominator;
      lVar36 = (longlong)(this->SequenceFrameRate).Numerator;
      lVar38 = (ulonglong)uVar14 * lVar35 * 10000000;
      lVar23 = lVar38 / lVar36;
      if ((uint)((lVar23 * lVar36) / (lVar35 * 10000000)) != uVar14) {
        lVar23 = (lVar36 + -1 + lVar38) / lVar36;
      }
      (this->SequenceDuration).Ticks = lVar23;
      uVar39 = param_4->UncompressedSize;
      if (1 < iVar13) {
        uVar39 = (uVar39 * 4) / 3;
      }
      if (param_4->bHasTiles != false) {
        (this->TilingDescription).TileBorderSize = param_4->TileBorder;
        (this->TilingDescription).TileNum.field0_0x0 = (param_4->NumTiles).field0_0x0;
        (this->TilingDescription).TileSize.field0_0x0 = (param_4->TileDimensions).field0_0x0;
      }
      bVar11 = HasMipsOrTilesEnabled(this);
      if (bVar11) {
        pFVar24 = TSharedPtr<FImgMediaMipMapInfo,1>::operator->(&this->MipMapInfo);
        iVar13 = this->NumMipLevels;
        (pFVar24->SequenceInfo).Name = this->SequenceName;
        (pFVar24->SequenceInfo).Dim.field0_0x0 = (this->SequenceDim).field0_0x0;
        TVar5 = (this->TilingDescription).TileSize.field0_0x0;
        (pFVar24->SequenceInfo).TilingDescription.TileNum.field0_0x0 =
             (this->TilingDescription).TileNum.field0_0x0;
        (pFVar24->SequenceInfo).TilingDescription.TileSize.field0_0x0 = TVar5;
        (pFVar24->SequenceInfo).TilingDescription.TileBorderSize =
             (this->TilingDescription).TileBorderSize;
        if (iVar13 < 1) {
          iVar13 = 1;
        }
        (pFVar24->SequenceInfo).NumMipLevels = iVar13;
        iVar13 = (pFVar24->SequenceInfo).TilingDescription.TileNum.field0_0x0._s_0.X;
        if (iVar13 < 1) {
          iVar13 = 1;
        }
        (pFVar24->SequenceInfo).TilingDescription.TileNum.field0_0x0._s_0.X = iVar13;
        iVar13 = (pFVar24->SequenceInfo).TilingDescription.TileNum.field0_0x0._s_0.Y;
        if (iVar13 < 1) {
          iVar13 = 1;
        }
        (pFVar24->SequenceInfo).TilingDescription.TileNum.field0_0x0._s_0.Y = iVar13;
      }
      FWindowsPlatformMemory::GetStats(&local_c8);
      if ((this->SmartCacheSettings).bIsEnabled == false) {
        lVar23 = 0;
        fVar40 = local_200->CacheSizeGB * __real_4e800000;
        if ((__real_5f000000 <= fVar40) &&
           (fVar40 = fVar40 - __real_5f000000, fVar40 < __real_5f000000)) {
          lVar23 = -0x8000000000000000;
        }
        if ((ulonglong)((longlong)fVar40 + lVar23) < (ulonglong)local_c8._padding_) {
          local_c8._padding_ = (longlong)fVar40 + lVar23;
        }
        uVar25 = 0;
        if (local_c8._padding_ != 0) {
          uVar25 = local_c8._padding_;
        }
        uVar14 = uVar37;
        if (0 < (this->ImagePaths).ArrayNum) {
          uVar14 = *(uint *)((this->ImagePaths).AllocatorInstance.Data + 8);
        }
        uVar26 = uVar14;
        if (2 < (int)uVar14) {
          uVar26 = 2;
        }
        uVar29 = (uint)(uVar25 / uVar39);
        if ((int)uVar29 < (int)uVar14) {
          uVar14 = uVar29;
        }
        if ((int)uVar26 < (int)uVar14) {
          uVar26 = uVar14;
        }
        this->NumFramesToLoad = uVar26;
        fVar40 = local_200->CacheBehindPercentage;
        if (__real_42c80000 <= local_200->CacheBehindPercentage) {
          fVar40 = __real_42c80000;
        }
        fVar42 = (float)(int)uVar26;
        if (fVar40 <= 0.0) {
          fVar40 = 0.0;
        }
        fVar41 = __real_3f800000 - fVar40 * __real_3c23d70a;
        this->NumLoadBehind = (int)(fVar42 * fVar40 * __real_3c23d70a);
        uVar14 = -((int)ROUND(__real_bf000000 - (fVar42 + fVar42) * fVar41) >> 1);
      }
      else {
        iVar13 = (this->ImagePaths).ArrayNum;
        uVar29 = (uint)(((this->SmartCacheSettings).TimeToLookAhead *
                        (float)(this->SequenceFrameRate).Numerator) /
                       (float)(this->SequenceFrameRate).Denominator);
        this->NumFramesToLoad = uVar29;
        uVar26 = uVar37;
        if (0 < iVar13) {
          uVar26 = *(uint *)((this->ImagePaths).AllocatorInstance.Data + 8);
        }
        this->NumLoadBehind = 0;
        uVar14 = uVar26;
        if (2 < (int)uVar26) {
          uVar14 = 2;
        }
        if ((int)uVar29 < (int)uVar26) {
          uVar26 = uVar29;
        }
        if ((int)uVar14 < (int)uVar26) {
          uVar14 = uVar26;
        }
        this->NumFramesToLoad = uVar14;
        uVar26 = uVar14;
      }
      this->NumLoadAhead = uVar14;
      TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Empty
                (&this->Frames,uVar26);
      pFVar17 = &this->Info;
      ::FString::operator=(pFVar17,L"Image Sequence\n");
      ::FString::PrintfImpl(&local_1f0,L"    Dimension: %i x %i\n");
      uVar14 = local_1f0.Data.ArrayNum - 1;
      if (local_1f0.Data.ArrayNum == 0) {
        uVar14 = uVar37;
      }
      ::FString::AppendChars(pFVar17,(wchar_t *)local_1f0.Data.AllocatorInstance.Data,uVar14);
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1e0,L"    Format: %s\n");
      iVar34 = 0;
      iVar13 = local_1e0.Data.ArrayNum + -1;
      if (local_1e0.Data.ArrayNum == 0) {
        iVar13 = iVar34;
      }
      ::FString::AppendChars(pFVar17,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,iVar13);
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1d0,L"    Compression: %s\n");
      iVar13 = local_1d0.Data.ArrayNum + -1;
      if (local_1d0.Data.ArrayNum == 0) {
        iVar13 = iVar34;
      }
      ::FString::AppendChars(pFVar17,(wchar_t *)local_1d0.Data.AllocatorInstance.Data,iVar13);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1c0,L"    Frames: %i\n");
      iVar13 = local_1c0.Data.ArrayNum + -1;
      if (local_1c0.Data.ArrayNum == 0) {
        iVar13 = iVar34;
      }
      ::FString::AppendChars(pFVar17,(wchar_t *)local_1c0.Data.AllocatorInstance.Data,iVar13);
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1b0,L"    Frame Rate: %.2f (%i/%i)\n");
      iVar13 = local_1b0.Data.ArrayNum + -1;
      if (local_1b0.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      ::FString::AppendChars(pFVar17,(wchar_t *)local_1b0.Data.AllocatorInstance.Data,iVar13);
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      bVar11 = true;
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  DestructItems<FString,int>((FString *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
LAB_14ea530a7:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar32 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1a0.NameAndInfo.Index = FVar32.ComparisonIndex.Value;
      local_1a0.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1f8);
      local_1a0.StatData.Pad[4] = '\0';
      local_1a0.StatData.Pad[5] = '\0';
      local_1a0.StatData.Pad[6] = '\0';
      local_1a0.StatData.Pad[7] = '\0';
      local_1a0.StatData.Pad[0] = local_1f8.s.LowPart._0_1_;
      local_1a0.StatData.Pad[1] = local_1f8.s.LowPart._1_1_;
      local_1a0.StatData.Pad[2] = local_1f8.s.LowPart._2_1_;
      local_1a0.StatData.Pad[3] = local_1f8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1a0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar11;
}

// ModuloTime @ 14ea53360

FTimespan __thiscall FImgMediaLoader::ModuloTime(FImgMediaLoader *this,FTimespan param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_R8;
  
  lVar1 = (this->SequenceDuration).Ticks;
  lVar2 = in_R8 % lVar1;
  *(longlong *)param_1.Ticks = lVar2;
  if (in_R8 < 0) {
    *(longlong *)param_1.Ticks = lVar2 + lVar1;
  }
  return (FTimespan)param_1.Ticks;
}

// NotifyWorkComplete @ 14ea53390

void __thiscall
FImgMediaLoader::NotifyWorkComplete
          (FImgMediaLoader *this,FImgMediaLoaderWork *param_1,int param_2,int param_3,
          TSharedPtr<FImgMediaFrame,1> *param_4,float param_5)

{
  int *piVar1;
  TArray<FImgMediaLoaderWork_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  IImgMediaReader *pIVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int local_54;
  int local_50;
  FImgMediaLoaderWork *local_48 [2];
  
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar3 = (this->QueuedFrameNumbers).AllocatorInstance.Data;
  local_54 = param_3;
  local_50 = param_2;
  if (((pFVar3 <= (FScriptContainerElement *)&local_54) &&
      ((FScriptContainerElement *)&local_54 <
       pFVar3 + (longlong)(this->QueuedFrameNumbers).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->QueuedFrameNumbers).ArrayNum;
  if (iVar8 != 0) {
    iVar10 = 0;
    pFVar3 = (this->QueuedFrameNumbers).AllocatorInstance.Data;
    if ((*(int *)(pFVar3 + 4) == local_50) && (*(int *)pFVar3 == local_54)) {
      bVar9 = 0;
    }
    else {
      bVar9 = 1;
    }
    lVar13 = 0;
    iVar15 = local_50;
    iVar14 = local_54;
    iVar11 = 0;
    do {
      iVar12 = iVar11;
      do {
        lVar13 = lVar13 + 1;
        iVar12 = iVar12 + 1;
        if (iVar8 <= lVar13) break;
        if ((*(int *)(pFVar3 + (lVar13 * 2 + 1) * 4) == iVar15) &&
           (*(int *)(pFVar3 + lVar13 * 8) == iVar14)) {
          bVar7 = 0;
        }
        else {
          bVar7 = 1;
        }
      } while (bVar9 == bVar7);
      if (bVar9 != 0) {
        if (iVar10 != iVar11) {
          memmove(pFVar3 + (longlong)iVar10 * 8,pFVar3 + (longlong)iVar11 * 8,
                  (longlong)(iVar12 - iVar11) << 3);
          iVar15 = local_50;
          iVar14 = local_54;
        }
        iVar10 = iVar10 + (iVar12 - iVar11);
      }
      bVar9 = bVar9 ^ 1;
      iVar11 = iVar12;
    } while (lVar13 < iVar8);
    (this->QueuedFrameNumbers).ArrayNum = iVar10;
    if ((((0 < iVar8 - iVar10) &&
         (AddFrameToCache(this,param_3,param_4), this->bIsSkipFramesEnabled != false)) &&
        (this->SkipFramesLevel == 0)) && (0 < this->SkipFramesCounter)) {
      this->SkipFramesCounter = this->SkipFramesCounter + -1;
    }
  }
  if (((this->Reader).Object == (IImgMediaReader *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar4 = (this->Reader).Object;
  (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,param_3);
  pTVar2 = &this->WorkPool;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_48[0] = param_1;
  if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(this->WorkPool).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->WorkPool).ArrayNum;
  piVar1 = &(this->WorkPool).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->WorkPool).ArrayNum = iVar8 + 1;
  *(FImgMediaLoaderWork **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_48[0];
                    /* WARNING: Could not recover jumptable at 0x00014ea5369b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// PeekVideoSampleTime @ 14ea54df0

bool __thiscall
FImgMediaLoader::PeekVideoSampleTime
          (FImgMediaLoader *this,FMediaTimeStamp *param_1,bool param_2,float param_3,
          FTimespan *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FImgMediaGlobalCache *this_00;
  longlong lVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  
  if (this->Initialized == false) {
    return false;
  }
  if (((this->QueuedSampleFetch).LastTimeStamp.Time.Ticks == -0x8000000000000000) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueuedSampleFetch.LastTimeStamp.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                         ,0x254,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar7 = (this->QueuedSampleFetch).LastTimeStamp.LoopIndex;
  iVar1 = (this->QueuedSampleFetch).LastTimeStamp.SequenceIndex;
  if (param_3 < 0.0) {
    lVar6 = (this->QueuedSampleFetch).LastTimeStamp.Time.Ticks -
            (this->QueuedSampleFetch).LastDuration.Ticks;
    (param_1->Time).Ticks = lVar6;
    param_1->SequenceIndex = iVar1;
    param_1->LoopIndex = iVar7;
    while (lVar6 < 0) {
      lVar6 = lVar6 + (this->SequenceDuration).Ticks;
      iVar7 = iVar7 + -1;
      (param_1->Time).Ticks = lVar6;
      param_1->LoopIndex = iVar7;
    }
  }
  else {
    lVar9 = (this->QueuedSampleFetch).LastTimeStamp.Time.Ticks +
            (this->QueuedSampleFetch).LastDuration.Ticks;
    (param_1->Time).Ticks = lVar9;
    param_1->SequenceIndex = iVar1;
    param_1->LoopIndex = iVar7;
    lVar6 = (this->SequenceDuration).Ticks;
    if (lVar6 <= lVar9) {
      do {
        lVar9 = lVar9 - lVar6;
        iVar7 = iVar7 + 1;
        (param_1->Time).Ticks = lVar9;
        param_1->LoopIndex = iVar7;
        lVar6 = (this->SequenceDuration).Ticks;
      } while (lVar6 <= lVar9);
    }
  }
  if (((this->QueuedSampleFetch).LastDuration.Ticks == 0) && (this->bIsPlaybackBlocking == false)) {
    uVar5 = TimeToFrameNumber(this,(FTimespan)(param_1->Time).Ticks);
    lpCriticalSection = &this->CriticalSection;
    if (this->UseGlobalCache == false) {
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) goto LAB_14ea5503a;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(this->Frames).LookupSet.Elements.field_0x8 !=
          *(int *)&(this->Frames).LookupSet.Elements.field_0x34) {
        FVar8 = (this->Frames).LookupSet.Hash.SecondaryData;
        if (FVar8 == (ForElementType<FSetElementId>)0x0) {
          FVar8 = (ForElementType<FSetElementId>)&(this->Frames).LookupSet.Hash;
        }
        iVar7 = *(int *)((longlong)FVar8 +
                        (ulonglong)((this->Frames).LookupSet.HashSize - 1U & uVar5) * 4);
        if (iVar7 != -1) {
          lVar6 = *(longlong *)&(this->Frames).LookupSet.Elements;
          do {
            if (**(uint **)(lVar6 + (longlong)iVar7 * 0x10) == uVar5) goto LAB_14ea54fae;
            iVar7 = *(int *)(lVar6 + 8 + (longlong)iVar7 * 0x10);
          } while (iVar7 != -1);
        }
      }
      iVar7 = -1;
LAB_14ea54fae:
      bVar3 = iVar7 != -1;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      this_00 = TSharedPtr<FImgMediaGlobalCache,1>::operator->(&this->GlobalCache);
      bVar3 = FImgMediaGlobalCache::Contains(this_00,&this->SequenceName,uVar5);
    }
    if (bVar3 == false) {
      RequestFrame(this,uVar5,param_3,param_2);
      if (this->UseGlobalCache != false) {
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_14ea5503a:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        HandleGlobalCacheFrameEviction(this);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      (param_1->Time).Ticks = -0x8000000000000000;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// RequestFrame @ 14ea5ad30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FImgMediaLoader::RequestFrame(FImgMediaLoader *this,int param_1,float param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  FTimespan local_48;
  FTimespan local_40;
  FString local_38;
  FString local_28 [2];
  
  if ((param_1 == -1) || (param_1 == this->LastRequestedFrame)) {
    if (((this->Reader).Object == (IImgMediaReader *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)((longlong)*(this->Reader).Object + 0x28))();
    if (6 < (byte)LogImgMedia._0_1_) {
      lVar4 = (longlong)(this->SequenceFrameRate).Denominator;
      lVar5 = (longlong)(this->SequenceFrameRate).Numerator;
      lVar6 = (ulonglong)(uint)param_1 * lVar4 * 10000000;
      local_40.Ticks = lVar6 / lVar5;
      if ((int)((local_40.Ticks * lVar5) / (lVar4 * 10000000)) != param_1) {
        local_40.Ticks = (lVar5 + -1 + lVar6) / lVar5;
      }
      FTimespan::ToString(&local_40,local_28,L"%h:%m:%s.%t");
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    bVar2 = false;
  }
  else {
    if (6 < (byte)LogImgMedia._0_1_) {
      lVar4 = (longlong)(this->SequenceFrameRate).Denominator;
      lVar5 = (longlong)(this->SequenceFrameRate).Numerator;
      lVar6 = (ulonglong)(uint)param_1 * lVar4 * 10000000;
      local_48.Ticks = lVar6 / lVar5;
      if ((int)((local_48.Ticks * lVar5) / (lVar4 * 10000000)) != param_1) {
        local_48.Ticks = (lVar5 + -1 + lVar6) / lVar5;
      }
      FTimespan::ToString(&local_48,&local_38,L"%h:%m:%s.%t");
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    Update(this,param_1,param_2,param_3);
    bVar2 = true;
    this->LastRequestedFrame = param_1;
  }
  return bVar2;
}

// RequestFrame @ 14ea5af60

bool __thiscall
FImgMediaLoader::RequestFrame(FImgMediaLoader *this,FTimespan param_1,float param_2,bool param_3)

{
  bool bVar1;
  
  if ((((-1 < param_1.Ticks) && (param_1.Ticks < (this->SequenceDuration).Ticks)) &&
      (0 < (this->ImagePaths).ArrayNum)) &&
     (0 < *(int *)((this->ImagePaths).AllocatorInstance.Data + 8))) {
    bVar1 = RequestFrame(this,(int)(((this->SequenceFrameRate).Numerator * param_1.Ticks) /
                                   ((longlong)(this->SequenceFrameRate).Denominator * 10000000)),
                         param_2,param_3);
    return bVar1;
  }
  bVar1 = RequestFrame(this,-1,param_2,param_3);
  return bVar1;
}

// ResetFetchLogic @ 14ea5b050

void __thiscall FImgMediaLoader::ResetFetchLogic(FImgMediaLoader *this)

{
  (this->QueuedSampleFetch).LoopIndex = 0;
  this->SkipFramesCounter = 0;
  this->SkipFramesLevel = 0;
  return;
}

// Seek @ 14ea5b8e0

void __thiscall FImgMediaLoader::Seek(FImgMediaLoader *this,FMediaTimeStamp *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  
  (this->QueuedSampleFetch).LoopIndex = 0;
  this->SkipFramesCounter = 0;
  this->SkipFramesLevel = 0;
  iVar1 = param_1->LoopIndex;
  iVar2 = param_1->SequenceIndex;
  (this->QueuedSampleFetch).LastTimeStamp.Time.Ticks = (param_1->Time).Ticks;
  (this->QueuedSampleFetch).LastTimeStamp.SequenceIndex = iVar2;
  (this->QueuedSampleFetch).LastTimeStamp.LoopIndex = iVar1;
  (this->QueuedSampleFetch).LastDuration.Ticks = 0;
  return;
}

// SetIsPlaybackBlocking @ 14ea5bd10

void __thiscall FImgMediaLoader::SetIsPlaybackBlocking(FImgMediaLoader *this,bool param_1)

{
  this->bIsPlaybackBlocking = param_1;
  if ((this->bIsBandwidthThrottlingEnabled != false) && (!param_1)) {
    this->bIsSkipFramesEnabled = true;
    return;
  }
  this->bIsSkipFramesEnabled = false;
  this->SkipFramesCounter = 0;
  this->SkipFramesLevel = 0;
  return;
}

// TimeToFrameNumber @ 14ea5d080

uint __thiscall FImgMediaLoader::TimeToFrameNumber(FImgMediaLoader *this,FTimespan param_1)

{
  if ((((-1 < param_1.Ticks) && (param_1.Ticks < (this->SequenceDuration).Ticks)) &&
      (0 < (this->ImagePaths).ArrayNum)) &&
     (0 < *(int *)((this->ImagePaths).AllocatorInstance.Data + 8))) {
    return (uint)(((this->SequenceFrameRate).Numerator * param_1.Ticks) /
                 ((longlong)(this->SequenceFrameRate).Denominator * 10000000));
  }
  return 0xffffffff;
}

// TimeToFrameNumberUnbound @ 14ea5d0e0

long64 __thiscall FImgMediaLoader::TimeToFrameNumberUnbound(FImgMediaLoader *this,FTimespan param_1)

{
  return ((this->SequenceFrameRate).Numerator * param_1.Ticks) /
         ((longlong)(this->SequenceFrameRate).Denominator * 10000000);
}

// TryAddEmptyFrame @ 14ea5d480

/* WARNING: Removing unreachable block (ram,0x00014ea5d8b1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FImgMediaLoader::TryAddEmptyFrame(FImgMediaLoader *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TIntPoint<int>_u_0 TVar1;
  FFrameRate FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  longlong lVar10;
  void *pvVar11;
  FImgMediaFrame *this_00;
  FImgMediaFrame *local_res18;
  TSharedPtr<FImgMediaFrame,1> local_128;
  undefined8 local_118;
  undefined8 local_110;
  TIntPoint<int>_u_0 local_108;
  void *local_100;
  undefined8 uStack_f8;
  FFrameRate local_f0;
  undefined1 local_e8;
  ulong64 local_e0;
  ulong64 local_d8;
  undefined1 local_d0;
  TIntPoint<int>_u_0 local_cc;
  TIntPoint<int>_u_0 TStack_c4;
  undefined8 local_bc;
  FImgMediaFrameInfo local_a8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->UseGlobalCache == false) {
    if (*(int *)&(this->Frames).LookupSet.Elements.field_0x8 !=
        *(int *)&(this->Frames).LookupSet.Elements.field_0x34) {
      FVar9 = (this->Frames).LookupSet.Hash.SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&(this->Frames).LookupSet.Hash;
      }
      iVar8 = *(int *)((longlong)FVar9 +
                      (ulonglong)((this->Frames).LookupSet.HashSize - 1U & param_1) * 4);
      if (iVar8 != -1) {
        lVar10 = *(longlong *)&(this->Frames).LookupSet.Elements;
        do {
          if (**(int **)(lVar10 + (longlong)iVar8 * 0x10) == param_1) goto LAB_14ea5d55e;
          iVar8 = *(int *)(lVar10 + 8 + (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_14ea5d55e:
    bVar4 = iVar8 == -1;
  }
  else {
    if (((this->GlobalCache).Object == (FImgMediaGlobalCache *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = FImgMediaGlobalCache::Contains((this->GlobalCache).Object,&this->SequenceName,param_1);
    bVar4 = !bVar4;
  }
  if (bVar4 != false) {
    pTVar7 = ::operator_new(0x170);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      local_res18 = (FImgMediaFrame *)&DAT_00000010;
      local_128.SharedReferenceCount.ReferenceController = _UNK_150651568;
      this_00 = ___xmm_00000000000000000000000000000010;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFImgMediaFrame___00_SharedPointerInternals__6B_;
      memset(pTVar7 + 1,0,0x160);
      FImgMediaFrame::FImgMediaFrame((FImgMediaFrame *)(pTVar7 + 1));
      local_res18 = (FImgMediaFrame *)(pTVar7 + 1);
      if ((local_res18 == (FImgMediaFrame *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      this_00 = local_res18;
      local_128.SharedReferenceCount.ReferenceController = pTVar7;
    }
    local_128.Object = this_00;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    TVar1 = (this->SequenceDim).field0_0x0;
    FVar2 = this->SequenceFrameRate;
    local_110._0_4_ = 0;
    local_118 = 0;
    local_110 = 0;
    local_100 = (void *)0x0;
    uStack_f8 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_cc = (TIntPoint<int>_u_0)0x0;
    TStack_c4 = (TIntPoint<int>_u_0)0x0;
    local_bc = 0;
    local_d8 = 3;
    local_d0 = 0;
    local_108 = TVar1;
    local_f0 = FVar2;
    if (local_res18 == (FImgMediaFrame *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_a8.CompressionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.CompressionName.Data.ArrayNum = (int)local_110;
    if ((int)local_110 == 0) {
      local_a8.CompressionName.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_110,0,(ForAnyElementType *)&local_a8,(int)local_110,
                 &local_a8.CompressionName.Data.ArrayMax);
      memcpy(local_a8.CompressionName.Data.AllocatorInstance.Data,(void *)0x0,
             (longlong)(int)local_110 * 2);
    }
    lVar10 = (longlong)(int)uStack_f8;
    local_a8.FormatName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.FormatName.Data.ArrayNum = (int)uStack_f8;
    local_a8.Dim.field0_0x0 = TVar1;
    if ((int)uStack_f8 == 0) {
      local_a8.FormatName.Data.ArrayMax = 0;
      pvVar11 = local_100;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)uStack_f8,0,(ForAnyElementType *)&local_a8.FormatName,(int)uStack_f8,
                 &local_a8.FormatName.Data.ArrayMax);
      pvVar11 = local_100;
      memcpy(local_a8.FormatName.Data.AllocatorInstance.Data,local_100,lVar10 * 2);
    }
    local_a8.Srgb = (bool)local_e8;
    local_a8.UncompressedSize = local_e0;
    local_a8.NumChannels = local_d8;
    local_a8.bHasTiles = (bool)local_d0;
    local_a8.NumTiles.field0_0x0 = local_cc;
    local_a8.TileDimensions.field0_0x0 = TStack_c4;
    local_a8.TileBorder = (int)local_bc;
    local_a8.NumMipLevels = local_bc._4_4_;
    local_a8.FrameRate = FVar2;
    FImgMediaFrame::SetInfo(this_00,&local_a8);
    if ((this_00 == (FImgMediaFrame *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    LOCK();
    this_00->Format = (atomic<EMediaTextureSampleFormat>)0xc;
    UNLOCK();
    iVar8 = (this->SequenceDim).field0_0x0._s_0.X;
    if ((this_00 == (FImgMediaFrame *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    LOCK();
    this_00->Stride = (atomic<unsigned_int>)(iVar8 * 6);
    UNLOCK();
    AddFrameToCache(this,param_1,&local_128);
    if (pvVar11 != (void *)0x0) {
      FMemory::Free(pvVar11);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// Update @ 14ea5ec10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FImgMediaLoader::Update(FImgMediaLoader *this,int param_1,float param_2,bool param_3)

{
  int *piVar1;
  TArray<FImgMediaLoader::FFrameNumberJobInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  IImgMediaReader *pIVar5;
  FImgMediaFrame *pFVar6;
  undefined1 *puVar7;
  code *pcVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  uint uVar11;
  FImgMediaTileSelection *pFVar12;
  TSharedPtr<FImgMediaFrame,1> *pTVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  FImgMediaTileSelection *pFVar19;
  int iVar20;
  int iVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  FImgMediaTileSelection *pFVar24;
  uint uVar25;
  longlong lVar26;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar27;
  FImgMediaMipTiles *lpCriticalSection_00;
  uint uVar28;
  undefined4 uVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  longlong lVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  FImgMediaLoader *this_00;
  undefined1 auStackY_11c8 [32];
  uint local_1178;
  uint local_1174;
  uint local_1170;
  undefined1 local_116c;
  undefined1 local_116b [3];
  ForAnyElementType local_1168;
  uint local_1160;
  uint local_115c;
  uint local_1158;
  uint local_1154;
  FImgMediaLoader *local_1150;
  int local_1148;
  uint local_1144;
  LPCRITICAL_SECTION local_1140;
  int local_1138;
  FScriptContainerElement *local_1130;
  longlong *local_1128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1120;
  longlong *local_1100;
  uint uStack_10f8;
  uint uStack_10f4;
  TBitArray<FDefaultBitArrayAllocator> *local_10f0;
  undefined4 uStack_10e8;
  int iStack_10e4;
  uint local_10e0;
  undefined4 uStack_10dc;
  undefined4 local_10b4;
  undefined1 local_10a8 [32];
  uint *local_1088;
  uint local_1080;
  undefined4 local_107c;
  undefined4 local_1078;
  undefined4 local_1074;
  void *local_1068;
  undefined4 local_1060;
  uchar local_1058 [3];
  undefined4 local_1055;
  undefined4 local_1051;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_11c8;
  local_1154 = param_1;
  local_1150 = this;
  if (((this->Reader).Object == (IImgMediaReader *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (**(code **)((longlong)*(this->Reader).Object + 0x28))();
  uVar16 = 0;
  uVar34 = uVar16;
  if (0 < (this->ImagePaths).ArrayNum) {
    uVar34 = *(uint *)((this->ImagePaths).AllocatorInstance.Data + 8);
  }
  uVar35 = this->NumFramesToLoad;
  local_1168.Data = (FScriptContainerElement *)0x0;
  local_115c = 0;
  local_1158 = uVar34;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  local_1160 = 0;
  iVar21 = 0;
  if (uVar35 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar35,&local_1168,0,(int *)&local_115c);
    iVar21 = this->NumFramesToLoad;
  }
  uVar35 = this->NumLoadAhead;
  uVar25 = this->NumLoadBehind;
  local_1148 = -1;
  if (0.0 <= param_2) {
    local_1148 = 1;
  }
  local_1174 = local_1154 - local_1148;
  iVar33 = local_1148;
  local_1178 = local_1154;
  if (0 < this->SkipFramesLevel) {
    iVar33 = 1 << ((byte)this->SkipFramesLevel & 0x1f);
    uVar15 = (-iVar33 & local_1154) + iVar33;
    local_1178 = uVar16;
    if (0 < (this->ImagePaths).ArrayNum) {
      iVar21 = this->NumFramesToLoad;
      local_1178 = *(uint *)((this->ImagePaths).AllocatorInstance.Data + 8);
    }
    if ((int)(uVar15 - 1) < (int)local_1178) {
      local_1178 = uVar15;
    }
    iVar20 = 1 << ((byte)this->SkipFramesLevel & 0x1f);
    local_1178 = local_1178 - 1;
    uVar15 = (-iVar20 & local_1174) + iVar20;
    local_1174 = uVar16;
    if (0 < (this->ImagePaths).ArrayNum) {
      local_1174 = *(uint *)((this->ImagePaths).AllocatorInstance.Data + 8);
    }
    if ((int)(uVar15 - 1) < (int)local_1174) {
      local_1174 = uVar15;
    }
    local_1174 = local_1174 - 1;
    iVar33 = iVar33 * local_1148;
  }
  uVar11 = local_1160;
  uVar15 = local_1178;
  uVar31 = local_1174;
  if ((int)local_1160 < iVar21) {
    do {
      if ((int)uVar35 < 1) {
        if ((int)uVar25 < 1) break;
LAB_14ea5ef8e:
        uVar28 = uVar16;
        if ((int)uVar31 < 0) {
          if (param_3) {
            iVar21 = 1 << ((byte)this->SkipFramesLevel & 0x1f);
            uVar15 = (-iVar21 & uVar31 + uVar34) + iVar21;
            iVar21 = uVar15 - 1;
            if (0 < (this->ImagePaths).ArrayNum) {
              uVar28 = *(uint *)((this->ImagePaths).AllocatorInstance.Data + 8);
            }
LAB_14ea5f01d:
            if (iVar21 < (int)uVar28) {
              uVar28 = uVar15;
            }
            uVar31 = uVar28 - 1;
            local_1174 = uVar31;
LAB_14ea5f02c:
            uVar15 = uVar11;
            if (((local_1168.Data <= (FScriptContainerElement *)&local_1174) &&
                ((FScriptContainerElement *)&local_1174 <
                 local_1168.Data + (longlong)(int)local_115c * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), uVar15 = local_1160, uVar31 = local_1174, bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (uVar15 == local_115c) {
              uVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_1168,(int *)&local_115c);
              uVar31 = local_1174;
            }
            uVar11 = uVar15 + 1;
            *(uint *)(local_1168.Data + (longlong)(int)uVar15 * 4) = uVar31;
            uVar28 = uVar25;
            uVar31 = local_1174;
            local_1160 = uVar11;
            uVar15 = local_1178;
          }
        }
        else {
          if ((int)uVar31 < (int)uVar34) goto LAB_14ea5f02c;
          if (param_3) {
            iVar21 = 1 << ((byte)this->SkipFramesLevel & 0x1f);
            uVar15 = (-iVar21 & uVar31 - uVar34) + iVar21;
            iVar21 = uVar15 - 1;
            if (0 < (this->ImagePaths).ArrayNum) {
              uVar28 = *(uint *)((this->ImagePaths).AllocatorInstance.Data + 8);
            }
            goto LAB_14ea5f01d;
          }
        }
        local_1174 = uVar31 - iVar33;
        uVar25 = uVar28 - 1;
        uVar31 = local_1174;
      }
      else {
        uVar28 = uVar16;
        if ((int)uVar15 < 0) {
          if (param_3) {
            iVar21 = 1 << ((byte)this->SkipFramesLevel & 0x1f);
            uVar15 = (-iVar21 & uVar15 + uVar34) + iVar21;
            iVar21 = uVar15 - 1;
            if (0 < (this->ImagePaths).ArrayNum) {
              uVar28 = *(uint *)((this->ImagePaths).AllocatorInstance.Data + 8);
            }
LAB_14ea5eeb0:
            if (iVar21 < (int)uVar28) {
              uVar28 = uVar15;
            }
            local_1178 = uVar28 - 1;
            uVar15 = local_1178;
LAB_14ea5eebf:
            uVar31 = uVar11;
            if (((local_1168.Data <= (FScriptContainerElement *)&local_1178) &&
                ((FScriptContainerElement *)&local_1178 <
                 local_1168.Data + (longlong)(int)local_115c * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), uVar31 = local_1160, uVar15 = local_1178, bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (uVar31 == local_115c) {
              uVar31 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_1168,(int *)&local_115c);
              uVar15 = local_1178;
            }
            uVar11 = uVar31 + 1;
            *(uint *)(local_1168.Data + (longlong)(int)uVar31 * 4) = uVar15;
            uVar28 = uVar35;
            local_1160 = uVar11;
            uVar15 = local_1178;
            uVar31 = local_1174;
          }
        }
        else {
          if ((int)uVar15 < (int)uVar34) goto LAB_14ea5eebf;
          if (param_3) {
            iVar21 = 1 << ((byte)this->SkipFramesLevel & 0x1f);
            uVar15 = (-iVar21 & uVar15 - uVar34) + iVar21;
            iVar21 = uVar15 - 1;
            if (0 < (this->ImagePaths).ArrayNum) {
              uVar28 = *(uint *)((this->ImagePaths).AllocatorInstance.Data + 8);
            }
            goto LAB_14ea5eeb0;
          }
        }
        local_1178 = uVar15 + iVar33;
        uVar35 = uVar28 - 1;
        uVar15 = local_1178;
        if (0 < (int)uVar25) goto LAB_14ea5ef8e;
      }
    } while ((int)uVar11 < this->NumFramesToLoad);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_1140 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  uVar34 = (this->QueuedFrameNumbers).ArrayNum - 1;
  this_00 = this;
  if (-1 < (int)uVar34) {
    lVar32 = (longlong)(int)uVar34;
    pTVar2 = &this->QueuedFrameNumbers;
    lVar26 = lVar32 * 8;
    do {
      uVar35 = ~uVar34 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar34 < (this->QueuedFrameNumbers).ArrayNum) {
        uVar16 = uVar35;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar16 = *(uint *)((pTVar2->AllocatorInstance).Data + lVar26);
      for (FVar17.Data = local_1168.Data;
          FVar17.Data != local_1168.Data + (longlong)(int)local_1160 * 4;
          FVar17.Data = FVar17.Data + 4) {
        this_00 = local_1150;
        if (*(uint *)FVar17.Data == uVar16) goto LAB_14ea5f2f2;
      }
      if (5 < (byte)LogImgMedia._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
      }
      uVar25 = 0;
      if ((int)uVar34 < (this->QueuedFrameNumbers).ArrayNum) {
        uVar25 = uVar35;
      }
      if ((uVar25 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar33 = (this->QueuedFrameNumbers).ArrayNum;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      iVar21 = iVar33 + ~uVar34;
      if (1 < iVar21) {
        iVar21 = 1;
      }
      if (iVar21 != 0) {
        memmove(pFVar4 + lVar32 * 8,pFVar4 + (longlong)(iVar33 - iVar21) * 8,(longlong)iVar21 << 3);
      }
      piVar1 = &(this->QueuedFrameNumbers).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&pTVar2->AllocatorInstance,(this->QueuedFrameNumbers).ArrayNum,
                 &(this->QueuedFrameNumbers).ArrayMax);
      this_00 = local_1150;
      if (((local_1150->Reader).Object == (IImgMediaReader *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pIVar5 = (this_00->Reader).Object;
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,uVar16);
      if ((this_00->bIsSkipFramesEnabled != false) &&
         (this_00->SkipFramesCounter = this_00->SkipFramesCounter + 1,
         this_00->SkipFramesCounterRaiseLevelThreshold < this_00->SkipFramesCounter)) {
        this_00->SkipFramesLevel = this_00->SkipFramesLevel + 1;
        this_00->SkipFramesCounter = this_00->SkipFramesCounterNewLevelValue;
      }
LAB_14ea5f2f2:
      lVar32 = lVar32 + -1;
      lVar26 = lVar26 + -8;
      uVar34 = uVar34 - 1;
      lpCriticalSection = local_1140;
    } while (-1 < (int)uVar34);
  }
  pFVar24 = (FImgMediaTileSelection *)0x0;
  pTVar3 = &this_00->PendingFrameNumbers;
  (this_00->PendingFrameNumbers).ArrayNum = 0;
  if ((this_00->PendingFrameNumbers).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,&(this_00->PendingFrameNumbers).ArrayMax);
  }
  pTVar9 = CVarImgMediaFrameInvalidationMaxCount.Ref;
  bVar10 = IsInParallelGameThread();
  if (!bVar10) {
    bVar10 = IsInGameThread();
    pFVar12 = (FImgMediaTileSelection *)&DAT_00000004;
    if (!bVar10) goto LAB_14ea5f35d;
  }
  pFVar12 = pFVar24;
LAB_14ea5f35d:
  uVar18 = (ulonglong)(int)local_1160;
  iVar21 = *(int *)((pFVar12->Tiles).AllocatorInstance.InlineData + (longlong)pTVar9->ShadowedValue)
  ;
  local_1150 = (FImgMediaLoader *)CONCAT44(local_1150._4_4_,iVar21);
  local_1144 = local_1160;
  local_1130 = local_1168.Data + uVar18 * 4;
  uVar23 = uVar18;
  FVar17.Data = local_1168.Data;
LAB_14ea5f37e:
  pFVar4 = local_1130;
  local_1140 = (LPCRITICAL_SECTION)FVar17.Data;
  if ((int)uVar18 != (int)uVar23) {
    local_116c = 0;
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_116c);
  }
  uVar34 = 0;
  if (FVar17.Data == pFVar4) {
    iVar21 = (this_00->PendingFrameNumbers).ArrayNum;
    pFVar4 = (this_00->PendingFrameNumbers).AllocatorInstance.Data;
    iVar33 = iVar21 / 2;
    if (0 < iVar33) {
      pFVar30 = pFVar4 + (longlong)(iVar21 + -1) * 4;
      do {
        uVar27 = *(undefined4 *)(pFVar4 + (longlong)pFVar24 * 4);
        *(undefined4 *)(pFVar4 + (longlong)pFVar24 * 4) = *(undefined4 *)pFVar30;
        pFVar24 = (FImgMediaTileSelection *)((pFVar24->Tiles).AllocatorInstance.InlineData + 1);
        *(undefined4 *)pFVar30 = uVar27;
        pFVar30 = pFVar30 + -4;
      } while ((longlong)pFVar24 < (longlong)iVar33);
    }
    if ((((this_00->bIsSkipFramesEnabled != false) && ((this_00->PendingFrameNumbers).ArrayNum == 0)
         ) && (0 < this_00->SkipFramesCounter)) &&
       ((iVar21 = this_00->SkipFramesCounter + -1, this_00->SkipFramesCounter = iVar21, iVar21 < 1
        && (0 < this_00->SkipFramesLevel)))) {
      this_00->SkipFramesLevel = this_00->SkipFramesLevel + -1;
      this_00->SkipFramesCounter = this_00->SkipFramesCounterNewLevelValue;
    }
    iVar21 = (this_00->PendingFrameNumbers).ArrayNum;
    if (0 < iVar21) {
      uVar16 = uVar34;
      if ((int)(iVar21 - 1U) < iVar21) {
        uVar16 = ~(iVar21 - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    uVar27 = 0xffffffff;
    FCsvProfiler::RecordEventfInternal(_GCsvCategory_ImgMedia.Index,L"LoaderUpdatePending %d %d");
    if (-1 < BookmarkChannel->Enabled) {
      if (__BookmarkPoint1432 == false) {
        FMiscTrace::OutputBookmarkSpec
                  (&__BookmarkPoint1432,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                   ,0x598,L"ImgMedia/LoaderUpdatePending %d %d");
        __BookmarkPoint1432 = true;
      }
      iVar21 = (this_00->PendingFrameNumbers).ArrayNum;
      if (iVar21 < 1) {
        uVar29 = 0xffffffff;
      }
      else {
        uVar16 = iVar21 - 1;
        if ((int)uVar16 < iVar21) {
          uVar34 = ~uVar16 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar29 = *(undefined4 *)
                  ((this_00->PendingFrameNumbers).AllocatorInstance.Data + (longlong)(int)uVar16 * 4
                  );
      }
      if (0 < (this_00->PendingFrameNumbers).ArrayNum) {
        uVar27 = *(undefined4 *)(this_00->PendingFrameNumbers).AllocatorInstance.Data;
      }
      uVar34 = CallstackTrace_GetCurrentId();
      local_1058[0] = '\x02';
      local_1058[1] = 'D';
      local_1058[2] = 0x44;
      local_1055 = uVar27;
      local_1051 = uVar29;
      FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint1432,uVar34,0xb,local_1058);
    }
    LeaveCriticalSection(lpCriticalSection);
    if (local_1168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1168.Data);
    }
    return;
  }
  local_1170 = *(uint *)FVar17.Data;
  pTVar13 = GetCachedFrame(this_00,local_1170);
  uVar16 = local_1170;
  if ((pTVar13 == (TSharedPtr<FImgMediaFrame,1> *)0x0) || (pTVar13->Object == (FImgMediaFrame *)0x0)
     ) goto LAB_14ea5f708;
  if (0 < iVar21) {
    if ((((int)local_1170 < 0) || ((int)local_1158 <= (int)local_1170)) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_102658943964151734>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                            ,0x4a,"CurrentFrame >= 0 && CurrentFrame < TotalNumFrames"), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((((int)local_1154 < 0) || ((int)local_1158 <= (int)local_1154)) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_102658943964151733>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                            ,0x4b,"OriginFrame >= 0 && OriginFrame < TotalNumFrames"), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar33 = 1;
    uVar35 = local_1154;
    do {
      uVar35 = uVar35 + local_1148;
      uVar25 = 0;
      if (local_1158 != 0) {
        if ((int)uVar35 < 0) {
          uVar25 = local_1158 - -uVar35 % local_1158;
          if (-uVar35 % local_1158 == 0) {
            uVar25 = 0;
          }
        }
        else {
          uVar25 = uVar35 % local_1158;
        }
      }
      if (uVar25 == uVar16) {
        local_10a8._0_8_ = 0;
        local_10a8._8_8_ = 0;
        local_1088 = (uint *)0x0;
        local_1080 = 0;
        local_107c = 0x80;
        local_1078 = 0xffffffff;
        local_1074 = 0;
        local_1068 = (void *)0x0;
        local_1060 = 0;
        GetDesiredMipTiles(this_00,local_1170,
                           (TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                            *)local_10a8);
        if ((pTVar13->Object == (FImgMediaFrame *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = pTVar13->Object;
        lpCriticalSection_00 = &pFVar6->MipTilesPresent;
        uStack_10f4 = 1;
        pFVar12 = pFVar24;
        uStack_10f8 = uVar34;
        local_10e0 = uVar34;
        if (local_1080 == 0) goto LAB_14ea5f58c;
        puVar14 = (uint *)(local_10a8 + 0x10);
        if (local_1088 != (uint *)0x0) {
          puVar14 = local_1088;
        }
        uVar16 = *puVar14;
        pFVar19 = pFVar24;
        goto joined_r0x00014ea5f547;
      }
      iVar33 = iVar33 + 1;
    } while (iVar33 <= iVar21);
  }
  goto LAB_14ea5f8a9;
joined_r0x00014ea5f547:
  uStack_10f8 = (uint)pFVar12;
  local_10e0 = (uint)pFVar19;
  if (uVar16 != 0) goto LAB_14ea5f568;
  lVar26 = (longlong)(int)uStack_10f8;
  local_10e0 = local_10e0 + 0x20;
  pFVar19 = (FImgMediaTileSelection *)(ulonglong)local_10e0;
  uStack_10f8 = uStack_10f8 + 1;
  pFVar12 = (FImgMediaTileSelection *)(ulonglong)uStack_10f8;
  if ((int)((local_1080 - 1) + ((int)(local_1080 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_10f8)
  goto LAB_14ea5f589;
  uVar16 = puVar14[lVar26 + 1];
  goto joined_r0x00014ea5f547;
LAB_14ea5f568:
  uStack_10f4 = -uVar16 & uVar16;
  uVar23 = (ulonglong)uStack_10f4 * 2 + 1;
  lVar26 = 0x3f;
  if (uVar23 != 0) {
    for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
    }
  }
  local_1138 = (int)lVar26;
  uVar16 = local_1138 + -1 + local_10e0;
  pFVar12 = (FImgMediaTileSelection *)(ulonglong)uVar16;
  if ((int)local_1080 < (int)uVar16) {
LAB_14ea5f589:
    pFVar12 = (FImgMediaTileSelection *)(ulonglong)local_1080;
  }
LAB_14ea5f58c:
  local_1128 = (longlong *)local_10a8;
  TStack_1120.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_10a8 + 0x10);
  uStack_10e8 = 0xffffffff;
  iStack_10e4 = (int)pFVar12;
  uStack_10dc = local_10b4;
  TStack_1120._padding_ = CONCAT44(uStack_10f4,uStack_10f8);
  TStack_1120.CurrentBitIndex = iStack_10e4;
  TStack_1120.UnvisitedBitMask = 0xffffffff;
  TStack_1120._28_4_ = local_10b4;
  TStack_1120.BaseBitIndex = local_10e0;
  local_1100 = local_1128;
  local_10f0 = TStack_1120.Array;
  if (iStack_10e4 < (int)local_1080) {
    do {
      lVar26 = *local_1128;
      uVar16 = *(uint *)(lVar26 + (longlong)(int)pFVar12 * 0x50);
      if (lpCriticalSection_00 == (FImgMediaMipTiles *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (*(int *)&(pFVar6->MipTilesPresent).MipTiles.field_0x8 ==
          *(int *)&(pFVar6->MipTilesPresent).MipTiles.field_0x34) {
LAB_14ea5f659:
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
LAB_14ea5f662:
        bVar10 = true;
        if (6 < (byte)LogImgMedia._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
        }
        goto LAB_14ea5f6e4;
      }
      puVar7 = *(undefined1 **)&(pFVar6->MipTilesPresent).MipTiles.field_0x40;
      puVar22 = &(pFVar6->MipTilesPresent).MipTiles.field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar22 = puVar7;
      }
      uVar35 = *(uint *)(puVar22 +
                        (ulonglong)
                        (*(int *)&(pFVar6->MipTilesPresent).MipTiles.field_0x48 - 1U & uVar16) * 4);
      if (uVar35 == 0xffffffff) goto LAB_14ea5f659;
      while (puVar14 = (uint *)((longlong)(int)uVar35 * 0x50 +
                               *(longlong *)&(pFVar6->MipTilesPresent).MipTiles), *puVar14 != uVar16
            ) {
        uVar35 = puVar14[0x12];
        if (uVar35 == 0xffffffff) goto LAB_14ea5f659;
      }
      pFVar19 = (FImgMediaTileSelection *)(puVar14 + 2);
      if (puVar14 == (uint *)0x0) {
        pFVar19 = pFVar24;
      }
      if (pFVar19 == (FImgMediaTileSelection *)0x0) goto LAB_14ea5f659;
      bVar10 = FImgMediaTileSelection::Contains
                         (pFVar19,(FImgMediaTileSelection *)
                                  ((longlong)(int)pFVar12 * 0x50 + lVar26 + 8));
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (!bVar10) goto LAB_14ea5f662;
      TStack_1120.UnvisitedBitMask = TStack_1120.UnvisitedBitMask & ~TStack_1120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1120);
      pFVar12 = (FImgMediaTileSelection *)(ulonglong)(uint)TStack_1120.CurrentBitIndex;
    } while (TStack_1120.CurrentBitIndex < (TStack_1120.Array)->NumBits);
  }
  bVar10 = false;
LAB_14ea5f6e4:
  local_1060 = 0;
  if (local_1068 != (void *)0x0) {
    FMemory::Free(local_1068);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_10a8);
  if (bVar10) {
LAB_14ea5f708:
    pFVar30 = (this_00->QueuedFrameNumbers).AllocatorInstance.Data;
    iVar21 = (this_00->QueuedFrameNumbers).ArrayNum;
    pFVar4 = pFVar30 + (longlong)iVar21 * 8;
    while( true ) {
      if ((this_00->QueuedFrameNumbers).ArrayNum != iVar21) {
        local_116b[0] = 0;
        `TCheckedPointerIterator<FImgMediaLoader::FFrameNumberJobInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_116b);
      }
      if (pFVar30 == pFVar4) break;
      if (*(uint *)pFVar30 == local_1170) goto LAB_14ea5f8a4;
      pFVar30 = pFVar30 + 8;
    }
    if (((this_00->ImagePaths).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar26 = (longlong)(int)local_1170;
    pFVar4 = (this_00->ImagePaths).AllocatorInstance.Data;
    uVar16 = uVar34;
    if ((int)local_1170 < *(int *)(pFVar4 + 8)) {
      uVar16 = ~local_1170 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar21 = *(int *)(*(longlong *)pFVar4 + 8 + lVar26 * 0x10);
    uVar16 = iVar21 - 1;
    if (iVar21 == 0) {
      uVar16 = uVar34;
    }
    if (uVar16 == 0) {
      TryAddEmptyFrame(this_00,local_1170);
    }
    else {
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      piVar1 = &(this_00->PendingFrameNumbers).ArrayMax;
      if (((pFVar4 <= (FScriptContainerElement *)&local_1170) &&
          ((FScriptContainerElement *)&local_1170 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar21 = (this_00->PendingFrameNumbers).ArrayNum;
      if (iVar21 == *piVar1) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar3->AllocatorInstance,piVar1);
      }
      (this_00->PendingFrameNumbers).ArrayNum = iVar21 + 1;
      *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_1170;
    }
  }
LAB_14ea5f8a4:
  iVar21 = (int)local_1150;
LAB_14ea5f8a9:
  uVar18 = (ulonglong)local_1160;
  FVar17.Data = (FScriptContainerElement *)((longlong)local_1140 + 4);
  uVar23 = (ulonglong)local_1144;
  goto LAB_14ea5f37e;
}

// UpdateBandwidthThrottling @ 14ea60160

void __thiscall FImgMediaLoader::UpdateBandwidthThrottling(FImgMediaLoader *this)

{
  if ((this->bIsBandwidthThrottlingEnabled != false) && (this->bIsPlaybackBlocking == false)) {
    this->bIsSkipFramesEnabled = true;
    return;
  }
  this->bIsSkipFramesEnabled = false;
  this->SkipFramesCounter = 0;
  this->SkipFramesLevel = 0;
  return;
}

// WarmupSequence @ 14ea60230

void __thiscall
FImgMediaLoader::WarmupSequence
          (FImgMediaLoader *this,FImgMediaFrameInfo *param_1,bool param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IImgMediaReader *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if (!param_3) {
    if ((this->Reader).Object == (IImgMediaReader *)0x0) {
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
    pIVar1 = (this->Reader).Object;
    (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,this->NumFramesToLoad,param_1);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Update(this,0,0.0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014ea602c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

