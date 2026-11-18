// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 50

// DestroyObject @ 14d3d8750

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>
              *this)

{
  TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState::~FNetTraceConnectionState
            ((FNetTraceConnectionState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d3d8760

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>
              *this)

{
  TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState::~FNetTraceGameInstanceState
            ((FNetTraceGameInstanceState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d3d8770

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>
              *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d3d87b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::FMiscTraceAnalyzer::FThreadState,1>::DestroyObject
          (TIntrusiveReferenceController<TraceServices::FMiscTraceAnalyzer::FThreadState,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14d3d87d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FStatsAnalyzer::FThreadState,1>
::DestroyObject(TIntrusiveReferenceController<TraceServices::FStatsAnalyzer::FThreadState,1> *this)

{
  return;
}

// DestroyObject @ 14d3d87e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FAnalysisSession,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FAnalysisSession,1> *this)

{
  TraceServices::FAnalysisSession::~FAnalysisSession((FAnalysisSession *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d3d87f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FBookmarkProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FBookmarkProvider,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad =
       &TraceServices::FBookmarkProvider::_vftable__for__TraceServices__IBookmarkProvider__;
  *(undefined ***)((this->ObjectStorage).Pad + 8) =
       &TraceServices::FBookmarkProvider::_vftable__for__TraceServices__IEditableBookmarkProvider__;
  DestructItems<TSharedRef<TraceServices::FBookmarkInternal,1>,int>
            (*(TSharedRef<TraceServices::FBookmarkInternal,1> **)((this->ObjectStorage).Pad + 0x68),
             *(int *)((this->ObjectStorage).Pad + 0x70));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x68);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  (this->ObjectStorage).Pad[0x60] = '\0';
  (this->ObjectStorage).Pad[0x61] = '\0';
  (this->ObjectStorage).Pad[0x62] = '\0';
  (this->ObjectStorage).Pad[99] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x18));
  return;
}

// DestroyObject @ 14d3d8860

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FBookmarksAnalyzer,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FBookmarksAnalyzer,1> *this)

{
  return;
}

// DestroyObject @ 14d3d8870

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FChannelProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FChannelProvider,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FChannelProvider_TraceServices__6B_;
  DestructItems<TraceServices::FChannelEntry,int>
            (*(FChannelEntry **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d3d88b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCounterProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FCounterProvider,1> *this)

{
  TraceServices::FCounterProvider::~FCounterProvider((FCounterProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d3d88c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCountersAnalyzer,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FCountersAnalyzer,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x60] = '\0';
  (this->ObjectStorage).Pad[0x61] = '\0';
  (this->ObjectStorage).Pad[0x62] = '\0';
  (this->ObjectStorage).Pad[99] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x18));
  return;
}

// DestroyObject @ 14d3d8900

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCpuProfilerAnalyzer,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FCpuProfilerAnalyzer,1> *this)

{
  TraceServices::FCpuProfilerAnalyzer::~FCpuProfilerAnalyzer
            ((FCpuProfilerAnalyzer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d3d8910

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FDefinitionProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FDefinitionProvider,1> *this)

{
  TraceServices::FDefinitionProvider::~FDefinitionProvider
            ((FDefinitionProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d3d8920

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FFrameProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FFrameProvider,1> *this)

{
  TraceServices::FFrameProvider::~FFrameProvider((FFrameProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d3d8930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FLogProvider,1>::DestroyObject
          (TIntrusiveReferenceController<TraceServices::FLogProvider,1> *this)

{
  TraceServices::FLogProvider::~FLogProvider((FLogProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d3d8940

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FRegionProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FRegionProvider,1> *this)

{
  TraceServices::FRegionProvider::~FRegionProvider((FRegionProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d3d8950

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FScreenshotProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FScreenshotProvider,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  *(undefined ***)(this->ObjectStorage).Pad = &___7FScreenshotProvider_TraceServices__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14d3d8990

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FThreadProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FThreadProvider,1> *this)

{
  TraceServices::FThreadProvider::~FThreadProvider((FThreadProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d44f3d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FBookmarkInternal,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FBookmarkInternal,1> *this)

{
  return;
}

// DestroyObject @ 14d44f3e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FBookmarkSpec,1>::DestroyObject
          (TIntrusiveReferenceController<TraceServices::FBookmarkSpec,1> *this)

{
  return;
}

// DestroyObject @ 14d44f3f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FScreenshot,1>::DestroyObject
          (TIntrusiveReferenceController<TraceServices::FScreenshot,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d44f430

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FTableDiffCallbackParams,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FTableDiffCallbackParams,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            (*(TSharedRef<FTokenizedMessage,1> **)((this->ObjectStorage).Pad + 0x18),
             *(int *)((this->ObjectStorage).Pad + 0x20));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14d44f470

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FTableImportCallbackParams,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FTableImportCallbackParams,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            (*(TSharedRef<FTokenizedMessage,1> **)((this->ObjectStorage).Pad + 0x20),
             *(int *)((this->ObjectStorage).Pad + 0x28));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
  return;
}

// DestroyObject @ 14d44f4b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
::DestroyObject(TIntrusiveReferenceController<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
                *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0xe0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x108);
    puVar2 = (this->ObjectStorage).Pad + 0xf0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0xb0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xd8);
    puVar2 = (this->ObjectStorage).Pad + 0xc0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d44f520

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
::DestroyObject(TIntrusiveReferenceController<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
                *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0xe0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x108);
    puVar2 = (this->ObjectStorage).Pad + 0xf0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0xb0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xd8);
    puVar2 = (this->ObjectStorage).Pad + 0xc0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d44f590

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TImportTable<TraceServices::FImportTableRow>,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::TImportTable<TraceServices::FImportTableRow>,1>
              *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad =
       &___7__TImportTable_VFImportTableRow_TraceServices___TraceServices__6B_;
  TraceServices::FStringStore::~FStringStore((FStringStore *)((this->ObjectStorage).Pad + 0xc0));
  TraceServices::
  TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
  ::
  ~TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
            ((TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
              *)((this->ObjectStorage).Pad + 0x88));
  TraceServices::FSlabAllocator::~FSlabAllocator
            ((FSlabAllocator *)((this->ObjectStorage).Pad + 0x20));
  DestructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int>
            (*(FColumnDeclaration **)((this->ObjectStorage).Pad + 0x10),
             *(int *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d44f5f0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>,1>
::DestroyObject(TIntrusiveReferenceController<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>,1>
                *this)

{
  TraceServices::
  TPagedArray<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventInternal,TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage>
  ::
  ~TPagedArray<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventInternal,TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage>
            ((TPagedArray<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventInternal,TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage>
              *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14d44f600

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMap<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>,1>
::DestroyObject(TIntrusiveReferenceController<TMap<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>,1>
                *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d44f640

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>,1>
              *this)

{
  TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::
  ~TModuleProvider<TraceServices::FDbgHelpResolver>
            ((TModuleProvider<TraceServices::FDbgHelpResolver> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d44f650

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FPsymResolver>,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FPsymResolver>,1>
              *this)

{
  TraceServices::TModuleProvider<TraceServices::FPsymResolver>::
  ~TModuleProvider<TraceServices::FPsymResolver>
            ((TModuleProvider<TraceServices::FPsymResolver> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d44f660

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>,1>
              *this)

{
  TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::
  ~TModuleProvider<TraceServices::FSymslibResolver>
            ((TModuleProvider<TraceServices::FSymslibResolver> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d44f670

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
::DestroyObject(TIntrusiveReferenceController<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TraceServices::FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,int>
            (*(FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               **)((this->ObjectStorage).Pad + 0x18),*(int *)((this->ObjectStorage).Pad + 0x20));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d44f6b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
::DestroyObject(TIntrusiveReferenceController<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TraceServices::FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,int>
            (*(FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               **)((this->ObjectStorage).Pad + 0x18),*(int *)((this->ObjectStorage).Pad + 0x20));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d44f6f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCancellationToken,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FCancellationToken,1> *this)

{
  return;
}

// DestroyObject @ 14d497460

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FAllocationsProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FAllocationsProvider,1> *this)

{
  TraceServices::FAllocationsProvider::~FAllocationsProvider
            ((FAllocationsProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d497470

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FAnalysisService,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FAnalysisService,1> *this)

{
  TraceServices::FAnalysisService::~FAnalysisService((FAnalysisService *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d497480

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCallstacksProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FCallstacksProvider,1> *this)

{
  TraceServices::FCallstacksProvider::~FCallstacksProvider
            ((FCallstacksProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d497490

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FContextSwitchesProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FContextSwitchesProvider,1> *this)

{
  TraceServices::FContextSwitchesProvider::~FContextSwitchesProvider
            ((FContextSwitchesProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d4974a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCookProfilerProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FCookProfilerProvider,1> *this)

{
  TraceServices::FCookProfilerProvider::~FCookProfilerProvider
            ((FCookProfilerProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d4974b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCsvProfilerProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FCsvProfilerProvider,1> *this)

{
  TraceServices::FCsvProfilerProvider::~FCsvProfilerProvider
            ((FCsvProfilerProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d4974c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FDiagnosticsProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FDiagnosticsProvider,1> *this)

{
  TraceServices::FDiagnosticsProvider::~FDiagnosticsProvider
            ((FDiagnosticsProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d4974d0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FFileActivityProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FFileActivityProvider,1> *this)

{
  TraceServices::FFileActivityProvider::~FFileActivityProvider
            ((FFileActivityProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d4974e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FLoadTimeProfilerProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FLoadTimeProfilerProvider,1> *this)

{
  TraceServices::FLoadTimeProfilerProvider::~FLoadTimeProfilerProvider
            ((FLoadTimeProfilerProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d4974f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FMemoryProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FMemoryProvider,1> *this)

{
  TraceServices::FMemoryProvider::~FMemoryProvider((FMemoryProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d497500

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FMetadataProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FMetadataProvider,1> *this)

{
  TraceServices::FMetadataProvider::~FMetadataProvider((FMetadataProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d497510

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FModuleService,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FModuleService,1> *this)

{
  TraceServices::FModuleService::~FModuleService((FModuleService *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d497520

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FNetProfilerProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FNetProfilerProvider,1> *this)

{
  TraceServices::FNetProfilerProvider::~FNetProfilerProvider
            ((FNetProfilerProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d497530

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FStackSamplesProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FStackSamplesProvider,1> *this)

{
  TraceServices::FStackSamplesProvider::~FStackSamplesProvider
            ((FStackSamplesProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d497540

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FTasksProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FTasksProvider,1> *this)

{
  TraceServices::FTasksProvider::~FTasksProvider((FTasksProvider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d497550

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FTimingProfilerProvider,1>::
DestroyObject(TIntrusiveReferenceController<TraceServices::FTimingProfilerProvider,1> *this)

{
  TraceServices::FTimingProfilerProvider::~FTimingProfilerProvider
            ((FTimingProfilerProvider *)&this->ObjectStorage);
  return;
}

