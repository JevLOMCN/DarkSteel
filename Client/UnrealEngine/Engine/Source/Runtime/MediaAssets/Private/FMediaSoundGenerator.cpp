// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 13

// FMediaSoundGenerator @ 146c1c6c0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMediaSoundGenerator * __thiscall
FMediaSoundGenerator::FMediaSoundGenerator
          (FMediaSoundGenerator *this,FSoundGeneratorParams *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *_Src;
  FEnvelopeFollowerInitParams local_38;
  
  ISoundGenerator::ISoundGenerator((ISoundGenerator *)this);
  this->_padding_ = (longlong)&___7FMediaSoundGenerator__6B_;
  (this->Params).SampleRate = param_1->SampleRate;
  (this->Params).NumChannels = param_1->NumChannels;
  (this->Params).SampleQueue.Object = (param_1->SampleQueue).Object;
  pTVar4 = (param_1->SampleQueue).SharedReferenceCount.ReferenceController;
  (this->Params).SampleQueue.SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &(this->Params).FrequenciesToAnalyze;
  (this->Params).PreviousSampleQueueFlushCount = param_1->PreviousSampleQueueFlushCount;
  (this->Params).bSpectralAnalysisEnabled = param_1->bSpectralAnalysisEnabled;
  (this->Params).bEnvelopeFollowingEnabled = param_1->bEnvelopeFollowingEnabled;
  (this->Params).EnvelopeFollowerAttackTime = param_1->EnvelopeFollowerAttackTime;
  (this->Params).EnvelopeFollowerReleaseTime = param_1->EnvelopeFollowerReleaseTime;
  (this->Params).SpectrumAnalyzerSettings = param_1->SpectrumAnalyzerSettings;
  piVar2 = &(this->Params).FrequenciesToAnalyze.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->FrequenciesToAnalyze).ArrayNum;
  _Src = (param_1->FrequenciesToAnalyze).AllocatorInstance.Data;
  (this->Params).FrequenciesToAnalyze.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  (this->Params).CachedRate = param_1->CachedRate;
  (this->Params).CachedTime.Ticks = (param_1->CachedTime).Ticks;
  (this->Params).LastPlaySampleTime.Ticks = (param_1->LastPlaySampleTime).Ticks;
  FMediaAudioResampler::FMediaAudioResampler(&this->Resampler);
  (this->AudioScratchBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioScratchBuffer).ArrayNum = 0;
  (this->AudioScratchBuffer).ArrayMax = 0;
  Audio::FAsyncSpectrumAnalyzer::FAsyncSpectrumAnalyzer(&this->SpectrumAnalyzer);
  Audio::FEnvelopeFollower::FEnvelopeFollower(&this->EnvelopeFollower);
  this->CachedRate = (TAtomic<float>)0x0;
  this->CachedTime = (TAtomic<FTimespan>)0x0;
  this->LastPlaySampleTime = (TAtomic<FTimespan>)0x0;
  this->CurrentEnvelopeValue = 0.0;
  this->bEnvelopeFollowerSettingsChanged = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AnalysisCritSect,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SampleQueueCritSect,4000);
  Audio::FAsyncSpectrumAnalyzer::Init(&this->SpectrumAnalyzer,(float)param_1->SampleRate);
  FMediaAudioResampler::Initialize(&this->Resampler,param_1->NumChannels,param_1->SampleRate);
  local_38.SampleRate = (float)param_1->SampleRate;
  local_38.AttackTimeMsec = 10.0;
  local_38.ReleaseTimeMsec = 100.0;
  local_38.Mode = Peak;
  local_38.bIsAnalog = true;
  local_38.AnalysisWindowMsec = 5.0;
  local_38.NumChannels = 1;
  Audio::FEnvelopeFollower::Init(&this->EnvelopeFollower,&local_38);
  LOCK();
  this->CachedRate = (TAtomic<float>)(this->Params).CachedRate;
  UNLOCK();
  LOCK();
  this->CachedTime = (TAtomic<FTimespan>)(this->Params).CachedTime.Ticks;
  UNLOCK();
  LOCK();
  this->LastPlaySampleTime = (TAtomic<FTimespan>)(this->Params).LastPlaySampleTime.Ticks;
  UNLOCK();
  if (5 < (byte)LogMediaAssets._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
  }
  return this;
}

// ~FMediaSoundGenerator @ 146c1e440

/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaSoundGenerator::~FMediaSoundGenerator(FMediaSoundGenerator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMediaSoundGenerator__6B_;
  if (5 < (byte)LogMediaAssets._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SampleQueueCritSect);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AnalysisCritSect);
  pFVar1 = (this->EnvelopeFollower).Smoother.PriorEnvelopeValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).MeanSquaredProcessor.ChannelValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).WorkBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FAsyncSpectrumAnalyzer::~FAsyncSpectrumAnalyzer(&this->SpectrumAnalyzer);
  pFVar1 = (this->AudioScratchBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Resampler).Input.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Params).FrequenciesToAnalyze.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Params).SampleQueue.SharedReferenceCount.ReferenceController);
  ISoundGenerator::~ISoundGenerator((ISoundGenerator *)this);
  return;
}

// GetNormalizedSpectralData @ 146c2af00

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> * __thiscall
FMediaSoundGenerator::GetNormalizedSpectralData
          (FMediaSoundGenerator *this,
          TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  float local_58;
  float fStack_54;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  lpCriticalSection = &this->AnalysisCritSect;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->Params).bSpectralAnalysisEnabled == false) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    Audio::FAsyncSpectrumAnalyzer::LockOutputBuffer(&this->SpectrumAnalyzer);
    pFVar7 = (this->Params).FrequenciesToAnalyze.AllocatorInstance.Data;
    iVar2 = (this->Params).FrequenciesToAnalyze.ArrayNum;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    pFVar1 = pFVar7 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->Params).FrequenciesToAnalyze.ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar1) break;
      local_58 = *(float *)pFVar7;
      fStack_54 = 0.0;
      fStack_54 = Audio::FAsyncSpectrumAnalyzer::GetNormalizedMagnitudeForFrequency
                            (&this->SpectrumAnalyzer,local_58,Linear);
      if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
        ;
        return pTVar6;
      }
      iVar5 = (int)local_48;
      if ((int)local_48 == local_48._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_50,(int *)((longlong)&local_48 + 4));
      }
      pFVar7 = pFVar7 + 4;
      local_48 = CONCAT44(local_48._4_4_,iVar5 + 1);
      *(ulonglong *)(local_50.Data + (longlong)iVar5 * 8) = CONCAT44(fStack_54,local_58);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
    __return_storage_ptr__->ArrayNum = (int)local_48;
    __return_storage_ptr__->ArrayMax = local_48._4_4_;
    local_48 = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    Audio::FAsyncSpectrumAnalyzer::UnlockOutputBuffer(&this->SpectrumAnalyzer);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetSpectralData @ 146c2d650

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> * __thiscall
FMediaSoundGenerator::GetSpectralData
          (FMediaSoundGenerator *this,
          TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  float local_58;
  float fStack_54;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  lpCriticalSection = &this->AnalysisCritSect;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->Params).bSpectralAnalysisEnabled == false) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    Audio::FAsyncSpectrumAnalyzer::LockOutputBuffer(&this->SpectrumAnalyzer);
    pFVar7 = (this->Params).FrequenciesToAnalyze.AllocatorInstance.Data;
    iVar2 = (this->Params).FrequenciesToAnalyze.ArrayNum;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    pFVar1 = pFVar7 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->Params).FrequenciesToAnalyze.ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar1) break;
      local_58 = *(float *)pFVar7;
      fStack_54 = 0.0;
      fStack_54 = Audio::FAsyncSpectrumAnalyzer::GetMagnitudeForFrequency
                            (&this->SpectrumAnalyzer,local_58,Linear);
      if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
        ;
        return pTVar6;
      }
      iVar5 = (int)local_48;
      if ((int)local_48 == local_48._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_50,(int *)((longlong)&local_48 + 4));
      }
      pFVar7 = pFVar7 + 4;
      local_48 = CONCAT44(local_48._4_4_,iVar5 + 1);
      *(ulonglong *)(local_50.Data + (longlong)iVar5 * 8) = CONCAT44(fStack_54,local_58);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
    __return_storage_ptr__->ArrayNum = (int)local_48;
    __return_storage_ptr__->ArrayMax = local_48._4_4_;
    local_48 = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    Audio::FAsyncSpectrumAnalyzer::UnlockOutputBuffer(&this->SpectrumAnalyzer);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// OnEndGenerate @ 146c2fae0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaSoundGenerator::OnEndGenerate(FMediaSoundGenerator *this)

{
  TSharedPtr<FMediaAudioSampleQueue,1> *pTVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
  }
  pTVar1 = &(this->Params).SampleQueue;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FMediaAudioSampleQueue,1> *)&local_18) {
    pTVar1->Object = (FMediaAudioSampleQueue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Params).SampleQueue.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// OnGenerateAudio @ 146c2fb50

/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FMediaSoundGenerator::OnGenerateAudio(FMediaSoundGenerator *this,float *param_1,int param_2)

{
  longlong *lpCriticalSection;
  FWindowsRecursiveMutex *pFVar1;
  int *piVar2;
  int *piVar3;
  TAtomic<float> TVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMediaAudioSampleQueue *pFVar6;
  code *pcVar7;
  uint uVar8;
  FName FVar9;
  FTimespan FVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_MediaUtils_MediaSoundComponentSampleTime> FVar18;
  FThreadSafeStaticStat<FStat_STAT_Media_SoundCompQueued> FVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar20;
  int iVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  FNameEntryId FVar27;
  longlong lVar28;
  float fVar29;
  uint local_res8 [2];
  FName local_b8;
  LARGE_INTEGER local_b0;
  FName local_a8;
  FName local_a0;
  FMediaTimeStamp local_98;
  FStatMessage local_88;
  TAtomic<FTimespan> local_78;
  int iStack_70;
  int iStack_6c;
  double local_68;
  
  if (!__CsvProfilerStat508) {
    FCsvProfilerTrace::OutputInlineStat
              ("FMediaSoundGenerator_OnGenerateAudio",_GCsvCategory_MediaStreaming.Index);
    __CsvProfilerStat508 = true;
  }
  uVar8 = _GCsvCategory_MediaStreaming.Index;
  FCsvProfiler::BeginStat
            ("FMediaSoundGenerator_OnGenerateAudio",_GCsvCategory_MediaStreaming.Index,
             "CSV_FMediaSoundGenerator_OnGenerateAudio");
  pFVar1 = &this->SampleQueueCritSect;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_146c3028a:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  pTVar5 = (this->Params).SampleQueue.SharedReferenceCount.ReferenceController;
  pFVar6 = (this->Params).SampleQueue.Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  TVar4 = this->CachedRate;
  if (pFVar6 == (FMediaAudioSampleQueue *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (**(code **)(pFVar6->_padding_ + 0x20))();
  }
  if ((((float)TVar4 == 0.0) || (pFVar6 == (FMediaAudioSampleQueue *)0x0)) ||
     (uVar14 != (this->Params).PreviousSampleQueueFlushCount)) {
    (this->Params).PreviousSampleQueueFlushCount = uVar14;
    FMediaAudioResampler::Flush(&this->Resampler);
    LOCK();
    this->LastPlaySampleTime = (TAtomic<FTimespan>)0x8000000000000000;
    UNLOCK();
    memset(param_1,0,(longlong)param_2 << 2);
  }
  else {
    (this->Params).PreviousSampleQueueFlushCount = uVar14;
    local_98.Time.Ticks = 0;
    uVar22 = param_2 / (this->Params).NumChannels;
    local_res8[0] = 0xffffffff;
    local_98.SequenceIndex = 0;
    local_98.LoopIndex = 0;
    uVar15 = FMediaAudioResampler::Generate
                       (&this->Resampler,param_1,&local_98,uVar22,(float)TVar4,
                        (FTimespan)*(long64 *)&this->CachedTime,
                        (TMediaSampleSource<IMediaAudioSample> *)&pFVar6->_padding_,local_res8);
    if (uVar15 < uVar22) {
      uVar22 = uVar15 * (this->Params).NumChannels;
      memset(param_1 + uVar22,0,(ulonglong)(param_2 - uVar22) << 2);
    }
    if (uVar15 != 0) {
      LOCK();
      this->LastPlaySampleTime = (TAtomic<FTimespan>)local_98.Time.Ticks;
      UNLOCK();
      QueryPerformanceCounter(&local_b0);
      uVar11 = local_98._8_8_;
      FVar10.Ticks = local_98.Time.Ticks;
      lpCriticalSection = &pFVar6->_padding_;
      local_78 = (TAtomic<FTimespan>)local_98.Time.Ticks;
      iStack_70 = local_98.SequenceIndex;
      iStack_6c = local_98.LoopIndex;
      local_68 = (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000;
      if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar12 = local_98._8_8_;
      if (uVar14 == *(uint *)((longlong)&pFVar6->_padding_ + 4)) {
        (pFVar6->AudioTime).TimeStamp.Time.Ticks = FVar10.Ticks;
        local_98.SequenceIndex = (int)uVar11;
        local_98.LoopIndex = SUB84(uVar11,4);
        (pFVar6->AudioTime).TimeStamp.SequenceIndex = local_98.SequenceIndex;
        (pFVar6->AudioTime).TimeStamp.LoopIndex = local_98.LoopIndex;
        (pFVar6->AudioTime).SampledAtTime = local_68;
      }
      local_98._8_8_ = uVar12;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (FThreadStats::bPrimaryEnable != false) {
        FVar18 = StatPtr_STAT_MediaUtils_MediaSoundComponentSampleTime;
        if (StatPtr_STAT_MediaUtils_MediaSoundComponentSampleTime ==
            (FThreadSafeStaticStat<FStat_STAT_MediaUtils_MediaSoundComponentSampleTime>)0x0) {
          pFVar17 = ::FName::FName(&local_a8,"STAT_MediaUtils_MediaSoundComponentSampleTime");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_MediaUtils_MediaSoundComponentSampleTime>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_MediaUtils_MediaSoundComponentSampleTime,*pFVar17,
                              L"MediaUtils MediaSoundComponent SampleTime","STATGROUP_Media",
                              "STATCAT_Advanced",L"Media",true,true,NumBits,false,false,MCR_Invalid)
          ;
        }
        local_b8 = *(FName *)FVar18;
        FThreadStats::AddMessage<double>
                  (local_b8,Set,(double)local_98.Time.Ticks * __real_3e7ad7f29abcaf48,false);
        if (FThreadStats::bPrimaryEnable != false) {
          FVar19 = StatPtr_STAT_Media_SoundCompQueued;
          if (StatPtr_STAT_Media_SoundCompQueued ==
              (FThreadSafeStaticStat<FStat_STAT_Media_SoundCompQueued>)0x0) {
            pFVar17 = ::FName::FName(&local_a0,"STAT_Media_SoundCompQueued");
            FVar19 = (FThreadSafeStaticStat<FStat_STAT_Media_SoundCompQueued>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Media_SoundCompQueued,
                                *pFVar17,L"MediaUtils MediaSoundComponent Queued","STATGROUP_Media",
                                "STATCAT_Advanced",L"Media",true,true,ST_int64,false,false,
                                MCR_Invalid);
          }
          local_b8 = *(FName *)FVar19;
          FVar27 = local_b8.ComparisonIndex.Value;
          iVar16 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6);
          FVar9 = local_b8;
          if (((local_b8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            local_88.NameAndInfo.Number = FVar9.Number & 0xffff8fff | 0x8000;
            local_b8 = FVar9;
            local_88.StatData.Pad = (uchar  [8])(longlong)iVar16;
            local_88.NameAndInfo.Index.Value = FVar27.Value;
            FThreadStats::AddStatMessage(this_00,&local_88);
            FStatsTrace::Set(&local_b8,(longlong)iVar16);
            if (this_00->ScopeCount == 0) {
              FThreadStats::Flush(this_00,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
            }
          }
        }
      }
      if (((this->Params).bSpectralAnalysisEnabled != false) ||
         ((this->Params).bEnvelopeFollowingEnabled != false)) {
        pFVar23 = (FScriptContainerElement *)param_1;
        iVar16 = param_2;
        if ((this->Params).NumChannels == 2) {
          piVar2 = &(this->AudioScratchBuffer).ArrayMax;
          piVar3 = &(this->AudioScratchBuffer).ArrayNum;
          iVar16 = param_2 / 2;
          lVar28 = (longlong)iVar16;
          *piVar3 = 0;
          if (*piVar2 < 0) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,&(this->AudioScratchBuffer).AllocatorInstance,0,piVar2);
          }
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar16,&(this->AudioScratchBuffer).AllocatorInstance,piVar3,piVar2);
          fVar29 = __real_3f000000;
          pFVar23 = (this->AudioScratchBuffer).AllocatorInstance.Data;
          iVar21 = 0;
          lVar24 = 0;
          if (3 < lVar28) {
            pFVar26 = pFVar23 + 8;
            lVar25 = (lVar28 - 4U >> 2) + 1;
            lVar24 = lVar25 * 4;
            do {
              *(float *)(pFVar26 + -8) = (param_1[(longlong)iVar21 + 1] + param_1[iVar21]) * fVar29;
              iVar21 = iVar21 + (this->Params).NumChannels;
              *(float *)(pFVar26 + -4) = (param_1[(longlong)iVar21 + 1] + param_1[iVar21]) * fVar29;
              iVar21 = (this->Params).NumChannels + iVar21;
              *(float *)pFVar26 = (param_1[(longlong)iVar21 + 1] + param_1[iVar21]) * fVar29;
              iVar21 = (this->Params).NumChannels + iVar21;
              *(float *)(pFVar26 + 4) = (param_1[(longlong)iVar21 + 1] + param_1[iVar21]) * fVar29;
              pFVar26 = pFVar26 + 0x10;
              iVar21 = iVar21 + (this->Params).NumChannels;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
          }
          for (; lVar24 < lVar28; lVar24 = lVar24 + 1) {
            *(float *)(pFVar23 + lVar24 * 4) =
                 (param_1[(longlong)iVar21 + 1] + param_1[iVar21]) * fVar29;
            iVar21 = iVar21 + (this->Params).NumChannels;
          }
        }
        if ((this->Params).bSpectralAnalysisEnabled != false) {
          Audio::FAsyncSpectrumAnalyzer::PushAudio(&this->SpectrumAnalyzer,(float *)pFVar23,iVar16);
          Audio::FAsyncSpectrumAnalyzer::PerformAsyncAnalysisIfPossible
                    (&this->SpectrumAnalyzer,true);
        }
        pFVar1 = &this->AnalysisCritSect;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_146c3028a;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        if ((this->Params).bEnvelopeFollowingEnabled != false) {
          if (this->bEnvelopeFollowerSettingsChanged != false) {
            Audio::FEnvelopeFollower::SetAttackTime
                      (&this->EnvelopeFollower,(float)(this->Params).EnvelopeFollowerAttackTime);
            Audio::FEnvelopeFollower::SetReleaseTime
                      (&this->EnvelopeFollower,(float)(this->Params).EnvelopeFollowerReleaseTime);
            this->bEnvelopeFollowerSettingsChanged = false;
          }
          Audio::FEnvelopeFollower::ProcessAudio(&this->EnvelopeFollower,(float *)pFVar23,iVar16);
          pTVar20 = Audio::FEnvelopeFollower::GetEnvelopeValues(&this->EnvelopeFollower);
          if (pTVar20->ArrayNum < 1) {
            bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_1805077022527978919>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Assets\\MediaSoundComponent.cpp"
                                ,0x259,"EnvelopeValues.Num() > 0");
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              iVar16 = (*pcVar7)();
              return iVar16;
            }
            this->CurrentEnvelopeValue = 0.0;
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
            goto LAB_146c30229;
          }
          fVar29 = *(float *)(pTVar20->AllocatorInstance).Data;
          if (__real_3f800000 <= fVar29) {
            fVar29 = __real_3f800000;
          }
          if (fVar29 <= 0.0) {
            fVar29 = 0.0;
          }
          this->CurrentEnvelopeValue = fVar29;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      }
    }
  }
LAB_146c30229:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FCsvProfiler::EndStat("FMediaSoundGenerator_OnGenerateAudio",uVar8);
  return param_2;
}

// SetCachedData @ 146c35ac0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMediaSoundGenerator::SetCachedData(FMediaSoundGenerator *this,float param_1,FTimespan *param_2)

{
  LOCK();
  this->CachedRate = (TAtomic<float>)param_1;
  UNLOCK();
  LOCK();
  this->CachedTime = (TAtomic<FTimespan>)param_2->Ticks;
  UNLOCK();
  return;
}

// SetEnableEnvelopeFollowing @ 146c35bd0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMediaSoundGenerator::SetEnableEnvelopeFollowing(FMediaSoundGenerator *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->AnalysisCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->Params).bEnvelopeFollowingEnabled = param_1;
    this->CurrentEnvelopeValue = 0.0;
                    /* WARNING: Could not recover jumptable at 0x000146c35c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetEnableSpectralAnalysis @ 146c35ca0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMediaSoundGenerator::SetEnableSpectralAnalysis(FMediaSoundGenerator *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->AnalysisCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->Params).bSpectralAnalysisEnabled = param_1;
                    /* WARNING: Could not recover jumptable at 0x000146c35ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetEnvelopeFollowingSettings @ 146c35d70

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMediaSoundGenerator::SetEnvelopeFollowingSettings
          (FMediaSoundGenerator *this,int param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->AnalysisCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->Params).EnvelopeFollowerAttackTime = param_1;
    (this->Params).EnvelopeFollowerReleaseTime = param_2;
    this->bEnvelopeFollowerSettingsChanged = true;
                    /* WARNING: Could not recover jumptable at 0x000146c35dc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetLastPlaySampleTime @ 146c36200

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMediaSoundGenerator::SetLastPlaySampleTime(FMediaSoundGenerator *this,FTimespan *param_1)

{
  LOCK();
  this->LastPlaySampleTime = (TAtomic<FTimespan>)param_1->Ticks;
  UNLOCK();
  return;
}

// SetSampleQueue @ 146c371e0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaSoundGenerator::SetSampleQueue
          (FMediaSoundGenerator *this,TSharedPtr<FMediaAudioSampleQueue,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FMediaAudioSampleQueue *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  
  lpCriticalSection = &this->SampleQueueCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->Params).SampleQueue.SharedReferenceCount.ReferenceController;
    (this->Params).SampleQueue.Object = pFVar2;
    (this->Params).SampleQueue.SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar2 = (this->Params).SampleQueue.Object;
    if (pFVar2 == (FMediaAudioSampleQueue *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(pFVar2->_padding_ + 0x20))();
    }
    (this->Params).PreviousSampleQueueFlushCount = uVar4;
    if (5 < (byte)LogMediaAssets._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    }
                    /* WARNING: Could not recover jumptable at 0x000146c37279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSpectrumAnalyzerSettings @ 146c37370

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMediaSoundGenerator::SetSpectrumAnalyzerSettings
          (FMediaSoundGenerator *this,EFFTSize param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->AnalysisCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->Params).SpectrumAnalyzerSettings.FFTSize = param_1;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&(this->Params).FrequenciesToAnalyze,param_2);
    Audio::FAsyncSpectrumAnalyzer::SetSettings
              (&this->SpectrumAnalyzer,&(this->Params).SpectrumAnalyzerSettings);
                    /* WARNING: Could not recover jumptable at 0x000146c373d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

