// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 9

// FQuantizedPlayCommand @ 14653d290

/* WARNING: Enum "Type": Some values do not have unique names */

FQuantizedPlayCommand * __thiscall
Audio::FQuantizedPlayCommand::FQuantizedPlayCommand(FQuantizedPlayCommand *this)

{
  IQuartzQuantizedCommand::IQuartzQuantizedCommand((IQuartzQuantizedCommand *)this);
  this->SourceID = -1;
  this->_padding_ = (longlong)&___7FQuantizedPlayCommand_Audio__6B_;
  (this->OwningClockPtr).Object = (FQuartzClock *)0x0;
  (this->OwningClockPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsCanceled = false;
  return this;
}

// CancelCustom @ 146549040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuantizedPlayCommand::CancelCustom(FQuantizedPlayCommand *this)

{
  FQuartzClock *pFVar1;
  FQuartzClockManager *pFVar2;
  FMixerDevice *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMixerSourceManager *this_00;
  
  pFVar1 = (this->OwningClockPtr).Object;
  this->bIsCanceled = true;
  if (pFVar1 != (FQuartzClock *)0x0) {
    pFVar2 = pFVar1->OwningClockManagerPtr;
    if ((pFVar2 == (FQuartzClockManager *)0x0) ||
       (pFVar3 = pFVar2->MixerDevice, pFVar3 == (FMixerDevice *)0x0)) {
      this_00 = (FMixerSourceManager *)0x0;
    }
    else {
      this_00 = FMixerDevice::GetSourceManager(pFVar3);
    }
    if (((this->OwningClockPtr).Object == (FQuartzClock *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = ((this->OwningClockPtr).Object)->OwningClockManagerPtr;
    if ((((pFVar2 != (FQuartzClockManager *)0x0) &&
         (pFVar3 = pFVar2->MixerDevice, pFVar3 != (FMixerDevice *)0x0)) &&
        (this_00 != (FMixerSourceManager *)0x0)) &&
       (bVar5 = FMixerDevice::IsAudioRenderingThread(pFVar3), bVar5)) {
      FMixerSourceManager::UnPauseSoundForQuantizationCommand(this_00,this->SourceID);
      FMixerSourceManager::CancelQuantizedSound(this_00,this->SourceID);
    }
  }
  return;
}

// GetCommandName @ 146555b70

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall Audio::FQuantizedPlayCommand::GetCommandName(FQuantizedPlayCommand *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = PlayCommandName;
  return in_RDX;
}

// GetCommandType @ 146555d50

/* WARNING: Enum "Type": Some values do not have unique names */

EQuartzCommandType __thiscall
Audio::FQuantizedPlayCommand::GetCommandType(FQuantizedPlayCommand *this)

{
  return PlaySound;
}

// GetDeepCopyOfDerivedObject @ 146556490

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::IQuartzQuantizedCommand,1> * __thiscall
Audio::FQuantizedPlayCommand::GetDeepCopyOfDerivedObject
          (FQuantizedPlayCommand *this,
          TSharedPtr<Audio::IQuartzQuantizedCommand,1> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FQuantizedPlayCommand *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FQuartzClock *pFVar5;
  code *pcVar6;
  bool bVar7;
  TSharedRef<Audio::FQuantizedPlayCommand,1> *pTVar8;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar9;
  TSharedRef<Audio::FQuantizedPlayCommand,1> local_28;
  FQuartzClock *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pTVar8 = MakeShared<Audio::FQuantizedPlayCommand,1>(&local_28);
  pTVar2 = (pTVar8->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar8->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pFVar3 == (FQuantizedPlayCommand *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = (this->OwningClockPtr).SharedReferenceCount.ReferenceController;
  pFVar5 = (this->OwningClockPtr).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = (pFVar3->OwningClockPtr).Object;
  pTStack_10 = (pFVar3->OwningClockPtr).SharedReferenceCount.ReferenceController;
  (pFVar3->OwningClockPtr).Object = pFVar5;
  (pFVar3->OwningClockPtr).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  iVar1 = this->SourceID;
  if (pFVar3 == (FQuantizedPlayCommand *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar3->SourceID = iVar1;
  __return_storage_ptr__->Object = (IQuartzQuantizedCommand *)pFVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// OnFinalCallbackCustom @ 1465634f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedPlayCommand::OnFinalCallbackCustom(FQuantizedPlayCommand *this,int param_1)

{
  FQuartzClockManager *pFVar1;
  FMixerDevice *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMixerSourceManager *pFVar5;
  FQuartzClock *pFVar6;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar7;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> local_18;
  
  pFVar6 = (this->OwningClockPtr).Object;
  if (((((pFVar6 == (FQuartzClock *)0x0) ||
        (pFVar1 = pFVar6->OwningClockManagerPtr, pFVar1 == (FQuartzClockManager *)0x0)) ||
       (pFVar2 = pFVar1->MixerDevice, pFVar2 == (FMixerDevice *)0x0)) ||
      (pFVar5 = FMixerDevice::GetSourceManager(pFVar2), pFVar5 == (FMixerSourceManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningClockPtr && OwningClockPtr->GetSourceManager()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerQuantizedCommands.cpp"
                         ,0x33,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->bIsCanceled == false) {
    pFVar6 = (this->OwningClockPtr).Object;
    if (pFVar6 != (FQuartzClock *)0x0) {
      pFVar1 = pFVar6->OwningClockManagerPtr;
      if (((pFVar1 == (FQuartzClockManager *)0x0) ||
          (pFVar2 = pFVar1->MixerDevice, pFVar2 == (FMixerDevice *)0x0)) ||
         (pFVar5 = FMixerDevice::GetSourceManager(pFVar2), pFVar5 == (FMixerSourceManager *)0x0)) {
        pFVar6 = TSharedPtr<Audio::FQuartzClock,1>::operator->(&this->OwningClockPtr);
        pTVar7 = TSharedPtr<Audio::IQuartzQuantizedCommand,1>::
                 TSharedPtr<Audio::IQuartzQuantizedCommand,1><Audio::FQuantizedPlayCommand>
                           (&local_18,this);
        FQuartzClock::CancelQuantizedCommand(pFVar6,pTVar7);
      }
      else {
        FMixerSourceManager::SetSubBufferDelayForSound(pFVar5,this->SourceID,param_1);
        FMixerSourceManager::UnPauseSoundForQuantizationCommand(pFVar5,this->SourceID);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014656356d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this);
  return;
}

// OnQueuedCustom @ 146565b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedPlayCommand::OnQueuedCustom
          (FQuantizedPlayCommand *this,FQuartzQuantizedCommandInitInfo *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FQuartzClock *pFVar2;
  FQuartzClockManager *pFVar3;
  FMixerDevice *this_00;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FMixerSourceManager *this_01;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar7;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> local_18;
  
  pTVar1 = (param_1->OwningClockPointer).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->OwningClockPointer).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->OwningClockPtr).SharedReferenceCount.ReferenceController;
  (this->OwningClockPtr).Object = pFVar2;
  (this->OwningClockPtr).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  this->SourceID = param_1->SourceID;
  this->bIsCanceled = false;
  if ((this->OwningClockPtr).Object == (FQuartzClock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = ((this->OwningClockPtr).Object)->OwningClockManagerPtr;
  if ((pFVar3 != (FQuartzClockManager *)0x0) &&
     (this_00 = pFVar3->MixerDevice, this_00 != (FMixerDevice *)0x0)) {
    this_01 = FMixerDevice::GetSourceManager(this_00);
    if (this_01 != (FMixerSourceManager *)0x0) {
      FMixerSourceManager::PauseSoundForQuantizationCommand(this_01,this->SourceID);
      return;
    }
  }
  pFVar2 = (this->OwningClockPtr).Object;
  if (pFVar2 == (FQuartzClock *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6476347362770944038>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerQuantizedCommands.cpp"
                       ,0x26,"OwningClockPtr");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pTVar7 = TSharedPtr<Audio::IQuartzQuantizedCommand,1>::
             TSharedPtr<Audio::IQuartzQuantizedCommand,1><Audio::FQuantizedPlayCommand>
                       (&local_18,this);
    FQuartzClock::CancelQuantizedCommand(pFVar2,pTVar7);
  }
  return;
}

// OverrideFramesUntilExec @ 146566140

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Audio::FQuantizedPlayCommand::OverrideFramesUntilExec(FQuantizedPlayCommand *this,int param_1)

{
  return param_1;
}

// RequiresAudioDevice @ 14656f0b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuantizedPlayCommand::RequiresAudioDevice(FQuantizedPlayCommand *this)

{
  return true;
}

