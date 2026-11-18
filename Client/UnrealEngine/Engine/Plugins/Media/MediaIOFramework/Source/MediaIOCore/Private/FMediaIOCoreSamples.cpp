// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 24

// FMediaIOCoreSamples @ 14d78a380

FMediaIOCoreSamples * __thiscall FMediaIOCoreSamples::FMediaIOCoreSamples(FMediaIOCoreSamples *this)

{
  FName *pFVar1;
  FName local_res8;
  
  this->_padding_ = (longlong)&___7FMediaIOCoreSamples__6B_;
  pFVar1 = ::FName::FName(&local_res8,"Video");
  (this->VideoSamples).ChannelName = *pFVar1;
  (this->VideoSamples)._padding_ =
       (longlong)&___7__FMediaIOCoreSampleContainer_VIMediaTextureSample____6B_;
  (this->VideoSamples).CachedSamplesData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoSamples).CachedSamplesData.ArrayNum = 0;
  (this->VideoSamples).CachedSamplesData.ArrayMax = 0;
  (this->VideoSamples).CachedEvaluationData.DistanceToNewestSampleSeconds = 0.0;
  (this->VideoSamples).CachedEvaluationData.DistanceToOldestSampleSeconds = 0.0;
  (this->VideoSamples).BufferUnderflow = (TAtomic<int>)0x0;
  (this->VideoSamples).BufferOverflow = (TAtomic<int>)0x0;
  (this->VideoSamples).FrameDrop = (TAtomic<int>)0x0;
  (this->VideoSamples).EvaluationSettings.FrameRate.Numerator = 0x18;
  (this->VideoSamples).EvaluationSettings.FrameRate.Denominator = 1;
  (this->VideoSamples).EvaluationSettings.EvaluationType = PlatformTime;
  (this->VideoSamples).EvaluationSettings.BufferSize = 8;
  (this->VideoSamples).EvaluationSettings.PlayerTimeOffset = 0.0;
  (this->VideoSamples).EvaluationSettings.AbsoluteMaxBufferSize = 0x20;
  (this->VideoSamples).bIsStatEnabled = true;
  (this->VideoSamples).bIsChannelEnabled = false;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->VideoSamples).CriticalSection,4000);
  (this->VideoSamples).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoSamples).Samples.ArrayNum = 0;
  (this->VideoSamples).Samples.ArrayMax = 0;
  pFVar1 = ::FName::FName(&local_res8,"Audio");
  (this->AudioSamples).ChannelName = *pFVar1;
  (this->AudioSamples)._padding_ =
       (longlong)&___7__FMediaIOCoreSampleContainer_VIMediaAudioSample____6B_;
  (this->AudioSamples).CachedSamplesData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioSamples).CachedSamplesData.ArrayNum = 0;
  (this->AudioSamples).CachedSamplesData.ArrayMax = 0;
  (this->AudioSamples).CachedEvaluationData.DistanceToNewestSampleSeconds = 0.0;
  (this->AudioSamples).CachedEvaluationData.DistanceToOldestSampleSeconds = 0.0;
  (this->AudioSamples).BufferUnderflow = (TAtomic<int>)0x0;
  (this->AudioSamples).BufferOverflow = (TAtomic<int>)0x0;
  (this->AudioSamples).FrameDrop = (TAtomic<int>)0x0;
  (this->AudioSamples).EvaluationSettings.FrameRate.Numerator = 0x18;
  (this->AudioSamples).EvaluationSettings.FrameRate.Denominator = 1;
  (this->AudioSamples).EvaluationSettings.EvaluationType = PlatformTime;
  (this->AudioSamples).EvaluationSettings.BufferSize = 8;
  (this->AudioSamples).EvaluationSettings.PlayerTimeOffset = 0.0;
  (this->AudioSamples).EvaluationSettings.AbsoluteMaxBufferSize = 0x20;
  (this->AudioSamples).bIsStatEnabled = true;
  (this->AudioSamples).bIsChannelEnabled = false;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->AudioSamples).CriticalSection,4000);
  (this->AudioSamples).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioSamples).Samples.ArrayNum = 0;
  (this->AudioSamples).Samples.ArrayMax = 0;
  pFVar1 = ::FName::FName(&local_res8,"Metadata");
  (this->MetadataSamples).ChannelName = *pFVar1;
  (this->MetadataSamples)._padding_ =
       (longlong)&___7__FMediaIOCoreSampleContainer_VIMediaBinarySample____6B_;
  (this->MetadataSamples).CachedSamplesData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataSamples).CachedSamplesData.ArrayNum = 0;
  (this->MetadataSamples).CachedSamplesData.ArrayMax = 0;
  (this->MetadataSamples).CachedEvaluationData.DistanceToNewestSampleSeconds = 0.0;
  (this->MetadataSamples).CachedEvaluationData.DistanceToOldestSampleSeconds = 0.0;
  (this->MetadataSamples).BufferUnderflow = (TAtomic<int>)0x0;
  (this->MetadataSamples).BufferOverflow = (TAtomic<int>)0x0;
  (this->MetadataSamples).FrameDrop = (TAtomic<int>)0x0;
  (this->MetadataSamples).EvaluationSettings.FrameRate.Numerator = 0x18;
  (this->MetadataSamples).EvaluationSettings.FrameRate.Denominator = 1;
  (this->MetadataSamples).EvaluationSettings.EvaluationType = PlatformTime;
  (this->MetadataSamples).EvaluationSettings.BufferSize = 8;
  (this->MetadataSamples).EvaluationSettings.PlayerTimeOffset = 0.0;
  (this->MetadataSamples).EvaluationSettings.AbsoluteMaxBufferSize = 0x20;
  (this->MetadataSamples).bIsStatEnabled = true;
  (this->MetadataSamples).bIsChannelEnabled = false;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->MetadataSamples).CriticalSection,4000);
  (this->MetadataSamples).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataSamples).Samples.ArrayNum = 0;
  (this->MetadataSamples).Samples.ArrayMax = 0;
  pFVar1 = ::FName::FName(&local_res8,"Subtitles");
  FMediaIOCoreSampleContainer<IMediaOverlaySample>::FMediaIOCoreSampleContainer<IMediaOverlaySample>
            (&this->SubtitleSamples,*pFVar1);
  pFVar1 = ::FName::FName(&local_res8,"Caption");
  FMediaIOCoreSampleContainer<IMediaOverlaySample>::FMediaIOCoreSampleContainer<IMediaOverlaySample>
            (&this->CaptionSamples,*pFVar1);
  return this;
}

// ~FMediaIOCoreSamples @ 14d78ca80

void __thiscall FMediaIOCoreSamples::~FMediaIOCoreSamples(FMediaIOCoreSamples *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<IMediaOverlaySample,1>,int>
            ((TSharedPtr<IMediaOverlaySample,1> *)
             (this->CaptionSamples).Samples.AllocatorInstance.Data,
             (this->CaptionSamples).Samples.ArrayNum);
  pFVar1 = (this->CaptionSamples).Samples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->CaptionSamples).CriticalSection);
  pFVar1 = (this->CaptionSamples).CachedSamplesData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<IMediaOverlaySample,1>,int>
            ((TSharedPtr<IMediaOverlaySample,1> *)
             (this->SubtitleSamples).Samples.AllocatorInstance.Data,
             (this->SubtitleSamples).Samples.ArrayNum);
  pFVar1 = (this->SubtitleSamples).Samples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->SubtitleSamples).CriticalSection);
  pFVar1 = (this->SubtitleSamples).CachedSamplesData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<IMediaBinarySample,1>,int>
            ((TSharedPtr<IMediaBinarySample,1> *)
             (this->MetadataSamples).Samples.AllocatorInstance.Data,
             (this->MetadataSamples).Samples.ArrayNum);
  pFVar1 = (this->MetadataSamples).Samples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->MetadataSamples).CriticalSection);
  pFVar1 = (this->MetadataSamples).CachedSamplesData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<IMediaAudioSample,1>,int>
            ((TSharedPtr<IMediaAudioSample,1> *)(this->AudioSamples).Samples.AllocatorInstance.Data,
             (this->AudioSamples).Samples.ArrayNum);
  pFVar1 = (this->AudioSamples).Samples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->AudioSamples).CriticalSection);
  pFVar1 = (this->AudioSamples).CachedSamplesData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
            ((TSharedPtr<IMediaTextureSample,1> *)
             (this->VideoSamples).Samples.AllocatorInstance.Data,
             (this->VideoSamples).Samples.ArrayNum);
  pFVar1 = (this->VideoSamples).Samples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->VideoSamples).CriticalSection);
  pFVar1 = (this->VideoSamples).CachedSamplesData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMediaSamples__6B_;
  return;
}

// AddVideo @ 14d796b10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMediaIOCoreSamples::AddVideo(FMediaIOCoreSamples *this,TSharedRef<IMediaTextureSample,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<int> *pTVar1;
  TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  
  lpCriticalSection = &(this->VideoSamples).CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &(this->VideoSamples).Samples;
    if ((this->VideoSamples).EvaluationSettings.BufferSize <
        (this->VideoSamples).Samples.ArrayNum + 1) {
      LOCK();
      pTVar1 = &(this->VideoSamples).FrameDrop;
      *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
      UNLOCK();
      TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                (this_00,(this->VideoSamples).Samples.ArrayNum + -1,Default);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,&this_00->AllocatorInstance,&(this->VideoSamples).Samples.ArrayNum,
                       &(this->VideoSamples).Samples.ArrayMax);
    pFVar2 = (this_00->AllocatorInstance).Data;
    memmove(pFVar2 + 0x10,pFVar2,(longlong)iVar4 << 4);
    pFVar2 = (this_00->AllocatorInstance).Data;
    *(IMediaTextureSample **)pFVar2 = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar2 + 8) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CacheSamplesState @ 14d7983e0

void __thiscall FMediaIOCoreSamples::CacheSamplesState(FMediaIOCoreSamples *this,FTimespan param_1)

{
  FMediaIOCoreSampleContainer<IMediaTextureSample>::CacheState(&this->VideoSamples,param_1);
  FMediaIOCoreSampleContainer<IMediaAudioSample>::CacheState(&this->AudioSamples,param_1);
  FMediaIOCoreSampleContainer<IMediaBinarySample>::CacheState(&this->MetadataSamples,param_1);
  FMediaIOCoreSampleContainer<IMediaOverlaySample>::CacheState(&this->SubtitleSamples,param_1);
  FMediaIOCoreSampleContainer<IMediaOverlaySample>::CacheState(&this->CaptionSamples,param_1);
  return;
}

// EnableTimedDataChannels @ 14d7a3c10

void __thiscall
FMediaIOCoreSamples::EnableTimedDataChannels
          (FMediaIOCoreSamples *this,ITimedDataInput *param_1,EMediaIOSampleType param_2)

{
  FMediaIOCoreSampleContainer<IMediaAudioSample> *pFVar1;
  FMediaIOCoreSampleContainer<IMediaBinarySample> *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FModuleManager *pFVar7;
  IModuleInterface *pIVar8;
  FTimedDataInputCollection *pFVar9;
  bool bVar10;
  EMediaIOSampleType EVar11;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  FName local_48;
  FName local_40;
  FName local_38 [2];
  
  bVar10 = (bool)((byte)param_2 & 1);
  if (param_1 == (ITimedDataInput *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Public\\MediaIOCoreSampleContainer.h"
                       ,0x89,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (bVar10 != (this->VideoSamples).bIsChannelEnabled) {
    (this->VideoSamples).bIsChannelEnabled = bVar10;
    if ((param_2 & Video) == None) {
      pFVar6 = ::FName::FName(&local_res10,L"TimeManagement");
      FVar3 = *pFVar6;
      pFVar7 = FModuleManager::Get();
      pIVar8 = FModuleManager::LoadModuleChecked(pFVar7,FVar3);
      pFVar9 = (FTimedDataInputCollection *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
      FTimedDataInputCollection::Remove(pFVar9,(ITimedDataInputChannel *)&this->VideoSamples);
      (**(code **)((longlong)*param_1 + 0x60))(param_1,&this->VideoSamples);
    }
    else {
      (**(code **)((longlong)*param_1 + 0x58))(param_1,&this->VideoSamples);
      pFVar6 = ::FName::FName(&local_res8,L"TimeManagement");
      FVar3 = *pFVar6;
      pFVar7 = FModuleManager::Get();
      pIVar8 = FModuleManager::LoadModuleChecked(pFVar7,FVar3);
      pFVar9 = (FTimedDataInputCollection *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
      FTimedDataInputCollection::Add(pFVar9,(ITimedDataInputChannel *)&this->VideoSamples);
    }
  }
  pFVar1 = &this->AudioSamples;
  bVar10 = (param_2 & Audio) != None;
  if (param_1 == (ITimedDataInput *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Public\\MediaIOCoreSampleContainer.h"
                       ,0x89,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (bVar10 != (this->AudioSamples).bIsChannelEnabled) {
    (this->AudioSamples).bIsChannelEnabled = bVar10;
    if ((param_2 & Audio) == None) {
      pFVar6 = ::FName::FName(&local_48,L"TimeManagement");
      FVar3 = *pFVar6;
      pFVar7 = FModuleManager::Get();
      pIVar8 = FModuleManager::LoadModuleChecked(pFVar7,FVar3);
      pFVar9 = (FTimedDataInputCollection *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
      FTimedDataInputCollection::Remove(pFVar9,(ITimedDataInputChannel *)pFVar1);
      (**(code **)((longlong)*param_1 + 0x60))(param_1,pFVar1);
    }
    else {
      (**(code **)((longlong)*param_1 + 0x58))(param_1,pFVar1);
      pFVar6 = ::FName::FName(&local_res20,L"TimeManagement");
      FVar3 = *pFVar6;
      pFVar7 = FModuleManager::Get();
      pIVar8 = FModuleManager::LoadModuleChecked(pFVar7,FVar3);
      pFVar9 = (FTimedDataInputCollection *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
      FTimedDataInputCollection::Add(pFVar9,(ITimedDataInputChannel *)pFVar1);
    }
  }
  pFVar2 = &this->MetadataSamples;
  EVar11 = param_2 & Metadata;
  if (param_1 == (ITimedDataInput *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Input",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Public\\MediaIOCoreSampleContainer.h"
                        ,0x89,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((EVar11 != None) != (this->MetadataSamples).bIsChannelEnabled) {
    (this->MetadataSamples).bIsChannelEnabled = EVar11 != None;
    if (EVar11 == None) {
      pFVar6 = ::FName::FName(local_38,L"TimeManagement");
      FVar3 = *pFVar6;
      pFVar7 = FModuleManager::Get();
      pIVar8 = FModuleManager::LoadModuleChecked(pFVar7,FVar3);
      pFVar9 = (FTimedDataInputCollection *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
      FTimedDataInputCollection::Remove(pFVar9,(ITimedDataInputChannel *)pFVar2);
      (**(code **)((longlong)*param_1 + 0x60))(param_1,pFVar2);
    }
    else {
      (**(code **)((longlong)*param_1 + 0x58))(param_1,pFVar2);
      pFVar6 = ::FName::FName(&local_40,L"TimeManagement");
      FVar3 = *pFVar6;
      pFVar7 = FModuleManager::Get();
      pIVar8 = FModuleManager::LoadModuleChecked(pFVar7,FVar3);
      pFVar9 = (FTimedDataInputCollection *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
      FTimedDataInputCollection::Add(pFVar9,(ITimedDataInputChannel *)pFVar2);
    }
  }
  FMediaIOCoreSampleContainer<IMediaOverlaySample>::EnableChannel
            (&this->SubtitleSamples,param_1,(bool)((byte)(param_2 >> 3) & 1));
  FMediaIOCoreSampleContainer<IMediaOverlaySample>::EnableChannel
            (&this->CaptionSamples,param_1,(bool)((byte)(param_2 >> 4) & 1));
  return;
}

// FetchAudio @ 14d7a6f60

bool __thiscall
FMediaIOCoreSamples::FetchAudio
          (FMediaIOCoreSamples *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaAudioSample,1> *param_2)

{
  bool bVar1;
  TRange<FTimespan> local_28;
  
  local_28.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_28.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_28.LowerBound.Value.Ticks = (param_1->LowerBound).Value.Ticks;
  local_28.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_28.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_28.UpperBound.Value.Ticks = (param_1->UpperBound).Value.Ticks;
  bVar1 = FMediaIOCoreSampleContainer<IMediaAudioSample>::FetchSample
                    (&this->AudioSamples,&local_28,param_2);
  return bVar1;
}

// FetchCaption @ 14d7a6fa0

bool __thiscall
FMediaIOCoreSamples::FetchCaption
          (FMediaIOCoreSamples *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaOverlaySample,1> *param_2)

{
  bool bVar1;
  TRange<FTimespan> local_28;
  
  local_28.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_28.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_28.LowerBound.Value.Ticks = (param_1->LowerBound).Value.Ticks;
  local_28.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_28.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_28.UpperBound.Value.Ticks = (param_1->UpperBound).Value.Ticks;
  bVar1 = FMediaIOCoreSampleContainer<IMediaOverlaySample>::FetchSample
                    (&this->CaptionSamples,&local_28,param_2);
  return bVar1;
}

// FetchMetadata @ 14d7a6fe0

bool __thiscall
FMediaIOCoreSamples::FetchMetadata
          (FMediaIOCoreSamples *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaBinarySample,1> *param_2)

{
  bool bVar1;
  TRange<FTimespan> local_28;
  
  local_28.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_28.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_28.LowerBound.Value.Ticks = (param_1->LowerBound).Value.Ticks;
  local_28.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_28.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_28.UpperBound.Value.Ticks = (param_1->UpperBound).Value.Ticks;
  bVar1 = FMediaIOCoreSampleContainer<IMediaBinarySample>::FetchSample
                    (&this->MetadataSamples,&local_28,param_2);
  return bVar1;
}

// FetchSubtitle @ 14d7a76e0

bool __thiscall
FMediaIOCoreSamples::FetchSubtitle
          (FMediaIOCoreSamples *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaOverlaySample,1> *param_2)

{
  bool bVar1;
  TRange<FTimespan> local_28;
  
  local_28.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_28.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_28.LowerBound.Value.Ticks = (param_1->LowerBound).Value.Ticks;
  local_28.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_28.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_28.UpperBound.Value.Ticks = (param_1->UpperBound).Value.Ticks;
  bVar1 = FMediaIOCoreSampleContainer<IMediaOverlaySample>::FetchSample
                    (&this->SubtitleSamples,&local_28,param_2);
  return bVar1;
}

// FetchVideo @ 14d7a77d0

bool __thiscall
FMediaIOCoreSamples::FetchVideo
          (FMediaIOCoreSamples *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2)

{
  bool bVar1;
  TRange<FTimespan> local_28;
  
  local_28.LowerBound.Type.Value = (param_1->LowerBound).Type.Value;
  local_28.LowerBound._1_7_ = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  local_28.LowerBound.Value.Ticks = (param_1->LowerBound).Value.Ticks;
  local_28.UpperBound.Type.Value = (param_1->UpperBound).Type.Value;
  local_28.UpperBound._1_7_ = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  local_28.UpperBound.Value.Ticks = (param_1->UpperBound).Value.Ticks;
  bVar1 = FMediaIOCoreSampleContainer<IMediaTextureSample>::FetchSample
                    (&this->VideoSamples,&local_28,param_2);
  return bVar1;
}

// FlushSamples @ 14d7a7bc0

void __thiscall FMediaIOCoreSamples::FlushSamples(FMediaIOCoreSamples *this)

{
  FWindowsRecursiveMutex *pFVar1;
  int *piVar2;
  
  pFVar1 = &(this->AudioSamples).CriticalSection;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    DestructItems<TSharedPtr<IMediaAudioSample,1>,int>
              ((TSharedPtr<IMediaAudioSample,1> *)
               (this->AudioSamples).Samples.AllocatorInstance.Data,
               (this->AudioSamples).Samples.ArrayNum);
    piVar2 = &(this->AudioSamples).Samples.ArrayMax;
    (this->AudioSamples).Samples.ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->AudioSamples).Samples.AllocatorInstance,0,piVar2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    FMediaIOCoreSampleContainer<IMediaOverlaySample>::FlushSamples(&this->CaptionSamples);
    pFVar1 = &(this->MetadataSamples).CriticalSection;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      DestructItems<TSharedPtr<IMediaBinarySample,1>,int>
                ((TSharedPtr<IMediaBinarySample,1> *)
                 (this->MetadataSamples).Samples.AllocatorInstance.Data,
                 (this->MetadataSamples).Samples.ArrayNum);
      piVar2 = &(this->MetadataSamples).Samples.ArrayMax;
      (this->MetadataSamples).Samples.ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->MetadataSamples).Samples.AllocatorInstance,0,piVar2);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      FMediaIOCoreSampleContainer<IMediaOverlaySample>::FlushSamples(&this->SubtitleSamples);
      pFVar1 = &(this->VideoSamples).CriticalSection;
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
                  ((TSharedPtr<IMediaTextureSample,1> *)
                   (this->VideoSamples).Samples.AllocatorInstance.Data,
                   (this->VideoSamples).Samples.ArrayNum);
        piVar2 = &(this->VideoSamples).Samples.ArrayMax;
        (this->VideoSamples).Samples.ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->VideoSamples).Samples.AllocatorInstance,0,piVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x00014d7a7d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetVideoSamples @ 14d7aeb50

TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_> * __thiscall
FMediaIOCoreSamples::GetVideoSamples
          (FMediaIOCoreSamples *this,
          TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TSharedPtr<IMediaTextureSample,1> *pTVar2;
  
  lpCriticalSection = &(this->VideoSamples).CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar1 = (this->VideoSamples).Samples.ArrayNum;
    pTVar2 = (TSharedPtr<IMediaTextureSample,1> *)
             (this->VideoSamples).Samples.AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<TSharedPtr<IMediaTextureSample,1>,TSharedPtr<IMediaTextureSample,1>,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,pTVar2,iVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// InitializeAudioBuffer @ 14d7afa20

void __thiscall
FMediaIOCoreSamples::InitializeAudioBuffer
          (FMediaIOCoreSamples *this,FMediaIOSamplingSettings *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ETimedDataInputEvaluationType EVar6;
  undefined3 uVar7;
  
  iVar2 = (param_1->FrameRate).Denominator;
  EVar6 = param_1->EvaluationType;
  uVar7 = *(undefined3 *)&param_1->field_0x9;
  iVar3 = param_1->BufferSize;
  lVar1 = (this->AudioSamples)._padding_;
  (this->AudioSamples).EvaluationSettings.FrameRate.Numerator = (param_1->FrameRate).Numerator;
  (this->AudioSamples).EvaluationSettings.FrameRate.Denominator = iVar2;
  (this->AudioSamples).EvaluationSettings.EvaluationType = EVar6;
  *(undefined3 *)&(this->AudioSamples).EvaluationSettings.field_0x9 = uVar7;
  (this->AudioSamples).EvaluationSettings.BufferSize = iVar3;
  uVar4 = *(undefined4 *)((longlong)&param_1->PlayerTimeOffset + 4);
  iVar2 = param_1->AbsoluteMaxBufferSize;
  uVar5 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->AudioSamples).EvaluationSettings.PlayerTimeOffset =
       *(undefined4 *)&param_1->PlayerTimeOffset;
  *(undefined4 *)((longlong)&(this->AudioSamples).EvaluationSettings.PlayerTimeOffset + 4) = uVar4;
  (this->AudioSamples).EvaluationSettings.AbsoluteMaxBufferSize = iVar2;
  *(undefined4 *)&(this->AudioSamples).EvaluationSettings.field_0x1c = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00014d7afa39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x70))();
  return;
}

// InitializeCaptionBuffer @ 14d7afa50

void __thiscall
FMediaIOCoreSamples::InitializeCaptionBuffer
          (FMediaIOCoreSamples *this,FMediaIOSamplingSettings *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ETimedDataInputEvaluationType EVar6;
  undefined3 uVar7;
  
  iVar2 = (param_1->FrameRate).Denominator;
  EVar6 = param_1->EvaluationType;
  uVar7 = *(undefined3 *)&param_1->field_0x9;
  iVar3 = param_1->BufferSize;
  lVar1 = (this->CaptionSamples)._padding_;
  (this->CaptionSamples).EvaluationSettings.FrameRate.Numerator = (param_1->FrameRate).Numerator;
  (this->CaptionSamples).EvaluationSettings.FrameRate.Denominator = iVar2;
  (this->CaptionSamples).EvaluationSettings.EvaluationType = EVar6;
  *(undefined3 *)&(this->CaptionSamples).EvaluationSettings.field_0x9 = uVar7;
  (this->CaptionSamples).EvaluationSettings.BufferSize = iVar3;
  uVar4 = *(undefined4 *)((longlong)&param_1->PlayerTimeOffset + 4);
  iVar2 = param_1->AbsoluteMaxBufferSize;
  uVar5 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->CaptionSamples).EvaluationSettings.PlayerTimeOffset =
       *(undefined4 *)&param_1->PlayerTimeOffset;
  *(undefined4 *)((longlong)&(this->CaptionSamples).EvaluationSettings.PlayerTimeOffset + 4) = uVar4
  ;
  (this->CaptionSamples).EvaluationSettings.AbsoluteMaxBufferSize = iVar2;
  *(undefined4 *)&(this->CaptionSamples).EvaluationSettings.field_0x1c = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00014d7afa69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x70))();
  return;
}

// InitializeMetadataBuffer @ 14d7b0070

void __thiscall
FMediaIOCoreSamples::InitializeMetadataBuffer
          (FMediaIOCoreSamples *this,FMediaIOSamplingSettings *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ETimedDataInputEvaluationType EVar6;
  undefined3 uVar7;
  
  iVar2 = (param_1->FrameRate).Denominator;
  EVar6 = param_1->EvaluationType;
  uVar7 = *(undefined3 *)&param_1->field_0x9;
  iVar3 = param_1->BufferSize;
  lVar1 = (this->MetadataSamples)._padding_;
  (this->MetadataSamples).EvaluationSettings.FrameRate.Numerator = (param_1->FrameRate).Numerator;
  (this->MetadataSamples).EvaluationSettings.FrameRate.Denominator = iVar2;
  (this->MetadataSamples).EvaluationSettings.EvaluationType = EVar6;
  *(undefined3 *)&(this->MetadataSamples).EvaluationSettings.field_0x9 = uVar7;
  (this->MetadataSamples).EvaluationSettings.BufferSize = iVar3;
  uVar4 = *(undefined4 *)((longlong)&param_1->PlayerTimeOffset + 4);
  iVar2 = param_1->AbsoluteMaxBufferSize;
  uVar5 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->MetadataSamples).EvaluationSettings.PlayerTimeOffset =
       *(undefined4 *)&param_1->PlayerTimeOffset;
  *(undefined4 *)((longlong)&(this->MetadataSamples).EvaluationSettings.PlayerTimeOffset + 4) =
       uVar4;
  (this->MetadataSamples).EvaluationSettings.AbsoluteMaxBufferSize = iVar2;
  *(undefined4 *)&(this->MetadataSamples).EvaluationSettings.field_0x1c = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00014d7b0089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x70))();
  return;
}

// InitializeSubtitlesBuffer @ 14d7b0c90

void __thiscall
FMediaIOCoreSamples::InitializeSubtitlesBuffer
          (FMediaIOCoreSamples *this,FMediaIOSamplingSettings *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ETimedDataInputEvaluationType EVar6;
  undefined3 uVar7;
  
  iVar2 = (param_1->FrameRate).Denominator;
  EVar6 = param_1->EvaluationType;
  uVar7 = *(undefined3 *)&param_1->field_0x9;
  iVar3 = param_1->BufferSize;
  lVar1 = (this->SubtitleSamples)._padding_;
  (this->SubtitleSamples).EvaluationSettings.FrameRate.Numerator = (param_1->FrameRate).Numerator;
  (this->SubtitleSamples).EvaluationSettings.FrameRate.Denominator = iVar2;
  (this->SubtitleSamples).EvaluationSettings.EvaluationType = EVar6;
  *(undefined3 *)&(this->SubtitleSamples).EvaluationSettings.field_0x9 = uVar7;
  (this->SubtitleSamples).EvaluationSettings.BufferSize = iVar3;
  uVar4 = *(undefined4 *)((longlong)&param_1->PlayerTimeOffset + 4);
  iVar2 = param_1->AbsoluteMaxBufferSize;
  uVar5 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->SubtitleSamples).EvaluationSettings.PlayerTimeOffset =
       *(undefined4 *)&param_1->PlayerTimeOffset;
  *(undefined4 *)((longlong)&(this->SubtitleSamples).EvaluationSettings.PlayerTimeOffset + 4) =
       uVar4;
  (this->SubtitleSamples).EvaluationSettings.AbsoluteMaxBufferSize = iVar2;
  *(undefined4 *)&(this->SubtitleSamples).EvaluationSettings.field_0x1c = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00014d7b0ca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x70))();
  return;
}

// InitializeVideoBuffer @ 14d7b1010

void __thiscall
FMediaIOCoreSamples::InitializeVideoBuffer
          (FMediaIOCoreSamples *this,FMediaIOSamplingSettings *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ETimedDataInputEvaluationType EVar6;
  undefined3 uVar7;
  
  iVar2 = (param_1->FrameRate).Denominator;
  EVar6 = param_1->EvaluationType;
  uVar7 = *(undefined3 *)&param_1->field_0x9;
  iVar3 = param_1->BufferSize;
  lVar1 = (this->VideoSamples)._padding_;
  (this->VideoSamples).EvaluationSettings.FrameRate.Numerator = (param_1->FrameRate).Numerator;
  (this->VideoSamples).EvaluationSettings.FrameRate.Denominator = iVar2;
  (this->VideoSamples).EvaluationSettings.EvaluationType = EVar6;
  *(undefined3 *)&(this->VideoSamples).EvaluationSettings.field_0x9 = uVar7;
  (this->VideoSamples).EvaluationSettings.BufferSize = iVar3;
  uVar4 = *(undefined4 *)((longlong)&param_1->PlayerTimeOffset + 4);
  iVar2 = param_1->AbsoluteMaxBufferSize;
  uVar5 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->VideoSamples).EvaluationSettings.PlayerTimeOffset =
       *(undefined4 *)&param_1->PlayerTimeOffset;
  *(undefined4 *)((longlong)&(this->VideoSamples).EvaluationSettings.PlayerTimeOffset + 4) = uVar4;
  (this->VideoSamples).EvaluationSettings.AbsoluteMaxBufferSize = iVar2;
  *(undefined4 *)&(this->VideoSamples).EvaluationSettings.field_0x1c = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00014d7b1027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x70))();
  return;
}

// NumAudioSamples @ 14d7b2430

int __thiscall FMediaIOCoreSamples::NumAudioSamples(FMediaIOCoreSamples *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &(this->AudioSamples).CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->AudioSamples).Samples.ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// NumCaptionSamples @ 14d7b2480

int __thiscall FMediaIOCoreSamples::NumCaptionSamples(FMediaIOCoreSamples *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &(this->CaptionSamples).CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->CaptionSamples).Samples.ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// NumMetadataSamples @ 14d7b24d0

int __thiscall FMediaIOCoreSamples::NumMetadataSamples(FMediaIOCoreSamples *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &(this->MetadataSamples).CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->MetadataSamples).Samples.ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// NumSubtitleSamples @ 14d7b2520

int __thiscall FMediaIOCoreSamples::NumSubtitleSamples(FMediaIOCoreSamples *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &(this->SubtitleSamples).CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->SubtitleSamples).Samples.ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// NumVideoSamples @ 14d7b2570

int __thiscall FMediaIOCoreSamples::NumVideoSamples(FMediaIOCoreSamples *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &(this->VideoSamples).CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->VideoSamples).Samples.ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PeekVideoSampleTime @ 14d7b54d0

bool __thiscall
FMediaIOCoreSamples::PeekVideoSampleTime(FMediaIOCoreSamples *this,FMediaTimeStamp *param_1)

{
  return false;
}

// SetSampleBufferSize @ 14d7bd150

void __thiscall FMediaIOCoreSamples::SetSampleBufferSize(FMediaIOCoreSamples *this,int param_1)

{
  (**(code **)((this->AudioSamples)._padding_ + 0x38))();
  (**(code **)((this->CaptionSamples)._padding_ + 0x38))(&this->CaptionSamples,param_1);
  (**(code **)((this->MetadataSamples)._padding_ + 0x38))(&this->MetadataSamples,param_1);
  (**(code **)((this->SubtitleSamples)._padding_ + 0x38))(&this->SubtitleSamples,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014d7bd1ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->VideoSamples)._padding_ + 0x38))(&this->VideoSamples,param_1);
  return;
}

