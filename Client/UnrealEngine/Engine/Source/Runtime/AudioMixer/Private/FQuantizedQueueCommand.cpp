// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 8

// GetCommandName @ 146555b90

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall Audio::FQuantizedQueueCommand::GetCommandName(FQuantizedQueueCommand *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = QueueCommandName;
  return in_RDX;
}

// GetCommandType @ 146555d60

/* WARNING: Enum "Type": Some values do not have unique names */

EQuartzCommandType __thiscall
Audio::FQuantizedQueueCommand::GetCommandType(FQuantizedQueueCommand *this)

{
  return QueueSoundToPlay;
}

// GetDeepCopyOfDerivedObject @ 146556590

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::IQuartzQuantizedCommand,1> * __thiscall
Audio::FQuantizedQueueCommand::GetDeepCopyOfDerivedObject
          (FQuantizedQueueCommand *this,
          TSharedPtr<Audio::IQuartzQuantizedCommand,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FQuartzGameThreadSubscriber *pFVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  
  pTVar9 = ::operator_new(200);
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IQuartzQuantizedCommand *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFQuantizedQueueCommand_Audio___00_SharedPointerInternals__6B_
    ;
    uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar5 = this->_padding_;
    pTVar9[1].SharedReferenceCount = (atomic<int>)*(undefined4 *)&this->_padding_;
    pTVar9[1].WeakReferenceCount = (atomic<int>)uVar6;
    pTVar9[2]._padding_ = lVar5;
    uVar6 = *(undefined4 *)&this->_padding_;
    uVar7 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar5 = this->_padding_;
    pTVar9[1]._padding_ = (longlong)&___7IQuartzQuantizedCommand_Audio__6B_;
    piVar1 = (int *)((longlong)&pTVar9[4]._padding_ + 4);
    pTVar9[2].SharedReferenceCount = (atomic<int>)uVar6;
    pTVar9[2].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar9[3]._padding_ = lVar5;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
    iVar2 = (int)this->_padding_;
    pFVar3 = (FQuartzGameThreadSubscriber *)this->_padding_;
    *(int *)&pTVar9[4]._padding_ = iVar2;
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar2,0,(ForAnyElementType *)&pTVar9[3].SharedReferenceCount,iVar2,piVar1);
      ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
                (*(void **)&pTVar9[3].SharedReferenceCount,pFVar3,iVar2);
    }
    pTVar9[4].SharedReferenceCount = *(atomic<int> *)&this->_padding_;
    pTVar9[1]._padding_ = (longlong)&___7FQuantizedQueueCommand_Audio__6B_;
    pTVar9[5]._padding_ = (longlong)(this->OwningClockPtr).Object;
    pTVar11 = (this->OwningClockPtr).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&pTVar9[5].SharedReferenceCount = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    FAudioComponentCommandInfo::FAudioComponentCommandInfo
              ((FAudioComponentCommandInfo *)(pTVar9 + 6),&this->AudioComponentData);
    if ((IQuartzQuantizedCommand *)(pTVar9 + 1) == (IQuartzQuantizedCommand *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)(*pcVar4)();
        return pTVar10;
      }
    }
    __return_storage_ptr__->Object = (IQuartzQuantizedCommand *)(pTVar9 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    pTVar11 = pTVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// OnFinalCallbackCustom @ 146563600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedQueueCommand::OnFinalCallbackCustom(FQuantizedQueueCommand *this,int param_1)

{
  FQuartzClock *pFVar1;
  FName FVar2;
  FQuartzQueueCommandData local_98;
  
  pFVar1 = (this->OwningClockPtr).Object;
  if (pFVar1 != (FQuartzClock *)0x0) {
    FVar2 = pFVar1->Name;
    FQuartzCrossThreadMessage::FQuartzCrossThreadMessage
              ((FQuartzCrossThreadMessage *)&local_98,true);
    FAudioComponentCommandInfo::FAudioComponentCommandInfo
              (&local_98.AudioComponentCommandInfo,&this->AudioComponentData);
    local_98.ClockName = FVar2;
    FQuartzGameThreadSubscriber::PushEvent(&(this->AudioComponentData).Subscriber,&local_98);
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               local_98.AudioComponentCommandInfo.AnticipatoryBoundary.GameThreadSubscribers.
               AllocatorInstance.Data,
               local_98.AudioComponentCommandInfo.AnticipatoryBoundary.GameThreadSubscribers.
               ArrayNum);
    if ((FQuartzGameThreadSubscriber *)
        local_98.AudioComponentCommandInfo.AnticipatoryBoundary.GameThreadSubscribers.
        AllocatorInstance.Data != (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_98.AudioComponentCommandInfo.AnticipatoryBoundary.GameThreadSubscribers.
                    AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.AudioComponentCommandInfo.Subscriber.Queue.SharedReferenceCount.
               ReferenceController);
  }
  return;
}

// OnQueuedCustom @ 146565c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedQueueCommand::OnQueuedCustom
          (FQuantizedQueueCommand *this,FQuartzQuantizedCommandInitInfo *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FQuartzClock *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->OwningClockPointer).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->OwningClockPointer).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->OwningClockPtr).SharedReferenceCount.ReferenceController;
  (this->OwningClockPtr).Object = pFVar2;
  (this->OwningClockPtr).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// OverrideFramesUntilExec @ 146566150

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Audio::FQuantizedQueueCommand::OverrideFramesUntilExec(FQuantizedQueueCommand *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FQuartzClock *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  FQuartzClockTickRate local_38;
  
  if ((this->OwningClockPtr).Object == (FQuartzClock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (this->OwningClockPtr).Object;
  lpCriticalSection = &pFVar1->CachedClockStateCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_38.FramesPerTick = (pFVar1->CachedClockState).TickRate.FramesPerTick;
    local_38.MillisecondsPerTick = (pFVar1->CachedClockState).TickRate.MillisecondsPerTick;
    local_38.SecondsPerTick._0_4_ =
         *(undefined4 *)&(pFVar1->CachedClockState).TickRate.SecondsPerTick;
    local_38.SecondsPerTick._4_4_ =
         *(undefined4 *)((longlong)&(pFVar1->CachedClockState).TickRate.SecondsPerTick + 4);
    local_38.ThirtySecondNotesPerMinute._0_4_ =
         *(undefined4 *)&(pFVar1->CachedClockState).TickRate.ThirtySecondNotesPerMinute;
    local_38.ThirtySecondNotesPerMinute._4_4_ =
         *(undefined4 *)
          ((longlong)&(pFVar1->CachedClockState).TickRate.ThirtySecondNotesPerMinute + 4);
    local_38.BeatsPerMinute._0_4_ =
         *(undefined4 *)&(pFVar1->CachedClockState).TickRate.BeatsPerMinute;
    local_38.BeatsPerMinute._4_4_ =
         *(undefined4 *)((longlong)&(pFVar1->CachedClockState).TickRate.BeatsPerMinute + 4);
    local_38.SampleRate._0_4_ = *(undefined4 *)&(pFVar1->CachedClockState).TickRate.SampleRate;
    local_38.SampleRate._4_4_ =
         *(undefined4 *)((longlong)&(pFVar1->CachedClockState).TickRate.SampleRate + 4);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    dVar3 = FQuartzClockTickRate::GetFramesPerDuration
                      (&local_38,(this->AudioComponentData).AnticipatoryBoundary.Quantization);
    iVar5 = param_1 - (int)dVar3;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RequiresAudioDevice @ 14656f0c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuantizedQueueCommand::RequiresAudioDevice(FQuantizedQueueCommand *this)

{
  return true;
}

// SetQueueCommand @ 1465742d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedQueueCommand::SetQueueCommand
          (FQuantizedQueueCommand *this,FAudioComponentCommandInfo *param_1)

{
  TOptional<TTuple<EQuartzCommandQuantization,double>_> *pTVar1;
  TOptional<TTuple<EQuartzCommandQuantization,double>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *pTVar4;
  undefined8 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  if (param_1 != &this->AudioComponentData) {
    if ((param_1->Subscriber).Offset.OffsetInMilliseconds.bIsSet == false) {
      if ((this->AudioComponentData).Subscriber.Offset.OffsetInMilliseconds.bIsSet != false) {
        (this->AudioComponentData).Subscriber.Offset.OffsetInMilliseconds.bIsSet = false;
      }
    }
    else {
      (this->AudioComponentData).Subscriber.Offset.OffsetInMilliseconds.TypedValue =
           (param_1->Subscriber).Offset.OffsetInMilliseconds.TypedValue;
      (this->AudioComponentData).Subscriber.Offset.OffsetInMilliseconds.bIsSet = true;
    }
  }
  pTVar1 = &(param_1->Subscriber).Offset.OffsetAsDuration;
  pTVar2 = &(this->AudioComponentData).Subscriber.Offset.OffsetAsDuration;
  if (pTVar1 != pTVar2) {
    if ((param_1->Subscriber).Offset.OffsetAsDuration.bIsSet == false) {
      if ((this->AudioComponentData).Subscriber.Offset.OffsetAsDuration.bIsSet != false) {
        (this->AudioComponentData).Subscriber.Offset.OffsetAsDuration.bIsSet = false;
      }
    }
    else {
      uVar5 = *(undefined8 *)&(param_1->Subscriber).Offset.OffsetAsDuration.TypedValue.field_0x8;
      *(undefined8 *)&pTVar2->TypedValue = *(undefined8 *)&pTVar1->TypedValue;
      *(undefined8 *)
       &(this->AudioComponentData).Subscriber.Offset.OffsetAsDuration.TypedValue.field_0x8 = uVar5;
      (this->AudioComponentData).Subscriber.Offset.OffsetAsDuration.bIsSet = true;
    }
  }
  pTVar3 = (param_1->Subscriber).Queue.SharedReferenceCount.ReferenceController;
  pTVar4 = (param_1->Subscriber).Queue.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->AudioComponentData).Subscriber.Queue.SharedReferenceCount.ReferenceController;
  (this->AudioComponentData).Subscriber.Queue.Object = pTVar4;
  (this->AudioComponentData).Subscriber.Queue.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  (this->AudioComponentData).Subscriber.bOffsetConvertedToFrames =
       (param_1->Subscriber).bOffsetConvertedToFrames;
  (this->AudioComponentData).Subscriber.bHasBeenNotifiedOfAboutToStart =
       (param_1->Subscriber).bHasBeenNotifiedOfAboutToStart;
  (this->AudioComponentData).Subscriber.OffsetInAudioFrames =
       (param_1->Subscriber).OffsetInAudioFrames;
  FQuartzQuantizationBoundary::operator=
            (&(this->AudioComponentData).AnticipatoryBoundary,&param_1->AnticipatoryBoundary);
  (this->AudioComponentData).CommandID = param_1->CommandID;
  return;
}

