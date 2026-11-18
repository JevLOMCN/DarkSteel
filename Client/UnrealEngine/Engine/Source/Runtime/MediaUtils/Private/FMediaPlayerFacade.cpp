// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 125

// FMediaPlayerFacade @ 146bf2580

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMediaPlayerFacade * __thiscall
FMediaPlayerFacade::FMediaPlayerFacade
          (FMediaPlayerFacade *this,TWeakObjectPtr<UMediaPlayer,FWeakObjectPtr> param_1)

{
  FName FVar1;
  FMediaSampleCache *pFVar2;
  FMediaSampleCache *pFVar3;
  FMediaSampleCache *pFVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  FName local_res8;
  
  pFVar4 = (FMediaSampleCache *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IMediaClockSink__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IMediaTickable__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IMediaEventSink__;
  (this->DesiredPlayerName).ComparisonIndex = 0;
  (this->DesiredPlayerName).Number = 0;
  (this->TimeDelay).Ticks = 0;
  (this->ActivePlayerOptions).bIsSet = false;
  (this->PrimaryAudioSink).Object = (FMediaAudioSampleSink *)0x0;
  (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->AudioSampleSinks = 0;
  *(undefined8 *)&(this->AudioSampleSinks).field_0x8 = 0;
  (this->CaptionSampleSinks).Sinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CaptionSampleSinks).Sinks.ArrayNum = 0;
  (this->CaptionSampleSinks).Sinks.ArrayMax = 0;
  (this->MetadataSampleSinks).Sinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataSampleSinks).Sinks.ArrayNum = 0;
  (this->MetadataSampleSinks).Sinks.ArrayMax = 0;
  (this->SubtitleSampleSinks).Sinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubtitleSampleSinks).Sinks.ArrayNum = 0;
  (this->SubtitleSampleSinks).Sinks.ArrayMax = 0;
  (this->VideoSampleSinks).Sinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoSampleSinks).Sinks.ArrayNum = 0;
  (this->VideoSampleSinks).Sinks.ArrayMax = 0;
  (this->BlockOnRange).Facade = this;
  (this->BlockOnRange).CurrentTimeRange.LowerBound.Type.Value = '\x02';
  (this->BlockOnRange).CurrentTimeRange.LowerBound.Value.Ticks = 0;
  (this->BlockOnRange).CurrentTimeRange.UpperBound.Type.Value = '\x02';
  (this->BlockOnRange).CurrentTimeRange.UpperBound.Value.Ticks = 0;
  (this->BlockOnRange).LastProcessedTimeRange.LowerBound.Type.Value = '\x02';
  (this->BlockOnRange).LastProcessedTimeRange.LowerBound.Value.Ticks = 0;
  (this->BlockOnRange).LastProcessedTimeRange.UpperBound.Type.Value = '\x02';
  (this->BlockOnRange).LastProcessedTimeRange.UpperBound.Value.Ticks = 0;
  (this->BlockOnRange).BlockOnRange.LowerBound.Type.Value = '\x02';
  (this->BlockOnRange).BlockOnRange.LowerBound.Value.Time.Ticks = -0x8000000000000000;
  (this->BlockOnRange).BlockOnRange.LowerBound.Value.SequenceIndex = 0;
  (this->BlockOnRange).BlockOnRange.LowerBound.Value.LoopIndex = 0;
  (this->BlockOnRange).BlockOnRange.UpperBound.Type.Value = '\x02';
  (this->BlockOnRange).BlockOnRange.UpperBound.Value.Time.Ticks = -0x8000000000000000;
  (this->BlockOnRange).BlockOnRange.UpperBound.Value.SequenceIndex = 0;
  (this->BlockOnRange).BlockOnRange.UpperBound.Value.LoopIndex = 0;
  FBlockOnRange::Reset(&this->BlockOnRange);
  pFVar2 = ::operator_new(0x178);
  pFVar3 = pFVar4;
  if (pFVar2 != (FMediaSampleCache *)0x0) {
    *(undefined8 *)&(pFVar2->AudioSamples).Elements = 0;
    *(undefined8 *)&(pFVar2->AudioSamples).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar2->AudioSamples).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar2->AudioSamples).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar2->AudioSamples).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->AudioSamples).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->AudioSamples).Elements.field_0x34 = 0;
    (pFVar2->AudioSamples).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar2->AudioSamples).HashSize = 0;
    *(undefined8 *)&(pFVar2->MetadataSamples).Elements = 0;
    *(undefined8 *)&(pFVar2->MetadataSamples).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar2->MetadataSamples).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar2->MetadataSamples).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar2->MetadataSamples).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->MetadataSamples).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->MetadataSamples).Elements.field_0x34 = 0;
    (pFVar2->MetadataSamples).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar2->MetadataSamples).HashSize = 0;
    *(undefined8 *)&(pFVar2->OverlaySamples).Elements = 0;
    *(undefined8 *)&(pFVar2->OverlaySamples).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar2->OverlaySamples).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar2->OverlaySamples).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar2->OverlaySamples).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->OverlaySamples).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->OverlaySamples).Elements.field_0x34 = 0;
    (pFVar2->OverlaySamples).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar2->OverlaySamples).HashSize = 0;
    *(undefined8 *)&(pFVar2->VideoSamples).Elements = 0;
    *(undefined8 *)&(pFVar2->VideoSamples).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar2->VideoSamples).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar2->VideoSamples).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar2->VideoSamples).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->VideoSamples).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->VideoSamples).Elements.field_0x34 = 0;
    (pFVar2->VideoSamples).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar2->VideoSamples).HashSize = 0;
    (pFVar2->CacheAhead).Ticks = 0;
    (pFVar2->CacheBehind).Ticks = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar2->CriticalSection,4000);
    pFVar3 = pFVar2;
  }
  this->Cache = pFVar3;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->CurrentUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentUrl).Data.ArrayNum = 0;
  (this->CurrentUrl).Data.ArrayMax = 0;
  this->LastRate = 0.0;
  this->CurrentRate = 0.0;
  this->bHaveActiveAudio = false;
  this->VideoSampleAvailability = -1;
  this->AudioSampleAvailability = -1;
  *(undefined8 *)&this->MediaEvent = 0;
  *(undefined8 *)&(this->MediaEvent).field_0x8 = 0;
  *(undefined8 *)&(this->MediaEvent).field_0x10 = 0;
  *(undefined8 *)&(this->MediaEvent).field_0x18 = 2;
  (this->NextVideoSampleTime).Ticks = 0;
  (this->Player).Object = (IMediaPlayer *)0x0;
  (this->Player).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->PlayerInstanceID = 0xffffffffffffffff;
  this->PlayerUsesResourceReleaseNotification = false;
  (this->PlayerGuid).A = 0;
  (this->PlayerGuid).B = 0;
  (this->PlayerGuid).C = 0;
  (this->PlayerGuid).D = 0;
  pFVar2 = ::operator_new(0x10);
  pFVar3 = pFVar4;
  if (pFVar2 != (FMediaSampleCache *)0x0) {
    *(undefined8 *)&(pFVar2->AudioSamples).Elements = 0;
    *(undefined8 *)&(pFVar2->AudioSamples).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar2->AudioSamples).Elements = 0;
    pFVar3 = pFVar2;
  }
  (this->QueuedEvents).Tail = (TNode *)pFVar3;
  (this->QueuedEvents).Head = (TNode *)pFVar3;
  pFVar3 = ::operator_new(0x10);
  if (pFVar3 != (FMediaSampleCache *)0x0) {
    *(undefined8 *)&(pFVar3->AudioSamples).Elements = 0;
    *(undefined8 *)&(pFVar3->AudioSamples).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar3->AudioSamples).Elements = 0;
    pFVar4 = pFVar3;
  }
  (this->QueuedEventBroadcasts).Tail = (TNode *)pFVar4;
  (this->QueuedEventBroadcasts).Head = (TNode *)pFVar4;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TimeValueLock,4000);
  (this->LastAudioRenderedSampleTime).TimeStamp.Time.Ticks = -0x8000000000000000;
  (this->LastAudioRenderedSampleTime).TimeStamp.SequenceIndex = 0;
  (this->LastAudioRenderedSampleTime).TimeStamp.LoopIndex = 0;
  (this->LastAudioRenderedSampleTime).SampledAtTime = -1.0;
  (this->LastAudioSampleProcessedTime).TimeStamp.Time.Ticks = -0x8000000000000000;
  (this->LastAudioSampleProcessedTime).TimeStamp.SequenceIndex = 0;
  (this->LastAudioSampleProcessedTime).TimeStamp.LoopIndex = 0;
  (this->LastAudioSampleProcessedTime).SampledAtTime = -1.0;
  (this->LastVideoSampleProcessedTimeRange).LowerBound.Type.Value = '\x02';
  (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.Time.Ticks = -0x8000000000000000;
  (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.SequenceIndex = 0;
  (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.LoopIndex = 0;
  (this->LastVideoSampleProcessedTimeRange).UpperBound.Type.Value = '\x02';
  (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks = -0x8000000000000000;
  (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.SequenceIndex = 0;
  (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.LoopIndex = 0;
  (this->CurrentFrameAudioTimeStamp).Time.Ticks = -0x8000000000000000;
  (this->CurrentFrameAudioTimeStamp).SequenceIndex = 0;
  (this->CurrentFrameAudioTimeStamp).LoopIndex = 0;
  (this->CurrentFrameVideoTimeStamp).Time.Ticks = -0x8000000000000000;
  (this->CurrentFrameVideoTimeStamp).SequenceIndex = 0;
  (this->CurrentFrameVideoTimeStamp).LoopIndex = 0;
  (this->CurrentFrameVideoDisplayTimeStamp).Time.Ticks = -0x8000000000000000;
  (this->CurrentFrameVideoDisplayTimeStamp).SequenceIndex = 0;
  (this->CurrentFrameVideoDisplayTimeStamp).LoopIndex = 0;
  (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = -0x8000000000000000;
  (this->NextEstVideoTimeAtFrameStart).TimeStamp.SequenceIndex = 0;
  (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex = 0;
  (this->NextEstVideoTimeAtFrameStart).SampledAtTime = -1.0;
  (this->MostRecentlyDeliveredVideoFrameTimecode).bIsSet = false;
  (this->SeekTargetTime).Time.Ticks = -0x8000000000000000;
  (this->SeekTargetTime).SequenceIndex = 0;
  (this->SeekTargetTime).LoopIndex = 0;
  (this->NextSeekTime).bIsSet = false;
  (this->NextSequenceIndex).bIsSet = false;
  (this->MediaPlayer).WeakPtr = param_1.WeakPtr;
  this->bAreEventsSafeForAnyThread = false;
  (this->LifecycleManagerDelegateControl).Object = (IControl *)0x0;
  (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->BlockOnRangeDisabled = false;
  pFVar5 = ::FName::FName(&local_res8,"Media");
  FVar1 = *pFVar5;
  this_00 = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModule(this_00,FVar1,None);
  this->MediaModule = (IMediaModule *)pIVar6;
  this->bDidRecentPlayerHaveError = false;
  (this->TrackSelection).UserSelection[0] = -1;
  (this->TrackSelection).UserSelection[1] = -1;
  (this->TrackSelection).PlayerSelection[0] = -1;
  (this->TrackSelection).PlayerSelection[1] = -1;
  (this->TrackSelection).UserSelection[2] = -1;
  (this->TrackSelection).UserSelection[3] = -1;
  (this->TrackSelection).PlayerSelection[2] = -1;
  (this->TrackSelection).PlayerSelection[3] = -1;
  (this->TrackSelection).UserSelection[4] = -1;
  (this->TrackSelection).UserSelection[5] = -1;
  (this->TrackSelection).PlayerSelection[4] = -1;
  (this->TrackSelection).PlayerSelection[5] = -1;
  (this->TrackSelection).UserSelection[6] = -1;
  (this->TrackSelection).PlayerSelection[6] = -1;
  return this;
}

// ~FMediaPlayerFacade @ 146bf3450

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::~FMediaPlayerFacade(FMediaPlayerFacade *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar3;
  int iVar4;
  FMediaSampleCache *this_00;
  ForElementType<FSetElementId> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  void *pvVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  code *pcVar12;
  bool bVar13;
  FMediaSampleSinkEventData_u_0 local_res8;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaClockSink__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTickable__;
  this->_padding_ = (longlong)&_vftable__for__IMediaEventSink__;
  local_res8 = (FMediaSampleSinkEventData_u_0)FWeakObjectPtr::Get(&(this->MediaPlayer).WeakPtr);
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink>::ReceiveEvent
            ((TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink> *)&this->AudioSampleSinks,
             Detached,(FMediaSampleSinkEventData *)&local_res8.Attached);
  TMediaSampleSinks<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::ReceiveEvent
            (&this->MetadataSampleSinks,Detached,(FMediaSampleSinkEventData *)&local_res8.Attached);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::ReceiveEvent
            (&this->CaptionSampleSinks,Detached,(FMediaSampleSinkEventData *)&local_res8.Attached);
  TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::ReceiveEvent
            (&this->SubtitleSampleSinks,Detached,(FMediaSampleSinkEventData *)&local_res8.Attached);
  TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::ReceiveEvent
            (&this->VideoSampleSinks,Detached,(FMediaSampleSinkEventData *)&local_res8.Attached);
  if ((this->Player).Object != (IMediaPlayer *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->Player).Object == (IMediaPlayer *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (**(code **)*(this->Player).Object)();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    NotifyLifetimeManagerDelegate_PlayerClosed(this);
    DestroyPlayer(this);
  }
  this_00 = this->Cache;
  if (this_00 != (FMediaSampleCache *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&this_00->CriticalSection);
    (this_00->VideoSamples).HashSize = 0;
    FVar5 = (this_00->VideoSamples).Hash.SecondaryData;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<IMediaTextureSample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<IMediaTextureSample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this_00->VideoSamples).Elements);
    (this_00->OverlaySamples).HashSize = 0;
    FVar5 = (this_00->OverlaySamples).Hash.SecondaryData;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<IMediaOverlaySample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<IMediaOverlaySample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this_00->OverlaySamples).Elements);
    (this_00->MetadataSamples).HashSize = 0;
    FVar5 = (this_00->MetadataSamples).Hash.SecondaryData;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<IMediaBinarySample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<IMediaBinarySample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this_00->MetadataSamples).Elements);
    (this_00->AudioSamples).HashSize = 0;
    FVar5 = (this_00->AudioSamples).Hash.SecondaryData;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x178);
  }
  pTVar6 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController;
  this->Cache = (FMediaSampleCache *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TimeValueLock);
  pTVar7 = (this->QueuedEventBroadcasts).Tail;
  while (pTVar7 != (TNode *)0x0) {
    (this->QueuedEventBroadcasts).Tail = pTVar7->NextNode;
    ::operator_delete(pTVar7,0x10);
    pTVar7 = (this->QueuedEventBroadcasts).Tail;
  }
  pTVar8 = (this->QueuedEvents).Tail;
  while (pTVar8 != (TNode *)0x0) {
    (this->QueuedEvents).Tail = pTVar8->NextNode;
    ::operator_delete(pTVar8,0x10);
    pTVar8 = (this->QueuedEvents).Tail;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Player).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->MediaEvent).field_0x8,
             *(int *)&(this->MediaEvent).field_0x10);
  pvVar9 = *(void **)&(this->MediaEvent).field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaEvent);
  pFVar10 = (this->CurrentUrl).Data.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DestructItems<TWeakPtr<TMediaSampleSink<IMediaTextureSample>,1>,int>
            ((TWeakPtr<TMediaSampleSink<IMediaTextureSample>,1> *)
             (this->VideoSampleSinks).Sinks.AllocatorInstance.Data,
             (this->VideoSampleSinks).Sinks.ArrayNum);
  pFVar10 = (this->VideoSampleSinks).Sinks.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  DestructItems<TWeakPtr<TMediaSampleSink<IMediaOverlaySample>,1>,int>
            ((TWeakPtr<TMediaSampleSink<IMediaOverlaySample>,1> *)
             (this->SubtitleSampleSinks).Sinks.AllocatorInstance.Data,
             (this->SubtitleSampleSinks).Sinks.ArrayNum);
  pFVar10 = (this->SubtitleSampleSinks).Sinks.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  DestructItems<TWeakPtr<TMediaSampleSink<IMediaBinarySample>,1>,int>
            ((TWeakPtr<TMediaSampleSink<IMediaBinarySample>,1> *)
             (this->MetadataSampleSinks).Sinks.AllocatorInstance.Data,
             (this->MetadataSampleSinks).Sinks.ArrayNum);
  pFVar10 = (this->MetadataSampleSinks).Sinks.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  DestructItems<TWeakPtr<TMediaSampleSink<IMediaOverlaySample>,1>,int>
            ((TWeakPtr<TMediaSampleSink<IMediaOverlaySample>,1> *)
             (this->CaptionSampleSinks).Sinks.AllocatorInstance.Data,
             (this->CaptionSampleSinks).Sinks.ArrayNum);
  pFVar10 = (this->CaptionSampleSinks).Sinks.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  DestructItems<TWeakPtr<FMediaAudioSampleSink,1>,int>
            (*(TWeakPtr<FMediaAudioSampleSink,1> **)&this->AudioSampleSinks,
             *(int *)&(this->AudioSampleSinks).field_0x8);
  if (*(void **)&this->AudioSampleSinks != (void *)0x0) {
    FMemory::Free(*(void **)&this->AudioSampleSinks);
  }
  pTVar6 = (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if ((this->ActivePlayerOptions).bIsSet != false) {
    FMediaPlayerOptions::~FMediaPlayerOptions(&(this->ActivePlayerOptions).TypedValue);
  }
  plVar11 = (longlong *)this->_padding_;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar11 + 8))(plVar11,1);
    }
  }
  this->_padding_ = (longlong)&___7IMediaEventSink__6B_;
  this->_padding_ = (longlong)&___7IMediaTickable__6B_;
  this->_padding_ = (longlong)&___7IMediaClockSink__6B_;
  return;
}

// operator() @ 146bf4020

bool __thiscall
`FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::<lambda_1>::operator()
          (void *this,FCandidate *param_1,FCandidate *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1->ConfidenceScore == param_2->ConfidenceScore) {
    pFVar2 = ::FName::ToString(&param_2->Name,&local_18);
    pFVar3 = ::FName::ToString(&param_1->Name,&local_28);
    pwVar4 = L"";
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    if ((pFVar3->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return SUB41((uint)iVar1 >> 0x1f,0);
  }
  return param_2->ConfidenceScore < param_1->ConfidenceScore;
}

// AddAudioSampleSink @ 146bf5600

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::AddAudioSampleSink
          (FMediaPlayerFacade *this,TSharedRef<FMediaAudioSampleSink,1> *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FMediaAudioSampleSink,1> *pTVar5;
  TSharedPtr<FMediaAudioSampleSink,1> local_18;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink>::Add
              ((TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink> *)&this->AudioSampleSinks
               ,param_1,(UMediaPlayer *)0x0);
    pTVar5 = FMediaAudioSampleSinks::GetPrimaryAudioSink(&this->AudioSampleSinks,&local_18);
    (this->PrimaryAudioSink).Object = pTVar5->Object;
    pTVar3 = (pTVar5->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000146bf56c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddCaptionSampleSink @ 146bf5740

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::AddCaptionSampleSink
          (FMediaPlayerFacade *this,TSharedRef<TMediaSampleSink<IMediaOverlaySample>,1> *param_1)

{
  TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Add
            (&this->CaptionSampleSinks,param_1,(UMediaPlayer *)0x0);
  return;
}

// AddMetadataSampleSink @ 146bf57c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::AddMetadataSampleSink
          (FMediaPlayerFacade *this,TSharedRef<TMediaSampleSink<IMediaBinarySample>,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMediaSampleSinks<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::Add
              (&this->MetadataSampleSinks,param_1,(UMediaPlayer *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146bf580e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddSubtitleSampleSink @ 146bf5890

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::AddSubtitleSampleSink
          (FMediaPlayerFacade *this,TSharedRef<TMediaSampleSink<IMediaOverlaySample>,1> *param_1)

{
  TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Add
            (&this->SubtitleSampleSinks,param_1,(UMediaPlayer *)0x0);
  return;
}

// AddVideoSampleSink @ 146bf5910

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::AddVideoSampleSink
          (FMediaPlayerFacade *this,TSharedRef<TMediaSampleSink<IMediaTextureSample>,1> *param_1)

{
  TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Add
            (&this->VideoSampleSinks,param_1,(UMediaPlayer *)0x0);
  return;
}

// BlockOnFetch @ 146bf5a40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::BlockOnFetch(FMediaPlayerFacade *this)

{
  TSharedPtr<IMediaPlayer,1> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  TRange<FMediaTimeStamp> *pTVar7;
  undefined8 *puVar8;
  IMediaPlayer *pIVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  TRange<FMediaTimeStamp> local_38;
  
  this_00 = &this->Player;
  if ((this_00->Object == (IMediaPlayer *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Player.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0x697,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pTVar7 = FBlockOnRange::GetRange(&this->BlockOnRange);
  local_38.LowerBound.Type.Value = (pTVar7->LowerBound).Type.Value;
  local_38.LowerBound._1_7_ = *(undefined7 *)&(pTVar7->LowerBound).field_0x1;
  local_38.LowerBound.Value.Time.Ticks = (pTVar7->LowerBound).Value.Time.Ticks;
  local_38.LowerBound.Value.SequenceIndex = (pTVar7->LowerBound).Value.SequenceIndex;
  local_38.LowerBound.Value.LoopIndex = (pTVar7->LowerBound).Value.LoopIndex;
  local_38.UpperBound.Type.Value = (pTVar7->UpperBound).Type.Value;
  local_38.UpperBound._1_7_ = *(undefined7 *)&(pTVar7->UpperBound).field_0x1;
  local_38.UpperBound.Value.Time.Ticks = (pTVar7->UpperBound).Value.Time.Ticks;
  local_38.UpperBound.Value.SequenceIndex = (pTVar7->UpperBound).Value.SequenceIndex;
  local_38.UpperBound.Value.LoopIndex = (pTVar7->UpperBound).Value.LoopIndex;
  bVar3 = TRange<FMediaTimeStamp>::IsEmpty(&local_38);
  if (!bVar3) {
    if ((this_00->Object == (IMediaPlayer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    puVar8 = (undefined8 *)(**(code **)((longlong)*this_00->Object + 0x10))();
    cVar5 = (**(code **)*puVar8)(puVar8,0);
    if (((cVar5 != '\0') && (this->BlockOnRangeDisabled == false)) &&
       (this->bHaveActiveAudio == false)) {
      if ((this_00->Object == (IMediaPlayer *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      cVar5 = (**(code **)((longlong)*this_00->Object + 0xc0))(this_00->Object,1);
      if (cVar5 == '\0') {
        bVar3 = IsPreparing(this);
        if (bVar3) {
          return true;
        }
        pIVar9 = this_00->Object;
        pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pIVar9 == (IMediaPlayer *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          return false;
        }
        plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x10))();
        iVar6 = (**(code **)(*plVar10 + 0x18))(plVar10);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        if (((iVar6 == 3) && (0.0 < this->CurrentRate || this->CurrentRate == 0.0)) &&
           ((this->VideoSampleSinks).Sinks.ArrayNum != 0)) {
          if ((local_38.UpperBound.Type.Value == '\x02') &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if ((this->NextVideoSampleTime).Ticks <= local_38.UpperBound.Value.Time.Ticks) {
            return true;
          }
        }
      }
      else {
        pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
        pIVar9 = this_00->Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pIVar9 == (IMediaPlayer *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
        }
        else {
          plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x10))();
          iVar6 = (**(code **)(*plVar10 + 0x18))(plVar10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          if (iVar6 == 4) {
            return true;
          }
        }
        pIVar9 = TSharedPtr<IMediaPlayer,1>::operator->(this_00);
        plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x10))(pIVar9);
        cVar5 = (**(code **)(*plVar10 + 0x38))(plVar10);
        if (cVar5 != '\0') {
          return true;
        }
        if ((local_38.UpperBound.Type.Value == '\x02') &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (-1 < local_38.UpperBound.Value.Time.Ticks) {
          pIVar9 = TSharedPtr<IMediaPlayer,1>::operator->(this_00);
          plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x10))(pIVar9);
          plVar10 = (longlong *)(**(code **)(*plVar10 + 8))(plVar10,local_res8);
          if ((local_38.LowerBound.Type.Value == '\x02') &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (local_38.LowerBound.Value.Time.Ticks < *plVar10) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// CanPause @ 146bf6100

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::CanPause(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    uVar3 = (**(code **)*puVar4)(puVar4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar3;
}

// CanPlayUrl @ 146bf6170

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::CanPlayUrl(FMediaPlayerFacade *this,FString *param_1,IMediaOptions *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  FString *local_res10;
  FString local_48;
  
  if (this->MediaModule == (IMediaModule *)0x0) {
    return false;
  }
  local_res10 = param_1;
  ::FString::FString(&local_48,"Windows");
  plVar6 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0x68))();
  puVar10 = (undefined8 *)*plVar6;
  lVar3 = plVar6[1];
  puVar1 = puVar10 + (int)lVar3;
  while( true ) {
    if ((int)plVar6[1] != (int)lVar3) {
      `TCheckedPointerIterator<IMediaPlayerFactory_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar10 == puVar1) break;
    plVar2 = (longlong *)*puVar10;
    plVar7 = (longlong *)(**(code **)(*plVar2 + 0x28))(plVar2);
    puVar9 = (undefined8 *)*plVar7;
    puVar11 = puVar9 + (longlong)(int)plVar7[1] * 2;
    uVar8 = local_48.Data._8_8_;
    if (puVar9 == puVar11) {
LAB_146bf6283:
      puVar10 = puVar10 + 1;
    }
    else {
      do {
        iVar5 = *(int *)(puVar9 + 1);
        if (iVar5 == (int)uVar8) {
          if (1 < iVar5) {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)*puVar9,(wchar_t *)local_48.Data.AllocatorInstance.Data);
            bVar12 = iVar5 == 0;
            uVar8 = local_48.Data._8_8_;
            goto LAB_146bf624a;
          }
LAB_146bf6260:
          cVar4 = (**(code **)*plVar2)(plVar2,local_res10,param_2,0,0);
          if (cVar4 == '\0') goto LAB_146bf6283;
          bVar12 = true;
          goto LAB_146bf6292;
        }
        bVar12 = iVar5 + (int)uVar8 == 1;
LAB_146bf624a:
        if (bVar12) goto LAB_146bf6260;
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar11);
      puVar10 = puVar10 + 1;
    }
  }
  bVar12 = false;
LAB_146bf6292:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar12;
}

// CanResume @ 146bf63d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::CanResume(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    uVar3 = (**(code **)*puVar4)(puVar4,2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar3;
}

// CanScrub @ 146bf6440

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::CanScrub(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    uVar3 = (**(code **)*puVar4)(puVar4,3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar3;
}

// CanSeek @ 146bf64b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::CanSeek(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    uVar3 = (**(code **)*puVar4)(puVar4,4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar3;
}

// Close @ 146bf6760

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::Close(FMediaPlayerFacade *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMediaPlayer *pIVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeClose> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_88;
  undefined1 local_78 [16];
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FVar11 = StatPtr_STAT_MediaUtils_FacadeClose;
  if (StatPtr_STAT_MediaUtils_FacadeClose ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeClose>)0x0) {
    pFVar10 = ::FName::FName(&local_res10,"STAT_MediaUtils_FacadeClose");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeClose>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeClose,*pFVar10,
                        L"MediaUtils MediaPlayerFacade Close","STATGROUP_Media","STATCAT_Advanced",
                        L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar9 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_146bf688f:
    bVar6 = false;
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                   ,0x128);
        bVar5 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146bf688f;
    local_res8.s.LowPart = FVar13.Value;
    local_res8.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
  }
  if (1 < (this->CurrentUrl).Data.ArrayNum) {
    pTVar3 = (this->Player).SharedReferenceCount.ReferenceController;
    pIVar4 = (this->Player).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar2 = &this->CriticalSection;
    if (pIVar4 == (IMediaPlayer *)0x0) {
      Flush(this,false,false);
      if (pFVar2 == (FWindowsRecursiveMutex *)0x0) goto LAB_146bf6b81;
    }
    else {
      if (pFVar2 == (FWindowsRecursiveMutex *)0x0) goto LAB_146bf6b81;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
      (**(code **)*pIVar4)(pIVar4);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
      NotifyLifetimeManagerDelegate_PlayerClosed(this);
      Flush(this,false,false);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    FBlockOnRange::Reset(&this->BlockOnRange);
    this->BlockOnRangeDisabled = false;
    ::FString::Empty(&this->CurrentUrl);
    this->LastRate = 0.0;
    this->CurrentRate = 0.0;
    this->bHaveActiveAudio = false;
    this->VideoSampleAvailability = -1;
    this->AudioSampleAvailability = -1;
    (this->NextVideoSampleTime).Ticks = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
    pFVar2 = &this->TimeValueLock;
    if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
LAB_146bf6b81:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    (this->LastAudioRenderedSampleTime).TimeStamp.Time.Ticks = -0x8000000000000000;
    (this->LastAudioRenderedSampleTime).SampledAtTime = -1.0;
    (this->LastAudioSampleProcessedTime).TimeStamp.Time.Ticks = -0x8000000000000000;
    (this->LastAudioSampleProcessedTime).SampledAtTime = -1.0;
    uStack_50 = 0x8000000000000000;
    local_58 = 0;
    local_78._8_4_ = (int)uStack_57 << 8;
    local_88.StatData.Pad = local_88.StatData.Pad & 0xffffffffffffff00;
    local_88.NameAndInfo.Index.Value = 0;
    local_88.NameAndInfo.Number = -0x80000000;
    local_48 = 0;
    (this->LastVideoSampleProcessedTimeRange).LowerBound.Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)local_88.StatData.Pad[0];
    (this->LastVideoSampleProcessedTimeRange).LowerBound.field_0x1 = local_88.StatData.Pad[1];
    (this->LastVideoSampleProcessedTimeRange).LowerBound.field_0x2 = local_88.StatData.Pad[2];
    (this->LastVideoSampleProcessedTimeRange).LowerBound.field_0x3 = local_88.StatData.Pad[3];
    (this->LastVideoSampleProcessedTimeRange).LowerBound.field_0x4 = local_88.StatData.Pad[4];
    (this->LastVideoSampleProcessedTimeRange).LowerBound.field_0x5 = local_88.StatData.Pad[5];
    (this->LastVideoSampleProcessedTimeRange).LowerBound.field_0x6 = local_88.StatData.Pad[6];
    (this->LastVideoSampleProcessedTimeRange).LowerBound.field_0x7 = local_88.StatData.Pad[7];
    (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.Time.Ticks = -0x8000000000000000;
    (this->CurrentFrameAudioTimeStamp).Time.Ticks = -0x8000000000000000;
    (this->CurrentFrameVideoTimeStamp).Time.Ticks = -0x8000000000000000;
    local_78._12_4_ = (undefined4)((uint7)uStack_57 >> 0x18);
    (this->CurrentFrameVideoDisplayTimeStamp).Time.Ticks = -0x8000000000000000;
    auVar7._4_4_ = local_78._12_4_;
    auVar7._0_4_ = local_78._8_4_;
    auVar7._8_8_ = 0;
    *(undefined1 (*) [16])&(this->LastVideoSampleProcessedTimeRange).LowerBound.Value.SequenceIndex
         = auVar7 << 0x40;
    uStack_60 = 0;
    uStack_5c = 0;
    *(undefined4 *)&(this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks = 0;
    *(undefined4 *)
     ((longlong)&(this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks + 4) =
         0x80000000;
    (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.SequenceIndex = 0;
    (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.LoopIndex = 0;
    (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = -0x8000000000000000;
    (this->NextEstVideoTimeAtFrameStart).SampledAtTime = -1.0;
    auVar8._4_4_ = local_78._12_4_;
    auVar8._0_4_ = local_78._8_4_;
    auVar8._8_8_ = 0;
    local_78 = auVar8 << 0x40;
    uStack_68 = 0x8000000000000000;
    if ((this->MostRecentlyDeliveredVideoFrameTimecode).bIsSet != false) {
      (this->MostRecentlyDeliveredVideoFrameTimecode).bIsSet = false;
    }
    (this->SeekTargetTime).Time.Ticks = -0x8000000000000000;
    if ((this->NextSeekTime).bIsSet != false) {
      (this->NextSeekTime).bIsSet = false;
    }
    if ((this->NextSequenceIndex).bIsSet != false) {
      (this->NextSequenceIndex).bIsSet = false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
    FBlockOnRange::Reset(&this->BlockOnRange);
    this->bDidRecentPlayerHaveError = false;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar14 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_88);
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
  return;
}

// ContinueOpen @ 146bf6cb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::ContinueOpen
          (FMediaPlayerFacade *this,
          TSharedPtr<IMediaPlayerLifecycleManagerDelegate::IControl,1> *param_1,FString *param_2,
          IMediaOptions *param_3,FMediaPlayerOptions *param_4,IMediaPlayerFactory *param_5,
          TSharedPtr<IMediaPlayer,1> *param_6,bool param_7,ulong64 param_8)

{
  FWindowsRecursiveMutex *pFVar1;
  IControl *pIVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  TSharedRef<FMediaPlayerFacade,1> *pTVar10;
  longlong *plVar11;
  TReferenceControllerBase<1> *pTVar12;
  IMediaPlayer *pIVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong *local_178;
  TReferenceControllerBase<1> *local_170;
  longlong *local_168;
  TReferenceControllerBase<1> *local_160;
  undefined4 local_158 [2];
  undefined1 local_150;
  uint7 uStack_14f;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined1 local_110;
  uint7 uStack_10f;
  undefined8 uStack_108;
  undefined1 local_100;
  uint7 uStack_ff;
  undefined8 uStack_f8;
  IControl *local_f0;
  TReferenceControllerBase<1> *local_e8;
  undefined1 local_e0 [8];
  TReferenceControllerBase<1> *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  IMediaPlayer *local_c0;
  TReferenceControllerBase<1> *pTStack_b8;
  IControl *local_b0;
  TReferenceControllerBase<1> *pTStack_a8;
  IControl *local_a0;
  TReferenceControllerBase<1> *pTStack_98;
  TSharedRef<FMediaPlayerFacade,1> local_90;
  TSharedRef<FMediaPlayerFacade,1> local_80 [2];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  if (param_7) {
    puVar8 = (undefined8 *)(**(code **)((longlong)*param_5 + 8))(param_5,local_e0,&this->_padding_);
    pIVar13 = (IMediaPlayer *)*puVar8;
    pTVar14 = (TReferenceControllerBase<1> *)puVar8[1];
    puVar8[1] = 0;
    *puVar8 = 0;
    pTVar12 = local_d8;
  }
  else {
    pTVar14 = (param_6->SharedReferenceCount).ReferenceController;
    pIVar13 = param_6->Object;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8 = 0;
    local_d0 = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (pIVar13 == (this->Player).Object) {
    pTVar12 = (param_1->SharedReferenceCount).ReferenceController;
    pIVar2 = param_1->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0 = (this->LifecycleManagerDelegateControl).Object;
    pTStack_98 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController;
    (this->LifecycleManagerDelegateControl).Object = pIVar2;
    (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController = pTVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_98);
  }
  else {
    DestroyPlayer(this);
    pFVar1 = &this->CriticalSection;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_146bf7467;
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c0 = (this->Player).Object;
    pTStack_b8 = (this->Player).SharedReferenceCount.ReferenceController;
    (this->Player).Object = pIVar13;
    (this->Player).SharedReferenceCount.ReferenceController = pTVar14;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b8);
    this->PlayerInstanceID = param_8;
    pTVar12 = (param_1->SharedReferenceCount).ReferenceController;
    pIVar2 = param_1->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b0 = (this->LifecycleManagerDelegateControl).Object;
    pTStack_a8 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController;
    (this->LifecycleManagerDelegateControl).Object = pIVar2;
    (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController = pTVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a8);
    if ((this->LifecycleManagerDelegateControl).Object == (IControl *)0x0) {
      this->PlayerUsesResourceReleaseNotification = false;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    }
    else {
      if (((this->Player).Object == (IMediaPlayer *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pIVar13 = (this->Player).Object;
      pcVar3 = *(code **)((longlong)*pIVar13 + 200);
      puVar8 = ::operator_new(0x20);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        pTVar12 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController;
        pIVar2 = (this->LifecycleManagerDelegateControl).Object;
        if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
          *puVar8 = &`FMediaPlayerFacade::ContinueOpen'::`5'::FAsyncResourceReleaseNotification::
                     _vftable_;
          puVar8[2] = pIVar2;
          puVar8[3] = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
          *puVar8 = &`FMediaPlayerFacade::ContinueOpen'::`5'::FAsyncResourceReleaseNotification::
                     _vftable_;
          puVar8[2] = pIVar2;
          puVar8[3] = pTVar12;
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
        }
      }
      local_120 = puVar8;
      local_118 = ::operator_new(0x18);
      if (local_118 != (undefined8 *)0x0) {
        *(undefined4 *)(local_118 + 1) = 1;
        *local_118 = &SharedPointerInternals::
                      TReferenceControllerWithDeleter<`FMediaPlayerFacade::ContinueOpen'::`5'::FAsyncResourceReleaseNotification,SharedPointerInternals::DefaultDeleter<`FMediaPlayerFacade::ContinueOpen'::`5'::FAsyncResourceReleaseNotification>,1>
                      ::_vftable_;
        *(undefined4 *)((longlong)local_118 + 0xc) = 1;
        local_118[2] = puVar8;
      }
      if ((puVar8 == (undefined8 *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      bVar5 = (bool)(*pcVar3)(pIVar13,&local_120);
      this->PlayerUsesResourceReleaseNotification = bVar5;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    }
  }
  pTVar4 = UE::MediaUtils::Private::CVarTestForcePlayerCreateFailed.Ref;
  if ((this->Player).Object != (IMediaPlayer *)0x0) {
    bVar5 = IsInParallelGameThread();
    if (bVar5) {
LAB_146bf6f76:
      lVar9 = 0;
    }
    else {
      bVar5 = IsInGameThread();
      lVar9 = 1;
      if (bVar5) goto LAB_146bf6f76;
    }
    if (pTVar4->ShadowedValue[lVar9] == false) {
      puVar8 = (undefined8 *)(**(code **)((longlong)*this->MediaModule + 0xb0))();
      pcVar3 = *(code **)*puVar8;
      pTVar10 = TSharedFromThis<FMediaPlayerFacade,1>::AsShared
                          ((TSharedFromThis<FMediaPlayerFacade,1> *)&this->_padding_,&local_90);
      if (pTVar10->Object == (FMediaPlayerFacade *)0x0) {
        local_178 = (longlong *)0x0;
      }
      else {
        local_178 = &pTVar10->Object->_padding_;
      }
      local_170 = (pTVar10->SharedReferenceCount).ReferenceController;
      if (local_170 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_170->SharedReferenceCount = (atomic<int>)((int)local_170->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar3)(puVar8,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
      if (((this->Player).Object == (IMediaPlayer *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pIVar13 = (this->Player).Object;
      (**(code **)((longlong)*pIVar13 + 0x80))(pIVar13,&this->PlayerGuid);
      ::FString::operator=(&this->CurrentUrl,param_2);
      if (param_4 != (FMediaPlayerOptions *)0x0) {
        TOptional<FMediaPlayerOptions>::operator=(&this->ActivePlayerOptions,param_4);
      }
      if (((this->Player).Object == (IMediaPlayer *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pIVar13 = (this->Player).Object;
      cVar7 = (**(code **)((longlong)*pIVar13 + 0x50))(pIVar13,param_2,param_3,param_4);
      if (cVar7 != '\0') {
        pFVar1 = &this->TimeValueLock;
        if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          this->BlockOnRangeDisabled = false;
          (this->BlockOnRange).OnBlockSequenceIndex = 0;
          (this->BlockOnRange).OnBlockLoopIndexOffset = 0;
          (this->BlockOnRange).RangeIsDirty = true;
          local_110 = 0;
          uStack_108 = 0;
          local_100 = 0;
          uStack_f8 = 0;
          local_138 = 0;
          *(ulonglong *)&(this->BlockOnRange).LastProcessedTimeRange.LowerBound =
               (ulonglong)uStack_10f << 8;
          (this->BlockOnRange).LastProcessedTimeRange.LowerBound.Value.Ticks = 0;
          uStack_130 = 0x8000000000000000;
          local_58._0_4_ = (int)uStack_137 << 8;
          local_150 = 0;
          *(ulonglong *)&(this->BlockOnRange).LastProcessedTimeRange.UpperBound =
               (ulonglong)uStack_ff << 8;
          (this->BlockOnRange).LastProcessedTimeRange.UpperBound.Value.Ticks = 0;
          uStack_148 = 0x8000000000000000;
          local_140 = 0;
          *(ulonglong *)&(this->LastVideoSampleProcessedTimeRange).LowerBound =
               (ulonglong)uStack_14f << 8;
          (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.Time.Ticks =
               -0x8000000000000000;
          local_128 = 0;
          (this->CurrentFrameVideoTimeStamp).Time.Ticks = -0x8000000000000000;
          local_58._4_4_ = (undefined4)((uint7)uStack_137 >> 0x18);
          (this->CurrentFrameVideoDisplayTimeStamp).Time.Ticks = -0x8000000000000000;
          (this->CurrentFrameAudioTimeStamp).Time.Ticks = -0x8000000000000000;
          (this->SeekTargetTime).Time.Ticks = -0x8000000000000000;
          (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.SequenceIndex = 0;
          (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.LoopIndex = 0;
          *(int *)&(this->LastVideoSampleProcessedTimeRange).UpperBound = (int)local_58;
          *(undefined4 *)&(this->LastVideoSampleProcessedTimeRange).UpperBound.field_0x4 =
               local_58._4_4_;
          uStack_48 = 0;
          uStack_44 = 0;
          *(undefined4 *)&(this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks = 0;
          *(undefined4 *)
           ((longlong)&(this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks + 4) =
               0x80000000;
          (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.SequenceIndex = 0;
          (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.LoopIndex = 0;
          (this->LastAudioSampleProcessedTime).TimeStamp.Time.Ticks = -0x8000000000000000;
          (this->LastAudioSampleProcessedTime).SampledAtTime = -1.0;
          (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = -0x8000000000000000;
          (this->NextEstVideoTimeAtFrameStart).SampledAtTime = -1.0;
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_50 = 0x8000000000000000;
          if ((this->NextSeekTime).bIsSet != false) {
            (this->NextSeekTime).bIsSet = false;
          }
          if ((this->NextSequenceIndex).bIsSet != false) {
            (this->NextSequenceIndex).bIsSet = false;
          }
          if (((this->Player).Object == (IMediaPlayer *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pIVar13 = (this->Player).Object;
          cVar7 = (**(code **)((longlong)*pIVar13 + 0xc0))(pIVar13,1);
          if ((cVar7 != '\0') && ((TOptional<int> *)local_158 != &this->NextSequenceIndex)) {
            (this->NextSequenceIndex).TypedValue = 0;
            (this->NextSequenceIndex).bIsSet = true;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          (this->TrackSelection).UserSelection[0] = -1;
          (this->TrackSelection).UserSelection[1] = -1;
          (this->TrackSelection).PlayerSelection[0] = -1;
          (this->TrackSelection).PlayerSelection[1] = -1;
          (this->TrackSelection).UserSelection[2] = -1;
          (this->TrackSelection).UserSelection[3] = -1;
          (this->TrackSelection).PlayerSelection[2] = -1;
          (this->TrackSelection).PlayerSelection[3] = -1;
          (this->TrackSelection).UserSelection[4] = -1;
          (this->TrackSelection).UserSelection[5] = -1;
          (this->TrackSelection).PlayerSelection[4] = -1;
          (this->TrackSelection).PlayerSelection[5] = -1;
          (this->TrackSelection).UserSelection[6] = -1;
          (this->TrackSelection).PlayerSelection[6] = -1;
          if (param_7) {
            bVar5 = IsInGameThread();
            if (((!bVar5) && (bVar5 = IsInSlateThread(), !bVar5)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsInGameThread() || IsInSlateThread()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                                   ,0x3a0,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            if (((this->Player).Object == (IMediaPlayer *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Player.IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                                   ,0x3a1,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            if (((this->LifecycleManagerDelegateControl).Object != (IControl *)0x0) &&
               (plVar11 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0x98))(),
               plVar11 != (longlong *)0x0)) {
              pcVar3 = *(code **)(*plVar11 + 0x10);
              local_f0 = (this->LifecycleManagerDelegateControl).Object;
              local_e8 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.
                         ReferenceController;
              if (local_e8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_e8->SharedReferenceCount =
                     (atomic<int>)((int)local_e8->SharedReferenceCount + 1);
                UNLOCK();
              }
              (*pcVar3)(plVar11,&local_f0);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->SharedReferenceCount).ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_6->SharedReferenceCount).ReferenceController);
          return true;
        }
LAB_146bf7467:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      NotifyLifetimeManagerDelegate_PlayerCreateFailed(this);
      ::FString::Empty(&this->CurrentUrl);
      if ((this->ActivePlayerOptions).bIsSet != false) {
        FMediaPlayerOptions::~FMediaPlayerOptions(&(this->ActivePlayerOptions).TypedValue);
        (this->ActivePlayerOptions).bIsSet = false;
      }
      goto LAB_146bf7430;
    }
  }
  NotifyLifetimeManagerDelegate_PlayerCreateFailed(this);
  plVar11 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0xb0))();
  pcVar3 = *(code **)(*plVar11 + 8);
  pTVar10 = TSharedFromThis<FMediaPlayerFacade,1>::AsShared
                      ((TSharedFromThis<FMediaPlayerFacade,1> *)&this->_padding_,local_80);
  if (pTVar10->Object == (FMediaPlayerFacade *)0x0) {
    local_168 = (longlong *)0x0;
  }
  else {
    local_168 = &pTVar10->Object->_padding_;
  }
  local_160 = (pTVar10->SharedReferenceCount).ReferenceController;
  if (local_160 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_160->SharedReferenceCount = (atomic<int>)((int)local_160->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar3)(plVar11,&local_168);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80[0].SharedReferenceCount.ReferenceController);
LAB_146bf7430:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return false;
}

// DestroyPlayer @ 146bf7e80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::DestroyPlayer(FMediaPlayerFacade *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<IMediaPlayer,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  longlong local_38;
  FSharedReferencer<1> FStack_30;
  IControl *local_28;
  TReferenceControllerBase<1> *local_20;
  IControl *local_18;
  TReferenceControllerBase<1> *local_10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->Player;
  if (pTVar1->Object != (IMediaPlayer *)0x0) {
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<IMediaPlayer,1> *)&local_38) {
      pTVar1->Object = (IMediaPlayer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Player).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = IsInSlateThread();
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInSlateThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                           ,0x3ce,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if ((this->LifecycleManagerDelegateControl).Object != (IControl *)0x0) {
      plVar4 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0x98))();
      if (plVar4 != (longlong *)0x0) {
        pcVar2 = *(code **)(*plVar4 + 0x28);
        local_28 = (this->LifecycleManagerDelegateControl).Object;
        local_20 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController;
        if (local_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar2)(plVar4,&local_28);
      }
    }
    if (this->PlayerUsesResourceReleaseNotification == false) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        bVar3 = IsInSlateThread();
        if (!bVar3) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInSlateThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                             ,0x3dd,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      if ((this->LifecycleManagerDelegateControl).Object != (IControl *)0x0) {
        plVar4 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0x98))();
        if (plVar4 != (longlong *)0x0) {
          local_10 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.
                     ReferenceController;
          pcVar2 = *(code **)(*plVar4 + 0x30);
          local_18 = (this->LifecycleManagerDelegateControl).Object;
          if (local_10 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
            UNLOCK();
          }
          (*pcVar2)(plVar4,&local_18,3);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146bf801d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ExecuteNextSeek @ 146bf9740

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::ExecuteNextSeek(FMediaPlayerFacade *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FTimespan local_38;
  char local_30;
  FString local_28;
  FString local_18;
  
  lpCriticalSection = &this->TimeValueLock;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_30 = (this->NextSeekTime).bIsSet;
  if ((bool)local_30 != false) {
    local_38.Ticks = (this->NextSeekTime).TypedValue.Ticks;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_30 != '\0') {
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar1 = (this->SeekTargetTime).Time.Ticks;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (lVar1 == -0x8000000000000000) {
      if (5 < (byte)LogMediaUtils._0_1_) {
        if ((local_30 == '\0') &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FTimespan::ToString(&local_38,&local_28,L"%h:%m:%s.%t");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      if ((local_30 == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = Seek(this,&local_38);
      if ((!bVar3) && (1 < (byte)LogMediaUtils._0_1_)) {
        if ((local_30 == '\0') &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FTimespan::ToString(&local_38,&local_18,L"%h:%m:%s.%t");
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// Flush @ 146bfc920

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::Flush(FMediaPlayerFacade *this,bool param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRange<FMediaTimeStamp> *this_00;
  int iVar1;
  IMediaPlayer *pIVar2;
  char cVar3;
  bool bVar4;
  UMediaPlayer *pUVar5;
  longlong *plVar6;
  FMediaTimeStamp *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FMediaTimeStamp local_d8;
  FMediaTimeStamp local_c8;
  undefined1 local_b8;
  uint7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  uint7 uStack_9f;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if (5 < (byte)LogMediaUtils._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pUVar5 = (UMediaPlayer *)FWeakObjectPtr::Get(&(this->MediaPlayer).WeakPtr);
  TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink>::Flush
            ((TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink> *)&this->AudioSampleSinks,
             pUVar5);
  TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Flush
            (&this->CaptionSampleSinks,pUVar5);
  TMediaSampleSinks<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::Flush
            (&this->MetadataSampleSinks,pUVar5);
  TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Flush
            (&this->SubtitleSampleSinks,pUVar5);
  TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Flush
            (&this->VideoSampleSinks,pUVar5);
  if ((this->MostRecentlyDeliveredVideoFrameTimecode).bIsSet != false) {
    (this->MostRecentlyDeliveredVideoFrameTimecode).bIsSet = false;
  }
  pIVar2 = (this->Player).Object;
  if ((pIVar2 != (IMediaPlayer *)0x0) && (!param_1)) {
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x28))();
    (**(code **)(*plVar6 + 0x50))(plVar6);
  }
  (this->LastAudioRenderedSampleTime).TimeStamp.Time.Ticks = -0x8000000000000000;
  (this->LastAudioRenderedSampleTime).SampledAtTime = -1.0;
  iVar8 = 0;
  if (param_2) {
    if ((this->NextSequenceIndex).bIsSet != false) {
      iVar8 = (this->NextSequenceIndex).TypedValue;
    }
    local_60 = local_60 & 0xffffff00;
    uStack_58 = 0;
    local_70 = local_70 & 0xffffff00;
    uStack_68 = 0;
    uVar9 = local_70;
    uVar10 = local_60;
  }
  else {
    local_40 = local_40 & 0xffffff00;
    uStack_38 = 0;
    local_50 = local_50 & 0xffffff00;
    uStack_48 = 0;
    uVar9 = local_50;
    uStack_6c = uStack_4c;
    uVar10 = local_40;
    uStack_5c = uStack_3c;
  }
  *(uint *)&(this->BlockOnRange).LastProcessedTimeRange.LowerBound = uVar9;
  *(undefined4 *)&(this->BlockOnRange).LastProcessedTimeRange.LowerBound.field_0x4 = uStack_6c;
  *(undefined4 *)&(this->BlockOnRange).LastProcessedTimeRange.LowerBound.Value.Ticks = 0;
  *(undefined4 *)((longlong)&(this->BlockOnRange).LastProcessedTimeRange.LowerBound.Value.Ticks + 4)
       = 0;
  *(uint *)&(this->BlockOnRange).LastProcessedTimeRange.UpperBound = uVar10;
  *(undefined4 *)&(this->BlockOnRange).LastProcessedTimeRange.UpperBound.field_0x4 = uStack_5c;
  *(undefined4 *)&(this->BlockOnRange).LastProcessedTimeRange.UpperBound.Value.Ticks = 0;
  *(undefined4 *)((longlong)&(this->BlockOnRange).LastProcessedTimeRange.UpperBound.Value.Ticks + 4)
       = 0;
  (this->BlockOnRange).OnBlockSequenceIndex = iVar8;
  (this->BlockOnRange).OnBlockLoopIndexOffset = 0;
  (this->BlockOnRange).RangeIsDirty = true;
  pIVar2 = (this->Player).Object;
  if ((pIVar2 != (IMediaPlayer *)0x0) &&
     (cVar3 = (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,1), cVar3 != '\0')) {
    if (param_2) {
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0x8000000000000000;
      local_a0 = 0;
      uStack_98 = 0x8000000000000000;
      local_a8 = 0;
      *(ulonglong *)&(this->LastVideoSampleProcessedTimeRange).LowerBound =
           (ulonglong)uStack_9f << 8;
      (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.Time.Ticks = -0x8000000000000000;
      uStack_80 = 0x8000000000000000;
      uStack_88._0_4_ = (undefined4)((ulonglong)uStack_b7 << 8);
      uStack_88._4_4_ = (undefined4)(uStack_b7 >> 0x18);
      (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.SequenceIndex = 0;
      (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.LoopIndex = 0;
      *(undefined4 *)&(this->LastVideoSampleProcessedTimeRange).UpperBound = (undefined4)uStack_88;
      *(undefined4 *)&(this->LastVideoSampleProcessedTimeRange).UpperBound.field_0x4 =
           uStack_88._4_4_;
      *(undefined4 *)&(this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks = 0;
      *(undefined4 *)
       ((longlong)&(this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks + 4) =
           0x80000000;
      (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.SequenceIndex = 0;
      (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.LoopIndex = 0;
      uStack_88 = (ulonglong)uStack_b7 << 8;
    }
    else if (!param_1) {
      this_00 = &this->LastVideoSampleProcessedTimeRange;
      bVar4 = TRange<FMediaTimeStamp>::IsEmpty(this_00);
      if (!bVar4) {
        pFVar7 = TRange<FMediaTimeStamp>::GetLowerBoundValue(this_00);
        iVar8 = pFVar7->LoopIndex;
        pFVar7 = TRange<FMediaTimeStamp>::GetUpperBoundValue(this_00);
        iVar1 = pFVar7->LoopIndex;
        pFVar7 = TRange<FMediaTimeStamp>::GetLowerBoundValue(this_00);
        local_d8.SequenceIndex = 0;
        local_d8.LoopIndex = 0;
        local_d8.Time.Ticks = (pFVar7->Time).Ticks;
        TRange<FMediaTimeStamp>::SetLowerBoundValue(this_00,&local_d8);
        pFVar7 = TRange<FMediaTimeStamp>::GetUpperBoundValue(this_00);
        local_c8.LoopIndex = iVar1 - iVar8;
        local_c8.SequenceIndex = 0;
        local_c8.Time.Ticks = (pFVar7->Time).Ticks;
        TRange<FMediaTimeStamp>::SetUpperBoundValue(this_00,&local_c8);
      }
    }
    (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = -0x8000000000000000;
    (this->NextEstVideoTimeAtFrameStart).SampledAtTime = -1.0;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->TimeValueLock);
    (this->SeekTargetTime).Time.Ticks = -0x8000000000000000;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->TimeValueLock);
  }
  (this->NextVideoSampleTime).Ticks = -0x8000000000000000;
                    /* WARNING: Could not recover jumptable at 0x000146bfcc13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetActivePlaybackRange @ 146bfd3c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TRange<FTimespan> * __thiscall
FMediaPlayerFacade::GetActivePlaybackRange
          (FMediaPlayerFacade *this,TRange<FTimespan> *__return_storage_ptr__)

{
  IMediaPlayer *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  long64 lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  TRange<FTimespan> *pTVar10;
  longlong local_res8;
  undefined8 local_68;
  undefined8 local_58;
  long64 lStack_50;
  undefined1 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [32];
  
  (__return_storage_ptr__->LowerBound).Type.Value = '\x01';
  (__return_storage_ptr__->LowerBound).Value.Ticks = 0;
  (__return_storage_ptr__->UpperBound).Type.Value = '\0';
  (__return_storage_ptr__->UpperBound).Value.Ticks = 0;
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    pTVar2 = (this->Player).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x10))();
    cVar6 = (**(code **)*puVar8)(puVar8,5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (cVar6 == '\0') {
      if (((this->Player).Object == (IMediaPlayer *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TRange<FTimespan> *)(*pcVar3)();
        return pTVar10;
      }
      plVar9 = (longlong *)(**(code **)((longlong)*(this->Player).Object + 0x10))();
      (**(code **)(*plVar9 + 8))(plVar9,&local_res8);
      if (local_res8 < 1) {
        local_res8 = 0x7fffffffffffffff;
      }
      local_68 = CONCAT71(local_68._1_7_,1);
      *(undefined8 *)&__return_storage_ptr__->UpperBound = local_68;
      (__return_storage_ptr__->UpperBound).Value.Ticks = local_res8;
    }
    else {
      pTVar2 = (this->Player).SharedReferenceCount.ReferenceController;
      pIVar1 = (this->Player).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pIVar1 == (IMediaPlayer *)0x0) {
        local_58 = CONCAT71(local_58._1_7_,2);
        puVar8 = &local_58;
        lStack_50 = 0;
        local_48 = 2;
        uStack_40 = 0;
      }
      else {
        plVar9 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x10))();
        puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x68))(plVar9,local_38,1);
      }
      uVar4 = *puVar8;
      lVar5 = puVar8[1];
      local_58 = puVar8[2];
      lStack_50 = puVar8[3];
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      *(undefined8 *)&__return_storage_ptr__->LowerBound = uVar4;
      (__return_storage_ptr__->LowerBound).Value.Ticks = lVar5;
      *(undefined8 *)&__return_storage_ptr__->UpperBound = local_58;
      (__return_storage_ptr__->UpperBound).Value.Ticks = lStack_50;
    }
  }
  return __return_storage_ptr__;
}

// GetAdjustedBlockOnRange @ 146bfd570

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TRange<FMediaTimeStamp> * __thiscall
FMediaPlayerFacade::GetAdjustedBlockOnRange
          (FMediaPlayerFacade *this,TRange<FMediaTimeStamp> *__return_storage_ptr__)

{
  long64 lVar1;
  undefined7 uVar2;
  int iVar3;
  int iVar4;
  TEnumAsByte<ERangeBoundTypes::Type> TVar5;
  undefined7 uVar6;
  int iVar7;
  int iVar8;
  TRange<FMediaTimeStamp> *pTVar9;
  
  pTVar9 = FBlockOnRange::GetRange(&this->BlockOnRange);
  uVar2 = *(undefined7 *)&(pTVar9->LowerBound).field_0x1;
  lVar1 = (pTVar9->LowerBound).Value.Time.Ticks;
  iVar3 = (pTVar9->LowerBound).Value.SequenceIndex;
  iVar4 = (pTVar9->LowerBound).Value.LoopIndex;
  TVar5.Value = (pTVar9->UpperBound).Type.Value;
  uVar6 = *(undefined7 *)&(pTVar9->UpperBound).field_0x1;
  (__return_storage_ptr__->LowerBound).Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(pTVar9->LowerBound).Type.Value;
  *(undefined7 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar2;
  (__return_storage_ptr__->LowerBound).Value.Time.Ticks = lVar1;
  lVar1 = (pTVar9->UpperBound).Value.Time.Ticks;
  iVar7 = (pTVar9->UpperBound).Value.SequenceIndex;
  iVar8 = (pTVar9->UpperBound).Value.LoopIndex;
  (__return_storage_ptr__->LowerBound).Value.SequenceIndex = iVar3;
  (__return_storage_ptr__->LowerBound).Value.LoopIndex = iVar4;
  (__return_storage_ptr__->UpperBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)TVar5.Value;
  *(undefined7 *)&(__return_storage_ptr__->UpperBound).field_0x1 = uVar6;
  (__return_storage_ptr__->UpperBound).Value.Time.Ticks = lVar1;
  (__return_storage_ptr__->UpperBound).Value.SequenceIndex = iVar7;
  (__return_storage_ptr__->UpperBound).Value.LoopIndex = iVar8;
  return __return_storage_ptr__;
}

// GetAudioTrackChannels @ 146bfd640

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

uint __thiscall
FMediaPlayerFacade::GetAudioTrackChannels(FMediaPlayerFacade *this,int param_1,int param_2)

{
  IMediaPlayer *pIVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 local_28 [4];
  uint local_24;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  if (param_1 == -1) {
    param_1 = (this->TrackSelection).UserSelection[0];
  }
  if (param_2 == -1) {
    param_2 = GetTrackFormat(this,Audio,param_1);
  }
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x38))();
    cVar3 = (**(code **)*puVar4)(puVar4,param_1,param_2,local_28);
    bVar2 = true;
    if (cVar3 != '\0') goto LAB_146bfd6b4;
  }
  bVar2 = false;
LAB_146bfd6b4:
  uVar5 = 0;
  if (bVar2) {
    uVar5 = local_24;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar5;
}

// GetAudioTrackFormat @ 146bfd6f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::GetAudioTrackFormat
          (FMediaPlayerFacade *this,int param_1,int param_2,FMediaAudioTrackFormat *param_3)

{
  IMediaPlayer *pIVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if (param_1 == -1) {
    param_1 = (this->TrackSelection).UserSelection[0];
  }
  if (param_2 == -1) {
    param_2 = GetTrackFormat(this,Audio,param_1);
  }
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    puVar3 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x38))();
    cVar2 = (**(code **)*puVar3)(puVar3,param_1,param_2,param_3);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// GetAudioTrackSampleRate @ 146bfd780

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

uint __thiscall
FMediaPlayerFacade::GetAudioTrackSampleRate(FMediaPlayerFacade *this,int param_1,int param_2)

{
  IMediaPlayer *pIVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 local_28 [8];
  uint local_20;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  if (param_1 == -1) {
    param_1 = (this->TrackSelection).UserSelection[0];
  }
  if (param_2 == -1) {
    param_2 = GetTrackFormat(this,Audio,param_1);
  }
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x38))();
    cVar3 = (**(code **)*puVar4)(puVar4,param_1,param_2,local_28);
    bVar2 = true;
    if (cVar3 != '\0') goto LAB_146bfd7f4;
  }
  bVar2 = false;
LAB_146bfd7f4:
  uVar5 = 0;
  if (bVar2) {
    uVar5 = local_20;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar5;
}

// GetAudioTrackType @ 146bfd830

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
FMediaPlayerFacade::GetAudioTrackType
          (FMediaPlayerFacade *this,FString *__return_storage_ptr__,int param_1,int param_2)

{
  IMediaPlayer *pIVar1;
  bool bVar2;
  bool bVar3;
  void *_Src;
  char cVar4;
  undefined8 *puVar5;
  ForAnyElementType FVar6;
  ForAnyElementType *pFVar7;
  longlong lVar8;
  ForAnyElementType local_58;
  int local_50;
  int iStack_4c;
  ForAnyElementType local_48;
  undefined8 local_40;
  void *local_28;
  undefined8 local_20;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (param_1 == -1) {
    param_1 = (this->TrackSelection).UserSelection[0];
  }
  if (param_2 == -1) {
    param_2 = GetTrackFormat(this,Audio,param_1);
  }
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    puVar5 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x38))();
    cVar4 = (**(code **)*puVar5)(puVar5,param_1,param_2);
    _Src = local_28;
    if (cVar4 != '\0') {
      lVar8 = (longlong)(int)local_20;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = (int)local_20;
      if ((int)local_20 == 0) {
        iStack_4c = 0;
        pFVar7 = &local_58;
        bVar3 = true;
        bVar2 = false;
        FVar6.Data = (FScriptContainerElement *)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_20,0,&local_58,(int)local_20,&iStack_4c);
        memcpy(local_58.Data,_Src,lVar8 * 2);
        pFVar7 = &local_58;
        bVar3 = true;
        bVar2 = false;
        FVar6.Data = local_58.Data;
      }
      goto LAB_146bfd942;
    }
  }
  local_40 = 0;
  pFVar7 = &local_48;
  bVar3 = false;
  bVar2 = true;
  FVar6.Data = (FScriptContainerElement *)0x0;
LAB_146bfd942:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar6.Data;
  pFVar7->Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = *(int *)&pFVar7[1].Data;
  (__return_storage_ptr__->Data).ArrayMax = *(int *)((longlong)&pFVar7[1].Data + 4);
  pFVar7[1].Data = (FScriptContainerElement *)0x0;
  if (bVar2) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if ((bVar3) && (local_58.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetCurrentPlaybackTimeRange @ 146bfe040

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::GetCurrentPlaybackTimeRange
          (FMediaPlayerFacade *this,TRange<FMediaTimeStamp> *param_1,float param_2,FTimespan param_3
          ,bool param_4)

{
  int iVar1;
  int iVar2;
  FMediaAudioSampleSink *pFVar3;
  code *pcVar4;
  long64 lVar5;
  long64 lVar6;
  atomic<int> aVar7;
  undefined7 uVar8;
  TEnumAsByte<ERangeBoundTypes::Type> TVar9;
  undefined7 uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  atomic<int> aVar16;
  IMediaPlayer *pIVar17;
  longlong *plVar18;
  TRange<FMediaTimeStamp> *pTVar19;
  FMediaTimeStamp *pFVar20;
  FMediaTimeStamp *pFVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  FTimespan FVar26;
  FMediaAudioSampleSink *pFVar27;
  FMediaAudioSampleSink *pFVar28;
  TSharedPtr<IMediaPlayer,1> *pTVar29;
  double dVar30;
  double dVar31;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  LARGE_INTEGER local_res8;
  TRange<FTimespan> local_188;
  undefined1 local_168 [16];
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  FTimespan local_140;
  undefined8 uStack_138;
  longlong local_130;
  FMediaTimeStamp local_128;
  FMediaTimeStamp local_118;
  FMediaTimeStamp local_108;
  FMediaTimeStamp local_f8;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined1 auStack_e0 [16];
  undefined1 uStack_d0;
  uint7 uStack_cf;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a0;
  uint7 uStack_9f;
  longlong local_98;
  undefined1 local_88;
  undefined7 uStack_87;
  long64 lStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  uint7 uStack_6f;
  longlong local_68;
  int iStack_60;
  int iStack_5c;
  
  pTVar29 = &this->Player;
  if ((pTVar29->Object == (IMediaPlayer *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    uVar14 = (*pcVar4)();
    return (bool)uVar14;
  }
  cVar15 = (**(code **)((longlong)*pTVar29->Object + 0xc0))(pTVar29->Object,1);
  if ((cVar15 == '\0') &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Player->GetPlayerFeatureFlag(IMediaPlayer::EFeatureFlag::UsePlaybackTimingV2)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                          ,0xb10,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    uVar14 = (*pcVar4)();
    return (bool)uVar14;
  }
  pFVar3 = (FMediaAudioSampleSink *)(this->PrimaryAudioSink).WeakReferenceCount.ReferenceController;
  pFVar27 = (FMediaAudioSampleSink *)0x0;
  pFVar28 = pFVar3;
  if (pFVar3 != (FMediaAudioSampleSink *)0x0) {
    aVar7 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar27 = (FMediaAudioSampleSink *)0x0;
      pFVar28 = (FMediaAudioSampleSink *)0x0;
      if (aVar7 == (atomic<int>)0x0) goto LAB_146bfe116;
      LOCK();
      aVar16 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar13 = aVar7 == aVar16;
      if (bVar13) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar7 + 1);
        aVar16 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar16;
    } while (!bVar13);
    pFVar27 = (this->PrimaryAudioSink).Object;
    pFVar28 = pFVar3;
  }
LAB_146bfe116:
  if ((this->bHaveActiveAudio == false) || (pFVar27 == (FMediaAudioSampleSink *)0x0)) {
    bVar13 = FBlockOnRange::IsSet(&this->BlockOnRange);
    if (bVar13) {
      pTVar19 = FBlockOnRange::GetRange(&this->BlockOnRange);
      uVar8 = *(undefined7 *)&(pTVar19->LowerBound).field_0x1;
      lVar5 = (pTVar19->LowerBound).Value.Time.Ticks;
      iVar1 = (pTVar19->LowerBound).Value.SequenceIndex;
      iVar2 = (pTVar19->LowerBound).Value.LoopIndex;
      TVar9.Value = (pTVar19->UpperBound).Type.Value;
      uVar10 = *(undefined7 *)&(pTVar19->UpperBound).field_0x1;
      lVar6 = (pTVar19->UpperBound).Value.Time.Ticks;
      iVar11 = (pTVar19->UpperBound).Value.SequenceIndex;
      iVar12 = (pTVar19->UpperBound).Value.LoopIndex;
      (param_1->LowerBound).Type =
           (TEnumAsByte<ERangeBoundTypes::Type>)(pTVar19->LowerBound).Type.Value;
      *(undefined7 *)&(param_1->LowerBound).field_0x1 = uVar8;
      (param_1->LowerBound).Value.Time.Ticks = lVar5;
      (param_1->LowerBound).Value.SequenceIndex = iVar1;
      (param_1->LowerBound).Value.LoopIndex = iVar2;
      (param_1->UpperBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)TVar9.Value;
      *(undefined7 *)&(param_1->UpperBound).field_0x1 = uVar10;
      (param_1->UpperBound).Value.Time.Ticks = lVar6;
      (param_1->UpperBound).Value.SequenceIndex = iVar11;
      (param_1->UpperBound).Value.LoopIndex = iVar12;
    }
    else {
      if ((this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks == -0x8000000000000000)
      goto LAB_146bfe53a;
      if (((param_2 == 0.0) &&
          (bVar13 = TRange<FMediaTimeStamp>::IsEmpty(&this->LastVideoSampleProcessedTimeRange),
          bVar13)) && (param_2 = this->LastRate, param_2 == 0.0)) {
        param_2 = __real_3f800000;
      }
      lStack_80 = (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks;
      uStack_78._0_4_ = (this->NextEstVideoTimeAtFrameStart).TimeStamp.SequenceIndex;
      uStack_78._4_4_ = (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex;
      local_88 = 1;
      uStack_70 = 0;
      local_68 = (longlong)
                 ((float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                 (float)param_3.Ticks) + (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks;
      iStack_60 = (this->NextEstVideoTimeAtFrameStart).TimeStamp.SequenceIndex;
      iStack_5c = (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex;
      iVar1 = (this->NextEstVideoTimeAtFrameStart).TimeStamp.SequenceIndex;
      iVar2 = (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex;
      *(ulonglong *)&param_1->LowerBound = CONCAT71(uStack_87,1);
      (param_1->LowerBound).Value.Time.Ticks = lStack_80;
      (param_1->LowerBound).Value.SequenceIndex = (undefined4)uStack_78;
      (param_1->LowerBound).Value.LoopIndex = uStack_78._4_4_;
      *(ulonglong *)&param_1->UpperBound = (ulonglong)uStack_6f << 8;
      (param_1->UpperBound).Value.Time.Ticks = local_68;
      (param_1->UpperBound).Value.SequenceIndex = iVar1;
      (param_1->UpperBound).Value.LoopIndex = iVar2;
    }
LAB_146bfe52e:
    pTVar29 = &this->Player;
    bVar13 = TRange<FMediaTimeStamp>::IsEmpty(param_1);
    if (!bVar13) {
      if ((pTVar29->Object == (IMediaPlayer *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      plVar18 = (longlong *)(**(code **)((longlong)*pTVar29->Object + 0x10))();
      (**(code **)(*plVar18 + 8))(plVar18,&local_130);
      GetActivePlaybackRange(this,&local_188);
      if ((local_130 != 0) && (local_130 != 0x7fffffffffffffff)) {
        if ((local_188.UpperBound.Type.Value == '\x02') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        if ((local_188.LowerBound.Type.Value == '\x02') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        lVar25 = local_188.UpperBound.Value.Ticks - local_188.LowerBound.Value.Ticks;
        pIVar17 = TSharedPtr<IMediaPlayer,1>::operator->(pTVar29);
        plVar18 = (longlong *)(**(code **)((longlong)*pIVar17 + 0x10))(pIVar17);
        cVar15 = (**(code **)(*plVar18 + 0x38))(plVar18);
        if (cVar15 == '\0') {
          pFVar20 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
          iVar1 = pFVar20->LoopIndex;
          pFVar20 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
          iVar2 = pFVar20->SequenceIndex;
          if ((local_188.UpperBound.Type.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          FVar26.Ticks = local_188.UpperBound.Value.Ticks;
          if ((local_188.LowerBound.Type.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          pFVar20 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
          if ((pFVar20->Time).Ticks < FVar26.Ticks) {
            FVar26.Ticks = (pFVar20->Time).Ticks;
          }
          local_108.Time.Ticks = local_188.LowerBound.Value.Ticks;
          if (local_188.LowerBound.Value.Ticks < FVar26.Ticks) {
            local_108.Time.Ticks = FVar26.Ticks;
          }
          local_108.SequenceIndex = iVar2;
          local_108.LoopIndex = iVar1;
          TRange<FMediaTimeStamp>::SetLowerBoundValue(param_1,&local_108);
          pFVar20 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_1);
          iVar1 = pFVar20->LoopIndex;
          pFVar20 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_1);
          iVar2 = pFVar20->SequenceIndex;
          if ((local_188.UpperBound.Type.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          if ((local_188.LowerBound.Type.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          pFVar21 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_1);
          pFVar20 = &local_f8;
          if ((pFVar21->Time).Ticks < local_188.UpperBound.Value.Ticks) {
            local_188.UpperBound.Value.Ticks = (pFVar21->Time).Ticks;
          }
          local_f8.Time.Ticks = local_188.LowerBound.Value.Ticks;
          local_f8.SequenceIndex = iVar2;
          local_f8.LoopIndex = iVar1;
          if (local_188.LowerBound.Value.Ticks < local_188.UpperBound.Value.Ticks) {
            local_f8.Time.Ticks = local_188.UpperBound.Value.Ticks;
          }
LAB_146bfe937:
          TRange<FMediaTimeStamp>::SetUpperBoundValue(param_1,pFVar20);
        }
        else {
          pFVar20 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
          if ((local_188.LowerBound.Type.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          lVar22 = (pFVar20->Time).Ticks - local_188.LowerBound.Value.Ticks;
          lVar23 = lVar22 % lVar25;
          if (lVar22 < 0) {
            lVar23 = lVar23 + lVar25;
          }
          if ((local_188.LowerBound.Type.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          lVar23 = lVar23 + local_188.LowerBound.Value.Ticks;
          pFVar20 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_1);
          if ((local_188.LowerBound.Type.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          lVar22 = (pFVar20->Time).Ticks - local_188.LowerBound.Value.Ticks;
          lVar24 = lVar22 % lVar25;
          if (lVar22 < 0) {
            lVar24 = lVar24 + lVar25;
          }
          if ((local_188.LowerBound.Type.Value == '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          lVar24 = local_188.LowerBound.Value.Ticks + lVar24;
          if (lVar24 < lVar23) {
            pFVar20 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
            if (lVar23 != (pFVar20->Time).Ticks) {
              pFVar20 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
              iVar1 = pFVar20->LoopIndex;
              pFVar20 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
              local_128.SequenceIndex = pFVar20->SequenceIndex;
              local_128.Time.Ticks = lVar23;
              local_128.LoopIndex = iVar1 + -1;
              TRange<FMediaTimeStamp>::SetLowerBoundValue(param_1,&local_128);
            }
            pFVar20 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_1);
            if (lVar24 != (pFVar20->Time).Ticks) {
              pFVar20 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_1);
              iVar1 = pFVar20->LoopIndex;
              pFVar21 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_1);
              pFVar20 = &local_118;
              local_118.SequenceIndex = pFVar21->SequenceIndex;
              local_118.Time.Ticks = lVar24;
              local_118.LoopIndex = iVar1 + 1;
              goto LAB_146bfe937;
            }
          }
        }
      }
LAB_146bfe93f:
      bVar13 = TRange<FMediaTimeStamp>::IsEmpty(param_1);
      bVar13 = !bVar13;
      goto LAB_146bfe94d;
    }
  }
  else {
    (**(code **)(*(longlong *)&pFVar27->field_0x0 + 0x30))(pFVar27,&local_158);
    if (local_158 != -0x8000000000000000) {
      local_168._8_8_ = 0;
      QueryPerformanceCounter(&local_res8);
      dVar31 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000;
      if (param_4) {
        auVar34._0_8_ = (double)param_2;
        auVar34._8_8_ = 0;
        auVar33._8_8_ = 0;
        auVar33._0_8_ =
             (dVar31 - local_148) * auVar34._0_8_ * __real_416312d000000000 +
             __real_3fe0000000000000;
        auVar33 = roundpd(auVar34,auVar33,1);
        local_158 = (longlong)auVar33._0_8_ + local_158;
LAB_146bfe398:
        local_168._8_4_ = uStack_150;
        local_168._12_4_ = uStack_14c;
        local_168._0_8_ = local_158;
        auVar33 = local_168;
        local_168._0_4_ = (undefined4)local_158;
        local_168._4_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
        uVar36 = local_168._0_4_;
        uVar37 = local_168._4_4_;
        uVar38 = uStack_150;
        uVar39 = uStack_14c;
        local_168 = auVar33;
      }
      else {
        bVar13 = IsInGameThread();
        if (((!bVar13) && (bVar13 = IsInSlateThread(), !bVar13)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread() || IsInSlateThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                                ,0xb3d,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        dVar30 = (double)(**(code **)((longlong)*this->MediaModule + 0xb8))();
        if (((0.0 <= dVar31 - dVar30) && (dVar31 - dVar30 <= __real_3fd3333333333333)) &&
           ((0.0 <= dVar31 - local_148 && (dVar31 - local_148 <= __real_3fd0000000000000)))) {
          dVar31 = (double)(**(code **)((longlong)*this->MediaModule + 0xb8))();
          auVar32._0_8_ =
               (dVar31 - local_148) * (double)param_2 * __real_416312d000000000 +
               __real_3fe0000000000000;
          auVar32._8_8_ = extraout_XMM0_Qb;
          auVar35._8_8_ = 0;
          auVar35._0_8_ = auVar32._0_8_;
          auVar33 = roundpd(auVar32,auVar35,1);
          local_158 = local_158 + (longlong)auVar33._0_8_;
          goto LAB_146bfe398;
        }
        local_168._8_4_ = uStack_150;
        local_168._0_8_ = local_158;
        local_168._12_4_ = uStack_14c;
        uVar36 = (undefined4)local_158;
        uVar37 = (undefined4)((ulonglong)local_158 >> 0x20);
        uVar38 = uStack_150;
        uVar39 = uStack_14c;
      }
      if (((param_2 == 0.0) &&
          (bVar13 = TRange<FMediaTimeStamp>::IsEmpty(&this->LastVideoSampleProcessedTimeRange),
          bVar13)) && (param_2 = this->LastRate, param_2 == 0.0)) {
        param_2 = __real_3f800000;
      }
      fVar40 = (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      local_b8 = 1;
      uStack_a0 = 0;
      *(ulonglong *)&param_1->LowerBound = CONCAT71(uStack_b7,1);
      (param_1->LowerBound).Value.Time.Ticks = CONCAT44(uVar37,uVar36);
      local_98 = (longlong)(fVar40 * (float)param_3.Ticks) + local_158;
      (param_1->LowerBound).Value.SequenceIndex = uVar38;
      (param_1->LowerBound).Value.LoopIndex = uVar39;
      *(ulonglong *)&param_1->UpperBound = (ulonglong)uStack_9f << 8;
      (param_1->UpperBound).Value.Time.Ticks = local_98;
      (param_1->UpperBound).Value.SequenceIndex = uVar38;
      (param_1->UpperBound).Value.LoopIndex = uVar39;
      uStack_b0 = uVar36;
      uStack_ac = uVar37;
      goto LAB_146bfe52e;
    }
    if ((((!param_4) && (param_2 == 0.0)) && (bVar13 = IsSeeking(this), !bVar13)) &&
       (bVar13 = TRange<FMediaTimeStamp>::IsEmpty(&this->LastVideoSampleProcessedTimeRange), bVar13)
       ) {
      local_140.Ticks = -0x8000000000000000;
      uStack_138 = 0;
      pIVar17 = TSharedPtr<IMediaPlayer,1>::operator->(pTVar29);
      plVar18 = (longlong *)(**(code **)((longlong)*pIVar17 + 0x28))(pIVar17);
      cVar15 = (**(code **)(*plVar18 + 0x70))(plVar18,&local_140);
      if (cVar15 == '\0') goto LAB_146bfe53a;
      auStack_e0._8_8_ = uStack_138;
      auStack_e0._0_8_ = local_140.Ticks;
      uStack_bc = (undefined4)((ulonglong)uStack_138 >> 0x20);
      local_e8 = 1;
      uStack_d0 = 0;
      local_c8 = local_140.Ticks + param_3.Ticks;
      uStack_c0 = (undefined4)uStack_138;
      *(ulonglong *)&param_1->LowerBound = CONCAT71(uStack_e7,1);
      (param_1->LowerBound).Value.Time.Ticks = local_140.Ticks;
      (param_1->LowerBound).Value.SequenceIndex = (undefined4)uStack_138;
      (param_1->LowerBound).Value.LoopIndex = uStack_138._4_4_;
      *(ulonglong *)&param_1->UpperBound = (ulonglong)uStack_cf << 8;
      (param_1->UpperBound).Value.Time.Ticks = local_c8;
      (param_1->UpperBound).Value.SequenceIndex = (undefined4)uStack_138;
      (param_1->UpperBound).Value.LoopIndex = uStack_138._4_4_;
      goto LAB_146bfe93f;
    }
  }
LAB_146bfe53a:
  bVar13 = false;
LAB_146bfe94d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar28);
  return bVar13;
}

// GetDisplayTimeStamp @ 146bfe990

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMediaTimeStamp * __thiscall
FMediaPlayerFacade::GetDisplayTimeStamp
          (FMediaPlayerFacade *this,FMediaTimeStamp *__return_storage_ptr__)

{
  GetTimeStampInternal(this,__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// GetDuration @ 146bfe9b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __thiscall FMediaPlayerFacade::GetDuration(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  longlong *plVar3;
  undefined8 *in_RDX;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    *in_RDX = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (FTimespan)(long64)in_RDX;
}

// GetGuid @ 146bfebb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FGuid * __thiscall FMediaPlayerFacade::GetGuid(FMediaPlayerFacade *this)

{
  return &this->PlayerGuid;
}

// GetInfo @ 146bfebc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
FMediaPlayerFacade::GetInfo(FMediaPlayerFacade *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetLastAudioRenderedSampleTime @ 146bfec20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __thiscall FMediaPlayerFacade::GetLastAudioRenderedSampleTime(FMediaPlayerFacade *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  long64 *in_RDX;
  
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *in_RDX = (this->LastAudioRenderedSampleTime).TimeStamp.Time.Ticks;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (FTimespan)(long64)in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetLastProcessedVideoSampleTimeRange @ 146bfec80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TRange<FMediaTimeStamp> * __thiscall
FMediaPlayerFacade::GetLastProcessedVideoSampleTimeRange
          (FMediaPlayerFacade *this,TRange<FMediaTimeStamp> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined7 uVar7;
  long64 lVar8;
  TEnumAsByte<ERangeBoundTypes::Type> TVar9;
  undefined3 uVar10;
  
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar7 = *(undefined7 *)&(this->LastVideoSampleProcessedTimeRange).LowerBound.field_0x1;
    lVar8 = (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.Time.Ticks;
    iVar1 = (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.SequenceIndex;
    iVar2 = (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.LoopIndex;
    TVar9.Value = (this->LastVideoSampleProcessedTimeRange).UpperBound.Type.Value;
    uVar10 = *(undefined3 *)&(this->LastVideoSampleProcessedTimeRange).UpperBound.field_0x1;
    uVar3 = *(undefined4 *)&(this->LastVideoSampleProcessedTimeRange).UpperBound.field_0x4;
    (__return_storage_ptr__->LowerBound).Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)
         (this->LastVideoSampleProcessedTimeRange).LowerBound.Type.Value;
    *(undefined7 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar7;
    (__return_storage_ptr__->LowerBound).Value.Time.Ticks = lVar8;
    lVar8 = (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks;
    uVar4 = *(undefined4 *)
             ((longlong)&(this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks + 4);
    iVar5 = (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.SequenceIndex;
    iVar6 = (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.LoopIndex;
    (__return_storage_ptr__->LowerBound).Value.SequenceIndex = iVar1;
    (__return_storage_ptr__->LowerBound).Value.LoopIndex = iVar2;
    (__return_storage_ptr__->UpperBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)TVar9.Value;
    *(undefined3 *)&(__return_storage_ptr__->UpperBound).field_0x1 = uVar10;
    *(undefined4 *)&(__return_storage_ptr__->UpperBound).field_0x4 = uVar3;
    *(int *)&(__return_storage_ptr__->UpperBound).Value.Time.Ticks = (int)lVar8;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->UpperBound).Value.Time.Ticks + 4) = uVar4;
    (__return_storage_ptr__->UpperBound).Value.SequenceIndex = iVar5;
    (__return_storage_ptr__->UpperBound).Value.LoopIndex = iVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetMediaInfo @ 146bfeda0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FVariant * __thiscall
FMediaPlayerFacade::GetMediaInfo
          (FMediaPlayerFacade *this,FVariant *__return_storage_ptr__,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    __return_storage_ptr__->Type = Empty;
    (__return_storage_ptr__->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Value).ArrayNum = 0;
    (__return_storage_ptr__->Value).ArrayMax = 0;
  }
  else {
    (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetMediaMetadata @ 146bfee00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TSharedPtr<TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>,1>
* __thiscall
FMediaPlayerFacade::GetMediaMetadata
          (FMediaPlayerFacade *this,
          TSharedPtr<TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>,1>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    __return_storage_ptr__->Object =
         (TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>
          *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetMediaName @ 146bfee60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FText * __thiscall
FMediaPlayerFacade::GetMediaName(FMediaPlayerFacade *this,FText *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  ITextData *pIVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar3 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetNumTrackFormats @ 146bff000

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall
FMediaPlayerFacade::GetNumTrackFormats(FMediaPlayerFacade *this,EMediaTrackType param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  int iVar3;
  longlong *plVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    iVar3 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
    iVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,param_1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return iVar3;
}

// GetNumTracks @ 146bff070

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall FMediaPlayerFacade::GetNumTracks(FMediaPlayerFacade *this,EMediaTrackType param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  longlong *plVar3;
  int iVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    iVar4 = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
    iVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return iVar4;
}

// GetPlaybackTimeRange @ 146bff120

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TRange<FTimespan> * __thiscall
FMediaPlayerFacade::GetPlaybackTimeRange
          (FMediaPlayerFacade *this,TRange<FTimespan> *__return_storage_ptr__,
          EMediaTimeRangeType param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  long64 lVar3;
  undefined8 uVar4;
  long64 lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined8 uStack_10;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    local_28._0_1_ = 2;
    uStack_20 = 0;
    uStack_10 = 0;
    puVar7 = &local_28;
    local_18 = 2;
  }
  else {
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x68))(plVar6,&local_28,param_1);
  }
  lVar3 = puVar7[1];
  uVar4 = puVar7[2];
  lVar5 = puVar7[3];
  *(undefined8 *)&__return_storage_ptr__->LowerBound = *puVar7;
  (__return_storage_ptr__->LowerBound).Value.Ticks = lVar3;
  *(undefined8 *)&__return_storage_ptr__->UpperBound = uVar4;
  (__return_storage_ptr__->UpperBound).Value.Ticks = lVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetPlayerFactoryForUrl @ 146bff1d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IMediaPlayerFactory * __thiscall
FMediaPlayerFacade::GetPlayerFactoryForUrl
          (FMediaPlayerFacade *this,FString *param_1,IMediaOptions *param_2)

{
  FScriptContainerElement *pFVar1;
  IMediaModule *pIVar2;
  IMediaPlayer *pIVar3;
  code *pcVar4;
  IMediaModule IVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FName *pFVar9;
  undefined8 uVar10;
  IMediaPlayerFactory *pIVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  undefined8 *puVar18;
  bool bVar19;
  uint local_res8 [2];
  undefined8 *local_res20;
  undefined1 local_f8;
  undefined1 local_f7 [7];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined8 *local_d8;
  FString local_d0;
  longlong *local_c0;
  FString local_b8;
  longlong *local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  undefined1 local_48 [16];
  
  local_e0 = this->DesiredPlayerName;
  if (local_e0 == (FName)0x0) {
    if (param_2 == (IMediaOptions *)0x0) {
      local_d8 = (undefined8 *)0x0;
      local_e0.ComparisonIndex.Value = 0;
      local_e0.Number = 0;
    }
    else {
      pFVar9 = (FName *)(**(code **)*param_2)(param_2,local_a0);
      local_e0 = *pFVar9;
    }
  }
  pIVar2 = this->MediaModule;
  if (pIVar2 == (IMediaModule *)0x0) {
    if (1 < (byte)LogMediaUtils._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
      return (IMediaPlayerFactory *)0x0;
    }
  }
  else {
    pIVar3 = (this->Player).Object;
    if (pIVar3 != (IMediaPlayer *)0x0) {
      pcVar4 = *(code **)((longlong)*pIVar2 + 0x70);
      uVar10 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,local_48);
      pIVar11 = (IMediaPlayerFactory *)(*pcVar4)(pIVar2,uVar10);
      pFVar9 = (FName *)(**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,local_98);
      if (local_e0 == *pFVar9) {
        return pIVar11;
      }
    }
    IVar5 = *this->MediaModule;
    if (local_e0 != (FName)0x0) {
      pIVar11 = (IMediaPlayerFactory *)
                (**(code **)((longlong)IVar5 + 0x78))(this->MediaModule,&local_e0);
      if ((pIVar11 == (IMediaPlayerFactory *)0x0) && (1 < (byte)LogMediaUtils._0_1_)) {
        ::FName::ToString(&local_e0,&local_78);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      return pIVar11;
    }
    plVar12 = (longlong *)(**(code **)((longlong)IVar5 + 0x68))();
    local_a8 = plVar12;
    if ((int)plVar12[1] != 0) {
      local_f0.Data = (FScriptContainerElement *)0x0;
      local_e8 = 0;
      ::FString::FString(&local_d0,"Windows");
      plVar15 = (longlong *)*plVar12;
      lVar6 = plVar12[1];
      local_c0 = plVar15 + (int)lVar6;
LAB_146bff3d0:
      do {
        plVar13 = local_c0;
        if ((int)plVar12[1] != (int)lVar6) {
          local_res8[0] = local_res8[0] & 0xffffff00;
          `TCheckedPointerIterator<IMediaPlayerFactory_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (plVar15 == plVar13) {
          AlgoImpl::
          IntroSortInternal<_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::FCandidate,int,FIdentityFunctor,TDereferenceWrapper<_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::FCandidate,_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::<lambda_1>_>_>
                    ((FCandidate *)local_f0.Data,(int)local_e8,local_res8[0]._0_1_,
                     (<lambda_1> *)&local_res20);
          if ((int)local_e8 == 0) {
            if (1 < (byte)LogMediaUtils._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
            }
            local_res8[0] = *(uint *)(plVar12 + 1);
            uVar16 = (ulonglong)(int)local_res8[0];
            puVar14 = (undefined8 *)*plVar12;
            local_d8 = puVar14 + uVar16;
            while( true ) {
              puVar18 = local_d8;
              local_res20 = puVar14;
              if ((int)plVar12[1] != (int)uVar16) {
                `TCheckedPointerIterator<IMediaPlayerFactory_*_const,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_f8);
              }
              if (puVar14 == puVar18) break;
              plVar12 = (longlong *)*puVar14;
              local_c0 = plVar12;
              plVar15 = (longlong *)(**(code **)(*plVar12 + 0x28))(plVar12);
              puVar14 = (undefined8 *)*plVar15;
              puVar18 = puVar14 + (longlong)(int)plVar15[1] * 2;
              uVar10 = local_d0.Data._8_8_;
              for (; puVar14 != puVar18; puVar14 = puVar14 + 2) {
                iVar7 = *(int *)(puVar14 + 1);
                if (iVar7 == (int)uVar10) {
                  if (1 < iVar7) {
                    iVar7 = FGenericPlatformStricmp::Stricmp
                                      ((wchar_t *)*puVar14,
                                       (wchar_t *)local_d0.Data.AllocatorInstance.Data);
                    bVar19 = iVar7 == 0;
                    uVar10 = local_d0.Data._8_8_;
                    goto LAB_146bff5fa;
                  }
LAB_146bff673:
                  if ((byte)LogMediaUtils._0_1_ < 5) goto LAB_146bff76d;
                  pFVar9 = (FName *)(**(code **)(*plVar12 + 0x18))(plVar12,local_88);
                  ::FName::ToString(pFVar9,&local_68);
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
                  FVar17.Data = local_68.Data.AllocatorInstance.Data;
                  goto LAB_146bff763;
                }
                bVar19 = iVar7 + (int)uVar10 == 1;
LAB_146bff5fa:
                if (bVar19) goto LAB_146bff673;
              }
              if (4 < (byte)LogMediaUtils._0_1_) {
                plVar12 = (longlong *)(**(code **)(*plVar12 + 0x28))(plVar12);
                bVar19 = true;
                local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_b8.Data.ArrayNum = 0;
                local_b8.Data.ArrayMax = 0;
                lVar6 = plVar12[1];
                puVar14 = (undefined8 *)*plVar12;
                puVar18 = puVar14 + (longlong)(int)lVar6 * 2;
                while( true ) {
                  if ((int)plVar12[1] != (int)lVar6) {
                    `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_f7);
                  }
                  if (puVar14 == puVar18) break;
                  if (bVar19) {
                    bVar19 = false;
                  }
                  else {
                    ::FString::AppendChars(&local_b8,L", ",2);
                  }
                  iVar7 = *(int *)(puVar14 + 1) + -1;
                  if (*(int *)(puVar14 + 1) == 0) {
                    iVar7 = 0;
                  }
                  ::FString::AppendChars(&local_b8,(wchar_t *)*puVar14,iVar7);
                  puVar14 = puVar14 + 2;
                }
                pFVar9 = (FName *)(**(code **)(*local_c0 + 0x18))(local_c0,local_80);
                ::FName::ToString(pFVar9,&local_58);
                UE::Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)&PTR_u____s__only_avai_151420df8,
                           (FLogCategoryBase *)&LogMediaUtils);
                FVar17.Data = local_b8.Data.AllocatorInstance.Data;
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                  FVar17.Data = local_b8.Data.AllocatorInstance.Data;
                }
LAB_146bff763:
                if (FVar17.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar17.Data);
                }
              }
LAB_146bff76d:
              uVar16 = (ulonglong)local_res8[0];
              puVar14 = local_res20 + 1;
              plVar12 = local_a8;
            }
            pIVar11 = (IMediaPlayerFactory *)0x0;
          }
          else {
            if (((int)local_e8 < 1) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar4 = (code *)swi(3);
              pIVar11 = (IMediaPlayerFactory *)(*pcVar4)();
              return pIVar11;
            }
            pIVar11 = *(IMediaPlayerFactory **)(local_f0.Data + 8);
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if ((FCandidate *)local_f0.Data != (FCandidate *)0x0) {
            FMemory::Free(local_f0.Data);
          }
          return pIVar11;
        }
        plVar12 = (longlong *)*plVar15;
        plVar13 = (longlong *)(**(code **)(*plVar12 + 0x28))(plVar12);
        puVar14 = (undefined8 *)*plVar13;
        puVar18 = puVar14 + (longlong)(int)plVar13[1] * 2;
        uVar10 = local_d0.Data._8_8_;
        if (puVar14 != puVar18) {
          do {
            iVar7 = *(int *)(puVar14 + 1);
            if (iVar7 == (int)uVar10) {
              if (1 < iVar7) {
                iVar7 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)*puVar14,
                                   (wchar_t *)local_d0.Data.AllocatorInstance.Data);
                bVar19 = iVar7 == 0;
                uVar10 = local_d0.Data._8_8_;
                goto LAB_146bff438;
              }
LAB_146bff459:
              iVar7 = (**(code **)(*plVar12 + 0x38))(plVar12,param_1,param_2,0,0);
              if (0 < iVar7) {
                iVar8 = (int)local_e8;
                if ((int)local_e8 == local_e8._4_4_) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x818,&local_f0,(int *)((longlong)&local_e8 + 4));
                }
                local_e8 = CONCAT44(local_e8._4_4_,iVar8 + 1);
                pFVar1 = local_f0.Data + (longlong)iVar8 * 0x18;
                *(undefined8 *)(pFVar1 + 0x10) = 0;
                *(undefined8 *)&pFVar1->field_0x0 = 0;
                *(undefined8 *)(pFVar1 + 8) = 0;
                puVar14 = (undefined8 *)(**(code **)(*plVar12 + 0x18))(plVar12,local_90);
                *(undefined8 *)&pFVar1->field_0x0 = *puVar14;
                *(longlong **)(pFVar1 + 8) = plVar12;
                *(int *)(pFVar1 + 0x10) = iVar7;
              }
              goto LAB_146bff4d5;
            }
            bVar19 = iVar7 + (int)uVar10 == 1;
LAB_146bff438:
            if (bVar19) goto LAB_146bff459;
            puVar14 = puVar14 + 2;
          } while (puVar14 != puVar18);
          plVar15 = plVar15 + 1;
          plVar12 = local_a8;
          goto LAB_146bff3d0;
        }
LAB_146bff4d5:
        plVar15 = plVar15 + 1;
        plVar12 = local_a8;
      } while( true );
    }
    if (1 < (byte)LogMediaUtils._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
    }
  }
  return (IMediaPlayerFactory *)0x0;
}

// GetPlayerName @ 146bff7e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FName __thiscall FMediaPlayerFacade::GetPlayerName(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  IMediaModule *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FName in_RDX;
  undefined1 local_18 [16];
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    *(undefined8 *)in_RDX = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return in_RDX;
  }
  pIVar3 = this->MediaModule;
  pcVar4 = *(code **)((longlong)*pIVar3 + 0x70);
  uVar5 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,local_18);
  plVar6 = (longlong *)(*pcVar4)(pIVar3,uVar5);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return in_RDX;
}

// GetRate @ 146bfff10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall FMediaPlayerFacade::GetRate(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  longlong *plVar3;
  float fVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    fVar4 = 0.0;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    fVar4 = (float)(**(code **)(*plVar3 + 0x10))(plVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return fVar4;
}

// GetSeekTarget @ 146c00d70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMediaTimeStamp * __thiscall
FMediaPlayerFacade::GetSeekTarget(FMediaPlayerFacade *this,FMediaTimeStamp *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = *(undefined4 *)((longlong)&(this->SeekTargetTime).Time.Ticks + 4);
    iVar2 = (this->SeekTargetTime).SequenceIndex;
    iVar3 = (this->SeekTargetTime).LoopIndex;
    *(int *)&(__return_storage_ptr__->Time).Ticks = (int)(this->SeekTargetTime).Time.Ticks;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Time).Ticks + 4) = uVar1;
    __return_storage_ptr__->SequenceIndex = iVar2;
    __return_storage_ptr__->LoopIndex = iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSelectedTrack @ 146c00dd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall
FMediaPlayerFacade::GetSelectedTrack(FMediaPlayerFacade *this,EMediaTrackType param_1)

{
  return (this->TrackSelection).UserSelection[(int)param_1];
}

// GetStats @ 146c00df0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
FMediaPlayerFacade::GetStats(FMediaPlayerFacade *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSupportedRates @ 146c00e50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TRangeSet<float> * __thiscall
FMediaPlayerFacade::GetSupportedRates
          (FMediaPlayerFacade *this,TRangeSet<float> *__return_storage_ptr__,bool param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  longlong *plVar3;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    (__return_storage_ptr__->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Ranges).ArrayNum = 0;
    (__return_storage_ptr__->Ranges).ArrayMax = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    (**(code **)(*plVar3 + 0x28))(plVar3,__return_storage_ptr__,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetTime @ 146c00ed0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __thiscall FMediaPlayerFacade::GetTime(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  FTimespan FVar6;
  longlong *in_RDX;
  undefined1 local_res8 [8];
  FMediaTimeStamp local_18;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    *in_RDX = 0;
  }
  else {
    cVar3 = (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,1);
    if (cVar3 == '\0') {
      plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x30))(plVar4,local_res8);
      lVar5 = *plVar4 - (this->TimeDelay).Ticks;
      if (lVar5 < 0) {
        lVar5 = 0;
      }
      *in_RDX = lVar5;
    }
    else {
      GetTimeStampInternal(this,&local_18,false);
      FVar6.Ticks = 0;
      if (local_18.Time.Ticks != -0x8000000000000000) {
        FVar6.Ticks = local_18.Time.Ticks;
      }
      *in_RDX = FVar6.Ticks;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (FTimespan)(long64)in_RDX;
}

// GetTimeStamp @ 146c00fb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMediaTimeStamp * __thiscall
FMediaPlayerFacade::GetTimeStamp(FMediaPlayerFacade *this,FMediaTimeStamp *__return_storage_ptr__)

{
  GetTimeStampInternal(this,__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// GetTimeStampInternal @ 146c00fd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMediaTimeStamp * __thiscall
FMediaPlayerFacade::GetTimeStampInternal
          (FMediaPlayerFacade *this,FMediaTimeStamp *__return_storage_ptr__,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMediaTimeStamp *pFVar1;
  IMediaPlayer *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  FTimespan FVar9;
  
  pIVar2 = (this->Player).Object;
  pTVar3 = (this->Player).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    (__return_storage_ptr__->Time).Ticks = -0x8000000000000000;
    __return_storage_ptr__->SequenceIndex = 0;
    __return_storage_ptr__->LoopIndex = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    return __return_storage_ptr__;
  }
  cVar7 = (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,1);
  if (cVar7 == '\0') {
    FVar9 = GetTime(this);
                    /* WARNING: Load size is inaccurate */
    (__return_storage_ptr__->Time).Ticks = *FVar9.Ticks;
    __return_storage_ptr__->SequenceIndex = 0;
    __return_storage_ptr__->LoopIndex = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    return __return_storage_ptr__;
  }
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1) {
    bVar8 = IsSeeking(this);
    if (bVar8) {
      iVar5 = (this->SeekTargetTime).SequenceIndex;
      iVar6 = (this->SeekTargetTime).LoopIndex;
      (__return_storage_ptr__->Time).Ticks = (this->SeekTargetTime).Time.Ticks;
      __return_storage_ptr__->SequenceIndex = iVar5;
      __return_storage_ptr__->LoopIndex = iVar6;
      goto LAB_146c01121;
    }
  }
  if ((((this->VideoSampleSinks).Sinks.ArrayNum == 0) ||
      ((this->TrackSelection).UserSelection[6] == -1)) || (this->VideoSampleAvailability == 0)) {
    if ((((this->PrimaryAudioSink).Object == (FMediaAudioSampleSink *)0x0) ||
        (pTVar4 = (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController,
        pTVar4 == (TReferenceControllerBase<1> *)0x0)) ||
       (((int)pTVar4->SharedReferenceCount < 1 || ((this->TrackSelection).UserSelection[0] == -1))))
    {
      (__return_storage_ptr__->Time).Ticks = -0x8000000000000000;
      __return_storage_ptr__->SequenceIndex = 0;
      __return_storage_ptr__->LoopIndex = 0;
    }
    else {
      iVar5 = (this->CurrentFrameAudioTimeStamp).SequenceIndex;
      iVar6 = (this->CurrentFrameAudioTimeStamp).LoopIndex;
      (__return_storage_ptr__->Time).Ticks = (this->CurrentFrameAudioTimeStamp).Time.Ticks;
      __return_storage_ptr__->SequenceIndex = iVar5;
      __return_storage_ptr__->LoopIndex = iVar6;
    }
  }
  else {
    pFVar1 = (FMediaTimeStamp *)(&this->TimeValueLock + 3) + (ulonglong)param_1 + 2;
    iVar5 = pFVar1->SequenceIndex;
    iVar6 = pFVar1->LoopIndex;
    (__return_storage_ptr__->Time).Ticks = (pFVar1->Time).Ticks;
    __return_storage_ptr__->SequenceIndex = iVar5;
    __return_storage_ptr__->LoopIndex = iVar6;
  }
LAB_146c01121:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetTrackDisplayName @ 146c01220

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FText * __thiscall
FMediaPlayerFacade::GetTrackDisplayName
          (FMediaPlayerFacade *this,FText *__return_storage_ptr__,EMediaTrackType param_1,
          int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  ITextData *pIVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar3 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
  }
  else {
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
    (**(code **)(*plVar5 + 0x20))(plVar5,__return_storage_ptr__,param_1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetTrackFormat @ 146c012d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall
FMediaPlayerFacade::GetTrackFormat(FMediaPlayerFacade *this,EMediaTrackType param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  int iVar3;
  longlong *plVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    iVar3 = -1;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
    iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,param_1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return iVar3;
}

// GetTrackLanguage @ 146c01340

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
FMediaPlayerFacade::GetTrackLanguage
          (FMediaPlayerFacade *this,FString *__return_storage_ptr__,EMediaTrackType param_1,
          int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  longlong *plVar3;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
    (**(code **)(*plVar3 + 0x30))(plVar3,__return_storage_ptr__,param_1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetUnpausedRate @ 146c013d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall FMediaPlayerFacade::GetUnpausedRate(FMediaPlayerFacade *this)

{
  if (this->CurrentRate == 0.0) {
    return this->LastRate;
  }
  return this->CurrentRate;
}

// GetVideoTimecode @ 146c01520

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TOptional<FTimecode> * __thiscall
FMediaPlayerFacade::GetVideoTimecode
          (FMediaPlayerFacade *this,TOptional<FTimecode> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined3 uVar5;
  
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    __return_storage_ptr__->bIsSet = false;
    bVar1 = (this->MostRecentlyDeliveredVideoFrameTimecode).bIsSet;
    __return_storage_ptr__->bIsSet = bVar1;
    if (bVar1 != false) {
      iVar2 = (this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.Minutes;
      iVar3 = (this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.Seconds;
      iVar4 = (this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.Frames;
      (__return_storage_ptr__->TypedValue).Hours =
           (this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.Hours;
      (__return_storage_ptr__->TypedValue).Minutes = iVar2;
      (__return_storage_ptr__->TypedValue).Seconds = iVar3;
      (__return_storage_ptr__->TypedValue).Frames = iVar4;
      bVar1 = (this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.bDropFrameFormat;
      uVar5 = *(undefined3 *)&(this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.field_0x15;
      (__return_storage_ptr__->TypedValue).Subframe =
           (this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.Subframe;
      (__return_storage_ptr__->TypedValue).bDropFrameFormat = bVar1;
      *(undefined3 *)&(__return_storage_ptr__->TypedValue).field_0x15 = uVar5;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetVideoTrackAspectRatio @ 146c015a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall
FMediaPlayerFacade::GetVideoTrackAspectRatio(FMediaPlayerFacade *this,int param_1,int param_2)

{
  IMediaPlayer *pIVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  int local_48;
  int local_44;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  void *local_28;
  undefined8 local_20;
  
  local_3c = 2;
  local_38 = 0;
  local_34 = 2;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  if (param_1 == -1) {
    param_1 = (this->TrackSelection).UserSelection[6];
  }
  if (param_2 == -1) {
    param_2 = GetTrackFormat(this,Video,param_1);
  }
  pIVar1 = (this->Player).Object;
  fVar4 = 0.0;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x38))();
    cVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1,param_2,&local_48);
    fVar4 = 0.0;
    if ((cVar2 != '\0') && (local_44 != 0)) {
      fVar4 = (float)local_48 / (float)local_44;
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return fVar4;
}

// GetVideoTrackDimensions @ 146c01680

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TIntPoint<int> __thiscall
FMediaPlayerFacade::GetVideoTrackDimensions(FMediaPlayerFacade *this,int param_1,int param_2)

{
  IMediaPlayer *pIVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  TIntPoint<int>_u_0 TVar5;
  undefined4 in_register_00000014;
  TIntPoint<int>_u_0 TVar6;
  int in_R9D;
  TIntPoint<int>_u_0 local_38;
  undefined1 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  void *local_18;
  undefined8 local_10;
  
  TVar6._s_0.Y = in_register_00000014;
  TVar6._s_0.X = param_1;
  bVar2 = false;
  local_2c = 2;
  local_28 = 0;
  local_24 = 2;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (param_2 == -1) {
    param_2 = (this->TrackSelection).UserSelection[6];
  }
  if (in_R9D == -1) {
    in_R9D = GetTrackFormat(this,Video,param_2);
  }
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x38))();
    cVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,param_2,in_R9D,&local_38);
    if (cVar3 != '\0') {
      bVar2 = true;
    }
  }
  TVar5 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  if (bVar2) {
    TVar5 = local_38;
  }
  *(TIntPoint<int>_u_0 *)TVar6 = (TIntPoint<int>_u_0_s_0)TVar5;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return (TIntPoint<int>)TVar6;
}

// GetVideoTrackFormat @ 146c01760

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::GetVideoTrackFormat
          (FMediaPlayerFacade *this,int param_1,int param_2,FMediaVideoTrackFormat *param_3)

{
  IMediaPlayer *pIVar1;
  char cVar2;
  longlong *plVar3;
  
  if (param_1 == -1) {
    param_1 = (this->TrackSelection).UserSelection[6];
  }
  if (param_2 == -1) {
    param_2 = GetTrackFormat(this,Video,param_1);
  }
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x38))();
    cVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1,param_2,param_3);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// GetVideoTrackFrameRate @ 146c017f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall
FMediaPlayerFacade::GetVideoTrackFrameRate(FMediaPlayerFacade *this,int param_1,int param_2)

{
  IMediaPlayer *pIVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 local_48 [8];
  float local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  void *local_28;
  undefined8 local_20;
  
  local_3c = 2;
  local_38 = 0;
  local_34 = 2;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  if (param_1 == -1) {
    param_1 = (this->TrackSelection).UserSelection[6];
  }
  if (param_2 == -1) {
    param_2 = GetTrackFormat(this,Video,param_1);
  }
  pIVar1 = (this->Player).Object;
  fVar4 = 0.0;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x38))();
    cVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1,param_2,local_48);
    if (cVar2 != '\0') {
      fVar4 = local_40;
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return fVar4;
}

// GetVideoTrackFrameRates @ 146c018c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TRange<float> * __thiscall
FMediaPlayerFacade::GetVideoTrackFrameRates
          (FMediaPlayerFacade *this,TRange<float> *__return_storage_ptr__,int param_1,int param_2)

{
  IMediaPlayer *pIVar1;
  char cVar2;
  longlong *plVar3;
  uint local_res8;
  uint local_res10;
  TRangeBound<float> local_58;
  TRangeBound<float> TStack_50;
  undefined1 local_48 [12];
  undefined4 local_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  void *local_28;
  undefined8 local_20;
  
  local_3c = CONCAT31(local_3c._1_3_,2);
  fStack_38 = 0.0;
  uStack_34 = CONCAT31(uStack_34._1_3_,2);
  fStack_30 = 0.0;
  local_28 = (void *)0x0;
  local_20 = 0;
  if (param_1 == -1) {
    param_1 = (this->TrackSelection).UserSelection[6];
  }
  if (param_2 == -1) {
    param_2 = GetTrackFormat(this,Video,param_1);
  }
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x38))();
    cVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1,param_2,local_48);
    if (cVar2 != '\0') {
      local_58.Value = fStack_38;
      local_58._0_4_ = local_3c;
      TStack_50.Value = fStack_30;
      TStack_50._0_4_ = uStack_34;
      goto LAB_146c0198f;
    }
  }
  local_res8 = local_res8 & 0xffffff00;
  local_res10 = local_res10 & 0xffffff00;
  local_58.Value = 0.0;
  local_58._0_4_ = local_res8;
  TStack_50.Value = 0.0;
  TStack_50._0_4_ = local_res10;
LAB_146c0198f:
  __return_storage_ptr__->LowerBound = local_58;
  __return_storage_ptr__->UpperBound = TStack_50;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetVideoTrackType @ 146c019d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
FMediaPlayerFacade::GetVideoTrackType
          (FMediaPlayerFacade *this,FString *__return_storage_ptr__,int param_1,int param_2)

{
  IMediaPlayer *pIVar1;
  bool bVar2;
  bool bVar3;
  void *_Src;
  char cVar4;
  longlong *plVar5;
  ForAnyElementType FVar6;
  ForAnyElementType *pFVar7;
  longlong lVar8;
  ForAnyElementType local_68;
  int local_60;
  int iStack_5c;
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  void *local_28;
  undefined8 local_20;
  
  local_3c = 2;
  local_38 = 0;
  local_34 = 2;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  if (param_1 == -1) {
    param_1 = (this->TrackSelection).UserSelection[6];
  }
  if (param_2 == -1) {
    param_2 = GetTrackFormat(this,Video,param_1);
  }
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x38))();
    cVar4 = (**(code **)(*plVar5 + 0x40))(plVar5,param_1,param_2);
    _Src = local_28;
    if (cVar4 != '\0') {
      lVar8 = (longlong)(int)local_20;
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = (int)local_20;
      if ((int)local_20 == 0) {
        iStack_5c = 0;
        pFVar7 = &local_68;
        bVar3 = true;
        bVar2 = false;
        FVar6.Data = (FScriptContainerElement *)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_20,0,&local_68,(int)local_20,&iStack_5c);
        memcpy(local_68.Data,_Src,lVar8 * 2);
        pFVar7 = &local_68;
        bVar3 = true;
        bVar2 = false;
        FVar6.Data = local_68.Data;
      }
      goto LAB_146c01aee;
    }
  }
  local_50 = 0;
  pFVar7 = &local_58;
  bVar3 = false;
  bVar2 = true;
  FVar6.Data = (FScriptContainerElement *)0x0;
LAB_146c01aee:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar6.Data;
  pFVar7->Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = *(int *)&pFVar7[1].Data;
  (__return_storage_ptr__->Data).ArrayMax = *(int *)((longlong)&pFVar7[1].Data + 4);
  pFVar7[1].Data = (FScriptContainerElement *)0x0;
  if (bVar2) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  if ((bVar3) && (local_68.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetViewField @ 146c01b70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::GetViewField(FMediaPlayerFacade *this,float *param_1,float *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x48))(pIVar2);
    uVar3 = (**(code **)*puVar4)(puVar4,param_1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar3;
}

// GetViewOrientation @ 146c01bf0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::GetViewOrientation(FMediaPlayerFacade *this,TQuat<double> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x48))(pIVar2);
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar3;
}

// HasError @ 146c01c60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::HasError(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    uVar5 = this->bDidRecentPlayerHaveError;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar5 = iVar3 == 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar5;
}

// HaveAudioPlayback @ 146c01cd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::HaveAudioPlayback(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (((((this->PrimaryAudioSink).Object != (FMediaAudioSampleSink *)0x0) &&
       (pTVar1 = (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController,
       pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) &&
     ((this->TrackSelection).UserSelection[0] != -1)) {
    return true;
  }
  return false;
}

// HaveVideoPlayback @ 146c01d10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::HaveVideoPlayback(FMediaPlayerFacade *this)

{
  if (((this->VideoSampleSinks).Sinks.ArrayNum != 0) &&
     ((this->TrackSelection).UserSelection[6] != -1)) {
    return true;
  }
  return false;
}

// IsBuffering @ 146c02010

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::IsBuffering(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  byte bVar3;
  longlong *plVar4;
  bool bVar5;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    bVar5 = false;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
    bVar5 = (bool)(bVar3 & 1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar5;
}

// IsClosed @ 146c02070

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::IsClosed(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    bVar5 = false;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    bVar5 = iVar3 == 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar5;
}

// IsConnecting @ 146c020d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::IsConnecting(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    bVar5 = false;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
    bVar5 = (bool)((byte)(uVar3 >> 1) & 1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar5;
}

// IsLooping @ 146c02210

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::IsLooping(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar3;
}

// IsPaused @ 146c02270

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::IsPaused(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    bVar5 = false;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    bVar5 = iVar3 == 2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar5;
}

// IsPlaying @ 146c022e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::IsPlaying(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    bVar5 = false;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    bVar5 = iVar3 == 3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar5;
}

// IsPreparing @ 146c02350

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::IsPreparing(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    bVar5 = false;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    bVar5 = iVar3 == 4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar5;
}

// IsReady @ 146c023c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::IsReady(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 != (IMediaPlayer *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    if (((uVar3 & 0xfffffffa) != 0) || (uVar3 == 5)) {
      bVar5 = true;
      goto LAB_146c0240a;
    }
  }
  bVar5 = false;
LAB_146c0240a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar5;
}

// IsSeeking @ 146c02430

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::IsSeeking(FMediaPlayerFacade *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar1 = (this->SeekTargetTime).Time.Ticks;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return lVar1 != -0x8000000000000000;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsVideoSampleStillGood @ 146c02520

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::IsVideoSampleStillGood
          (FMediaPlayerFacade *this,TRange<FMediaTimeStamp> *param_1,
          TRange<FMediaTimeStamp> *param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  long64 lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  FMediaTimeStamp *pFVar11;
  IMediaPlayer *pIVar12;
  longlong *plVar13;
  TRange<FMediaTimeStamp> *pTVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong local_288;
  TRange<FMediaTimeStamp> local_280;
  TRange<FMediaTimeStamp> local_250;
  TRange<FMediaTimeStamp> local_220;
  long64 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  long64 lStack_1d8;
  undefined8 local_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  longlong local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  long64 lStack_1a8;
  undefined8 local_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  long64 local_190;
  undefined8 uStack_188;
  TRange<FMediaTimeStamp> local_180;
  TEnumAsByte<ERangeBoundTypes::Type> local_150;
  undefined7 uStack_14f;
  longlong lStack_148;
  undefined8 local_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  long64 local_130;
  int iStack_128;
  int iStack_124;
  TRange<FTimespan> local_120;
  FMediaTimeStamp local_100;
  FMediaTimeStamp local_f0;
  FMediaTimeStamp local_e0;
  FMediaTimeStamp local_d0;
  TRange<FMediaTimeStamp> local_c0;
  TRange<FMediaTimeStamp> local_90;
  TRange<FMediaTimeStamp> local_60;
  
  bVar8 = TRange<FMediaTimeStamp>::IsEmpty(param_2);
  if (bVar8) {
    return false;
  }
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar15 = (this->SeekTargetTime).Time.Ticks;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (lVar15 != -0x8000000000000000) {
    return false;
  }
  bVar8 = TRange<FMediaTimeStamp>::IsEmpty(param_1);
  if (bVar8) {
    return false;
  }
  pFVar11 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
  iVar17 = pFVar11->SequenceIndex;
  iVar1 = pFVar11->LoopIndex;
  pFVar11 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_1);
  if ((CONCAT44(iVar17,iVar1) != CONCAT44(pFVar11->SequenceIndex,pFVar11->LoopIndex)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastSampleTimeRange.GetLowerBoundValue().GetIndexValue() == LastSampleTimeRange.GetUpperBoundValue().GetIndexValue()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0xc11,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  pFVar11 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_2);
  iVar17 = pFVar11->SequenceIndex;
  pFVar11 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_2);
  if (iVar17 != pFVar11->SequenceIndex) {
    return false;
  }
  pIVar12 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
  plVar13 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x10))(pIVar12);
  (**(code **)(*plVar13 + 8))(plVar13,&local_288);
  pFVar11 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_2);
  iVar17 = pFVar11->LoopIndex;
  pFVar11 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_2);
  iVar1 = pFVar11->LoopIndex;
  if (iVar17 == iVar1) {
    pFVar11 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_2);
    lVar2 = (pFVar11->Time).Ticks;
    pFVar11 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_2);
    local_1b0 = 1;
    local_1a0 = 0;
    uStack_198 = 0;
    local_250.LowerBound.Value.Time.Ticks = (pFVar11->Time).Ticks;
    local_250.UpperBound._0_4_ = (int)uStack_197 << 8;
    local_250.LowerBound._1_7_ = uStack_1af;
    local_250.LowerBound.Type.Value = '\x01';
    uStack_188 = 0;
    local_250.LowerBound.Value.SequenceIndex = 0;
    local_250.LowerBound.Value.LoopIndex = 0;
    local_250.UpperBound._4_4_ = SUB74((uint7)uStack_197 >> 0x18,0);
    local_250.UpperBound.Value.SequenceIndex = 0;
    local_250.UpperBound.Value.LoopIndex = 0;
    local_250.UpperBound.Value.Time.Ticks = lVar2;
    lStack_1a8 = local_250.LowerBound.Value.Time.Ticks;
    local_190 = lVar2;
    pIVar12 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
    plVar13 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x10))(pIVar12);
    cVar10 = (**(code **)(*plVar13 + 0x38))(plVar13);
    if (((cVar10 == '\0') && (local_288 != 0)) && (local_288 != 0x7fffffffffffffff)) {
      GetActivePlaybackRange(this,&local_120);
      if ((local_120.UpperBound.Type.Value == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      if ((local_120.LowerBound.Type.Value == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      local_180.LowerBound.Value.Time.Ticks = local_120.LowerBound.Value.Ticks;
      local_180.LowerBound.Type.Value = '\x01';
      local_180.LowerBound.Value.SequenceIndex = 0;
      local_180.LowerBound.Value.LoopIndex = 0;
      local_180.UpperBound.Type.Value = '\0';
      local_180.UpperBound.Value.Time.Ticks = local_120.UpperBound.Value.Ticks;
      local_180.UpperBound.Value.SequenceIndex = 0;
      local_180.UpperBound.Value.LoopIndex = 0;
      pTVar14 = TRange<FMediaTimeStamp>::Intersection(&local_c0,&local_250,&local_180);
      local_250.LowerBound.Type.Value = (pTVar14->LowerBound).Type.Value;
      local_250.LowerBound._1_7_ = *(undefined7 *)&(pTVar14->LowerBound).field_0x1;
      local_250.LowerBound.Value.Time.Ticks = (pTVar14->LowerBound).Value.Time.Ticks;
      uVar4 = (pTVar14->LowerBound).Value.SequenceIndex;
      uVar5 = (pTVar14->LowerBound).Value.LoopIndex;
      local_250.UpperBound._0_4_ = SUB84(*(undefined8 *)&pTVar14->UpperBound,0);
      local_250.UpperBound._4_4_ = SUB84((ulonglong)*(undefined8 *)&pTVar14->UpperBound >> 0x20,0);
      local_250.UpperBound.Value.SequenceIndex = (pTVar14->UpperBound).Value.SequenceIndex;
      local_250.UpperBound.Value.LoopIndex = (pTVar14->UpperBound).Value.LoopIndex;
      local_250.LowerBound.Value.SequenceIndex = uVar4;
      local_250.LowerBound.Value.LoopIndex = uVar5;
      local_250.UpperBound.Value.Time.Ticks = (pTVar14->UpperBound).Value.Time.Ticks;
    }
  }
  else {
    pIVar12 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
    plVar13 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x10))(pIVar12);
    cVar10 = (**(code **)(*plVar13 + 0x38))(plVar13);
    if ((cVar10 == '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Player->GetControls().IsLooping()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                           ,0xc25,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    if (((local_288 == 0) || (local_288 == 0x7fffffffffffffff)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsDurationValidAndFinite(Duration)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                           ,0xc26,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    if ((iVar1 - iVar17 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("LoopIdxDiff > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                           ,0xc2b,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    auVar18._0_8_ = (double)local_288;
    auVar18._8_8_ = 0;
    auVar19._0_8_ = (double)(iVar1 - iVar17) * auVar18._0_8_ + __real_3fe0000000000000;
    auVar19._8_8_ = 0;
    auVar18 = roundpd(auVar18,auVar19,1);
    pFVar11 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_2);
    if (param_3) {
      local_1f0 = (pFVar11->Time).Ticks;
      uStack_1e8._0_4_ = 0;
      uStack_1e8._4_4_ = 0;
      local_150.Value = '\x01';
      pFVar11 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_2);
      local_140 = 0;
      uStack_138 = 0;
      local_250.UpperBound._0_4_ = (int)uStack_137 << 8;
      local_250.LowerBound.Value.Time.Ticks = (pFVar11->Time).Ticks - (longlong)auVar18._0_8_;
      local_250.LowerBound._1_7_ = uStack_14f;
      local_250.LowerBound.Type.Value = local_150.Value;
      local_130 = local_1f0;
      iStack_128 = (int)uStack_1e8;
      iStack_124 = uStack_1e8._4_4_;
      local_250.LowerBound.Value.SequenceIndex = 0;
      local_250.LowerBound.Value.LoopIndex = 0;
      local_250.UpperBound._4_4_ = SUB74((uint7)uStack_137 >> 0x18,0);
      local_250.UpperBound.Value.Time.Ticks = local_1f0;
      local_250.UpperBound.Value.SequenceIndex = (int)uStack_1e8;
      local_250.UpperBound.Value.LoopIndex = uStack_1e8._4_4_;
      iVar17 = iVar1;
      lStack_148 = local_250.LowerBound.Value.Time.Ticks;
    }
    else {
      lVar15 = (longlong)auVar18._0_8_ + (pFVar11->Time).Ticks;
      pFVar11 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_2);
      local_1e0 = 1;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_250.LowerBound.Value.Time.Ticks = (pFVar11->Time).Ticks;
      local_250.UpperBound._0_4_ = (int)uStack_1c7 << 8;
      local_250.LowerBound._1_7_ = uStack_1df;
      local_250.LowerBound.Type.Value = '\x01';
      uStack_1b8 = 0;
      local_250.LowerBound.Value.SequenceIndex = 0;
      local_250.LowerBound.Value.LoopIndex = 0;
      local_250.UpperBound._4_4_ = SUB74((uint7)uStack_1c7 >> 0x18,0);
      local_250.UpperBound.Value.SequenceIndex = 0;
      local_250.UpperBound.Value.LoopIndex = 0;
      local_250.UpperBound.Value.Time.Ticks = lVar15;
      lStack_1d8 = local_250.LowerBound.Value.Time.Ticks;
      local_1c0 = lVar15;
    }
  }
  lVar15 = 0;
  pFVar11 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
  if ((local_288 != 0) && (local_288 != 0x7fffffffffffffff)) {
    lVar15 = (longlong)((double)(pFVar11->LoopIndex - iVar17) * (double)local_288);
  }
  pFVar11 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_1);
  lVar16 = (pFVar11->Time).Ticks + lVar15;
  pFVar11 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_1);
  local_280.LowerBound.Value.Time.Ticks = (pFVar11->Time).Ticks + lVar15;
  local_280.LowerBound.Type.Value = '\x01';
  local_280.LowerBound.Value.SequenceIndex = 0;
  local_280.LowerBound.Value.LoopIndex = 0;
  local_280.UpperBound.Type.Value = '\0';
  local_280.UpperBound.Value.SequenceIndex = 0;
  local_280.UpperBound.Value.LoopIndex = 0;
  local_280.UpperBound.Value.Time.Ticks = lVar16;
  if (!param_3) {
    if ((local_250.UpperBound.Type.Value == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    if ((local_280.LowerBound.Type.Value == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    bVar8 = FMediaTimeStamp::operator<=(&local_250.UpperBound.Value,&local_280.LowerBound.Value);
    goto LAB_146c02b04;
  }
  if ((local_250.LowerBound.Type.Value == '\x02') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  if ((local_280.UpperBound.Type.Value == '\x02') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  if (local_250.LowerBound.Value.SequenceIndex < local_280.UpperBound.Value.SequenceIndex) {
LAB_146c02b02:
    bVar8 = false;
  }
  else {
    if (local_250.LowerBound.Value.SequenceIndex == local_280.UpperBound.Value.SequenceIndex) {
      if ((local_250.LowerBound.Value.LoopIndex < local_280.UpperBound.Value.LoopIndex) ||
         ((local_250.LowerBound.Value.LoopIndex == local_280.UpperBound.Value.LoopIndex &&
          (local_250.LowerBound.Value.Time.Ticks < local_280.UpperBound.Value.Time.Ticks))))
      goto LAB_146c02b02;
    }
    bVar8 = true;
  }
LAB_146c02b04:
  if (bVar8 != false) {
    return true;
  }
  bVar8 = TRange<FMediaTimeStamp>::Overlaps(&local_280,&local_250);
  if (!bVar8) {
    return false;
  }
  if (param_3) {
    if (local_280.LowerBound.Type.Value == '\x02') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      if ((local_280.LowerBound.Type.Value == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
    }
    pFVar11 = TRange<FMediaTimeStamp>::Size<FMediaTimeStamp>(&local_280,&local_f0);
    local_220.LowerBound.Value.Time.Ticks =
         local_280.LowerBound.Value.Time.Ticks - (pFVar11->Time).Ticks;
    local_220.LowerBound.Value.SequenceIndex = local_280.LowerBound.Value.SequenceIndex;
    local_220.LowerBound.Value.LoopIndex = local_280.LowerBound.Value.LoopIndex;
    local_220.UpperBound.Value.Time.Ticks = local_280.LowerBound.Value.Time.Ticks;
    local_220.UpperBound.Value.SequenceIndex = local_280.LowerBound.Value.SequenceIndex;
    local_220.UpperBound.Value.LoopIndex = local_280.LowerBound.Value.LoopIndex;
  }
  else {
    if ((local_280.UpperBound.Type.Value == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    pFVar11 = TRange<FMediaTimeStamp>::Size<FMediaTimeStamp>(&local_280,&local_100);
    uVar6 = local_280.UpperBound.Value._8_8_;
    local_220.UpperBound.Value.Time.Ticks =
         local_280.UpperBound.Value.Time.Ticks + (pFVar11->Time).Ticks;
    if ((local_280.UpperBound.Type.Value == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    uVar7 = local_280.UpperBound.Value._8_8_;
    local_220.LowerBound.Value.Time.Ticks = local_280.UpperBound.Value.Time.Ticks;
    local_220.LowerBound.Value.SequenceIndex = local_280.UpperBound.Value.SequenceIndex;
    local_220.LowerBound.Value.LoopIndex = local_280.UpperBound.Value.LoopIndex;
    local_280.UpperBound.Value.SequenceIndex = (int)uVar6;
    local_280.UpperBound.Value.LoopIndex = SUB84(uVar6,4);
    local_220.UpperBound.Value.SequenceIndex = local_280.UpperBound.Value.SequenceIndex;
    local_220.UpperBound.Value.LoopIndex = local_280.UpperBound.Value.LoopIndex;
    local_280.UpperBound.Value._8_8_ = uVar7;
  }
  local_220.UpperBound.Type.Value = '\0';
  local_220.LowerBound.Type.Value = '\x01';
  pTVar14 = TRange<FMediaTimeStamp>::Intersection(&local_90,&local_250,&local_280);
  pFVar11 = TRange<FMediaTimeStamp>::Size<FMediaTimeStamp>(pTVar14,&local_e0);
  lVar15 = (pFVar11->Time).Ticks;
  pTVar14 = TRange<FMediaTimeStamp>::Intersection(&local_60,&local_250,&local_220);
  pFVar11 = TRange<FMediaTimeStamp>::Size<FMediaTimeStamp>(pTVar14,&local_d0);
  return (pFVar11->Time).Ticks <= lVar15;
}

// MonitorAudioEnablement @ 146c02ce0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::MonitorAudioEnablement(FMediaPlayerFacade *this)

{
  bool bVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  
  bVar1 = this->bHaveActiveAudio;
  if (((((this->PrimaryAudioSink).Object == (FMediaAudioSampleSink *)0x0) ||
       (pTVar2 = (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController,
       pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1)) ||
     ((this->TrackSelection).UserSelection[0] == -1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bHaveActiveAudio = bVar3;
  if ((bVar1 != false) && (bVar3 == false)) {
    (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = -0x8000000000000000;
    (this->NextEstVideoTimeAtFrameStart).SampledAtTime = -1.0;
  }
  return;
}

// NotifyLifetimeManagerDelegate_PlayerClosed @ 146c02db0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::NotifyLifetimeManagerDelegate_PlayerClosed(FMediaPlayerFacade *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  IControl *local_18;
  TReferenceControllerBase<1> *local_10;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInSlateThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0x3bf,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if ((this->LifecycleManagerDelegateControl).Object != (IControl *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0x98))();
    if (plVar4 != (longlong *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x20);
      local_18 = (this->LifecycleManagerDelegateControl).Object;
      local_10 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar1)(plVar4,&local_18);
      return true;
    }
  }
  return false;
}

// NotifyLifetimeManagerDelegate_PlayerCreateFailed @ 146c02e60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::NotifyLifetimeManagerDelegate_PlayerCreateFailed(FMediaPlayerFacade *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  IControl *local_18;
  TReferenceControllerBase<1> *local_10;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInSlateThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0x3b0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if ((this->LifecycleManagerDelegateControl).Object != (IControl *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0x98))();
    if (plVar4 != (longlong *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x18);
      local_18 = (this->LifecycleManagerDelegateControl).Object;
      local_10 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar1)(plVar4,&local_18);
      return true;
    }
  }
  return false;
}

// NotifyLifetimeManagerDelegate_PlayerCreated @ 146c02f10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::NotifyLifetimeManagerDelegate_PlayerCreated(FMediaPlayerFacade *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  IControl *local_18;
  TReferenceControllerBase<1> *local_10;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInSlateThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0x3a0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if ((this->Player).Object == (IMediaPlayer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Player.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                       ,0x3a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->LifecycleManagerDelegateControl).Object != (IControl *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0x98))();
    if (plVar4 != (longlong *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x10);
      local_18 = (this->LifecycleManagerDelegateControl).Object;
      local_10 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar1)(plVar4,&local_18);
      return true;
    }
  }
  return false;
}

// NotifyLifetimeManagerDelegate_PlayerDestroyed @ 146c02ff0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::NotifyLifetimeManagerDelegate_PlayerDestroyed(FMediaPlayerFacade *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  IControl *local_18;
  TReferenceControllerBase<1> *local_10;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInSlateThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0x3ce,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if ((this->LifecycleManagerDelegateControl).Object != (IControl *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0x98))();
    if (plVar4 != (longlong *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      local_18 = (this->LifecycleManagerDelegateControl).Object;
      local_10 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar1)(plVar4,&local_18);
      return true;
    }
  }
  return false;
}

// NotifyLifetimeManagerDelegate_PlayerOpen @ 146c030a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::NotifyLifetimeManagerDelegate_PlayerOpen
          (FMediaPlayerFacade *this,
          TSharedPtr<IMediaPlayerLifecycleManagerDelegate::IControl,1> *param_1,FString *param_2,
          IMediaOptions *param_3,FMediaPlayerOptions *param_4,IMediaPlayerFactory *param_5,
          bool param_6,uint param_7,ulong64 param_8)

{
  int *piVar1;
  atomic<int> aVar2;
  int iVar3;
  FMediaPlayerFacade *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  IMediaPlayer IVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  TSharedRef<FMediaPlayerFacade,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  IMediaPlayer IVar14;
  undefined8 *puVar15;
  UObject *pUVar16;
  TReferenceControllerBase<1> *pTVar17;
  atomic<int> *paVar18;
  IMediaPlayer IVar19;
  TReferenceControllerBase<1> *pTVar20;
  TSharedPtr<IMediaPlayerLifecycleManagerDelegate::IControl,1> local_b8;
  UObject *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  TReferenceControllerBase<1> *local_80;
  IMediaPlayer local_78;
  TReferenceControllerBase<1> *local_70;
  IControl *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedRef<FMediaPlayerFacade,1> local_58;
  
  pTVar20 = (TReferenceControllerBase<1> *)0x0;
  local_a8 = (UObject *)((ulonglong)local_a8 & 0xffffffff00000000);
  bVar9 = IsInGameThread();
  if (((!bVar9) && (bVar9 = IsInSlateThread(), !bVar9)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0x386,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  local_a0 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0x98))();
  if (local_a0 == (longlong *)0x0) {
    return false;
  }
  pTVar12 = TSharedFromThis<FMediaPlayerFacade,1>::AsShared
                      ((TSharedFromThis<FMediaPlayerFacade,1> *)&this->_padding_,&local_58);
  pTVar13 = ::operator_new(0x48);
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pTVar17 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar13 = pTVar20;
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMediaPlayerLifecycleManagerDelegateControl___00_SharedPointerInternals__6B_
    ;
    pTVar17 = (pTVar12->SharedReferenceCount).ReferenceController;
    pFVar4 = pTVar12->Object;
    if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
      paVar18 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar18 = &pTVar17->WeakReferenceCount;
      LOCK();
      *paVar18 = (atomic<int>)((int)*paVar18 + 1);
      UNLOCK();
    }
    pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[1]._padding_ = (longlong)&___7FMediaPlayerLifecycleManagerDelegateControl__6B_;
    pTVar13[2]._padding_ = 0;
    *(FMediaPlayerFacade **)&pTVar13[2].SharedReferenceCount = pFVar4;
    pTVar13[3]._padding_ = (longlong)pTVar17;
    if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
      pTVar13[3].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTVar13[3].WeakReferenceCount = (atomic<int>)0xffffffff;
      *(undefined1 *)&pTVar13[4]._padding_ = 0;
    }
    else {
      LOCK();
      *paVar18 = (atomic<int>)((int)*paVar18 + 1);
      UNLOCK();
      pTVar13[3].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTVar13[3].WeakReferenceCount = (atomic<int>)0xffffffff;
      *(undefined1 *)&pTVar13[4]._padding_ = 0;
      LOCK();
      aVar2 = *paVar18;
      *paVar18 = (atomic<int>)((int)*paVar18 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
      }
    }
    pTVar17 = pTVar13 + 1;
    if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      goto LAB_146c03292;
    }
  }
  lVar5._0_4_ = pTVar17->SharedReferenceCount;
  lVar5._4_4_ = pTVar17->WeakReferenceCount;
  if (((lVar5 == 0) || (pTVar17[1]._padding_ == 0)) || (*(int *)(pTVar17[1]._padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar17->SharedReferenceCount = pTVar17;
    if (pTVar13 != (TReferenceControllerBase<1> *)pTVar17[1]._padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)pTVar17[1]._padding_;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      pTVar17[1]._padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_146c03292:
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  IVar19 = (IMediaPlayer)0x0;
  local_b8.Object = (IControl *)pTVar17;
  local_b8.SharedReferenceCount.ReferenceController = pTVar13;
  if (param_1 != &local_b8) {
    param_1->Object = (IControl *)pTVar17;
    local_b8.Object = (IControl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_b8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (param_1->Object != (IControl *)0x0) {
    param_1->Object[5] = (IControl)param_8;
    IVar14 = (IMediaPlayer)::operator_new(0x118);
    if (IVar14 != (IMediaPlayer)0x0) {
      if (param_6) {
        local_90 = (TReferenceControllerBase<1> *)0x0;
        puVar15 = &local_98;
        pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000002;
      }
      else {
        IVar19 = (IMediaPlayer)(this->Player).Object;
        local_80 = (this->Player).SharedReferenceCount.ReferenceController;
        if (local_80 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
          UNLOCK();
        }
        puVar15 = &local_88;
        pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000001;
      }
      IVar7 = *(IMediaPlayer *)(puVar15 + 1);
      puVar15[1] = 0;
      *puVar15 = 0;
      *(undefined ***)IVar14 = &___7FMediaPlayerLifecycleManagerDelegateOpenRequest__6B_;
      ::FString::FString((FString *)((longlong)IVar14 + 8),param_2);
      *(IMediaOptions **)((longlong)IVar14 + 0x18) = param_3;
      if (param_3 == (IMediaOptions *)0x0) {
        pUVar16 = (UObject *)0x0;
      }
      else {
        pUVar16 = (UObject *)(**(code **)((longlong)*param_3 + 0x40))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar16);
      }
      *(IMediaPlayer *)((longlong)IVar14 + 0x20) = (IMediaPlayer)0x0;
      local_a8 = pUVar16;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar16);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)IVar14 + 0x20),(FObjectPtr)&local_a8);
      *(undefined1 *)((longlong)IVar14 + 0xf0) = 0;
      *(IMediaPlayerFactory **)((longlong)IVar14 + 0xf8) = param_5;
      *(IMediaPlayer *)((longlong)IVar14 + 0x100) = IVar19;
      *(IMediaPlayer *)((longlong)IVar14 + 0x108) = IVar7;
      if (IVar7 != (IMediaPlayer)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)IVar7 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)IVar7 + 8) + 1);
        UNLOCK();
      }
      *(bool *)((longlong)IVar14 + 0x110) = param_6;
      *(uint *)((longlong)IVar14 + 0x114) = param_7;
      if (param_4 != (FMediaPlayerOptions *)0x0) {
        TOptional<FMediaPlayerOptions>::operator=
                  ((TOptional<FMediaPlayerOptions> *)((longlong)IVar14 + 0x28),param_4);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)IVar7);
      IVar19 = IVar14;
    }
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
    pTVar17 = ::operator_new(0x18);
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      pTVar17->SharedReferenceCount = (atomic<int>)0x1;
      pTVar17->WeakReferenceCount = (atomic<int>)0x1;
      pTVar17->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFMediaPlayerLifecycleManagerDelegateOpenRequest__U__DefaultDeleter_VFMediaPlayerLifecycleManagerDelegateOpenRequest___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar17[1]._padding_ = (longlong)IVar19;
      pTVar13 = pTVar17;
    }
    if (((ulonglong)pTVar20 & 2) != 0) {
      pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar20 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    }
    if (((ulonglong)pTVar20 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    }
    if (IVar19 != (IMediaPlayer)0x0) {
      pcVar8 = *(code **)(*local_a0 + 8);
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = param_1->Object;
      local_60 = (param_1->SharedReferenceCount).ReferenceController;
      if (local_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78 = IVar19;
      local_70 = pTVar13;
      cVar11 = (*pcVar8)(local_a0,&local_68,&local_78);
      if (cVar11 != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        return true;
      }
    }
    *(undefined1 *)(param_1->Object + 6) = 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  return false;
}

// NotifyLifetimeManagerDelegate_PlayerResourcesReleased @ 146c03530

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::NotifyLifetimeManagerDelegate_PlayerResourcesReleased
          (FMediaPlayerFacade *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  IControl *local_18;
  TReferenceControllerBase<1> *local_10;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInSlateThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0x3dd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if ((this->LifecycleManagerDelegateControl).Object != (IControl *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0x98))();
    if (plVar4 != (longlong *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x30);
      local_18 = (this->LifecycleManagerDelegateControl).Object;
      local_10 = (this->LifecycleManagerDelegateControl).SharedReferenceCount.ReferenceController;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar1)(plVar4,&local_18,param_1);
      return true;
    }
  }
  return false;
}

// Open @ 146c037b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::Open
          (FMediaPlayerFacade *this,FString *param_1,IMediaOptions *param_2,
          FMediaPlayerOptions *param_3)

{
  int *piVar1;
  TSharedPtr<IMediaPlayer,1> *this_00;
  IMediaModule *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeOpen> FVar13;
  IMediaPlayerFactory *pIVar14;
  IMediaPlayer *pIVar15;
  undefined8 uVar16;
  IMediaPlayerFactory *pIVar17;
  ulong64 uVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar19;
  FName FVar20;
  FColor_u_0 local_res8 [2];
  FString *local_res10;
  IMediaOptions *local_res18;
  FMediaPlayerOptions *local_res20;
  LARGE_INTEGER local_c8;
  FName local_c0;
  FName local_b8;
  TSharedPtr<IMediaPlayerLifecycleManagerDelegate::IControl,1> local_a8;
  FStatMessage local_98;
  TSharedPtr<IMediaPlayer,1> local_88;
  FName local_78 [2];
  TSharedPtr<IMediaPlayerLifecycleManagerDelegate::IControl,1> local_68;
  undefined1 local_58 [24];
  
  pIVar17 = (IMediaPlayerFactory *)0x0;
  FVar13 = StatPtr_STAT_MediaUtils_FacadeOpen;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (StatPtr_STAT_MediaUtils_FacadeOpen ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeOpen>)0x0) {
    pFVar12 = ::FName::FName(local_78,"STAT_MediaUtils_FacadeOpen");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeOpen>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeOpen,*pFVar12,
                        L"MediaUtils MediaPlayerFacade Open","STATGROUP_Media","STATCAT_Advanced",
                        L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar4 = false;
  bVar6 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar11 = FVar20.Number;
  if ((FVar19.Value == 0) && (uVar11 == 0)) {
LAB_146c03904:
    bVar5 = false;
    FVar20 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar19.Value;
        local_c0.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                   ,0x3ff);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c03904;
    local_c8.s.LowPart = FVar19.Value;
    local_c8.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar5 = true;
  }
  if ((this->ActivePlayerOptions).bIsSet != false) {
    FMediaPlayerOptions::~FMediaPlayerOptions(&(this->ActivePlayerOptions).TypedValue);
    (this->ActivePlayerOptions).bIsSet = false;
  }
  Close(this);
  if (1 < (param_1->Data).ArrayNum) {
    if (this->MediaModule == (IMediaModule *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MediaModule",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0x40f,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
    }
    pIVar14 = GetPlayerFactoryForUrl(this,param_1,param_2);
    if (pIVar14 != (IMediaPlayerFactory *)0x0) {
      this_00 = &this->Player;
      if (this_00->Object != (IMediaPlayer *)0x0) {
        pIVar2 = this->MediaModule;
        pcVar3 = *(code **)((longlong)*pIVar2 + 0x70);
        pIVar15 = TSharedPtr<IMediaPlayer,1>::operator->(this_00);
        uVar16 = (**(code **)((longlong)*pIVar15 + 0x20))(pIVar15,local_58);
        pIVar17 = (IMediaPlayerFactory *)(*pcVar3)(pIVar2,uVar16);
      }
      if ((this_00->Object == (IMediaPlayer *)0x0) || (pIVar14 != pIVar17)) {
        bVar8 = true;
        uVar18 = (**(code **)((longlong)*this->MediaModule + 0xa0))();
        uVar11 = 3;
      }
      else {
        bVar8 = false;
        uVar18 = this->PlayerInstanceID;
        uVar11 = (**(code **)((longlong)*this_00->Object + 0xd0))();
      }
      local_a8.Object = (IControl *)0x0;
      local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      bVar10 = NotifyLifetimeManagerDelegate_PlayerOpen
                         (this,&local_a8,local_res10,local_res18,local_res20,pIVar14,bVar8,uVar11,
                          uVar18);
      FVar7.ReferenceController = local_a8.SharedReferenceCount.ReferenceController;
      if (bVar10) {
        bVar8 = true;
      }
      else {
        local_88.Object = this_00->Object;
        local_88.SharedReferenceCount.ReferenceController =
             (this->Player).SharedReferenceCount.ReferenceController;
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = local_a8.Object;
        local_68.SharedReferenceCount.ReferenceController =
             local_a8.SharedReferenceCount.ReferenceController;
        if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar8 = ContinueOpen(this,&local_68,local_res10,local_res18,local_res20,pIVar14,&local_88,
                             bVar8,uVar18);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
      goto LAB_146c03b01;
    }
  }
  bVar8 = false;
LAB_146c03b01:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_98.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_98);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return bVar8;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar8;
}

// PostSampleProcessingTimeHandling @ 146c048a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::PostSampleProcessingTimeHandling(FMediaPlayerFacade *this,FTimespan param_1)

{
  float fVar1;
  FMediaPlayerFacade *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FTimespan FVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  IMediaPlayer *pIVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  longlong local_res8;
  TRange<FTimespan> local_58 [2];
  
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Player.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0xaa3,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar1 = this->CurrentRate;
  if (this->bHaveActiveAudio != false) {
    return;
  }
  pFVar2 = (this->BlockOnRange).Facade;
  pTVar3 = (pFVar2->Player).SharedReferenceCount.ReferenceController;
  pIVar9 = (pFVar2->Player).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->BlockOnRange).RangeIsDirty == false) {
    bVar6 = TRange<FMediaTimeStamp>::IsEmpty(&(this->BlockOnRange).BlockOnRange);
    bVar6 = !bVar6;
  }
  else {
    bVar6 = TRange<FTimespan>::IsEmpty(&(this->BlockOnRange).CurrentTimeRange);
    if ((!bVar6) && (pIVar9 != (IMediaPlayer *)0x0)) {
      puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar9 + 0x10))(pIVar9);
      cVar7 = (**(code **)*puVar8)(puVar8,0);
      if (cVar7 != '\0') {
        bVar6 = true;
        goto LAB_146c0497d;
      }
    }
    bVar6 = false;
  }
LAB_146c0497d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if ((!bVar6) && ((this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks != -0x8000000000000000)
     ) {
    pIVar9 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
    cVar7 = (**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,2);
    if (cVar7 == '\0') {
      dVar14 = (double)param_1.Ticks;
    }
    else {
      dVar13 = FWindowsPlatformTime::Seconds();
      dVar14 = dVar13 - (this->NextEstVideoTimeAtFrameStart).SampledAtTime;
      (this->NextEstVideoTimeAtFrameStart).SampledAtTime = dVar13;
    }
    (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks =
         (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks +
         (longlong)(dVar14 * (double)fVar1);
    pIVar9 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
    plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x10))(pIVar9);
    (**(code **)(*plVar10 + 8))(plVar10,&local_res8);
    GetActivePlaybackRange(this,local_58);
    if ((local_58[0].LowerBound.Type.Value == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar5.Ticks = local_58[0].LowerBound.Value.Ticks;
    if ((local_58[0].UpperBound.Type.Value == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar9 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
    plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x10))(pIVar9);
    cVar7 = (**(code **)(*plVar10 + 0x38))(plVar10);
    if (cVar7 == '\0') {
      if (fVar1 < 0.0) {
        if ((this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks < FVar5.Ticks) {
          (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = FVar5.Ticks;
        }
      }
      else if (((local_res8 != 0) && (local_res8 != 0x7fffffffffffffff)) &&
              (local_58[0].UpperBound.Value.Ticks <=
               (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks)) {
        (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks =
             local_58[0].UpperBound.Value.Ticks + -1;
      }
    }
    else if ((local_res8 != 0) && (local_res8 != 0x7fffffffffffffff)) {
      if ((local_58[0].UpperBound.Type.Value == '\x02') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((local_58[0].LowerBound.Type.Value == '\x02') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar11 = (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks;
      if (fVar1 < 0.0) {
        if (lVar11 < FVar5.Ticks) {
          iVar12 = (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex;
          do {
            lVar11 = lVar11 + (local_58[0].UpperBound.Value.Ticks -
                              local_58[0].LowerBound.Value.Ticks);
            iVar12 = iVar12 + -1;
          } while (lVar11 < FVar5.Ticks);
          (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = lVar11;
          (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex = iVar12;
        }
      }
      else if (local_58[0].UpperBound.Value.Ticks <= lVar11) {
        iVar12 = (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex;
        do {
          lVar11 = lVar11 - (local_58[0].UpperBound.Value.Ticks - local_58[0].LowerBound.Value.Ticks
                            );
          iVar12 = iVar12 + 1;
        } while (local_58[0].UpperBound.Value.Ticks <= lVar11);
        (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = lVar11;
        (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex = iVar12;
      }
    }
  }
  return;
}

// PreSampleProcessingTimeHandling @ 146c04c60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::PreSampleProcessingTimeHandling(FMediaPlayerFacade *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  float fVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  IMediaPlayer *pIVar5;
  longlong *plVar6;
  longlong lVar7;
  FMediaTimeStamp *pFVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  FTimespan local_78;
  undefined8 uStack_70;
  FTimespan local_68;
  undefined8 uStack_60;
  FMediaTimeStamp local_58 [5];
  
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Player.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0xa5c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    PrepareSampleQueueForSequenceIndex(this);
    UpdateSeekStatus(this,(FMediaTimeStamp *)0x0);
    lpCriticalSection_00 = &this->TimeValueLock;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      lVar7 = (this->SeekTargetTime).Time.Ticks;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (((lVar7 == -0x8000000000000000) && (this->bHaveActiveAudio == false)) &&
         (bVar3 = FBlockOnRange::IsSet(&this->BlockOnRange), !bVar3)) {
        if ((this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks == -0x8000000000000000) {
          local_68.Ticks = -0x8000000000000000;
          uStack_60 = 0;
          pIVar5 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
          plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x28))(pIVar5);
          cVar4 = (**(code **)(*plVar6 + 0x70))(plVar6,&local_68);
          if (cVar4 != '\0') {
            dVar10 = FWindowsPlatformTime::Seconds();
            (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = local_68.Ticks;
            (this->NextEstVideoTimeAtFrameStart).TimeStamp.SequenceIndex = (undefined4)uStack_60;
            (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex = uStack_60._4_4_;
            (this->NextEstVideoTimeAtFrameStart).SampledAtTime = dVar10;
          }
        }
        else if (0.0 < this->CurrentRate) {
          local_78.Ticks = -0x8000000000000000;
          uStack_70 = 0;
          pIVar5 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
          plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x28))(pIVar5);
          cVar4 = (**(code **)(*plVar6 + 0x70))(plVar6,&local_78);
          if (cVar4 != '\0') {
            if (CONCAT44((undefined4)uStack_70,uStack_70._4_4_) ==
                CONCAT44((this->NextEstVideoTimeAtFrameStart).TimeStamp.SequenceIndex,
                         (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex)) {
              lVar7 = local_78.Ticks - (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks;
              fVar1 = this->CurrentRate;
              if (fVar1 == 0.0) {
                fVar1 = this->LastRate;
              }
              lVar9 = -lVar7;
              if (0.0 <= fVar1) {
                lVar9 = lVar7;
              }
              bVar3 = TRange<FMediaTimeStamp>::IsEmpty(&this->LastVideoSampleProcessedTimeRange);
              if (bVar3) {
                auVar11._8_8_ = 0;
                auVar11._0_8_ = __real_412e848100000000;
                auVar11 = roundpd(auVar11,auVar11,1);
                dVar10 = auVar11._0_8_;
              }
              else {
                pFVar8 = TRange<FMediaTimeStamp>::Size<FMediaTimeStamp>
                                   (&this->LastVideoSampleProcessedTimeRange,local_58);
                dVar10 = (double)(pFVar8->Time).Ticks;
                dVar10 = dVar10 + dVar10;
              }
              if ((longlong)dVar10 <= lVar9) {
                dVar10 = FWindowsPlatformTime::Seconds();
                (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = local_78.Ticks;
                (this->NextEstVideoTimeAtFrameStart).TimeStamp.SequenceIndex = (undefined4)uStack_70
                ;
                (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex = uStack_70._4_4_;
                (this->NextEstVideoTimeAtFrameStart).SampledAtTime = dVar10;
              }
            }
          }
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PrepareSampleQueueForSequenceIndex @ 146c04f00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::PrepareSampleQueueForSequenceIndex(FMediaPlayerFacade *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int local_res8;
  char local_resc;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->Player).Object != (IMediaPlayer *)0x0) &&
       ((this->NextSequenceIndex).bIsSet != false)) {
      plVar1 = (longlong *)(**(code **)((longlong)*(this->Player).Object + 0x28))();
      local_resc = (this->NextSequenceIndex).bIsSet;
      if ((bool)local_resc != false) {
        local_res8 = (this->NextSequenceIndex).TypedValue;
      }
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x000146c04f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ProcessAudioSamples @ 146c04f90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::ProcessAudioSamples
          (FMediaPlayerFacade *this,IMediaSamples *param_1,TRange<FMediaTimeStamp> *param_2)

{
  FWindowsRecursiveMutex *pFVar1;
  float fVar2;
  TReferenceControllerBase<1> *pTVar4;
  FMediaAudioSampleSink *pFVar5;
  code *pcVar6;
  long64 lVar7;
  atomic<int> aVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  char cVar14;
  atomic<int> aVar15;
  long64 *plVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  LARGE_INTEGER local_res8;
  longlong *local_1a8;
  TReferenceControllerBase<1> *pTStack_1a0;
  undefined4 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  long64 lStack_178;
  undefined8 local_170;
  longlong *local_168;
  TReferenceControllerBase<1> *pTStack_160;
  undefined1 local_158;
  undefined7 uStack_157;
  long64 lStack_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uchar local_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined8 local_118;
  uchar local_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined8 local_100;
  undefined8 local_f8;
  long64 lStack_f0;
  int local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long64 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long64 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long64 lStack_90;
  int local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long64 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [64];
  float fVar3;
  
  local_1a8 = (longlong *)0x0;
  pTStack_1a0 = (TReferenceControllerBase<1> *)0x0;
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  cVar14 = (**(code **)((longlong)*(this->Player).Object + 0xc0))();
  if ((cVar14 == '\0') &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Player->GetPlayerFeatureFlag(IMediaPlayer::EFeatureFlag::UsePlaybackTimingV2)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                          ,0xbc6,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_128 = (param_2->LowerBound).Type.Value;
  uStack_127 = (param_2->LowerBound).field_0x1;
  uStack_126 = (param_2->LowerBound).field_0x2;
  uStack_125 = (param_2->LowerBound).field_0x3;
  uStack_124 = (param_2->LowerBound).field_0x4;
  uStack_123 = (param_2->LowerBound).field_0x5;
  uStack_122 = (param_2->LowerBound).field_0x6;
  uStack_121 = (param_2->LowerBound).field_0x7;
  uStack_120 = (undefined1)(param_2->LowerBound).Value.Time.Ticks;
  uStack_11f = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 1);
  uStack_11e = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 2);
  uStack_11d = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 3);
  uStack_11c = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 4);
  uStack_11b = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 5);
  uStack_11a = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 6);
  uStack_119 = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 7);
  local_118._0_4_ = (param_2->LowerBound).Value.SequenceIndex;
  local_118._4_4_ = (param_2->LowerBound).Value.LoopIndex;
  if (local_128 == '\x02') {
    local_110 = (param_2->UpperBound).Type.Value;
    uStack_10f = (param_2->UpperBound).field_0x1;
    uStack_10e = (param_2->UpperBound).field_0x2;
    uStack_10d = (param_2->UpperBound).field_0x3;
    uStack_10c = (param_2->UpperBound).field_0x4;
    uStack_10b = (param_2->UpperBound).field_0x5;
    uStack_10a = (param_2->UpperBound).field_0x6;
    uStack_109 = (param_2->UpperBound).field_0x7;
    uStack_108 = (undefined1)(param_2->UpperBound).Value.Time.Ticks;
    uStack_107 = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 1);
    uStack_106 = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 2);
    uStack_105 = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 3);
    uStack_104 = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 4);
    uStack_103 = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 5);
    uStack_102 = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 6);
    uStack_101 = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 7);
    local_100._0_4_ = (param_2->UpperBound).Value.SequenceIndex;
    local_100._4_4_ = (param_2->UpperBound).Value.LoopIndex;
    if (local_110 != '\x02') goto LAB_146c0505b;
  }
  else {
LAB_146c0505b:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("TimeRange.GetLowerBound().IsOpen() && TimeRange.GetUpperBound().IsOpen()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                        ,0xbca,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar4 = (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController;
  pTVar17 = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar8 = pTVar4->SharedReferenceCount;
    do {
      pTVar17 = (TReferenceControllerBase<1> *)0x0;
      if (aVar8 == (atomic<int>)0x0) goto LAB_146c050c6;
      LOCK();
      aVar15 = pTVar4->SharedReferenceCount;
      bVar13 = aVar8 == aVar15;
      if (bVar13) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar15 = aVar8;
      }
      dVar9 = __real_4170000000000000;
      UNLOCK();
      aVar8 = aVar15;
    } while (!bVar13);
    pFVar5 = (this->PrimaryAudioSink).Object;
    pTVar17 = pTVar4;
    if (pFVar5 != (FMediaAudioSampleSink *)0x0) {
      while (cVar14 = (**(code **)(*(longlong *)pFVar5 + 0x10))(pFVar5,1), cVar14 != '\0') {
        local_f8 = *(undefined8 *)&param_2->LowerBound;
        lStack_f0 = (param_2->LowerBound).Value.Time.Ticks;
        local_e8 = (param_2->LowerBound).Value.SequenceIndex;
        iStack_e4 = (param_2->LowerBound).Value.LoopIndex;
        uStack_e0 = *(undefined4 *)&param_2->UpperBound;
        uStack_dc = *(undefined4 *)&(param_2->UpperBound).field_0x4;
        local_d8 = (param_2->UpperBound).Value.Time.Ticks;
        uStack_d0._0_4_ = (param_2->UpperBound).Value.SequenceIndex;
        uStack_d0._4_4_ = (param_2->UpperBound).Value.LoopIndex;
        cVar14 = (**(code **)*param_1)(param_1,&local_f8,&local_1a8);
        if (cVar14 == '\0') break;
        if (local_1a8 != (longlong *)0x0) {
          pFVar1 = &this->TimeValueLock;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_146c05405;
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          if ((local_1a8 == (longlong *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar16 = (long64 *)(**(code **)(*local_1a8 + 0x30))(local_1a8,local_68);
          lVar7 = plVar16[1];
          (this->LastAudioSampleProcessedTime).TimeStamp.Time.Ticks = *plVar16;
          (this->LastAudioSampleProcessedTime).TimeStamp.SequenceIndex = (int)lVar7;
          (this->LastAudioSampleProcessedTime).TimeStamp.LoopIndex = (int)((ulonglong)lVar7 >> 0x20)
          ;
          QueryPerformanceCounter(&local_res8);
          (this->LastAudioSampleProcessedTime).SampledAtTime =
               (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          pcVar6 = (code *)**(undefined8 **)pFVar5;
          if ((local_1a8 == (longlong *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_168 = local_1a8;
          pTStack_160 = pTStack_1a0;
          if (pTStack_1a0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_1a0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_1a0->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1a8 == (longlong *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (*pcVar6)(pFVar5,&local_168);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_160);
        }
      }
      goto LAB_146c053cc;
    }
  }
LAB_146c050c6:
  if (((this->VideoSampleSinks).Sinks.ArrayNum == 0) ||
     ((this->TrackSelection).UserSelection[6] == -1)) {
    do {
      local_98 = *(undefined8 *)&param_2->LowerBound;
      lStack_90 = (param_2->LowerBound).Value.Time.Ticks;
      local_88 = (param_2->LowerBound).Value.SequenceIndex;
      iStack_84 = (param_2->LowerBound).Value.LoopIndex;
      uStack_80 = *(undefined4 *)&param_2->UpperBound;
      uStack_7c = *(undefined4 *)&(param_2->UpperBound).field_0x4;
      local_78 = (param_2->UpperBound).Value.Time.Ticks;
      uStack_70._0_4_ = (param_2->UpperBound).Value.SequenceIndex;
      uStack_70._4_4_ = (param_2->UpperBound).Value.LoopIndex;
      cVar14 = (**(code **)*param_1)(param_1,&local_98,&local_1a8);
    } while (cVar14 != '\0');
  }
  else {
    local_198 = CONCAT31(local_198._1_3_,2);
    uStack_190 = 0x8000000000000000;
    fVar2 = this->CurrentRate;
    fVar3 = this->CurrentRate;
    pFVar1 = &this->TimeValueLock;
    local_188 = 0;
    uStack_180 = CONCAT71(uStack_180._1_7_,2);
    lStack_178 = -0x8000000000000000;
    local_170 = 0;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_146c05405:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if (fVar3 <= 0.0 && fVar2 != 0.0) {
      lVar7 = (this->CurrentFrameVideoTimeStamp).Time.Ticks;
      local_188._0_4_ = (this->CurrentFrameVideoTimeStamp).SequenceIndex;
      local_188._4_4_ = (this->CurrentFrameVideoTimeStamp).LoopIndex;
      local_140 = CONCAT31(local_140._1_3_,1);
      uStack_138._0_4_ = (undefined4)lVar7;
      uStack_138._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
      uVar18 = local_140;
      uVar19 = (undefined4)uStack_138;
      uVar20 = uStack_138._4_4_;
      uStack_138 = lVar7;
      uStack_130 = local_188;
    }
    else {
      lStack_178 = (this->CurrentFrameVideoTimeStamp).Time.Ticks;
      local_170._0_4_ = (this->CurrentFrameVideoTimeStamp).SequenceIndex;
      local_170._4_4_ = (this->CurrentFrameVideoTimeStamp).LoopIndex;
      local_158 = 1;
      uStack_180 = CONCAT71(uStack_157,1);
      uVar18 = local_198;
      uVar19 = (undefined4)uStack_190;
      uVar20 = uStack_190._4_4_;
      lStack_150 = lStack_178;
      uStack_148 = local_170;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    uVar12 = local_170;
    lVar7 = lStack_178;
    uVar11 = uStack_180;
    uVar10 = local_188;
    do {
      local_b8 = uVar10;
      uStack_b0 = uVar11;
      local_a8 = lVar7;
      uStack_a0 = uVar12;
      local_c8[0] = uVar18;
      uStack_c0 = uVar19;
      uStack_bc = uVar20;
      cVar14 = (**(code **)*param_1)(param_1,local_c8,&local_1a8);
    } while (cVar14 != '\0');
  }
LAB_146c053cc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1a0);
  return;
}

// ProcessAudioSamplesV1 @ 146c05420

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::ProcessAudioSamplesV1
          (FMediaPlayerFacade *this,IMediaSamples *param_1,TRange<FTimespan> *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  FMediaAudioSampleSinks *pFVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  long64 lVar7;
  atomic<int> aVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  atomic<int> aVar13;
  uint uVar14;
  long64 *plVar15;
  int iVar16;
  void *_Dst;
  uint uVar17;
  TReferenceControllerBase<1> *pTVar18;
  uint uVar19;
  longlong lVar20;
  LARGE_INTEGER local_b8;
  FMediaSampleSinkEventData local_b0;
  longlong *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  longlong *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  long64 lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_68 = *(undefined4 *)&param_2->UpperBound;
  uStack_64 = *(undefined4 *)&(param_2->UpperBound).field_0x4;
  uStack_60 = (undefined4)(param_2->UpperBound).Value.Ticks;
  uStack_5c = *(undefined4 *)((longlong)&(param_2->UpperBound).Value.Ticks + 4);
  local_a8 = (longlong *)0x0;
  pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
  local_78 = *(undefined8 *)&param_2->LowerBound;
  lStack_70 = (param_2->LowerBound).Value.Ticks;
  cVar10 = (**(code **)((longlong)*param_1 + 8))(param_1,&local_78,&local_a8);
  dVar9 = __real_4170000000000000;
  do {
    if (cVar10 == '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_a0);
      return;
    }
    if (local_a8 != (longlong *)0x0) {
      pFVar3 = &this->AudioSampleSinks;
      if ((local_a8 == (longlong *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_98 = local_a8;
      pTStack_90 = pTStack_a0;
      if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_a0->SharedReferenceCount = (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_a8 == (longlong *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = *(int *)&(this->AudioSampleSinks).field_0x8 - 1;
      bVar11 = false;
      if (-1 < (int)uVar19) {
        lVar20 = (longlong)(int)uVar19 << 4;
        do {
          uVar17 = ~uVar19 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar19 < *(int *)&(this->AudioSampleSinks).field_0x8) {
            uVar14 = uVar17;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar4 = *(longlong *)pFVar3;
          pTVar18 = *(TReferenceControllerBase<1> **)(lVar4 + lVar20 + 8);
          if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
LAB_146c055c4:
            uVar14 = 0;
            if ((int)uVar19 < *(int *)&(this->AudioSampleSinks).field_0x8) {
              uVar14 = uVar17;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            _Dst = (void *)(*(longlong *)pFVar3 + lVar20);
            plVar5 = *(longlong **)((longlong)_Dst + 8);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar16 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
            iVar16 = *(int *)&(this->AudioSampleSinks).field_0x8 + ~uVar19;
            if (iVar16 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar16 << 4);
            }
            puVar2 = &(this->AudioSampleSinks).field_0x8;
            *(int *)puVar2 = *(int *)puVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(ForAnyElementType *)pFVar3,
                       *(int *)&(this->AudioSampleSinks).field_0x8,
                       (int *)&(this->AudioSampleSinks).field_0xc);
          }
          else {
            aVar8 = pTVar18->SharedReferenceCount;
            do {
              if (aVar8 == (atomic<int>)0x0) {
                pTVar18 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_146c055c4;
              }
              LOCK();
              aVar13 = pTVar18->SharedReferenceCount;
              bVar12 = aVar8 == aVar13;
              if (bVar12) {
                pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
                aVar13 = aVar8;
              }
              UNLOCK();
              aVar8 = aVar13;
            } while (!bVar12);
            plVar5 = *(longlong **)(lVar4 + lVar20);
            if (plVar5 == (longlong *)0x0) goto LAB_146c055c4;
            cVar10 = (**(code **)(*plVar5 + 0x10))(plVar5,1);
            if (cVar10 == '\0') {
              bVar11 = true;
            }
            else {
              (**(code **)*plVar5)(plVar5,&local_98);
              TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast(plVar5 + 1,SampleDataUpdate,&local_b0);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar18);
          lVar20 = lVar20 + -0x10;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_90);
      if (!bVar11) {
        lpCriticalSection = &this->TimeValueLock;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if ((local_a8 == (longlong *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar15 = (long64 *)(**(code **)(*local_a8 + 0x30))(local_a8,local_88);
        lVar7 = plVar15[1];
        (this->LastAudioSampleProcessedTime).TimeStamp.Time.Ticks = *plVar15;
        (this->LastAudioSampleProcessedTime).TimeStamp.SequenceIndex = (int)lVar7;
        (this->LastAudioSampleProcessedTime).TimeStamp.LoopIndex = (int)((ulonglong)lVar7 >> 0x20);
        QueryPerformanceCounter(&local_b8);
        (this->LastAudioSampleProcessedTime).SampledAtTime =
             (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    local_78 = *(undefined8 *)&param_2->LowerBound;
    lStack_70 = (param_2->LowerBound).Value.Ticks;
    local_68 = *(undefined4 *)&param_2->UpperBound;
    uStack_64 = *(undefined4 *)&(param_2->UpperBound).field_0x4;
    uStack_60 = (undefined4)(param_2->UpperBound).Value.Ticks;
    uStack_5c = *(undefined4 *)((longlong)&(param_2->UpperBound).Value.Ticks + 4);
    cVar10 = (**(code **)((longlong)*param_1 + 8))(param_1,&local_78,&local_a8);
  } while( true );
}

// ProcessCaptionSamplesV1 @ 146c05c80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::ProcessCaptionSamplesV1
          (FMediaPlayerFacade *this,IMediaSamples *param_1,TRange<FTimespan> *param_2)

{
  int *piVar1;
  TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  bool bVar7;
  atomic<int> aVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  longlong lVar16;
  FMediaSampleSinkEventData local_98 [2];
  longlong local_88;
  TReferenceControllerBase<1> *pTStack_80;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined8 local_68;
  long64 lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_58 = *(undefined4 *)&param_2->UpperBound;
  uStack_54 = *(undefined4 *)&(param_2->UpperBound).field_0x4;
  uStack_50 = (undefined4)(param_2->UpperBound).Value.Ticks;
  uStack_4c = *(undefined4 *)((longlong)&(param_2->UpperBound).Value.Ticks + 4);
  local_88 = 0;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  local_68 = *(undefined8 *)&param_2->LowerBound;
  lStack_60 = (param_2->LowerBound).Value.Ticks;
  bVar11 = false;
  cVar6 = (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_68,&local_88);
  do {
    if (cVar6 == '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_80);
      return;
    }
    if (local_88 != 0) {
      bVar11 = true;
      pTVar2 = &this->CaptionSampleSinks;
      if ((local_88 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_78 = local_88;
      pTStack_70 = pTStack_80;
      if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_88 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = (this->CaptionSampleSinks).Sinks.ArrayNum - 1;
      if (-1 < (int)uVar13) {
        lVar16 = (longlong)(int)uVar13 << 4;
        do {
          uVar15 = ~uVar13 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar13 < (this->CaptionSampleSinks).Sinks.ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (pTVar2->Sinks).AllocatorInstance.Data;
          pTVar14 = *(TReferenceControllerBase<1> **)(pFVar12 + lVar16 + 8);
          if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_146c05e45:
            uVar9 = 0;
            if ((int)uVar13 < (this->CaptionSampleSinks).Sinks.ArrayNum) {
              uVar9 = uVar15;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar12 = (pTVar2->Sinks).AllocatorInstance.Data + lVar16;
            plVar3 = *(longlong **)(pFVar12 + 8);
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
            iVar10 = (this->CaptionSampleSinks).Sinks.ArrayNum + ~uVar13;
            if (iVar10 != 0) {
              memmove(pFVar12,pFVar12 + 0x10,(longlong)iVar10 << 4);
            }
            piVar1 = &(this->CaptionSampleSinks).Sinks.ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(ForAnyElementType *)pTVar2,(this->CaptionSampleSinks).Sinks.ArrayNum,
                       &(this->CaptionSampleSinks).Sinks.ArrayMax);
          }
          else {
            aVar5 = pTVar14->SharedReferenceCount;
            do {
              if (aVar5 == (atomic<int>)0x0) {
                pTVar14 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_146c05e45;
              }
              LOCK();
              aVar8 = pTVar14->SharedReferenceCount;
              bVar7 = aVar5 == aVar8;
              if (bVar7) {
                pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
                aVar8 = aVar5;
              }
              UNLOCK();
              aVar5 = aVar8;
            } while (!bVar7);
            plVar3 = *(longlong **)(pFVar12 + lVar16);
            if (plVar3 == (longlong *)0x0) goto LAB_146c05e45;
            cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,1);
            if (cVar6 != '\0') {
              (**(code **)*plVar3)(plVar3,&local_78);
              TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast(plVar3 + 1,SampleDataUpdate,local_98);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
          lVar16 = lVar16 + -0x10;
          uVar13 = uVar13 - 1;
        } while (-1 < (int)uVar13);
      }
    }
    if (bVar11) {
      bVar11 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_70);
    }
    local_68 = *(undefined8 *)&param_2->LowerBound;
    lStack_60 = (param_2->LowerBound).Value.Ticks;
    local_58 = *(undefined4 *)&param_2->UpperBound;
    uStack_54 = *(undefined4 *)&(param_2->UpperBound).field_0x4;
    uStack_50 = (undefined4)(param_2->UpperBound).Value.Ticks;
    uStack_4c = *(undefined4 *)((longlong)&(param_2->UpperBound).Value.Ticks + 4);
    cVar6 = (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_68,&local_88);
  } while( true );
}

// ProcessEvent @ 146c05ff0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::ProcessEvent(FMediaPlayerFacade *this,EMediaEvent param_1,bool param_2)

{
  int *piVar1;
  IMediaPlayer *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  TNode *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeProcessEvent> FVar13;
  longlong *plVar14;
  TSharedRef<FMediaPlayerFacade,1> *pTVar15;
  undefined8 *puVar16;
  FString *pFVar17;
  TNode *pTVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar19;
  FNameEntryId FVar20;
  FName FVar21;
  FScriptContainerElement *pFVar22;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_b8;
  FName local_b0;
  FMediaPlayerFacade *local_a0;
  TReferenceControllerBase<1> *local_98;
  FStatMessage local_90;
  FName local_80;
  FMediaSampleSinkEventData local_78;
  FMediaSampleSinkEventData local_70;
  TSharedRef<FMediaPlayerFacade,1> local_68;
  FScriptContainerElement *local_58 [2];
  FString local_48;
  
  FVar13 = StatPtr_STAT_MediaUtils_FacadeProcessEvent;
  if (StatPtr_STAT_MediaUtils_FacadeProcessEvent ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeProcessEvent>)0x0) {
    pFVar12 = ::FName::FName(&local_80,"STAT_MediaUtils_FacadeProcessEvent");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeProcessEvent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeProcessEvent,
                        *pFVar12,L"MediaUtils MediaPlayerFacade ProcessEvent","STATGROUP_Media",
                        "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar19 = FVar21.Number;
  if ((FVar20.Value == 0) && (uVar19 == 0)) {
LAB_146c06130:
    bVar7 = false;
    FVar21 = local_b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar20.Value;
        local_res20.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                   ,0x7be);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c06130;
    local_b8.s.LowPart = FVar20.Value;
    local_b8.s.HighPart = uVar19;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar7 = true;
  }
  if (param_1 != MediaOpened) {
    if (param_1 != MediaOpenFailed) {
      if (param_1 == TracksChanged) {
        SelectDefaultTracks(this);
        if ((this->Player).Object != (IMediaPlayer *)0x0) {
          UpdateTrackSelectionWithPlayer(this);
          if (((this->Player).Object == (IMediaPlayer *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          cVar10 = (**(code **)((longlong)*(this->Player).Object + 0xc0))();
          if (cVar10 == '\0') {
            Flush(this,false,false);
          }
        }
      }
      else if (param_1 == SeekCompleted) {
        pIVar2 = (this->Player).Object;
        if ((pIVar2 != (IMediaPlayer *)0x0) &&
           (cVar10 = (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,1), cVar10 == '\0')) {
          if (((this->Player).Object == (IMediaPlayer *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          cVar10 = (**(code **)((longlong)*(this->Player).Object + 0xb8))();
          if (cVar10 != '\0') {
            if (((this->Player).Object == (IMediaPlayer *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pIVar2 = (this->Player).Object;
            bVar9 = (bool)(**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,4);
            Flush(this,bVar9,true);
          }
        }
      }
      else if (param_1 == MediaClosed) {
        if ((this->CurrentUrl).Data.ArrayNum < 2) {
          SendSinkEvent(this,MediaClosed,&local_78);
          pIVar2 = (this->Player).Object;
          if ((pIVar2 != (IMediaPlayer *)0x0) &&
             (cVar10 = (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,0), cVar10 != '\0')) {
            pTVar3 = (this->Player).SharedReferenceCount.ReferenceController;
            pIVar2 = (this->Player).Object;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pIVar2 == (IMediaPlayer *)0x0) {
              bVar9 = this->bDidRecentPlayerHaveError;
            }
            else {
              plVar14 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))();
              iVar11 = (**(code **)(*plVar14 + 0x18))(plVar14);
              bVar9 = iVar11 == 1;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            this->bDidRecentPlayerHaveError = bVar9;
            DestroyPlayer(this);
          }
          plVar14 = (longlong *)(**(code **)((longlong)*this->MediaModule + 0xb0))();
          pcVar5 = *(code **)(*plVar14 + 8);
          pTVar15 = TSharedFromThis<FMediaPlayerFacade,1>::AsShared
                              ((TSharedFromThis<FMediaPlayerFacade,1> *)&this->_padding_,&local_68);
          local_a0 = pTVar15->Object;
          if (local_a0 != (FMediaPlayerFacade *)0x0) {
            local_a0 = (FMediaPlayerFacade *)&local_a0->_padding_;
          }
          local_98 = (pTVar15->SharedReferenceCount).ReferenceController;
          if (local_98 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
            UNLOCK();
          }
          (*pcVar5)(plVar14,&local_a0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
      }
      else if (param_1 == PlaybackEndReached) {
        pIVar2 = (this->Player).Object;
        if ((pIVar2 != (IMediaPlayer *)0x0) &&
           (cVar10 = (**(code **)((longlong)*pIVar2 + 0xc0))(), cVar10 == '\0')) {
          Flush(this,false,false);
        }
        SendSinkEvent(this,PlaybackEndReached,&local_70);
      }
      goto LAB_146c0649a;
    }
    ::FString::Empty(&this->CurrentUrl);
  }
  pIVar2 = (this->Player).Object;
  if (pIVar2 == (IMediaPlayer *)0x0) {
    pFVar17 = ::FString::FString(&local_48,L"");
    pFVar22 = (pFVar17->Data).AllocatorInstance.Data;
    (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar11 = (pFVar17->Data).ArrayNum;
    (pFVar17->Data).ArrayNum = 0;
    (pFVar17->Data).ArrayMax = 0;
    local_58[0] = local_48.Data.AllocatorInstance.Data;
  }
  else {
    puVar16 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,local_58);
    pFVar22 = (FScriptContainerElement *)*puVar16;
    *puVar16 = 0;
    iVar11 = *(int *)(puVar16 + 1);
    puVar16[1] = 0;
  }
  if (local_58[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if (iVar11 < 2) {
    if (5 < (byte)LogMediaUtils._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
    }
  }
  else if (5 < (byte)LogMediaUtils._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
  }
  if (pFVar22 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar22);
  }
LAB_146c0649a:
  if (param_2) {
    TMulticastDelegate<void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>::Broadcast
              (&this->MediaEvent,param_1);
  }
  else {
    pTVar18 = ::operator_new(0x10);
    if (pTVar18 != (TNode *)0x0) {
      pTVar18->NextNode = (TNode *)0x0;
      pTVar18->Item = param_1;
      pTVar4 = (this->QueuedEventBroadcasts).Head;
      (this->QueuedEventBroadcasts).Head = pTVar18;
      pTVar4->NextNode = pTVar18;
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_90.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_90);
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
  return;
}

// ProcessMetadataSamplesV1 @ 146c06a50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::ProcessMetadataSamplesV1
          (FMediaPlayerFacade *this,IMediaSamples *param_1,TRange<FTimespan> *param_2)

{
  int *piVar1;
  TMediaSampleSinks<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  bool bVar7;
  atomic<int> aVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  longlong lVar16;
  FMediaSampleSinkEventData local_98 [2];
  longlong local_88;
  TReferenceControllerBase<1> *pTStack_80;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined8 local_68;
  long64 lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_58 = *(undefined4 *)&param_2->UpperBound;
  uStack_54 = *(undefined4 *)&(param_2->UpperBound).field_0x4;
  uStack_50 = (undefined4)(param_2->UpperBound).Value.Ticks;
  uStack_4c = *(undefined4 *)((longlong)&(param_2->UpperBound).Value.Ticks + 4);
  local_88 = 0;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  local_68 = *(undefined8 *)&param_2->LowerBound;
  lStack_60 = (param_2->LowerBound).Value.Ticks;
  bVar11 = false;
  cVar6 = (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_68,&local_88);
  do {
    if (cVar6 == '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_80);
      return;
    }
    if (local_88 != 0) {
      bVar11 = true;
      pTVar2 = &this->MetadataSampleSinks;
      if ((local_88 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_78 = local_88;
      pTStack_70 = pTStack_80;
      if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_88 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = (this->MetadataSampleSinks).Sinks.ArrayNum - 1;
      if (-1 < (int)uVar13) {
        lVar16 = (longlong)(int)uVar13 << 4;
        do {
          uVar15 = ~uVar13 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar13 < (this->MetadataSampleSinks).Sinks.ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (pTVar2->Sinks).AllocatorInstance.Data;
          pTVar14 = *(TReferenceControllerBase<1> **)(pFVar12 + lVar16 + 8);
          if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_146c06c15:
            uVar9 = 0;
            if ((int)uVar13 < (this->MetadataSampleSinks).Sinks.ArrayNum) {
              uVar9 = uVar15;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar12 = (pTVar2->Sinks).AllocatorInstance.Data + lVar16;
            plVar3 = *(longlong **)(pFVar12 + 8);
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
            iVar10 = (this->MetadataSampleSinks).Sinks.ArrayNum + ~uVar13;
            if (iVar10 != 0) {
              memmove(pFVar12,pFVar12 + 0x10,(longlong)iVar10 << 4);
            }
            piVar1 = &(this->MetadataSampleSinks).Sinks.ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(ForAnyElementType *)pTVar2,(this->MetadataSampleSinks).Sinks.ArrayNum
                       ,&(this->MetadataSampleSinks).Sinks.ArrayMax);
          }
          else {
            aVar5 = pTVar14->SharedReferenceCount;
            do {
              if (aVar5 == (atomic<int>)0x0) {
                pTVar14 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_146c06c15;
              }
              LOCK();
              aVar8 = pTVar14->SharedReferenceCount;
              bVar7 = aVar5 == aVar8;
              if (bVar7) {
                pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
                aVar8 = aVar5;
              }
              UNLOCK();
              aVar5 = aVar8;
            } while (!bVar7);
            plVar3 = *(longlong **)(pFVar12 + lVar16);
            if (plVar3 == (longlong *)0x0) goto LAB_146c06c15;
            cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,1);
            if (cVar6 != '\0') {
              (**(code **)*plVar3)(plVar3,&local_78);
              TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast(plVar3 + 1,SampleDataUpdate,local_98);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
          lVar16 = lVar16 + -0x10;
          uVar13 = uVar13 - 1;
        } while (-1 < (int)uVar13);
      }
    }
    if (bVar11) {
      bVar11 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_70);
    }
    local_68 = *(undefined8 *)&param_2->LowerBound;
    lStack_60 = (param_2->LowerBound).Value.Ticks;
    local_58 = *(undefined4 *)&param_2->UpperBound;
    uStack_54 = *(undefined4 *)&(param_2->UpperBound).field_0x4;
    uStack_50 = (undefined4)(param_2->UpperBound).Value.Ticks;
    uStack_4c = *(undefined4 *)((longlong)&(param_2->UpperBound).Value.Ticks + 4);
    cVar6 = (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_68,&local_88);
  } while( true );
}

// ProcessSubtitleSamplesV1 @ 146c07240

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::ProcessSubtitleSamplesV1
          (FMediaPlayerFacade *this,IMediaSamples *param_1,TRange<FTimespan> *param_2)

{
  int *piVar1;
  TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  atomic<int> aVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  atomic<int> aVar11;
  uint uVar12;
  FText *this_00;
  FString *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  longlong *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  undefined8 local_88;
  long64 lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FMediaSampleSinkEventData local_68;
  longlong *local_60 [4];
  
  local_78 = *(undefined4 *)&param_2->UpperBound;
  uStack_74 = *(undefined4 *)&(param_2->UpperBound).field_0x4;
  uStack_70 = (undefined4)(param_2->UpperBound).Value.Ticks;
  uStack_6c = *(undefined4 *)((longlong)&(param_2->UpperBound).Value.Ticks + 4);
  local_a8 = (longlong *)0x0;
  pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
  local_88 = *(undefined8 *)&param_2->LowerBound;
  lStack_80 = (param_2->LowerBound).Value.Ticks;
  bVar10 = false;
  bVar8 = false;
  cVar7 = (**(code **)((longlong)*param_1 + 0x38))(param_1,&local_88,&local_a8);
  do {
    if (cVar7 == '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_a0);
      return;
    }
    if (local_a8 == (longlong *)0x0) {
LAB_146c07521:
      bVar5 = false;
    }
    else {
      bVar10 = true;
      pTVar2 = &this->SubtitleSampleSinks;
      if ((local_a8 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_98 = local_a8;
      pTStack_90 = pTStack_a0;
      if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_a0->SharedReferenceCount = (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_a8 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar19 = (this->SubtitleSampleSinks).Sinks.ArrayNum - 1;
      bVar5 = false;
      bVar8 = bVar10;
      if ((int)uVar19 < 0) goto LAB_146c07521;
      lVar17 = (longlong)(int)uVar19 << 4;
      do {
        uVar18 = ~uVar19 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar19 < (this->SubtitleSampleSinks).Sinks.ArrayNum) {
          uVar12 = uVar18;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = (pTVar2->Sinks).AllocatorInstance.Data;
        pTVar16 = *(TReferenceControllerBase<1> **)(pFVar15 + lVar17 + 8);
        if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
LAB_146c07404:
          uVar12 = 0;
          if ((int)uVar19 < (this->SubtitleSampleSinks).Sinks.ArrayNum) {
            uVar12 = uVar18;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar15 = (pTVar2->Sinks).AllocatorInstance.Data + lVar17;
          plVar3 = *(longlong **)(pFVar15 + 8);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
          iVar14 = (this->SubtitleSampleSinks).Sinks.ArrayNum + ~uVar19;
          if (iVar14 != 0) {
            memmove(pFVar15,pFVar15 + 0x10,(longlong)iVar14 << 4);
          }
          piVar1 = &(this->SubtitleSampleSinks).Sinks.ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)pTVar2,(this->SubtitleSampleSinks).Sinks.ArrayNum,
                     &(this->SubtitleSampleSinks).Sinks.ArrayMax);
        }
        else {
          aVar6 = pTVar16->SharedReferenceCount;
          do {
            if (aVar6 == (atomic<int>)0x0) {
              pTVar16 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_146c07404;
            }
            LOCK();
            aVar11 = pTVar16->SharedReferenceCount;
            bVar9 = aVar6 == aVar11;
            if (bVar9) {
              pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
              aVar11 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar11;
          } while (!bVar9);
          plVar3 = *(longlong **)(pFVar15 + lVar17);
          if (plVar3 == (longlong *)0x0) goto LAB_146c07404;
          cVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,1);
          if (cVar7 == '\0') {
            bVar5 = true;
          }
          else {
            (**(code **)*plVar3)(plVar3,&local_98);
            TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(plVar3 + 1,SampleDataUpdate,&local_68);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        lVar17 = lVar17 + -0x10;
        uVar19 = uVar19 - 1;
      } while (-1 < (int)uVar19);
      if (!bVar5) goto LAB_146c07521;
      bVar5 = true;
    }
    if (bVar10) {
      bVar10 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_90);
      bVar8 = bVar10;
    }
    if (bVar5) {
      if ((local_a8 == (longlong *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (FText *)(**(code **)(*local_a8 + 0x10))(local_a8,local_60);
      pFVar13 = FText::ToString(this_00);
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_b0 = (pFVar13->Data).ArrayNum;
      lVar17 = (longlong)local_b0;
      pFVar15 = (pFVar13->Data).AllocatorInstance.Data;
      if (local_b0 == 0) {
        local_ac = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_b0,0,&local_b8,local_b0,&local_ac);
        memcpy(local_b8.Data,pFVar15,lVar17 * 2);
      }
      if (local_60[0] != (longlong *)0x0) {
        (**(code **)(*local_60[0] + 0x10))(local_60[0]);
      }
      bVar10 = bVar8;
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
    }
    local_88 = *(undefined8 *)&param_2->LowerBound;
    lStack_80 = (param_2->LowerBound).Value.Ticks;
    local_78 = *(undefined4 *)&param_2->UpperBound;
    uStack_74 = *(undefined4 *)&(param_2->UpperBound).field_0x4;
    uStack_70 = (undefined4)(param_2->UpperBound).Value.Ticks;
    uStack_6c = *(undefined4 *)((longlong)&(param_2->UpperBound).Value.Ticks + 4);
    cVar7 = (**(code **)((longlong)*param_1 + 0x38))(param_1,&local_88,&local_a8);
  } while( true );
}

// ProcessVideoSamples @ 146c07680

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::ProcessVideoSamples
          (FMediaPlayerFacade *this,IMediaSamples *param_1,TRange<FMediaTimeStamp> *param_2)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TOptional<FTimecode> *pTVar2;
  float fVar3;
  atomic<int> aVar4;
  undefined8 uVar5;
  IMediaPlayer *pIVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  longlong lVar11;
  TReferenceControllerBase<1> *pTVar12;
  char cVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  FMediaTimeStamp *pFVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  IMediaTextureSample *local_2b8;
  TReferenceControllerBase<1> *pTStack_2b0;
  FTimespan local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  FMediaTimeStamp local_298;
  TSharedRef<IMediaTextureSample,1> local_288;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined1 local_248;
  undefined7 uStack_247;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined7 uStack_217;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  long64 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [8];
  FString local_1e0;
  FString local_1d0;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  FMediaTimeStamp FStack_1b8;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  int iStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [16];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int iStack_168;
  int iStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  long64 lStack_140;
  int iStack_138;
  int iStack_134;
  uchar local_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined8 local_120;
  uchar local_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined8 local_108;
  undefined4 local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [80];
  
  pIVar6 = (this->Player).Object;
  if (pIVar6 == (IMediaPlayer *)0x0) {
    return true;
  }
  cVar13 = (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,1);
  if ((cVar13 == '\0') &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Player->GetPlayerFeatureFlag(IMediaPlayer::EFeatureFlag::UsePlaybackTimingV2)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                          ,0xc89,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  local_130 = (param_2->LowerBound).Type.Value;
  uStack_12f = (param_2->LowerBound).field_0x1;
  uStack_12e = (param_2->LowerBound).field_0x2;
  uStack_12d = (param_2->LowerBound).field_0x3;
  uStack_12c = (param_2->LowerBound).field_0x4;
  uStack_12b = (param_2->LowerBound).field_0x5;
  uStack_12a = (param_2->LowerBound).field_0x6;
  uStack_129 = (param_2->LowerBound).field_0x7;
  uStack_128 = (undefined1)(param_2->LowerBound).Value.Time.Ticks;
  uStack_127 = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 1);
  uStack_126 = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 2);
  uStack_125 = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 3);
  uStack_124 = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 4);
  uStack_123 = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 5);
  uStack_122 = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 6);
  uStack_121 = *(undefined1 *)((longlong)&(param_2->LowerBound).Value.Time.Ticks + 7);
  local_120._0_4_ = (param_2->LowerBound).Value.SequenceIndex;
  local_120._4_4_ = (param_2->LowerBound).Value.LoopIndex;
  if (local_130 == '\x02') {
LAB_146c07734:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("TimeRange.GetLowerBound().IsClosed() && TimeRange.GetUpperBound().IsClosed()"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                        ,0xc8b,L"");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      uVar15 = (*pcVar9)();
      return (bool)uVar15;
    }
  }
  else {
    local_118 = (param_2->UpperBound).Type.Value;
    uStack_117 = (param_2->UpperBound).field_0x1;
    uStack_116 = (param_2->UpperBound).field_0x2;
    uStack_115 = (param_2->UpperBound).field_0x3;
    uStack_114 = (param_2->UpperBound).field_0x4;
    uStack_113 = (param_2->UpperBound).field_0x5;
    uStack_112 = (param_2->UpperBound).field_0x6;
    uStack_111 = (param_2->UpperBound).field_0x7;
    uStack_110 = (undefined1)(param_2->UpperBound).Value.Time.Ticks;
    uStack_10f = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 1);
    uStack_10e = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 2);
    uStack_10d = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 3);
    uStack_10c = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 4);
    uStack_10b = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 5);
    uStack_10a = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 6);
    uStack_109 = *(undefined1 *)((longlong)&(param_2->UpperBound).Value.Time.Ticks + 7);
    local_108._0_4_ = (param_2->UpperBound).Value.SequenceIndex;
    local_108._4_4_ = (param_2->UpperBound).Value.LoopIndex;
    if (local_118 == '\x02') goto LAB_146c07734;
  }
  local_2b8 = (IMediaTextureSample *)0x0;
  pTStack_2b0 = (TReferenceControllerBase<1> *)0x0;
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  pIVar6 = (this->Player).Object;
  cVar13 = (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,3);
  if (cVar13 == '\0') {
    fVar3 = this->CurrentRate;
    if (fVar3 == 0.0) {
      fVar3 = this->LastRate;
    }
    bVar14 = fVar3 < 0.0;
    bVar16 = IsVideoSampleStillGood(this,&this->LastVideoSampleProcessedTimeRange,param_2,bVar14);
    if (!bVar16) {
      pcVar9 = *(code **)((longlong)*param_1 + 0x60);
      bVar16 = FBlockOnRange::IsSet(&this->BlockOnRange);
      iVar17 = (*pcVar9)(param_1,param_2,&local_2b8,bVar14,bVar16);
      if (iVar17 == 2) {
        bVar14 = HaveAudioPlayback(this);
        if (!bVar14) {
          (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = -0x8000000000000000;
          (this->NextEstVideoTimeAtFrameStart).SampledAtTime = -1.0;
        }
      }
      else if (iVar17 == 3) {
        pFVar18 = TRange<FMediaTimeStamp>::GetUpperBoundValue(param_2);
        if (bVar14) {
          FStack_1b8 = *pFVar18;
          uStack_270 = 0x8000000000000000;
          local_278 = CONCAT31(local_278._1_3_,2);
          uStack_270._0_4_ = 0;
          uStack_270._4_4_ = 0x80000000;
          local_268 = 0;
          local_1c0 = CONCAT31(local_1c0._1_3_,1);
          iVar17 = 0;
          iVar28 = 0;
          auStack_180._8_4_ = local_278;
          auStack_180._0_8_ = FStack_1b8._8_8_;
          auStack_180._12_4_ = uStack_274;
          uStack_170 = 0;
          uStack_16c = 0x80000000;
          local_190 = local_1c0;
          uStack_18c = uStack_1bc;
          uStack_188 = (undefined4)FStack_1b8.Time.Ticks;
          uStack_184 = FStack_1b8.Time.Ticks._4_4_;
          iVar22 = FStack_1b8.SequenceIndex;
          iVar23 = FStack_1b8.LoopIndex;
          uVar24 = local_278;
          uVar25 = uStack_274;
          uVar26 = (undefined4)uStack_270;
          uVar27 = uStack_270._4_4_;
          uVar29 = local_1c0;
          uVar30 = (undefined4)FStack_1b8.Time.Ticks;
          uVar31 = FStack_1b8.Time.Ticks._4_4_;
          iStack_168 = iVar17;
          iStack_164 = iVar28;
        }
        else {
          uVar26 = (undefined4)(pFVar18->Time).Ticks;
          uVar27 = *(undefined4 *)((longlong)&(pFVar18->Time).Ticks + 4);
          lStack_140 = (pFVar18->Time).Ticks;
          iVar17 = pFVar18->SequenceIndex;
          iVar28 = pFVar18->LoopIndex;
          local_1a8 = 1;
          uStack_258 = 0x8000000000000000;
          local_250 = 0;
          local_260 = CONCAT31(local_260._1_3_,2);
          uStack_258._0_4_ = 0;
          uStack_258._4_4_ = 0x80000000;
          local_250._0_4_ = 0;
          local_250._4_4_ = 0;
          local_148._0_4_ = (undefined4)CONCAT71(uStack_1a7,1);
          local_148._4_4_ = (undefined4)((uint7)uStack_1a7 >> 0x18);
          uStack_150 = 0;
          uStack_14c = 0;
          local_160 = local_260;
          uStack_15c = uStack_25c;
          uStack_158 = 0;
          uStack_154 = 0x80000000;
          iVar22 = (int)local_250;
          iVar23 = local_250._4_4_;
          uVar24 = (undefined4)local_148;
          uVar25 = local_148._4_4_;
          uVar29 = local_260;
          uVar30 = (undefined4)uStack_258;
          uVar31 = uStack_258._4_4_;
          uStack_1a0 = uVar26;
          uStack_19c = uVar27;
          iStack_198 = iVar17;
          iStack_194 = iVar28;
          iStack_138 = iVar17;
          iStack_134 = iVar28;
        }
        do {
          local_f8[0] = uVar29;
          uStack_f0 = uVar30;
          uStack_ec = uVar31;
          local_e8 = iVar22;
          iStack_e4 = iVar23;
          uStack_e0 = uVar24;
          uStack_dc = uVar25;
          local_d8 = uVar26;
          uStack_d4 = uVar27;
          iStack_d0 = iVar17;
          iStack_cc = iVar28;
          cVar13 = (**(code **)((longlong)*param_1 + 0x40))(param_1,local_f8,&local_2b8);
        } while (cVar13 != '\0');
        if (local_2b8 == (IMediaTextureSample *)0x0) {
LAB_146c07aaf:
          pTVar12 = pTStack_2b0;
          local_2b8 = (IMediaTextureSample *)0x0;
          if (pTStack_2b0 != (TReferenceControllerBase<1> *)0x0) {
            pTStack_2b0 = (TReferenceControllerBase<1> *)0x0;
            LOCK();
            paVar1 = &pTVar12->SharedReferenceCount;
            aVar4 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar4 == (atomic<int>)0x1) {
              (**(code **)pTVar12->_padding_)();
              LOCK();
              paVar1 = &pTVar12->WeakReferenceCount;
              aVar4 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar4 == (atomic<int>)0x1) {
                (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else if (bVar14) {
          plVar19 = (longlong *)(**(code **)((longlong)*local_2b8 + 0x60))(local_2b8,local_88);
          if ((local_2b8 == (IMediaTextureSample *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            uVar15 = (*pcVar9)();
            return (bool)uVar15;
          }
          plVar20 = (longlong *)(**(code **)((longlong)*local_2b8 + 0x20))(local_2b8,local_res20);
          iVar17 = *(int *)((longlong)plVar19 + 0xc);
          lVar11 = plVar19[1];
          lVar7 = *plVar19;
          lVar8 = *plVar20;
          pFVar18 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_2);
          if ((pFVar18->SequenceIndex <= (int)lVar11) &&
             (((int)lVar11 != pFVar18->SequenceIndex ||
              ((pFVar18->LoopIndex <= iVar17 &&
               ((iVar17 != pFVar18->LoopIndex || ((pFVar18->Time).Ticks <= lVar7 - lVar8))))))))
          goto LAB_146c07aaf;
        }
        else {
          if ((local_2b8 == (IMediaTextureSample *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            uVar15 = (*pcVar9)();
            return (bool)uVar15;
          }
          plVar19 = (longlong *)(**(code **)((longlong)*local_2b8 + 0x60))(local_2b8,local_98);
          if ((local_2b8 == (IMediaTextureSample *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            uVar15 = (*pcVar9)();
            return (bool)uVar15;
          }
          plVar20 = (longlong *)(**(code **)((longlong)*local_2b8 + 0x20))(local_2b8,local_res8);
          local_298.Time.Ticks = *plVar20 + *plVar19;
          local_298.SequenceIndex = (int)plVar19[1];
          local_298.LoopIndex = *(int *)((longlong)plVar19 + 0xc);
          pFVar18 = TRange<FMediaTimeStamp>::GetLowerBoundValue(param_2);
          bVar14 = FMediaTimeStamp::operator>(&local_298,pFVar18);
          if (!bVar14) goto LAB_146c07aaf;
        }
      }
      goto LAB_146c07b9f;
    }
  }
  else {
    local_248 = 2;
    uStack_240 = 0x8000000000000000;
    local_238 = 0;
    local_228 = 0x8000000000000000;
    uStack_220 = 0;
    uStack_230 = 2;
    do {
      uStack_c0 = 0x8000000000000000;
      local_b8 = 0;
      local_a8 = 0x8000000000000000;
      uStack_a0 = 0;
      local_c8 = CONCAT71(uStack_247,2);
      uStack_b0 = CONCAT71(uStack_22f,2);
      cVar13 = (**(code **)((longlong)*param_1 + 0x40))(param_1,&local_c8,&local_2b8);
    } while (cVar13 != '\0');
LAB_146c07b9f:
    if (local_2b8 == (IMediaTextureSample *)0x0) {
      bVar14 = false;
      goto LAB_146c07ebc;
    }
    if ((local_2b8 == (IMediaTextureSample *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      uVar15 = (*pcVar9)();
      return (bool)uVar15;
    }
    (**(code **)((longlong)*local_2b8 + 0x60))(local_2b8,&local_2a8);
    if ((local_2b8 == (IMediaTextureSample *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      uVar15 = (*pcVar9)();
      return (bool)uVar15;
    }
    plVar19 = (longlong *)(**(code **)((longlong)*local_2b8 + 0x20))(local_2b8,local_1e8);
    local_218 = 1;
    uStack_200 = 0;
    local_1f8 = *plVar19 + CONCAT44(local_2a8.Ticks._4_4_,(undefined4)local_2a8.Ticks);
    uStack_210 = (undefined4)local_2a8.Ticks;
    uStack_20c = local_2a8.Ticks._4_4_;
    uStack_208 = uStack_2a0;
    uStack_204 = uStack_29c;
    uStack_1ec = uStack_29c;
    uStack_1f0 = uStack_2a0;
    if ((this->VideoSampleSinks).Sinks.ArrayNum == 0) {
      if (5 < (byte)LogMediaUtils._0_1_) {
        FTimespan::ToString(&local_2a8,&local_1e0,L"%h:%m:%s.%t");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
LAB_146c07d11:
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (6 < (byte)LogMediaUtils._0_1_) {
      FTimespan::ToString(&local_2a8,&local_1d0,L"%h:%m:%s.%t");
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
      local_1e0.Data.AllocatorInstance.Data = local_1d0.Data.AllocatorInstance.Data;
      goto LAB_146c07d11;
    }
    if ((local_2b8 == (IMediaTextureSample *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      uVar15 = (*pcVar9)();
      return (bool)uVar15;
    }
    local_288.Object = local_2b8;
    local_288.SharedReferenceCount.ReferenceController = pTStack_2b0;
    if (pTStack_2b0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_2b0->SharedReferenceCount = (atomic<int>)((int)pTStack_2b0->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_2b8 == (IMediaTextureSample *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      uVar15 = (*pcVar9)();
      return (bool)uVar15;
    }
    bVar14 = TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Enqueue
                       (&this->VideoSampleSinks,&local_288);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_288.SharedReferenceCount.ReferenceController);
    if ((!bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("bOk",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                            ,0xcf2,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      uVar15 = (*pcVar9)();
      return (bool)uVar15;
    }
    lpCriticalSection = &this->TimeValueLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->CurrentFrameVideoTimeStamp).Time.Ticks = CONCAT44(uStack_20c,uStack_210);
    (this->CurrentFrameVideoTimeStamp).SequenceIndex = uStack_208;
    (this->CurrentFrameVideoTimeStamp).LoopIndex = uStack_204;
    *(ulonglong *)&(this->LastVideoSampleProcessedTimeRange).LowerBound =
         CONCAT71(uStack_217,local_218);
    (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.Time.Ticks =
         CONCAT44(uStack_20c,uStack_210);
    (this->CurrentFrameVideoDisplayTimeStamp).Time.Ticks = CONCAT44(uStack_20c,uStack_210);
    (this->CurrentFrameVideoDisplayTimeStamp).SequenceIndex = uStack_208;
    (this->CurrentFrameVideoDisplayTimeStamp).LoopIndex = uStack_204;
    (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.SequenceIndex = uStack_208;
    (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.LoopIndex = uStack_204;
    *(ulonglong *)&(this->LastVideoSampleProcessedTimeRange).UpperBound =
         CONCAT71(uStack_1ff,uStack_200);
    (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks = local_1f8;
    (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.SequenceIndex = uStack_1f0;
    (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.LoopIndex = uStack_1ec;
    if ((local_2b8 == (IMediaTextureSample *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      uVar15 = (*pcVar9)();
      return (bool)uVar15;
    }
    puVar21 = (undefined8 *)(**(code **)((longlong)*local_2b8 + 0x68))(local_2b8,local_78);
    pTVar2 = &this->MostRecentlyDeliveredVideoFrameTimecode;
    if ((TOptional<FTimecode> *)puVar21 != pTVar2) {
      if (*(char *)(puVar21 + 3) == '\0') {
        if ((this->MostRecentlyDeliveredVideoFrameTimecode).bIsSet != false) {
          (this->MostRecentlyDeliveredVideoFrameTimecode).bIsSet = false;
        }
      }
      else {
        uVar5 = *puVar21;
        uVar10 = puVar21[1];
        (pTVar2->TypedValue).Hours = (int)uVar5;
        (pTVar2->TypedValue).Minutes = (int)((ulonglong)uVar5 >> 0x20);
        (this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.Seconds = (int)uVar10;
        (this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.Frames =
             (int)((ulonglong)uVar10 >> 0x20);
        uVar5 = puVar21[2];
        (this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.Subframe = (float)(int)uVar5;
        (this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.bDropFrameFormat =
             (bool)(char)((ulonglong)uVar5 >> 0x20);
        *(int3 *)&(this->MostRecentlyDeliveredVideoFrameTimecode).TypedValue.field_0x15 =
             (int3)((ulonglong)uVar5 >> 0x28);
        (this->MostRecentlyDeliveredVideoFrameTimecode).bIsSet = true;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    UpdateSeekStatus(this,&this->CurrentFrameVideoTimeStamp);
  }
  bVar14 = true;
LAB_146c07ebc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2b0);
  return bVar14;
}

// ProcessVideoSamplesV1 @ 146c07f20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::ProcessVideoSamplesV1
          (FMediaPlayerFacade *this,IMediaSamples *param_1,TRange<FTimespan> *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *pTVar2;
  IMediaPlayer *pIVar3;
  code *pcVar4;
  long64 lVar5;
  long64 lVar6;
  atomic<int> aVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  atomic<int> aVar11;
  uint uVar12;
  long64 *plVar13;
  FTimespan *this_00;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  longlong *local_108;
  TReferenceControllerBase<1> *pTStack_100;
  longlong local_f8;
  longlong *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  undefined8 local_d8;
  long64 lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FMediaSampleSinkEventData local_b8;
  undefined1 local_b0 [8];
  FString local_a8;
  FString local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [40];
  
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar3 = (this->Player).Object;
  cVar9 = (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,1);
  if ((cVar9 != '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Player->GetPlayerFeatureFlag(IMediaPlayer::EFeatureFlag::UsePlaybackTimingV2)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0xd7b,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_c8 = *(undefined4 *)&param_2->UpperBound;
  uStack_c4 = *(undefined4 *)&(param_2->UpperBound).field_0x4;
  uStack_c0 = (undefined4)(param_2->UpperBound).Value.Ticks;
  uStack_bc = *(undefined4 *)((longlong)&(param_2->UpperBound).Value.Ticks + 4);
  local_108 = (longlong *)0x0;
  pTStack_100 = (TReferenceControllerBase<1> *)0x0;
  local_d8 = *(undefined8 *)&param_2->LowerBound;
  lStack_d0 = (param_2->LowerBound).Value.Ticks;
  cVar9 = (**(code **)((longlong)*param_1 + 0x48))(param_1,&local_d8,&local_108);
  do {
    if (cVar9 == '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_100);
      return;
    }
    if (local_108 != (longlong *)0x0) {
      lpCriticalSection = &this->TimeValueLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((local_108 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar13 = (long64 *)(**(code **)(*local_108 + 0x60))(local_108,local_88);
      lVar5 = *plVar13;
      lVar6 = plVar13[1];
      (this->CurrentFrameVideoTimeStamp).Time.Ticks = lVar5;
      (this->CurrentFrameVideoTimeStamp).SequenceIndex = (int)lVar6;
      (this->CurrentFrameVideoTimeStamp).LoopIndex = (int)((ulonglong)lVar6 >> 0x20);
      (this->CurrentFrameVideoDisplayTimeStamp).Time.Ticks = lVar5;
      (this->CurrentFrameVideoDisplayTimeStamp).SequenceIndex = (int)lVar6;
      (this->CurrentFrameVideoDisplayTimeStamp).LoopIndex = (int)((ulonglong)lVar6 >> 0x20);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (6 < (byte)LogMediaUtils._0_1_) {
        if ((local_108 == (longlong *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (FTimespan *)(**(code **)(*local_108 + 0x60))(local_108,local_78);
        FTimespan::ToString(this_00,&local_a8,L"%h:%m:%s.%t");
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      pTVar2 = &this->VideoSampleSinks;
      if ((local_108 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_e8 = local_108;
      pTStack_e0 = pTStack_100;
      if (pTStack_100 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_100->SharedReferenceCount =
             (atomic<int>)((int)pTStack_100->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_108 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar21 = (this->VideoSampleSinks).Sinks.ArrayNum - 1;
      bVar8 = false;
      if (-1 < (int)uVar21) {
        local_f8 = (longlong)(int)uVar21;
        lVar19 = local_f8 << 4;
        do {
          uVar20 = ~uVar21 >> 0x1f;
          uVar12 = 0;
          if ((int)uVar21 < (this->VideoSampleSinks).Sinks.ArrayNum) {
            uVar12 = uVar20;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar17 = (pTVar2->Sinks).AllocatorInstance.Data;
          pTVar18 = *(TReferenceControllerBase<1> **)(pFVar17 + lVar19 + 8);
          if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
LAB_146c08264:
            uVar12 = 0;
            if ((int)uVar21 < (this->VideoSampleSinks).Sinks.ArrayNum) {
              uVar12 = uVar20;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar17 = (pTVar2->Sinks).AllocatorInstance.Data + lVar19;
            plVar14 = *(longlong **)(pFVar17 + 8);
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar16 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
            iVar16 = (this->VideoSampleSinks).Sinks.ArrayNum + ~uVar21;
            if (iVar16 != 0) {
              memmove(pFVar17,pFVar17 + 0x10,(longlong)iVar16 << 4);
            }
            piVar1 = &(this->VideoSampleSinks).Sinks.ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(ForAnyElementType *)pTVar2,(this->VideoSampleSinks).Sinks.ArrayNum,
                       &(this->VideoSampleSinks).Sinks.ArrayMax);
          }
          else {
            aVar7 = pTVar18->SharedReferenceCount;
            do {
              if (aVar7 == (atomic<int>)0x0) {
                pTVar18 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_146c08264;
              }
              LOCK();
              aVar11 = pTVar18->SharedReferenceCount;
              bVar10 = aVar7 == aVar11;
              if (bVar10) {
                pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
                aVar11 = aVar7;
              }
              UNLOCK();
              aVar7 = aVar11;
            } while (!bVar10);
            plVar14 = *(longlong **)(pFVar17 + lVar19);
            if (plVar14 == (longlong *)0x0) goto LAB_146c08264;
            cVar9 = (**(code **)(*plVar14 + 0x10))(plVar14,1);
            if (cVar9 == '\0') {
              bVar8 = true;
            }
            else {
              (**(code **)*plVar14)(plVar14,&local_e8);
              TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast(plVar14 + 1,SampleDataUpdate,&local_b8);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar18);
          lVar19 = lVar19 + -0x10;
          local_f8 = local_f8 + -1;
          uVar21 = uVar21 - 1;
        } while (-1 < (int)uVar21);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_e0);
      if ((!bVar8) && (0.0 < this->CurrentRate || this->CurrentRate == 0.0)) {
        if ((local_108 == (longlong *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar14 = (longlong *)(**(code **)(*local_108 + 0x60))(local_108,local_68);
        if ((local_108 == (longlong *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar15 = (longlong *)(**(code **)(*local_108 + 0x20))(local_108,local_b0);
        (this->NextVideoSampleTime).Ticks = *plVar14 + *plVar15;
        if (6 < (byte)LogMediaUtils._0_1_) {
          FTimespan::ToString(&this->NextVideoSampleTime,&local_98,L"%h:%m:%s.%t");
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    local_d8 = *(undefined8 *)&param_2->LowerBound;
    lStack_d0 = (param_2->LowerBound).Value.Ticks;
    local_c8 = *(undefined4 *)&param_2->UpperBound;
    uStack_c4 = *(undefined4 *)&(param_2->UpperBound).field_0x4;
    uStack_c0 = (undefined4)(param_2->UpperBound).Value.Ticks;
    uStack_bc = *(undefined4 *)((longlong)&(param_2->UpperBound).Value.Ticks + 4);
    cVar9 = (**(code **)((longlong)*param_1 + 0x48))(param_1,&local_d8,&local_108);
  } while( true );
}

// QueryCacheState @ 146c096b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::QueryCacheState
          (FMediaPlayerFacade *this,EMediaTrackType param_1,EMediaCacheState param_2,
          TRangeSet<FTimespan> *param_3)

{
  IMediaPlayer *pIVar1;
  undefined8 *puVar2;
  
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    if (param_2 == Cached) {
      if (param_1 == Audio) {
        FMediaSampleCache::GetCachedAudioSampleRanges(this->Cache,param_3);
        return;
      }
      if (param_1 == Video) {
        FMediaSampleCache::GetCachedVideoSampleRanges(this->Cache,param_3);
        return;
      }
    }
    else if (param_1 == Video) {
      puVar2 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1);
      (**(code **)*puVar2)(puVar2,param_2,param_3);
    }
  }
  return;
}

// ReInit @ 146c09740

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::ReInit(FMediaPlayerFacade *this)

{
  FWindowsRecursiveMutex *pFVar1;
  undefined1 auVar2 [16];
  uint7 uStack_57;
  int iStack_40;
  undefined4 uStack_3c;
  undefined7 uStack_27;
  
  pFVar1 = &this->CriticalSection;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    FBlockOnRange::Reset(&this->BlockOnRange);
    this->BlockOnRangeDisabled = false;
    ::FString::Empty(&this->CurrentUrl);
    this->VideoSampleAvailability = -1;
    this->AudioSampleAvailability = -1;
    this->LastRate = 0.0;
    this->CurrentRate = 0.0;
    this->bHaveActiveAudio = false;
    (this->NextVideoSampleTime).Ticks = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar1 = &this->TimeValueLock;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      (this->LastAudioRenderedSampleTime).TimeStamp.Time.Ticks = -0x8000000000000000;
      (this->LastAudioRenderedSampleTime).SampledAtTime = -1.0;
      (this->LastAudioSampleProcessedTime).TimeStamp.Time.Ticks = -0x8000000000000000;
      (this->LastAudioSampleProcessedTime).SampledAtTime = -1.0;
      iStack_40 = (int)uStack_27 << 8;
      *(ulonglong *)&(this->LastVideoSampleProcessedTimeRange).LowerBound =
           (ulonglong)uStack_57 << 8;
      (this->LastVideoSampleProcessedTimeRange).LowerBound.Value.Time.Ticks = -0x8000000000000000;
      (this->CurrentFrameAudioTimeStamp).Time.Ticks = -0x8000000000000000;
      (this->CurrentFrameVideoTimeStamp).Time.Ticks = -0x8000000000000000;
      uStack_3c = (undefined4)((uint7)uStack_27 >> 0x18);
      (this->CurrentFrameVideoDisplayTimeStamp).Time.Ticks = -0x8000000000000000;
      auVar2._4_4_ = uStack_3c;
      auVar2._0_4_ = iStack_40;
      auVar2._8_8_ = 0;
      *(undefined1 (*) [16])
       &(this->LastVideoSampleProcessedTimeRange).LowerBound.Value.SequenceIndex = auVar2 << 0x40;
      *(undefined4 *)&(this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks = 0;
      *(undefined4 *)
       ((longlong)&(this->LastVideoSampleProcessedTimeRange).UpperBound.Value.Time.Ticks + 4) =
           0x80000000;
      (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.SequenceIndex = 0;
      (this->LastVideoSampleProcessedTimeRange).UpperBound.Value.LoopIndex = 0;
      (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = -0x8000000000000000;
      (this->NextEstVideoTimeAtFrameStart).SampledAtTime = -1.0;
      if ((this->MostRecentlyDeliveredVideoFrameTimecode).bIsSet != false) {
        (this->MostRecentlyDeliveredVideoFrameTimecode).bIsSet = false;
      }
      (this->SeekTargetTime).Time.Ticks = -0x8000000000000000;
      if ((this->NextSeekTime).bIsSet != false) {
        (this->NextSeekTime).bIsSet = false;
      }
      if ((this->NextSequenceIndex).bIsSet != false) {
        (this->NextSequenceIndex).bIsSet = false;
      }
                    /* WARNING: Could not recover jumptable at 0x000146c098cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReceiveMediaEvent @ 146c0a060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::ReceiveMediaEvent(FMediaPlayerFacade *this,EMediaEvent param_1)

{
  uint *puVar1;
  float fVar2;
  undefined8 *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  float fVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedVideoSamples> FVar15;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedVideoSamples> FVar16;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedSubtitleSamples> FVar17;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples> FVar18;
  longlong *plVar19;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedCaptionSamples> FVar20;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedCaptionSamples> FVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar25 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  FName local_res20;
  TRange<FMediaTimeStamp> local_e8;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FString local_90;
  FString local_80 [4];
  undefined1 auVar26 [16];
  
  if ((int)param_1 < 0xc) {
    if (6 < (byte)LogMediaUtils._0_1_) {
      MediaUtils::EventToString(local_80,param_1);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
      if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
      }
    }
    puVar1 = &(this->PlayerGuid).B;
    puVar22 = ::operator_new(0x10);
    if (puVar22 != (undefined8 *)0x0) {
      *(EMediaEvent *)(puVar22 + 1) = param_1;
      *puVar22 = 0;
      if (((ulonglong)puVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      puVar3 = *(undefined8 **)puVar1;
      *(undefined8 **)puVar1 = puVar22;
      UNLOCK();
      if (((ulonglong)puVar3 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      *puVar3 = puVar22;
      UNLOCK();
    }
  }
  else {
    if (param_1 == Internal_PurgeVideoSamplesHint) {
      plVar19 = *(longlong **)&(this->MediaEvent).field_0x18;
      pTVar4 = (TReferenceControllerBase<1> *)(this->NextVideoSampleTime).Ticks;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (plVar19 != (longlong *)0x0) {
        cVar8 = (**(code **)(*plVar19 + 0xc0))(plVar19,1);
        if ((cVar8 == '\0') &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentPlayer->GetPlayerFeatureFlag(IMediaPlayer::EFeatureFlag::UsePlaybackTimingV2)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                               ,0xdf0,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar9 = FBlockOnRange::IsSet((FBlockOnRange *)&this->VideoSampleSinks);
        if (!bVar9) {
          fVar2 = *(float *)((longlong)&(this->CurrentUrl).Data.AllocatorInstance.Data + 4);
          if (fVar2 != 0.0) {
            auVar25._8_8_ = 0;
            auVar25._0_8_ = __real_40c3884000000000;
            local_e8.LowerBound.Type.Value = '\x02';
            auVar25 = roundpd(auVar25,auVar25,1);
            uVar24 = 0;
            local_e8.LowerBound.Value.Time.Ticks = -0x8000000000000000;
            local_e8.LowerBound.Value.SequenceIndex = 0;
            local_e8.LowerBound.Value.LoopIndex = 0;
            local_e8.UpperBound.Type.Value = '\x02';
            local_e8.UpperBound.Value.Time.Ticks = -0x8000000000000000;
            local_e8.UpperBound.Value.SequenceIndex = 0;
            local_e8.UpperBound.Value.LoopIndex = 0;
            bVar9 = GetCurrentPlaybackTimeRange
                              ((FMediaPlayerFacade *)&this[-1].LifecycleManagerDelegateControl,
                               &local_e8,fVar2,(FTimespan)(longlong)auVar25._0_8_,true);
            if (bVar9) {
              bVar9 = fVar2 < 0.0;
              fVar29 = __real_3f800000 / fVar2;
              plVar13 = (longlong *)(**(code **)(*plVar19 + 0x28))(plVar19);
              iVar11 = (**(code **)(*plVar13 + 0x118))(plVar13);
              uVar23 = uVar24;
              if (2 < iVar11) {
                plVar13 = (longlong *)(**(code **)(*plVar19 + 0x28))(plVar19);
                auVar26._8_8_ = extraout_XMM0_Qb;
                auVar26._0_8_ = extraout_XMM0_Qa;
                pcVar5 = *(code **)(*plVar13 + 0xb0);
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (double)fVar29 * ___real_41286a0000000000 + __real_3fe0000000000000;
                roundpd(auVar26,auVar6,1);
                if ((local_e8.LowerBound.Type.Value == '\x02') &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Type != ERangeBoundTypes::Open",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                        ,99,L""), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar12 = (*pcVar5)(plVar13,&local_e8.LowerBound.Value,bVar9);
                uVar23 = (ulonglong)uVar12;
              }
              if (FThreadStats::bPrimaryEnable != false) {
                FVar15 = StatPtr_STAT_MediaUtils_FacadeNumPurgedVideoSamples;
                if (StatPtr_STAT_MediaUtils_FacadeNumPurgedVideoSamples ==
                    (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedVideoSamples>)0x0) {
                  pFVar14 = ::FName::FName(&local_res20,
                                           "STAT_MediaUtils_FacadeNumPurgedVideoSamples");
                  FVar15 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedVideoSamples>
                           )FThreadSafeStaticStatBase::DoSetup
                                      ((FThreadSafeStaticStatBase *)
                                       &StatPtr_STAT_MediaUtils_FacadeNumPurgedVideoSamples,*pFVar14
                                       ,L"MediaPlayerFacade NumPurgedVideoSamples","STATGROUP_Media"
                                       ,"STATCAT_Advanced",L"Media",true,true,ST_int64,false,false,
                                       MCR_Invalid);
                }
                FThreadStats::AddMessage<__int64>(*(FName *)FVar15,Set,uVar23,false);
              }
              if (uVar23 != 0) {
                FVar16 = StatPtr_STAT_MediaUtils_FacadeTotalPurgedVideoSamples;
                if (StatPtr_STAT_MediaUtils_FacadeTotalPurgedVideoSamples ==
                    (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedVideoSamples>)0x0)
                {
                  pFVar14 = ::FName::FName(&local_b8,"STAT_MediaUtils_FacadeTotalPurgedVideoSamples"
                                          );
                  FVar16 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedVideoSamples>
                            )FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_MediaUtils_FacadeTotalPurgedVideoSamples,
                                        *pFVar14,L"MediaPlayerFacade TotalPurgedVideoSamples",
                                        "STATGROUP_Media","STATCAT_Advanced",L"Media",true,false,
                                        ST_int64,false,false,MCR_Invalid);
                }
                FThreadStats::AddMessage<__int64>(*(FName *)FVar16,Add,uVar23,false);
              }
              plVar13 = (longlong *)(**(code **)(*plVar19 + 0x28))(plVar19);
              iVar11 = (**(code **)(*plVar13 + 0x100))(plVar13);
              fVar7 = __real_4b189680;
              fVar29 = __real_3f000000;
              uVar23 = uVar24;
              if (2 < iVar11) {
                plVar13 = (longlong *)(**(code **)(*plVar19 + 0x28))(plVar19);
                pcVar5 = *(code **)(*plVar13 + 0xb8);
                auVar27._0_8_ = (double)(fVar7 / fVar2 + fVar29);
                auVar27._8_8_ = 0;
                roundpd(auVar27,auVar27,1);
                if ((local_e8.LowerBound.Type.Value == '\x02') &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Type != ERangeBoundTypes::Open",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                        ,99,L""), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar12 = (*pcVar5)(plVar13,&local_e8.LowerBound.Value,bVar9);
                uVar23 = (ulonglong)uVar12;
              }
              if (FThreadStats::bPrimaryEnable != false) {
                FVar17 = StatPtr_STAT_MediaUtils_FacadeNumPurgedSubtitleSamples;
                if (StatPtr_STAT_MediaUtils_FacadeNumPurgedSubtitleSamples ==
                    (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedSubtitleSamples>)0x0
                   ) {
                  pFVar14 = ::FName::FName(&local_b0,
                                           "STAT_MediaUtils_FacadeNumPurgedSubtitleSamples");
                  FVar17 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedSubtitleSamples>
                            )FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_MediaUtils_FacadeNumPurgedSubtitleSamples,
                                        *pFVar14,L"MediaPlayerFacade NumPurgedSubtitleSamples",
                                        "STATGROUP_Media","STATCAT_Advanced",L"Media",true,true,
                                        ST_int64,false,false,MCR_Invalid);
                }
                FThreadStats::AddMessage<__int64>(*(FName *)FVar17,Set,uVar23,false);
              }
              if (uVar23 != 0) {
                FVar18 = StatPtr_STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples;
                if (StatPtr_STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples ==
                    (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples>)
                    0x0) {
                  pFVar14 = ::FName::FName(&local_a8,
                                           "STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples");
                  FVar18 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples>
                            )FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples,
                                        *pFVar14,L"MediaPlayerFacade TotalPurgedSubtitleSamples",
                                        "STATGROUP_Media","STATCAT_Advanced",L"Media",true,false,
                                        ST_int64,false,false,MCR_Invalid);
                }
                FThreadStats::AddMessage<__int64>(*(FName *)FVar18,Add,uVar23,false);
              }
              plVar13 = (longlong *)(**(code **)(*plVar19 + 0x28))(plVar19);
              iVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
              if (2 < iVar11) {
                plVar19 = (longlong *)(**(code **)(*plVar19 + 0x28))(plVar19);
                pcVar5 = *(code **)(*plVar19 + 0xc0);
                auVar28._0_8_ = (double)(fVar7 / fVar2 + fVar29);
                auVar28._8_8_ = 0;
                roundpd(auVar28,auVar28,1);
                if ((local_e8.LowerBound.Type.Value == '\x02') &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Type != ERangeBoundTypes::Open",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                        ,99,L""), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar12 = (*pcVar5)(plVar19,&local_e8.LowerBound.Value,bVar9);
                uVar24 = (ulonglong)uVar12;
              }
              if (FThreadStats::bPrimaryEnable != false) {
                FVar20 = StatPtr_STAT_MediaUtils_FacadeNumPurgedCaptionSamples;
                if (StatPtr_STAT_MediaUtils_FacadeNumPurgedCaptionSamples ==
                    (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedCaptionSamples>)0x0)
                {
                  pFVar14 = ::FName::FName(&local_a0,"STAT_MediaUtils_FacadeNumPurgedCaptionSamples"
                                          );
                  FVar20 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedCaptionSamples>
                            )FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_MediaUtils_FacadeNumPurgedCaptionSamples,
                                        *pFVar14,L"MediaPlayerFacade NumPurgedCaptionSamples",
                                        "STATGROUP_Media","STATCAT_Advanced",L"Media",true,true,
                                        ST_int64,false,false,MCR_Invalid);
                }
                FThreadStats::AddMessage<__int64>(*(FName *)FVar20,Set,uVar24,false);
              }
              if (uVar24 != 0) {
                FVar21 = StatPtr_STAT_MediaUtils_FacadeTotalPurgedCaptionSamples;
                if (StatPtr_STAT_MediaUtils_FacadeTotalPurgedCaptionSamples ==
                    (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedCaptionSamples>)
                    0x0) {
                  pFVar14 = ::FName::FName(&local_98,
                                           "STAT_MediaUtils_FacadeTotalPurgedCaptionSamples");
                  FVar21 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedCaptionSamples>
                            )FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_MediaUtils_FacadeTotalPurgedCaptionSamples,
                                        *pFVar14,L"MediaPlayerFacade TotalPurgedCaptionSamples",
                                        "STATGROUP_Media","STATCAT_Advanced",L"Media",true,false,
                                        ST_int64,false,false,MCR_Invalid);
                }
                FThreadStats::AddMessage<__int64>(*(FName *)FVar21,Add,uVar24,false);
              }
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
    if (param_1 == Internal_VideoSamplesAvailable) {
      if (6 < (byte)LogMediaUtils._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
      }
      (this->CurrentUrl).Data.ArrayMax = 1;
      return;
    }
    if (param_1 == Internal_VideoSamplesUnavailable) {
      if (6 < (byte)LogMediaUtils._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
      }
      (this->CurrentUrl).Data.ArrayMax = 0;
      return;
    }
    if (param_1 == Internal_AudioSamplesAvailable) {
      if (6 < (byte)LogMediaUtils._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
      }
      this->LastRate = 1.4013e-45;
      return;
    }
    if (param_1 == Internal_AudioSamplesUnavailable) {
      if (6 < (byte)LogMediaUtils._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u_PlayerFacade__A_151421928,
                   (FLogCategoryBase *)&LogMediaUtils);
      }
      this->LastRate = 0.0;
      return;
    }
    if (6 < (byte)LogMediaUtils._0_1_) {
      MediaUtils::EventToString(&local_90,param_1);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// ResetTracks @ 146c0b9e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::ResetTracks(FMediaPlayerFacade *this)

{
  (this->TrackSelection).UserSelection[0] = -1;
  (this->TrackSelection).UserSelection[1] = -1;
  (this->TrackSelection).PlayerSelection[0] = -1;
  (this->TrackSelection).PlayerSelection[1] = -1;
  (this->TrackSelection).UserSelection[2] = -1;
  (this->TrackSelection).UserSelection[3] = -1;
  (this->TrackSelection).PlayerSelection[2] = -1;
  (this->TrackSelection).PlayerSelection[3] = -1;
  (this->TrackSelection).UserSelection[4] = -1;
  (this->TrackSelection).UserSelection[5] = -1;
  (this->TrackSelection).PlayerSelection[4] = -1;
  (this->TrackSelection).PlayerSelection[5] = -1;
  (this->TrackSelection).UserSelection[6] = -1;
  (this->TrackSelection).PlayerSelection[6] = -1;
  return;
}

// Seek @ 146c0bb30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::Seek(FMediaPlayerFacade *this,FTimespan *param_1)

{
  TOptional<int> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar2;
  IMediaPlayer *pIVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int local_res8;
  char local_resc;
  FTimespan local_res18;
  longlong local_res20;
  int local_78 [2];
  int local_70;
  undefined1 local_6c;
  int local_68 [2];
  TRange<FTimespan> local_60;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->TimeValueLock);
  if ((this->NextSeekTime).bIsSet != false) {
    (this->NextSeekTime).bIsSet = false;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->TimeValueLock);
  pTVar2 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar3 = (this->Player).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar3 != (IMediaPlayer *)0x0) {
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    (**(code **)(*plVar8 + 8))(plVar8,&local_res20);
    if ((local_res20 == 0) || (local_res20 == 0x7fffffffffffffff)) {
      local_res18.Ticks = param_1->Ticks;
    }
    else {
      GetActivePlaybackRange(this,&local_60);
      plVar8 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      cVar5 = (**(code **)(*plVar8 + 0x38))(plVar8);
      if (cVar5 == '\0') {
        if ((local_60.UpperBound.Type.Value == '\x02') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if ((local_60.LowerBound.Type.Value == '\x02') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if (param_1->Ticks < local_60.UpperBound.Value.Ticks) {
          local_60.UpperBound.Value.Ticks = param_1->Ticks;
        }
        local_res18.Ticks = local_60.LowerBound.Value.Ticks;
        if (local_60.LowerBound.Value.Ticks < local_60.UpperBound.Value.Ticks) {
          local_res18.Ticks = local_60.UpperBound.Value.Ticks;
        }
      }
      else {
        if ((local_60.UpperBound.Type.Value == '\x02') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if ((local_60.LowerBound.Type.Value == '\x02') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if ((local_60.LowerBound.Type.Value == '\x02') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        lVar10 = param_1->Ticks - local_60.LowerBound.Value.Ticks;
        lVar11 = lVar10 % (local_60.UpperBound.Value.Ticks - local_60.LowerBound.Value.Ticks);
        if (lVar10 < 0) {
          lVar11 = lVar11 + (local_60.UpperBound.Value.Ticks - local_60.LowerBound.Value.Ticks);
        }
        if ((local_60.LowerBound.Type.Value == '\x02') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        local_res18.Ticks = local_60.LowerBound.Value.Ticks + lVar11;
      }
    }
    pTVar1 = &this->NextSequenceIndex;
    bVar6 = (this->NextSequenceIndex).bIsSet;
    local_6c = 0;
    iVar12 = local_68[0];
    if (bVar6 != false) {
      iVar12 = pTVar1->TypedValue;
    }
    cVar5 = (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,1);
    if (cVar5 != '\0') {
      cVar5 = (this->NextSequenceIndex).bIsSet;
      if ((bool)cVar5 == false) {
        iVar9 = 0;
      }
      else {
        iVar9 = pTVar1->TypedValue;
      }
      if ((TOptional<int> *)local_78 != pTVar1) {
        pTVar1->TypedValue = iVar9 + 1;
        cVar5 = '\x01';
        (this->NextSequenceIndex).bIsSet = true;
      }
      if ((pTVar1 != (TOptional<int> *)&local_70) && (cVar5 != '\0')) {
        local_70 = pTVar1->TypedValue;
        local_6c = 1;
      }
    }
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    cVar5 = (**(code **)(*plVar8 + 0x40))(plVar8,&local_res18);
    if (cVar5 != '\0') {
      lpCriticalSection = &this->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      cVar5 = (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,1);
      if (cVar5 == '\0') {
        cVar5 = (**(code **)((longlong)*pIVar3 + 0xb0))(pIVar3);
        if (cVar5 != '\0') {
          uVar7 = (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,4);
          bVar6 = false;
          goto LAB_146c0bf0d;
        }
      }
      else {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (((this->Player).Object != (IMediaPlayer *)0x0) &&
           ((this->NextSequenceIndex).bIsSet != false)) {
          plVar8 = (longlong *)(**(code **)((longlong)*(this->Player).Object + 0x28))();
          local_resc = (this->NextSequenceIndex).bIsSet;
          if ((bool)local_resc != false) {
            local_res8 = (this->NextSequenceIndex).TypedValue;
          }
          (**(code **)(*plVar8 + 0x68))(plVar8,&local_res8);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar7 = (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,4);
        bVar6 = true;
LAB_146c0bf0d:
        Flush(this,(bool)uVar7,bVar6);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      EnterCriticalSection((LPCRITICAL_SECTION)&this->TimeValueLock);
      if ((this->NextSequenceIndex).bIsSet == false) {
        iVar12 = 0;
      }
      else {
        iVar12 = (this->NextSequenceIndex).TypedValue;
      }
      (this->SeekTargetTime).Time.Ticks = local_res18.Ticks;
      (this->SeekTargetTime).SequenceIndex = iVar12;
      (this->SeekTargetTime).LoopIndex = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->TimeValueLock);
      bVar6 = true;
      goto LAB_146c0be1a;
    }
    if ((TOptional<int> *)local_68 != &this->NextSequenceIndex) {
      if (bVar6 == false) {
        if ((this->NextSequenceIndex).bIsSet != false) {
          (this->NextSequenceIndex).bIsSet = false;
        }
      }
      else {
        (this->NextSequenceIndex).TypedValue = iVar12;
        (this->NextSequenceIndex).bIsSet = true;
      }
    }
  }
  bVar6 = false;
LAB_146c0be1a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar6;
}

// SelectDefaultTracks @ 146c0bf80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::SelectDefaultTracks(FMediaPlayerFacade *this)

{
  undefined4 uVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMediaPlayer *pIVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iStack_24;
  int local_18;
  
  pTVar3 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar4 = (this->Player).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar4 != (IMediaPlayer *)0x0) {
    cVar5 = (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,6);
    if (cVar5 != '\0') {
      (this->TrackSelection).UserSelection[0] = -1;
      (this->TrackSelection).UserSelection[1] = -1;
      (this->TrackSelection).PlayerSelection[0] = -1;
      (this->TrackSelection).PlayerSelection[1] = -1;
      (this->TrackSelection).UserSelection[2] = -1;
      (this->TrackSelection).UserSelection[3] = -1;
      (this->TrackSelection).PlayerSelection[2] = -1;
      (this->TrackSelection).PlayerSelection[3] = -1;
      (this->TrackSelection).UserSelection[4] = -1;
      (this->TrackSelection).UserSelection[5] = -1;
      (this->TrackSelection).PlayerSelection[4] = -1;
      (this->TrackSelection).PlayerSelection[5] = -1;
      (this->TrackSelection).UserSelection[6] = -1;
      (this->TrackSelection).PlayerSelection[6] = -1;
      plVar7 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x38))(pIVar4);
      iVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,0);
      (this->TrackSelection).UserSelection[0] = iVar2;
      iVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,1);
      (this->TrackSelection).UserSelection[1] = iVar2;
      iVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,2);
      (this->TrackSelection).UserSelection[2] = iVar2;
      iVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,3);
      (this->TrackSelection).UserSelection[3] = iVar2;
      iVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,4);
      (this->TrackSelection).UserSelection[4] = iVar2;
      iVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,5);
      (this->TrackSelection).UserSelection[5] = iVar2;
      iVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,6);
      (this->TrackSelection).UserSelection[6] = iVar2;
      if (((this->ActivePlayerOptions).bIsSet != false) &&
         ((this->ActivePlayerOptions).TypedValue.TrackSelection == UseTrackOptionIndices)) {
        iVar9 = (this->ActivePlayerOptions).TypedValue.Tracks.Caption;
        iVar8 = (this->ActivePlayerOptions).TypedValue.Tracks.Metadata;
        iVar2 = (this->ActivePlayerOptions).TypedValue.Tracks.Video;
        uVar1 = (this->ActivePlayerOptions).TypedValue.Tracks.Subtitle;
        (this->TrackSelection).UserSelection[0] =
             (this->ActivePlayerOptions).TypedValue.Tracks.Audio;
        (this->TrackSelection).UserSelection[1] = iVar9;
        (this->TrackSelection).UserSelection[4] = uVar1;
        (this->TrackSelection).UserSelection[2] = iVar8;
        (this->TrackSelection).UserSelection[6] = iVar2;
      }
      goto LAB_146c0c18d;
    }
  }
  iVar8 = -1;
  iStack_24 = -1;
  iVar6 = 0;
  iVar9 = 0;
  iVar2 = -1;
  if (((this->ActivePlayerOptions).bIsSet != false) &&
     (iVar6 = 0, iVar9 = 0, iVar2 = -1,
     (this->ActivePlayerOptions).TypedValue.TrackSelection == UseTrackOptionIndices)) {
    iVar6 = (this->ActivePlayerOptions).TypedValue.Tracks.Audio;
    iStack_24 = (this->ActivePlayerOptions).TypedValue.Tracks.Caption;
    iVar9 = (this->ActivePlayerOptions).TypedValue.Tracks.Video;
    iVar2 = (this->ActivePlayerOptions).TypedValue.Tracks.Subtitle;
    iVar8 = (this->ActivePlayerOptions).TypedValue.Tracks.Metadata;
  }
  (this->TrackSelection).UserSelection[0] = iVar6;
  (this->TrackSelection).UserSelection[1] = iStack_24;
  (this->TrackSelection).UserSelection[2] = iVar8;
  (this->TrackSelection).UserSelection[4] = iVar2;
  (this->TrackSelection).UserSelection[6] = iVar9;
LAB_146c0c18d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SelectTrack @ 146c0c1b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::SelectTrack(FMediaPlayerFacade *this,EMediaTrackType param_1,int param_2)

{
  IMediaPlayer *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  
  pIVar1 = (this->Player).Object;
  pTVar2 = (this->Player).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x38))();
    iVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_1);
    if (param_2 < iVar3) {
      (this->TrackSelection).UserSelection[(int)param_1] = param_2;
      bVar5 = true;
      goto LAB_146c0c211;
    }
  }
  bVar5 = false;
LAB_146c0c211:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar5;
}

// SendSinkEvent @ 146c0c240

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::SendSinkEvent
          (FMediaPlayerFacade *this,EMediaSampleSinkEvent param_1,FMediaSampleSinkEventData *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink>::ReceiveEvent
              ((TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink> *)&this->AudioSampleSinks
               ,param_1,param_2);
    TMediaSampleSinks<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::ReceiveEvent
              (&this->MetadataSampleSinks,param_1,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::ReceiveEvent
              (&this->CaptionSampleSinks,param_1,param_2);
    TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::ReceiveEvent
              (&this->SubtitleSampleSinks,param_1,param_2);
    TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::ReceiveEvent
              (&this->VideoSampleSinks,param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetAreEventsSafeForAnyThread @ 146c0c2f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::SetAreEventsSafeForAnyThread(FMediaPlayerFacade *this,bool param_1)

{
  this->bAreEventsSafeForAnyThread = param_1;
  return;
}

// SetBlockOnTime @ 146c0c300

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::SetBlockOnTime(FMediaPlayerFacade *this,FTimespan *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  IMediaPlayer *pIVar3;
  longlong *plVar4;
  bool bVar5;
  TRange<FTimespan> local_48;
  TRange<FTimespan> local_28;
  
  pIVar3 = (this->Player).Object;
  if (pIVar3 != (IMediaPlayer *)0x0) {
    puVar2 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x10))();
    cVar1 = (**(code **)*puVar2)(puVar2,0);
    if (cVar1 != '\0') {
      local_48.LowerBound.Value = (FTimespan)param_1->Ticks;
      bVar5 = local_48.LowerBound.Value.Ticks != -0x8000000000000000;
      if (bVar5) {
        local_28.LowerBound.Type.Value = 1;
        local_48.LowerBound.Type.Value = 1;
        local_28.UpperBound.Type.Value = 1;
        local_28.UpperBound._1_7_ = local_48.LowerBound._1_7_;
        local_28.LowerBound.Value.Ticks = local_48.LowerBound.Value.Ticks;
        local_28.UpperBound.Value.Ticks = local_48.LowerBound.Value.Ticks;
        FBlockOnRange::SetRange(&this->BlockOnRange,&local_28);
        pIVar3 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
        plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
      else {
        local_28.LowerBound._0_8_ = (ulonglong)(uint7)local_28.LowerBound._1_7_ << 8;
        local_48.LowerBound._0_8_ = (ulonglong)(uint7)local_48.LowerBound._1_7_ << 8;
        local_28.LowerBound.Value.Ticks = 0;
        local_48.LowerBound.Value.Ticks = 0;
        local_48.UpperBound.Type.Value = local_28.LowerBound.Type.Value;
        local_48.UpperBound._1_7_ = local_28.LowerBound._1_7_;
        local_48.UpperBound.Value.Ticks = 0;
        FBlockOnRange::SetRange(&this->BlockOnRange,&local_48);
        pIVar3 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
        plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
      (**(code **)(*plVar4 + 0x60))(plVar4,bVar5);
    }
  }
  return;
}

// SetBlockOnTimeRange @ 146c0c420

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::SetBlockOnTimeRange(FMediaPlayerFacade *this,TRange<FTimespan> *param_1)

{
  FBlockOnRange::SetRange(&this->BlockOnRange,param_1);
  return;
}

// SetCacheWindow @ 146c0c440

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::SetCacheWindow(FMediaPlayerFacade *this,FTimespan param_1,FTimespan param_2)

{
  FMediaSampleCache *pFVar1;
  
  pFVar1 = this->Cache;
  (pFVar1->CacheAhead).Ticks = param_1.Ticks;
  (pFVar1->CacheBehind).Ticks = param_2.Ticks;
  return;
}

// SetGuid @ 146c0c460

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::SetGuid(FMediaPlayerFacade *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->PlayerGuid).A = param_1->A;
  (this->PlayerGuid).B = uVar1;
  (this->PlayerGuid).C = uVar2;
  (this->PlayerGuid).D = uVar3;
  return;
}

// SetLastAudioRenderedSampleTime @ 146c0ce30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::SetLastAudioRenderedSampleTime(FMediaPlayerFacade *this,FTimespan param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  LARGE_INTEGER local_res8;
  
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->LastAudioRenderedSampleTime).TimeStamp.Time.Ticks = param_1.Ticks;
    (this->LastAudioRenderedSampleTime).TimeStamp.SequenceIndex = 0;
    (this->LastAudioRenderedSampleTime).TimeStamp.LoopIndex = 0;
    QueryPerformanceCounter(&local_res8);
    (this->LastAudioRenderedSampleTime).SampledAtTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
                    /* WARNING: Could not recover jumptable at 0x000146c0cea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetLooping @ 146c0cec0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::SetLooping(FMediaPlayerFacade *this,bool param_1)

{
  IMediaPlayer *pIVar1;
  char cVar2;
  longlong *plVar3;
  undefined7 in_register_00000011;
  
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar3 = (longlong *)
             (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,CONCAT71(in_register_00000011,param_1));
    cVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,param_1);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// SetMediaOptions @ 146c0cf70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::SetMediaOptions(FMediaPlayerFacade *this,IMediaOptions *param_1)

{
  return;
}

// SetNativeVolume @ 146c0d080

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::SetNativeVolume(FMediaPlayerFacade *this,float param_1)

{
  IMediaPlayer *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c0d08f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x88))();
    return (bool)uVar2;
  }
  return false;
}

// SetNextSeek @ 146c0d0a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::SetNextSeek(FMediaPlayerFacade *this,FTimespan *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((TOptional<FTimespan> *)param_1 != &this->NextSeekTime) {
      (this->NextSeekTime).TypedValue.Ticks = param_1->Ticks;
      (this->NextSeekTime).bIsSet = true;
    }
                    /* WARNING: Could not recover jumptable at 0x000146c0d0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetPlaybackTimeRange @ 146c0d110

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::SetPlaybackTimeRange(FMediaPlayerFacade *this,TRange<FTimespan> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    uVar3 = (**(code **)(*plVar4 + 0x70))(plVar4,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar3;
}

// SetRate @ 146c0d250

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::SetRate(FMediaPlayerFacade *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMediaAudioSampleSink *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  atomic<int> aVar8;
  longlong *plVar9;
  TRangeSet<float> *pTVar10;
  IMediaPlayer *pIVar11;
  byte bVar12;
  bool bVar13;
  TReferenceControllerBase<1> *pTVar14;
  FMediaSampleSinkEventData_u_0 local_res8;
  void *local_58 [2];
  void *local_48 [6];
  
  bVar5 = false;
  bVar13 = false;
  lpCriticalSection = &this->CriticalSection;
  local_res8.SampleDataUpdate.Dummy = (<unnamed_type_SampleDataUpdate>)0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pIVar11 = (this->Player).Object;
  if (pIVar11 != (IMediaPlayer *)0x0) {
    if (param_1 == 0.0) {
LAB_146c0d31f:
      bVar12 = 0;
    }
    else {
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x10))();
      pTVar10 = (TRangeSet<float> *)(**(code **)(*plVar9 + 0x28))(plVar9,local_48,0);
      bVar5 = true;
      bVar13 = false;
      bVar4 = TRangeSet<float>::Contains(pTVar10,param_1);
      if (bVar4) goto LAB_146c0d31f;
      pIVar11 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x10))(pIVar11);
      pTVar10 = (TRangeSet<float> *)(**(code **)(*plVar9 + 0x28))(plVar9,local_58,1);
      bVar5 = true;
      bVar13 = true;
      bVar4 = TRangeSet<float>::Contains(pTVar10,param_1);
      if (bVar4) goto LAB_146c0d31f;
      bVar12 = 1;
    }
    if ((bVar13) && (local_58[0] != (void *)0x0)) {
      FMemory::Free(local_58[0]);
    }
    if ((bVar5) && (local_48[0] != (void *)0x0)) {
      FMemory::Free(local_48[0]);
    }
    if (bVar12 != 0) {
      param_1 = 0.0;
    }
    bVar13 = (bool)(bVar12 ^ 1);
    if (((this->Player).Object == (IMediaPlayer *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    plVar9 = (longlong *)(**(code **)((longlong)*(this->Player).Object + 0x10))();
    cVar7 = (**(code **)(*plVar9 + 0x58))(plVar9,param_1);
    if (cVar7 != '\0') {
      if (param_1 == this->CurrentRate) goto LAB_146c0d489;
      local_res8._0_4_ = param_1;
      SendSinkEvent(this,PlaybackRateChanged,(FMediaSampleSinkEventData *)&local_res8.Attached);
      if (0.0 <= param_1 * this->LastRate) {
        if (param_1 == 0.0) {
          pTVar14 = (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController;
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            aVar3 = pTVar14->SharedReferenceCount;
            do {
              if (aVar3 == (atomic<int>)0x0) {
                pTVar14 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_146c0d460;
              }
              LOCK();
              aVar8 = pTVar14->SharedReferenceCount;
              bVar5 = aVar3 == aVar8;
              if (bVar5) {
                pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
                aVar8 = aVar3;
              }
              UNLOCK();
              aVar3 = aVar8;
            } while (!bVar5);
            pFVar1 = (this->PrimaryAudioSink).Object;
            if (pFVar1 != (FMediaAudioSampleSink *)0x0) {
              (**(code **)(*(longlong *)pFVar1 + 0x38))();
            }
          }
LAB_146c0d460:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
          this->CurrentRate = param_1;
          goto LAB_146c0d489;
        }
LAB_146c0d41e:
        this->LastRate = param_1;
      }
      else {
        pIVar11 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
        bVar5 = (bool)(**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,1);
        Flush(this,bVar5,false);
        if (param_1 != 0.0) goto LAB_146c0d41e;
      }
      this->CurrentRate = param_1;
      goto LAB_146c0d489;
    }
  }
  bVar13 = false;
LAB_146c0d489:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar13;
}

// SetTrackFormat @ 146c0d4e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::SetTrackFormat
          (FMediaPlayerFacade *this,EMediaTrackType param_1,int param_2,int param_3)

{
  IMediaPlayer *pIVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x000146c0d52a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,param_1,param_2,param_3);
    return (bool)uVar2;
  }
  return false;
}

// SetVideoTrackFrameRate @ 146c0d5b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::SetVideoTrackFrameRate
          (FMediaPlayerFacade *this,int param_1,int param_2,float param_3)

{
  IMediaPlayer *pIVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x000146c0d5fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1,param_2,param_3);
    return (bool)uVar2;
  }
  return false;
}

// SetViewField @ 146c0d620

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::SetViewField(FMediaPlayerFacade *this,float param_1,float param_2,bool param_3)

{
  IMediaPlayer *pIVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 in_RDX;
  undefined7 in_register_00000089;
  
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar3 = (longlong *)
             (**(code **)((longlong)*pIVar1 + 0x48))
                       (pIVar1,in_RDX,param_2,CONCAT71(in_register_00000089,param_3));
    cVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2,param_3);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// SetViewOrientation @ 146c0d690

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::SetViewOrientation(FMediaPlayerFacade *this,TQuat<double> *param_1,bool param_2)

{
  IMediaPlayer *pIVar1;
  char cVar2;
  longlong *plVar3;
  undefined7 in_register_00000081;
  
  pIVar1 = (this->Player).Object;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar3 = (longlong *)
             (**(code **)((longlong)*pIVar1 + 0x48))
                       (pIVar1,param_1,CONCAT71(in_register_00000081,param_2));
    cVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_2);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// SupportsPlaybackTimeRange @ 146c0e080

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::SupportsPlaybackTimeRange(FMediaPlayerFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  
  pTVar1 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMediaPlayer *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    uVar3 = (**(code **)*puVar4)(puVar4,5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar3;
}

// SupportsRate @ 146c0e0f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerFacade::SupportsRate(FMediaPlayerFacade *this,float param_1,bool param_2)

{
  IMediaPlayer *pIVar1;
  bool bVar2;
  longlong *plVar3;
  TRangeSet<float> *this_00;
  bool bVar4;
  void *local_28 [4];
  
  pIVar1 = (this->Player).Object;
  bVar4 = false;
  if (pIVar1 != (IMediaPlayer *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x10))();
    this_00 = (TRangeSet<float> *)(**(code **)(*plVar3 + 0x28))(plVar3,local_28,param_2);
    bVar4 = true;
    bVar2 = TRangeSet<float>::Contains(this_00,param_1);
    if (bVar2) {
      bVar2 = true;
      goto LAB_146c0e14f;
    }
  }
  bVar2 = false;
LAB_146c0e14f:
  if ((bVar4) && (local_28[0] != (void *)0x0)) {
    FMemory::Free(local_28[0]);
  }
  return bVar2;
}

// TickFetch @ 146c0e190

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::TickFetch(FMediaPlayerFacade *this,FTimespan param_1,FTimespan param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  float fVar3;
  EMediaEvent EVar4;
  IMediaPlayer *pIVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  longlong lVar8;
  longlong *plVar9;
  TNode *pTVar10;
  TNode *pTVar11;
  code *pcVar12;
  double dVar13;
  bool bVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  FTimespan FVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  bool bVar22;
  uint uVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickFetch> FVar25;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTime> FVar26;
  IMediaSamples *pIVar27;
  FDateTime FVar28;
  TRange<FMediaTimeStamp> *pTVar29;
  FMediaTimeStamp *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong lVar30;
  uint uVar31;
  FName FVar32;
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  FColor_u_0 local_224;
  EMediaEvent local_220;
  TRangeBound<FTimespan> local_218;
  TRangeBound<FTimespan> local_208;
  FName local_1f8;
  FName local_1f0;
  longlong local_1e0;
  TReferenceControllerBase<1> *local_1d8;
  LARGE_INTEGER local_1d0;
  FStatMessage local_1c8;
  undefined4 local_1b7;
  undefined2 local_1b3;
  undefined1 local_1b1;
  TRangeBound<FTimespan> local_1a8;
  TRangeBound<FTimespan> local_198;
  TRangeBound<FTimespan> local_188;
  TRangeBound<FTimespan> local_178;
  TRangeBound<FTimespan> local_168;
  TRange<FTimespan> local_158;
  TRange<FTimespan> local_138;
  TRange<FTimespan> local_118;
  FDestructionSentinel local_f8;
  FName local_e0;
  FName local_d8 [3];
  FString local_c0;
  FString local_b0 [7];
  
  lVar30 = 0;
  FVar25 = StatPtr_STAT_MediaUtils_FacadeTickFetch;
  if (StatPtr_STAT_MediaUtils_FacadeTickFetch ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickFetch>)0x0) {
    pFVar24 = ::FName::FName(&local_e0,"STAT_MediaUtils_FacadeTickFetch");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickFetch>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTickFetch,
                        *pFVar24,L"MediaUtils MediaPlayerFacade TickFetch","STATGROUP_Media",
                        "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar25;
  bVar20 = false;
  bVar14 = false;
  local_1f0.ComparisonIndex.Value = 0;
  local_1f0.Number = 0;
  bVar22 = false;
  if ((FVar32.ComparisonIndex.Value.Value != 0) || (FVar32.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_224.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_224._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar20 = false;
      bVar14 = true;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_1f8.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f8,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                   ,0x93c);
        bVar20 = true;
        bVar14 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar15 = true;
      bVar22 = bVar14;
      goto LAB_146c0e30c;
    }
  }
  bVar15 = false;
  FVar32 = local_1f0;
LAB_146c0e30c:
  local_1d8 = (this->Player).SharedReferenceCount.ReferenceController;
  pIVar5 = (this->Player).Object;
  if (local_1d8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1d8->SharedReferenceCount = (atomic<int>)((int)local_1d8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar5 == (IMediaPlayer *)0x0) {
    if ((this->bAreEventsSafeForAnyThread != false) || (bVar19 = IsInGameThread(), bVar19)) {
      while (pTVar6 = ((this->QueuedEventBroadcasts).Tail)->NextNode, pTVar6 != (TNode *)0x0) {
        local_220 = pTVar6->Item;
        pTVar7 = (this->QueuedEventBroadcasts).Tail;
        (this->QueuedEventBroadcasts).Tail = pTVar6;
        pTVar6->Item = MediaBuffering;
        ::operator_delete(pTVar7,0x10);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->MediaEvent,
                   (FWriteAccessScope *)&local_f8);
        puVar1 = &(this->MediaEvent).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        uVar31 = *(int *)&(this->MediaEvent).field_0x10 - 1;
        bVar14 = false;
        if (-1 < (int)uVar31) {
          lVar30 = (longlong)(int)uVar31 << 4;
          do {
            uVar23 = 0;
            if ((int)uVar31 < *(int *)&(this->MediaEvent).field_0x10) {
              uVar23 = ~uVar31 >> 0x1f;
            }
            if ((uVar23 == 0) &&
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
            lVar8 = *(longlong *)&(this->MediaEvent).field_0x8;
            if (((*(int *)(lVar8 + 8 + lVar30) == 0) ||
                (plVar9 = *(longlong **)(lVar8 + lVar30), plVar9 == (longlong *)0x0)) ||
               (cVar21 = (**(code **)(*plVar9 + 0x68))(), cVar21 == '\0')) {
              bVar14 = true;
            }
            lVar30 = lVar30 + -0x10;
            uVar31 = uVar31 - 1;
          } while (-1 < (int)uVar31);
        }
        puVar1 = &(this->MediaEvent).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar14) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->MediaEvent,false);
        }
        if (local_f8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
        }
      }
      bVar19 = true;
      bVar14 = bVar22;
      bVar20 = false;
      bVar15 = false;
    }
    else {
      bVar19 = false;
    }
    while (pTVar10 = ((this->QueuedEvents).Tail)->NextNode, pTVar10 != (TNode *)0x0) {
      EVar4 = pTVar10->Item;
      pTVar11 = (this->QueuedEvents).Tail;
      (this->QueuedEvents).Tail = pTVar10;
      pTVar10->Item = MediaBuffering;
      ::operator_delete(pTVar11,0x10);
      ProcessEvent(this,EVar4,bVar19);
    }
  }
  else {
    cVar21 = (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,1);
    if (cVar21 == '\0') {
      (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,param_1.Ticks,param_2.Ticks);
      while (pTVar10 = ((this->QueuedEvents).Tail)->NextNode, pTVar10 != (TNode *)0x0) {
        EVar4 = pTVar10->Item;
        pTVar11 = (this->QueuedEvents).Tail;
        (this->QueuedEvents).Tail = pTVar10;
        pTVar10->Item = MediaBuffering;
        ::operator_delete(pTVar11,0x10);
        ProcessEvent(this,EVar4,true);
      }
      GetTime(this);
      if (FThreadStats::bPrimaryEnable != false) {
        FVar26 = StatPtr_STAT_MediaUtils_FacadeTime;
        if (StatPtr_STAT_MediaUtils_FacadeTime ==
            (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTime>)0x0) {
          pFVar24 = ::FName::FName(local_d8,"STAT_MediaUtils_FacadeTime");
          FVar26 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTime>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTime,
                              *pFVar24,L"MediaPlayerFacade PlaybackTime","STATGROUP_Media",
                              "STATCAT_Advanced",L"Media",true,true,NumBits,false,false,MCR_Invalid)
          ;
        }
        FThreadStats::AddMessage<double>
                  (*(FName *)FVar26,Set,(double)local_1e0 * __real_3e7ad7f29abcaf48,false);
      }
      FVar18.Ticks = local_1a8.Value.Ticks;
      fVar3 = this->CurrentRate;
      if (fVar3 == 0.0) {
        fVar3 = this->LastRate;
      }
      local_1a8.Value.Ticks._0_4_ = (undefined4)local_1e0;
      uVar39 = (undefined4)local_1a8.Value.Ticks;
      local_1a8.Value.Ticks._4_4_ = (undefined4)((ulonglong)local_1e0 >> 0x20);
      uVar40 = local_1a8.Value.Ticks._4_4_;
      if (fVar3 <= 0.0) {
        uVar36 = (undefined4)local_1a8.Value.Ticks;
        uVar37 = local_1a8.Value.Ticks._4_4_;
        local_1a8.Value = FVar18;
        if (0.0 <= fVar3) {
          local_178.Type.Value = '\x01';
          local_178.Value.Ticks = local_1e0;
          local_168.Type.Value = '\x01';
          local_168.Value.Ticks = local_1e0;
          uVar34 = local_178._0_4_;
          uVar35 = local_178._4_4_;
          uVar38 = local_168._0_4_;
        }
        else {
          local_188.Value.Ticks = 0;
          local_188.Type.Value = '\x02';
          local_188.Value.Ticks._0_4_ = 0;
          local_188.Value.Ticks._4_4_ = 0;
          local_198.Type.Value = '\x01';
          local_198.Value.Ticks = local_1e0;
          uVar34 = local_198._0_4_;
          uVar35 = local_198._4_4_;
          uVar38 = local_188._0_4_;
          uVar39 = (undefined4)local_188.Value.Ticks;
          uVar40 = local_188.Value.Ticks._4_4_;
        }
      }
      else {
        local_218._4_1_ = SUB41((uint)local_1b7 >> 0x18,0);
        local_1a8.Type.Value = '\x01';
        local_1a8.Value.Ticks = local_1e0;
        local_218._1_3_ = (int3)local_1b7;
        local_218.Type.Value = '\x02';
        uVar35._1_2_ = local_1b3;
        uVar35._0_1_ = local_218._4_1_;
        uVar35._3_1_ = local_1b1;
        local_218.Value.Ticks._0_4_ = 0;
        local_218.Value.Ticks._4_4_ = 0;
        uVar34 = local_218._0_4_;
        uVar36 = (undefined4)local_218.Value.Ticks;
        uVar37 = local_218.Value.Ticks._4_4_;
        uVar38 = local_1a8._0_4_;
      }
      local_218._4_1_ = SUB41(uVar35,0);
      local_218._5_2_ = SUB42(uVar35,1);
      local_218._7_1_ = SUB41(uVar35,3);
      local_218.Value.Ticks._4_4_ = uVar37;
      local_218.Value.Ticks._0_4_ = uVar36;
      local_218._0_4_ = uVar34;
      local_208._0_4_ = uVar38;
      local_208.Value.Ticks._0_4_ = uVar39;
      local_208.Value.Ticks._4_4_ = uVar40;
      pIVar27 = (IMediaSamples *)(**(code **)((longlong)*pIVar5 + 0x28))(pIVar5);
      bVar22 = false;
      dVar13 = (double)UE::MediaUtils::Private::GBlockOnFetchTimeout;
      local_158.LowerBound._0_4_ = uVar34;
      local_158.LowerBound._4_4_ = uVar35;
      local_158.LowerBound.Value.Ticks._0_4_ = uVar36;
      local_158.LowerBound.Value.Ticks._4_4_ = uVar37;
      local_158.UpperBound._0_4_ = uVar38;
      local_158.UpperBound.Value.Ticks._0_4_ = uVar39;
      local_158.UpperBound.Value.Ticks._4_4_ = uVar40;
      ProcessCaptionSamplesV1(this,pIVar27,&local_158);
      local_138.LowerBound._0_4_ = uVar34;
      local_138.LowerBound._4_4_ = uVar35;
      local_138.LowerBound.Value.Ticks._0_4_ = uVar36;
      local_138.LowerBound.Value.Ticks._4_4_ = uVar37;
      local_138.UpperBound._0_4_ = uVar38;
      local_138.UpperBound.Value.Ticks._0_4_ = uVar39;
      local_138.UpperBound.Value.Ticks._4_4_ = uVar40;
      ProcessSubtitleSamplesV1(this,pIVar27,&local_138);
      local_118.LowerBound._0_4_ = uVar34;
      local_118.LowerBound._4_4_ = uVar35;
      local_118.LowerBound.Value.Ticks._0_4_ = uVar36;
      local_118.LowerBound.Value.Ticks._4_4_ = uVar37;
      local_118.UpperBound._0_4_ = uVar38;
      local_118.UpperBound.Value.Ticks._0_4_ = uVar39;
      local_118.UpperBound.Value.Ticks._4_4_ = uVar40;
      ProcessVideoSamplesV1(this,pIVar27,&local_118);
      bVar19 = BlockOnFetch(this);
      dVar17 = __real_416312d000000000;
      dVar16 = __real_3fe0000000000000;
      if (bVar19) {
        do {
          if (bVar22) {
            FVar28 = FDateTime::UtcNow();
            auVar33._8_8_ = 0;
            auVar33._0_8_ = dVar13 * dVar17 + dVar16;
            auVar33 = roundpd(auVar33,auVar33,1);
            if ((longlong)auVar33._0_8_ <= *(longlong *)FVar28.Ticks - lVar30) {
              if (5 < (byte)LogMediaUtils._0_1_) {
                pTVar29 = FBlockOnRange::GetRange(&this->BlockOnRange);
                this_00 = TRange<FMediaTimeStamp>::GetLowerBoundValue(pTVar29);
                FTimespan::ToString(&this_00->Time,local_b0,L"%h:%m:%s.%t");
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
                if (local_b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b0[0].Data.AllocatorInstance.Data);
                }
              }
              break;
            }
          }
          else {
            if (6 < (byte)LogMediaUtils._0_1_) {
              pTVar29 = FBlockOnRange::GetRange(&this->BlockOnRange);
              if (((pTVar29->LowerBound).Type.Value == '\x02') &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar22)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              FTimespan::ToString(&(pTVar29->LowerBound).Value.Time,&local_c0,L"%h:%m:%s.%t");
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
            }
            bVar22 = true;
            FVar28 = FDateTime::UtcNow();
            lVar30 = *(longlong *)FVar28.Ticks;
          }
          FWindowsPlatformProcess::Sleep(0.0);
          local_158.LowerBound._0_4_ = uVar34;
          local_158.LowerBound._4_4_ = uVar35;
          local_158.LowerBound.Value.Ticks._0_4_ = uVar36;
          local_158.LowerBound.Value.Ticks._4_4_ = uVar37;
          local_158.UpperBound._0_4_ = uVar38;
          local_158.UpperBound.Value.Ticks._0_4_ = uVar39;
          local_158.UpperBound.Value.Ticks._4_4_ = uVar40;
          ProcessCaptionSamplesV1(this,pIVar27,&local_158);
          local_138.LowerBound._0_4_ = uVar34;
          local_138.LowerBound._4_4_ = uVar35;
          local_138.LowerBound.Value.Ticks._0_4_ = uVar36;
          local_138.LowerBound.Value.Ticks._4_4_ = uVar37;
          local_138.UpperBound._0_4_ = uVar38;
          local_138.UpperBound.Value.Ticks._0_4_ = uVar39;
          local_138.UpperBound.Value.Ticks._4_4_ = uVar40;
          ProcessSubtitleSamplesV1(this,pIVar27,&local_138);
          local_118.LowerBound._0_4_ = uVar34;
          local_118.LowerBound._4_4_ = uVar35;
          local_118.LowerBound.Value.Ticks._0_4_ = uVar36;
          local_118.LowerBound.Value.Ticks._4_4_ = uVar37;
          local_118.UpperBound._0_4_ = uVar38;
          local_118.UpperBound.Value.Ticks._0_4_ = uVar39;
          local_118.UpperBound.Value.Ticks._4_4_ = uVar40;
          ProcessVideoSamplesV1(this,pIVar27,&local_118);
          bVar19 = BlockOnFetch(this);
        } while (bVar19);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d8);
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar15) && (FVar32 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_1c8.NameAndInfo.Index = FVar32.ComparisonIndex.Value;
      local_1c8.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1d0);
      local_1c8.StatData.Pad[4] = '\0';
      local_1c8.StatData.Pad[5] = '\0';
      local_1c8.StatData.Pad[6] = '\0';
      local_1c8.StatData.Pad[7] = '\0';
      local_1c8.StatData.Pad[0] = local_1d0.s.LowPart._0_1_;
      local_1c8.StatData.Pad[1] = local_1d0.s.LowPart._1_1_;
      local_1c8.StatData.Pad[2] = local_1d0.s.LowPart._2_1_;
      local_1c8.StatData.Pad[3] = local_1d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_1c8);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// TickInput @ 146c0ea80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::TickInput(FMediaPlayerFacade *this,FTimespan param_1,FTimespan param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  EMediaEvent EVar3;
  TReferenceControllerBase<1> *pTVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  longlong lVar7;
  longlong *plVar8;
  TNode *pTVar9;
  TNode *pTVar10;
  FName FVar11;
  code *pcVar12;
  double dVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  bool bVar23;
  uint uVar24;
  int iVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickInput> FVar27;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTime> FVar28;
  IMediaPlayer *pIVar29;
  IMediaSamples *pIVar30;
  undefined8 *puVar31;
  FString *pFVar32;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumVideoSamples> FVar33;
  TSharedPtr<FMediaAudioSampleSink,1> *pTVar34;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar35;
  FName FVar36;
  void *pvVar37;
  longlong lVar38;
  TRange<FMediaTimeStamp> local_168;
  FColor_u_0 local_138;
  int local_134;
  int local_130;
  FName local_128;
  FScriptContainerElement *local_120;
  FName local_118;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  FStatMessage local_f8;
  FDestructionSentinel local_e8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  void *local_b8 [2];
  FString local_a8;
  FString local_98;
  TSharedPtr<FMediaAudioSampleSink,1> local_88;
  undefined8 local_78 [8];
  
  pvVar37 = (void *)0x0;
  FVar27 = StatPtr_STAT_MediaUtils_FacadeTickInput;
  if (StatPtr_STAT_MediaUtils_FacadeTickInput ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickInput>)0x0) {
    pFVar26 = ::FName::FName(&local_d0,"STAT_MediaUtils_FacadeTickInput");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickInput>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTickInput,
                        *pFVar26,L"MediaUtils MediaPlayerFacade TickInput","STATGROUP_Media",
                        "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar36 = *(FName *)FVar27;
  bVar17 = false;
  bVar16 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  bVar20 = false;
  bVar19 = false;
  if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_146c0ebea:
    bVar17 = bVar20;
    bVar16 = bVar19;
    bVar19 = false;
    FVar36 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar17 = false;
      bVar16 = true;
      bVar20 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value;
        local_128.Number = FVar36.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                   ,0x8ae);
        bVar17 = true;
        bVar16 = true;
        bVar20 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c0ebea;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar19 = true;
  }
  if ((this->Player).Object == (IMediaPlayer *)0x0) goto LAB_146c0f55e;
  UpdateTrackSelectionWithPlayer(this);
  bVar20 = this->bHaveActiveAudio;
  if (((((this->PrimaryAudioSink).Object == (FMediaAudioSampleSink *)0x0) ||
       (pTVar4 = (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController,
       pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) ||
     ((this->TrackSelection).UserSelection[0] == -1)) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  this->bHaveActiveAudio = bVar21;
  if ((bVar20 != false) && (bVar21 == false)) {
    (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = -0x8000000000000000;
    (this->NextEstVideoTimeAtFrameStart).SampledAtTime = -1.0;
  }
  local_120 = (FScriptContainerElement *)0x15060d16c;
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pIVar29 = (this->Player).Object;
  (**(code **)((longlong)*pIVar29 + 0xa8))(pIVar29,param_1.Ticks);
  if ((this->bAreEventsSafeForAnyThread != false) || (bVar20 = IsInGameThread(), bVar20)) {
    bVar20 = true;
  }
  else {
    bVar20 = false;
  }
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pIVar29 = (this->Player).Object;
  cVar22 = (**(code **)((longlong)*pIVar29 + 0xc0))(pIVar29,1);
  if (cVar22 != '\0') {
    if (bVar20 != false) {
      while (pTVar5 = ((this->QueuedEventBroadcasts).Tail)->NextNode, pTVar5 != (TNode *)0x0) {
        pTVar6 = (this->QueuedEventBroadcasts).Tail;
        (this->QueuedEventBroadcasts).Tail = pTVar5;
        pTVar5->Item = MediaBuffering;
        ::operator_delete(pTVar6,0x10);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->MediaEvent,
                   (FWriteAccessScope *)&local_e8);
        puVar1 = &(this->MediaEvent).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        uVar35 = *(int *)&(this->MediaEvent).field_0x10 - 1;
        bVar21 = false;
        if (-1 < (int)uVar35) {
          lVar38 = (longlong)(int)uVar35 << 4;
          do {
            uVar24 = 0;
            if ((int)uVar35 < *(int *)&(this->MediaEvent).field_0x10) {
              uVar24 = ~uVar35 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar7 = *(longlong *)&(this->MediaEvent).field_0x8;
            if (((*(int *)(lVar7 + 8 + lVar38) == 0) ||
                (plVar8 = *(longlong **)(lVar7 + lVar38), plVar8 == (longlong *)0x0)) ||
               (cVar22 = (**(code **)(*plVar8 + 0x68))(), cVar22 == '\0')) {
              bVar21 = true;
            }
            lVar38 = lVar38 + -0x10;
            uVar35 = uVar35 - 1;
          } while (-1 < (int)uVar35);
        }
        puVar1 = &(this->MediaEvent).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar21) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->MediaEvent,false);
        }
        if (local_e8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
        }
      }
    }
    while (pTVar9 = ((this->QueuedEvents).Tail)->NextNode, pTVar9 != (TNode *)0x0) {
      EVar3 = pTVar9->Item;
      pTVar10 = (this->QueuedEvents).Tail;
      (this->QueuedEvents).Tail = pTVar9;
      pTVar9->Item = MediaBuffering;
      ::operator_delete(pTVar10,0x10);
      ProcessEvent(this,EVar3,bVar20);
    }
    if ((this->Player).Object == (IMediaPlayer *)0x0) goto LAB_146c0f55e;
    PreSampleProcessingTimeHandling(this);
    local_168.LowerBound.Type.Value = '\x02';
    local_168.LowerBound.Value.Time.Ticks = -0x8000000000000000;
    local_168.LowerBound.Value.SequenceIndex = 0;
    local_168.LowerBound.Value.LoopIndex = 0;
    local_168.UpperBound.Type.Value = '\x02';
    local_168.UpperBound.Value.Time.Ticks = -0x8000000000000000;
    local_168.UpperBound.Value.SequenceIndex = 0;
    local_168.UpperBound.Value.LoopIndex = 0;
    bVar21 = GetCurrentPlaybackTimeRange(this,&local_168,this->CurrentRate,param_1,false);
    if (!bVar21) goto LAB_146c0f55e;
    if (FThreadStats::bPrimaryEnable != false) {
      FVar28 = StatPtr_STAT_MediaUtils_FacadeTime;
      if (StatPtr_STAT_MediaUtils_FacadeTime ==
          (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTime>)0x0) {
        pFVar26 = ::FName::FName(&local_c8,"STAT_MediaUtils_FacadeTime");
        FVar28 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTime>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTime,
                            *pFVar26,L"MediaPlayerFacade PlaybackTime","STATGROUP_Media",
                            "STATCAT_Advanced",L"Media",true,true,NumBits,false,false,MCR_Invalid);
      }
      FVar11 = *(FName *)FVar28;
      if ((local_168.LowerBound.Type.Value == '\x02') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FThreadStats::AddMessage<double>
                (FVar11,Set,(double)local_168.LowerBound.Value.Time.Ticks * __real_3e7ad7f29abcaf48,
                 false);
    }
    pIVar29 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
    pIVar30 = (IMediaSamples *)(**(code **)((longlong)*pIVar29 + 0x28))(pIVar29);
    dVar13 = FWindowsPlatformTime::Seconds();
    ProcessCaptionSamples(this,pIVar30,&local_168);
    ProcessSubtitleSamples(this,pIVar30,&local_168);
    bVar21 = ProcessVideoSamples(this,pIVar30,&local_168);
    dVar18 = __real_4170000000000000;
    if (!bVar21) {
      while (bVar21 = BlockOnFetch(this), bVar21) {
        if (((this->Player).Object == (IMediaPlayer *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        (**(code **)((longlong)*(this->Player).Object + 0xa8))();
        UpdateSeekStatus(this,(FMediaTimeStamp *)0x0);
        bVar21 = false;
        while (pTVar9 = ((this->QueuedEvents).Tail)->NextNode, pTVar9 != (TNode *)0x0) {
          EVar3 = pTVar9->Item;
          pTVar10 = (this->QueuedEvents).Tail;
          (this->QueuedEvents).Tail = pTVar9;
          pTVar9->Item = MediaBuffering;
          ::operator_delete(pTVar10,0x10);
          if ((EVar3 == MediaClosed) || (EVar3 == MediaOpenFailed)) {
            bVar21 = true;
          }
          ProcessEvent(this,EVar3,bVar20);
        }
        if (((this->Player).Object == (IMediaPlayer *)0x0) || (bVar21)) {
          if (2 < (byte)LogMediaUtils._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
          }
          this->BlockOnRangeDisabled = true;
          break;
        }
        QueryPerformanceCounter(&local_108);
        if ((double)UE::MediaUtils::Private::GBlockOnFetchTimeout <
            ((double)local_108.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar18) - dVar13)
        {
          pIVar29 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
          puVar31 = (undefined8 *)(**(code **)((longlong)*pIVar29 + 0x40))(pIVar29,local_b8);
          if (local_78 != puVar31) {
            pvVar37 = (void *)*puVar31;
            *puVar31 = 0;
            puVar31[1] = 0;
          }
          if (local_b8[0] != (void *)0x0) {
            FMemory::Free(local_b8[0]);
          }
          if (1 < (byte)LogMediaUtils._0_1_) {
            if ((local_168.UpperBound.Type.Value == '\x02') &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if ((local_168.UpperBound.Type.Value == '\x02') &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if ((local_168.UpperBound.Type.Value == '\x02') &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FTimespan::ToString(&local_168.UpperBound.Value.Time,&local_98,L"%h:%m:%s.%t");
            if ((local_168.LowerBound.Type.Value == '\x02') &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_134 = local_168.LowerBound.Value.LoopIndex;
            if ((local_168.LowerBound.Type.Value == '\x02') &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_130 = local_168.LowerBound.Value.SequenceIndex;
            if ((local_168.LowerBound.Type.Value == '\x02') &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar32 = FTimespan::ToString(&local_168.LowerBound.Value.Time,&local_a8,L"%h:%m:%s.%t")
            ;
            if ((pFVar32->Data).ArrayNum != 0) {
              local_120 = (pFVar32->Data).AllocatorInstance.Data;
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          this->BlockOnRangeDisabled = true;
          if (pvVar37 != (void *)0x0) {
            FMemory::Free(pvVar37);
          }
          break;
        }
        FWindowsPlatformProcess::Sleep(0.0);
        ProcessCaptionSamples(this,pIVar30,&local_168);
        ProcessSubtitleSamples(this,pIVar30,&local_168);
        bVar21 = ProcessVideoSamples(this,pIVar30,&local_168);
        if (bVar21) break;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar33 = StatPtr_STAT_MediaUtils_FacadeNumVideoSamples;
      if (StatPtr_STAT_MediaUtils_FacadeNumVideoSamples ==
          (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumVideoSamples>)0x0) {
        pFVar26 = ::FName::FName(&local_c0,"STAT_MediaUtils_FacadeNumVideoSamples");
        FVar33 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumVideoSamples>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_MediaUtils_FacadeNumVideoSamples,*pFVar26,
                            L"MediaPlayerFacade NumVideoSamples","STATGROUP_Media",
                            "STATCAT_Advanced",L"Media",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar11 = *(FName *)FVar33;
      iVar25 = (**(code **)((longlong)*pIVar30 + 0x118))(pIVar30);
      FThreadStats::AddMessage<__int64>(FVar11,Set,(longlong)iVar25,false);
    }
    PostSampleProcessingTimeHandling(this,param_1);
    if (this->bHaveActiveAudio != false) {
      lpCriticalSection = &this->TimeValueLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar14 = *(undefined4 *)
                ((longlong)&(this->LastAudioSampleProcessedTime).TimeStamp.Time.Ticks + 4);
      iVar25 = (this->LastAudioSampleProcessedTime).TimeStamp.SequenceIndex;
      iVar15 = (this->LastAudioSampleProcessedTime).TimeStamp.LoopIndex;
      *(int *)&(this->CurrentFrameAudioTimeStamp).Time.Ticks =
           (int)(this->LastAudioSampleProcessedTime).TimeStamp.Time.Ticks;
      *(undefined4 *)((longlong)&(this->CurrentFrameAudioTimeStamp).Time.Ticks + 4) = uVar14;
      (this->CurrentFrameAudioTimeStamp).SequenceIndex = iVar25;
      (this->CurrentFrameAudioTimeStamp).LoopIndex = iVar15;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  pTVar34 = FMediaAudioSampleSinks::GetPrimaryAudioSink(&this->AudioSampleSinks,&local_88);
  TWeakPtr<FMediaAudioSampleSink,1>::operator=<FMediaAudioSampleSink>
            (&this->PrimaryAudioSink,pTVar34);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
LAB_146c0f55e:
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar19) && (FVar36 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_f8.NameAndInfo.Index = FVar36.ComparisonIndex.Value;
      local_f8.NameAndInfo.Number = FVar36.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_f8.StatData.Pad[4] = '\0';
      local_f8.StatData.Pad[5] = '\0';
      local_f8.StatData.Pad[6] = '\0';
      local_f8.StatData.Pad[7] = '\0';
      local_f8.StatData.Pad[0] = local_100.s.LowPart._0_1_;
      local_f8.StatData.Pad[1] = local_100.s.LowPart._1_1_;
      local_f8.StatData.Pad[2] = local_100.s.LowPart._2_1_;
      local_f8.StatData.Pad[3] = local_100.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_f8);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// TickOutput @ 146c0f670

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::TickOutput(FMediaPlayerFacade *this,FTimespan param_1,FTimespan param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickOutput> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_MediaUtils_FacadeTickOutput;
  if (StatPtr_STAT_MediaUtils_FacadeTickOutput ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickOutput>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_MediaUtils_FacadeTickOutput");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickOutput>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTickOutput,
                       *pFVar5,L"MediaUtils MediaPlayerFacade TickOutput","STATGROUP_Media",
                       "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                   ,0x9aa);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_146c0f7ce;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_146c0f7ce:
  if ((this->Player).Object != (IMediaPlayer *)0x0) {
    GetTime(this);
    ExecuteNextSeek(this);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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
  return;
}

// TickTickable @ 146c101a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::TickTickable(FMediaPlayerFacade *this)

{
  FSharedReferencer<1> *this_00;
  int *piVar1;
  FMediaSampleCache **lpCriticalSection;
  TNode **lpCriticalSection_00;
  longlong *plVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickTickable> FVar14;
  IMediaSamples *pIVar15;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumAudioSamples> FVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar17;
  FNameEntryId FVar18;
  FName FVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res10;
  uint local_res18;
  uint uStackX_1c;
  LARGE_INTEGER local_res20;
  FMediaTimeStamp local_1e8;
  FStatMessage local_1d8;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  longlong lStack_1a8;
  int local_1a0;
  int iStack_19c;
  TRangeBound<FTimespan> local_198;
  TRangeBound<FTimespan> local_188;
  TRangeBound<FTimespan> local_178;
  TRangeBound<FTimespan> local_168;
  TRangeBound<FTimespan> local_158;
  TRangeBound<FTimespan> local_148;
  TRangeBound<FTimespan> local_138;
  TRangeBound<FTimespan> local_128;
  TRange<FMediaTimeStamp> local_118;
  FName local_e8;
  FName local_e0;
  TRange<FMediaTimeStamp> local_d8;
  TRange<FTimespan> local_a8;
  TRange<FTimespan> local_88 [2];
  
  FVar14 = StatPtr_STAT_MediaUtils_FacadeTickTickable;
  if (StatPtr_STAT_MediaUtils_FacadeTickTickable ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickTickable>)0x0) {
    pFVar13 = ::FName::FName(&local_e8,"STAT_MediaUtils_FacadeTickTickable");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickTickable>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTickTickable,
                        *pFVar13,L"MediaUtils MediaPlayerFacade TickTickable","STATGROUP_Media",
                        "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar5 = false;
  bVar9 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar17 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar17 == 0)) {
LAB_146c102ed:
    bVar6 = false;
    FVar19.ComparisonIndex.Value = 0;
    FVar19.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar18.Value;
        local_res10.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                   ,0x9bc);
        bVar5 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c102ed;
    local_res18 = FVar18.Value;
    uStackX_1c = uVar17;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar6 = true;
  }
  lpCriticalSection = &this->Cache;
  if (lpCriticalSection != (FMediaSampleCache **)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this[-1].LifecycleManagerDelegateControl.SharedReferenceCount;
    local_a8.UpperBound.Value.Ticks =
         CONCAT44(local_a8.UpperBound.Value.Ticks._4_4_,(undefined4)local_a8.UpperBound.Value.Ticks)
    ;
    local_88[0].UpperBound.Value.Ticks =
         CONCAT44(local_88[0].UpperBound.Value.Ticks._4_4_,
                  (undefined4)local_88[0].UpperBound.Value.Ticks);
    local_a8.LowerBound.Value.Ticks =
         CONCAT44(local_a8.LowerBound.Value.Ticks._4_4_,(undefined4)local_a8.LowerBound.Value.Ticks)
    ;
    local_88[0].LowerBound.Value.Ticks =
         CONCAT44(local_88[0].LowerBound.Value.Ticks._4_4_,
                  (undefined4)local_88[0].LowerBound.Value.Ticks);
    if (((this->NextVideoSampleTime).Ticks != 0) &&
       ((fVar20 = (float)(this->CurrentUrl).Data.ArrayMax, fVar20 != 0.0 ||
        (fVar20 = (float)(this->CurrentUrl).Data.ArrayNum,
        local_a8.UpperBound.Value.Ticks =
             CONCAT44(local_a8.UpperBound.Value.Ticks._4_4_,
                      (undefined4)local_a8.UpperBound.Value.Ticks),
        local_88[0].UpperBound.Value.Ticks =
             CONCAT44(local_88[0].UpperBound.Value.Ticks._4_4_,
                      (undefined4)local_88[0].UpperBound.Value.Ticks),
        local_a8.LowerBound.Value.Ticks =
             CONCAT44(local_a8.LowerBound.Value.Ticks._4_4_,
                      (undefined4)local_a8.LowerBound.Value.Ticks),
        local_88[0].LowerBound.Value.Ticks =
             CONCAT44(local_88[0].LowerBound.Value.Ticks._4_4_,
                      (undefined4)local_88[0].LowerBound.Value.Ticks), fVar20 != 0.0)))) {
      lpCriticalSection_00 = &(this->QueuedEventBroadcasts).Tail;
      if (lpCriticalSection_00 == (TNode **)0x0) goto LAB_146c107eb;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if ((this->NextVideoSampleTime).Ticks == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = (longlong *)(this->NextVideoSampleTime).Ticks;
      (**(code **)(*plVar2 + 0x90))(plVar2,(this->TimeValueLock).CriticalSection.Opaque3[2]);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if ((this->NextVideoSampleTime).Ticks == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (**(code **)(*(longlong *)(this->NextVideoSampleTime).Ticks + 0x98))();
      if ((this->NextVideoSampleTime).Ticks == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pIVar15 = (IMediaSamples *)
                (**(code **)(*(longlong *)(this->NextVideoSampleTime).Ticks + 0x28))();
      if ((this->NextVideoSampleTime).Ticks == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = (longlong *)(this->NextVideoSampleTime).Ticks;
      cVar11 = (**(code **)(*plVar2 + 0xc0))(plVar2,1);
      if (cVar11 == '\0') {
        GetTime((FMediaPlayerFacade *)this_00);
        if (fVar20 < 0.0) {
          local_148.Type.Value = '\x01';
          local_158.Value.Ticks =
               CONCAT44(uStackX_1c,local_res18) - MediaPlayerFacade::AudioPreroll.Ticks;
          local_138.Value.Ticks =
               CONCAT44(uStackX_1c,local_res18) - MediaPlayerFacade::MetadataPreroll.Ticks;
          local_148.Value.Ticks = 0x7fffffffffffffff;
          local_a8.UpperBound.Value.Ticks = 0x7fffffffffffffff;
          local_158.Type.Value = '\x01';
          local_128.Type.Value = '\x01';
          local_128.Value.Ticks = 0x7fffffffffffffff;
          lVar7 = 0x7fffffffffffffff;
          local_138.Type.Value = '\x01';
          local_a8.LowerBound._0_4_ = local_158._0_4_;
          local_a8.UpperBound._0_4_ = local_148._0_4_;
          uVar21 = local_138._0_4_;
          uVar22 = local_128._0_4_;
          local_a8.LowerBound.Value.Ticks = local_158.Value.Ticks;
          lVar8 = local_138.Value.Ticks;
        }
        else {
          local_188.Value.Ticks =
               MediaPlayerFacade::AudioPreroll.Ticks + CONCAT44(uStackX_1c,local_res18);
          local_168.Value.Ticks =
               MediaPlayerFacade::MetadataPreroll.Ticks + CONCAT44(uStackX_1c,local_res18);
          local_188.Type.Value = '\x01';
          local_198.Type.Value = '\x01';
          local_198.Value.Ticks = 0x8000000000000000;
          local_168.Type.Value = '\x01';
          local_178.Type.Value = '\x01';
          local_178.Value.Ticks = 0x8000000000000000;
          local_a8.LowerBound._0_4_ = local_198._0_4_;
          local_a8.UpperBound._0_4_ = local_188._0_4_;
          uVar21 = local_178._0_4_;
          uVar22 = local_168._0_4_;
          local_a8.UpperBound.Value.Ticks = local_188.Value.Ticks;
          lVar7 = local_168.Value.Ticks;
          local_a8.LowerBound.Value.Ticks = -0x8000000000000000;
          lVar8 = -0x8000000000000000;
        }
        ProcessAudioSamplesV1((FMediaPlayerFacade *)this_00,pIVar15,&local_a8);
        local_88[0].LowerBound._0_4_ = uVar21;
        local_88[0].UpperBound._0_4_ = uVar22;
        local_88[0].UpperBound.Value.Ticks = lVar7;
        local_88[0].LowerBound.Value.Ticks = lVar8;
        ProcessMetadataSamplesV1((FMediaPlayerFacade *)this_00,pIVar15,local_88);
      }
      else {
        local_118.LowerBound.Type.Value = '\x02';
        local_118.LowerBound.Value.Time.Ticks = -0x8000000000000000;
        local_118.UpperBound.Value.Time.Ticks = -0x8000000000000000;
        local_118.LowerBound.Value.SequenceIndex = 0;
        local_118.LowerBound.Value.LoopIndex = 0;
        local_118.UpperBound.Type.Value = '\x02';
        local_118.UpperBound.Value.SequenceIndex = 0;
        local_118.UpperBound.Value.LoopIndex = 0;
        ProcessAudioSamples((FMediaPlayerFacade *)this_00,pIVar15,&local_118);
        GetTimeStampInternal((FMediaPlayerFacade *)this_00,&local_1e8,false);
        lStack_1a8 = MediaPlayerFacade::MetadataPreroll.Ticks + local_1e8.Time.Ticks;
        local_1a0 = local_1e8.SequenceIndex;
        iStack_19c = local_1e8.LoopIndex;
        local_1c8 = 1;
        uStack_1c0 = 0x8000000000000000;
        local_d8.LowerBound._1_7_ = uStack_1c7;
        local_d8.LowerBound.Type.Value = '\x01';
        local_1b8 = 0;
        local_d8.LowerBound.Value.Time.Ticks = -0x8000000000000000;
        local_1b0 = 1;
        local_d8.UpperBound._1_7_ = uStack_1af;
        local_d8.UpperBound.Type.Value = '\x01';
        local_d8.LowerBound.Value.SequenceIndex = 0;
        local_d8.LowerBound.Value.LoopIndex = 0;
        local_d8.UpperBound.Value.Time.Ticks = lStack_1a8;
        ProcessMetadataSamples((FMediaPlayerFacade *)this_00,pIVar15,&local_d8);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar16 = StatPtr_STAT_MediaUtils_FacadeNumAudioSamples;
        if (StatPtr_STAT_MediaUtils_FacadeNumAudioSamples ==
            (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumAudioSamples>)0x0) {
          pFVar13 = ::FName::FName(&local_e0,"STAT_MediaUtils_FacadeNumAudioSamples");
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumAudioSamples>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_MediaUtils_FacadeNumAudioSamples,*pFVar13,
                              L"MediaPlayerFacade NumAudioSamples","STATGROUP_Media",
                              "STATCAT_Advanced",L"Media",true,true,ST_int64,false,false,MCR_Invalid
                             );
        }
        local_res8.Bits = (uint)*(undefined8 *)FVar16;
        uStackX_c = (uint)((ulonglong)*(undefined8 *)FVar16 >> 0x20);
        iVar12 = (**(code **)((longlong)*pIVar15 + 0xf8))(pIVar15);
        FVar4.Number = uStackX_c;
        FVar4.ComparisonIndex.Value = local_res8.Bits;
        FThreadStats::AddMessage<__int64>(FVar4,Set,(longlong)iVar12,false);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar6) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
        local_1d8.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
        local_1d8.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_res20);
        local_1d8.StatData.Pad[4] = '\0';
        local_1d8.StatData.Pad[5] = '\0';
        local_1d8.StatData.Pad[6] = '\0';
        local_1d8.StatData.Pad[7] = '\0';
        local_1d8.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
        local_1d8.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
        local_1d8.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
        local_1d8.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_01,&local_1d8);
        piVar1 = &this_01->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
    return;
  }
LAB_146c107eb:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateSeekStatus @ 146c11350

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::UpdateSeekStatus(FMediaPlayerFacade *this,FMediaTimeStamp *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  long64 lVar6;
  bool bVar7;
  IMediaPlayer *pIVar8;
  longlong *plVar9;
  int iVar10;
  FTimespan local_48;
  undefined8 uStack_40;
  
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Player.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0xa08,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_146c1156e:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->VideoSampleSinks).Sinks.ArrayNum == 0) ||
     ((this->TrackSelection).UserSelection[6] == -1)) {
    if (&this->TimeValueLock == (FWindowsRecursiveMutex *)0x0) goto LAB_146c1156e;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->TimeValueLock);
    if ((this->bHaveActiveAudio == false) ||
       ((iVar10 = (this->SeekTargetTime).SequenceIndex,
        iVar1 = (this->CurrentFrameAudioTimeStamp).SequenceIndex, iVar10 <= iVar1 &&
        ((iVar1 != iVar10 ||
         ((iVar1 = (this->CurrentFrameAudioTimeStamp).LoopIndex,
          iVar10 = (this->SeekTargetTime).LoopIndex, iVar10 <= iVar1 &&
          ((iVar1 != iVar10 ||
           ((this->SeekTargetTime).Time.Ticks <= (this->CurrentFrameAudioTimeStamp).Time.Ticks))))))
        )))) {
      (this->SeekTargetTime).Time.Ticks = -0x8000000000000000;
    }
  }
  else {
    lpCriticalSection_00 = &this->TimeValueLock;
    if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_146c1156e;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    lVar2 = (this->SeekTargetTime).Time.Ticks;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    if (lVar2 == -0x8000000000000000) goto LAB_146c11540;
    iVar10 = 0;
    local_48.Ticks = -0x8000000000000000;
    uStack_40 = 0;
    if (param_1 == (FMediaTimeStamp *)0x0) {
      pIVar8 = TSharedPtr<IMediaPlayer,1>::operator->(&this->Player);
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x28))(pIVar8);
      (**(code **)(*plVar9 + 0x70))(plVar9,&local_48);
    }
    else {
      local_48.Ticks = (param_1->Time).Ticks;
      uStack_40._0_4_ = param_1->SequenceIndex;
      uStack_40._4_4_ = param_1->LoopIndex;
    }
    if (local_48.Ticks == -0x8000000000000000) goto LAB_146c11540;
    if ((this->NextSequenceIndex).bIsSet != false) {
      iVar10 = (this->NextSequenceIndex).TypedValue;
    }
    if ((int)uStack_40 < iVar10) goto LAB_146c11540;
    if ((this->bHaveActiveAudio != false) &&
       (bVar7 = FBlockOnRange::IsSet(&this->BlockOnRange), !bVar7)) {
      dVar4 = FWindowsPlatformTime::Seconds();
      (this->NextEstVideoTimeAtFrameStart).TimeStamp.Time.Ticks = local_48.Ticks;
      (this->NextEstVideoTimeAtFrameStart).TimeStamp.SequenceIndex = (int)uStack_40;
      (this->NextEstVideoTimeAtFrameStart).TimeStamp.LoopIndex = uStack_40._4_4_;
      (this->NextEstVideoTimeAtFrameStart).SampledAtTime = dVar4;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    lVar6 = (this->SeekTargetTime).Time.Ticks;
    uVar5 = *(undefined4 *)((longlong)&(this->SeekTargetTime).Time.Ticks + 4);
    iVar10 = (this->SeekTargetTime).SequenceIndex;
    iVar1 = (this->SeekTargetTime).LoopIndex;
    (this->SeekTargetTime).Time.Ticks = -0x8000000000000000;
    *(int *)&(this->CurrentFrameVideoDisplayTimeStamp).Time.Ticks = (int)lVar6;
    *(undefined4 *)((longlong)&(this->CurrentFrameVideoDisplayTimeStamp).Time.Ticks + 4) = uVar5;
    (this->CurrentFrameVideoDisplayTimeStamp).SequenceIndex = iVar10;
    (this->CurrentFrameVideoDisplayTimeStamp).LoopIndex = iVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->TimeValueLock);
LAB_146c11540:
                    /* WARNING: Could not recover jumptable at 0x000146c11567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UpdateTrackSelectionWithPlayer @ 146c11580

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::UpdateTrackSelectionWithPlayer(FMediaPlayerFacade *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Player.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0x86b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = false;
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar7 = (longlong *)(**(code **)((longlong)*(this->Player).Object + 0x38))();
  iVar8 = 0;
  piVar10 = (this->TrackSelection).PlayerSelection;
  do {
    iVar9 = ((FTrackSelection *)(piVar10 + -7))->UserSelection[0];
    if (*piVar10 != iVar9) {
      if (iVar9 != -1) {
        if (iVar8 == 0) {
          if ((((this->PrimaryAudioSink).Object == (FMediaAudioSampleSink *)0x0) ||
              (pTVar2 = (this->PrimaryAudioSink).WeakReferenceCount.ReferenceController,
              pTVar2 == (TReferenceControllerBase<1> *)0x0)) ||
             ((int)pTVar2->SharedReferenceCount < 1)) {
LAB_146c11691:
            iVar9 = -1;
          }
        }
        else {
          if (iVar8 == 6) {
            iVar1 = (this->VideoSampleSinks).Sinks.ArrayNum;
          }
          else if (iVar8 == 1) {
            iVar1 = (this->CaptionSampleSinks).Sinks.ArrayNum;
          }
          else if (iVar8 == 4) {
            iVar1 = (this->SubtitleSampleSinks).Sinks.ArrayNum;
          }
          else {
            if (iVar8 != 2) goto LAB_146c11696;
            iVar1 = (this->MetadataSampleSinks).Sinks.ArrayNum;
          }
          if (iVar1 == 0) goto LAB_146c11691;
        }
      }
LAB_146c11696:
      if (*piVar10 != iVar9) {
        cVar6 = (**(code **)(*plVar7 + 0x48))(plVar7,iVar8);
        if (cVar6 == '\0') {
          ((FTrackSelection *)(piVar10 + -7))->UserSelection[0] = *piVar10;
        }
        else {
          *piVar10 = iVar9;
          bVar4 = true;
        }
      }
    }
    iVar8 = iVar8 + 1;
    piVar10 = piVar10 + 1;
    if (6 < iVar8) {
      if (bVar4) {
        if (((this->Player).Object == (IMediaPlayer *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        cVar6 = (**(code **)((longlong)*(this->Player).Object + 0xc0))();
        if (cVar6 == '\0') {
          Flush(this,false,false);
        }
      }
      return;
    }
  } while( true );
}

