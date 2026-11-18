// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 1

// SetValue @ 148d41380

void __thiscall
TPromise<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::SetValue
          (TPromise<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
           *this,TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>
                 *param_1)

{
  TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->State).Object ==
      (TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
       *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->State).Object ==
        (TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
         *)0x0) {
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
  }
  this_00 = (this->State).Object;
  if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FDeviceSwapResult **)(this_00->Result).Pad = param_1->Ptr;
  param_1->Ptr = (FDeviceSwapResult *)0x0;
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

