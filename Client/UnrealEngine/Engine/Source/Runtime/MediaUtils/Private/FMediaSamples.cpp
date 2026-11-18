// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 47

// FMediaSamples @ 146bf2b90

FMediaSamples * __thiscall
FMediaSamples::FMediaSamples
          (FMediaSamples *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  (this->AudioSampleQueue)._padding_ = 2;
  this->_padding_ = (longlong)&___7FMediaSamples__6B_;
  (this->AudioSampleQueue)._padding_ = 0;
  (this->AudioSampleQueue)._padding_ = 0;
  (this->AudioSampleQueue)._padding_ = 0;
  (this->AudioSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::
        _vftable__for__FMediaAudioSampleSink__;
  (this->AudioSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::
        _vftable__for__TMediaSampleSource<IMediaAudioSample>__;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->AudioSampleQueue)._padding_,4000);
  (this->AudioSampleQueue)._padding_ = 0;
  (this->AudioSampleQueue)._padding_ =
       (longlong)&FMediaAudioSampleQueue::_vftable__for__FMediaAudioSampleSink__;
  *(uint *)&(this->AudioSampleQueue)._padding_ = param_1;
  (this->AudioSampleQueue)._padding_ =
       (longlong)&FMediaAudioSampleQueue::_vftable__for__TMediaSampleSource<IMediaAudioSample>__;
  *(undefined8 *)((longlong)&(this->AudioSampleQueue)._padding_ + 4) = 0;
  (this->AudioSampleQueue).AudioTime.TimeStamp.Time.Ticks = -0x8000000000000000;
  (this->AudioSampleQueue)._padding_ = 0;
  (this->AudioSampleQueue).AudioTime.TimeStamp.SequenceIndex = 0;
  (this->AudioSampleQueue).AudioTime.TimeStamp.LoopIndex = 0;
  (this->AudioSampleQueue).AudioTime.SampledAtTime = -1.0;
  TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
  TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
            (&this->CaptionSampleQueue,param_3);
  (this->MetadataSampleQueue)._padding_ = 0;
  (this->MetadataSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
        _vftable__for__TMediaSampleSink<IMediaBinarySample>__;
  (this->MetadataSampleQueue)._padding_ = 0;
  (this->MetadataSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
        _vftable__for__TMediaSampleSource<IMediaBinarySample>__;
  (this->MetadataSampleQueue)._padding_ = 0;
  (this->MetadataSampleQueue)._padding_ = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->MetadataSampleQueue).CriticalSection,4000);
  (this->MetadataSampleQueue).MaxSamplesInQueue = param_5;
  (this->MetadataSampleQueue).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataSampleQueue).Samples.ArrayNum = 0;
  (this->MetadataSampleQueue).Samples.ArrayMax = 0;
  (this->MetadataSampleQueue).FlushCount = 0;
  (this->MetadataSampleQueue).NumDroppedSamples = 0;
  TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
  TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
            (&this->SubtitleSampleQueue,param_4);
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>
            (&this->VideoSampleQueue,param_2);
  (this->NextMinSequenceIndex).bIsSet = false;
  return this;
}

// ~FMediaSamples @ 146bf39f0

void __thiscall FMediaSamples::~FMediaSamples(FMediaSamples *this)

{
  this->_padding_ = (longlong)&___7FMediaSamples__6B_;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
  ~TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>
            (&this->VideoSampleQueue);
  TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
  ~TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
            (&this->SubtitleSampleQueue);
  TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
  ~TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>
            (&this->MetadataSampleQueue);
  TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
  ~TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
            (&this->CaptionSampleQueue);
  TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::
  ~TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>
            ((TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *)&this->AudioSampleQueue);
  this->_padding_ = (longlong)&___7IMediaSamples__6B_;
  return;
}

// AddAudio @ 146bf55a0

void __thiscall
FMediaSamples::AddAudio(FMediaSamples *this,TSharedRef<IMediaAudioSample,1> *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_18 [16];
  
  lVar2 = (**(code **)((longlong)*param_1->Object + 0x30))(param_1->Object,local_18);
  if ((this->NextMinSequenceIndex).bIsSet == false) {
    iVar1 = 0;
  }
  else {
    iVar1 = (this->NextMinSequenceIndex).TypedValue;
  }
  if (iVar1 <= *(int *)(lVar2 + 8)) {
    (**(code **)(this->AudioSampleQueue)._padding_)(&this->AudioSampleQueue,param_1);
  }
  return;
}

// AddCaption @ 146bf56e0

void __thiscall
FMediaSamples::AddCaption(FMediaSamples *this,TSharedRef<IMediaOverlaySample,1> *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_18 [16];
  
  lVar2 = (**(code **)((longlong)*param_1->Object + 0x18))(param_1->Object,local_18);
  if ((this->NextMinSequenceIndex).bIsSet == false) {
    iVar1 = 0;
  }
  else {
    iVar1 = (this->NextMinSequenceIndex).TypedValue;
  }
  if (iVar1 <= *(int *)(lVar2 + 8)) {
    (**(code **)(this->CaptionSampleQueue)._padding_)(&this->CaptionSampleQueue,param_1);
  }
  return;
}

// AddMetadata @ 146bf5760

void __thiscall
FMediaSamples::AddMetadata(FMediaSamples *this,TSharedRef<IMediaBinarySample,1> *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_18 [16];
  
  lVar2 = (**(code **)((longlong)*param_1->Object + 0x18))(param_1->Object,local_18);
  if ((this->NextMinSequenceIndex).bIsSet == false) {
    iVar1 = 0;
  }
  else {
    iVar1 = (this->NextMinSequenceIndex).TypedValue;
  }
  if (iVar1 <= *(int *)(lVar2 + 8)) {
    (**(code **)(this->MetadataSampleQueue)._padding_)(&this->MetadataSampleQueue,param_1);
  }
  return;
}

// AddSubtitle @ 146bf5830

void __thiscall
FMediaSamples::AddSubtitle(FMediaSamples *this,TSharedRef<IMediaOverlaySample,1> *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_18 [16];
  
  lVar2 = (**(code **)((longlong)*param_1->Object + 0x18))(param_1->Object,local_18);
  if ((this->NextMinSequenceIndex).bIsSet == false) {
    iVar1 = 0;
  }
  else {
    iVar1 = (this->NextMinSequenceIndex).TypedValue;
  }
  if (iVar1 <= *(int *)(lVar2 + 8)) {
    (**(code **)(this->SubtitleSampleQueue)._padding_)(&this->SubtitleSampleQueue,param_1);
  }
  return;
}

// AddVideo @ 146bf58b0

void __thiscall
FMediaSamples::AddVideo(FMediaSamples *this,TSharedRef<IMediaTextureSample,1> *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_18 [16];
  
  lVar2 = (**(code **)((longlong)*param_1->Object + 0x60))(param_1->Object,local_18);
  if ((this->NextMinSequenceIndex).bIsSet == false) {
    iVar1 = 0;
  }
  else {
    iVar1 = (this->NextMinSequenceIndex).TypedValue;
  }
  if (iVar1 <= *(int *)(lVar2 + 8)) {
    (**(code **)(this->VideoSampleQueue)._padding_)(&this->VideoSampleQueue,param_1);
  }
  return;
}

// CanReceiveAudioSamples @ 146bf62e0

bool __thiscall FMediaSamples::CanReceiveAudioSamples(FMediaSamples *this,uint param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146bf62e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->AudioSampleQueue)._padding_ + 0x10))(&this->AudioSampleQueue);
  return (bool)uVar1;
}

// CanReceiveCaptionSamples @ 146bf6310

bool __thiscall FMediaSamples::CanReceiveCaptionSamples(FMediaSamples *this,uint param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146bf631a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->CaptionSampleQueue)._padding_ + 0x10))();
  return (bool)uVar1;
}

// CanReceiveMetadataSamples @ 146bf6340

bool __thiscall FMediaSamples::CanReceiveMetadataSamples(FMediaSamples *this,uint param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146bf634a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->MetadataSampleQueue)._padding_ + 0x10))();
  return (bool)uVar1;
}

// CanReceiveSubtitleSamples @ 146bf6370

bool __thiscall FMediaSamples::CanReceiveSubtitleSamples(FMediaSamples *this,uint param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146bf637a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->SubtitleSampleQueue)._padding_ + 0x10))();
  return (bool)uVar1;
}

// CanReceiveVideoSamples @ 146bf63a0

bool __thiscall FMediaSamples::CanReceiveVideoSamples(FMediaSamples *this,uint param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146bf63aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->VideoSampleQueue)._padding_ + 0x10))();
  return (bool)uVar1;
}

// DiscardAudioSamples @ 146bf81c0

bool __thiscall
FMediaSamples::DiscardAudioSamples
          (FMediaSamples *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int local_res8 [2];
  uint local_res10 [4];
  int local_res20 [2];
  
  if (((param_1->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimeRange.HasLowerBound() && TimeRange.HasUpperBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                       ,0xa6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lpCriticalSection = &(this->AudioSampleQueue)._padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::FindRangeInQueue
              ((TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *)&this->AudioSampleQueue
               ,param_1,param_2,(int *)local_res10,local_res8,local_res20);
    if ((int)local_res10[0] < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return false;
    }
    if (local_res8[0] < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastPossibleIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                         ,0xb0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar6 = (local_res8[0] - local_res10[0]) + 1;
    uVar5 = 0;
    if ((int)(local_res10[0] + uVar6) <= (int)(this->AudioSampleQueue)._padding_) {
      uVar5 = ~(uVar6 | local_res10[0]) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (uVar6 != 0) {
      TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                ((TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_> *)
                 &(this->AudioSampleQueue)._padding_,local_res10[0],uVar6);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(ForAnyElementType *)&(this->AudioSampleQueue)._padding_,
                 (int)(this->AudioSampleQueue)._padding_,
                 (int *)((longlong)&(this->AudioSampleQueue)._padding_ + 4));
    }
    plVar1 = &(this->AudioSampleQueue)._padding_;
    *(uint *)plVar1 = (int)*plVar1 + uVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DiscardCaptionSamples @ 146bf8370

bool __thiscall
FMediaSamples::DiscardCaptionSamples
          (FMediaSamples *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Discard
                    (&this->CaptionSampleQueue,param_1,param_2);
  return bVar1;
}

// DiscardMetadataSamples @ 146bf83a0

bool __thiscall
FMediaSamples::DiscardMetadataSamples
          (FMediaSamples *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int local_res8 [2];
  uint local_res10 [4];
  int local_res20 [2];
  
  if (((param_1->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimeRange.HasLowerBound() && TimeRange.HasUpperBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                       ,0xa6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lpCriticalSection = &(this->MetadataSampleQueue).CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::FindRangeInQueue
              (&this->MetadataSampleQueue,param_1,param_2,(int *)local_res10,local_res8,local_res20)
    ;
    if ((int)local_res10[0] < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return false;
    }
    if (local_res8[0] < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastPossibleIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                         ,0xb0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar6 = (local_res8[0] - local_res10[0]) + 1;
    uVar5 = 0;
    if ((int)(local_res10[0] + uVar6) <= (this->MetadataSampleQueue).Samples.ArrayNum) {
      uVar5 = ~(uVar6 | local_res10[0]) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (uVar6 != 0) {
      TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (&(this->MetadataSampleQueue).Samples,local_res10[0],uVar6);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->MetadataSampleQueue).Samples.AllocatorInstance,
                 (this->MetadataSampleQueue).Samples.ArrayNum,
                 &(this->MetadataSampleQueue).Samples.ArrayMax);
    }
    puVar1 = &(this->MetadataSampleQueue).NumDroppedSamples;
    *puVar1 = *puVar1 + uVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DiscardSubtitleSamples @ 146bf8550

bool __thiscall
FMediaSamples::DiscardSubtitleSamples
          (FMediaSamples *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Discard
                    (&this->SubtitleSampleQueue,param_1,param_2);
  return bVar1;
}

// DiscardVideoSamples @ 146bf8580

bool __thiscall
FMediaSamples::DiscardVideoSamples
          (FMediaSamples *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int local_res8 [2];
  uint local_res10 [4];
  int local_res20 [2];
  
  if (((param_1->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimeRange.HasLowerBound() && TimeRange.HasUpperBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                       ,0xa6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lpCriticalSection = &(this->VideoSampleQueue).CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::FindRangeInQueue
              (&this->VideoSampleQueue,param_1,param_2,(int *)local_res10,local_res8,local_res20);
    if ((int)local_res10[0] < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return false;
    }
    if (local_res8[0] < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastPossibleIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                         ,0xb0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar6 = (local_res8[0] - local_res10[0]) + 1;
    uVar5 = 0;
    if ((int)(local_res10[0] + uVar6) <= (this->VideoSampleQueue).Samples.ArrayNum) {
      uVar5 = ~(uVar6 | local_res10[0]) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (uVar6 != 0) {
      TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (&(this->VideoSampleQueue).Samples,local_res10[0],uVar6);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->VideoSampleQueue).Samples.AllocatorInstance,
                 (this->VideoSampleQueue).Samples.ArrayNum,
                 &(this->VideoSampleQueue).Samples.ArrayMax);
    }
    puVar1 = &(this->VideoSampleQueue).NumDroppedSamples;
    *puVar1 = *puVar1 + uVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FetchAudio @ 146bf9920

bool __thiscall
FMediaSamples::FetchAudio
          (FMediaSamples *this,TRange<FTimespan> *param_1,TSharedPtr<IMediaAudioSample,1> *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  IMediaAudioSample *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  IMediaAudioSample *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined1 local_58 [16];
  TRange<FTimespan> local_48;
  TRange<FTimespan> local_28;
  
  local_28.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_28.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_28.LowerBound.Value.Ticks = (param_1->LowerBound).Value.Ticks;
  plVar1 = &(this->AudioSampleQueue)._padding_;
  local_28.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_28.UpperBound._1_3_ = *(undefined3 *)&(param_1->UpperBound).field_0x1;
  local_28.UpperBound._4_4_ = *(undefined4 *)&(param_1->UpperBound).field_0x4;
  local_28.UpperBound.Value.Ticks._0_4_ = (undefined4)(param_1->UpperBound).Value.Ticks;
  local_28.UpperBound.Value.Ticks._4_4_ =
       *(undefined4 *)((longlong)&(param_1->UpperBound).Value.Ticks + 4);
  local_78 = (IMediaAudioSample *)0x0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  cVar4 = (**(code **)((this->AudioSampleQueue)._padding_ + 8))(plVar1,&local_78);
  if (cVar4 != '\0') {
    if ((local_78 == (IMediaAudioSample *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_78 + 0x30))(local_78,local_58);
    lVar2 = *plVar7;
    if ((local_78 == (IMediaAudioSample *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_78 + 0x10))(local_78,local_res8);
    local_48.UpperBound.Value.Ticks = *plVar7 + lVar2;
    local_48.LowerBound.Type.Value = '\x01';
    local_48.UpperBound.Type.Value = '\0';
    local_48.LowerBound.Value.Ticks = lVar2;
    bVar5 = TRange<FTimespan>::Overlaps(&local_28,&local_48);
    if (bVar5) {
      if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = param_2->Object;
      pTStack_60 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = local_78;
      (param_2->SharedReferenceCount).ReferenceController = pTStack_70;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_70);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return false;
}

// FetchAudio @ 146bf9a90

bool __thiscall
FMediaSamples::FetchAudio
          (FMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaAudioSample,1> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  IMediaAudioSample *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  TRange<FMediaTimeStamp> local_78;
  IMediaAudioSample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TRange<FMediaTimeStamp> local_38;
  
  local_38.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_38.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_38.LowerBound.Value.Time.Ticks = (param_1->LowerBound).Value.Time.Ticks;
  plVar1 = &(this->AudioSampleQueue)._padding_;
  local_38.LowerBound.Value.SequenceIndex = (param_1->LowerBound).Value.SequenceIndex;
  local_38.LowerBound.Value.LoopIndex = (param_1->LowerBound).Value.LoopIndex;
  local_38.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_38.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_38.UpperBound.Value.Time.Ticks = (param_1->UpperBound).Value.Time.Ticks;
  local_38.UpperBound.Value.SequenceIndex = (param_1->UpperBound).Value.SequenceIndex;
  local_38.UpperBound.Value.LoopIndex = (param_1->UpperBound).Value.LoopIndex;
  local_98 = (IMediaAudioSample *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  cVar3 = (**(code **)((this->AudioSampleQueue)._padding_ + 8))(plVar1,&local_98);
  if (cVar3 != '\0') {
    if ((local_98 == (IMediaAudioSample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)((longlong)*local_98 + 0x30))(local_98,&local_88);
    if ((local_98 == (IMediaAudioSample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*local_98 + 0x10))(local_98,local_res8);
    local_78.UpperBound.Value.Time.Ticks = *plVar6 + CONCAT44(uStack_84,local_88);
    local_78.LowerBound.Value.Time.Ticks._0_4_ = local_88;
    local_78.LowerBound.Value.Time.Ticks._4_4_ = uStack_84;
    local_78.LowerBound.Value.SequenceIndex = iStack_80;
    local_78.LowerBound.Value.LoopIndex = iStack_7c;
    local_78.LowerBound.Type.Value = '\x01';
    local_78.UpperBound.Type.Value = '\0';
    local_78.UpperBound.Value.SequenceIndex = iStack_80;
    local_78.UpperBound.Value.LoopIndex = iStack_7c;
    bVar4 = TRange<FMediaTimeStamp>::Overlaps(&local_38,&local_78);
    if (bVar4) {
      if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_2->Object;
      pTStack_40 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = local_98;
      (param_2->SharedReferenceCount).ReferenceController = pTStack_90;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_90);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  return false;
}

// FetchBestVideoSampleForTimeRange @ 146bfaa30

EFetchBestSampleResult __thiscall
FMediaSamples::FetchBestVideoSampleForTimeRange
          (FMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2,bool param_3,bool param_4)

{
  EMediaSampleQueueFetchResult EVar1;
  
  EVar1 = TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
          FetchBestSampleForTimeRange(&this->VideoSampleQueue,param_1,param_2,param_3,param_4);
  if (EVar1 == Found) {
    return Ok;
  }
  return (EVar1 != None) + NoSample;
}

// FetchCaption @ 146bfaa80

bool __thiscall
FMediaSamples::FetchCaption
          (FMediaSamples *this,TRange<FTimespan> *param_1,TSharedPtr<IMediaOverlaySample,1> *param_2
          )

{
  bool bVar1;
  TRange<FTimespan> local_28;
  
  local_28.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_28.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_28.LowerBound.Value.Ticks = (param_1->LowerBound).Value.Ticks;
  local_28.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_28.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_28.UpperBound.Value.Ticks = (param_1->UpperBound).Value.Ticks;
  bVar1 = FetchSample<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
                    (&this->CaptionSampleQueue,&local_28,param_2);
  return bVar1;
}

// FetchCaption @ 146bfaac0

bool __thiscall
FMediaSamples::FetchCaption
          (FMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaOverlaySample,1> *param_2)

{
  bool bVar1;
  TRange<FMediaTimeStamp> local_38;
  
  local_38.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_38.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_38.LowerBound.Value.Time.Ticks = (param_1->LowerBound).Value.Time.Ticks;
  local_38.LowerBound.Value.SequenceIndex = (param_1->LowerBound).Value.SequenceIndex;
  local_38.LowerBound.Value.LoopIndex = (param_1->LowerBound).Value.LoopIndex;
  local_38.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_38.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_38.UpperBound.Value.Time.Ticks = (param_1->UpperBound).Value.Time.Ticks;
  local_38.UpperBound.Value.SequenceIndex = (param_1->UpperBound).Value.SequenceIndex;
  local_38.UpperBound.Value.LoopIndex = (param_1->UpperBound).Value.LoopIndex;
  bVar1 = FetchSample<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
                    (&this->CaptionSampleQueue,&local_38,param_2);
  return bVar1;
}

// FetchMetadata @ 146bfab20

bool __thiscall
FMediaSamples::FetchMetadata
          (FMediaSamples *this,TRange<FTimespan> *param_1,TSharedPtr<IMediaBinarySample,1> *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  IMediaBinarySample *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  IMediaBinarySample *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined1 local_58 [16];
  TRange<FTimespan> local_48;
  TRange<FTimespan> local_28;
  
  local_28.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_28.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_28.LowerBound.Value.Ticks = (param_1->LowerBound).Value.Ticks;
  plVar1 = &(this->MetadataSampleQueue)._padding_;
  local_28.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_28.UpperBound._1_3_ = *(undefined3 *)&(param_1->UpperBound).field_0x1;
  local_28.UpperBound._4_4_ = *(undefined4 *)&(param_1->UpperBound).field_0x4;
  local_28.UpperBound.Value.Ticks._0_4_ = (undefined4)(param_1->UpperBound).Value.Ticks;
  local_28.UpperBound.Value.Ticks._4_4_ =
       *(undefined4 *)((longlong)&(param_1->UpperBound).Value.Ticks + 4);
  local_78 = (IMediaBinarySample *)0x0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  cVar4 = (**(code **)(*plVar1 + 8))(plVar1,&local_78);
  if (cVar4 != '\0') {
    if ((local_78 == (IMediaBinarySample *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_78 + 0x18))(local_78,local_58);
    lVar2 = *plVar7;
    if ((local_78 == (IMediaBinarySample *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_78 + 8))(local_78,local_res8);
    local_48.UpperBound.Value.Ticks = *plVar7 + lVar2;
    local_48.LowerBound.Type.Value = '\x01';
    local_48.UpperBound.Type.Value = '\0';
    local_48.LowerBound.Value.Ticks = lVar2;
    bVar5 = TRange<FTimespan>::Overlaps(&local_28,&local_48);
    if (bVar5) {
      if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = param_2->Object;
      pTStack_60 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = local_78;
      (param_2->SharedReferenceCount).ReferenceController = pTStack_70;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_70);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return false;
}

// FetchMetadata @ 146bfac90

bool __thiscall
FMediaSamples::FetchMetadata
          (FMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaBinarySample,1> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  IMediaBinarySample *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  TRange<FMediaTimeStamp> local_78;
  IMediaBinarySample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TRange<FMediaTimeStamp> local_38;
  
  local_38.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_38.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_38.LowerBound.Value.Time.Ticks = (param_1->LowerBound).Value.Time.Ticks;
  plVar1 = &(this->MetadataSampleQueue)._padding_;
  local_38.LowerBound.Value.SequenceIndex = (param_1->LowerBound).Value.SequenceIndex;
  local_38.LowerBound.Value.LoopIndex = (param_1->LowerBound).Value.LoopIndex;
  local_38.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_38.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_38.UpperBound.Value.Time.Ticks = (param_1->UpperBound).Value.Time.Ticks;
  local_38.UpperBound.Value.SequenceIndex = (param_1->UpperBound).Value.SequenceIndex;
  local_38.UpperBound.Value.LoopIndex = (param_1->UpperBound).Value.LoopIndex;
  local_98 = (IMediaBinarySample *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  cVar3 = (**(code **)(*plVar1 + 8))(plVar1,&local_98);
  if (cVar3 != '\0') {
    if ((local_98 == (IMediaBinarySample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)((longlong)*local_98 + 0x18))(local_98,&local_88);
    if ((local_98 == (IMediaBinarySample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*local_98 + 8))(local_98,local_res8);
    local_78.UpperBound.Value.Time.Ticks = *plVar6 + CONCAT44(uStack_84,local_88);
    local_78.LowerBound.Value.Time.Ticks._0_4_ = local_88;
    local_78.LowerBound.Value.Time.Ticks._4_4_ = uStack_84;
    local_78.LowerBound.Value.SequenceIndex = iStack_80;
    local_78.LowerBound.Value.LoopIndex = iStack_7c;
    local_78.LowerBound.Type.Value = '\x01';
    local_78.UpperBound.Type.Value = '\0';
    local_78.UpperBound.Value.SequenceIndex = iStack_80;
    local_78.UpperBound.Value.LoopIndex = iStack_7c;
    bVar4 = TRange<FMediaTimeStamp>::Overlaps(&local_38,&local_78);
    if (bVar4) {
      if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_2->Object;
      pTStack_40 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = local_98;
      (param_2->SharedReferenceCount).ReferenceController = pTStack_90;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_90);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  return false;
}

// FetchSubtitle @ 146bfae30

bool __thiscall
FMediaSamples::FetchSubtitle
          (FMediaSamples *this,TRange<FTimespan> *param_1,TSharedPtr<IMediaOverlaySample,1> *param_2
          )

{
  bool bVar1;
  TRange<FTimespan> local_28;
  
  local_28.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_28.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_28.LowerBound.Value.Ticks = (param_1->LowerBound).Value.Ticks;
  local_28.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_28.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_28.UpperBound.Value.Ticks = (param_1->UpperBound).Value.Ticks;
  bVar1 = FetchSample<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
                    (&this->SubtitleSampleQueue,&local_28,param_2);
  return bVar1;
}

// FetchSubtitle @ 146bfae70

bool __thiscall
FMediaSamples::FetchSubtitle
          (FMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaOverlaySample,1> *param_2)

{
  bool bVar1;
  TRange<FMediaTimeStamp> local_38;
  
  local_38.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_38.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_38.LowerBound.Value.Time.Ticks = (param_1->LowerBound).Value.Time.Ticks;
  local_38.LowerBound.Value.SequenceIndex = (param_1->LowerBound).Value.SequenceIndex;
  local_38.LowerBound.Value.LoopIndex = (param_1->LowerBound).Value.LoopIndex;
  local_38.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_38.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_38.UpperBound.Value.Time.Ticks = (param_1->UpperBound).Value.Time.Ticks;
  local_38.UpperBound.Value.SequenceIndex = (param_1->UpperBound).Value.SequenceIndex;
  local_38.UpperBound.Value.LoopIndex = (param_1->UpperBound).Value.LoopIndex;
  bVar1 = FetchSample<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
                    (&this->SubtitleSampleQueue,&local_38,param_2);
  return bVar1;
}

// FetchVideo @ 146bfaed0

bool __thiscall
FMediaSamples::FetchVideo
          (FMediaSamples *this,TRange<FTimespan> *param_1,TSharedPtr<IMediaTextureSample,1> *param_2
          )

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  IMediaTextureSample *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  IMediaTextureSample *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined1 local_58 [16];
  TRange<FTimespan> local_48;
  TRange<FTimespan> local_28;
  
  local_28.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_28.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_28.LowerBound.Value.Ticks = (param_1->LowerBound).Value.Ticks;
  plVar1 = &(this->VideoSampleQueue)._padding_;
  local_28.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_28.UpperBound._1_3_ = *(undefined3 *)&(param_1->UpperBound).field_0x1;
  local_28.UpperBound._4_4_ = *(undefined4 *)&(param_1->UpperBound).field_0x4;
  local_28.UpperBound.Value.Ticks._0_4_ = (undefined4)(param_1->UpperBound).Value.Ticks;
  local_28.UpperBound.Value.Ticks._4_4_ =
       *(undefined4 *)((longlong)&(param_1->UpperBound).Value.Ticks + 4);
  local_78 = (IMediaTextureSample *)0x0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  cVar4 = (**(code **)(*plVar1 + 8))(plVar1,&local_78);
  if (cVar4 != '\0') {
    if ((local_78 == (IMediaTextureSample *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_78 + 0x60))(local_78,local_58);
    lVar2 = *plVar7;
    if ((local_78 == (IMediaTextureSample *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_78 + 0x20))(local_78,local_res8);
    local_48.UpperBound.Value.Ticks = *plVar7 + lVar2;
    local_48.LowerBound.Type.Value = '\x01';
    local_48.UpperBound.Type.Value = '\0';
    local_48.LowerBound.Value.Ticks = lVar2;
    bVar5 = TRange<FTimespan>::Overlaps(&local_28,&local_48);
    if (bVar5) {
      if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = param_2->Object;
      pTStack_60 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = local_78;
      (param_2->SharedReferenceCount).ReferenceController = pTStack_70;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_70);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return false;
}

// FetchVideo @ 146bfb040

bool __thiscall
FMediaSamples::FetchVideo
          (FMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  IMediaTextureSample *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  TRange<FMediaTimeStamp> local_78;
  IMediaTextureSample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TRange<FMediaTimeStamp> local_38;
  
  local_38.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_38.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_38.LowerBound.Value.Time.Ticks = (param_1->LowerBound).Value.Time.Ticks;
  plVar1 = &(this->VideoSampleQueue)._padding_;
  local_38.LowerBound.Value.SequenceIndex = (param_1->LowerBound).Value.SequenceIndex;
  local_38.LowerBound.Value.LoopIndex = (param_1->LowerBound).Value.LoopIndex;
  local_38.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_38.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_38.UpperBound.Value.Time.Ticks = (param_1->UpperBound).Value.Time.Ticks;
  local_38.UpperBound.Value.SequenceIndex = (param_1->UpperBound).Value.SequenceIndex;
  local_38.UpperBound.Value.LoopIndex = (param_1->UpperBound).Value.LoopIndex;
  local_98 = (IMediaTextureSample *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  cVar3 = (**(code **)(*plVar1 + 8))(plVar1,&local_98);
  if (cVar3 != '\0') {
    if ((local_98 == (IMediaTextureSample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)((longlong)*local_98 + 0x60))(local_98,&local_88);
    if ((local_98 == (IMediaTextureSample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*local_98 + 0x20))(local_98,local_res8);
    local_78.UpperBound.Value.Time.Ticks = *plVar6 + CONCAT44(uStack_84,local_88);
    local_78.LowerBound.Value.Time.Ticks._0_4_ = local_88;
    local_78.LowerBound.Value.Time.Ticks._4_4_ = uStack_84;
    local_78.LowerBound.Value.SequenceIndex = iStack_80;
    local_78.LowerBound.Value.LoopIndex = iStack_7c;
    local_78.LowerBound.Type.Value = '\x01';
    local_78.UpperBound.Type.Value = '\0';
    local_78.UpperBound.Value.SequenceIndex = iStack_80;
    local_78.UpperBound.Value.LoopIndex = iStack_7c;
    bVar4 = TRange<FMediaTimeStamp>::Overlaps(&local_38,&local_78);
    if (bVar4) {
      if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_2->Object;
      pTStack_40 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = local_98;
      (param_2->SharedReferenceCount).ReferenceController = pTStack_90;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_90);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  return false;
}

// FlushSamples @ 146bfcc30

void __thiscall FMediaSamples::FlushSamples(FMediaSamples *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInSlateThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaSamples.cpp"
                         ,0x83,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  (**(code **)((this->AudioSampleQueue)._padding_ + 0x18))(&this->AudioSampleQueue);
  (**(code **)((this->MetadataSampleQueue)._padding_ + 0x18))();
  (**(code **)((this->CaptionSampleQueue)._padding_ + 0x18))();
  (**(code **)((this->SubtitleSampleQueue)._padding_ + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x000146bfccb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->VideoSampleQueue)._padding_ + 0x18))();
  return;
}

// GetNumDroppedAudioSamples @ 146bfef10

uint __thiscall FMediaSamples::GetNumDroppedAudioSamples(FMediaSamples *this,bool param_1)

{
  longlong lVar1;
  
  lVar1 = (this->AudioSampleQueue)._padding_;
  if (param_1) {
    *(undefined4 *)&(this->AudioSampleQueue)._padding_ = 0;
  }
  return (uint)lVar1;
}

// GetNumDroppedCaptionSamples @ 146bfef40

uint __thiscall FMediaSamples::GetNumDroppedCaptionSamples(FMediaSamples *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = (this->CaptionSampleQueue).NumDroppedSamples;
  if (param_1) {
    (this->CaptionSampleQueue).NumDroppedSamples = 0;
  }
  return uVar1;
}

// GetNumDroppedMetadataSamples @ 146bfef70

uint __thiscall FMediaSamples::GetNumDroppedMetadataSamples(FMediaSamples *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = (this->MetadataSampleQueue).NumDroppedSamples;
  if (param_1) {
    (this->MetadataSampleQueue).NumDroppedSamples = 0;
  }
  return uVar1;
}

// GetNumDroppedSubtitleSamples @ 146bfefa0

uint __thiscall FMediaSamples::GetNumDroppedSubtitleSamples(FMediaSamples *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = (this->SubtitleSampleQueue).NumDroppedSamples;
  if (param_1) {
    (this->SubtitleSampleQueue).NumDroppedSamples = 0;
  }
  return uVar1;
}

// GetNumDroppedVideoSamples @ 146bfefd0

uint __thiscall FMediaSamples::GetNumDroppedVideoSamples(FMediaSamples *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = (this->VideoSampleQueue).NumDroppedSamples;
  if (param_1) {
    (this->VideoSampleQueue).NumDroppedSamples = 0;
  }
  return uVar1;
}

// NumAudioSamples @ 146c03630

int __thiscall FMediaSamples::NumAudioSamples(FMediaSamples *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146c03638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->AudioSampleQueue)._padding_ + 8))(&this->AudioSampleQueue);
  return iVar1;
}

// NumCaptionSamples @ 146c03660

int __thiscall FMediaSamples::NumCaptionSamples(FMediaSamples *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146c0366a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->CaptionSampleQueue)._padding_ + 8))();
  return iVar1;
}

// NumMetadataSamples @ 146c03690

int __thiscall FMediaSamples::NumMetadataSamples(FMediaSamples *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146c0369a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->MetadataSampleQueue)._padding_ + 8))();
  return iVar1;
}

// NumSubtitleSamples @ 146c036c0

int __thiscall FMediaSamples::NumSubtitleSamples(FMediaSamples *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146c036ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->SubtitleSampleQueue)._padding_ + 8))();
  return iVar1;
}

// NumVideoSamples @ 146c036f0

int __thiscall FMediaSamples::NumVideoSamples(FMediaSamples *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146c036fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->VideoSampleQueue)._padding_ + 8))();
  return iVar1;
}

// PeekAudioSampleTimeRanges @ 146c044c0

bool __thiscall
FMediaSamples::PeekAudioSampleTimeRanges
          (FMediaSamples *this,TArray<TRange<FMediaTimeStamp>,TSizedDefaultAllocator<32>_> *param_1)

{
  (**(code **)((this->AudioSampleQueue)._padding_ + 0x10))(&(this->AudioSampleQueue)._padding_);
  return 0 < param_1->ArrayNum;
}

// PeekVideoSampleTime @ 146c04500

bool __thiscall FMediaSamples::PeekVideoSampleTime(FMediaSamples *this,FMediaTimeStamp *param_1)

{
  code *pcVar1;
  long64 lVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 *plVar6;
  longlong *plVar7;
  longlong *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 local_18 [16];
  
  plVar7 = &(this->VideoSampleQueue)._padding_;
  local_28 = (longlong *)0x0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  cVar3 = (**(code **)(*plVar7 + 8))(plVar7,&local_28);
  if (cVar3 == '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
    return false;
  }
  if ((local_28 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  plVar6 = (long64 *)(**(code **)(*local_28 + 0x60))(local_28,local_18);
  lVar2 = plVar6[1];
  (param_1->Time).Ticks = *plVar6;
  param_1->SequenceIndex = (int)lVar2;
  param_1->LoopIndex = (int)((ulonglong)lVar2 >> 0x20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return true;
}

// PeekVideoSampleTimeRanges @ 146c045a0

bool __thiscall
FMediaSamples::PeekVideoSampleTimeRanges
          (FMediaSamples *this,TArray<TRange<FMediaTimeStamp>,TSizedDefaultAllocator<32>_> *param_1)

{
  (**(code **)((this->VideoSampleQueue)._padding_ + 0x10))();
  return 0 < param_1->ArrayNum;
}

// PurgeOutdatedCaptionSamples @ 146c08510

uint __thiscall
FMediaSamples::PurgeOutdatedCaptionSamples
          (FMediaSamples *this,FMediaTimeStamp *param_1,bool param_2,FTimespan param_3)

{
  uint uVar1;
  
  uVar1 = TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
          PurgeOutdatedSamples(&this->CaptionSampleQueue,param_1,param_2,param_3);
  return uVar1;
}

// PurgeOutdatedMetadataSamples @ 146c08540

uint __thiscall
FMediaSamples::PurgeOutdatedMetadataSamples
          (FMediaSamples *this,FMediaTimeStamp *param_1,bool param_2,FTimespan param_3)

{
  uint uVar1;
  
  uVar1 = TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
          PurgeOutdatedSamples(&this->MetadataSampleQueue,param_1,param_2,param_3);
  return uVar1;
}

// PurgeOutdatedSubtitleSamples @ 146c09050

uint __thiscall
FMediaSamples::PurgeOutdatedSubtitleSamples
          (FMediaSamples *this,FMediaTimeStamp *param_1,bool param_2,FTimespan param_3)

{
  uint uVar1;
  
  uVar1 = TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
          PurgeOutdatedSamples(&this->SubtitleSampleQueue,param_1,param_2,param_3);
  return uVar1;
}

// PurgeOutdatedVideoSamples @ 146c09080

uint __thiscall
FMediaSamples::PurgeOutdatedVideoSamples
          (FMediaSamples *this,FMediaTimeStamp *param_1,bool param_2,FTimespan param_3)

{
  uint uVar1;
  
  uVar1 = TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
          PurgeOutdatedSamples(&this->VideoSampleQueue,param_1,param_2,param_3);
  return uVar1;
}

// SetMinExpectedNextSequenceIndex @ 146c0cf80

void __thiscall
FMediaSamples::SetMinExpectedNextSequenceIndex(FMediaSamples *this,TOptional<int> param_1)

{
  TOptional<int> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = &this->NextMinSequenceIndex;
  bVar4 = (this->NextMinSequenceIndex).bIsSet;
  if (*(char *)((longlong)param_1 + 4) == '\0') {
    if (bVar4 != false) {
      (this->NextMinSequenceIndex).bIsSet = false;
      return;
    }
  }
  else if ((bVar4 != (bool)*(char *)((longlong)param_1 + 4)) ||
          ((bVar4 != false && (pTVar1->TypedValue != *(int *)param_1)))) {
    if (param_1 != (TOptional<int>)pTVar1) {
      pTVar1->TypedValue = *(int *)param_1;
      (this->NextMinSequenceIndex).bIsSet = true;
    }
    if (*(char *)((longlong)param_1 + 4) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar2 = *(int *)param_1;
    TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::PurgeUntilSequenceIndex
              ((TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *)&this->AudioSampleQueue
               ,iVar2);
    TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
    PurgeUntilSequenceIndex(&this->MetadataSampleQueue,iVar2);
    TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
    PurgeUntilSequenceIndex(&this->CaptionSampleQueue,iVar2);
    TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
    PurgeUntilSequenceIndex(&this->SubtitleSampleQueue,iVar2);
    TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
    PurgeUntilSequenceIndex(&this->VideoSampleQueue,iVar2);
  }
  return;
}

