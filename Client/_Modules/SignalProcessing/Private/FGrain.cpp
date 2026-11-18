// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 15

// FGrain @ 1444ee6b0

FGrain * __thiscall Audio::FGrain::FGrain(FGrain *this,FGrain *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  bool bVar11;
  undefined3 uVar12;
  undefined4 uVar13;
  Type TVar14;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  
  this->GrainId = param_1->GrainId;
  this->Parent = param_1->Parent;
  fVar7 = (param_1->GrainData).BufferSeekTime;
  fVar8 = (param_1->GrainData).DurationSeconds;
  fVar9 = (param_1->GrainData).PitchScale;
  (this->GrainData).OscType = (param_1->GrainData).OscType;
  (this->GrainData).BufferSeekTime = fVar7;
  (this->GrainData).DurationSeconds = fVar8;
  (this->GrainData).PitchScale = fVar9;
  fVar7 = (param_1->GrainData).Volume;
  (this->GrainData).Frequency = (param_1->GrainData).Frequency;
  (this->GrainData).Volume = fVar7;
  (this->GrainData).Pan = (param_1->GrainData).Pan;
  iVar3 = (param_1->SampleBufferReader).BufferNumSamples;
  iVar10 = (param_1->SampleBufferReader).BufferNumFrames;
  (this->SampleBufferReader).BufferPtr = (param_1->SampleBufferReader).BufferPtr;
  (this->SampleBufferReader).BufferNumSamples = iVar3;
  (this->SampleBufferReader).BufferNumFrames = iVar10;
  iVar3 = (param_1->SampleBufferReader).BufferNumChannels;
  iVar10 = (param_1->SampleBufferReader).FadeFrames;
  fVar7 = (param_1->SampleBufferReader).FadeValue;
  (this->SampleBufferReader).BufferSampleRate = (param_1->SampleBufferReader).BufferSampleRate;
  (this->SampleBufferReader).BufferNumChannels = iVar3;
  (this->SampleBufferReader).FadeFrames = iVar10;
  (this->SampleBufferReader).FadeValue = fVar7;
  fVar7 = (param_1->SampleBufferReader).DeviceSampleRate;
  fVar8 = (param_1->SampleBufferReader).BasePitch;
  fVar9 = (param_1->SampleBufferReader).PitchScale;
  (this->SampleBufferReader).FadeIncrement = (param_1->SampleBufferReader).FadeIncrement;
  (this->SampleBufferReader).DeviceSampleRate = fVar7;
  (this->SampleBufferReader).BasePitch = fVar8;
  (this->SampleBufferReader).PitchScale = fVar9;
  fVar7 = (param_1->SampleBufferReader).Pitch.CurrentValue;
  fVar8 = (param_1->SampleBufferReader).Pitch.DeltaValue;
  fVar9 = (param_1->SampleBufferReader).Pitch.SampleRate;
  (this->SampleBufferReader).Pitch.StartValue = (param_1->SampleBufferReader).Pitch.StartValue;
  (this->SampleBufferReader).Pitch.CurrentValue = fVar7;
  (this->SampleBufferReader).Pitch.DeltaValue = fVar8;
  (this->SampleBufferReader).Pitch.SampleRate = fVar9;
  iVar3 = (param_1->SampleBufferReader).Pitch.DefaultDurationTicks;
  iVar10 = (param_1->SampleBufferReader).Pitch.CurrentTick;
  bVar11 = (param_1->SampleBufferReader).Pitch.bIsInit;
  uVar12 = *(undefined3 *)&(param_1->SampleBufferReader).Pitch.field_0x1d;
  (this->SampleBufferReader).Pitch.DurationTicks = (param_1->SampleBufferReader).Pitch.DurationTicks
  ;
  (this->SampleBufferReader).Pitch.DefaultDurationTicks = iVar3;
  (this->SampleBufferReader).Pitch.CurrentTick = iVar10;
  (this->SampleBufferReader).Pitch.bIsInit = bVar11;
  *(undefined3 *)&(this->SampleBufferReader).Pitch.field_0x1d = uVar12;
  iVar3 = (param_1->SampleBufferReader).NextFrameIndex;
  dVar5 = (param_1->SampleBufferReader).AlphaLerp;
  (this->SampleBufferReader).CurrentFrameIndex = (param_1->SampleBufferReader).CurrentFrameIndex;
  (this->SampleBufferReader).NextFrameIndex = iVar3;
  (this->SampleBufferReader).AlphaLerp = dVar5;
  fVar7 = (param_1->SampleBufferReader).PlaybackProgress;
  uVar13 = *(undefined4 *)&(param_1->SampleBufferReader).field_0x6c;
  (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated =
       (param_1->SampleBufferReader).CurrentBufferFrameIndexInterpolated;
  (this->SampleBufferReader).PlaybackProgress = fVar7;
  *(undefined4 *)&(this->SampleBufferReader).field_0x6c = uVar13;
  dVar5 = (param_1->SampleBufferReader).ScrubMinFrame;
  (this->SampleBufferReader).ScrubAnchorFrame = (param_1->SampleBufferReader).ScrubAnchorFrame;
  (this->SampleBufferReader).ScrubMinFrame = dVar5;
  dVar5 = (param_1->SampleBufferReader).ScrubWidthFrames;
  (this->SampleBufferReader).ScrubMaxFrame = (param_1->SampleBufferReader).ScrubMaxFrame;
  (this->SampleBufferReader).ScrubWidthFrames = dVar5;
  fVar7 = (param_1->SampleBufferReader).CurrentScrubWidthSec;
  TVar14 = (param_1->SampleBufferReader).CurrentSeekType;
  bVar11 = (param_1->SampleBufferReader).bWrap;
  bVar15 = (param_1->SampleBufferReader).bIsScrubMode;
  bVar16 = (param_1->SampleBufferReader).bIsFinished;
  uVar17 = (param_1->SampleBufferReader).field_0x9f;
  (this->SampleBufferReader).CurrentSeekTime = (param_1->SampleBufferReader).CurrentSeekTime;
  (this->SampleBufferReader).CurrentScrubWidthSec = fVar7;
  (this->SampleBufferReader).CurrentSeekType = TVar14;
  (this->SampleBufferReader).bWrap = bVar11;
  (this->SampleBufferReader).bIsScrubMode = bVar15;
  (this->SampleBufferReader).bIsFinished = bVar16;
  (this->SampleBufferReader).field_0x9f = uVar17;
  (this->Osc)._padding_ = (longlong)&___7IOscBase_Audio__6B_;
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  *(undefined4 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  *(undefined4 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  uVar6 = *(undefined8 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(undefined8 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined8 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(undefined8 *)((longlong)&(this->Osc)._padding_ + 4) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(undefined8 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined8 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(undefined8 *)((longlong)&(this->Osc)._padding_ + 4) = uVar6;
  *(undefined4 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  *(undefined4 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  *(undefined4 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  *(undefined4 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Osc)._padding_ + 4);
  (this->Osc)._padding_ = (param_1->Osc)._padding_;
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  *(undefined4 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  ::FString::FString((FString *)&(this->Osc)._padding_,(FString *)&(param_1->Osc)._padding_);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  *(undefined4 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  ::FString::FString((FString *)&(this->Osc)._padding_,(FString *)&(param_1->Osc)._padding_);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  *(undefined4 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  ::FString::FString((FString *)&(this->Osc)._padding_,(FString *)&(param_1->Osc)._padding_);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  *(undefined4 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  ::FString::FString((FString *)&(this->Osc)._padding_,(FString *)&(param_1->Osc)._padding_);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  *(undefined4 *)((longlong)&(this->Osc)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Osc)._padding_ + 4);
  *(int *)&(this->Osc)._padding_ = (int)(param_1->Osc)._padding_;
  ::FString::FString((FString *)&(this->Osc)._padding_,(FString *)&(param_1->Osc)._padding_);
  pTVar2 = &this->SpeakerMap;
  (this->Osc)._padding_ = (param_1->Osc)._padding_;
  *(char *)&(this->Osc)._padding_ = (char)(param_1->Osc)._padding_;
  *(undefined1 *)((longlong)&(this->Osc)._padding_ + 1) =
       *(undefined1 *)((longlong)&(param_1->Osc)._padding_ + 1);
  *(undefined1 *)((longlong)&(this->Osc)._padding_ + 2) =
       *(undefined1 *)((longlong)&(param_1->Osc)._padding_ + 2);
  (this->Osc)._padding_ = (longlong)&___7FOsc_Audio__6B_;
  (this->Osc).TriangleSign = (param_1->Osc).TriangleSign;
  (this->Osc).DPW_z1 = (param_1->Osc).DPW_z1;
  fVar7 = (param_1->Osc).PulseWidthLerped.Threshold;
  fVar8 = (param_1->Osc).PulseWidthLerped.TargetValue;
  fVar9 = (param_1->Osc).PulseWidthLerped.EaseFactor;
  (this->Osc).PulseWidthLerped.CurrentValue = (param_1->Osc).PulseWidthLerped.CurrentValue;
  (this->Osc).PulseWidthLerped.Threshold = fVar7;
  (this->Osc).PulseWidthLerped.TargetValue = fVar8;
  (this->Osc).PulseWidthLerped.EaseFactor = fVar9;
  fVar7 = (param_1->Osc).PulseWidthLerped.EaseTimesTarget;
  (this->Osc).PulseWidthLerped.OneMinusEase = (param_1->Osc).PulseWidthLerped.OneMinusEase;
  (this->Osc).PulseWidthLerped.EaseTimesTarget = fVar7;
  (this->Osc).OscType = (param_1->Osc).OscType;
  (this->Osc).Noise.RandomStream = (param_1->Osc).Noise.RandomStream;
  this->CurrentPitch = param_1->CurrentPitch;
  this->CurrentFrequency = param_1->CurrentFrequency;
  this->CurrentVolumeScale = param_1->CurrentVolumeScale;
  this->CurrentPan = param_1->CurrentPan;
  this->DurationScale = param_1->DurationScale;
  this->CurrentFrameCount = param_1->CurrentFrameCount;
  this->EndFrameCount = param_1->EndFrameCount;
  piVar1 = &(this->SpeakerMap).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->SpeakerMap).ArrayNum;
  pFVar4 = (param_1->SpeakerMap).AllocatorInstance.Data;
  (this->SpeakerMap).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar2 = &this->FrameScratch;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FrameScratch).ArrayMax;
  iVar3 = (param_1->FrameScratch).ArrayNum;
  pFVar4 = (param_1->FrameScratch).AllocatorInstance.Data;
  (this->FrameScratch).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  return this;
}

// FGrain @ 1444eeb20

FGrain * __thiscall Audio::FGrain::FGrain(FGrain *this,int param_1,FGranularSynth *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  Type TVar2;
  FGranularSynth *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FGrain *pFVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined4 local_48 [12];
  
  this->Parent = param_2;
  (this->SampleBufferReader).BufferPtr = (short *)0x0;
  (this->SampleBufferReader).BufferNumSamples = 0;
  (this->SampleBufferReader).BufferNumFrames = 0;
  (this->SampleBufferReader).BufferSampleRate = 0;
  (this->SampleBufferReader).BufferNumChannels = 0;
  (this->SampleBufferReader).Pitch.CurrentValue = 0.0;
  (this->SampleBufferReader).Pitch.DeltaValue = 0.0;
  (this->SampleBufferReader).Pitch.DefaultDurationTicks = 0;
  (this->SampleBufferReader).Pitch.CurrentTick = 0;
  (this->SampleBufferReader).CurrentFrameIndex = 0;
  (this->SampleBufferReader).NextFrameIndex = 0;
  (this->SampleBufferReader).AlphaLerp = 0.0;
  (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = 0.0;
  (this->SampleBufferReader).PlaybackProgress = 0.0;
  (this->SampleBufferReader).ScrubAnchorFrame = 0.0;
  (this->SampleBufferReader).ScrubMinFrame = 0.0;
  (this->SampleBufferReader).ScrubMaxFrame = 0.0;
  (this->SampleBufferReader).ScrubWidthFrames = 0.0;
  (this->SampleBufferReader).CurrentSeekTime = 0.0;
  (this->SampleBufferReader).CurrentScrubWidthSec = 0.0;
  (this->SampleBufferReader).CurrentSeekType = FromBeginning;
  (this->SampleBufferReader).bWrap = false;
  (this->SampleBufferReader).bIsScrubMode = false;
  (this->SampleBufferReader).bIsFinished = false;
  this->GrainId = param_1;
  (this->SampleBufferReader).FadeFrames = 0x200;
  (this->SampleBufferReader).FadeValue = 0.0;
  (this->SampleBufferReader).FadeIncrement = 0.001953125;
  (this->SampleBufferReader).DeviceSampleRate = 0.0;
  (this->SampleBufferReader).BasePitch = 1.0;
  (this->SampleBufferReader).PitchScale = 1.0;
  (this->SampleBufferReader).Pitch.StartValue = 0.0;
  (this->SampleBufferReader).Pitch.SampleRate = 44100.0;
  (this->SampleBufferReader).Pitch.DurationTicks = 0;
  (this->SampleBufferReader).Pitch.bIsInit = true;
  FOsc::FOsc(&this->Osc);
  uVar6 = __real_3f000000;
  pFVar3 = this->Parent;
  pTVar1 = &this->SpeakerMap;
  this->CurrentPitch = 0.0;
  this->CurrentFrequency = 0.0;
  this->CurrentVolumeScale = 0.0;
  this->CurrentPan = 0.0;
  this->DurationScale = 1.0;
  this->CurrentFrameCount = 0.0;
  this->EndFrameCount = 0.0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SpeakerMap).ArrayNum = 0;
  (this->SpeakerMap).ArrayMax = 0;
  (this->FrameScratch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameScratch).ArrayNum = 0;
  (this->FrameScratch).ArrayMax = 0;
  iVar9 = pFVar3->SampleRate;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&pTVar1->AllocatorInstance,&(this->SpeakerMap).ArrayMax);
  local_48[0] = 0x3f000000;
  (this->SpeakerMap).ArrayNum = iVar8 + 1;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4) = uVar6;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar4 + (longlong)(this->SpeakerMap).ArrayMax * 4)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FGrain *)(*pcVar5)();
    return pFVar10;
  }
  iVar8 = (this->SpeakerMap).ArrayNum;
  if (iVar8 == (this->SpeakerMap).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->SpeakerMap).ArrayMax);
  }
  (this->SpeakerMap).ArrayNum = iVar8 + 1;
  fVar16 = (float)iVar9;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_48[0];
  (**(code **)((this->Osc)._padding_ + 8))(&this->Osc,(longlong)iVar8,0,0,1);
  (this->SampleBufferReader).DeviceSampleRate = fVar16;
  (this->SampleBufferReader).Pitch.SampleRate = fVar16;
  (this->SampleBufferReader).BufferPtr = (short *)0x0;
  (this->SampleBufferReader).BufferNumSamples = 0;
  (this->SampleBufferReader).BufferNumFrames = 0;
  (this->SampleBufferReader).BufferSampleRate = 0;
  (this->SampleBufferReader).BufferNumChannels = 0;
  (this->SampleBufferReader).CurrentFrameIndex = 0;
  (this->SampleBufferReader).NextFrameIndex = 0;
  (this->SampleBufferReader).AlphaLerp = 0.0;
  (this->SampleBufferReader).Pitch.bIsInit = false;
  (this->SampleBufferReader).Pitch.DurationTicks = 0;
  fVar16 = __real_3f800000;
  (this->SampleBufferReader).Pitch.CurrentTick = 0;
  (this->SampleBufferReader).Pitch.CurrentValue = 1.0;
  (this->SampleBufferReader).BasePitch = 1.0;
  (this->SampleBufferReader).bIsScrubMode = false;
  (this->SampleBufferReader).bIsFinished = false;
  (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = 0.0;
  (this->SampleBufferReader).ScrubMinFrame = 0.0;
  (this->SampleBufferReader).ScrubMaxFrame = 0.0;
  (this->SampleBufferReader).PlaybackProgress = 0.0;
  (this->SampleBufferReader).ScrubWidthFrames =
       (double)(this->SampleBufferReader).DeviceSampleRate * __real_3fb999999999999a;
  (this->SampleBufferReader).ScrubAnchorFrame = 0.0;
  if ((this->SampleBufferReader).BufferPtr != (short *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferNumChannels > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                       ,0x6c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FGrain *)(*pcVar5)();
      return pFVar10;
    }
    TVar2 = (this->SampleBufferReader).CurrentSeekType;
    fVar13 = (float)(this->SampleBufferReader).BufferSampleRate *
             (this->SampleBufferReader).CurrentSeekTime;
    if (TVar2 == FromBeginning) {
      dVar14 = (double)fVar13;
    }
    else if (TVar2 == FromEnd) {
      dVar14 = (double)(((float)(this->SampleBufferReader).BufferNumFrames - fVar13) - fVar16);
    }
    else {
      dVar14 = (double)fVar13 + (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated;
    }
    iVar9 = (this->SampleBufferReader).BufferNumFrames;
    (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar14;
    dVar11 = (double)iVar9;
    if ((this->SampleBufferReader).bWrap == false) {
      if (dVar14 <= dVar11) {
        dVar11 = dVar14;
      }
      if (dVar11 <= 0.0) {
        dVar11 = 0.0;
      }
      (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar11;
    }
    else {
      while (dVar11 <= dVar14) {
        dVar14 = dVar14 - dVar11;
        (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar14;
      }
      if (dVar14 < 0.0) {
        do {
          dVar14 = (double)iVar9 + dVar14;
        } while (dVar14 < 0.0);
        iVar9 = (this->SampleBufferReader).BufferNumFrames;
        (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar14;
      }
      if (((double)iVar9 <= dVar14) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentBufferFrameIndexInterpolated >= 0.0 && CurrentBufferFrameIndexInterpolated < (double)BufferNumFrames"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                             ,0x88,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FGrain *)(*pcVar5)();
        return pFVar10;
      }
    }
  }
  (this->SampleBufferReader).ScrubAnchorFrame =
       (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated;
  if ((this->SampleBufferReader).BufferPtr != (short *)0x0) {
    if (((this->SampleBufferReader).BufferNumChannels < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferNumChannels > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                           ,0x6c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FGrain *)(*pcVar5)();
      return pFVar10;
    }
    TVar2 = (this->SampleBufferReader).CurrentSeekType;
    fVar13 = (float)(this->SampleBufferReader).BufferSampleRate *
             (this->SampleBufferReader).CurrentSeekTime;
    if (TVar2 == FromBeginning) {
      dVar14 = (double)fVar13;
    }
    else if (TVar2 == FromEnd) {
      dVar14 = (double)(((float)(this->SampleBufferReader).BufferNumFrames - fVar13) - fVar16);
    }
    else {
      dVar14 = (double)fVar13 + (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated;
    }
    iVar9 = (this->SampleBufferReader).BufferNumFrames;
    (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar14;
    dVar11 = (double)iVar9;
    if ((this->SampleBufferReader).bWrap == false) {
      if (dVar11 <= dVar14) {
        dVar14 = dVar11;
      }
      if (dVar14 <= 0.0) {
        dVar14 = 0.0;
      }
      (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar14;
    }
    else {
      while (dVar11 <= dVar14) {
        dVar14 = dVar14 - dVar11;
        (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar14;
      }
      if (dVar14 < 0.0) {
        do {
          dVar14 = (double)iVar9 + dVar14;
        } while (dVar14 < 0.0);
        iVar9 = (this->SampleBufferReader).BufferNumFrames;
        (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar14;
      }
      if (((double)iVar9 <= dVar14) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentBufferFrameIndexInterpolated >= 0.0 && CurrentBufferFrameIndexInterpolated < (double)BufferNumFrames"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                             ,0x88,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FGrain *)(*pcVar5)();
        return pFVar10;
      }
    }
  }
  dVar14 = (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated;
  iVar9 = (this->SampleBufferReader).BufferNumFrames;
  (this->SampleBufferReader).ScrubAnchorFrame = dVar14;
  if (0 < iVar9) {
    fVar16 = (this->SampleBufferReader).CurrentScrubWidthSec;
    if (fVar16 <= __real_3a83126f) {
      fVar16 = __real_3a83126f;
    }
    dVar15 = (double)(this->SampleBufferReader).FadeFrames;
    dVar15 = dVar15 + dVar15;
    dVar11 = (double)(fVar16 * (this->SampleBufferReader).DeviceSampleRate);
    dVar12 = (double)(iVar9 + -1);
    if (dVar12 <= dVar11) {
      dVar11 = dVar12;
    }
    if (dVar11 <= dVar15) {
      dVar11 = dVar15;
    }
    (this->SampleBufferReader).ScrubWidthFrames = dVar11;
    dVar11 = dVar11 * __real_3fe0000000000000;
    (this->SampleBufferReader).ScrubMinFrame = dVar14 - dVar11;
    (this->SampleBufferReader).ScrubMaxFrame = dVar11 + dVar14;
  }
  return this;
}

// ~FGrain @ 1444f37e0

void __thiscall Audio::FGrain::~FGrain(FGrain *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FrameScratch).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpeakerMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Osc)._padding_ = (longlong)&___7FOsc_Audio__6B_;
  IOscBase::~IOscBase((IOscBase *)&this->Osc);
  return;
}

// GenerateFrame @ 144501610

bool __thiscall Audio::FGrain::GenerateFrame(FGrain *this,float *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  
  if (this->Parent->Mode == Granulation) {
    FSampleBufferReader::Generate
              (&this->SampleBufferReader,(float *)(this->FrameScratch).AllocatorInstance.Data,1,2,
               true);
    fVar5 = GetEnvelopeValue(this);
    if ((this->FrameScratch).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->FrameScratch).AllocatorInstance.Data;
    if ((this->SpeakerMap).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    *param_1 = fVar5 * *(float *)pFVar1 * *(float *)(this->SpeakerMap).AllocatorInstance.Data +
               *param_1;
    if ((this->FrameScratch).ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->FrameScratch).AllocatorInstance.Data;
    if ((this->SpeakerMap).ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    param_1[1] = fVar5 * *(float *)(pFVar1 + 4) *
                 *(float *)((this->SpeakerMap).AllocatorInstance.Data + 4) + param_1[1];
  }
  else {
    fVar5 = (float)(**(code **)((this->Osc)._padding_ + 0x20))(&this->Osc,0);
    fVar6 = GetEnvelopeValue(this);
    if ((this->SpeakerMap).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    *param_1 = fVar6 * fVar5 * *(float *)(this->SpeakerMap).AllocatorInstance.Data + *param_1;
    if ((this->SpeakerMap).ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    param_1[1] = fVar6 * fVar5 * *(float *)((this->SpeakerMap).AllocatorInstance.Data + 4) +
                 param_1[1];
  }
  return this->EndFrameCount < this->CurrentFrameCount;
}

// GetEnvelopeValue @ 144503990

float __thiscall Audio::FGrain::GetEnvelopeValue(FGrain *this)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  if (this->EndFrameCount < this->CurrentFrameCount) {
    return 0.0;
  }
  fVar8 = this->CurrentFrameCount / this->EndFrameCount;
  if (__real_3f800000 < fVar8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DurationFraction <= 1.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Granulator.cpp"
                       ,0x14e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar8 = (float)(*pcVar3)();
      return fVar8;
    }
  }
  this->CurrentFrameCount = this->DurationScale + this->CurrentFrameCount;
  pFVar2 = (this->Parent->GrainEnvelope).GrainEnvelope.AllocatorInstance.Data;
  iVar7 = (this->Parent->GrainEnvelope).GrainEnvelope.ArrayNum + -1;
  fVar8 = (float)iVar7 * fVar8;
  iVar6 = (int)fVar8;
  fVar1 = *(float *)(pFVar2 + (longlong)iVar6 * 4);
  iVar5 = iVar6 + 1;
  if (iVar7 < iVar6 + 1) {
    iVar5 = iVar7;
  }
  return ((*(float *)(pFVar2 + (longlong)iVar5 * 4) - fVar1) * (fVar8 - (float)iVar6) + fVar1) *
         this->CurrentVolumeScale;
}

// IsDone @ 1445090a0

bool __thiscall Audio::FGrain::IsDone(FGrain *this)

{
  return this->EndFrameCount < this->CurrentFrameCount ||
         this->EndFrameCount == this->CurrentFrameCount;
}

// Play @ 14450bec0

void __thiscall Audio::FGrain::Play(FGrain *this,FGrainData *param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  Type TVar6;
  FScriptContainerElement *pFVar7;
  FGranularSynth *pFVar8;
  short *psVar9;
  code *pcVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  
  if ((this->Parent == (FGranularSynth *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Granulator.cpp"
                          ,0xe6,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar17 = param_1->BufferSeekTime;
  fVar11 = param_1->DurationSeconds;
  fVar3 = param_1->PitchScale;
  (this->GrainData).OscType = param_1->OscType;
  (this->GrainData).BufferSeekTime = fVar17;
  (this->GrainData).DurationSeconds = fVar11;
  (this->GrainData).PitchScale = fVar3;
  fVar17 = param_1->Volume;
  (this->GrainData).Frequency = param_1->Frequency;
  (this->GrainData).Volume = fVar17;
  (this->GrainData).Pan = param_1->Pan;
  if (this->Parent->Mode == Synthesis) {
    (**(code **)((this->Osc)._padding_ + 0x30))(&this->Osc);
    (this->Osc).OscType = (this->GrainData).OscType;
    fVar17 = (this->GrainData).Frequency;
    if (fVar17 != *(float *)&(this->Osc)._padding_) {
      *(float *)&(this->Osc)._padding_ = fVar17;
      *(undefined1 *)((longlong)&(this->Osc)._padding_ + 1) = 1;
    }
    (**(code **)((this->Osc)._padding_ + 0x10))(&this->Osc);
  }
  fVar17 = (this->GrainData).PitchScale;
  fVar11 = (this->GrainData).Frequency;
  fVar3 = (this->GrainData).Volume;
  fVar19 = (this->GrainData).Pan;
  this->CurrentFrameCount = 0.0;
  this->CurrentPitch = fVar17;
  this->CurrentFrequency = fVar11;
  this->CurrentVolumeScale = fVar3;
  this->CurrentPan = fVar19;
  this->EndFrameCount = (float)this->Parent->SampleRate * (this->GrainData).DurationSeconds;
  if (((this->SpeakerMap).ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar7 = (this->SpeakerMap).AllocatorInstance.Data;
  if (((this->SpeakerMap).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar3 = __real_3fa2f983;
  fVar11 = __real_3f800000;
  fVar19 = this->CurrentPan * __real_3f490fdb;
  fVar17 = fVar19 + __real_4016cbe4;
  fVar19 = fVar19 + __real_3f490fdb;
  fVar17 = (__real_3fa2f983 -
           (float)((uint)fVar17 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ecf817a) *
           fVar17;
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  *(float *)(this->SpeakerMap).AllocatorInstance.Data = fVar17;
  fVar19 = (fVar3 - (float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ecf817a
           ) * fVar19;
  if (fVar11 <= fVar19) {
    fVar19 = fVar11;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  *(float *)(pFVar7 + 4) = fVar19;
  pFVar8 = this->Parent;
  pFVar7 = (pFVar8->SampleBuffer).RawPCMData.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    iVar13 = (pFVar8->SampleBuffer).NumSamples;
    iVar4 = (pFVar8->SampleBuffer).NumChannels;
    iVar5 = (pFVar8->SampleBuffer).SampleRate;
    (this->SampleBufferReader).BufferPtr = (short *)0x0;
    (this->SampleBufferReader).BufferNumSamples = 0;
    (this->SampleBufferReader).BufferNumFrames = 0;
    (this->SampleBufferReader).BufferSampleRate = 0;
    (this->SampleBufferReader).BufferNumChannels = 0;
    FSampleBufferReader::SetBuffer(&this->SampleBufferReader,(short *)pFVar7,iVar13,iVar4,iVar5);
    fVar17 = this->CurrentPitch;
    (this->SampleBufferReader).PitchScale = fVar17;
    fVar3 = (this->SampleBufferReader).BasePitch;
    if ((this->SampleBufferReader).Pitch.bIsInit != false) {
      (this->SampleBufferReader).Pitch.bIsInit = false;
    }
    (this->SampleBufferReader).Pitch.DurationTicks = 0;
    (this->SampleBufferReader).Pitch.CurrentValue = fVar17 * fVar3;
    (this->SampleBufferReader).Pitch.CurrentTick = 0;
    (this->SampleBufferReader).CurrentSeekTime = (this->GrainData).BufferSeekTime;
    psVar9 = (this->SampleBufferReader).BufferPtr;
    (this->SampleBufferReader).CurrentSeekType = FromBeginning;
    (this->SampleBufferReader).bWrap = true;
    if ((this->SampleBufferReader).bIsScrubMode == false) {
      if (psVar9 != (short *)0x0) {
        if (((this->SampleBufferReader).BufferNumChannels < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferNumChannels > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                                ,0x6c,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        TVar6 = (this->SampleBufferReader).CurrentSeekType;
        fVar17 = (float)(this->SampleBufferReader).BufferSampleRate *
                 (this->SampleBufferReader).CurrentSeekTime;
        if (TVar6 == FromBeginning) {
          dVar15 = (double)fVar17;
        }
        else if (TVar6 == FromEnd) {
          dVar15 = (double)(((float)(this->SampleBufferReader).BufferNumFrames - fVar17) - fVar11);
        }
        else {
          dVar15 = (double)fVar17 + (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated;
        }
        dVar18 = (double)(this->SampleBufferReader).BufferNumFrames;
        (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar15;
        if ((this->SampleBufferReader).bWrap == false) {
          if (dVar18 <= dVar15) {
            dVar15 = dVar18;
          }
          if (dVar15 <= 0.0) {
            dVar15 = 0.0;
          }
          (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar15;
        }
        else {
          while (dVar18 <= dVar15) {
            dVar15 = dVar15 - dVar18;
            (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar15;
          }
          if (dVar15 < 0.0) {
            do {
              dVar15 = dVar15 + dVar18;
            } while (dVar15 < 0.0);
            (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar15;
          }
          if ((dVar18 <= dVar15) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentBufferFrameIndexInterpolated >= 0.0 && CurrentBufferFrameIndexInterpolated < (double)BufferNumFrames"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                                  ,0x88,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
      }
      (this->SampleBufferReader).ScrubAnchorFrame =
           (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated;
    }
    else {
      if (psVar9 != (short *)0x0) {
        if (((this->SampleBufferReader).BufferNumChannels < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferNumChannels > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                                ,0x6c,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        TVar6 = (this->SampleBufferReader).CurrentSeekType;
        fVar17 = (float)(this->SampleBufferReader).BufferSampleRate *
                 (this->SampleBufferReader).CurrentSeekTime;
        if (TVar6 == FromBeginning) {
          dVar15 = (double)fVar17;
        }
        else if (TVar6 == FromEnd) {
          dVar15 = (double)(((float)(this->SampleBufferReader).BufferNumFrames - fVar17) - fVar11);
        }
        else {
          dVar15 = (double)fVar17 + (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated;
        }
        iVar13 = (this->SampleBufferReader).BufferNumFrames;
        (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar15;
        dVar18 = (double)iVar13;
        if ((this->SampleBufferReader).bWrap == false) {
          if (dVar15 <= dVar18) {
            dVar18 = dVar15;
          }
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
          (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar18;
        }
        else {
          while (dVar18 <= dVar15) {
            dVar15 = dVar15 - dVar18;
            (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar15;
          }
          if (dVar15 < 0.0) {
            do {
              dVar15 = dVar18 + dVar15;
            } while (dVar15 < 0.0);
            iVar13 = (this->SampleBufferReader).BufferNumFrames;
            (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar15;
          }
          if (((double)iVar13 <= dVar15) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentBufferFrameIndexInterpolated >= 0.0 && CurrentBufferFrameIndexInterpolated < (double)BufferNumFrames"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                                  ,0x88,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
      }
      (this->SampleBufferReader).ScrubAnchorFrame =
           (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated;
      if ((this->SampleBufferReader).BufferPtr != (short *)0x0) {
        if (((this->SampleBufferReader).BufferNumChannels < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferNumChannels > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                                ,0x6c,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        TVar6 = (this->SampleBufferReader).CurrentSeekType;
        fVar17 = (float)(this->SampleBufferReader).BufferSampleRate *
                 (this->SampleBufferReader).CurrentSeekTime;
        if (TVar6 == FromBeginning) {
          dVar15 = (double)fVar17;
        }
        else if (TVar6 == FromEnd) {
          dVar15 = (double)(((float)(this->SampleBufferReader).BufferNumFrames - fVar17) - fVar11);
        }
        else {
          dVar15 = (double)fVar17 + (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated;
        }
        iVar13 = (this->SampleBufferReader).BufferNumFrames;
        (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar15;
        dVar18 = (double)iVar13;
        if ((this->SampleBufferReader).bWrap == false) {
          if (dVar18 <= dVar15) {
            dVar15 = dVar18;
          }
          if (dVar15 <= 0.0) {
            dVar15 = 0.0;
          }
          (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar15;
        }
        else {
          while (dVar18 <= dVar15) {
            dVar15 = dVar15 - dVar18;
            (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar15;
          }
          if (dVar15 < 0.0) {
            do {
              dVar15 = dVar18 + dVar15;
            } while (dVar15 < 0.0);
            iVar13 = (this->SampleBufferReader).BufferNumFrames;
            (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated = dVar15;
          }
          if (((double)iVar13 <= dVar15) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentBufferFrameIndexInterpolated >= 0.0 && CurrentBufferFrameIndexInterpolated < (double)BufferNumFrames"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                                  ,0x88,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
      }
      dVar15 = (this->SampleBufferReader).CurrentBufferFrameIndexInterpolated;
      iVar13 = (this->SampleBufferReader).BufferNumFrames;
      (this->SampleBufferReader).ScrubAnchorFrame = dVar15;
      if (0 < iVar13) {
        fVar17 = (this->SampleBufferReader).CurrentScrubWidthSec;
        if (fVar17 <= __real_3a83126f) {
          fVar17 = __real_3a83126f;
        }
        dVar16 = (double)(this->SampleBufferReader).FadeFrames;
        dVar16 = dVar16 + dVar16;
        dVar18 = (double)(fVar17 * (this->SampleBufferReader).DeviceSampleRate);
        dVar14 = (double)(iVar13 + -1);
        if (dVar14 <= dVar18) {
          dVar18 = dVar14;
        }
        if (dVar18 <= dVar16) {
          dVar18 = dVar16;
        }
        (this->SampleBufferReader).ScrubWidthFrames = dVar18;
        dVar18 = dVar18 * __real_3fe0000000000000;
        (this->SampleBufferReader).ScrubMinFrame = dVar15 - dVar18;
        (this->SampleBufferReader).ScrubMaxFrame = dVar18 + dVar15;
      }
    }
  }
  piVar1 = &(this->FrameScratch).ArrayMax;
  piVar2 = &(this->FrameScratch).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FrameScratch).AllocatorInstance,0,piVar1);
  }
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,2,&(this->FrameScratch).AllocatorInstance,piVar2,piVar1);
  *(undefined8 *)((this->FrameScratch).AllocatorInstance.Data + (longlong)iVar13 * 4) = 0;
  return;
}

// SetDurationScale @ 144519e70

void __thiscall Audio::FGrain::SetDurationScale(FGrain *this,float param_1)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->DurationScale = param_1;
  return;
}

// SetGrainPitchShiftRatio @ 14451ae80

void __thiscall
Audio::GrainDelay::FGrainDelay::FGrain::SetGrainPitchShiftRatio
          (FGrain *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = __real_3a83126f;
  fVar1 = __real_3f800000;
  fVar4 = (this->DurationFrames * __real_447a0000) / param_2;
  fVar3 = fVar4;
  if (__real_42c80000 <= fVar4) {
    fVar3 = __real_42c80000;
  }
  if (fVar3 <= __real_41200000) {
    fVar3 = __real_41200000;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar3 - (this->PitchShifter).CurrentTargetDelayLength) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    (this->PitchShifter).CurrentTargetDelayLength = fVar4;
    (this->PitchShifter).CurrentDelayLength.TargetValue = fVar3;
    (this->PitchShifter).CurrentDelayLength.EaseTimesTarget =
         fVar3 * (this->PitchShifter).CurrentDelayLength.EaseFactor;
    fVar3 = (this->PitchShifter).CurrentDelayLength.CurrentValue;
    if (fVar3 <= fVar1) {
      fVar3 = fVar1;
    }
    (this->PitchShifter).PhasorPhaseIncrement =
         (fVar1 - (this->PitchShifter).CurrentPitchShiftRatio) /
         (fVar3 * fVar2 * (this->PitchShifter).SampleRate);
  }
  fVar3 = param_1 * this->PitchShiftRatioOffset;
  if (__real_322bcc77 <
      (float)((uint)(fVar3 - (this->PitchShifter).CurrentPitchShiftRatio) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar4 = (this->PitchShifter).CurrentDelayLength.CurrentValue;
    if (fVar4 <= fVar1) {
      fVar4 = fVar1;
    }
    (this->PitchShifter).CurrentPitchShiftRatio = fVar3;
    (this->PitchShifter).PhasorPhaseIncrement =
         (fVar1 - fVar3) / (fVar4 * fVar2 * (this->PitchShifter).SampleRate);
  }
  return;
}

// SetOscFrequency @ 14451c110

void __thiscall Audio::FGrain::SetOscFrequency(FGrain *this,float param_1)

{
  if (param_1 != *(float *)&(this->Osc)._padding_) {
    *(float *)&(this->Osc)._padding_ = param_1;
    *(undefined1 *)((longlong)&(this->Osc)._padding_ + 1) = 1;
  }
  return;
}

// SetOscFrequencyModuation @ 14451c130

void __thiscall Audio::FGrain::SetOscFrequencyModuation(FGrain *this,float param_1)

{
  if (param_1 != *(float *)&(this->Osc)._padding_) {
    *(float *)&(this->Osc)._padding_ = param_1;
    *(undefined1 *)((longlong)&(this->Osc)._padding_ + 1) = 1;
  }
  return;
}

// SetOscType @ 14451c150

void __thiscall Audio::FGrain::SetOscType(FGrain *this,Type param_1)

{
  (this->Osc).OscType = param_1;
  return;
}

// SetPanModulation @ 14451c190

void __thiscall Audio::FGrain::SetPanModulation(FGrain *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = __real_3f800000;
  fVar5 = (param_1 + __real_3f800000) * (this->GrainData).Pan;
  bVar4 = fVar5 < __real_bf800000;
  this->CurrentPan = fVar5;
  if (bVar4) {
    fVar5 = fVar5 + fVar3;
    this->CurrentPan = fVar5;
  }
  if (fVar3 < fVar5) {
    this->CurrentPan = fVar5 - fVar3;
  }
  if ((this->SpeakerMap).ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SpeakerMap).AllocatorInstance.Data;
  if ((this->SpeakerMap).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar5 = __real_3fa2f983;
  fVar7 = this->CurrentPan * __real_3f490fdb;
  fVar6 = fVar7 + __real_4016cbe4;
  fVar7 = fVar7 + __real_3f490fdb;
  fVar6 = (__real_3fa2f983 -
          (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ecf817a) * fVar6;
  if (fVar3 <= fVar6) {
    fVar6 = fVar3;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(this->SpeakerMap).AllocatorInstance.Data = fVar6;
  fVar7 = (fVar5 - (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ecf817a)
          * fVar7;
  if (fVar3 <= fVar7) {
    fVar7 = fVar3;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(pFVar1 + 4) = fVar7;
  return;
}

// SetPitchModulation @ 14451c560

void __thiscall Audio::FGrain::SetPitchModulation(FGrain *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = __real_3f800000;
  if (param_1 != 0.0) {
    fVar2 = powf(__real_40000000,param_1 * __real_3daaaaab);
  }
  fVar2 = fVar2 * (this->GrainData).PitchScale;
  (this->SampleBufferReader).PitchScale = fVar2;
  fVar1 = (this->SampleBufferReader).BasePitch;
  if ((this->SampleBufferReader).Pitch.bIsInit != false) {
    (this->SampleBufferReader).Pitch.bIsInit = false;
  }
  (this->SampleBufferReader).Pitch.DurationTicks = 0;
  (this->SampleBufferReader).Pitch.CurrentValue = fVar2 * fVar1;
  (this->SampleBufferReader).Pitch.CurrentTick = 0;
  return;
}

// SetVolumeModulation @ 14451d030

void __thiscall Audio::FGrain::SetVolumeModulation(FGrain *this,float param_1)

{
  this->CurrentVolumeScale = (param_1 + __real_3f800000) * (this->GrainData).Volume;
  return;
}

