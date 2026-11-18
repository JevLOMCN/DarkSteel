// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 1

// DestroyObject @ 148d3cc50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>,1>
                *this)

{
  TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::
  ~TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
            ((TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
              *)&this->ObjectStorage);
  return;
}

