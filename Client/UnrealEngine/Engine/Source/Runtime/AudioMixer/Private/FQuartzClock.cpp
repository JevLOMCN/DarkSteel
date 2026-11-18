// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 41

// FQuartzClock @ 14653d2d0

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzClock * __thiscall
Audio::FQuartzClock::FQuartzClock
          (FQuartzClock *this,FName *param_1,FQuartzClockSettings *param_2,
          FQuartzClockManager *param_3)

{
  FQuartzMetronome *this_00;
  FName FVar1;
  FMixerDevice *pFVar2;
  float fVar3;
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  FPendingMetronomeEvents *pFVar5;
  longlong lVar6;
  longlong lVar7;
  FQuartzClockTickRate local_58;
  
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IQuartzClock>__IListenerBase__
  ;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IQuartzClock__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CachedClockStateCritSec,4000);
  FQuartzClockTickRate::FQuartzClockTickRate(&(this->CachedClockState).TickRate);
  this_00 = &this->Metronome;
  (this->CachedClockState).TimeStamp.Bars = 0;
  (this->CachedClockState).TimeStamp.Beat = 0;
  (this->CachedClockState).TimeStamp.BeatFraction = 0.0;
  (this->CachedClockState).TimeStamp.Seconds = 0.0;
  (this->CachedClockState).MusicalDurationPhases[0] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[1] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[2] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[3] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[4] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[5] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[6] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[7] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[8] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[9] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[10] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[0xb] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[0xc] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[0xd] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[0xe] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[0xf] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[0x10] = 0.0;
  (this->CachedClockState).MusicalDurationPhases[0x11] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[0] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[1] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[2] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[3] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[4] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[5] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[6] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[7] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[8] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[9] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[10] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[0xb] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[0xc] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[0xd] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[0xe] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[0xf] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[0x10] = 0.0;
  (this->CachedClockState).MusicalDurationPhaseDeltas[0x11] = 0.0;
  (this->CachedClockState).LastCacheTickCpuCycles64 = 0;
  (this->CachedClockState).LastCacheTickDeltaCpuCycles64 = 0;
  FVar1 = *param_1;
  this_00->LastTickCpuCycles64 = 0;
  (this->Metronome).ListenerFlags = 0;
  (this->Metronome).CurrentTimeStamp.Bars = 0;
  (this->Metronome).CurrentTimeStamp.Beat = 0;
  (this->Metronome).CurrentTimeStamp.BeatFraction = 0.0;
  (this->Metronome).CurrentTimeStamp.Seconds = 0.0;
  FQuartzTimeSignature::FQuartzTimeSignature
            (&(this->Metronome).CurrentTimeSignature,&param_2->TimeSignature);
  FQuartzClockTickRate::FQuartzClockTickRate(&(this->Metronome).CurrentTickRate);
  lVar6 = 0x12;
  pTVar4 = (this->Metronome).MetronomeSubscriptionMatrix;
  lVar7 = 0x12;
  do {
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
    pTVar4 = pTVar4 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  pFVar5 = &(this->Metronome).PendingMetronomeEvents;
  do {
    pFVar5->CurrentMetronomeEvents[0].EventFrames.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pFVar5->CurrentMetronomeEvents[0].EventFrames.ArrayNum = 0;
    pFVar5->CurrentMetronomeEvents[0].EventFrames.ArrayMax = 0;
    pFVar5 = (FPendingMetronomeEvents *)(pFVar5->CurrentMetronomeEvents + 1);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[0] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[1] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[2] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[3] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[4] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[5] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[6] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[7] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[8] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[9] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[10] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[0xb] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[0xc] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[0xd] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[0xe] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[0xf] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[0x10] = 0.0;
  (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal[0x11] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[0] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[1] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[2] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[3] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[4] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[5] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[6] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[7] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[8] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[9] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[10] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[0xb] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[0xc] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[0xd] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[0xe] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[0xf] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[0x10] = 0.0;
  (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal[0x11] = 0.0;
  (this->Metronome).PulseDurations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metronome).PulseDurations.ArrayNum = 0;
  (this->Metronome).PulseDurations.ArrayMax = 0;
  local_58.FramesPerTick = (this->Metronome).CurrentTickRate.FramesPerTick;
  local_58.MillisecondsPerTick = (this->Metronome).CurrentTickRate.MillisecondsPerTick;
  (this->Metronome).PulseDurationIndex = -1;
  local_58.SecondsPerTick = (this->Metronome).CurrentTickRate.SecondsPerTick;
  local_58.ThirtySecondNotesPerMinute = (this->Metronome).CurrentTickRate.ThirtySecondNotesPerMinute
  ;
  (this->Metronome).LastFramesOfLatency = 0;
  local_58.BeatsPerMinute = (this->Metronome).CurrentTickRate.BeatsPerMinute;
  local_58.SampleRate = (this->Metronome).CurrentTickRate.SampleRate;
  (this->Metronome).TimeSinceStart = 0.0;
  (this->Metronome).ClockName = FVar1;
  FQuartzMetronome::SetTickRate(this_00,&local_58,0);
  this->OwningClockManagerPtr = param_3;
  this->Name = *param_1;
  (this->PreTickCommands).Object = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
  (this->PreTickCommands).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ClockAlteringPendingCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClockAlteringPendingCommands).ArrayNum = 0;
  (this->ClockAlteringPendingCommands).ArrayMax = 0;
  (this->PendingCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCommands).ArrayNum = 0;
  (this->PendingCommands).ArrayMax = 0;
  this->ThreadLatencyInMilliseconds = 40.0;
  this->bIsRunning = (FThreadSafeBool)0x0;
  this->bIgnoresFlush = param_2->bIgnoreLevelChange;
  this->TickDelayLengthInFrames = 0;
  fVar3 = HeadlessClockSampleRateCvar;
  if ((this->OwningClockManagerPtr != (FQuartzClockManager *)0x0) &&
     (pFVar2 = this->OwningClockManagerPtr->MixerDevice, pFVar2 != (FMixerDevice *)0x0)) {
    fVar3 = (float)*(int *)&pFVar2->field_0x84;
  }
  FQuartzClockTickRate::SetSampleRate(&(this->Metronome).CurrentTickRate,(double)fVar3);
  FQuartzMetronome::RecalculateDurations(this_00);
  UpdateCachedState(this);
  return this;
}

// ~FQuartzClock @ 146540c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::~FQuartzClock(FQuartzClock *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IQuartzClock>__IListenerBase__
  ;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IQuartzClock__;
  Shutdown(this);
  DestructItems<Audio::FQuartzClock::PendingCommand,int>
            ((PendingCommand *)(this->PendingCommands).AllocatorInstance.Data,
             (this->PendingCommands).ArrayNum);
  pFVar1 = (this->PendingCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FQuartzClock::PendingCommand,int>
            ((PendingCommand *)(this->ClockAlteringPendingCommands).AllocatorInstance.Data,
             (this->ClockAlteringPendingCommands).ArrayNum);
  pFVar1 = (this->ClockAlteringPendingCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreTickCommands).SharedReferenceCount.ReferenceController);
  FQuartzMetronome::~FQuartzMetronome(&this->Metronome);
                    /* WARNING: Could not recover jumptable at 0x000146540cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CachedClockStateCritSec);
  return;
}

// AddQuantizedCommand @ 146546250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClock::AddQuantizedCommand
          (FQuartzClock *this,FQuartzQuantizedCommandInitInfo *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  IQuartzQuantizedCommand *pIVar5;
  TSharedPtr<Audio::FQuartzClock,1> *pTVar6;
  FQuartzQuantizationBoundary *pFVar7;
  FName this_00;
  FName local_res10;
  IQuartzQuantizedCommand *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<Audio::FQuartzClock,1> local_38;
  FQuartzQuantizationBoundary local_28;
  
  pIVar5 = (param_1->QuantizedCommandPtr).Object;
  if (pIVar5 == (IQuartzQuantizedCommand *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8377667833533825653>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClock.cpp"
                       ,0x275,"InQuantizationCommandInitInfo.QuantizedCommandPtr");
    if (!bVar3) {
      return;
    }
code_r0x0001465462e5:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar4 = (**(code **)(pIVar5->_padding_ + 0x38))();
  if (cVar4 == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8377667833533825660>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClock.cpp"
                       ,0x27c,
                       "EQuartzCommandType::PlaySound != InQuantizationCommandInitInfo.QuantizedCommandPtr->GetCommandType()"
                      );
    if (bVar3) goto code_r0x0001465462e5;
  }
  else {
    FVar1 = (this->Metronome).ClockName;
    if ((FVar1 == (FName)0x0) || (*(longlong *)((longlong)FVar1 + 0x28) == 0)) {
      pIVar5 = TSharedPtr<Audio::IQuartzQuantizedCommand,1>::operator->
                         (&param_1->QuantizedCommandPtr);
      cVar4 = (**(code **)(pIVar5->_padding_ + 0x28))();
      if (cVar4 != '\0') {
        pIVar5 = TSharedPtr<Audio::IQuartzQuantizedCommand,1>::operator->
                           (&param_1->QuantizedCommandPtr);
        IQuartzQuantizedCommand::Cancel(pIVar5);
      }
    }
    FVar1 = (this->Metronome).ClockName;
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
    if (FVar1 != (FName)0x0) {
      this_00 = FVar1;
    }
    local_res10 = (FName)this->OwningClockManagerPtr;
    pTVar6 = FQuartzClockManager::FindClock((FQuartzClockManager *)this_00,&local_38,&local_res10);
    FQuartzQuantizedCommandInitInfo::SetOwningClockPtr(param_1,pTVar6);
    if ((param_1->QuantizedCommandPtr).Object == (IQuartzQuantizedCommand *)0x0) {
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
    IQuartzQuantizedCommand::OnQueued((param_1->QuantizedCommandPtr).Object,param_1);
    pcVar2 = *(code **)(this->_padding_ + 0x48);
    local_48 = (param_1->QuantizedCommandPtr).Object;
    local_40 = (param_1->QuantizedCommandPtr).SharedReferenceCount.ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7 = FQuartzQuantizationBoundary::FQuartzQuantizationBoundary
                       (&local_28,&param_1->QuantizationBoundary);
    (*pcVar2)(this,pFVar7,&local_48);
  }
  return;
}

// AddQuantizedCommand @ 146546410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClock::AddQuantizedCommand(FQuartzClock *this,FQuartzQuantizedRequestData *param_1)

{
  FName FVar1;
  longlong lVar2;
  float fVar3;
  FQuartzQuantizedCommandInitInfo local_88;
  
  FVar1 = (this->Metronome).ClockName;
  fVar3 = HeadlessClockSampleRateCvar;
  if ((FVar1 != (FName)0x0) && (lVar2 = *(longlong *)((longlong)FVar1 + 0x28), lVar2 != 0)) {
    fVar3 = (float)*(int *)(lVar2 + 0x84);
  }
  FQuartzQuantizedCommandInitInfo::FQuartzQuantizedCommandInitInfo(&local_88,param_1,fVar3,-1);
  (**(code **)(this->_padding_ + 0x50))(this,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.OwningClockPointer.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_88.GameThreadSubscribers.AllocatorInstance.Data,
             local_88.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_88.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_88.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_88.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_88.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_88.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_88.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  return;
}

// AddQuantizedCommand @ 1465464d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClock::AddQuantizedCommand
          (FQuartzClock *this,FQuartzQuantizationBoundary *param_1,
          TSharedPtr<Audio::IQuartzQuantizedCommand,1> *param_2)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  IQuartzQuantizedCommand *pIVar10;
  FName *pFVar11;
  FQuartzQuantizationBoundary *pFVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FQuartzQuantizationBoundary local_58;
  
  local_res18[0] = 0;
  if (param_2->Object == (IQuartzQuantizedCommand *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8377667833533825474>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClock.cpp"
                       ,0x1c2,"InNewEvent.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               (param_1->GameThreadSubscribers).AllocatorInstance.Data,
               (param_1->GameThreadSubscribers).ArrayNum);
  }
  else if (((this->PendingCommands).ArrayNum == 0) &&
          (param_1->bCancelCommandIfClockIsNotRunning != false)) {
    if ((param_2->Object == (IQuartzQuantizedCommand *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    IQuartzQuantizedCommand::Cancel(param_2->Object);
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               (param_1->GameThreadSubscribers).AllocatorInstance.Data,
               (param_1->GameThreadSubscribers).ArrayNum);
  }
  else {
    if (param_1->bResetClockOnQueued != false) {
      (**(code **)(this->_padding_ + 0x20))(this,1);
      (**(code **)(this->_padding_ + 0x18))(this);
    }
    if (((this->PendingCommands).ArrayNum == 0) && (param_1->bResumeClockOnQueued != false)) {
      (**(code **)(this->_padding_ + 8))(this);
    }
    if (param_1->Quantization == None) {
      if (5 < (byte)LogAudioQuartz._0_1_) {
        FQuartzQuantizationBoundary::ToString(param_1,&local_88);
        pIVar10 = TSharedPtr<Audio::IQuartzQuantizedCommand,1>::operator->(param_2);
        pFVar11 = (FName *)(**(code **)(pIVar10->_padding_ + 0x30))(pIVar10,local_res18);
        ::FName::ToString(pFVar11,&local_98);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      if ((param_2->Object == (IQuartzQuantizedCommand *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      IQuartzQuantizedCommand::AboutToStart(param_2->Object);
      if ((param_2->Object == (IQuartzQuantizedCommand *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      IQuartzQuantizedCommand::OnFinalCallback(param_2->Object,0);
      DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                ((FQuartzGameThreadSubscriber *)
                 (param_1->GameThreadSubscribers).AllocatorInstance.Data,
                 (param_1->GameThreadSubscribers).ArrayNum);
    }
    else {
      pFVar12 = FQuartzQuantizationBoundary::FQuartzQuantizationBoundary(&local_58,param_1);
      dVar16 = FQuartzMetronome::GetFramesUntilBoundary
                         ((FQuartzMetronome *)
                          &(this->CachedClockState).LastCacheTickDeltaCpuCycles64,pFVar12);
      uVar15 = (longlong)ROUND(dVar16 + dVar16 + __real_3fe0000000000000) >> 1;
      if ((param_2->Object == (IQuartzQuantizedCommand *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (**(code **)(param_2->Object->_padding_ + 0x10))(param_2->Object,uVar15 & 0xffffffff);
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (5 < (byte)LogAudioQuartz._0_1_) {
        FQuartzQuantizationBoundary::ToString(param_1,&local_68);
        bVar6 = (int)uVar15 != iVar8;
        if (bVar6) {
          ::FString::PrintfImpl(&local_a8,L"(overridden from %i)");
        }
        pIVar10 = TSharedPtr<Audio::IQuartzQuantizedCommand,1>::operator->(param_2);
        pFVar11 = (FName *)(**(code **)(pIVar10->_padding_ + 0x30))(pIVar10,local_res20);
        ::FName::ToString(pFVar11,&local_78);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if ((bVar6) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      if ((param_2->Object == (IQuartzQuantizedCommand *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      IQuartzQuantizedCommand::OnScheduled
                (param_2->Object,
                 (FQuartzClockTickRate *)
                 &(this->Metronome).CurrentTimeSignature.OptionalPulseOverride.ArrayNum);
      if ((param_2->Object == (IQuartzQuantizedCommand *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      IQuartzQuantizedCommand::Update(param_2->Object,iVar8);
      if (iVar8 == 0) {
        pIVar10 = TSharedPtr<Audio::IQuartzQuantizedCommand,1>::operator->(param_2);
        IQuartzQuantizedCommand::AboutToStart(pIVar10);
      }
      if ((param_2->Object == (IQuartzQuantizedCommand *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      cVar7 = (**(code **)(param_2->Object->_padding_ + 0x18))();
      pIVar10 = param_2->Object;
      pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
      (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      param_2->Object = (IQuartzQuantizedCommand *)0x0;
      if (cVar7 == '\0') {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        iVar9 = *(int *)&(this->PendingCommands).AllocatorInstance.Data;
        piVar1 = (int *)((longlong)&(this->PendingCommands).AllocatorInstance.Data + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)
                                   &(this->ClockAlteringPendingCommands).ArrayNum,piVar1);
        }
        lVar14 = (longlong)iVar9;
        *(int *)&(this->PendingCommands).AllocatorInstance.Data = iVar9 + 1;
        lVar13 = *(longlong *)&(this->ClockAlteringPendingCommands).ArrayNum;
        *(IQuartzQuantizedCommand **)(lVar13 + lVar14 * 0x18) = pIVar10;
        *(TReferenceControllerBase<1> **)(lVar13 + 8 + lVar14 * 0x18) = pTVar2;
        *(int *)(lVar13 + 0x10 + lVar14 * 0x18) = iVar8;
      }
      else {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        iVar9 = *(int *)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data;
        piVar1 = (int *)((longlong)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data + 4)
        ;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)
                                   &(this->PreTickCommands).SharedReferenceCount,piVar1);
        }
        lVar13 = (longlong)iVar9;
        *(int *)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data = iVar9 + 1;
        pTVar3 = (this->PreTickCommands).SharedReferenceCount.ReferenceController;
        *(IQuartzQuantizedCommand **)((longlong)pTVar3 + lVar13 * 0x18) = pIVar10;
        *(TReferenceControllerBase<1> **)((longlong)pTVar3 + lVar13 * 0x18 + 8) = pTVar2;
        *(int *)((longlong)pTVar3 + lVar13 * 0x18 + 0x10) = iVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                ((FQuartzGameThreadSubscriber *)
                 (param_1->GameThreadSubscribers).AllocatorInstance.Data,
                 (param_1->GameThreadSubscribers).ArrayNum);
    }
  }
  pFVar4 = (param_1->GameThreadSubscribers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddToTickDelay @ 146547570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::AddToTickDelay(FQuartzClock *this,int param_1)

{
  this->TickDelayLengthInFrames = this->TickDelayLengthInFrames + param_1;
  return;
}

// CancelQuantizedCommand @ 146549110

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FQuartzClock::CancelQuantizedCommand
          (FQuartzClock *this,TSharedPtr<Audio::IQuartzQuantizedCommand,1> *param_1)

{
  IQuartzQuantizedCommand *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar7;
  TArray<Audio::FQuartzClock::PendingCommand,TSizedDefaultAllocator<32>_> *pTVar8;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> local_28;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> local_18;
  
  if (param_1->Object == (IQuartzQuantizedCommand *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  cVar6 = (**(code **)(param_1->Object->_padding_ + 0x18))();
  pIVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (cVar6 == '\0') {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = &this->PendingCommands;
    pTVar7 = &local_18;
    local_18.Object = pIVar1;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
  }
  else {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = &this->ClockAlteringPendingCommands;
    pTVar7 = &local_28;
    local_28.Object = pIVar1;
    local_28.SharedReferenceCount.ReferenceController = pTVar2;
  }
  bVar4 = CancelQuantizedCommandInternal(this,pTVar7,pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar4;
}

// CancelQuantizedCommandInternal @ 1465491d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FQuartzClock::CancelQuantizedCommandInternal
          (FQuartzClock *this,TSharedPtr<Audio::IQuartzQuantizedCommand,1> *param_1,
          TArray<Audio::FQuartzClock::PendingCommand,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  IQuartzQuantizedCommand *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = param_2->ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 * 0x18;
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      pIVar2 = *(IQuartzQuantizedCommand **)(pFVar1 + lVar8);
      if (pIVar2 == param_1->Object) {
        if ((pIVar2 == (IQuartzQuantizedCommand *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        IQuartzQuantizedCommand::Cancel(*(IQuartzQuantizedCommand **)(pFVar1 + lVar8));
        uVar6 = 0;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        TArray<Audio::FQuartzClock::PendingCommand,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (param_2,uVar7);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return true;
      }
      lVar8 = lVar8 + -0x18;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ChangeTickRate @ 146549350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClock::ChangeTickRate(FQuartzClock *this,FQuartzClockTickRate *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMixerDevice *pFVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  undefined1 local_res8 [8];
  FQuartzClockTickRate local_58;
  
  if ((this->OwningClockManagerPtr == (FQuartzClockManager *)0x0) ||
     (pFVar3 = this->OwningClockManagerPtr->MixerDevice, pFVar3 == (FMixerDevice *)0x0)) {
    dVar6 = (double)HeadlessClockSampleRateCvar;
  }
  else {
    dVar6 = (double)*(int *)&pFVar3->field_0x84;
  }
  FQuartzClockTickRate::SetSampleRate(param_1,dVar6);
  local_58.FramesPerTick = param_1->FramesPerTick;
  local_58.MillisecondsPerTick = param_1->MillisecondsPerTick;
  local_58.SecondsPerTick = param_1->SecondsPerTick;
  local_58.ThirtySecondNotesPerMinute = param_1->ThirtySecondNotesPerMinute;
  local_58.BeatsPerMinute = param_1->BeatsPerMinute;
  local_58.SampleRate = param_1->SampleRate;
  FQuartzMetronome::SetTickRate(&this->Metronome,&local_58,param_2);
  iVar2 = (this->PendingCommands).ArrayNum;
  pFVar5 = (this->PendingCommands).AllocatorInstance.Data;
  dVar6 = param_1->FramesPerTick / (this->Metronome).CurrentTickRate.FramesPerTick;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->PendingCommands).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Audio::FQuartzClock::PendingCommand,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(longlong **)pFVar5 != (longlong *)0x0) {
      cVar4 = (**(code **)(**(longlong **)pFVar5 + 0x20))();
      if (cVar4 == '\0') {
        *(int *)(pFVar5 + 0x10) =
             (int)((double)(*(int *)(pFVar5 + 0x10) - param_2) * dVar6 + (double)param_2);
      }
    }
    pFVar5 = pFVar5 + 0x18;
  }
  iVar2 = (this->ClockAlteringPendingCommands).ArrayNum;
  pFVar5 = (this->ClockAlteringPendingCommands).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->ClockAlteringPendingCommands).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Audio::FQuartzClock::PendingCommand,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(longlong **)pFVar5 != (longlong *)0x0) {
      cVar4 = (**(code **)(**(longlong **)pFVar5 + 0x20))();
      if (cVar4 == '\0') {
        *(int *)(pFVar5 + 0x10) =
             (int)((double)(*(int *)(pFVar5 + 0x10) - param_2) * dVar6 + (double)param_2);
      }
    }
    pFVar5 = pFVar5 + 0x18;
  }
  UpdateCachedState(this);
  return;
}

// ChangeTimeSignature @ 146549500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClock::ChangeTimeSignature(FQuartzClock *this,FQuartzTimeSignature *param_1)

{
  FQuartzTimeSignature::operator=(&(this->Metronome).CurrentTimeSignature,param_1);
  FQuartzMetronome::RecalculateDurations(&this->Metronome);
  UpdateCachedState(this);
  return;
}

// DoesMatchSettings @ 146552b20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FQuartzClock::DoesMatchSettings(FQuartzClock *this,FQuartzClockSettings *param_1)

{
  bool bVar1;
  
  bVar1 = FQuartzTimeSignature::operator==
                    (&(this->Metronome).CurrentTimeSignature,&param_1->TimeSignature);
  return bVar1;
}

// GetBeatProgressPercent @ 146555330

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
Audio::FQuartzClock::GetBeatProgressPercent(FQuartzClock *this,EQuartzCommandQuantization *param_1)

{
  float fVar1;
  float fVar2;
  LARGE_INTEGER local_res8 [4];
  
  fVar1 = (this->CachedClockState).MusicalDurationPhases[*param_1];
  if ((this->CachedClockState).LastCacheTickDeltaCpuCycles64 == 0) {
    return fVar1;
  }
  fVar2 = (this->CachedClockState).MusicalDurationPhaseDeltas[*param_1];
  QueryPerformanceCounter(local_res8);
  return ((float)(local_res8[0].QuadPart - (this->CachedClockState).LastCacheTickCpuCycles64) /
         (float)(this->CachedClockState).LastCacheTickDeltaCpuCycles64) * fVar2 + fVar1;
}

// GetClockManager @ 1465559c0

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzClockManager * __thiscall Audio::FQuartzClock::GetClockManager(FQuartzClock *this)

{
  return this->OwningClockManagerPtr;
}

// GetCommandQueue @ 146555bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1> *
__thiscall
Audio::FQuartzClock::GetCommandQueue
          (FQuartzClock *this,
          TWeakPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1>
          *__return_storage_ptr__)

{
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1> *pTVar1
  ;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->PreTickCommands;
  if (pTVar1->Object == (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) {
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_18 = ___xmm_00000000000000000000000000000010;
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_10.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6 = pTVar4 + 1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TQuartzCommandQueue_VIQuartzClock_Quartz_Audio___PrivateDefs_Quartz_Audio___00_SharedPointerInternals__6B_
      ;
      pTVar4[1]._padding_ = 0;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TWeakPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1>
                    *)(*pcVar2)();
          return pTVar5;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_10.ReferenceController = pTVar4;
      local_18 = pTVar6;
    }
    if (pTVar1 != (TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1>
                   *)&local_18) {
      pTVar1->Object = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)pTVar6;
      local_18 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PreTickCommands).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  __return_storage_ptr__->Object = pTVar1->Object;
  pTVar4 = (this->PreTickCommands).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetCurrentTimestamp @ 146556050

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzTransportTimeStamp * __thiscall
Audio::FQuartzClock::GetCurrentTimestamp
          (FQuartzClock *this,FQuartzTransportTimeStamp *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  float fVar2;
  float fVar3;
  
  lpCriticalSection = &this->CachedClockStateCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->CachedClockState).TimeStamp.Beat;
    fVar2 = (this->CachedClockState).TimeStamp.BeatFraction;
    fVar3 = (this->CachedClockState).TimeStamp.Seconds;
    __return_storage_ptr__->Bars = (this->CachedClockState).TimeStamp.Bars;
    __return_storage_ptr__->Beat = iVar1;
    __return_storage_ptr__->BeatFraction = fVar2;
    __return_storage_ptr__->Seconds = fVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDurationOfQuantizationTypeInSeconds @ 1465575b0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
Audio::FQuartzClock::GetDurationOfQuantizationTypeInSeconds
          (FQuartzClock *this,EQuartzCommandQuantization *param_1,float param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  double dVar2;
  float fVar3;
  
  lpCriticalSection = &this->CachedClockStateCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*param_1 == None) {
    fVar3 = 0.0;
  }
  else {
    dVar2 = FQuartzClockTickRate::GetFramesPerDuration(&(this->CachedClockState).TickRate,*param_1);
    dVar1 = (this->CachedClockState).TickRate.SampleRate;
    fVar3 = __real_bf800000;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      fVar3 = (float)(((double)param_2 * dVar2) / dVar1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return fVar3;
}

// GetEstimatedRunTime @ 146557a70

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall Audio::FQuartzClock::GetEstimatedRunTime(FQuartzClock *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &this->CachedClockStateCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = (this->CachedClockState).RunTimeInSeconds;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetMixerDevice @ 146558ef0

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerDevice * __thiscall Audio::FQuartzClock::GetMixerDevice(FQuartzClock *this)

{
  if (this->OwningClockManagerPtr != (FQuartzClockManager *)0x0) {
    return this->OwningClockManagerPtr->MixerDevice;
  }
  return (FMixerDevice *)0x0;
}

// GetName @ 146558fd0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall Audio::FQuartzClock::GetName(FQuartzClock *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Name;
  return in_RDX;
}

// GetSourceManager @ 14655b3e0

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerSourceManager * __thiscall Audio::FQuartzClock::GetSourceManager(FQuartzClock *this)

{
  FMixerDevice *pFVar1;
  
  if ((this->OwningClockManagerPtr != (FQuartzClockManager *)0x0) &&
     (pFVar1 = this->OwningClockManagerPtr->MixerDevice, pFVar1 != (FMixerDevice *)0x0)) {
    return (pFVar1->SourceManager).Ptr;
  }
  return (FMixerSourceManager *)0x0;
}

// GetTickRate @ 14655b860

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzClockTickRate * __thiscall
Audio::FQuartzClock::GetTickRate(FQuartzClock *this,FQuartzClockTickRate *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  
  lpCriticalSection = &this->CachedClockStateCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    dVar9 = (this->CachedClockState).TickRate.MillisecondsPerTick;
    uVar1 = *(undefined4 *)&(this->CachedClockState).TickRate.SecondsPerTick;
    uVar2 = *(undefined4 *)((longlong)&(this->CachedClockState).TickRate.SecondsPerTick + 4);
    uVar3 = *(undefined4 *)&(this->CachedClockState).TickRate.ThirtySecondNotesPerMinute;
    uVar4 = *(undefined4 *)
             ((longlong)&(this->CachedClockState).TickRate.ThirtySecondNotesPerMinute + 4);
    __return_storage_ptr__->FramesPerTick = (this->CachedClockState).TickRate.FramesPerTick;
    __return_storage_ptr__->MillisecondsPerTick = dVar9;
    uVar5 = *(undefined4 *)&(this->CachedClockState).TickRate.BeatsPerMinute;
    uVar6 = *(undefined4 *)((longlong)&(this->CachedClockState).TickRate.BeatsPerMinute + 4);
    uVar7 = *(undefined4 *)&(this->CachedClockState).TickRate.SampleRate;
    uVar8 = *(undefined4 *)((longlong)&(this->CachedClockState).TickRate.SampleRate + 4);
    *(undefined4 *)&__return_storage_ptr__->SecondsPerTick = uVar1;
    *(undefined4 *)((longlong)&__return_storage_ptr__->SecondsPerTick + 4) = uVar2;
    *(undefined4 *)&__return_storage_ptr__->ThirtySecondNotesPerMinute = uVar3;
    *(undefined4 *)((longlong)&__return_storage_ptr__->ThirtySecondNotesPerMinute + 4) = uVar4;
    *(undefined4 *)&__return_storage_ptr__->BeatsPerMinute = uVar5;
    *(undefined4 *)((longlong)&__return_storage_ptr__->BeatsPerMinute + 4) = uVar6;
    *(undefined4 *)&__return_storage_ptr__->SampleRate = uVar7;
    *(undefined4 *)((longlong)&__return_storage_ptr__->SampleRate + 4) = uVar8;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HasPendingEvents @ 14655c540

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuartzClock::HasPendingEvents(FQuartzClock *this)

{
  return 0 < (this->PendingCommands).ArrayNum + (this->ClockAlteringPendingCommands).ArrayNum;
}

// IgnoresFlush @ 14655c5a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuartzClock::IgnoresFlush(FQuartzClock *this)

{
  return this->bIgnoresFlush;
}

// IsRunning @ 1465617f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuartzClock::IsRunning(FQuartzClock *this)

{
  return this->bIsRunning != (FThreadSafeBool)0x0;
}

// LowResolutionTick @ 146562040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::LowResolutionTick(FQuartzClock *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FString local_28 [2];
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId282,"QuartzClock::Tick_LowRes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClock.cpp"
               ,0x11a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId282);
  }
  if (5 < (byte)LogAudioQuartz._0_1_) {
    ::FName::ToString(&this->Name,local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  if (((this->PreTickCommands).Object == (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>::PumpCommandQueue
            ((this->PreTickCommands).Object,(IListenerBase *)this);
  Tick(this,(int)((double)param_1 * (this->Metronome).CurrentTickRate.SampleRate));
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// NumPendingEvents @ 146562c60

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Audio::FQuartzClock::NumPendingEvents(FQuartzClock *this)

{
  return (this->PendingCommands).ArrayNum + (this->ClockAlteringPendingCommands).ArrayNum;
}

// Pause @ 146566280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::Pause(FQuartzClock *this)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((this->PendingCommands).ArrayNum != 0) {
    plVar6 = *(longlong **)&(this->ClockAlteringPendingCommands).ArrayNum;
    iVar3 = *(int *)&(this->PendingCommands).AllocatorInstance.Data;
    plVar1 = plVar6 + (longlong)iVar3 * 3;
    while( true ) {
      if (*(int *)&(this->PendingCommands).AllocatorInstance.Data != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Audio::FQuartzClock::PendingCommand,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar6 == plVar1) break;
      if ((*plVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      IQuartzQuantizedCommand::OnClockPaused((IQuartzQuantizedCommand *)*plVar6);
      plVar6 = plVar6 + 3;
    }
    iVar3 = *(int *)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data;
    pTVar7 = (this->PreTickCommands).SharedReferenceCount.ReferenceController;
    pTVar2 = (TReferenceControllerBase<1> *)((longlong)pTVar7 + (longlong)iVar3 * 0x18);
    while( true ) {
      if (*(int *)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Audio::FQuartzClock::PendingCommand,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pTVar7 == pTVar2) break;
      if ((pTVar7->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      IQuartzQuantizedCommand::OnClockPaused((IQuartzQuantizedCommand *)pTVar7->_padding_);
      pTVar7 = (TReferenceControllerBase<1> *)&pTVar7[1].SharedReferenceCount;
    }
  }
  LOCK();
  (this->PendingCommands).ArrayNum = 0;
  UNLOCK();
  return;
}

// ResetTransport @ 14656fd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::ResetTransport(FQuartzClock *this,int param_1)

{
  FFramesInTimeValue *_Dst;
  
  if (param_1 != 0) {
    FQuartzMetronome::Tick(&this->Metronome,param_1,0);
  }
  FQuartzTransportTimeStamp::Reset(&(this->Metronome).CurrentTimeStamp);
  _Dst = &(this->Metronome).FramesLeftInMusicalDuration;
  if (_Dst <= &(this->Metronome).PulseDurations) {
    memset(_Dst,0,0x90);
  }
  (this->Metronome).PulseDurationIndex = -1;
  (this->Metronome).TimeSinceStart = 0.0;
  return;
}

// Restart @ 1465702e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::Restart(FQuartzClock *this,bool param_1)

{
  LOCK();
  (this->PendingCommands).ArrayNum = param_1 ^ 1;
  UNLOCK();
  this->bIsRunning = (FThreadSafeBool)0x0;
  return;
}

// Resume @ 146570300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::Resume(FQuartzClock *this)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((this->PendingCommands).ArrayNum == 0) {
    plVar6 = *(longlong **)&(this->ClockAlteringPendingCommands).ArrayNum;
    iVar3 = *(int *)&(this->PendingCommands).AllocatorInstance.Data;
    plVar1 = plVar6 + (longlong)iVar3 * 3;
    while( true ) {
      if (*(int *)&(this->PendingCommands).AllocatorInstance.Data != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Audio::FQuartzClock::PendingCommand,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar6 == plVar1) break;
      if ((*plVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      IQuartzQuantizedCommand::OnClockStarted((IQuartzQuantizedCommand *)*plVar6);
      plVar6 = plVar6 + 3;
    }
    iVar3 = *(int *)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data;
    pTVar7 = (this->PreTickCommands).SharedReferenceCount.ReferenceController;
    pTVar2 = (TReferenceControllerBase<1> *)((longlong)pTVar7 + (longlong)iVar3 * 0x18);
    while( true ) {
      if (*(int *)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Audio::FQuartzClock::PendingCommand,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pTVar7 == pTVar2) break;
      if ((pTVar7->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      IQuartzQuantizedCommand::OnClockStarted((IQuartzQuantizedCommand *)pTVar7->_padding_);
      pTVar7 = (TReferenceControllerBase<1> *)&pTVar7[1].SharedReferenceCount;
    }
  }
  LOCK();
  (this->PendingCommands).ArrayNum = 1;
  UNLOCK();
  return;
}

// SetSampleRate @ 146574390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::SetSampleRate(FQuartzClock *this,float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1 - (this->Metronome).CurrentTickRate.SampleRate;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    FQuartzClockTickRate::SetSampleRate(&(this->Metronome).CurrentTickRate,(double)param_1);
    FQuartzMetronome::RecalculateDurations(&this->Metronome);
    UpdateCachedState(this);
  }
  return;
}

// SetTickDelay @ 146574ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::SetTickDelay(FQuartzClock *this,int param_1)

{
  this->TickDelayLengthInFrames = param_1;
  return;
}

// Shutdown @ 146576500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::Shutdown(FQuartzClock *this)

{
  int *piVar1;
  TArray<Audio::FQuartzClock::PendingCommand,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Audio::FQuartzClock::PendingCommand,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  PendingCommand *pPVar6;
  code *pcVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  pTVar2 = &this->PendingCommands;
  iVar5 = (this->PendingCommands).ArrayNum;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  pFVar4 = pFVar9 + (longlong)iVar5 * 0x18;
  while( true ) {
    if ((this->PendingCommands).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FQuartzClock::PendingCommand,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar4) break;
    if (*(longlong *)pFVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    IQuartzQuantizedCommand::Cancel(*(IQuartzQuantizedCommand **)pFVar9);
    pFVar9 = pFVar9 + 0x18;
  }
  pTVar3 = &this->ClockAlteringPendingCommands;
  iVar5 = (this->ClockAlteringPendingCommands).ArrayNum;
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  pFVar4 = pFVar9 + (longlong)iVar5 * 0x18;
  while( true ) {
    if ((this->ClockAlteringPendingCommands).ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Audio::FQuartzClock::PendingCommand,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar4) break;
    if (*(longlong *)pFVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    IQuartzQuantizedCommand::Cancel(*(IQuartzQuantizedCommand **)pFVar9);
    pFVar9 = pFVar9 + 0x18;
  }
  piVar1 = &(this->PendingCommands).ArrayMax;
  pPVar6 = (PendingCommand *)(pTVar2->AllocatorInstance).Data;
  iVar5 = (this->PendingCommands).ArrayNum;
  if ((this->PendingCommands).ArrayMax < 0) {
    DestructItems<Audio::FQuartzClock::PendingCommand,int>(pPVar6,iVar5);
    (this->PendingCommands).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Audio::FQuartzClock::PendingCommand,int>(pPVar6,iVar5);
    (this->PendingCommands).ArrayNum = 0;
  }
  piVar1 = &(this->ClockAlteringPendingCommands).ArrayMax;
  pPVar6 = (PendingCommand *)(pTVar3->AllocatorInstance).Data;
  iVar5 = (this->ClockAlteringPendingCommands).ArrayNum;
  if ((this->ClockAlteringPendingCommands).ArrayMax < 0) {
    DestructItems<Audio::FQuartzClock::PendingCommand,int>(pPVar6,iVar5);
    (this->ClockAlteringPendingCommands).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Audio::FQuartzClock::PendingCommand,int>(pPVar6,iVar5);
    (this->ClockAlteringPendingCommands).ArrayNum = 0;
  }
  return;
}

// Stop @ 146577ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::Stop(FQuartzClock *this,bool param_1)

{
  int *piVar1;
  double *_Dst;
  int *piVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSharedReferencer<1> *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  LOCK();
  (this->PendingCommands).ArrayNum = 0;
  UNLOCK();
  FQuartzTransportTimeStamp::Reset
            ((FQuartzTransportTimeStamp *)((longlong)&(this->Metronome).LastTickCpuCycles64 + 4));
  _Dst = (this->Metronome).MusicalDurationsInFrames.FramesInTimeValueInternal + 0x11;
  if (_Dst <= (this->Metronome).FramesLeftInMusicalDuration.FramesInTimeValueInternal + 0x11) {
    memset(_Dst,0,0x90);
  }
  (this->Metronome).PulseDurationIndex = 0;
  (this->Metronome).LastFramesOfLatency = 0;
  (this->Metronome).PulseDurations.ArrayNum = -1;
  this->bIsRunning = (FThreadSafeBool)0x0;
  if (param_1) {
    piVar2 = &(this->ClockAlteringPendingCommands).ArrayNum;
    iVar5 = *(int *)&(this->PendingCommands).AllocatorInstance.Data;
    plVar8 = *(longlong **)piVar2;
    plVar3 = plVar8 + (longlong)iVar5 * 3;
    while( true ) {
      if (*(int *)&(this->PendingCommands).AllocatorInstance.Data != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Audio::FQuartzClock::PendingCommand,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (plVar8 == plVar3) break;
      if ((*plVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      IQuartzQuantizedCommand::Cancel((IQuartzQuantizedCommand *)*plVar8);
      plVar8 = plVar8 + 3;
    }
    pFVar10 = &(this->PreTickCommands).SharedReferenceCount;
    iVar5 = *(int *)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data;
    pTVar9 = pFVar10->ReferenceController;
    pTVar4 = (TReferenceControllerBase<1> *)((longlong)pTVar9 + (longlong)iVar5 * 0x18);
    while( true ) {
      if (*(int *)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Audio::FQuartzClock::PendingCommand,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pTVar9 == pTVar4) break;
      if ((pTVar9->_padding_ == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      IQuartzQuantizedCommand::Cancel((IQuartzQuantizedCommand *)pTVar9->_padding_);
      pTVar9 = (TReferenceControllerBase<1> *)&pTVar9[1].SharedReferenceCount;
    }
    piVar1 = (int *)((longlong)&(this->PendingCommands).AllocatorInstance.Data + 4);
    iVar5 = *(int *)&(this->PendingCommands).AllocatorInstance.Data;
    if (*piVar1 < 0) {
      DestructItems<Audio::FQuartzClock::PendingCommand,int>(*(PendingCommand **)piVar2,iVar5);
      *(undefined4 *)&(this->PendingCommands).AllocatorInstance.Data = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)piVar2,0,piVar1);
      }
    }
    else {
      DestructItems<Audio::FQuartzClock::PendingCommand,int>(*(PendingCommand **)piVar2,iVar5);
      *(undefined4 *)&(this->PendingCommands).AllocatorInstance.Data = 0;
    }
    piVar2 = (int *)((longlong)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data + 4);
    iVar5 = *(int *)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data;
    if (-1 < *piVar2) {
      DestructItems<Audio::FQuartzClock::PendingCommand,int>
                ((PendingCommand *)pFVar10->ReferenceController,iVar5);
      *(undefined4 *)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data = 0;
      return;
    }
    DestructItems<Audio::FQuartzClock::PendingCommand,int>
              ((PendingCommand *)pFVar10->ReferenceController,iVar5);
    *(undefined4 *)&(this->ClockAlteringPendingCommands).AllocatorInstance.Data = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pFVar10,0,piVar2);
    }
  }
  return;
}

// SubscribeToAllTimeDivisions @ 146578350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClock::SubscribeToAllTimeDivisions
          (FQuartzClock *this,FQuartzGameThreadSubscriber *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  *this_00;
  uint uVar2;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  local_18;
  
  local_18.Object = (param_1->Queue).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->Queue).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
             *)&(this->Metronome).CurrentTickRate.SampleRate;
  piVar1 = &(this->Metronome).MetronomeSubscriptionMatrix[0x11].ArrayNum;
  if (this_00 !=
      (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
       *)piVar1) {
    uVar2 = 1;
    do {
      TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
      ::
      AddUniqueImpl<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>_const_&>
                (this_00,&local_18);
      this_00 = this_00 + 1;
      *(uint *)&(this->Metronome).LastTickCpuCycles64 =
           (uint)(this->Metronome).LastTickCpuCycles64 | uVar2;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    } while (this_00 !=
             (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
              *)piVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Queue).SharedReferenceCount.ReferenceController);
  return;
}

// SubscribeToTimeDivision @ 146578a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClock::SubscribeToTimeDivision
          (FQuartzClock *this,FQuartzGameThreadSubscriber *param_1,
          EQuartzCommandQuantization param_2)

{
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  local_18;
  
  local_18.Object = (param_1->Queue).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->Queue).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  ::
  AddUniqueImpl<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>_const_&>
            ((TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
              *)&(this->Metronome).MetronomeSubscriptionMatrix[(ulonglong)param_2 - 1].ArrayNum,
             &local_18);
  *(uint *)&(this->Metronome).LastTickCpuCycles64 =
       (uint)(this->Metronome).LastTickCpuCycles64 | 1 << (param_2 & 0x1f);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Queue).SharedReferenceCount.ReferenceController);
  return;
}

// Tick @ 146579050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::Tick(FQuartzClock *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  FString local_38;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId290,"QuartzClock::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClock.cpp"
               ,0x122);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId290);
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId291,"QuartzClock::GameThreadCommands",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClock.cpp"
               ,0x123);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId291);
  }
  if (5 < (byte)LogAudioQuartz._0_1_) {
    ::FName::ToString(&this->Name,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (((this->PreTickCommands).Object == (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>::PumpCommandQueue
            ((this->PreTickCommands).Object,(IListenerBase *)this);
  if (this->bIsRunning != (FThreadSafeBool)0x0) {
    iVar1 = this->TickDelayLengthInFrames;
    if (iVar1 < param_1) {
      iVar4 = (int)((double)(this->ThreadLatencyInMilliseconds * __real_3a83126f) *
                   (this->Metronome).CurrentTickRate.SampleRate);
      TickInternal(this,param_1 - iVar1,&this->ClockAlteringPendingCommands,iVar4,iVar1);
      TickInternal(this,param_1 - iVar1,&this->PendingCommands,iVar4,iVar1);
      FQuartzMetronome::Tick(&this->Metronome,param_1 - this->TickDelayLengthInFrames,iVar4);
      this->TickDelayLengthInFrames = 0;
      UpdateCachedState(this);
    }
    else {
      this->TickDelayLengthInFrames = iVar1 - param_1;
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// TickInternal @ 146579dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClock::TickInternal
          (FQuartzClock *this,int param_1,
          TArray<Audio::FQuartzClock::PendingCommand,TSizedDefaultAllocator<32>_> *param_2,
          int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_48 [8];
  undefined8 local_40;
  FSharedReferencer<1> aFStack_38 [2];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId338,"QuartzClock::TickInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClock.cpp"
               ,0x152);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId338);
  }
  iVar2 = param_2->ArrayNum;
  bVar5 = false;
  pFVar9 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_48[0] = 0;
      `TCheckedPointerIterator<Audio::FQuartzClock::PendingCommand,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_48);
    }
    if (pFVar9 == pFVar1) break;
    if (*(int *)(pFVar9 + 0x10) < param_3) {
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      IQuartzQuantizedCommand::AboutToStart(*(IQuartzQuantizedCommand **)pFVar9);
    }
    if (*(int *)(pFVar9 + 0x10) < param_1) {
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      IQuartzQuantizedCommand::OnFinalCallback
                (*(IQuartzQuantizedCommand **)pFVar9,*(int *)(pFVar9 + 0x10) + param_4);
      local_40 = 0;
      aFStack_38[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pFVar9 != (FScriptContainerElement *)&local_40) {
        *(longlong *)pFVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar9 + 8),aFStack_38);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (aFStack_38[0].ReferenceController);
      pFVar9 = pFVar9 + 0x18;
      bVar5 = true;
    }
    else {
      *(int *)(pFVar9 + 0x10) = *(int *)(pFVar9 + 0x10) - param_1;
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      IQuartzQuantizedCommand::Update(*(IQuartzQuantizedCommand **)pFVar9,*(int *)(pFVar9 + 0x10));
      pFVar9 = pFVar9 + 0x18;
    }
  }
  if ((bVar5) && (uVar8 = param_2->ArrayNum - 1, -1 < (int)uVar8)) {
    lVar7 = (longlong)(int)uVar8 * 0x18;
    do {
      uVar6 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((param_2->AllocatorInstance).Data + lVar7) == 0) {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<Audio::FQuartzClock::PendingCommand,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (param_2,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
      }
      lVar7 = lVar7 + -0x18;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UnsubscribeFromAllTimeDivisions @ 14657ad20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClock::UnsubscribeFromAllTimeDivisions
          (FQuartzClock *this,FQuartzGameThreadSubscriber *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  *this_00;
  
  pTVar1 = (param_1->Queue).SharedReferenceCount.ReferenceController;
  pTVar2 = (param_1->Queue).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
             *)&(this->Metronome).CurrentTickRate.SampleRate;
  uVar9 = 0;
  do {
    if (this_00 ==
        (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
         *)&(this->Metronome).MetronomeSubscriptionMatrix[0x11].ArrayNum) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->Queue).SharedReferenceCount.ReferenceController);
      return;
    }
    pFVar3 = (this_00->AllocatorInstance).Data;
    for (pFVar8 = pFVar3; pFVar8 != pFVar3 + (longlong)this_00->ArrayNum * 0x10;
        pFVar8 = pFVar8 + 0x10) {
      if (*(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
            **)pFVar8 == pTVar2) {
        uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar3 >> 4);
        if (uVar7 != 0xffffffff) {
          uVar6 = 0;
          if ((int)(uVar7 + 1) <= this_00->ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(this_00,uVar7,1);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this_00->AllocatorInstance,this_00->ArrayNum,&this_00->ArrayMax);
        }
        break;
      }
    }
    if (this_00->ArrayNum == 0) {
      *(uint *)&(this->Metronome).LastTickCpuCycles64 =
           (uint)(this->Metronome).LastTickCpuCycles64 & ~(1 << (uVar9 & 0x1f));
    }
    uVar9 = uVar9 + 1;
    this_00 = this_00 + 1;
  } while( true );
}

// UnsubscribeFromTimeDivision @ 14657b600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::FQuartzClock::UnsubscribeFromTimeDivision
          (FQuartzClock *this,FQuartzGameThreadSubscriber *param_1,
          EQuartzCommandQuantization param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  local_18;
  
  pTVar1 = (param_1->Queue).SharedReferenceCount.ReferenceController;
  local_18.Object = (param_1->Queue).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
  ::RemoveSingleSwap((TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
                      *)&(this->Metronome).MetronomeSubscriptionMatrix[(ulonglong)param_2 - 1].
                         ArrayNum,&local_18,Default);
  if (*(int *)&(this->Metronome).MetronomeSubscriptionMatrix[param_2].AllocatorInstance.Data == 0) {
    *(uint *)&(this->Metronome).LastTickCpuCycles64 =
         (uint)(this->Metronome).LastTickCpuCycles64 & ~(1 << (param_2 & 0x1f));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Queue).SharedReferenceCount.ReferenceController);
  return;
}

// UpdateCachedState @ 14657bc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClock::UpdateCachedState(FQuartzClock *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float *pfVar1;
  double dVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  uint uVar13;
  longlong lVar14;
  float *pfVar15;
  float fVar16;
  
  lpCriticalSection = &this->CachedClockStateCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar3 = (this->CachedClockState).LastCacheTickCpuCycles64;
    dVar2 = (this->Metronome).CurrentTickRate.MillisecondsPerTick;
    uVar4 = (this->Metronome).LastTickCpuCycles64;
    pfVar1 = (this->CachedClockState).MusicalDurationPhases;
    dVar5 = (this->Metronome).CurrentTickRate.SecondsPerTick;
    dVar6 = (this->Metronome).CurrentTickRate.ThirtySecondNotesPerMinute;
    (this->CachedClockState).TickRate.FramesPerTick =
         (this->Metronome).CurrentTickRate.FramesPerTick;
    (this->CachedClockState).TickRate.MillisecondsPerTick = dVar2;
    dVar7 = (this->Metronome).CurrentTickRate.BeatsPerMinute;
    dVar8 = (this->Metronome).CurrentTickRate.SampleRate;
    (this->CachedClockState).TickRate.SecondsPerTick = dVar5;
    (this->CachedClockState).TickRate.ThirtySecondNotesPerMinute = dVar6;
    dVar2 = (this->Metronome).TimeSinceStart;
    (this->CachedClockState).TickRate.BeatsPerMinute = dVar7;
    (this->CachedClockState).TickRate.SampleRate = dVar8;
    iVar10 = (this->Metronome).CurrentTimeStamp.Bars;
    iVar11 = (this->Metronome).CurrentTimeStamp.Beat;
    fVar12 = (this->Metronome).CurrentTimeStamp.BeatFraction;
    fVar16 = (this->Metronome).CurrentTimeStamp.Seconds;
    (this->CachedClockState).LastCacheTickCpuCycles64 = uVar4;
    (this->CachedClockState).LastCacheTickDeltaCpuCycles64 = uVar4 - uVar3;
    (this->CachedClockState).TimeStamp.Bars = iVar10;
    (this->CachedClockState).TimeStamp.Beat = iVar11;
    (this->CachedClockState).TimeStamp.BeatFraction = fVar12;
    (this->CachedClockState).TimeStamp.Seconds = fVar16;
    (this->CachedClockState).RunTimeInSeconds = (float)dVar2;
    pfVar15 = (this->CachedClockState).MusicalDurationPhaseDeltas;
    uVar9 = *(undefined8 *)((this->CachedClockState).MusicalDurationPhases + 2);
    *(undefined8 *)pfVar15 = *(undefined8 *)pfVar1;
    *(undefined8 *)((this->CachedClockState).MusicalDurationPhaseDeltas + 2) = uVar9;
    uVar9 = *(undefined8 *)((this->CachedClockState).MusicalDurationPhases + 6);
    *(undefined8 *)((this->CachedClockState).MusicalDurationPhaseDeltas + 4) =
         *(undefined8 *)((this->CachedClockState).MusicalDurationPhases + 4);
    *(undefined8 *)((this->CachedClockState).MusicalDurationPhaseDeltas + 6) = uVar9;
    uVar9 = *(undefined8 *)((this->CachedClockState).MusicalDurationPhases + 10);
    *(undefined8 *)((this->CachedClockState).MusicalDurationPhaseDeltas + 8) =
         *(undefined8 *)((this->CachedClockState).MusicalDurationPhases + 8);
    *(undefined8 *)((this->CachedClockState).MusicalDurationPhaseDeltas + 10) = uVar9;
    uVar9 = *(undefined8 *)((this->CachedClockState).MusicalDurationPhases + 0xe);
    *(undefined8 *)((this->CachedClockState).MusicalDurationPhaseDeltas + 0xc) =
         *(undefined8 *)((this->CachedClockState).MusicalDurationPhases + 0xc);
    *(undefined8 *)((this->CachedClockState).MusicalDurationPhaseDeltas + 0xe) = uVar9;
    *(undefined8 *)((this->CachedClockState).MusicalDurationPhaseDeltas + 0x10) =
         *(undefined8 *)((this->CachedClockState).MusicalDurationPhases + 0x10);
    FQuartzMetronome::CalculateDurationPhases(&this->Metronome,(float (*) [18])pfVar1);
    uVar13 = __xmm_80000000800000008000000080000000;
    fVar12 = __real_3f800000;
    lVar14 = 0x12;
    do {
      fVar16 = pfVar15[-0x12] - *pfVar15;
      if (0.0 <= fVar16) {
        if (fVar12 < fVar16) {
          fVar16 = FGenericPlatformMath::Fmod(fVar16 - fVar12,fVar12);
          if (fVar16 == 0.0) {
            fVar16 = fVar12;
          }
        }
      }
      else {
        fVar16 = FGenericPlatformMath::Fmod((float)((uint)fVar16 ^ uVar13),fVar12);
        if (fVar16 == 0.0) {
          fVar16 = 0.0;
        }
        else {
          fVar16 = fVar12 - fVar16;
        }
      }
      *pfVar15 = fVar16;
      pfVar15 = pfVar15 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
                    /* WARNING: Could not recover jumptable at 0x00014657bd99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

