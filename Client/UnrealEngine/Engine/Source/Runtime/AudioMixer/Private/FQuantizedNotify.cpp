// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 8

// FQuantizedNotify @ 14653d240

/* WARNING: Enum "Type": Some values do not have unique names */

FQuantizedNotify * __thiscall
Audio::FQuantizedNotify::FQuantizedNotify(FQuantizedNotify *this,float param_1)

{
  IQuartzQuantizedCommand::IQuartzQuantizedCommand((IQuartzQuantizedCommand *)this);
  this->OffsetInMs = param_1;
  this->_padding_ = (longlong)&___7FQuantizedNotify_Audio__6B_;
  (this->OwningClockPtr).Object = (FQuartzClock *)0x0;
  (this->OwningClockPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SampleRate = 0.0;
  this->bIsCanceled = false;
  return this;
}

// ~FQuantizedNotify @ 146540c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuantizedNotify::~FQuantizedNotify(FQuantizedNotify *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningClockPtr).SharedReferenceCount.ReferenceController);
  IQuartzQuantizedCommand::~IQuartzQuantizedCommand((IQuartzQuantizedCommand *)this);
  return;
}

// GetCommandName @ 146555b30

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall Audio::FQuantizedNotify::GetCommandName(FQuantizedNotify *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = FQuantizedNotifyName;
  return in_RDX;
}

// GetCommandType @ 146555d30

/* WARNING: Enum "Type": Some values do not have unique names */

EQuartzCommandType __thiscall Audio::FQuantizedNotify::GetCommandType(FQuantizedNotify *this)

{
  return Notify;
}

// GetDeepCopyOfDerivedObject @ 1465562b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::IQuartzQuantizedCommand,1> * __thiscall
Audio::FQuantizedNotify::GetDeepCopyOfDerivedObject
          (FQuantizedNotify *this,
          TSharedPtr<Audio::IQuartzQuantizedCommand,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IQuartzQuantizedCommand *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFQuantizedNotify_Audio___00_SharedPointerInternals__6B_
    ;
    IQuartzQuantizedCommand::IQuartzQuantizedCommand((IQuartzQuantizedCommand *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&___7FQuantizedNotify_Audio__6B_;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    *(undefined1 *)&pTVar3[6].SharedReferenceCount = 0;
    if ((IQuartzQuantizedCommand *)(pTVar3 + 1) == (IQuartzQuantizedCommand *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IQuartzQuantizedCommand *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// OnQueuedCustom @ 146565ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedNotify::OnQueuedCustom
          (FQuantizedNotify *this,FQuartzQuantizedCommandInitInfo *param_1)

{
  this->SampleRate = param_1->SampleRate;
  return;
}

// OverrideFramesUntilExec @ 146566110

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Audio::FQuantizedNotify::OverrideFramesUntilExec(FQuantizedNotify *this,int param_1)

{
  float fVar1;
  
  fVar1 = this->OffsetInMs * __real_3a83126f * this->SampleRate + (float)param_1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return (int)fVar1;
}

// RequiresAudioDevice @ 14656f0a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuantizedNotify::RequiresAudioDevice(FQuantizedNotify *this)

{
  return true;
}

