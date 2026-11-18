// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 6

// GetCommandName @ 146555bd0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall Audio::FQuantizedTransportReset::GetCommandName(FQuantizedTransportReset *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TransportResetCommandName;
  return in_RDX;
}

// GetCommandType @ 146555d80

/* WARNING: Enum "Type": Some values do not have unique names */

EQuartzCommandType __thiscall
Audio::FQuantizedTransportReset::GetCommandType(FQuantizedTransportReset *this)

{
  return TransportReset;
}

// GetDeepCopyOfDerivedObject @ 146556830

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::IQuartzQuantizedCommand,1> * __thiscall
Audio::FQuantizedTransportReset::GetDeepCopyOfDerivedObject
          (FQuantizedTransportReset *this,
          TSharedPtr<Audio::IQuartzQuantizedCommand,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FQuantizedTransportReset *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FQuartzClock *pFVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<Audio::FQuantizedTransportReset,1> *pTVar7;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar8;
  TSharedRef<Audio::FQuantizedTransportReset,1> local_28;
  FQuartzClock *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pTVar7 = MakeShared<Audio::FQuantizedTransportReset,1>(&local_28);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FQuantizedTransportReset *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pTVar3 = (this->OwningClockPtr).SharedReferenceCount.ReferenceController;
  pFVar4 = (this->OwningClockPtr).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = (pFVar2->OwningClockPtr).Object;
  pTStack_10 = (pFVar2->OwningClockPtr).SharedReferenceCount.ReferenceController;
  (pFVar2->OwningClockPtr).Object = pFVar4;
  (pFVar2->OwningClockPtr).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  __return_storage_ptr__->Object = (IQuartzQuantizedCommand *)pFVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// IsClockAltering @ 146560e90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuantizedTransportReset::IsClockAltering(FQuantizedTransportReset *this)

{
  return true;
}

// OnFinalCallbackCustom @ 146563720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedTransportReset::OnFinalCallbackCustom(FQuantizedTransportReset *this,int param_1)

{
  FFramesInTimeValue *_Dst;
  int *piVar1;
  FQuartzClock *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (((this->OwningClockPtr).Object == (FQuartzClock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->OwningClockPtr).Object;
  FQuartzTransportTimeStamp::Reset(&(pFVar2->Metronome).CurrentTimeStamp);
  _Dst = &(pFVar2->Metronome).FramesLeftInMusicalDuration;
  if (_Dst <= &(pFVar2->Metronome).PulseDurations) {
    memset(_Dst,0,0x90);
  }
  (pFVar2->Metronome).TimeSinceStart = 0.0;
  (pFVar2->Metronome).PulseDurationIndex = -1;
  if (((this->OwningClockPtr).Object == (FQuartzClock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar1 = &((this->OwningClockPtr).Object)->TickDelayLengthInFrames;
  *piVar1 = *piVar1 + param_1;
  return;
}

// OnQueuedCustom @ 146565d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedTransportReset::OnQueuedCustom
          (FQuantizedTransportReset *this,FQuartzQuantizedCommandInitInfo *param_1)

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

