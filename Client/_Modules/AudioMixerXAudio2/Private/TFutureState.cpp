// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 1

// ~TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_> @ 148d3b960

void __thiscall
TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::
~TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
          (TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
           *this)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((this->field_0x68 != '\0') &&
     (puVar1 = *(undefined8 **)(this->Result).Pad, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar2 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar2 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000148d3b9bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

