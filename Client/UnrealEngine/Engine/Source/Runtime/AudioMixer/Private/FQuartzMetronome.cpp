// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 19

// FQuartzMetronome @ 14653d7d0

FQuartzMetronome * __thiscall
Audio::FQuartzMetronome::FQuartzMetronome
          (FQuartzMetronome *this,FQuartzTimeSignature *param_1,FName param_2)

{
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FPendingMetronomeEvents *pFVar2;
  longlong lVar3;
  longlong lVar4;
  FQuartzClockTickRate local_38;
  
  this->LastTickCpuCycles64 = 0;
  this->ListenerFlags = 0;
  (this->CurrentTimeStamp).Bars = 0;
  (this->CurrentTimeStamp).Beat = 0;
  (this->CurrentTimeStamp).BeatFraction = 0.0;
  (this->CurrentTimeStamp).Seconds = 0.0;
  FQuartzTimeSignature::FQuartzTimeSignature(&this->CurrentTimeSignature,param_1);
  FQuartzClockTickRate::FQuartzClockTickRate(&this->CurrentTickRate);
  lVar3 = 0x12;
  pTVar1 = this->MetronomeSubscriptionMatrix;
  lVar4 = 0x12;
  do {
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
    pTVar1 = pTVar1 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  pFVar2 = &this->PendingMetronomeEvents;
  do {
    pFVar2->CurrentMetronomeEvents[0].EventFrames.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pFVar2->CurrentMetronomeEvents[0].EventFrames.ArrayNum = 0;
    pFVar2->CurrentMetronomeEvents[0].EventFrames.ArrayMax = 0;
    pFVar2 = (FPendingMetronomeEvents *)(pFVar2->CurrentMetronomeEvents + 1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[1] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[2] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[3] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[4] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[5] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[6] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[7] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[8] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[9] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[10] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0xb] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0xc] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0xd] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0xe] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0xf] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0x10] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0x11] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[1] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[2] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[3] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[4] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[5] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[6] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[7] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[8] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[9] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[10] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xb] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xc] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xd] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xe] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xf] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0x10] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0x11] = 0.0;
  (this->PulseDurations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PulseDurations).ArrayNum = 0;
  (this->PulseDurations).ArrayMax = 0;
  local_38.FramesPerTick = (this->CurrentTickRate).FramesPerTick;
  local_38.MillisecondsPerTick = (this->CurrentTickRate).MillisecondsPerTick;
  this->PulseDurationIndex = -1;
  local_38.SecondsPerTick = (this->CurrentTickRate).SecondsPerTick;
  local_38.ThirtySecondNotesPerMinute = (this->CurrentTickRate).ThirtySecondNotesPerMinute;
  this->LastFramesOfLatency = 0;
  local_38.BeatsPerMinute = (this->CurrentTickRate).BeatsPerMinute;
  local_38.SampleRate = (this->CurrentTickRate).SampleRate;
  this->TimeSinceStart = 0.0;
  this->ClockName = param_2;
  SetTickRate(this,&local_38,0);
  return this;
}

// FQuartzMetronome @ 14653d960

FQuartzMetronome * __thiscall
Audio::FQuartzMetronome::FQuartzMetronome(FQuartzMetronome *this,FName param_1)

{
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FPendingMetronomeEvents *pFVar2;
  longlong lVar3;
  longlong lVar4;
  FQuartzClockTickRate local_38;
  
  (this->CurrentTimeSignature).NumBeats = 4;
  this->LastTickCpuCycles64 = 0;
  this->ListenerFlags = 0;
  (this->CurrentTimeStamp).Bars = 0;
  (this->CurrentTimeStamp).Beat = 0;
  (this->CurrentTimeStamp).BeatFraction = 0.0;
  (this->CurrentTimeStamp).Seconds = 0.0;
  (this->CurrentTimeSignature).OptionalPulseOverride.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentTimeSignature).OptionalPulseOverride.ArrayNum = 0;
  (this->CurrentTimeSignature).OptionalPulseOverride.ArrayMax = 0;
  (this->CurrentTimeSignature).BeatType = QuarterNote;
  FQuartzClockTickRate::FQuartzClockTickRate(&this->CurrentTickRate);
  lVar3 = 0x12;
  pTVar1 = this->MetronomeSubscriptionMatrix;
  lVar4 = 0x12;
  do {
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
    pTVar1 = pTVar1 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  pFVar2 = &this->PendingMetronomeEvents;
  do {
    pFVar2->CurrentMetronomeEvents[0].EventFrames.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pFVar2->CurrentMetronomeEvents[0].EventFrames.ArrayNum = 0;
    pFVar2->CurrentMetronomeEvents[0].EventFrames.ArrayMax = 0;
    pFVar2 = (FPendingMetronomeEvents *)(pFVar2->CurrentMetronomeEvents + 1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[1] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[2] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[3] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[4] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[5] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[6] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[7] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[8] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[9] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[10] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0xb] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0xc] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0xd] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0xe] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0xf] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0x10] = 0.0;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0x11] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[1] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[2] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[3] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[4] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[5] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[6] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[7] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[8] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[9] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[10] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xb] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xc] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xd] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xe] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xf] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0x10] = 0.0;
  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0x11] = 0.0;
  (this->PulseDurations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PulseDurations).ArrayNum = 0;
  (this->PulseDurations).ArrayMax = 0;
  local_38.FramesPerTick = (this->CurrentTickRate).FramesPerTick;
  local_38.MillisecondsPerTick = (this->CurrentTickRate).MillisecondsPerTick;
  this->PulseDurationIndex = -1;
  local_38.SecondsPerTick = (this->CurrentTickRate).SecondsPerTick;
  local_38.ThirtySecondNotesPerMinute = (this->CurrentTickRate).ThirtySecondNotesPerMinute;
  this->LastFramesOfLatency = 0;
  local_38.BeatsPerMinute = (this->CurrentTickRate).BeatsPerMinute;
  local_38.SampleRate = (this->CurrentTickRate).SampleRate;
  this->TimeSinceStart = 0.0;
  this->ClockName = param_1;
  SetTickRate(this,&local_38,0);
  return this;
}

// ~FQuartzMetronome @ 146540d80

void __thiscall Audio::FQuartzMetronome::~FQuartzMetronome(FQuartzMetronome *this)

{
  FScriptContainerElement *pFVar1;
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  longlong lVar3;
  FPendingMetronomeEvents *pFVar4;
  FFramesInTimeValue *pFVar5;
  longlong lVar6;
  
  pFVar1 = (this->PulseDurations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lVar6 = 0x12;
  pFVar5 = &this->MusicalDurationsInFrames;
  lVar3 = 0x12;
  do {
    pFVar1 = ((FMetronomeEventEntry *)(pFVar5 + -1))[8].EventFrames.AllocatorInstance.Data;
    pFVar5 = (FFramesInTimeValue *)((FMetronomeEventEntry *)(pFVar5 + -1) + 8);
    lVar3 = lVar3 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar3 != 0);
  pFVar4 = &this->PendingMetronomeEvents;
  do {
    pTVar2 = (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
              *)(pFVar4 + -1);
    pFVar4 = (FPendingMetronomeEvents *)
             ((TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
               *)(pFVar4 + -1) + 0x11);
    lVar6 = lVar6 + -1;
    DestructItems<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,int>
              ((TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
                *)(((TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
                     *)pFVar4)->AllocatorInstance).Data,pTVar2[0x11].ArrayNum);
    pFVar1 = (((TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
                *)pFVar4)->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  pFVar1 = (this->CurrentTimeSignature).OptionalPulseOverride.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// CalculateDurationPhases @ 1465485e0

void __thiscall
Audio::FQuartzMetronome::CalculateDurationPhases(FQuartzMetronome *this,float (*param_1) [18])

{
  double dVar1;
  
  dVar1 = __real_3ff0000000000000;
  (*param_1)[0] =
       (float)(__real_3ff0000000000000 -
              (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0] /
              (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal[0]);
  (*param_1)[1] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[1] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal[1])
  ;
  (*param_1)[2] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[2] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal[2])
  ;
  (*param_1)[3] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[3] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal[3])
  ;
  (*param_1)[4] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[4] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal[4])
  ;
  (*param_1)[5] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[5] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal[5])
  ;
  (*param_1)[6] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[6] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal[6])
  ;
  (*param_1)[7] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[7] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal[7])
  ;
  (*param_1)[8] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[8] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal[8])
  ;
  (*param_1)[9] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[9] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal[9])
  ;
  (*param_1)[10] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[10] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal[10]
              );
  (*param_1)[0xb] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xb] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal
                                      [0xb]);
  (*param_1)[0xc] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xc] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal
                                      [0xc]);
  (*param_1)[0xd] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xd] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal
                                      [0xd]);
  (*param_1)[0xe] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xe] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal
                                      [0xe]);
  (*param_1)[0xf] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0xf] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal
                                      [0xf]);
  (*param_1)[0x10] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0x10] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal
                                      [0x10]);
  (*param_1)[0x11] =
       (float)(dVar1 - (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0x11] /
                       (double)(float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal
                                      [0x11]);
  return;
}

// CountNumSubdivisionsPerBar @ 14654c280

float __thiscall
Audio::FQuartzMetronome::CountNumSubdivisionsPerBar
          (FQuartzMetronome *this,EQuartzCommandQuantization param_1)

{
  int iVar1;
  
  if ((param_1 == Beat) && (iVar1 = (this->PulseDurations).ArrayNum, iVar1 != 0)) {
    return (float)iVar1;
  }
  return (float)((this->MusicalDurationsInFrames).FramesInTimeValueInternal[0] /
                (this->MusicalDurationsInFrames).FramesInTimeValueInternal[param_1]);
}

// CountNumSubdivisionsSinceBarStart @ 14654c2c0

float __thiscall
Audio::FQuartzMetronome::CountNumSubdivisionsSinceBarStart
          (FQuartzMetronome *this,EQuartzCommandQuantization param_1)

{
  double dVar1;
  int iVar2;
  float fVar3;
  
  if (param_1 == Bar) {
    return 0.0;
  }
  if ((param_1 == Beat) && ((this->PulseDurations).ArrayNum != 0)) {
    return (float)this->PulseDurationIndex + __real_3f800000;
  }
  dVar1 = (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0];
  fVar3 = (float)(__real_3ff0000000000000 -
                 (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0] /
                 (double)(float)dVar1);
  if ((param_1 == Beat) && (iVar2 = (this->PulseDurations).ArrayNum, iVar2 != 0)) {
    return (float)iVar2 * fVar3 + __real_3f800000;
  }
  return (float)(dVar1 / (this->MusicalDurationsInFrames).FramesInTimeValueInternal[param_1]) *
         fVar3 + __real_3f800000;
}

// CountNumSubdivisionsSinceStart @ 14654c360

float __thiscall
Audio::FQuartzMetronome::CountNumSubdivisionsSinceStart
          (FQuartzMetronome *this,EQuartzCommandQuantization param_1)

{
  double dVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if ((param_1 == Beat) && (iVar2 = (this->PulseDurations).ArrayNum, iVar2 != 0)) {
    fVar4 = (float)iVar2;
    fVar3 = (float)this->PulseDurationIndex;
  }
  else {
    fVar4 = (float)((this->MusicalDurationsInFrames).FramesInTimeValueInternal[0] /
                   (this->MusicalDurationsInFrames).FramesInTimeValueInternal[param_1]);
    if (param_1 == Bar) {
      fVar3 = 0.0;
      goto LAB_14654c426;
    }
    if ((param_1 == Beat) && ((this->PulseDurations).ArrayNum != 0)) {
      fVar3 = (float)this->PulseDurationIndex;
    }
    else {
      dVar1 = (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0];
      if ((param_1 == Beat) && (iVar2 = (this->PulseDurations).ArrayNum, iVar2 != 0)) {
        fVar3 = (float)iVar2;
      }
      else {
        fVar3 = (float)(dVar1 / (this->MusicalDurationsInFrames).FramesInTimeValueInternal[param_1])
        ;
      }
      fVar3 = fVar3 * (float)(__real_3ff0000000000000 -
                             (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0] /
                             (double)(float)dVar1);
    }
  }
  fVar3 = fVar3 + __real_3f800000;
LAB_14654c426:
  return (float)(((this->CurrentTimeStamp).Bars + -1) * (int)fVar4 + (int)fVar3);
}

// FireEvents @ 146554340

void __thiscall Audio::FQuartzMetronome::FireEvents(FQuartzMetronome *this)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  long64 lVar7;
  long64 lVar8;
  FName FVar9;
  bool bVar10;
  ulonglong uVar11;
  TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> *this_00;
  TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> *pTVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  *pTVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  FPendingMetronomeEvents *pFVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  code *local_148;
  longlong local_138 [3];
  longlong *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  FPendingMetronomeEvents *local_108;
  FQuartzCrossThreadMessage local_f8;
  int local_d8;
  int iStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  FName local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8 [2];
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  
  FQuartzCrossThreadMessage::FQuartzCrossThreadMessage(&local_f8,true);
  local_d8 = (this->CurrentTimeStamp).Bars;
  pTVar16 = this->MetronomeSubscriptionMatrix;
  fStack_d0 = (this->CurrentTimeStamp).BeatFraction;
  pFVar19 = &this->PendingMetronomeEvents;
  local_res18 = 0xffffffff;
  iStack_d4 = (this->CurrentTimeStamp).Beat;
  local_c8 = this->ClockName;
  uStack_c0 = 0;
  local_108 = pFVar19;
  if (pTVar16 !=
      (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
       *)pFVar19) {
    do {
      local_res18 = local_res18 + 1;
      uStack_cc = CONCAT31(uStack_cc._1_3_,(char)local_res18);
      if (this->MetronomeSubscriptionMatrix[(ulonglong)(local_res18 & 0xff) + 0x12].ArrayNum != 0) {
        local_res20 = pTVar16->ArrayNum;
        uVar11 = (ulonglong)(int)local_res20;
        pFVar20 = (pTVar16->AllocatorInstance).Data;
        local_110 = pFVar20 + uVar11 * 0x10;
        while( true ) {
          pFVar18 = local_110;
          if (pTVar16->ArrayNum != (int)uVar11) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          pFVar19 = local_108;
          if (pFVar20 == pFVar18) break;
          lVar21 = (longlong)(int)local_res18;
          pFVar18 = (this->PendingMetronomeEvents).CurrentMetronomeEvents[lVar21].EventFrames.
                    AllocatorInstance.Data;
          iVar1 = this->MetronomeSubscriptionMatrix[lVar21 + 0x12].ArrayNum;
          local_118 = pFVar18 + (longlong)iVar1 * 4;
          while( true ) {
            pFVar4 = local_118;
            if (this->MetronomeSubscriptionMatrix[lVar21 + 0x12].ArrayNum != iVar1) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res10);
            }
            if (pFVar18 == pFVar4) break;
            uStack_c0 = *(undefined4 *)pFVar18;
            if ((*(longlong *)pFVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar9 = local_c8;
            lVar8 = local_f8.Timer.JourneyEndCycles;
            lVar7 = local_f8.Timer.JourneyStartCycles;
            lVar6 = local_f8._padding_;
            lVar5 = local_f8._padding_;
            plVar17 = *(longlong **)pFVar20;
            pTVar12 = (TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> *)0x0;
            lVar14 = CONCAT44(iStack_d4,local_d8);
            lVar15 = CONCAT44(uStack_cc,fStack_d0);
            lVar3 = CONCAT44(uStack_bc,uStack_c0);
            local_148 = (code *)0x0;
            local_120 = (longlong *)0x0;
            local_120 = FMemory::Malloc(0x48,8);
            local_120[1] = lVar5;
            local_120[2] = lVar6;
            local_120[3] = lVar7;
            local_120[4] = lVar8;
            *local_120 = (longlong)
                         &UE::Core::Private::Function::
                          TFunction_OwnedObject<`Audio::FQuartzMetronome::FireEvents'::`17'::<lambda_1>,0,1>
                          ::_vftable_;
            local_120[5] = lVar14;
            local_120[6] = lVar15;
            *(FName *)(local_120 + 7) = FVar9;
            local_120[8] = lVar3;
            if (local_120 != (longlong *)&DAT_fffffffffffffff8) {
              local_148 = UE::Core::Private::Function::
                          TFunctionRefCaller<`Audio::FQuartzMetronome::FireEvents'::__l17::<lambda_1>,void,Audio::Quartz::IMetronomeEventListener_&>
                          ::Call;
            }
            this_00 = ::operator_new(0x40);
            if (this_00 != (TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> *)0x0) {
              local_b8[0] = local_148;
              local_90 = local_120;
              local_120 = (longlong *)0x0;
              local_a8 = local_138[0];
              uStack_a0 = local_138[1];
              local_98 = local_138[2];
              if (local_148 != (code *)0x0) {
                local_148 = (code *)0x0;
              }
              pTVar12 = Quartz::PrivateDefs::
                        TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
                        ::TVisitWithLambda<Audio::Quartz::IMetronomeEventListener>::
                        TVisitWithLambda<Audio::Quartz::IMetronomeEventListener>
                                  (this_00,(TFunction<void___cdecl(Audio::Quartz::IMetronomeEventListener_&)>
                                            *)local_b8);
            }
            plVar13 = FMemory::Malloc(0x10,8);
            *plVar13 = 0;
            plVar13[1] = (longlong)pTVar12;
            lVar14 = *plVar17;
            do {
              *plVar13 = lVar14;
              LOCK();
              lVar15 = *plVar17;
              bVar10 = lVar14 == lVar15;
              if (bVar10) {
                *plVar17 = (longlong)plVar13;
                lVar15 = lVar14;
              }
              UNLOCK();
              lVar14 = lVar15;
            } while (!bVar10);
            if (local_148 != (code *)0x0) {
              plVar17 = local_138;
              if (local_120 != (longlong *)0x0) {
                plVar17 = local_120;
              }
              (**(code **)(*plVar17 + 0x10))();
            }
            pFVar18 = pFVar18 + 4;
          }
          pFVar20 = pFVar20 + 0x10;
          uVar11 = (ulonglong)local_res20;
        }
      }
      pTVar16 = pTVar16 + 1;
    } while (pTVar16 !=
             (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
              *)pFVar19);
  }
  return;
}

// GetFramesUntilBoundary @ 146557e00

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
Audio::FQuartzMetronome::GetFramesUntilBoundary
          (FQuartzMetronome *this,FQuartzQuantizationBoundary *param_1)

{
  ulonglong uVar1;
  int *piVar2;
  EQuarztQuantizationReference EVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EQuartzCommandQuantization EVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  
  fVar19 = __real_3f800000;
  EVar7 = param_1->Quantization;
  if (EVar7 == None) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5094007942370295940>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzMetronome.cpp"
                       ,0x84,
                       "InQuantizationBoundary.Quantization != EQuartzCommandQuantization::None");
    if (!bVar6) {
      DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                ((FQuartzGameThreadSubscriber *)
                 (param_1->GameThreadSubscribers).AllocatorInstance.Data,
                 (param_1->GameThreadSubscribers).ArrayNum);
      pFVar4 = (param_1->GameThreadSubscribers).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      return 0.0;
    }
    pcVar5 = (code *)swi(3);
    dVar20 = (double)(*pcVar5)();
    return dVar20;
  }
  fVar21 = param_1->Multiplier;
  if (param_1->Multiplier < __real_3f800000) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      EVar7 = param_1->Quantization;
    }
    param_1->Multiplier = 1.0;
    fVar21 = fVar19;
  }
  dVar20 = (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[EVar7];
  uVar13 = (int)fVar21 - 1;
  bVar6 = (float)((uint)(fVar21 - fVar19) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_322bcc77;
  EVar3 = param_1->CountingReferencePoint;
  bVar8 = FQuartzTransportTimeStamp::IsZero(&this->CurrentTimeStamp);
  if ((bVar8) && (param_1->bFireOnClockStart == false)) {
    EVar7 = param_1->Quantization;
    uVar11 = (ulonglong)EVar7;
    dVar20 = (this->MusicalDurationsInFrames).FramesInTimeValueInternal[uVar11];
    if (uVar13 == 0) {
      FQuartzQuantizationBoundary::~FQuartzQuantizationBoundary(param_1);
      return dVar20;
    }
  }
  else {
    if ((bVar6 && EVar3 != BarRelative) ||
       (bVar6 = FQuartzTransportTimeStamp::IsZero(&this->CurrentTimeStamp), bVar6)) {
      DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                ((FQuartzGameThreadSubscriber *)
                 (param_1->GameThreadSubscribers).AllocatorInstance.Data,
                 (param_1->GameThreadSubscribers).ArrayNum);
      goto LAB_1465582d1;
    }
    EVar7 = param_1->Quantization;
    uVar11 = (ulonglong)EVar7;
  }
  EVar3 = param_1->CountingReferencePoint;
  if (EVar3 != CurrentTimeRelative) {
    if (EVar3 == TransportRelative) {
      piVar2 = &(this->PulseDurations).ArrayNum;
      if ((EVar7 == Beat) && (iVar10 = *piVar2, iVar10 != 0)) {
        fVar21 = (float)iVar10;
        fVar18 = (float)this->PulseDurationIndex;
LAB_14655800b:
        fVar18 = fVar18 + fVar19;
      }
      else {
        fVar21 = (float)((this->MusicalDurationsInFrames).FramesInTimeValueInternal[0] /
                        (this->MusicalDurationsInFrames).FramesInTimeValueInternal[EVar7]);
        if (EVar7 != Bar) {
          if ((EVar7 == Beat) && (*piVar2 != 0)) {
            fVar18 = (float)this->PulseDurationIndex;
          }
          else {
            dVar22 = (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0];
            fVar18 = (float)(dVar22 / (this->MusicalDurationsInFrames).FramesInTimeValueInternal
                                      [EVar7]) *
                     (float)(__real_3ff0000000000000 -
                            (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[0] /
                            (double)(float)dVar22);
          }
          goto LAB_14655800b;
        }
        fVar18 = 0.0;
      }
      iVar10 = (int)(float)(((this->CurrentTimeStamp).Bars + -1) * (int)fVar21 + (int)fVar18);
      if (param_1->Multiplier <= (float)iVar10) {
        iVar10 = iVar10 % (int)param_1->Multiplier;
      }
      uVar13 = uVar13 - iVar10;
    }
    else {
      if (EVar3 != BarRelative) goto LAB_14655810d;
      if (((EQuartzCommandQuantization)uVar11 == Beat) &&
         (iVar10 = (this->PulseDurations).ArrayNum, iVar10 != 0)) {
        fVar21 = (float)iVar10;
      }
      else {
        fVar21 = (float)((this->MusicalDurationsInFrames).FramesInTimeValueInternal[0] /
                        (this->MusicalDurationsInFrames).FramesInTimeValueInternal[uVar11]);
      }
      fVar18 = CountNumSubdivisionsSinceBarStart(this,(EQuartzCommandQuantization)uVar11);
      if (fVar19 <= fVar21) {
LAB_1465580e2:
        uVar13 = (int)uVar13 % (int)fVar21 - (int)fVar18;
      }
      else {
        if ((float)((uint)fVar21 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5094007942370296004>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzMetronome.cpp"
                             ,0xc4,"!FMath::IsNearlyZero(NumSubdivisionsPerBar)");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            dVar20 = (double)(*pcVar5)();
            return dVar20;
          }
          goto LAB_1465580e2;
        }
        param_1->Quantization = Bar;
        fVar19 = fVar19 / fVar21 - (fVar18 - fVar19);
        param_1->Multiplier = fVar19;
        uVar13 = (int)fVar19 - 1;
      }
      if ((int)uVar13 < 0) {
        uVar13 = (uint)((float)(int)uVar13 + fVar21);
      }
    }
  }
LAB_14655810d:
  fVar19 = param_1->Multiplier;
  fVar21 = (float)truncf();
  dVar22 = (double)(fVar19 - fVar21);
  if ((param_1->Quantization == Beat) && (piVar2 = &(this->PulseDurations).ArrayNum, *piVar2 != 0))
  {
    uVar17 = 0;
    uVar16 = 0;
    uVar11 = uVar17;
    if (-1 < this->PulseDurationIndex) {
      uVar11 = (ulonglong)(uint)this->PulseDurationIndex;
    }
    uVar12 = (uint)uVar11;
    if (0 < (int)uVar13) {
      uVar15 = (ulonglong)(int)uVar12;
      uVar14 = (ulonglong)uVar13;
      do {
        uVar13 = *piVar2;
        uVar9 = (int)uVar11 + 1;
        uVar1 = uVar15 + 1;
        uVar15 = uVar17;
        uVar12 = 0;
        uVar11 = uVar17;
        if (uVar9 != uVar13) {
          uVar11 = (ulonglong)uVar9;
          uVar15 = uVar1;
          uVar12 = uVar9;
        }
        uVar9 = uVar16;
        if ((int)uVar12 < (int)uVar13) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          dVar20 = (double)(*pcVar5)();
          return dVar20;
        }
        dVar20 = dVar20 + *(double *)((this->PulseDurations).AllocatorInstance.Data + uVar15 * 8);
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    uVar13 = (this->PulseDurations).ArrayNum;
    uVar9 = uVar16;
    if (uVar12 + 1 != uVar13) {
      uVar9 = uVar12 + 1;
    }
    if ((int)uVar9 < (int)uVar13) {
      uVar16 = ~uVar9 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      dVar20 = (double)(*pcVar5)();
      return dVar20;
    }
    dVar20 = dVar20 + dVar22 * *(double *)
                                ((this->PulseDurations).AllocatorInstance.Data +
                                (longlong)(int)uVar9 * 8);
  }
  else {
    dVar20 = dVar20 + (double)((float)(this->MusicalDurationsInFrames).FramesInTimeValueInternal
                                      [param_1->Quantization] *
                              (float)((double)(int)uVar13 + dVar22));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)(param_1->GameThreadSubscribers).AllocatorInstance.Data,
             (param_1->GameThreadSubscribers).ArrayNum);
LAB_1465582d1:
  pFVar4 = (param_1->GameThreadSubscribers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return dVar20;
}

// RecalculateDurations @ 14656af50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzMetronome::RecalculateDurations(FQuartzMetronome *this)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FFramesInTimeValue *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  double local_78 [8];
  
  pTVar2 = &this->PulseDurations;
  piVar1 = &(this->PulseDurations).ArrayMax;
  iVar12 = 0;
  (this->PulseDurations).ArrayNum = 0;
  if ((this->PulseDurations).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar11 = &this->MusicalDurationsInFrames;
  do {
    dVar14 = FQuartzClockTickRate::GetFramesPerDuration
                       (&this->CurrentTickRate,(EQuartzCommandQuantization)iVar12);
    iVar12 = iVar12 + 1;
    pFVar11->FramesInTimeValueInternal[0] = dVar14;
    pFVar11 = (FFramesInTimeValue *)(pFVar11->FramesInTimeValueInternal + 1);
  } while (iVar12 < 0x12);
  iVar12 = (this->CurrentTimeSignature).NumBeats;
  dVar14 = FQuartzClockTickRate::GetFramesPerDuration
                     (&this->CurrentTickRate,(this->CurrentTimeSignature).BeatType);
  dVar14 = dVar14 * (double)iVar12;
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0] = dVar14;
  dVar15 = FQuartzClockTickRate::GetFramesPerDuration
                     (&this->CurrentTickRate,(this->CurrentTimeSignature).BeatType);
  (this->MusicalDurationsInFrames).FramesInTimeValueInternal[1] = dVar15;
  iVar12 = (this->CurrentTimeSignature).OptionalPulseOverride.ArrayNum;
  if (iVar12 != 0) {
    pFVar13 = (this->CurrentTimeSignature).OptionalPulseOverride.AllocatorInstance.Data;
    dVar15 = 0.0;
    local_78[0] = 0.0;
    pFVar4 = pFVar13 + (longlong)iVar12 * 8;
    while( true ) {
      if ((this->CurrentTimeSignature).OptionalPulseOverride.ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FQuartzPulseOverrideStep,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar13 == pFVar4) break;
      iVar10 = 0;
      if (0 < *(int *)pFVar13) {
        do {
          local_78[0] = FQuartzClockTickRate::GetFramesPerDuration
                                  (&this->CurrentTickRate,(EQuartzCommandQuantization)pFVar13[4]);
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          dVar15 = dVar15 + local_78[0];
          if (((pFVar3 <= (FScriptContainerElement *)local_78) &&
              ((FScriptContainerElement *)local_78 < pFVar3 + (longlong)*piVar1 * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (this->PulseDurations).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->PulseDurations).ArrayNum = iVar9 + 1;
          iVar10 = iVar10 + 1;
          *(double *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_78[0];
        } while (iVar10 < *(int *)pFVar13);
      }
      pFVar13 = pFVar13 + 8;
    }
    if (dVar15 <= dVar14) {
      dVar16 = local_78[0] + dVar15;
      while (dVar16 <= dVar14) {
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_78) &&
            ((FScriptContainerElement *)local_78 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = (this->PulseDurations).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->PulseDurations).ArrayNum = iVar12 + 1;
        *(double *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_78[0];
        dVar15 = dVar15 + local_78[0];
        dVar16 = local_78[0] + dVar15;
      }
      if (((this->PulseDurations).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar15 = __real_3e45798ee2308c3a;
      pFVar13 = (pTVar2->AllocatorInstance).Data;
      iVar12 = (this->PulseDurations).ArrayNum;
      dVar14 = *(double *)pFVar13;
      pFVar4 = pFVar13 + (longlong)iVar12 * 8;
      while( true ) {
        if ((this->PulseDurations).ArrayNum != iVar12) {
          `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar13 == pFVar4) break;
        dVar16 = *(double *)pFVar13 - dVar14;
        if (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar7,
                                      SUB84(dVar16,0) & uVar6)) {
          return;
        }
        pFVar13 = pFVar13 + 8;
      }
      (this->MusicalDurationsInFrames).FramesInTimeValueInternal[1] = dVar14;
      (this->PulseDurations).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else if (2 < (byte)LogAudioQuartz._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    }
  }
  return;
}

// ResetTransport @ 14656fda0

void __thiscall Audio::FQuartzMetronome::ResetTransport(FQuartzMetronome *this)

{
  FQuartzTransportTimeStamp::Reset(&this->CurrentTimeStamp);
  if (&this->FramesLeftInMusicalDuration <= &this->PulseDurations) {
    memset(&this->FramesLeftInMusicalDuration,0,0x90);
  }
  this->PulseDurationIndex = -1;
  this->TimeSinceStart = 0.0;
  return;
}

// SetSampleRate @ 1465743f0

void __thiscall Audio::FQuartzMetronome::SetSampleRate(FQuartzMetronome *this,float param_1)

{
  FQuartzClockTickRate::SetSampleRate(&this->CurrentTickRate,(double)param_1);
  RecalculateDurations(this);
  return;
}

// SetTickRate @ 146574f00

void __thiscall
Audio::FQuartzMetronome::SetTickRate
          (FQuartzMetronome *this,FQuartzClockTickRate *param_1,int param_2)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  FFramesInTimeValue *pFVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = (this->CurrentTickRate).FramesPerTick;
  dVar5 = param_1->FramesPerTick - dVar6;
  if (((double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3e45798ee2308c3a) &&
     (0.0 < (this->MusicalDurationsInFrames).FramesInTimeValueInternal[0])) {
    return;
  }
  dVar6 = param_1->FramesPerTick / dVar6;
  pFVar3 = &this->FramesLeftInMusicalDuration;
  lVar4 = 0;
  pTVar1 = &this->PulseDurations;
  if (pFVar3 <= pTVar1) {
    dVar5 = (double)param_2;
    dVar7 = (double)param_2;
    do {
      dVar2 = pFVar3->FramesInTimeValueInternal[1];
      lVar4 = lVar4 + 8;
      pFVar3->FramesInTimeValueInternal[0] =
           (pFVar3->FramesInTimeValueInternal[0] - dVar5) * dVar6 + dVar5;
      pFVar3->FramesInTimeValueInternal[1] = (dVar2 - dVar7) * dVar6 + dVar7;
      pFVar3->FramesInTimeValueInternal[2] =
           (pFVar3->FramesInTimeValueInternal[2] - dVar5) * dVar6 + dVar5;
      pFVar3->FramesInTimeValueInternal[3] =
           (pFVar3->FramesInTimeValueInternal[3] - dVar7) * dVar6 + dVar7;
      pFVar3->FramesInTimeValueInternal[4] =
           (pFVar3->FramesInTimeValueInternal[4] - dVar5) * dVar6 + dVar5;
      pFVar3->FramesInTimeValueInternal[5] =
           (pFVar3->FramesInTimeValueInternal[5] - dVar7) * dVar6 + dVar7;
      pFVar3->FramesInTimeValueInternal[6] =
           (pFVar3->FramesInTimeValueInternal[6] - dVar5) * dVar6 + dVar5;
      pFVar3->FramesInTimeValueInternal[7] =
           (pFVar3->FramesInTimeValueInternal[7] - dVar7) * dVar6 + dVar7;
      pFVar3 = (FFramesInTimeValue *)(pFVar3->FramesInTimeValueInternal + 8);
    } while (lVar4 != 0x10);
    if ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar3 == pTVar1) goto LAB_146574ffd;
  }
  do {
    pFVar3->FramesInTimeValueInternal[0] =
         (pFVar3->FramesInTimeValueInternal[0] - (double)param_2) * dVar6 + (double)param_2;
    pFVar3 = (FFramesInTimeValue *)(pFVar3->FramesInTimeValueInternal + 1);
  } while ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar3 != pTVar1);
LAB_146574ffd:
  dVar6 = param_1->MillisecondsPerTick;
  dVar5 = param_1->SecondsPerTick;
  dVar7 = param_1->ThirtySecondNotesPerMinute;
  (this->CurrentTickRate).FramesPerTick = param_1->FramesPerTick;
  (this->CurrentTickRate).MillisecondsPerTick = dVar6;
  dVar6 = param_1->BeatsPerMinute;
  dVar2 = param_1->SampleRate;
  (this->CurrentTickRate).SecondsPerTick = dVar5;
  (this->CurrentTickRate).ThirtySecondNotesPerMinute = dVar7;
  (this->CurrentTickRate).BeatsPerMinute = dVar6;
  (this->CurrentTickRate).SampleRate = dVar2;
  RecalculateDurations(this);
  return;
}

// SetTimeSignature @ 1465754c0

void __thiscall
Audio::FQuartzMetronome::SetTimeSignature(FQuartzMetronome *this,FQuartzTimeSignature *param_1)

{
  FQuartzTimeSignature::operator=(&this->CurrentTimeSignature,param_1);
  RecalculateDurations(this);
  return;
}

// SubscribeToAllTimeDivisions @ 1465785e0

void __thiscall
Audio::FQuartzMetronome::SubscribeToAllTimeDivisions
          (FQuartzMetronome *this,
          TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
          *param_1)

{
  uint uVar1;
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  *this_00;
  
  this_00 = this->MetronomeSubscriptionMatrix;
  if (this_00 !=
      (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
       *)&this->PendingMetronomeEvents) {
    uVar1 = 1;
    do {
      TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
      ::
      AddUniqueImpl<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>_const_&>
                (this_00,param_1);
      this_00 = this_00 + 1;
      this->ListenerFlags = this->ListenerFlags | uVar1;
      uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    } while (this_00 !=
             (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
              *)&this->PendingMetronomeEvents);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SubscribeToTimeDivision @ 146578cb0

void __thiscall
Audio::FQuartzMetronome::SubscribeToTimeDivision
          (FQuartzMetronome *this,
          TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
          *param_1,EQuartzCommandQuantization param_2)

{
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  ::
  AddUniqueImpl<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>_const_&>
            (this->MetronomeSubscriptionMatrix + param_2,param_1);
  this->ListenerFlags = this->ListenerFlags | 1 << (param_2 & 0x1f);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Tick @ 1465792a0

void __thiscall Audio::FQuartzMetronome::Tick(FQuartzMetronome *this,int param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  uVar10 = 0;
  this->LastTickCpuCycles64 = (ulong64)local_res8;
  do {
    uVar9 = uVar10 & 0xff;
    dVar11 = (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[uVar9];
    iVar7 = (int)dVar11;
    dVar11 = dVar11 - (double)param_1;
    (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[uVar9] = dVar11;
    if (dVar11 < 0.0) {
      if (((EQuartzCommandQuantization)uVar10 == Beat) && ((this->PulseDurations).ArrayNum != 0)) {
        do {
          FPendingMetronomeEvents::Add(&this->PendingMetronomeEvents,Beat,iVar7);
          this->PulseDurationIndex = this->PulseDurationIndex + 1;
          uVar2 = (this->PulseDurations).ArrayNum;
          uVar8 = this->PulseDurationIndex;
          if (uVar8 == uVar2) {
            this->PulseDurationIndex = 0;
            uVar8 = 0;
          }
          uVar5 = 0;
          if ((int)uVar8 < (int)uVar2) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          iVar7 = (int)((double)iVar7 +
                       (this->MusicalDurationsInFrames).FramesInTimeValueInternal[uVar9]);
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[uVar9] =
               *(double *)((this->PulseDurations).AllocatorInstance.Data + (longlong)(int)uVar8 * 8)
               + (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[uVar9];
          uVar2 = this->PulseDurationIndex;
          uVar8 = 0;
          if ((int)uVar2 < (this->PulseDurations).ArrayNum) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this->MusicalDurationsInFrames).FramesInTimeValueInternal[uVar9] =
               *(double *)((this->PulseDurations).AllocatorInstance.Data + (longlong)(int)uVar2 * 8)
          ;
        } while ((this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[uVar9] <= 0.0);
      }
      else {
        do {
          FPendingMetronomeEvents::Add
                    (&this->PendingMetronomeEvents,(EQuartzCommandQuantization)uVar10,iVar7);
          dVar11 = (this->MusicalDurationsInFrames).FramesInTimeValueInternal[uVar9];
          dVar12 = dVar11 + (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[uVar9];
          iVar7 = (int)((double)iVar7 + dVar11);
          (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[uVar9] = dVar12;
        } while (dVar12 <= 0.0);
      }
    }
    uVar10 = uVar10 + 1;
    if (0x11 < (int)uVar10) {
      if ((this->PendingMetronomeEvents).CurrentMetronomeEvents[0].EventFrames.ArrayNum == 0) {
        if ((this->PendingMetronomeEvents).CurrentMetronomeEvents[1].EventFrames.ArrayNum != 0) {
          piVar6 = &(this->CurrentTimeStamp).Beat;
          *piVar6 = *piVar6 + 1;
        }
      }
      else {
        (this->CurrentTimeStamp).Bars = (this->CurrentTimeStamp).Bars + 1;
        (this->CurrentTimeStamp).Beat = 1;
      }
      iVar7 = (this->PulseDurations).ArrayNum;
      if (iVar7 == 0) {
        dVar11 = (this->MusicalDurationsInFrames).FramesInTimeValueInternal[1];
      }
      else {
        uVar10 = this->PulseDurationIndex;
        uVar9 = 0;
        if ((int)uVar10 < iVar7) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar11 = *(double *)
                  ((this->PulseDurations).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
      }
      (this->CurrentTimeStamp).BeatFraction =
           (float)(__real_3ff0000000000000 -
                  (this->FramesLeftInMusicalDuration).FramesInTimeValueInternal[1] /
                  (double)(float)dVar11);
      dVar11 = (double)param_1 / (this->CurrentTickRate).SampleRate + this->TimeSinceStart;
      this->TimeSinceStart = dVar11;
      (this->CurrentTimeStamp).Seconds = (float)dVar11;
      FireEvents(this);
      if (&this->PendingMetronomeEvents !=
          (FPendingMetronomeEvents *)&this->MusicalDurationsInFrames) {
        piVar6 = &(this->PendingMetronomeEvents).CurrentMetronomeEvents[0].EventFrames.ArrayMax;
        do {
          piVar6[-1] = 0;
          if (*piVar6 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,(ForAnyElementType *)(piVar6 + -3),0,piVar6);
          }
          puVar1 = (undefined1 *)(piVar6 + 1);
          piVar6 = piVar6 + 4;
        } while ((FFramesInTimeValue *)puVar1 != &this->MusicalDurationsInFrames);
      }
      return;
    }
  } while( true );
}

// UnsubscribeFromAllTimeDivisions @ 14657b070

void __thiscall
Audio::FQuartzMetronome::UnsubscribeFromAllTimeDivisions
          (FQuartzMetronome *this,
          TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  *this_00;
  
  this_00 = this->MetronomeSubscriptionMatrix;
  uVar7 = 0;
  do {
    if (this_00 ==
        (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
         *)&this->PendingMetronomeEvents) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    pFVar1 = (this_00->AllocatorInstance).Data;
    if (pFVar1 != pFVar1 + (longlong)this_00->ArrayNum * 0x10) {
      pFVar6 = pFVar1;
      do {
        if (*(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
              **)pFVar6 == param_1->Object) {
          uVar5 = (uint)((longlong)pFVar6 - (longlong)pFVar1 >> 4);
          if (uVar5 != 0xffffffff) {
            uVar4 = 0;
            if ((int)(uVar5 + 1) <= this_00->ArrayNum) {
              uVar4 = ~uVar5 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
            ::RemoveAtSwapImpl(this_00,uVar5,1);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&this_00->AllocatorInstance,this_00->ArrayNum,&this_00->ArrayMax);
          }
          break;
        }
        pFVar6 = pFVar6 + 0x10;
      } while (pFVar6 != pFVar1 + (longlong)this_00->ArrayNum * 0x10);
    }
    if (this_00->ArrayNum == 0) {
      this->ListenerFlags = this->ListenerFlags & ~(1 << (uVar7 & 0x1f));
    }
    uVar7 = uVar7 + 1;
    this_00 = this_00 + 1;
  } while( true );
}

// UnsubscribeFromTimeDivision @ 14657b890

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::FQuartzMetronome::UnsubscribeFromTimeDivision
          (FQuartzMetronome *this,
          TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
          *param_1,EQuartzCommandQuantization param_2)

{
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  ::RemoveSingleSwap(this->MetronomeSubscriptionMatrix + param_2,param_1,Default);
  if (this->MetronomeSubscriptionMatrix[param_2].ArrayNum == 0) {
    this->ListenerFlags = this->ListenerFlags & ~(1 << (param_2 & 0x1f));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

