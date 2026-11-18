// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// SetOwningClockPtr @ 146573680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzQuantizedCommandInitInfo::SetOwningClockPtr
          (FQuartzQuantizedCommandInitInfo *this,TSharedPtr<Audio::FQuartzClock,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FQuartzClock *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->OwningClockPointer).SharedReferenceCount.ReferenceController;
  (this->OwningClockPointer).Object = pFVar2;
  (this->OwningClockPointer).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->OwningClockPointer).Object == (FQuartzClock *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6300190760889220554>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.h"
                       ,0x236,"OwningClockPointer");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

