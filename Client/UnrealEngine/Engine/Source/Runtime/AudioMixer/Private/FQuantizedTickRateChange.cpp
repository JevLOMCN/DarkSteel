// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 6

// GetCommandName @ 146555bb0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall Audio::FQuantizedTickRateChange::GetCommandName(FQuantizedTickRateChange *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TickRateChangeCommandName;
  return in_RDX;
}

// GetCommandType @ 146555d70

/* WARNING: Enum "Type": Some values do not have unique names */

EQuartzCommandType __thiscall
Audio::FQuantizedTickRateChange::GetCommandType(FQuantizedTickRateChange *this)

{
  return TickRateChange;
}

// GetDeepCopyOfDerivedObject @ 146556700

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::IQuartzQuantizedCommand,1> * __thiscall
Audio::FQuantizedTickRateChange::GetDeepCopyOfDerivedObject
          (FQuantizedTickRateChange *this,
          TSharedPtr<Audio::IQuartzQuantizedCommand,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FQuantizedTickRateChange *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FQuartzClock *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  TSharedRef<Audio::FQuantizedTickRateChange,1> *pTVar11;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar12;
  TSharedRef<Audio::FQuantizedTickRateChange,1> local_48;
  FQuartzClock *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  pTVar11 = MakeShared<Audio::FQuantizedTickRateChange,1>(&local_48);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if ((pFVar2 == (FQuantizedTickRateChange *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)(*pcVar5)();
    return pTVar12;
  }
  pTVar3 = (this->OwningClockPtr).SharedReferenceCount.ReferenceController;
  pFVar4 = (this->OwningClockPtr).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = (pFVar2->OwningClockPtr).Object;
  pTStack_30 = (pFVar2->OwningClockPtr).SharedReferenceCount.ReferenceController;
  (pFVar2->OwningClockPtr).Object = pFVar4;
  (pFVar2->OwningClockPtr).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  uVar6 = *(undefined4 *)&(this->TickRate).FramesPerTick;
  uVar7 = *(undefined4 *)((longlong)&(this->TickRate).FramesPerTick + 4);
  uVar8 = *(undefined4 *)&(this->TickRate).MillisecondsPerTick;
  uVar9 = *(undefined4 *)((longlong)&(this->TickRate).MillisecondsPerTick + 4);
  local_28 = (this->TickRate).SecondsPerTick;
  dStack_20 = (this->TickRate).ThirtySecondNotesPerMinute;
  local_18 = (this->TickRate).BeatsPerMinute;
  dStack_10 = (this->TickRate).SampleRate;
  if ((pFVar2 == (FQuantizedTickRateChange *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)(*pcVar5)();
    return pTVar12;
  }
  *(undefined4 *)&(pFVar2->TickRate).FramesPerTick = uVar6;
  *(undefined4 *)((longlong)&(pFVar2->TickRate).FramesPerTick + 4) = uVar7;
  *(undefined4 *)&(pFVar2->TickRate).MillisecondsPerTick = uVar8;
  *(undefined4 *)((longlong)&(pFVar2->TickRate).MillisecondsPerTick + 4) = uVar9;
  (pFVar2->TickRate).SecondsPerTick = local_28;
  (pFVar2->TickRate).ThirtySecondNotesPerMinute = dStack_20;
  (pFVar2->TickRate).BeatsPerMinute = local_18;
  (pFVar2->TickRate).SampleRate = dStack_10;
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

// IsClockAltering @ 146560e80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuantizedTickRateChange::IsClockAltering(FQuantizedTickRateChange *this)

{
  return true;
}

// OnFinalCallbackCustom @ 1465636a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedTickRateChange::OnFinalCallbackCustom(FQuantizedTickRateChange *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FQuartzClockTickRate local_38;
  
  if ((this->OwningClockPtr).Object == (FQuartzClock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.FramesPerTick = (this->TickRate).FramesPerTick;
  local_38.MillisecondsPerTick = (this->TickRate).MillisecondsPerTick;
  local_38.SecondsPerTick = (this->TickRate).SecondsPerTick;
  local_38.ThirtySecondNotesPerMinute = (this->TickRate).ThirtySecondNotesPerMinute;
  local_38.BeatsPerMinute = (this->TickRate).BeatsPerMinute;
  local_38.SampleRate = (this->TickRate).SampleRate;
  FQuartzClock::ChangeTickRate((this->OwningClockPtr).Object,&local_38,param_1);
  return;
}

// OnQueuedCustom @ 146565cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedTickRateChange::OnQueuedCustom
          (FQuantizedTickRateChange *this,FQuartzQuantizedCommandInitInfo *param_1)

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

